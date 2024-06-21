#include "tensor_core.h"
#include "core.h"
#include "tc_helper.h"
#include "types.h"


inline uint64_t nan_box(uint32_t value) {
  uint64_t mask = 0xffffffff00000000;
  return value | mask;
}

TensorCore::TensorCore(vortex::Core* _core, Config_t config) :  m_config(config), m_cycle(0),out_fifo_credits(config.output_fifo_size),core(_core)  {
    a.resize(MAX_NUM_WARPS) ;
    b.resize(MAX_NUM_WARPS) ;
    c.resize(MAX_NUM_WARPS) ;
    trace_q.resize(MAX_NUM_WARPS);


    for (int wid = 0 ; wid < MAX_NUM_WARPS; wid++) {
        a[wid].resize(config.num_threads);
        for (int lane = 0; lane < (int)config.num_threads; lane++) {
            FIFO<std::vector<uint32_t>> b_fifo(config.thread_n) ;
            FIFO<std::tuple<bool, uint32_t*, uint32_t>> c_fifo(config.thread_n) ;
            b[wid].push_back(b_fifo) ;
            c[wid].push_back(c_fifo) ;
            a[wid][lane].resize(config.thread_group_size,0);
        }
    }

    tile_reg.resize(config.num_threads);
    for (int lane = 0 ; lane < (int)m_config.num_threads;lane++) {
        tile_reg[lane].resize(config.num_tile_bufs);
        for (int buf= 0 ; buf< (int)config.num_tile_bufs; buf++) {
            tile_reg[lane][buf].resize(config.num_tile_regs,0) ;
        }
    }
}

TensorCore::~TensorCore(){
}

uint32_t TensorCore::dot_product(Precision input_precision, Precision output_precision, const std::vector<uint32_t>& a, const std::vector<uint32_t>& b , uint32_t c  ){
    switch (input_precision) {
        case (Precision::FP16) : {
            if (output_precision == Precision::FP32) {
                float sum =0.0f;
                for (size_t i = 0 ; i < a.size();i++) {
                    uint16_t a_0= (uint16_t)(a[i] & 0xFFFF);
                    uint16_t a_1= (uint16_t)((a[i] & 0xFFFF0000) >> 16);

                    uint16_t b_0= (uint16_t) (b[i] & 0xFFFF);
                    uint16_t b_1= (uint16_t)((b[i] & 0xFFFF0000) >> 16);

                    float af_0 = float16(a_0).to_float32();
                    float af_1 = float16(a_1).to_float32();

                    float bf_0 = float16(b_0).to_float32();
                    float bf_1 = float16(b_1).to_float32();


                    sum += af_0 * bf_0 + af_1*bf_1;
                }
                sum += uint32_to_float32(c);
                return float32_to_uint32(sum);
            } else {

            }
        }
        default: {
            throw std::runtime_error("Unsupported precision format") ;
        }
    } // else if

}

