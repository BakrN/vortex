#ifndef TENSOR_CORE_H
#define TENSOR_CORE_H
#include "exe_unit.h"
#include "pipeline.h"
#include "types.h"
#include <vector>
#include <cstdint>
#include <stdexcept>


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
#define TC_OP_COUNT 4
#endif

#ifndef TC_MAT_BUF_DEPTH
#define TC_MAT_BUF_DEPTH 4
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


template <typename T>
struct FIFO {
    public:
        FIFO(size_t size): m_size(size) {
            assert(size) ;
            m_data.resize(size);
            m_tail = 0 ;
            m_head = 0 ;
            m_reserved =0 ;
        }
        ~FIFO(){
        }

        void push(T data){
            assert(!isFull());
            m_data[m_head] = data;
            m_head = (m_head + 1) % m_size;
            if( m_reserved){
                m_reserved-- ;
            }
        }

        T pop(){
            assert(!isEmpty());
            T data = m_data[m_tail];
            m_tail= (m_tail+ 1) % m_size;
            return data;
        }

        T& front(){
            return m_data[m_tail];
        }

        T& back(){
            return m_data[m_head];
        }

        bool isFull() {
            return (m_head+m_reserved+1) % m_size == m_tail;
        }

        bool isEmpty() {
            return m_head == m_tail;
        }

        void reserve(){
            m_reserved++;
        }
    private:
        std::vector<T> m_data;
        size_t m_head;
        size_t m_reserved;
        size_t m_tail;
        const size_t m_size;
} ;

struct MATMetadata {
      bool wb ;
      uint16_t  warp_id;
      uint16_t rd;
  };

template <typename T>
class ChunkVector{
    public:
        ChunkVector(int chunk_width, int num_chunks) : num_chunks(num_chunks), chunk_width(chunk_width) {
            chunks.resize(num_chunks);
        }

        void insert( T data, int chunk=-1) {
            [[unlikely]]
            if (chunk <0) {
                for (auto& e: chunks){
                    if (e.size() < chunk_width){
                        e.push_back(data);
                        return ;
                    }
                }
                // raise error here. ALL FULL
                assert(0);
            }
            else {
                assert(chunks[chunk].size() < chunk_width);
                chunks[chunk].push_back(data);
            }
        }

        // Shift chunks to the right
        void shiftRight() {

            assert(isFull()) ; // Before shifting make sure all chunks are full
            for (int i = 0 ; i < num_chunks-1; i++) {
                auto vec = chunks[num_chunks-1];
                chunks.erase(chunks.end());
                chunks.insert(chunks.begin(), vec);
            }
        }

        bool isFull() const {
            for (auto& e: chunks){
                if ((int)e.size() < chunk_width){
                    return false;
                }
            }
            return true;
        }

        T get(int index, int chunk) {
            return chunks[chunk][index];
        }

        T get(int index) {
            return chunks[index / chunk_width][index % chunk_width];
        }


    private:
        int num_chunks;
        int chunk_width;
        std::vector<std::vector<T>> chunks;
};

template <typename T>
class MATBuffer{
public:
  MATBuffer(size_t width, size_t max_depth, size_t num_regs=1) : m_width(width), m_max_depth(max_depth), m_rows(0) , num_regs(num_regs) {}
  MATBuffer() {}
  ~MATBuffer(){ }

    // Checks if the top row is full
  bool isTopFull() const { return m_data.front().second.isFull(); }

  bool isEmpty() const { return m_data.empty(); }

  bool isFull() const { return m_max_depth >= m_rows && isBackFull(); }

  void allocateRow(MATMetadata meta){
      m_data.push({meta,ChunkVector<T>(m_width,num_regs)});
      m_rows++;
  }

  // Attempts to insert a value
  void insert(const T& value, int reg=-1) {
    if (m_rows >= m_max_depth&& isTopFull()) {
      throw std::runtime_error("Structure is full");
    }

    m_data.front().second.insert(value, reg );
  }

  std::vector<T>& frontRow() { return m_data.front().second; }
  MATMetadata& frontMeta() { return m_data.front().first; }

  void popRow() {
    if (m_data.empty()) {
      throw std::runtime_error("Structure is empty");
    }
    m_data.pop();
    m_rows--;
  }

  auto depth(){
      return m_rows;
  }

  bool  isBackFull() const {
      if (m_data.empty())
        return false;
      return m_data.back().second.isFull(); }
  bool isBackEmpty() const { return m_data.empty() || m_data.back().second.empty(); }

  int width() const { return m_width; }


  // For shift operations used in matrix B
  void shiftRight(){
      m_data.front().second.shiftRight();
  }


private:
  size_t m_width;
  size_t m_max_depth;
  size_t m_rows; // Number of rows with data
  size_t num_regs;
  std::queue<std::pair<MATMetadata, ChunkVector<T>>> m_data;

};

