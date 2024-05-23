#include "tensor_core.h"
#include "VX_config.h"
#include "pipeline.h"
#include "core.h"
#include "tc_helper.h"
#include "types.h"
#include <cstring>


PEGroup::PEGroup(size_t num_pes,size_t operands_count,size_t input_mat_buf_depth, size_t output_fifo_size, size_t num_acc_tiles)  :
    m_num_pes(num_pes)
{
    m_wb_meta.resize(MAX_NUM_WARPS);
    for (int i = 0 ; i < MAX_NUM_WARPS; i++) {
        m_mat_a[i] = MATBuffer<uint16_t>(operands_count, input_mat_buf_depth, num_pes);
        m_mat_b[i] = MATBuffer<uint16_t>(operands_count, input_mat_buf_depth, num_pes);
        m_mat_c[i] = MATBuffer<uint32_t>(num_pes, input_mat_buf_depth,num_pes);
        m_tile_accumulator.emplace_back(AccBuffer<uint32_t>(num_pes, num_pes, num_acc_tiles));
        m_cur_step[i] = 0;
    }
    for (size_t i = 0; i < num_pes; i++) {
        m_output_fifo.emplace_back(TCOutputFifo(i, num_pes, output_fifo_size));
    }
}

void PEGroup::insertOutput(size_t pe_id, MATMetadata meta, uint32_t val){
    m_output_fifo[pe_id].insert(std::make_pair(meta, val));
}
std::pair<MATMetadata, uint32_t> PEGroup::popOutput(size_t pe_id){
    auto res = m_output_fifo[pe_id].front();
    m_output_fifo[pe_id].pop() ;
    return res;
}
void PEGroup::popOperands(int wid) {
    m_mat_a[wid].popRow();
    m_mat_b[wid].popRow();
    m_mat_c[wid].popRow();
    m_cur_step[wid] = 0 ;
}


PEGroup::~PEGroup() {

}

TensorCore::TensorCore(const SimContext& ctx, vortex::Core* core, Config_t config) : vortex::ExeUnit(ctx,core,  "TensorCore"),  m_config(config) {
    m_config.print();
    // initialize the PE Groups
    for (size_t i = 0; i < config.num_pe_groups; i++) {
        PEGroup grp(config.num_pes, config.operand_count, config.input_mat_buf_depth, config.output_fifo_size, config.num_acc_tiles);
        m_pe_groups.emplace_back(grp);
    }
}

bool TensorCore::isBusy() {
    bool busy = false;
    for (int i = 0 ; i < ISSUE_WIDTH; i++) {
        busy |= !Inputs.at(i).empty();
        busy |= !Outputs.at(i).empty();
    }
    // all other queues in here are empty
    busy |= !m_timing.empty();

    // only need to check 1 pe group
    for (int i = 0 ; i < MAX_NUM_WARPS;i++)
        busy |= !m_pe_groups[0].mata(i).isNonAllocated();
    busy |= !m_pe_groups[0].getOutputFIFO(0).empty();

    // Print all conditions here:

    return busy;
}

vortex::pipeline_trace_t* TensorCore::createInternalTrace(const MATMetadata& meta){
    uint32_t tag = (meta.rd << 16) | (meta.warp_id << 4) | (int)vortex::RegType::Float;
    vortex::pipeline_trace_t* trace = new vortex::pipeline_trace_t(tag , core_->arch());
    trace->eop = true;// If i'm creating an internal trace then I'm sure I'm writing back
    trace->wb = true;
    trace->wid = meta.warp_id;
    trace->rdest = meta.rd;
    trace->rdest_type = vortex::RegType::Float;
    trace->exe_type = vortex::ExeType::TC;
    trace->tmask = meta.tmask;
    return trace;
}

