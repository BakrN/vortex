#ifndef MAT_STORE_HPP
#define MAT_STORE_HPP

#include "mat_helper.hpp"

#define TC_FLUSH 0x7c

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

// Cooperative execution API

template <int imm = 0 >
inline void tc_flush(float* dest , int reg) {
    asm volatile(".insn i %[EXT], %[func3],  %[rd], %[rs1],%[imm]" :
        [rd] "=f" (*dest) :
        [EXT] "i" (TC_FLUSH) ,
        [imm] "i" (imm),
        [func3] "i" (0),
        [rs1] "r" (reg)
    );
}




template <int loop , int rows_per_warp, int thread_n>
struct UnrollTcFlush {
    inline void operator()(float*& regD, int& tc_reg) {
        constexpr int cur_col   =  loop / (thread_n * rows_per_warp);
        constexpr int cur_row   =  (loop / thread_n) % rows_per_warp;
        constexpr int cur_tn_cn =  loop % thread_n ;

        constexpr int imm =thread_n*cur_row + cur_col*rows_per_warp*thread_n + cur_tn_cn;
        tc_flush<imm>(&regD[cur_row*thread_n + cur_col*rows_per_warp*thread_n + cur_tn_cn] , tc_reg);

    }
};

/*
 * This function divides the tensor core flush operation among all the warps within a core. Returns a new address with correct offset. Assumes dest is row major
 * */
template <int a_rows, int b_cols, int thread_n, int warp_group_size,
    int THREAD_GROUP_SIZE,
    int NUM_LANES,
    int TC_M,
    int TC_N,
    layout_t layout = layout_t::ROW_MAJOR
         >
inline void tc_flush_wg(float* dest, float* regC , const int warp_id,const int thread_id,  const int mat_n){// flush results from inside into reg file
    static_assert(a_rows * b_cols * thread_n >= warp_group_size, "");
    static_assert((a_rows * b_cols * thread_n) % warp_group_size == 0, "");

    //constexpr int last_cols_per_warp = cols_per_warp + cols_per_warp % (b_cols * thread_n) ;
    //constexpr int last_rows_per_warp = rows_per_warp + rows_per_warp % a_rows;

    //if constexpr (last_rows_per_warp != rows_per_warp || last_cols_per_warp != cols_per_warp) {
    //    static_assert("Unsupported for now") ;
        //if () {
        //} else {
        //}
    //    return nullptr;
    //} else {
    constexpr int num_elements = (a_rows * b_cols * thread_n)/warp_group_size; // do it linearly
    constexpr int rows_per_warp = (num_elements/(thread_n)) ? num_elements/thread_n : 1;
    constexpr int cols_per_warp = (num_elements / (a_rows*thread_n)) ? (num_elements / (a_rows*thread_n))  : 1;
    constexpr int elements_in_row = num_elements/(cols_per_warp*rows_per_warp);

    //const int row_offset = warp_id*rows_per_warp % a_rows;
    const int row_offset = (warp_id*elements_in_row*rows_per_warp)/thread_n % a_rows;
    const int thread_n_group = warp_id % (thread_n/elements_in_row ? thread_n/elements_in_row : 1);
    //const int col_offset = (warp_id*rows_per_warp)/a_rows ;// for 0 i wnat it 0
    const int col_offset = ((warp_id*elements_in_row*rows_per_warp)/thread_n)/a_rows;// for 0 i wnat it 0

    const int start_inner_col = thread_n_group* elements_in_row;
    //const int tc_reg = warp_id* num_elements;

    int tc_reg =  row_offset*thread_n + col_offset*a_rows*thread_n + start_inner_col;

    auto* ptr =  dest + row_offset*(TC_M/a_rows)*mat_n+ col_offset*(TC_N/b_cols) + start_inner_col;

    unrolled_for_func_it<0, num_elements, UnrollTcFlush, rows_per_warp, thread_n>(regC, tc_reg);

    const int thread_group_id = thread_id  / THREAD_GROUP_SIZE; // number of pes
    constexpr int outer_stride = NUM_LANES/THREAD_GROUP_SIZE;

    auto c_row_offset = (mat_n*thread_group_id);
    auto c_col_offset = (thread_id % THREAD_GROUP_SIZE)*thread_n;

    float* c_row_ptr = ptr + c_row_offset + c_col_offset;

    // I need another for func it
    unrolled_for_func<0, cols_per_warp>([&](){
    unrolled_store_row_row_major<0, 0,rows_per_warp, elements_in_row,  float, outer_stride>(c_row_ptr, regC, mat_n);
        regC += rows_per_warp*thread_n;
        c_row_ptr += outer_stride;
     });



    //}



}


#endif
