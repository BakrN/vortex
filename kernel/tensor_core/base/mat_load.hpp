#ifndef MAT_LOAD_HPP
#define MAT_LOAD_HPP

#include <cstdio>
#include <vx_print.h>

enum class layout_t : int{
    ROW_MAJOR=0,
    COL_MAJOR
};

template<int I, int J, int TILE_COLS, int TILE_ROWS,  typename T>
inline constexpr void unrolled_load_row_row_major(T* row_ptr, T* registers,  int ROW_STRIDE) {
    if constexpr (I < TILE_ROWS) {
        if constexpr (J < TILE_COLS) {
            registers[I * TILE_COLS + J] = *(row_ptr + J);
            unrolled_load_row_row_major<I, J + 1, TILE_COLS,TILE_ROWS, T>(row_ptr, registers, ROW_STRIDE);
        } else {
            unrolled_load_row_row_major<I + 1, 0, TILE_COLS,TILE_ROWS, T>(row_ptr+ROW_STRIDE, registers, ROW_STRIDE);
        }
    }
}

template<int I, int J, int TILE_COLS, int TILE_ROWS,  typename T>
inline constexpr void unrolled_load_col_row_major(T* row_ptr, T* registers,  int ROW_STRIDE) {
    if constexpr (I < TILE_ROWS) {
        if constexpr (J < TILE_COLS) {
            registers[I * TILE_COLS + J] = *(row_ptr + J*ROW_STRIDE);
            unrolled_load_col_row_major<I, J + 1, TILE_COLS,TILE_ROWS, T>(row_ptr, registers, ROW_STRIDE);
        } else {
            unrolled_load_col_row_major<I + 1, 0, TILE_COLS,TILE_ROWS, T>(row_ptr+1, registers,ROW_STRIDE);
        }
    }
}

/// LOAD COLUMN FROM COLUMN MAJOR PTR (+1 new row+same column)
//TODO
template<int I, int J, int TILE_COLS, int TILE_ROWS,  typename T>
inline constexpr void unrolled_load_col_col_major(T* col_ptr, T* registers,  int COL_STRIDE) {
    if constexpr (I < TILE_ROWS) {
        if constexpr (J < TILE_COLS) {
            registers[I * TILE_COLS + J] = *(col_ptr + I);
            unrolled_load_col_col_major<I+1, J , TILE_COLS,TILE_ROWS, T>( col_ptr, registers,COL_STRIDE);
        } else {
            unrolled_load_col_col_major<0, J+1, TILE_COLS,TILE_ROWS, T>(col_ptr + COL_STRIDE,registers, COL_STRIDE);
        }
    }
}


//TODO
template<int I, int J, int TILE_COLS, int TILE_ROWS,  typename T>
inline constexpr void unrolled_load_row_col_major(T* col_ptr, T* registers,  int COL_STRIDE) {
    if constexpr (I < TILE_ROWS) {
        if constexpr (J < TILE_COLS) {
            registers[I * TILE_COLS + J] = *(col_ptr+ I*COL_STRIDE);
            unrolled_load_row_col_major<I, J+1, TILE_COLS,TILE_ROWS, T>( col_ptr,registers, COL_STRIDE);
        } else {
            unrolled_load_row_col_major<I+1, 0, TILE_COLS,TILE_ROWS, T>( col_ptr+ 1,registers, COL_STRIDE);
        }
    }
}

template<int I, int J, int TILE_COLS, int TILE_ROWS,  typename T, layout_t layout>
inline constexpr void unrolled_load_row(T* col_ptr, T* registers,  int STRIDE) {
    if constexpr (layout == layout_t::ROW_MAJOR) {
        unrolled_load_row_row_major<I, J, TILE_COLS,TILE_ROWS, T>(col_ptr, registers, STRIDE);
    } else {
        unrolled_load_row_col_major<I, J, TILE_COLS,TILE_ROWS, T>(col_ptr, registers, STRIDE);
    }
}