void TensorCore::handleInput(){
    for (uint32_t i = 0; i < ISSUE_WIDTH; ++i) {
        // Handle inputs
        auto& input= Inputs.at(i) ;
        if (input.empty()) {
            continue;
        }

        vortex::pipeline_trace_t* trace = input.front();


        static int count = 0;

        // Load Inputs (assumption parallel loading)
        auto wid = trace->wid;
        auto& warp = core_->warps_[trace->wid]; // can't handle multiple independent data streams for now (per row in matrix buffers can add warp tag) (also independent matrix tile buffers)
        // check for space and allocate meta data
        bool accept_warp = true;
        for (size_t grp = 0 ; grp < m_config.num_pe_groups; grp++) {
            if (!m_pe_groups[grp].spaceToAccept(trace)) {
                accept_warp = false;
                break;
            }
        }
        if (accept_warp) {
            // check if tile is locked (if it is then don't accept warp) (acc source)
            if (trace->tc_type == vortex::TCOpType::ACC_BUF && m_pe_groups[0].tileAccumulator(trace->wid).isLocked(trace->rsrc3)) {
                break;
            }

            std:: cout << "Accepted input(" << count++ << "): " << *trace << std::endl;
            input.pop();
            if (trace->tc_type == vortex::TCOpType::FLUSH) {
                // m_timing
                std::cout << "Flush instruction " << std::endl;
                MATMetadata meta;
                meta.flush = true;
                meta.wb = true;
                meta.warp_id = wid;
                meta.rd = trace->rdest;
                meta.tmask = trace->tmask;
                meta.flush_tile = trace->rsrc1;


                for (size_t grp=0; grp < m_config.num_pe_groups; grp++) {
                    //for (size_t i= 0 ; i< m_config.num_pes; i++) {
                    m_pe_groups[grp].addMeta(meta, wid);
                    //}
                }
                break; // no need to go further in loop
            } else {

                if (trace->rdest_type != vortex::RegType::None) { // Done only once
                    for (size_t grp = 0 ; grp < m_config.num_pe_groups; grp++) {
                        MATMetadata meta;
                        meta.wb = trace->wb ; // reg wb
                        meta.warp_id = wid;
                        meta.rd = trace->rdest;
                        meta.tmask = trace->tmask;
                        meta.flush = false;
                        std::cout << "meta rd: " << meta.rd << std::endl;
                        if (!trace->wb) {
                            m_pe_groups[grp].tileAccumulator(trace->wid).lock(trace->rdest);
                            // Assumption: the wb to buffer instruction is only used once at the very last load into tc core. So I fill out the metas for consistency with the same write back to same tile
                            for (size_t i= 0 ; i< m_config.num_pes; i++) {
                                m_pe_groups[grp].addMeta(meta, wid);
                                //if (i >0 && grp==0 && trace->eop) {
                                //    core_->committed_instrs_++;
                                //}
                            }
                        } else {
                            m_pe_groups[grp].addMeta(meta, wid);
                        }
                    }
                }
                if (trace->eop) {
                    core_->committed_instrs_++;
                }
            }
        } else {
            break;
        }

        for (size_t t = 0 ; t < MAX_NUM_THREADS; t++) {
            if (!trace->tmask.test(t)) {
                continue;
            }
            auto grp = t/m_config.num_pes % m_pe_groups.size();
            auto& pe_grp = m_pe_groups[grp];

            std::pair<uint16_t, uint16_t> A;  // can only load 2 operands of A at a time
            std::pair<uint16_t, uint16_t> B;  // can only load 2 operands of B at a time
            uint32_t c =0;

            // find first N(=2) operands of A and B and possible c depending on type

            uint32_t a_val = (uint32_t)warp->freg_file_.at(t)[trace->rsrc1];
            uint32_t b_val = (uint32_t)warp->freg_file_.at(t)[trace->rsrc2];

            A.second= (a_val & 0xFFFF0000) >> 16;
            A.first = a_val & 0xFFFF ;

            float16 first(A.first) ;
            float16 second(A.second);
            std::cout << "Received A: " <<
            first.to_float32() << " " ;
            std::cout << second.to_float32();


            B.second = (b_val & 0xFFFF0000) >> 16;
            B.first = b_val & 0xFFFF ;

            first  = float16(B.first) ;
            second = float16(B.second);
            std::cout << "Received B: " <<
            first.to_float32() << " " ;
            std::cout << second.to_float32();



            if (pe_grp.mata(wid).isBackFull()  || pe_grp.mata(wid).isNonAllocated()){ // and can I add it
                MATMetadata meta;
                meta.wb = trace->wb;
                meta.warp_id = trace->wid;
                meta.rd = trace->rdest;
                std::cout << "A alloc Back full: " << pe_grp.mata(wid).isBackFull() << " Full: " << pe_grp.mata(wid).isFull() << " Empty: " << pe_grp.mata(wid).isNonAllocated() << std::endl;
                pe_grp.allocateRow( wid );
            }

            auto pe = t % m_config.num_pes;




            pe_grp.mata(wid).insert(A.first, pe );
            pe_grp.mata(wid).insert(A.second,pe );

            pe_grp.matb(wid).insert(B.first, pe);
            pe_grp.matb(wid).insert(B.second, pe);

            if (trace->tc_type == vortex::TCOpType::ACC_REG) {
                // assert back is not full
                assert(!pe_grp.matc(wid).isBackFull()) ;
                c = warp->freg_file_.at(t)[trace->rsrc3];
                pe_grp.matc(wid).insert(c,pe);
            }
            else if(trace->tc_type == vortex::TCOpType::ACC_BUF) { // Only mention this once
                // fetch from mat tile accumulator
                // (might need to stall if prev instruction not yet done...)
                assert(!pe_grp.matc(wid).isBackEmpty()); // assertion here that back is empty
                auto tile = trace->rsrc3;
                for (size_t col = 0;  col < m_config.num_pes; col++){
                    c = m_pe_groups[grp].tileAccumulator(wid).read(pe, tile);
                    pe_grp.matc(wid).insert(c, pe);
                }
            } else if (trace->tc_type == vortex::TCOpType::ACC_IMM) {
                pe_grp.matc(wid).zeroBackRow(); // should actually add option to fill here
            }

            // print t, pe , grp , warp_id
            std::cout << "t: " << t << " pe: " << pe << " grp: " << grp << " warp_id: " << wid
            << " size(a): " <<  pe_grp.mata(wid).size(pe) <<  " size(b): " <<  pe_grp.matb(wid).size(pe)
            << " size(c): " <<  pe_grp.matc(wid).size(pe) <<  " tf(a): " << pe_grp.mata(wid).isFrontFull()
            <<  " tf(b): " << pe_grp.matb(wid).isFrontFull()  <<  " tf(c): " << pe_grp.matc(wid).isFrontFull()
            << " depth " << pe_grp.mata(wid).depth() << std::endl;
        }

        delete trace;
        // accept
        }
}

