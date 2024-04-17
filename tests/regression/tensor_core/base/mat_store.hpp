#ifndef MAT_STORE_HPP
#define MAT_STORE_HPP

#include "mat_helper.hpp"

template<typename T>
void store_row(T* value, T* addr, int* index) {
    addr[*index] = value[*index];
    (*index)++;
}

/* Assumes row layout */
// Optimization mat_n can be a template
template <typename T, int TILE_ROWS, int TILE_COLS, int row_index=0> // row index is the relative row index
inline void tc_store(int start_row, int start_col, int mat_n/*, layout_t res_layout*/ ,T* regD, T* res_addr){
    int index =0 ;

    unrolled_for_func<0, TILE_COLS>(store_row<T>, regD+(row_index*TILE_COLS), res_addr+mat_n*(start_row+row_index)+start_col, &index);
    if constexpr(TILE_ROWS>row_index+1) {
        tc_store<T, TILE_ROWS-1, TILE_COLS>(start_row, start_col, mat_n, regD, res_addr);
    }
}

#endif
