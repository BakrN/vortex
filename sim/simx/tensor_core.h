#ifndef TENSOR_CORE_H
#define TENSOR_CORE_H
#include "exe_unit.h"
#include <vector>
#include <cstdint>
#include <stdexcept>


template <typename T>
struct FIFO {
    public:
        FIFO(size_t size): m_size(size) {
            if (size)
                m_data = new T[size];
            else
                m_data = nullptr;
            m_tail = 0 ;
            m_head = 0 ;
            m_reserved =0 ;
        }
        ~FIFO(){
            if (m_size)
                delete[] m_data;
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
        T* m_data;
        size_t m_head;
        size_t m_reserved;
        size_t m_tail;
        const size_t m_size;
} ;


template <typename T>
class MATBuffer{
public:
  explicit MATBuffer(int width, int max_depth) : m_width(width), m_max_depth(max_depth), m_rows(1u) {}

  // Checks if the top row is full
  bool isTopFull() const { return m_data.front().size() == m_width; }

  bool isEmpty() const { return m_data.empty(); }

  bool isFull() const { return m_max_depth >= m_rows && isBackFull(); }

  // Attempts to insert a value
  void insert(const T& value) {
    if (m_max_depth >= m_rows && isTopFull()) {
      throw std::runtime_error("Structure is full");
    }

    if (m_data.front().size() == m_width) {
      m_data.push_back({});
      ++m_rows;
    }
    m_data.front().push_back(value);
  }

  std::vector<T>& frontRow() { return m_data.front(); }
  T& front() {
    if (m_data.empty()) {
      throw std::runtime_error("Structure is empty");
    }

    return m_data.front().front();
  }
  // Returns the top value and removes it
  T pop() {
    if (m_data.empty()) {
      throw std::runtime_error("Structure is empty");
    }

    if (m_data.front().empty()) {
      m_data.erase(m_data.begin());
      --m_rows;
    }

    T value = m_data.front().front();
    m_data.front().erase(m_data.front().begin());
    return value;
  }
  int width() const { return m_width; }


  // For shift operations used in matrix B
  void shiftRight(){
      T temp = m_data.front()[0] ;
      for (uint i =0 ; i < m_width; i++){
          auto tmp = m_data.front()[(i+1) % m_width];
          m_data.front()[(i+1) % m_width] = temp;
          temp = tmp;
      }
  }


private:
  int m_width;
  int m_max_depth;
  int m_rows; // Number of rows with data
  std::vector<std::vector<T>> m_data;
  bool  isBackFull() const { return m_data.back().size() == m_width; }
};

template <typename T = uint32_t>
class AccBuffer { // Accumulator buffer
    public:
        AccBuffer(size_t num_rows,
                  size_t num_cols,
                  size_t num_acc_tiles,
                  size_t head_width) : m_num_rows(num_rows),
                                       m_num_cols(num_cols),
                                       m_num_acc_tiles(num_acc_tiles),
                                       m_head_width(head_width){
            m_data = new T*[m_num_rows];
            for (size_t i = 0; i < m_num_rows; i++){
                m_data[i] = new T[m_num_cols];
            }

            m_head = new T[m_head_width];
            m_head_index = 0 ;
        }
        ~AccBuffer() {
            for (size_t i = 0; i < m_num_rows; i++){
                delete [] m_data[i];
            }
            delete [] m_data;
            delete [] m_head;
        }

        T getData(size_t row , size_t col) {
            return m_data[row][col];
        }

        void setData(size_t row, size_t col, T data) {
            m_data[row][col] = data;
        }

        void enqueue(T data) {
            if (m_head_index == m_head_width){
                throw std::runtime_error("Head is full");
            }
            m_head[m_head_index] = data;
            m_head_index = (m_head_index + 1) % m_head_width;
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
        size_t m_head_width;

        bool isHeadLoaded;
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

        bool spaceToAccept() {
            return !(m_mat_a.isFull() ||  m_mat_b.isFull() ||m_mat_c.isFull());
        }

        size_t getNumPEs() {return m_num_pes; };

        bool spaceInOutput(size_t pe_id=0) {
            return !m_output_fifo[pe_id].isFull();
        }

        void loadMatA( const std::vector<uint16_t>& data);
        void loadMatB(const std::vector<uint16_t>& data);
        void loadAccBuf(const std::vector<uint32_t>& data);

        void loadMatA(uint16_t);
        void loadMatB(uint16_t);
        void loadAccBuf(uint32_t);


        void setAccMat(size_t row, size_t col, uint32_t data);
        uint32_t getAccMat(size_t row, size_t col);

        void insertOutput(size_t pe_id, uint16_t reg, uint32_t val);

        std::pair<uint16_t, uint32_t> popOutput(size_t pe_id);
        void popOperands() ;

        bool isReadyToFire(bool wb= true) {
            return readyToFire && (wb ? m_output_fifo[0].isFull() : true);
        }

        void reserveOutput() {
            for (auto& e: m_output_fifo)
                e.reserve();
        }

        std::vector<uint32_t> fire(bool wb = true) ;

    private:

        void updateRdyToFire(){
            readyToFire = m_mat_a.isTopFull() && m_mat_b.isTopFull() && m_mat_c.isTopFull();
        }

        MATBuffer<uint16_t> m_mat_a;
        MATBuffer<uint16_t> m_mat_b;
        MATBuffer<uint32_t> m_mat_c;
        AccBuffer<uint32_t> m_tile_accumulator;

        std::vector<FIFO<std::pair<uint16_t, uint32_t>>> m_output_fifo; // 1 per PE (reg, val)

        size_t m_num_pes;
        bool stepping = false;
        size_t cur_step = 0;


        bool readyToFire = false;

};

class TensorCore : public vortex::ExeUnit{
    public :
        struct Config_t {
            // Core parameters
            size_t num_pe_groups;
            // PE Group parameter
            size_t num_pes;
            size_t operand_count;
            size_t input_mat_buf_depth;
            size_t acc_buf_rows;
            size_t acc_buf_cols;
            size_t output_fifo_size;
            size_t num_acc_tiles;
        };
        TensorCore(const SimContext& ctx, vortex::Core*, Config_t config);
        void tick();
    private:
        Config_t m_config;
        std::vector<PEGroup> m_pe_groups;
};

#endif