void TensorCore::compute(){
    // queue up flush command (independent from comp)
    for (size_t wid = 0 ; wid < MAX_NUM_WARPS; wid++) {
        while (true) {
            bool stop = false;
            for (size_t grp = 0 ; grp < m_pe_groups.size(); grp++) {
                if (!m_pe_groups[grp].isMetaEmpty(wid) && m_pe_groups[grp].frontMeta(wid).flush){
                    uint64_t delay = (m_timing.empty()) ? 0 : m_timing.back().first+1;
                    m_timing.push({delay, {m_pe_groups[grp].frontMeta(wid), 0, {grp, 0}}});
                    m_pe_groups[grp].popMeta(wid);
                } else {
                    stop = true;
                    break;
                }
            }
            if (stop) {
                break;
            }
        }
    }
    // select a warp to process
    size_t used_dot_units = 0;
    for(int wid = 0 ; wid < MAX_NUM_WARPS;wid++) { // priority based
        bool fired = false;
        for(size_t grp = 0 ; grp < m_pe_groups.size(); grp++) {
            // pop already processed top row
            if (m_pe_groups[grp].matb(wid).isFrontFull() && m_pe_groups[grp].getStep(wid) == m_config.num_pes){
                m_pe_groups[grp].popOperands(wid);
                std::cout << "Compute: popped operands GRP: " << grp << std::endl;
                continue;
            }
            // otherwise process new loaded row
            else if (m_pe_groups[grp].isReadyToFire(wid) ){
                fired = true;
                //core_->issued_ins
                std::cout << "Compute: ready to fire GRP: " << grp <<  std::endl;
                MATMetadata meta = m_pe_groups[grp].frontMeta(wid);
                if (meta.flush) {
                    std::cout << "ERROR HERE ERRROR HERE " << std::endl;
                }
                for (size_t pe = 0 ; pe < m_config.num_pes; pe++) {
                    // calculate all results
                    // step and pop
                    auto& A = m_pe_groups[grp].mata(wid).frontRow(pe);
                    auto& B = m_pe_groups[grp].matb(wid).frontRow(pe);
                    auto& C = m_pe_groups[grp].matc(wid).frontRow(pe);

                    float int_result = 0 ;
                    for(size_t i = 0 ; i < m_config.operand_count; i++) {
                        float16 _a(A[i]);
                        float16 _b(B[i]);
                        float a = _a.to_float32();
                        float b = _b.to_float32();

                        int_result += a*b;
                    }
                    float C_f = uint32_to_float32(C[(pe + m_pe_groups[grp].getStep(wid)) % m_config.num_pes]);
                    int_result += C_f;
                    uint32_t result = float32_to_uint32(int_result);
                    // queue
                    m_timing.push({m_cycle+m_config.execution_latency+1, {meta, result, {grp, pe}}});
                }
                m_pe_groups[grp].popMeta(wid); // Consume meta

                if(meta.wb && !meta.flush) { // reserve in queue
                    m_pe_groups[grp].reserveOutput();
                }
                m_pe_groups[grp].step(wid);
            }
        }
        if (fired) {
            used_dot_units++;
        }
        if (used_dot_units == m_config.num_dot_units) {
            break;
        }
    }
}

