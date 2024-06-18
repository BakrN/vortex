#ifndef MAT_LOAD_HPP
#define MAT_LOAD_HPP

#include "mat_helper.hpp"
//#include <vx_print.h>


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
 * sizeof(T ) == Res_size
 * A = [MAT_M x MAT_K]
 * B = [MAT_K x MAT_N]
 *
 * sub_matrix A and submatrix b get loaded into regA and regB loaded sequentially into
 * */

template <typename T, int OP_size, int Res_size,
    int TC_N, int PE_K,
    int TILE_ROWS , int TILE_COLS,  // output tile partitioning
    int NUM_PE_PER_GROUP,    // let's assume I know my thread_id beforehand
    layout_t A_layout = layout_t::ROW_MAJOR,
    layout_t B_layout = layout_t::COL_MAJOR,
    layout_t C_layout = layout_t::ROW_MAJOR
>
inline void tc_load(T* A, T* B, T* C, T* regA, T* regB, T* regC , const int thread_id, const int MAT_M, const int MAT_N, const int MAT_K){
    constexpr int col_groups = TC_N / TILE_COLS;
    const int pe_group_id = thread_id  / NUM_PE_PER_GROUP; // number of pes
    const int col_group = (pe_group_id / TILE_COLS) % col_groups; // determines HW config
    const int row_group = pe_group_id / (TILE_ROWS * col_groups); // determines HW config
    // Row major A
    // print all above variables
    //vx_printf("(%d) pe_group_id = %d\n", thread_id,  pe_group_id);
    //vx_printf("(%d) row_group = %d\n", thread_id,  row_group);
    //vx_printf("(%d) col_group = %d\n", thread_id,  col_group);


    // Load entire MAT_K in  or just TILE_COLS  (for now only load TILE_COLS)
    //Res_t regA[MAT_K/(sizeof(Res_t)/sizeof(OP_t))];
    if constexpr (A_layout == layout_t::ROW_MAJOR) {
        auto row_offset = MAT_K*(row_group * TILE_ROWS + (thread_id % TILE_ROWS))*OP_size/Res_size;
        //vx_printf("(%d) A(rm) row offset= %d\n", thread_id,  row_offset);
        T* a_row_ptr = A + row_offset;
        //vx_printf("(%d) row_ptr = %d\n", thread_id,  A - a_row_ptr);
        const int row_stride = MAT_K * OP_size/Res_size; // Where to find next row;
        unrolled_load_row_row_major<0, 0, PE_K/(Res_size/OP_size),1, T>(a_row_ptr, regA, row_stride); // this actually loads pe group
    }
    else {
        //vx_printf("(%d) A(cm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto row_offset = (row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        T* a_row_ptr = A + row_offset/(Res_size/OP_size);
        const int col_stride = MAT_M*OP_size/Res_size;// where to find next col
        unrolled_load_row_col_major<0, 0, PE_K/(Res_size/OP_size),1, T>(a_row_ptr, regA, col_stride); // this actually loads pe group // col stride
    }

    if constexpr (B_layout == layout_t::ROW_MAJOR)  {
        //vx_printf("(%d) B(rm) col= %d\n", thread_id,  (col_group * TILE_COLS + thread_id % TILE_COLS));
        auto col_offset = (col_group * TILE_COLS) + thread_id % TILE_COLS;
        T* b_col_ptr = B + col_offset/(Res_size/OP_size);
        const int row_stride = MAT_N * OP_size/Res_size;
        unrolled_load_col_row_major<0, 0, 1,PE_K/(Res_size/OP_size), T>(b_col_ptr, regB, row_stride);
    } else {
        //vx_printf("(%d) B(cm) col= %d\n", thread_id,  (col_group * TILE_COLS + thread_id % TILE_COLS));
        auto col_offset = MAT_K*(col_group * TILE_COLS + thread_id % TILE_COLS); // b col stride
        T* b_col_ptr = B + col_offset/(Res_size/OP_size);
        const int col_stride = MAT_K * OP_size/Res_size;
        unrolled_load_col_col_major<0, 0, 1,PE_K/(Res_size/OP_size), T>(b_col_ptr, regB, col_stride);
    }

    if constexpr (C_layout == layout_t::ROW_MAJOR) {
        //vx_printf("(%d) C(rm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto c_row_offset = MAT_M*(row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto c_col_offset = col_group*TILE_COLS;
        T* c_row_ptr = C + c_row_offset + c_col_offset;
        unrolled_load_row_row_major<0, 0,TILE_COLS,1,  T>(c_row_ptr, regC, MAT_M);
    } else {
        //vx_printf("(%d) C(cm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto c_row_offset = row_group * TILE_ROWS + (thread_id % TILE_ROWS);
        auto c_col_offset = MAT_N*(col_group*TILE_COLS);
        T* c_row_ptr = C + c_row_offset + c_col_offset;
        unrolled_load_row_col_major<0, 0,TILE_COLS,1,  T>(c_row_ptr, regC, MAT_N);
    }

    // remove this later print regA
    //OP_t* regA_cast= reinterpret_cast<OP_t*>(regA);
    //for (int i = 0; i < MAT_K; i++) {
    //    printf("regA[%d] = %d\n", i, regA_cast[i]);
    //}
    // print regB
    //OP_t* regB_cast= reinterpret_cast<OP_t*>(regB);
    //for (int i = 0; i < MAT_K; i++) {
    //    printf("regB[%d] = %d\n", i, regB_cast[i]);
    //}
    // print regC
    //for (int i = 0; i < TILE_COLS; i++) {
    //    printf("regC[%d] = %f\n", i, regC[i]);
    //}
}