template<int I, int J, int TILE_COLS, int TILE_ROWS,  typename T, layout_t layout>
inline constexpr void unrolled_load_col(T* col_ptr, T* registers,  int STRIDE) {
    if constexpr (layout == layout_t::ROW_MAJOR) {
        unrolled_load_col_row_major<I, J, TILE_COLS,TILE_ROWS, T>(col_ptr, registers, STRIDE);
    } else {
        unrolled_load_col_col_major<I, J, TILE_COLS,TILE_ROWS, T>(col_ptr, registers, STRIDE);
    }
}



/**
 * sizeof(T ) == Res_size
 * A = [MAT_M x MAT_K]
 * B = [MAT_K x MAT_N]
 *
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
    constexpr int total_cols = TC_N / TILE_COLS;
    const int pe_group_id = thread_id  /NUM_PE_PER_GROUP;
    const int col_group = pe_group_id % total_cols;
    const int row_group = (pe_group_id -col_group)/total_cols;
    // Row major A
    // print all above variables
    //printf("row_thread = %d\n", row_offset);
    //printf("col_thread = %d\n", col_offset);
    //vx_printf("(%d) row_group = %d\n", thread_id,  row_group);
    //vx_printf("(%d) col_group = %d\n", thread_id, col_group);
    //printf("pe_group_id = %d\n", pe_group_id);
    //printf("thread_id = %d\n", thread_id);
    //printf("A offset: %d\n", a_row_ptr - A);


    // Load entire MAT_K in  or just TILE_COLS  (for now only load TILE_COLS)
    //Res_t regA[MAT_K/(sizeof(Res_t)/sizeof(OP_t))];
    if constexpr (A_layout == layout_t::ROW_MAJOR) {
        auto row_offset = MAT_K*(row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        T* a_row_ptr = A + row_offset/(Res_size/OP_size);
        //vx_printf("(%d) row_ptr = %d\n", thread_id,  A - a_row_ptr);
        const int row_stride = MAT_K * OP_size/Res_size; // Where to find next row;
        unrolled_load_row_row_major<0, 0, PE_K/(Res_size/OP_size),1, T>(a_row_ptr, regA, row_stride); // this actually loads pe group
    }
    else {
        auto row_offset = (row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        T* a_row_ptr = A + row_offset/(Res_size/OP_size);
        const int col_stride = MAT_M*OP_size/Res_size;// where to find next col
        unrolled_load_row_col_major<0, 0, PE_K/(Res_size/OP_size),1, T>(a_row_ptr, regA, col_stride); // this actually loads pe group // col stride
    }

    if constexpr (B_layout == layout_t::ROW_MAJOR)  {
        auto col_offset = (col_group * TILE_COLS);
        T* b_col_ptr = B + col_offset/(Res_size/OP_size);
        const int row_stride = MAT_N * OP_size/Res_size;
        unrolled_load_col_row_major<0, 0, 1,PE_K/(Res_size/OP_size), T>(b_col_ptr, regB, row_stride);
    } else {
        auto col_offset = MAT_K*(col_group * TILE_COLS); // b col stride
        T* b_col_ptr = B + col_offset/(Res_size/OP_size);
        const int col_stride = MAT_K * OP_size/Res_size;
        unrolled_load_col_col_major<0, 0, 1,PE_K/(Res_size/OP_size), T>(b_col_ptr, regB, col_stride);
    }

    if constexpr (C_layout == layout_t::ROW_MAJOR) {
        auto c_row_offset = MAT_M*(row_group * TILE_ROWS + (thread_id % TILE_ROWS));
        auto c_col_offset = col_group*TILE_COLS;
        T* c_row_ptr = C + c_row_offset + c_col_offset;
        unrolled_load_row_row_major<0, 0,TILE_COLS,1,  T>(c_row_ptr, regC, MAT_M);
    } else {
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

#endif
