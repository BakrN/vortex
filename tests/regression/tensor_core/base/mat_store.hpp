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




template <int loop , int a_rows, int thread_n>
struct UnrollTcFlush {
    inline void operator()(float*& regD, int& tc_reg) {

        constexpr int cur_row = loop / (thread_n) % a_rows;
        constexpr int cur_col = loop / (a_rows*thread_n);
        constexpr int cur_tn_cn = loop % thread_n;

        constexpr int imm = loop;
        tc_flush<imm>(&regD[cur_row*thread_n + cur_col*a_rows*thread_n + cur_tn_cn] , tc_reg);

    }
};

// Naive with warp around bus stalls in writes due to (division is across thread_n)

template <int loop, int a_rows,int b_cols, int thread_n, int num_lanes, int thread_group_size, int TC_M, int TC_N>
struct UnrollCoopStoreWrapAround{
    inline void operator()(float*& dest, float*& regD, int tc_reg, int thread_id, int mat_n) {
        //constexpr int cur_row = loop / (thread_n) % a_rows;
        //constexpr int cur_col = loop / (a_rows*thread_n);
        //constexpr int cur_tn_cn = loop % thread_n;

        const int cur_row = (tc_reg+loop) / (thread_n) % a_rows;
        const int cur_col = (tc_reg+loop) / (a_rows*thread_n);
        const int cur_tn_cn  = (tc_reg+loop) % thread_n;

        const int thread_group_id = thread_id  / thread_group_size; // number of pes
        auto c_row_offset = (mat_n*thread_group_id);
        auto c_col_offset = (thread_id % thread_group_size)*thread_n;

        *(dest + cur_row*(TC_M/a_rows)*mat_n+ cur_col*(TC_N/b_cols) /*big a row and big b selection*/+ cur_tn_cn +c_row_offset + c_col_offset) = regD[loop];
    }
};

// Assumes no wrap around. In this case I can do calculations using constexpr

template <int loop, int a_rows,int b_cols, int thread_n, int num_lanes, int thread_group_size, int TC_M, int TC_N>
struct UnrollCoopStoreNonWrapAround{
    inline void operator()(float*& dest, float*& regD, int tc_reg, int thread_id, int mat_n) {
        constexpr int cur_row = loop / (thread_n) % a_rows;
        constexpr int cur_col = loop / (a_rows*thread_n);
        constexpr int cur_tn_cn = loop % thread_n;


        const int thread_group_id = thread_id  / thread_group_size; // number of pes
        auto c_row_offset = (mat_n*thread_group_id);
        auto c_col_offset = (thread_id % thread_group_size)*thread_n;

        *(dest + cur_row*(TC_M/a_rows)*mat_n+ cur_col*(TC_N/b_cols) + cur_tn_cn +c_row_offset + c_col_offset) = regD[loop];
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
    const int warp_idx=  warp_id % warp_group_size;


    int tc_reg     = warp_idx* num_elements;



    unrolled_flush_it<0, num_elements, UnrollTcFlush, a_rows, thread_n>(regC, tc_reg);

    if constexpr (((a_rows*thread_n) % num_elements) != 0 || (num_elements % 2 != 0 && num_elements > 1)) {


        unrolled_coop_store_it<0, num_elements, UnrollCoopStoreWrapAround, a_rows, b_cols, thread_n,NUM_LANES,THREAD_GROUP_SIZE,TC_M, TC_N>(dest, regC,tc_reg, thread_id,  mat_n);

    }else {

        const int row_offset = tc_reg / (thread_n) % a_rows;
        const int col_offset = tc_reg / (a_rows*thread_n);
        const int inner_offset = tc_reg % thread_n;
        auto* ptr = dest + row_offset*(TC_M/a_rows)*mat_n+ col_offset*(TC_N/b_cols) +inner_offset;
        unrolled_coop_store_it<0, num_elements, UnrollCoopStoreNonWrapAround, a_rows, b_cols, thread_n,NUM_LANES,THREAD_GROUP_SIZE,TC_M, TC_N>(ptr, regC,tc_reg, thread_id,  mat_n);
    }



    //}



}


#endif