template <typename T, int OP_size, int Res_size,
    int TC_N, int PE_K,
    int TILE_ROWS , int TILE_COLS,  // output tile partitioning
    int NUM_PE_PER_GROUP,    // let's assume I know my thread_id beforehand
    int NUM_ROWS = 1, // Number of rows per PE
    layout_t layout = layout_t::ROW_MAJOR
>
inline void tc_load_fragment_c(T* ptr, T* reg, const int thread_id, const int MAT_M, const int MAT_N){
    constexpr int col_groups = TC_N / TILE_COLS;
    const int pe_group_id = thread_id  / NUM_PE_PER_GROUP; // number of pes
    const int col_group = pe_group_id % col_groups; // determines HW config
    const int row_group = pe_group_id / (col_groups); // determines HW config

    if constexpr (layout == layout_t::ROW_MAJOR) {
        //vx_printf("(%d) C(rm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto c_row_offset = MAT_N*(row_group * TILE_ROWS + (thread_id % NUM_PE_PER_GROUP));
        auto c_col_offset = col_group*TILE_COLS;
        T* c_row_ptr = ptr + c_row_offset + c_col_offset;
        unrolled_load_row_row_major<0, 0,NUM_ROWS,TILE_COLS,  T, NUM_PE_PER_GROUP>(c_row_ptr, reg, MAT_N);
    } else {
        //vx_printf("(%d) C(cm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto c_row_offset = row_group * TILE_ROWS + (thread_id % NUM_PE_PER_GROUP);
        auto c_col_offset = MAT_M*(col_group*TILE_COLS);
        T* c_row_ptr = ptr + c_row_offset + c_col_offset;
        unrolled_load_row_col_major<0, 0,NUM_ROWS,TILE_COLS,  T, NUM_PE_PER_GROUP>(c_row_ptr, reg, MAT_M);
    }

}  // load a and b


template <typename T, int OP_size, int Res_size,
    int TC_N, int PE_K,
    int TILE_ROWS , int TILE_COLS,  // output tile partitioning
    int NUM_PE_PER_GROUP,    // let's assume I know my thread_id beforehand
    int NUM_ROWS = 1,
    layout_t layout = layout_t::ROW_MAJOR