template <bool FUNC>
bool TensorCore::handleInput(vortex::pipeline_trace_t* trace) {
    auto& wid = trace->wid ;

    bool spaceToAccept = true;
    spaceToAccept &= c[wid][0].isEmpty() || (!c[wid][0].isFull() && ((trace->tc_type & 0x00F0) == vortex::TCOpType::C_ONLY))/*acc from reg*/;
    spaceToAccept |= (trace->tc_type == vortex::TCOpType::FLUSH_INST && out_fifo_credits) ;
    if (!spaceToAccept) {
        return false;
    }
    if ((trace->tc_type & 0x00F0)== vortex::TCOpType::NORMAL_LOAD) {
        for (size_t tid = 0; tid < m_config.num_threads; tid++) {
            uint32_t val ;
            auto& reg_file = core->warps_[wid]->freg_file_;

            if ((trace->tc_type & 0x000F) == vortex::TCOpType::ACC_REG_WB_REG)  { // acc reg  file
                val = reg_file[tid][trace->rsrc3] & 0xFFFFFFFF;
                c[wid][tid].enqueue({false, nullptr, val});

            } else {// ACC_BUF_WB_BUF

                for (int i =0 ; i < (int)m_config.thread_n; i++) {
                    //
                    int reg = trace->rsrc3+i; // IN hw value encoded in imm
                    int buf = trace->wid / (NUM_WARPS /m_config.num_tile_bufs);
                    c[wid][tid].enqueue({true, &(tile_reg[tid][buf][reg]),0});
                }
            }

            size_t row = tid / m_config.thread_group_size * m_config.thread_group_size; // shared between all threads in threadgroup
            size_t start_col = (tid % m_config.thread_group_size)*m_config.thread_n * m_config.thread_group_size ; // output col
            if constexpr (FUNC){
                for (size_t i = 0 ; i < m_config.thread_group_size; i++) {
                    uint32_t a_val = (uint32_t)(reg_file[row+i][trace->rsrc1] & 0xFFFFFFFF);
                    a[wid][tid][i] = a_val;
                }
            }

            for (size_t col = 0 ; col < m_config.thread_n; col++) {
                std::vector<uint32_t> b_vals(m_config.thread_group_size);
                if constexpr (FUNC){
                    for (size_t i = 0 ; i < m_config.thread_group_size; i++) {
                        uint32_t b_val = (uint32_t)(reg_file[start_col+i+col*m_config.thread_group_size][trace->rsrc2] & 0xFFFFFFFF);
                        b_vals[i]  = b_val;
                    }
                }

                b[wid][tid].enqueue(std::move(b_vals));
            }
        }
    } else if (trace->tc_type != vortex::TCOpType::FLUSH_INST){  // C load only
        for (size_t tid =0 ; tid < m_config.num_threads;tid++) {
            if constexpr (FUNC){

                if ((trace->tc_type & 0x000F) == vortex::ACC_REG_WB_REG) { // reg acc
                    uint32_t val = core->warps_[wid]->freg_file_[tid][trace->rsrc1] & 0xFFFFFFFF;
                    c[wid][tid].enqueue({false, nullptr, val});
                } else {
                    // Error here.
                    std::abort();
                }

            } else {
                c[wid][tid].enqueue({}); // for timing enqueue whatever
            }
        }
    }
    WritebackInfo info;
    info.reg_wb = trace->wb;
    info.flush = trace->tc_type == vortex::TCOpType::FLUSH_INST;
    if (!info.reg_wb) {
        if constexpr (!FUNC) {
            core->committed_instrs_++;
        }
        // if acc buf

        for (int i = 0 ; i < (int)m_config.thread_n; i++) {
            info.trace= nullptr;
            info.tile_reg = trace->rdest +i;
            info.tile_buf = trace->wid / (NUM_WARPS /m_config.num_tile_bufs);

            trace_q[wid].push(info);
        }
        if constexpr (!FUNC) {
            delete trace;
        }
    } else {
        info.trace = trace;
        if (info.flush){
            info.tile_reg = (core->warps_[trace->wid]->ireg_file_[0][trace->rsrc1]) + trace->imm; // used as src addr All thread values should be the same
            info.tile_buf = trace->wid / (NUM_WARPS /m_config.num_tile_bufs);
        }

        trace_q[wid].push(info);
    }

    return true;
}

