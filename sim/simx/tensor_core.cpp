#include "tensor_core.h"
#include "pipeline.h"
#include "core.h"
#include "types.h"
#include <numeric>


PEGroup::PEGroup(size_t num_pes,size_t operands_count,size_t input_mat_buf_depth, size_t acc_buf_rows, size_t acc_buf_cols, size_t output_fifo_size, size_t num_acc_tiles) :
    m_mat_a(num_pes * operands_count, input_mat_buf_depth),
    m_mat_b(operands_count*num_pes, input_mat_buf_depth),
    m_mat_c(operands_count*num_pes/2, input_mat_buf_depth), // /2 because acc is uin32_t
    m_tile_accumulator(acc_buf_rows,acc_buf_cols, num_acc_tiles, num_pes) ,

    m_num_pes(num_pes)
{
    for (size_t i = 0; i < num_pes; i++) {
        m_output_fifo.emplace_back(FIFO<std::tuple<uint32_t, uint16_t, uint32_t>>(output_fifo_size));
    }
}

void PEGroup::loadMatA(const std::vector<uint16_t>& data){
    for (auto& e: data)
        m_mat_a.insert(e);
}

void PEGroup::loadMatA(uint16_t e){
    m_mat_a.insert(e);
}


void PEGroup::loadMatB( const std::vector<uint16_t>& data){
    for (auto& e: data)
        m_mat_b.insert(e);
}

void PEGroup::loadMatB(uint16_t e){
    m_mat_b.insert(e);
}

void PEGroup::loadAccBuf(const std::vector<uint32_t>& data) {
    for (auto& e: data)
        m_mat_c.insert(e);
}

void PEGroup::loadAccBuf(uint32_t e){
    m_mat_c.insert(e);
}

void PEGroup::insertOutput(size_t pe_id,uint32_t warp_id,  uint16_t reg, uint32_t val){
    m_output_fifo[pe_id].push(std::make_tuple(warp_id,reg, val));
}
std::tuple<uint32_t , uint16_t, uint32_t> PEGroup::popOutput(size_t pe_id){
    return m_output_fifo[pe_id].pop();
}
void PEGroup::popOperands() {
    m_mat_a.popRow();
    m_mat_b.popRow();
    m_mat_c.popRow();
    m_cur_step = 0 ;
}

void PEGroup::setAccMat(size_t row, size_t col, uint32_t data){
    m_tile_accumulator.setData(row, col, data);
}

uint32_t PEGroup::getAccMat(size_t row, size_t col) {
    return m_tile_accumulator.getData(row, col);
}

PEGroup::~PEGroup() {
}

TensorCore::TensorCore(const SimContext& ctx, vortex::Core* core, Config_t config) : vortex::ExeUnit(ctx,core,  "TensorCore"), m_config(config) {
    // initialize the PE Groups
    for (size_t i = 0; i < config.num_pe_groups; i++)
        m_pe_groups.push_back(PEGroup(config.num_pes, config.operand_count, config.input_mat_buf_depth, config.acc_buf_rows, config.acc_buf_cols, config.output_fifo_size, config.num_acc_tiles));
}