>
inline void tc_load_fragment_a(T* ptr, T* reg , const int thread_id, const int MAT_M,  const int MAT_K){
    constexpr int col_groups = TC_N / TILE_COLS;
    const int pe_group_id = thread_id  / NUM_PE_PER_GROUP; // number of pes
    const int row_group = pe_group_id / (col_groups); // determines HW config
    if constexpr (layout == layout_t::ROW_MAJOR) {
        auto row_offset = MAT_K*(row_group * TILE_ROWS  + (thread_id % NUM_PE_PER_GROUP))*OP_size/Res_size;
        //vx_printf("(%d) A(rm) row offset= %d\n", thread_id,  row_offset);
        T* a_row_ptr = ptr + row_offset;
        //vx_printf("(%d) row_ptr = %d\n", thread_id,  A - a_row_ptr);
        const int row_stride = MAT_K * OP_size/Res_size; // Where to find next row;
        unrolled_load_row_row_major<0, 0, NUM_ROWS, PE_K/(Res_size/OP_size), T, NUM_PE_PER_GROUP>(a_row_ptr, reg, row_stride); // this actually loads pe group
    }
    else {
        //vx_printf("(%d) A(cm) row= %d\n", thread_id,  row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto row_offset = (row_group * TILE_ROWS + (thread_id % NUM_PE_PER_GROUP));
        T* a_row_ptr = ptr + row_offset/(Res_size/OP_size);
        const int col_stride = MAT_M*OP_size/Res_size;// where to find next col
        unrolled_load_row_col_major<0, 0, NUM_ROWS, PE_K/(Res_size/OP_size),T, NUM_PE_PER_GROUP>(a_row_ptr, reg, col_stride); // this actually loads pe group // col stride
    }

}

template <typename T, int OP_size, int Res_size,
    int TC_N, int PE_K,
    int TILE_COLS,  // output tile partitioning
    int NUM_PE_PER_GROUP,    // let's assume I know my thread_id beforehand
    int NUM_COLS=1,
    int NUM_ROWS=1,
    layout_t layout = layout_t::COL_MAJOR
>
inline void tc_load_fragment_b(T* ptr, T* reg , const int thread_id,  const int MAT_N, const int MAT_K) {
    constexpr int col_groups = TC_N / TILE_COLS;
    const int pe_group_id = thread_id  / NUM_PE_PER_GROUP; // number of pes
    const int col_group = pe_group_id  % col_groups; // determines HW config

    if constexpr (layout == layout_t::ROW_MAJOR)  {
        // TODO Add NUM Cols support (row stride isn't
        //vx_printf("(%d) B(rm) col= %d\n", thread_id,  (col_group * TILE_COLS + thread_id % TILE_COLS));
        auto col_offset = (col_group * TILE_COLS) +  (thread_id % NUM_PE_PER_GROUP);
        T* b_col_ptr = ptr + col_offset/(Res_size/OP_size);
        const int row_stride = MAT_N * OP_size/Res_size;
        unrolled_load_col_row_major<0, 0, NUM_COLS,PE_K/(Res_size/OP_size), T, NUM_PE_PER_GROUP>(b_col_ptr, reg, row_stride);
    } else {
        //vx_printf("(%d) B(cm) col= %d\n", thread_id,  (col_group * TILE_COLS + thread_id % TILE_COLS));
        auto col_offset = MAT_K*(col_group * TILE_COLS + thread_id % NUM_PE_PER_GROUP); // b col stride
        T* b_col_ptr = ptr + col_offset/(Res_size/OP_size);
        const int col_stride = MAT_K * OP_size/Res_size ;
        unrolled_load_col_col_major<0, 0, NUM_COLS,PE_K/(Res_size/OP_size), T, NUM_PE_PER_GROUP>(b_col_ptr, reg, col_stride );
    }
}

#endif
