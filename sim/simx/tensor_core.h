#ifndef TENSOR_CORE_H
#define TENSOR_CORE_H
#include "exe_unit.h"
#include "types.h"
#include <cstdint>
#include "tc_helper.h"
#include "util/statistic.h"



#ifndef TC_THREAD_GROUP_SIZE
#define TC_THREAD_GROUP_SIZE 1
#endif

#ifndef NUM_THREADS
#define NUM_THREADS 2
#endif

#ifndef TC_THREAD_N
#define TC_THREAD_N 2
#endif

#ifndef TC_MAT_BUF_DEPTH
#define TC_MAT_BUF_DEPTH 2
#endif

#ifndef TC_OUTPUT_FIFO_SIZE
#define TC_OUTPUT_FIFO_SIZE 2
#endif

#ifndef TC_EXECUTION_LAT
#define TC_EXECUTION_LAT 2
#endif

#ifndef TC_NUM_TILE_REGS
#define TC_NUM_TILE_REGS 1
#endif

#ifndef TC_NUM_TILE_BUFS
#define TC_NUM_TILE_BUFS 1
#endif

class TensorCore {
    public :
        struct Config_t {

            // Core parameters
            size_t thread_group_size; // function of mac units
            size_t num_threads;
            size_t thread_n;
            size_t input_mat_buf_depth;
            size_t output_fifo_size;
            size_t execution_latency = 1;
            size_t num_tile_regs= 1;
            size_t num_tile_bufs = 1;
            void print() const{
            }
        };
        enum class Precision {
            FP32,
            FP16,
            BF16,
            INT32,
            INT16,
            INT8
        };


        TensorCore(vortex::Core*, Config_t config);
        ~TensorCore();

    protected:
        Config_t m_config;
        uint64_t m_cycle = 0;
        uint32_t m_step = 0  ;
        statistics::Statistic* mac_fire;
        // Ticks functions
        template <bool FUNC>
        bool handleInput(vortex::pipeline_trace_t* trace); // accepted
        template <bool FUNC>
        bool compute(); // queue output stuff after N cycles
        vortex::pipeline_trace_t* queueCommit(); // return <wis, trace> (in case of tile wb)
    private:
        struct WritebackInfo{
            bool reg_wb;
            vortex::pipeline_trace_t* trace;
            int tile_reg;
            int tile_buf;
            int idx;
        };
        // per warp per lane, vector reg
        std::vector<std::vector<std::vector<uint32_t>>> a;
        std::vector<std::vector<FIFO<std::vector<uint32_t>>>> b;
        std::vector<std::vector<FIFO<std::tuple<bool, uint32_t*, uint32_t>>>> c; // std tuple = ( bool: tile_accumulate,  uint32_t* to tile reg, uint32_t value if reg acc)
        std::vector<std::queue<WritebackInfo>> trace_q; // per warp , (reg wb / acc, reg)
        std::vector<std::vector<std::vector<uint32_t>>>  tile_reg;// lane, buf, tile reg [val] //(tile reg is for outer product & tile_n)

        uint32_t out_fifo_credits;
        std::queue<std::pair<uint64_t,vortex::pipeline_trace_t*>> commit_fifo;
        vortex::Core* core ;


        uint32_t dot_product(Precision input_precision, Precision output_precision, const std::vector<uint32_t>& a, const std::vector<uint32_t>& b , uint32_t c  );
};

class FuncTensorCore : public TensorCore { // writes back to register file (Unused in cluster level GEMMs)
    public:
        FuncTensorCore(vortex::Core*, Config_t config);
        ~FuncTensorCore();
        void execute(vortex::pipeline_trace_t* trace);
};

class TimingTensorCore : public TensorCore, public vortex::ExeUnit { // Basically doesn't write back to reg file (but only used to simulate timing) But used functionally as well in cluster-level GEMMs
    public:
        TimingTensorCore(const SimContext& ctx, vortex::Core*, Config_t config);
        ~TimingTensorCore();
        void tick () ;
    private:
        // Operations for System wide GEMM ( I have to check L2 cache misses etc... (how much I save))
};

#endif
