#ifndef MAT_STORE_HPP
#define MAT_STORE_HPP

#include "mat_helper.hpp"


template<int ROW, int KK, int NUM_ROWS, int K,  typename T, int NEXT_ROW_OFFSET=1>
inline constexpr void unrolled_store_row_row_major(T* row_ptr, T* registers,  int ROW_STRIDE) {
    if constexpr (ROW < NUM_ROWS) {
        if constexpr (KK < K) {
            *(row_ptr + KK) =  registers[ROW *K + KK] ;
            unrolled_store_row_row_major<ROW, KK+1, NUM_ROWS,K,T, NEXT_ROW_OFFSET>(row_ptr, registers, ROW_STRIDE);
        } else {
            unrolled_store_row_row_major<ROW+1, 0, NUM_ROWS, K,T, NEXT_ROW_OFFSET>(row_ptr*NEXT_ROW_OFFSET*ROW_STRIDE, registers, ROW_STRIDE);
        }
    }
}

template<int ROW, int KK, int NUM_ROWS, int K,  typename T, int NEXT_ROW_OFFSET=1>
inline constexpr void unrolled_store_row_col_major(T* col_ptr, T* registers,  int COL_STRIDE) {
    if constexpr (ROW < NUM_ROWS) {
        if constexpr (KK < K) {
            *(col_ptr+ KK*COL_STRIDE) = registers[ROW * K+ KK] ;
            unrolled_store_row_col_major<ROW, KK+1, NUM_ROWS,K, T, NEXT_ROW_OFFSET>( col_ptr,registers, COL_STRIDE);
        } else {
            unrolled_store_row_col_major<ROW+1, 0, NUM_ROWS,K, T , NEXT_ROW_OFFSET>( col_ptr+NEXT_ROW_OFFSET,registers, COL_STRIDE);
        }
    }
}



/*
 * Per thread stores the row
 * */

template <typename T,
    int TC_N,
    int TILE_ROWS , int TILE_COLS,  // output tile partitioning
    int NUM_PE_PER_GROUP,    // let's assume I know my thread_id beforehand
    int NUM_COLS=1,
    int NUM_ROWS=1,
    layout_t layout = layout_t::ROW_MAJOR,
    int CUR_ROW=0>
    inline void tc_store( T* regD , T* res_addr, int thread_id, const int MAT_M , const int MAT_N)  {

        constexpr int col_groups = TC_N / TILE_COLS;
        const int pe_group_id = thread_id  / NUM_PE_PER_GROUP; // number of pes
        const int col_group = pe_group_id % col_groups; // determines HW config
        const int row_group = pe_group_id / (col_groups); // determines HW config

        if constexpr (layout == layout_t::ROW_MAJOR) {
            //vx_printf("(%d) C(rm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
            auto c_row_offset = MAT_N*(row_group * TILE_ROWS + (thread_id % NUM_PE_PER_GROUP));
            auto c_col_offset = col_group*TILE_COLS;
            T* c_row_ptr = res_addr + c_row_offset + c_col_offset;
            unrolled_store_row_row_major<0, 0,NUM_ROWS,TILE_COLS,T, NUM_PE_PER_GROUP>(c_row_ptr, regD, MAT_M);
        } else {
            //vx_printf("(%d) C(cm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
            auto c_row_offset = row_group * TILE_ROWS + (thread_id % NUM_PE_PER_GROUP);
            auto c_col_offset = MAT_M*(col_group*TILE_COLS);
            T* c_row_ptr = res_addr + c_row_offset + c_col_offset;
            unrolled_store_row_col_major<0, 0,NUM_ROWS,TILE_COLS,T, NUM_PE_PER_GROUP>(c_row_ptr, regD, MAT_N);
        }
}


// Instrinsic for tc flush

template <typename T, int COL_WIDTH, int loop_idx=0>
inline void tc_flush(T* dest, const int acc_tile) {

    asm volatile(".insn i %[EXT], %[imm], %[rd], f%[rs1], %[func3] " :
                [rd] "=f" (*dest) :
                [EXT] "i" (0x7c) ,
                [func3] "i" (0),
                [imm] "i" (0),
                [rs1] "i" (acc_tile)
            );
    if constexpr (loop_idx <COL_WIDTH-1) {
        tc_flush<T,COL_WIDTH, loop_idx+1>(dest+1, acc_tile);
    }
}

/*
 * Flush all tiles
 */

template <typename T, int TILE_WIDTH, int NUM_ROW_TILES,  int NUM_COL_TILES, int CUR_ROW_TILE=0, int CUR_COL_TILE=0>
inline void tc_flush_tiles(T* dest) {// flush
    tc_flush<T, TILE_WIDTH>(dest + TILE_WIDTH*(CUR_ROW_TILE*NUM_COL_TILES+CUR_COL_TILE), CUR_ROW_TILE * NUM_COL_TILES + CUR_COL_TILE);
    if constexpr(CUR_ROW_TILE < NUM_ROW_TILES-1) {
        if constexpr (CUR_COL_TILE < NUM_COL_TILES-1) {
            tc_flush_tiles<T, COL_WIDTH, NUM_COL_TILES, NUM_ROW_TILES,CUR_ROW_TILE, CUR_COL_TILE+1>(dest);
        } else {
            tc_flush_tiles<T, COL_WIDTH, NUM_COL_TILES, NUM_ROW_TILES,CUR_ROW_TILE+1, 0>(dest);
        }
    }
}


/* TODO
 * Flush Tensor Core tile buffer to memory
 * */

#endif
