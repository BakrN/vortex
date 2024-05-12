#ifndef TC_HELPER_H
#define TC_HELPER_H

#include "types.h"
#include <cassert>
#include <cstdint>
#include <cstddef>
#include <cstring>
#include <vector>
#include <stdexcept>
#include <queue>
#include <limits>
#include <cmath>

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
            m_head = (m_head + 1) % (m_size+1);
            if( m_reserved){
                m_reserved-- ;
            }
        }

        T pop(){
            assert(!isEmpty());
            T data = m_data[m_tail];
            m_tail= (m_tail+ 1) % (m_size+1);
            return data;
        }

        T& front(){
            return m_data[m_tail];
        }

        T& back(){
            return m_data[m_head];
        }

        bool isFull() {
            return ((m_head+m_reserved+1) % (m_size+1)) == m_tail && !(m_head == 0 && m_tail == 0) ;
        }

        bool isEmpty() {
            return m_head == m_tail;
        }

        void reserve(){
            assert(!isFull());
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
    uint16_t warp_id;
    uint16_t rd;
    std::bitset<MAX_NUM_THREADS> tmask;
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
                throw std::runtime_error("All chunks are full");
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

        int size(int chunk) {
            return chunks[chunk].size();
        }

        int size() {
            int size = 0 ;
            for (auto& e: chunks){
                size += e.size();
            }
            return size;
        }

        bool empty() {
            for (auto& e: chunks){
                if (!e.empty()){
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

        std::vector<T>& getChunk(int chunk) {
            return chunks[chunk];
        }

        void fillZero() {
            while (!this->isFull()) {
                this->insert(0);
            }

        }


    private:
        int num_chunks;
        int chunk_width;
        std::vector<std::vector<T>> chunks;
};

template <typename T>
class MATBuffer{
public:
  MATBuffer(size_t width, size_t max_depth, size_t num_regs=1) : m_width(width), m_max_depth(max_depth), m_rows(0) , num_regs(num_regs) {

  }
  MATBuffer() {}
  ~MATBuffer(){ }
  bool  isBackFull() {
      if (m_data.empty())
        return false;
      return m_data.back().isFull(); }

    // Checks if the top row is full
  bool isFrontFull() const { return !m_data.empty() && m_data.front().isFull(); }

  bool isNonAllocated() const { return m_data.empty(); }

  bool isFull() { return m_rows >= m_max_depth && isBackFull(); }

  void allocateRow(){
      m_data.emplace(ChunkVector<T>(m_width,num_regs));
      m_rows++;
  }

  // Attempts to insert a value
  void insert(const T& value, int reg=-1) {
    if (m_rows >= m_max_depth&& isBackFull()) {
      throw std::runtime_error("Structure is full");
    }

    m_data.back().insert(value, reg);
  }

  std::vector<T>& frontRow(int chunk) { return m_data.front().getChunk(chunk); }

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

  bool isBackEmpty() { return m_data.empty() || m_data.back().empty(); }

  int width() { return m_width; }


  // For shift operations used in matrix B
  void shiftRight(){
      m_data.front().shiftRight();
  }

  int size(int chunk) {
      return m_data.front().size(chunk);
  }

  int size() {
      return m_data.front().size();
  }

  void zeroBackRow() {
      m_data.back().fillZero() ;
  }


private:
  size_t m_width;
  size_t m_max_depth;
  size_t m_rows; // Number of rows with data
  size_t num_regs;
  std::queue<ChunkVector<T>> m_data;

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


class TCOutputFifo {  // per pe
    public :
        TCOutputFifo(int pe, int num_pes, int fifo_depth): pe(pe), shared_pes(num_pes), max_depth(fifo_depth){
            num_elements=0;
            m_idx = 0 ;
        }
        ~TCOutputFifo(){}

        void insert(const std::pair<MATMetadata, uint32_t>& value)  {
            if (m_data.empty() || m_data.back().size()==(size_t)shared_pes ){
                m_data.emplace(std::vector<uint32_t>());
                m_data.back().emplace_back(value.second) ;

                m_meta.emplace(std::vector<MATMetadata>());
                m_meta.back().emplace_back(value.first) ;

                m_shifted.push(false) ;
            } else {
                m_data.back().emplace_back(value.second) ;
                m_meta.back().emplace_back(value.first) ;
                if (m_data.back().size()==(size_t)shared_pes){
                    for (int i = 0 ; i < pe ;i++){
                        shiftElementsRight();
                    }
                    m_shifted.back() = true;
                }
            }
        }

        void pop(){
            num_elements-= 1;
            m_idx +=1 ;
            if (m_idx == shared_pes){
                m_data.pop();
                m_meta.pop();
                m_shifted.pop();
                m_idx =0 ;
            }
        }

        std::pair<MATMetadata, uint32_t> front(){
            return {m_meta.front()[m_idx], m_data.front()[m_idx]};
        }

        void reserve() {
            num_elements++;
        }

        bool shifted(){
            return !m_shifted.empty() && m_shifted.front();
        }


        bool canReserve(){
            return num_elements < shared_pes * max_depth ;
        }

        bool empty(){
            return m_data.empty() ;
        }

    private:
        void shiftElementsRight(){
            assert(m_data.back().size()==(size_t)shared_pes) ; // Before shifting make sure all chunks are full

            std::vector<uint32_t>& v = m_data.back();
            uint32_t tmp = v[shared_pes-1];
            for(int i = shared_pes-1; i > 0; i--){
                v[i] = v[i-1] ;
            }
            v[0] = tmp;
        }

        std::queue<std::vector<uint32_t>> m_data;
        std::queue<std::vector<MATMetadata>> m_meta;// get correct meta data order (fix)
        std::queue<bool> m_shifted ;
        int m_idx;
        int pe ;
        int shared_pes;
        int num_elements;
        int max_depth;
};

struct float16 {
  unsigned short sign : 1;
  unsigned short exponent : 5;
  unsigned short mantissa : 10;

  // Implicit conversion from uint16_t for reinterpret casting
  float16(uint16_t value) {
    // Extract sign, exponent, and mantissa from the uint16_t representation
    sign = (value >> 15) & 1;
    exponent = (value >> 10) & 0x1F;
    mantissa = value & 0x3FF;
  }
  float to_float32() const {
      uint32_t sign = this->sign;
      uint32_t exponent = this->exponent;
      uint32_t fraction = this->mantissa;
      uint32_t float32_value;
      if (exponent == 0)
      {
          if (fraction == 0)
          {
              // zero
              float32_value = (sign << 31);
          }
          else
          {
              // can be represented as ordinary value in float32
              // 2 ** -14 * 0.0101
              // => 2 ** -16 * 1.0100
              // int int_exponent = -14;
              exponent = 127 - 14;
              while ((fraction & (1 << 10)) == 0)
              {
                  //int_exponent--;
                  exponent--;
                  fraction <<= 1;
              }
              fraction &= 0x3FF;
              // int_exponent += 127;
              float32_value = (sign << 31) | (exponent << 23) | (fraction << 13);
          }
      }
      else if (exponent == 0x1F)
      {
          /* Inf or NaN */
          float32_value = (sign << 31) | (0xFF << 23) | (fraction << 13);
      }
      else
      {
          /* ordinary number */
          float32_value = (sign << 31) | ((exponent + (127-15)) << 23) | (fraction << 13);
      }

      return *((float*)&float32_value);

  }
};

inline float uint32_to_float32(uint32_t value) {
  // Extract sign bit
  unsigned int sign = value >> 31;

  // Extract exponent with bias (127 for float32)
  int exponent = ((value >> 23) & 0xFF) - 127;

  // Extract mantissa
  unsigned int mantissa = value & 0x7FFFFF;

  // Handle special cases (optional)
  if (exponent == -127) {
    if (mantissa == 0) {
      return sign ? -0.0f : 0.0f;  // Zero
    } else {
      return sign ? -std::numeric_limits<float>::infinity() : std::numeric_limits<float>::infinity();  // Infinity
    }
  } else if (exponent == 128) {
    return sign ? -std::numeric_limits<float>::quiet_NaN() : std::numeric_limits<float>::quiet_NaN();  // NaN
  }

  // Combine sign, exponent, and mantissa
  float float_value = sign ? -1.0f : 1.0f;
  float_value *= std::ldexp(1.0f, exponent);  // Efficient way to calculate 2 raised to the power of exponent
  float_value *= (1.0f + (float(mantissa) / (float)(1 << 23)));  // Add hidden bit and scale mantissa

  return float_value;
}

inline uint32_t float32_to_uint32(float value) {
    float v = value;
    uint32_t* ptr = reinterpret_cast<uint32_t*>(&v);
    uint32_t result = 0;
    std::memcpy(&result, ptr, sizeof(uint32_t));

    return result;

}



#endif // TC_HELPER_H