template <typename T = uint32_t>
class AccBuffer { // Accumulator buffer
    public:
        AccBuffer(size_t num_rows,
                  size_t num_cols,
                  size_t num_acc_tiles
                  ) : m_num_rows(num_rows),
                      m_num_cols(num_cols),
                      m_num_acc_tiles(num_acc_tiles)
        {

        }
        ~AccBuffer() {
        }

        T getData(size_t row , size_t col) {
            return m_data[row][col];
        }

        void setData(size_t row, size_t col, T data) {
            m_data[row][col] = data;
        }


        void clear(){
            m_head_index = 0;
        }


    private:
        T** m_data;
        T* m_head;
        size_t m_num_rows;
        size_t m_num_cols;
        size_t m_num_acc_tiles;

        uint32_t m_head_index;
};

// Collection of PEs that share resource ( in this case it's B )
class PEGroup {
    public:

        PEGroup(
            // group parameters
            size_t num_pes,
            size_t operand_count,
            size_t input_mat_buf_depth, // Operands fifo depth
            size_t acc_buf_rows, // how much of the tile I can save  // State machine or compiler
            size_t acc_buf_cols, // how much of the tile I can save  // State machine or compiler
            size_t output_fifo_size,
            size_t num_acc_tiles
            );
        ~PEGroup();

        bool spaceToAccept(int wid ) {
            return !(m_mat_a[wid].isFull() ||  m_mat_b[wid].isFull() ||m_mat_c[wid].isFull());
        }

        size_t getNumPEs() {return m_num_pes; };

        bool spaceInOutput(size_t pe_id=0) {
            return !m_output_fifo[pe_id].isFull();
        }


        void setAccMat(size_t row, size_t col, uint32_t data);
        uint32_t getAccMat(size_t row, size_t col);

        void insertOutput(size_t pe_id, uint32_t warp_id, uint16_t reg, uint32_t val);

        std::tuple<uint32_t, uint16_t, uint32_t> popOutput(size_t pe_id);
        bool isOutputEmpty(size_t pe_id) { return m_output_fifo[pe_id].isEmpty(); }



        void popOperands(int wid) ;

        void allocateRow(MATMetadata meta, int wid){
            m_mat_a[wid].allocateRow(meta);
            m_mat_b[wid].allocateRow(meta);
            m_mat_c[wid].allocateRow(meta);
        }

        bool isReadyToFire(int wid) {
            auto& meta = m_mat_b[wid].frontMeta(); // allocate meta data in b (stepping will change it)

            return m_mat_a[wid].isTopFull() && m_mat_b[wid].isTopFull() && m_mat_c[wid].isTopFull() && // operands available
            (meta.wb ? !m_output_fifo[0].isFull() : true);
        }

        uint32_t step(int wid) {
            m_mat_b[wid].shiftRight();
            m_mat_b[wid].frontMeta().rd++;
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
        FIFO<std::tuple<uint32_t, uint16_t, uint32_t>>& getOutputFIFO(size_t pe) { return m_output_fifo[pe]; }


    private:

        MATBuffer<uint16_t> m_mat_a[MAX_NUM_WARPS]; // max number of warps
        MATBuffer<uint16_t> m_mat_b[MAX_NUM_WARPS];
        MATBuffer<uint32_t> m_mat_c[MAX_NUM_WARPS];
        AccBuffer<uint32_t> m_tile_accumulator;

        std::vector<FIFO<std::tuple<uint32_t, uint16_t, uint32_t>>> m_output_fifo; // 1 per PE (warp_id, reg, val)

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
            size_t acc_buf_rows;
            size_t acc_buf_cols;
            size_t output_fifo_size;
            size_t num_acc_tiles;
            // UNUSED FOR NOW
            size_t operand_count_b;

            void print(){
                std::cout << "TensorCore Config: " << std::endl;
                std::cout << "num_pe_groups: " << num_pe_groups << std::endl;
                std::cout << "execution_latency: " << execution_latency << std::endl;
                std::cout << "num_pes: " << num_pes << std::endl;
                std::cout << "operand_count: " << operand_count << std::endl;
                std::cout << "input_mat_buf_depth: " << input_mat_buf_depth << std::endl;
                std::cout << "acc_buf_rows: " << acc_buf_rows << std::endl;
                std::cout << "acc_buf_cols: " << acc_buf_cols << std::endl;
                std::cout << "output_fifo_size: " << output_fifo_size << std::endl;
                std::cout << "num_acc_tiles: " << num_acc_tiles << std::endl;
                std::cout << "operand_count_b: " << operand_count_b << std::endl;
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


        //SimPort<std::pair<uint16_t, uint32_t>> timing;// reg & result

        Config_t m_config;
        std::vector<PEGroup> m_pe_groups;
        std::queue<std::pair<uint64_t, std::tuple<MATMetadata, uint32_t, std::pair<uint32_t, uint32_t>>>> m_timing; // cycles to wait , (meta, result, grp,pe)

        std::queue<vortex::pipeline_trace_t*> m_traces;
        uint64_t m_cycle = 0;
};

#endif
