#ifndef TC_HELPER_H
#define TC_HELPER_H

#include "pipeline.h"
#include <cassert>
#include <cstdint>
#include <cstddef>
#include <vector>
#include <stdexcept>
#include <queue>

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
      return m_data.back().second.isFull(); }

    // Checks if the top row is full
  bool isTopFull() const { return !m_data.empty() && m_data.front().second.isFull(); }

  bool isEmpty() const { return m_data.empty(); }

  bool isFull() { return m_rows >= m_max_depth && isBackFull(); }

  void allocateRow(MATMetadata meta){
      m_data.push({meta,ChunkVector<T>(m_width,num_regs)});
      m_rows++;
  }

  // Attempts to insert a value
  void insert(const T& value, int reg=-1) {
    if (m_rows >= m_max_depth&& isBackFull()) {
      throw std::runtime_error("Structure is full");
    }

    m_data.back().second.insert(value, reg);
  }

  std::vector<T>& frontRow(int chunk) { return m_data.front().second.getChunk(chunk); }
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

  bool isBackEmpty() { return m_data.empty() || m_data.back().second.empty(); }

  int width() { return m_width; }


  // For shift operations used in matrix B
  void shiftRight(){
      m_data.front().second.shiftRight();
  }

  int size(int chunk) {
      return m_data.front().second.size(chunk);
  }

  int size() {
      return m_data.front().second.size();
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


#endif // TC_HELPER_H
