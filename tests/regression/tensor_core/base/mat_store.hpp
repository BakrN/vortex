#ifndef MAT_STORE_HPP
#define MAT_STORE_HPP

#include "mat_helper.hpp"

template<int ROW, int KK, int NUM_ROWS, int K,  typename T, int NEXT_ROW_OFFSET=1>
inline constexpr void unrolled_store_row_row_major(T* row_ptr, T* registers,  int ROW_STRIDE) {
    if constexpr (ROW < NUM_ROWS) {
        if constexpr (KK < K) {
            *(row_ptr + KK) = registers[ROW *K + KK] ;
            unrolled_store_row_row_major<ROW, KK+1, NUM_ROWS,K,T,NEXT_ROW_OFFSET>(row_ptr, registers, ROW_STRIDE);
        } else {
            unrolled_store_row_row_major<ROW+1, 0, NUM_ROWS, K,T,NEXT_ROW_OFFSET>(row_ptr+NEXT_ROW_OFFSET*ROW_STRIDE, registers, ROW_STRIDE);
        }
    }
}

template<int ROW, int KK, int NUM_ROWS, int K,  typename T, int NEXT_ROW_OFFSET=1>
inline constexpr void unrolled_store_row_col_major(T* col_ptr, T* registers,  int COL_STRIDE) {
    if constexpr (ROW < NUM_ROWS) {
        if constexpr (KK < K) {
            *(col_ptr+ KK*COL_STRIDE) =  registers[ROW * K+ KK] ;
            unrolled_store_row_col_major<ROW, KK+1, NUM_ROWS,K, T, NEXT_ROW_OFFSET>( col_ptr,registers, COL_STRIDE);
        } else {
            unrolled_store_row_col_major<ROW+1, 0, NUM_ROWS,K, T, NEXT_ROW_OFFSET>( col_ptr+ NEXT_ROW_OFFSET,registers, COL_STRIDE);
        }
    }
}




/*
 * TODO: Add precision to D store function
 * Outer rows in reg first then outer cols
 * */
template <typename T, int OP_size, int Res_size,int THREAD_N , // based on number of mac units inside lane
    int THREAD_GROUP_SIZE,    // output c row per thread group
    int NUM_LANES,
    int NUM_ROWS = 1,
    int OUTER_COLS = 1,
    layout_t layout = layout_t::ROW_MAJOR
>
inline void tc_store(T* ptr, T* reg, const int thread_id, const int MAT_M, const int MAT_N){
    constexpr int outer_row_stride = NUM_LANES/THREAD_GROUP_SIZE;
    const int thread_group_id = thread_id  / THREAD_GROUP_SIZE; // number of pes
    constexpr int outer_col_stride = NUM_LANES/THREAD_GROUP_SIZE;

    if constexpr (layout == layout_t::ROW_MAJOR) {
        //vx_printf("(%d) C(rm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto c_row_offset = (MAT_N*thread_group_id);
        auto c_col_offset = (thread_id % THREAD_GROUP_SIZE)*THREAD_N ;
        T* c_row_ptr = ptr + c_row_offset + c_col_offset;
        unrolled_for_func<0, OUTER_COLS>([&](){
            unrolled_store_row_row_major<0, 0,NUM_ROWS,THREAD_N,  T, outer_row_stride>(c_row_ptr, reg, MAT_N);
            reg += NUM_ROWS*THREAD_N;
            c_row_ptr += outer_col_stride;
        });
    } else {
        //vx_printf("(%d) C(cm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto c_row_offset = thread_group_id;
        auto c_col_offset = MAT_M*(thread_id % THREAD_GROUP_SIZE)*THREAD_N ;
        T* c_col_ptr = ptr + c_row_offset + c_col_offset;
        unrolled_for_func<0, OUTER_COLS>([&](){
            unrolled_store_row_col_major<0, 0,NUM_ROWS,THREAD_N,  T, outer_row_stride>(c_col_ptr, reg, MAT_M);
            reg += NUM_ROWS*THREAD_N;
            c_col_ptr += MAT_N*outer_col_stride;
        });
    }
}

template <typename T, int OP_size, int Res_size,int THREAD_N , // based on number of mac units inside lane
    int THREAD_GROUP_SIZE,    // output c row per thread group
    int NUM_LANES,
    int NUM_ROWS = 1,
    int OUTER_COLS = 1,
    int WARPGROUP_SIZE = 1,
    layout_t layout = layout_t::ROW_MAJOR
>
inline void tc_store_wg(T* ptr, T* reg, const int warp_id, const int thread_id, const int MAT_M, const int MAT_N) {
    const int wg_idx = warp_id % WARPGROUP_SIZE;
    if (wg_idx ==0) {
        tc_store<T, OP_size,Res_size,THREAD_N, THREAD_GROUP_SIZE,NUM_LANES,NUM_ROWS,OUTER_COLS,layout >(ptr, reg, thread_id,  MAT_M, MAT_N);
    }
}


#endif
