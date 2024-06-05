#ifndef MAT_STORE_HPP
#define MAT_STORE_HPP

#include "mat_helper.hpp"

template<typename T>
void store_row(T* value, T* addr, int* index) {
    addr[*index] = value[*index];
    (*index)++;
}


/*
 * Per thread stores the row
 * */

template <typename T,
    int TC_N,
    int TILE_ROWS , int TILE_COLS,  // output tile partitioning
    int NUM_PE_PER_GROUP,    // let's assume I know my thread_id beforehand
    layout_t layout_c = layout_t::ROW_MAJOR,
    layout_t layout_d = layout_t::ROW_MAJOR>
    inline void tc_store( T* regD , T* res_addr, int thread_id, const int mat_n)  {
    constexpr int col_groups = TC_N / TILE_COLS;
    const int pe_group_id = thread_id  / NUM_PE_PER_GROUP; // number of pes
    const int col_group = pe_group_id % col_groups; // determines HW config
    const int row_group = pe_group_id / (col_groups); // determines HW config

    const int start_row = row_group * TILE_ROWS + thread_id % TILE_ROWS; // offset for row
    const int start_col = col_group * TILE_COLS ; // offset for col (based on pe groups

    int index = 0;
    unrolled_for_func<0, TILE_COLS>(store_row<T>, regD, res_addr+mat_n*(start_row)+start_col, &index);

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
 * flush all tiles
 */

template <typename T, int COL_WIDTH, int NUM_TILES, int start_tile=0, int loop_idx=0>
inline void tc_flush_tiles(T* dest) {// flush
    tc_flush<T, COL_WIDTH/NUM_TILES, 0>(dest, start_tile + loop_idx);
    if constexpr (loop_idx < NUM_TILES-1) {
        tc_flush_tiles<T, COL_WIDTH, NUM_TILES, start_tile, loop_idx+1>(dest +COL_WIDTH);
    }
}


/* TODO
 * Flush Tensor Core tile buffer to memory
 * */

#endif