template <bool FUNC>
bool TensorCore::compute() { // this step is only for functional  portion
    for (int wid = 0  ; wid  < MAX_NUM_WARPS; wid++) {
        bool fired = false;

        if (trace_q[wid].empty()){
            continue;
        }
        auto wb_info = trace_q[wid].front();
        if ((!c[wid][0].isEmpty() && (FUNC || ((wb_info.reg_wb && out_fifo_credits) || !wb_info.reg_wb))) || wb_info.flush) {
            fired = true;
            if constexpr (!FUNC){
                out_fifo_credits -= trace_q[wid].front().reg_wb;
                mac_fire->addValue(!wb_info.flush) ;
                flush_inst->addValue(wb_info.flush);
            }
            for (size_t tid = 0 ; tid < m_config.num_threads; tid++) {
                if constexpr(FUNC) {
                    if (wb_info.flush) {
                        uint64_t res = nan_box(tile_reg[tid][wb_info.tile_buf][wb_info.tile_reg]);
                        core->warps_[wid]->freg_file_[tid][wb_info.trace->rdest] = res;
                        tile_reg[tid][wb_info.tile_buf][wb_info.tile_reg] = 0 ;

                        continue;
                    }
                    auto [c_tile_src, c_val_ptr, c_reg_val] = c[wid][tid].front();
                    uint32_t c_val = c_tile_src ? *c_val_ptr : c_reg_val;
                    auto& b_vals = b[wid][tid].front();
                    auto result = dot_product(Precision::FP16, Precision::FP32, a[wid][tid], b_vals, c_val);
                    if (wb_info.reg_wb) {
                        uint64_t res = nan_box(result);
                        core->warps_[wid]->freg_file_[tid][wb_info.trace->rdest] = res;


                    } else {
                        tile_reg[tid][wb_info.tile_buf][wb_info.tile_reg] = result;
                    }
                }
                if (!wb_info.flush) {
                    b[wid][tid].dequeue();
                    c[wid][tid].dequeue();
                }
            }

            trace_q[wid].pop();
            if constexpr (!FUNC) {
                if (wb_info.reg_wb){
                    auto delay = wb_info.flush ? 0 : m_config.execution_latency;
                    commit_fifo.push({m_cycle+delay, wb_info.trace});
                }
            }
        }
        if (fired) {
            if (FUNC) {
                return true;
            }
            break;
        }
    }
    return false;
}

vortex::pipeline_trace_t* TensorCore::queueCommit() {
    if (!commit_fifo.empty() && commit_fifo.front().first <= m_cycle) {
        out_fifo_credits+=1;
        auto trace = commit_fifo.front().second;
        commit_fifo.pop();
        return trace;
    }
    return nullptr;
}


FuncTensorCore::FuncTensorCore( vortex::Core* core, Config_t config) : TensorCore(core, Config_t {
            .thread_group_size   = config.thread_group_size,
            .num_threads         = config.num_threads,
            .thread_n            = config.thread_n,
            .input_mat_buf_depth = 1,
            .output_fifo_size    = 1,
            .execution_latency   = 0 ,
            .num_tile_regs       = config.num_tile_regs,
            .num_tile_bufs       = config.num_tile_bufs
        } ){
    m_cycle = (uint64_t)(-1);
}

FuncTensorCore::~FuncTensorCore(){

}

void FuncTensorCore::execute(vortex::pipeline_trace_t* trace){
    handleInput<true>(trace);
    while(compute<true>());
}

TimingTensorCore::TimingTensorCore(const SimContext& ctx, vortex::Core*c, Config_t config) : TensorCore(c, config), vortex::ExeUnit(ctx, c, "TensorCore") {
    mac_fire = SimPlatform::instance().get_stat_engine().registerStatistic(c->name()+".tensor_core.mac_fire");
    flush_inst = SimPlatform::instance().get_stat_engine().registerStatistic(c->name()+".tensor_core.flush_inst");
}

TimingTensorCore::~TimingTensorCore(){

}

void TimingTensorCore::tick() {
    auto* trace=  queueCommit();
    if (trace) {
        Outputs.at(trace->wid % ISSUE_WIDTH).send(trace, 1) ;
    }
    for (int i = 0 ; i < ISSUE_WIDTH ; i++) {
        auto& input = Inputs.at(i) ;
        if (input.empty()) {
            continue;
        }
        bool accepted = handleInput<false>(input.front()) ;
        if (accepted) {
            input.pop();
        }
    }
    compute<false>();
    m_cycle += 1;
}


