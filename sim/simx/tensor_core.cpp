#include "tensor_core.h"
#include "core.h"
#include "types.h"

// TODO: Internal accumulation and stepping (just add it to c fifo in model and have a flag option in the  trace_q thing)

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
            FIFO<uint32_t> c_fifo(config.thread_n) ;
            b[wid].push_back(b_fifo) ;
            c[wid].push_back(c_fifo) ;
            a[wid][lane].resize(config.thread_group_size,0);
        }
    }

    tile_reg.resize(config.num_threads);
    for (int lane = 0 ; lane < (int)m_config.num_threads;lane++) {
        tile_reg[lane].resize(config.num_tile_regs);
        for (int reg = 0 ; reg < (int)config.num_tile_regs; reg++) {
            tile_reg[lane][reg].resize(config.thread_n, 0) ;
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
                std::cout << "Dot product: \n" ;
                for (size_t i = 0 ; i < a.size();i++) {
                    uint16_t a_0= (uint16_t)(a[i] & 0xFFFF);
                    uint16_t a_1= (uint16_t)((a[i] & 0xFFFF0000) >> 16);

                    uint16_t b_0= (uint16_t) (b[i] & 0xFFFF);
                    uint16_t b_1= (uint16_t)((b[i] & 0xFFFF0000) >> 16);

                    float af_0 = float16(a_0).to_float32();
                    float af_1 = float16(a_1).to_float32();
                    std::cout  << " A: " << af_0 << " , " << af_1 << std::endl;

                    float bf_0 = float16(b_0).to_float32();
                    float bf_1 = float16(b_1).to_float32();

                    std::cout  << "B: " << bf_0 << " , " << bf_1 << std::endl;

                    sum += af_0 * bf_0 + af_1*bf_1;
                }
                sum += uint32_to_float32(c);
                std::cout  << "C: " << uint32_to_float32(c) << std::endl;
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
    spaceToAccept &= !(c[wid][0].isFull() && ((trace->tc_type & 0x000F) <3)) /*acc from reg*/;
    spaceToAccept &= !(b[wid][0].isFull() && (trace->tc_type & 0x00F0) == vortex::TCOpType::NORMAL_LOAD);
    if (!spaceToAccept) {
        return false;
    }
    std::cout << "Accepted input: " << *trace << std::endl;
    bool tile_acc = false;
    if ((trace->tc_type & 0x00F0)== vortex::TCOpType::NORMAL_LOAD) {
        for (size_t tid = 0; tid < m_config.num_threads; tid++) {
            uint32_t val ;
            auto& reg_file = core->warps_[wid]->freg_file_;

            if ((trace->tc_type & 0x000F) < 3)  { // acc reg  file
                val = reg_file[tid][trace->rsrc3] & 0xFFFFFFFF;
            } else {
                tile_acc = true;
            }
            if (!tile_acc) {
                std::cout << "tid(" << tid << ") reg("<< trace->rsrc3 << ") Adding c: " << uint32_to_float32(val) << std::endl;
                c[wid][tid].enqueue(val);
            } else {

                std::cout << "tid(" << tid << ") Adding c from regs: ";
                for (int i =0 ; i < m_config.thread_n; i++) {
                    val = tile_reg[tid][trace->rsrc3][i]; // do this thread_n number of times
                    c[wid][tid].enqueue(val);
                    std::cout << uint32_to_float32(val) << " , ";
                }
                std::cout << std::endl;
            }

            size_t row = tid / m_config.thread_group_size * m_config.thread_group_size; // shared between all threads in threadgroup
            size_t start_col = (tid % m_config.thread_group_size)*m_config.thread_n * m_config.thread_group_size ; // output col
            if constexpr (FUNC){
                std::cout << "tid(" << tid << ") Adding a row: ";
                for (size_t i = 0 ; i < m_config.thread_group_size; i++) {
                    uint32_t a_val = (uint32_t)(reg_file[row+i][trace->rsrc1] & 0xFFFFFFFF);
                    a[wid][tid][i] = a_val;
                    std::cout << a_val << " , ";
                }
                std::cout << std::endl;
            }

            for (size_t col = 0 ; col < m_config.thread_n; col++) {
                std::vector<uint32_t> b_vals(m_config.thread_group_size);
                if constexpr (FUNC){
                    std::cout << "tid(" << tid << ") reg(" << trace->rsrc2 << ") Adding b col: ";
                    for (size_t i = 0 ; i < m_config.thread_group_size; i++) {
                        uint32_t b_val = (uint32_t)(reg_file[start_col+i+col*m_config.thread_group_size][trace->rsrc2] & 0xFFFFFFFF);
                        std::cout << b_val << " , ";
                        b_vals[i]  = b_val;
                    }
                    std::cout << std::endl;
                }

                b[wid][tid].enqueue(std::move(b_vals));
                std::cout << "Test printing b values: " ;
                for (int i = 0 ; i < m_config.thread_group_size; i++) {
                    std::cout << b[wid][tid].front()[i]<<  " , " ;

                }
                std::cout << std::endl;
            }
        }
    } else{  // C load only (never happening if it's an accumulate buf(except final flush?)) ... have sepeate flush operation
        for (size_t tid =0 ; tid < m_config.num_threads;tid++) {
            uint32_t val ;
            if constexpr (FUNC){
                val = core->warps_[wid]->freg_file_[tid][trace->rsrc1] & 0xFFFFFFFF;
                std::cout << "tid(" << tid << ") Adding c: " << val << std::endl;
            }
            c[wid][tid].enqueue(val);
        }
    }
    if (!tile_acc ) {
        WritebackInfo info;
        info.reg_wb = true;
        info.trace = trace;
        trace_q[wid].push(info);
    } else {
        for (int i = 0 ; i < m_config.thread_n; i++) {
            WritebackInfo info;
            info.reg_wb = false;
            info.trace= nullptr;
            info.tile_reg = trace->rsrc3;
            info.idx = i ;
            trace_q[wid].push(info);
        }
    }
    return true;
}

template <bool FUNC>
void TensorCore::compute() { // this step is only for functional  portion
    for (int wid = 0  ; wid  < MAX_NUM_WARPS; wid++) {
        bool fired = false;

        if (trace_q[wid].empty()){
            continue;
        }
        auto wb_info = trace_q[wid].front();
        if (!c[wid][0].isEmpty() && (FUNC || (wb_info.reg_wb && out_fifo_credits) || !wb_info.reg_wb)) {
            fired = true;
            if constexpr (!FUNC){
                out_fifo_credits -= trace_q[wid].front().reg_wb;
            }
            for (size_t tid = 0 ; tid < m_config.num_threads; tid++) {
                if constexpr(FUNC) {
                    auto& b_vals = b[wid][tid].front();
                    auto c_val = c[wid][tid].front();
                    auto result = dot_product(Precision::FP16, Precision::FP32, a[wid][tid], b_vals, c_val);
                    uint64_t res = nan_box(result);
                    if (wb_info.reg_wb) {
                        core->warps_[wid]->freg_file_[tid][wb_info.trace->rdest] = res; // this line might be error prone... assumused rsrcx is initialized to -1 if unused
                        std::cout << "Wrote back res: " << uint32_to_float32(result) << " wid: " << wid
                        << " tid: " << tid << " reg: " << wb_info.trace->rdest << std::endl;
                } else {
                    tile_reg[tid][wb_info.tile_reg][wb_info.idx]= result;
                }
                }
                b[wid][tid].dequeue();
                c[wid][tid].dequeue();
            }

            trace_q[wid].pop();
            if constexpr (!FUNC) {
                if (wb_info.reg_wb){
                    commit_fifo.push({m_cycle+m_config.execution_latency, wb_info.trace});
                }
            }
        }
        if (fired) {
            break;
        }
    }
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

        } ){
    m_cycle = (uint64_t)(-1);
}

FuncTensorCore::~FuncTensorCore(){

}

void FuncTensorCore::execute(vortex::pipeline_trace_t* trace){
    std::cout << "FUNC: Handling input" << std::endl;
    bool accepted =handleInput<true>(trace);
    if (!accepted) {
        std::cout << "Failed to accept \n"  << std::endl;
    }
    std::cout << "FUNC: Compute" << std::endl;
    compute<true>();
}

TimingTensorCore::TimingTensorCore(const SimContext& ctx, vortex::Core*c, Config_t config) : TensorCore(c, config), vortex::ExeUnit(ctx, c, "TensorCore") {
}

TimingTensorCore::~TimingTensorCore(){

}

void TimingTensorCore::tick() {
    auto* trace=  queueCommit();
    if (trace) {
        Outputs.at(trace->wid).send(trace, 1) ;
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
}


