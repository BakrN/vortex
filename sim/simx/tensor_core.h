#ifndef TENSOR_CORE_H
#define TENSOR_CORE_H
#include "exe_unit.h"
#include "types.h"
#include <cstdint>
#include "tc_helper.h"


#ifndef TC_NUM_PES
#define TC_NUM_PES 2
#endif

#ifndef TC_NUM_PE_GROUPS
#define TC_NUM_PE_GROUPS 2
#endif

#ifndef TC_EXECUTION_LAT
#define TC_EXECUTION_LAT 8
#endif

#ifndef TC_OP_COUNT
#define TC_OP_COUNT 2
#endif

#ifndef TC_MAT_BUF_DEPTH
#define TC_MAT_BUF_DEPTH 3
#endif

#ifndef TC_ACC_BUF_ROWS // tileRows
#define TC_ACC_BUF_ROWS 4
#endif

#ifndef TC_ACC_BUF_COLS // tileCols
#define TC_ACC_BUF_COLS 4
#endif

#ifndef TC_OUTPUT_FIFO_SIZE
#define TC_OUTPUT_FIFO_SIZE 4
#endif

#ifndef TC_NUM_ACC_TILES
#define TC_NUM_ACC_TILES 4
#endif


// Collection of PEs that share resource ( in this case it's B )
class PEGroup {
    public:

        PEGroup(
            // group parameters
            size_t num_pes,
            size_t operand_count,
            size_t input_mat_buf_depth, // Operands fifo depth
            size_t output_fifo_size,
            size_t num_acc_tiles
            );
        ~PEGroup();

        bool spaceToAccept(int wid ) {
            return !m_mat_a[wid].isFull() &&  !m_mat_b[wid].isFull() && !m_mat_c[wid].isFull();
        }

        size_t getNumPEs() {return m_num_pes; };


        void insertOutput(size_t pe_id, MATMetadata meta, uint32_t val);

        std::pair<MATMetadata, uint32_t> popOutput(size_t pe_id);

        void popOperands(int wid) ;

        void allocateRow(int wid){
            m_mat_a[wid].allocateRow();
            m_mat_b[wid].allocateRow();
            m_mat_c[wid].allocateRow();
        }

        MATMetadata& frontMeta(int wid) {
            return m_wb_meta[wid].front();
        }

        void popMeta(int wid) {
            m_wb_meta[wid].pop();
        }

        void addMeta(MATMetadata meta, int wid) {
            m_wb_meta[wid].push(meta) ;
        }

        bool isReadyToFire(int wid) {
            auto& meta = m_wb_meta[wid].front();
            return m_mat_a[wid].isFrontFull() && m_mat_b[wid].isFrontFull() && m_mat_c[wid].isFrontFull() && // operands available
            (meta.wb ? m_output_fifo[0].canReserve() : true);
        }

        uint32_t step(int wid) {
            m_mat_b[wid].shiftRight();

            return ++m_cur_step[wid];
        };

        uint32_t getStep(int wid) {
            return m_cur_step[wid] ;
        }



        void reserveOutput() {
            for (auto& e: m_output_fifo)
                e.reserve();
        }
        MATBuffer<uint16_t>& mata  (int wid) { return m_mat_a[wid]; }
        MATBuffer<uint16_t>& matb  (int wid) { return m_mat_b[wid]; }
        MATBuffer<uint32_t>& matc  (int wid) { return m_mat_c[wid]; }
        AccBuffer<uint32_t>& tileAccumulator(int wid) { return m_tile_accumulator[wid];}
        TCOutputFifo& getOutputFIFO(size_t pe) { return m_output_fifo[pe]; }


    private:

        MATBuffer<uint16_t> m_mat_a[MAX_NUM_WARPS]; // max number of warps
        MATBuffer<uint16_t> m_mat_b[MAX_NUM_WARPS];
        MATBuffer<uint32_t> m_mat_c[MAX_NUM_WARPS];
        std::vector<AccBuffer<uint32_t>> m_tile_accumulator;

        std::vector<TCOutputFifo> m_output_fifo; // 1 per PE (warp_id, reg, val)
        std::vector<std::queue<MATMetadata>> m_wb_meta;

        size_t m_num_pes;
        size_t m_cur_step[MAX_NUM_WARPS] ;

        bool readyToFire = false;

};

class TensorCore : public vortex::ExeUnit{
    public :
        struct Config_t {
            // Core parameters
            size_t num_pe_groups;
            size_t execution_latency = 8;
            // PE Group parameter
            size_t num_pes;
            size_t operand_count;
            size_t input_mat_buf_depth;
            size_t output_fifo_size;
            size_t num_acc_tiles;
            // UNUSED FOR NOW
            size_t num_dot_units=1;

            void print(){
                std::cout << "TensorCore Config: " << std::endl;
                std::cout << "num_pe_groups: " << num_pe_groups << std::endl;
                std::cout << "execution_latency: " << execution_latency << std::endl;
                std::cout << "num_pes: " << num_pes << std::endl;
                std::cout << "operand_count: " << operand_count << std::endl;
                std::cout << "input_mat_buf_depth: " << input_mat_buf_depth << std::endl;
                std::cout << "output_fifo_size: " << output_fifo_size << std::endl;
                std::cout << "num_acc_tiles: " << num_acc_tiles << std::endl;
                std::cout << "num_dot_units: " << num_dot_units<< std::endl;
            }
        };
        TensorCore(const SimContext& ctx, vortex::Core*, Config_t config);
        void tick();
        bool isBusy() ;

    private:
        // Ticks functions
        void handleInput();
        void compute(); // queue output stuff after N cycles
        void queueToOutput();
        void drainOutQueue();
        vortex::pipeline_trace_t* createInternalTrace(const MATMetadata&);


        Config_t m_config;
        std::vector<PEGroup> m_pe_groups;
        std::queue<std::pair<uint64_t, std::tuple<MATMetadata, uint32_t, std::pair<uint32_t, uint32_t>>>> m_timing; // cycles to wait , (meta, result, (grp,pe))

        uint64_t m_cycle = 0;

        uint64_t m_stat_out_traces = 0;

};

#endif
