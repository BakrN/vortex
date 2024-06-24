#ifndef MAT_LOAD_HPP
#define MAT_LOAD_HPP

#include "mat_helper.hpp"
// Assumes maximum sharing...

template<int COL, int KK, int NUM_COLS, int K,  typename T, int NEXT_COL_OFFSET=1>
inline constexpr void unrolled_load_col_row_major(T* row_ptr, T* registers,  int ROW_STRIDE) {
    if constexpr (COL < NUM_COLS) {
        if constexpr (KK < K) {
            registers[COL*K + KK] = *(row_ptr+KK*ROW_STRIDE);
            unrolled_load_col_row_major<COL,KK + 1, NUM_COLS ,K, T>(row_ptr, registers,ROW_STRIDE);
        } else {
            unrolled_load_col_row_major<COL+1, 0, NUM_COLS ,K, T>(row_ptr+NEXT_COL_OFFSET, registers, ROW_STRIDE);
        }
    }
}

template<int COL, int KK, int NUM_COLS, int K,  typename T , int NEXT_COL_OFFSET =1>
inline constexpr void unrolled_load_col_col_major(T* col_ptr, T* registers,  int COL_STRIDE) {
    if constexpr (COL < NUM_COLS) {
        if constexpr (KK < K) {
            registers[COL*K + KK] = *(col_ptr+KK );
            unrolled_load_col_col_major<COL,KK+ 1, NUM_COLS ,K, T , NEXT_COL_OFFSET>(col_ptr, registers,COL_STRIDE);
        } else {
            unrolled_load_col_col_major< COL + 1,0, NUM_COLS ,K, T, NEXT_COL_OFFSET>(col_ptr+NEXT_COL_OFFSET*COL_STRIDE, registers, COL_STRIDE);
        }
    }
}

template<int ROW, int KK, int NUM_ROWS, int K,  typename T, int NEXT_ROW_OFFSET=1>
inline constexpr void unrolled_load_row_row_major(T* row_ptr, T* registers,  int ROW_STRIDE) {
    if constexpr (ROW < NUM_ROWS) {
        if constexpr (KK < K) {
            registers[ROW *K + KK] = *(row_ptr + KK);
            unrolled_load_row_row_major<ROW, KK+1, NUM_ROWS,K,T,NEXT_ROW_OFFSET>(row_ptr, registers, ROW_STRIDE);
        } else {
            unrolled_load_row_row_major<ROW+1, 0, NUM_ROWS, K,T,NEXT_ROW_OFFSET>(row_ptr+NEXT_ROW_OFFSET*ROW_STRIDE, registers, ROW_STRIDE);
        }
    }
}

template<int ROW, int KK, int NUM_ROWS, int K,  typename T, int NEXT_ROW_OFFSET=1>
inline constexpr void unrolled_load_row_col_major(T* col_ptr, T* registers,  int COL_STRIDE) {
    if constexpr (ROW < NUM_ROWS) {
        if constexpr (KK < K) {
            registers[ROW * K+ KK] = *(col_ptr+ KK*COL_STRIDE);
            unrolled_load_row_col_major<ROW, KK+1, NUM_ROWS,K, T, NEXT_ROW_OFFSET>( col_ptr,registers, COL_STRIDE);
        } else {
            unrolled_load_row_col_major<ROW+1, 0, NUM_ROWS,K, T, NEXT_ROW_OFFSET>( col_ptr+ NEXT_ROW_OFFSET,registers, COL_STRIDE);
        }
    }
}




/**
 *  Format: r = row , k = col
 *  A_r0k0 , A_r1k0, ... ,Ar0k1, Ar1k1, ...
 * */

// Cooperative thread thread sharing (32x)
template <typename T, int OP_size, int Res_size,
    int THREAD_GROUP_SIZE,    // let's assume I know my thread_id beforehand
    int NUM_LANES,  // total number of threads
    int NUM_K = 1,
    int NUM_ROWS = 1,  // Mac units  (determined by number of mac units i have inside the tensor core per lane or just number of outer product I want to do... )
    layout_t layout = layout_t::ROW_MAJOR
>
inline void load_tile_a(T* ptr, T* reg , const int thread_id, const int MAT_M,  const int MAT_K){
    const int thread_group_id = thread_id  / THREAD_GROUP_SIZE; // number of pes
    constexpr int outer_row_stride = NUM_LANES/THREAD_GROUP_SIZE;

    if constexpr (layout == layout_t::ROW_MAJOR) {
        auto row_offset = MAT_K*thread_group_id *OP_size/Res_size + (thread_id % THREAD_GROUP_SIZE);
        T* a_row_ptr = ptr + row_offset;
        const int row_stride = MAT_K * OP_size/Res_size;


        unrolled_for_func<0, NUM_K>([&](){
            unrolled_load_row_row_major<0, 0, NUM_ROWS, 1, T, outer_row_stride>(a_row_ptr, reg, row_stride); // this actually loads pe group
            reg += NUM_ROWS;
            a_row_ptr += THREAD_GROUP_SIZE;
        });
    } else{
        //static_assert(false, "Need to implement something else.. (Would require unpacking) ");
        ////
        //auto row_offset = MAT_N*thread_group_id*OP_SIZE/Res_size + MAT_M*(thread_id% THREAD_GROUP_SIZE);
        //T* a_row_ptr = ptr + row_offset;
        //const int row_stride = MAT_M * OP_size/Res_size;
        //unrolled_load_row_col_major<0, 0, NUM_ROWS, THREAD_K/(Res_size/OP_size), T, outer_row_stride>(a_row_ptr, reg, row_stride); // this actually loads pe group
    }
}
/**
 *  Format: c = col , k = row
 *  B_c0k0 , B_c1k0, ... ,Bc0k1, Bc1k1, ...
 * */