void TensorCore::queueWriteback(){
    while(!m_timing.empty()){
        auto& e = m_timing.front();
        auto& [meta, result, pe_id] = e.second;

        if (e.first <= m_cycle) {
            auto& [grp, pe] = pe_id;
            float f_res = 0 ;
            float* ptr = reinterpret_cast<float*>(&result);
            std::memcpy(&f_res, ptr, sizeof(float));
            if (meta.flush) {
                // just queue directly to output. This might cause an inaccuracy but will not be too much. Maybe 1 cycle or so... (No backpressure on output port. Meaning I can accept other and start executing them. But most likely this wont change much of the perf. This just means (worst case scenario) an output fifo with size num_pes+input_mat_buf_depth))

                // for all pes in grp
                auto& warp = core_->warps_[meta.warp_id];
                for (size_t p = 0 ; p < m_config.num_pes; p++) {
                    uint32_t val  = m_pe_groups[grp].tileAccumulator(meta.warp_id).readShifted(p,meta.flush_tile);
                    warp->freg_file_.at(p + grp*m_config.num_pes)[meta.rd] = val; // TODO: Changed later for partial thread exec
                    float f_res = 0 ;
                    float* ptr = reinterpret_cast<float*>(&val);
                    std::memcpy(&f_res, ptr, sizeof(float));
                    std::cout << "Wrote back to RG from Tile" << grp << " t: " << p + grp*m_config.num_pes << " : warp_id: " << meta.warp_id << " reg: " << meta.rd << " val: " << f_res << std::endl;

                }
                if (grp == m_pe_groups.size()-1 ){  // only for last grp to avoid duplicates and free up scoreboard
                    auto* trace = createInternalTrace(meta);
                    std::cout << "Writeback TRACE: " << *trace << std::endl;
                    Outputs.at(meta.warp_id % ISSUE_WIDTH).send(trace,1 );
                }
            } else if (meta.wb) {
                m_pe_groups[grp].insertOutput(pe, meta, result);
                std::cout << "Queue to REG GRP " << grp << " pe: " << pe << " : warp_id: " << meta.warp_id << " reg: " << meta.rd << " val: " << f_res << std::endl;
            } else {
                m_pe_groups[grp].tileAccumulator(meta.warp_id).insert(result, pe, meta.rd);
                std::cout << "Queue to TILE GRP" << grp << " pe: " << pe << " : warp_id: " << meta.warp_id << " tile: " << meta.rd << " val: " << f_res << std::endl;
            }

            m_timing.pop();
        } else {
            break;
        }
    }
}

void TensorCore::drainOutQueue(){
    // need a better way to propagate backpressure at the output (or not?)
    // write result in register

    // writeback results
    bool commit = true;
    MATMetadata meta;
    for (size_t grp = 0 ; grp < m_config.num_pe_groups; grp++) {
        for (size_t pe = 0 ; pe < m_config.num_pes; pe++) {
            if(m_pe_groups[grp].getOutputFIFO(pe).empty() || !m_pe_groups[grp].getOutputFIFO(pe).shifted() ) { // if not empty and writing back to reg file
                commit = false;
            }
        }
    }

    // send to output & retire trace
    if (commit) {
        std::cout << "Commit " << std::endl;
        bool write_back = true;
        for (size_t grp = 0 ; grp < m_config.num_pe_groups; grp++) {
            for (size_t pe = 0 ; pe < m_config.num_pes; pe++) {
                auto [_meta, val] = m_pe_groups[grp].popOutput(pe);
                meta = _meta;
                if (_meta.wb) {
                    if (!write_back){
                        std::cout << "ERROR : NOT SUPPOSED TO HAPPEN" << std::endl;
                    }
                    auto& warp = core_->warps_[meta.warp_id];
                    warp->freg_file_.at(pe + grp*m_config.num_pes)[meta.rd] = val; // TODO: Changed later for partial thread exec
                    float f_res = 0 ;
                    float* ptr = reinterpret_cast<float*>(&val);
                    std::memcpy(&f_res, ptr, sizeof(float));
                    std::cout << "Wrote back to RG" << grp << " t: " << pe + grp*m_config.num_pes << " : warp_id: " << meta.warp_id << " reg: " << meta.rd << " val: " << f_res << std::endl;

                } else {
                    write_back = false;
                }
            }
        }

        if (write_back){
            core_->issued_instrs_++;
            m_stat_out_traces++;
            auto* trace = createInternalTrace(meta);
            std::cout << "Writeback TRACE: " << *trace << std::endl;
            Outputs.at(meta.warp_id % ISSUE_WIDTH).send(trace,1 );
        }
    }
}

void TensorCore::tick() {
    // FOR NOW I ASSUME PARALLEL LOADING (all pe groups are loaded at same time so only need to look at 1 group) (assumption 1)
    // Ensure all threads are synchronized before doing MMA instruction

    drainOutQueue();
    queueWriteback();
    compute();
    handleInput();

    m_cycle+= 1;

}