void TensorCore::handleInput(){
    for (uint32_t i = 0; i < ISSUE_WIDTH; ++i) {
        // Handle inputs
        bool recieved_input = false;
        auto& input= Inputs.at(i) ; // retire trace

        bool space_to_accept = true;
        for (size_t i = 0 ; i < m_pe_groups.size(); i++) {
            space_to_accept &= m_pe_groups[i].spaceToAccept();
        }
        [[unlikely]]
        if (!input.empty() && !recieved_input && space_to_accept) { // and there is space in buffers
            recieved_input = true;
            vortex::pipeline_trace_t* trace = input.front();
            input.pop();
            // Load Inputs (assumption 1 in play)
            auto& warp = core_->warps_[trace->wid]; // can't handle multiple independent data streams for now (per row in matrix buffers can add warp tag) (also independent matrix tile buffers)

            #ifdef DEBUG
            // sync check call per thread
            for (auto i = 0 ; i < MAX_NUM_THREADS; i++ ) {
                if (!tmask[i]) {
                    if (i != MAX_NUM_THREADS-1) { // how to check if last thread is not synced?
                        if (tmask[i+1]) {
                            throw std::runtime_error("Threads not synchronized");
                        }
                    }
                }
            }
            #endif

            for (size_t t = 0 ; t < trace->tmask.count() ; t++) {
                std::pair<uint16_t, uint16_t> A;  // can only load 2 operands of A at a time
                std::pair<uint16_t, uint16_t> B;  // can only load 2 operands of B at a time
                uint32_t c ;
                auto grp = t % m_pe_groups.size();
                // find first N(=2) operands of A and B and possible c depending on type

                c = 0 ;
                if (trace->tc_type != vortex::TCOpType::NO_ACC) {
                    [[likely]]
                    if (trace->tc_type == vortex::TCOpType::ACC_REG) {
                        c = warp->freg_file_.at(t)[trace->rsrc3];
                        // fetch from mat tile accumulator
                    }
                    else  {
                        // use mat accumulate buffer
                        // fetch from accumulate buffer
                        auto row = 0; // row is dependent on tid
                        auto col = trace->rsrc3;
                        c = m_pe_groups[grp].getAccMat(row, col);
                    }
                }

                uint32_t a_val = (uint32_t)warp->freg_file_.at(t)[trace->rsrc1];
                uint32_t b_val = (uint32_t)warp->freg_file_.at(t)[trace->rsrc2];

                A.first = (a_val & 0xFFFF0000) >> 16;
                A.second = a_val & 0xFFFF ;

                B.first = (b_val & 0xFFFF0000) >> 16;
                B.second = b_val & 0xFFFF ;

                if (m_pe_groups[grp].mata().isBackFull()){
                    MATMetadata meta;
                    meta.wb = trace->wb;
                    meta.warp_id = trace->wid;
                    meta.rd = trace->rdest;
                    m_pe_groups[grp].mata().allocateRow(meta);
                }

                if (m_pe_groups[grp].matb().isBackFull()){
                    MATMetadata meta;
                    meta.wb = trace->wb;
                    meta.warp_id = trace->wid;
                    meta.rd = trace->rdest;
                    m_pe_groups[grp].matb().allocateRow(meta);
                }

                if (m_pe_groups[grp].matc().isBackFull()){
                    MATMetadata meta;
                    meta.wb = trace->wb;
                    meta.warp_id = trace->wid;
                    meta.rd = trace->rdest;
                    m_pe_groups[grp].matc().allocateRow(meta);
                }

                m_pe_groups[grp].loadMatA(A.first);
                m_pe_groups[grp].loadMatA(A.second);

                m_pe_groups[grp].loadMatB(B.first);
                m_pe_groups[grp].loadMatB(B.second);

                m_pe_groups[grp].loadAccBuf(c);
                }
                // queue up trace if it fills up row and wb
                // Only valid with parallel loading
                bool add_trace = true;
                for (size_t grp = 0 ; grp < m_pe_groups.size(); grp++) {
                    if (!(m_pe_groups[grp].mata().isBackFull() && m_pe_groups[grp].matb().isBackFull() && m_pe_groups[grp].matc().isBackFull())) {
                        add_trace = false;
                        break;
                    }
                }
                if (add_trace) {
                    m_traces.push(trace);
                }
            }
            // accept
        }



}

void TensorCore::compute(){
    for(size_t grp = 0 ; grp < m_pe_groups.size(); grp++) {
        if (m_pe_groups[grp].matb().isTopFull() && m_pe_groups[grp].getStep() == m_config.num_pes){
            m_pe_groups[grp].popOperands();
            continue;
        }
        if (m_pe_groups[grp].isReadyToFire()){ // let's assume i always write back for now
            MATMetadata meta = m_pe_groups[grp].matb().frontMeta();
            for (size_t pe = 0 ; pe < m_pe_groups[grp].getNumPEs(); pe++) {
                // calculate all results
                // step and pop
                auto& A = m_pe_groups[grp].mata().frontRow();
                auto& B = m_pe_groups[grp].matb().frontRow();
                auto& C = m_pe_groups[grp].matc().frontRow();

                uint32_t result = std::inner_product(A.begin()+pe*m_config.operand_count, A.begin()+(pe+1)*m_config.operand_count, B.begin()+pe*m_config.operand_count, 0);
                result += C[pe];

                // queue
                m_timing.push({m_cycle+m_config.execution_latency+1, {meta, result, {grp, pe}}});
                // step
            }

            if(meta.wb) { // reserve in queue
                m_pe_groups[grp].reserveOutput();
            }
            m_pe_groups[grp].step();
        }
    }
}

void TensorCore::queueToOutput(){
    while(!m_timing.empty()){

        auto& e = m_timing.front();
        if (e.first == m_cycle) {
            auto& [meta, result, pe_id] = e.second;
            auto& [grp, pe] = pe_id;

            m_pe_groups[grp].insertOutput(pe, meta.warp_id, meta.rd, result);
            m_timing.pop();
        }else {
            break;
        }
    }
}

void TensorCore::drainOutQueue(){
    // need a better way to propagate backpressure at the output (or not?)
    // write result in register

    // writeback results
    for (size_t grp = 0 ; grp < m_config.num_pe_groups; grp++) {
        for (size_t pe = 0 ; pe < m_config.num_pes; pe++) {
            if(m_pe_groups[grp].getOutputFIFO(pe).isFull()) {
                auto [warp_id, reg, val] = m_pe_groups[grp].popOutput(pe);
                auto& warp = core_->warps_[warp_id];
                warp->freg_file_.at(pe)[reg] = val;
            }
        }
    }
    // send to output & retire trace
    vortex::pipeline_trace_t* trace = m_traces.front();
    m_traces.pop();
    Outputs.at(0).send(trace,1 );
}

void TensorCore::tick() {
    // FOR NOW I ASSUME PARALLEL LOADING (all pe groups are loaded at same time so only need to look at 1 group) (assumption 1)
    // Ensure all threads are synchronized before doing MMA instruction

    drainOutQueue();
    queueToOutput();
    compute();
    handleInput();

    m_cycle+= 1;

}