// Sharing happens on the B matrix
template <typename T, int OP_size, int Res_size,   //(based on dot product width)
    int THREAD_GROUP_SIZE,    // let's assume I know my thread_id beforehand
    int NUM_LANES,  // total number of threads
    int NUM_K = 1,  // so this can go in either  (outer prodcut can go in either way)
    int NUM_COLS = 1,
    layout_t layout = layout_t::COL_MAJOR
>
inline void load_tile_b(T* ptr, T* reg , const int thread_id,  const int MAT_N, const int MAT_K) {
    const int thread_group_id = thread_id  / THREAD_GROUP_SIZE; // number of pes
    constexpr int outer_col_stride = NUM_LANES/THREAD_GROUP_SIZE;

    if constexpr (layout == layout_t::ROW_MAJOR)  {

        //static_assert(false, "Need to implement something else.. (Not supported. Would require unpacking)");
        //auto col_offset = (thread_group_id + MAT_N*(thread_id % THREAD_GROUP_SIZE)*THREAD_K )*OP_size/Res_size ;
        //T* b_col_ptr = ptr + col_offset;
        //const int col_stride = MAT_N * OP_size/Res_size;
        //unrolled_for_func<0, NUM_K>([&](){
        //        unrolled_load_col_row_major<0, 0, NUM_COLS,THREAD_K/(Res_size/OP_size), T, outer_col_stride>(b_col_ptr, reg, col_stride);
        //        b_col_ptr += THREAD_GROUP_SIZE*THREAD_K*OP_size/Res_size;
        //        ;}, b_col_ptr, reg+THREAD_K*OP_size/Res_size, col_stride);
    } else {
        //vx_printf("(%d) B(cm) col= %d\n", thread_id,  (col_group * TILE_COLS + thread_id % TILE_COLS));
        auto col_offset = (MAT_K*thread_group_id + (thread_id % THREAD_GROUP_SIZE))*OP_size/Res_size ;
        T* b_col_ptr = ptr + col_offset;
        const int col_stride= MAT_K * OP_size/Res_size;
        unrolled_for_func<0, NUM_K>([&](){
                unrolled_load_col_col_major<0, 0, NUM_COLS, 1, T, outer_col_stride>(b_col_ptr, reg, col_stride);
                b_col_ptr += THREAD_GROUP_SIZE;
                reg += NUM_COLS;
        ;});
    }
}

/*
 * TODO: Add precision to load tile C function
 * Outer rows loaded first then outer cols
 * */
template <typename T, int OP_size, int Res_size,int THREAD_N , // based on number of mac units inside lane
    int THREAD_GROUP_SIZE,    // output c row per thread group
    int NUM_LANES,
    int NUM_ROWS = 1,
    int OUTER_COLS = 1,
    layout_t layout = layout_t::ROW_MAJOR
>
inline void load_tile_c(T* ptr, T* reg, const int thread_id, const int MAT_M, const int MAT_N){
    constexpr int outer_row_stride = NUM_LANES/THREAD_GROUP_SIZE;
    const int thread_group_id = thread_id  / THREAD_GROUP_SIZE; // number of pes
    constexpr int outer_col_stride = NUM_LANES/THREAD_GROUP_SIZE;

    if constexpr (layout == layout_t::ROW_MAJOR) {
        //vx_printf("(%d) C(rm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto c_row_offset = (MAT_N*thread_group_id);
        auto c_col_offset = (thread_id % THREAD_GROUP_SIZE)*THREAD_N ;
        T* c_row_ptr = ptr + c_row_offset + c_col_offset;
        unrolled_for_func<0, OUTER_COLS>([&](){
            unrolled_load_row_row_major<0, 0,NUM_ROWS,THREAD_N,  T, outer_row_stride>(c_row_ptr, reg, MAT_N);
            reg += NUM_ROWS*THREAD_N;
            c_row_ptr += outer_col_stride;
        });
    } else {
        //vx_printf("(%d) C(cm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto c_row_offset = thread_group_id;
        auto c_col_offset = MAT_M*(thread_id % THREAD_GROUP_SIZE)*THREAD_N ;
        T* c_col_ptr = ptr + c_row_offset + c_col_offset;
        unrolled_for_func<0, OUTER_COLS>([&](){
            unrolled_load_row_col_major<0, 0,NUM_ROWS,THREAD_N,  T, outer_row_stride>(c_col_ptr, reg, MAT_M);
            reg += NUM_ROWS*THREAD_N;
            c_col_ptr += MAT_N*outer_col_stride;
        });
    }
}  // load a and b




#endif
