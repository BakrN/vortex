#pragma once
#include <cmath>
#include <cstdio>
enum class layout_t {
    ROW_MAJOR,
    COL_MAJOR
};

template<int I, int J, int OTILE_COL, int OTILE_ROW,  typename T>
inline constexpr void unrolled_load_row_row_major(T* row_ptr, T* registers,  int ROW_STRIDE) {
    if constexpr (I < OTILE_ROW) {
        if constexpr (J < OTILE_COL) {
            registers[I * OTILE_COL + J] = *(row_ptr + J);
            unrolled_load_row_row_major<I, J + 1, OTILE_COL,OTILE_ROW, T>(row_ptr, registers, ROW_STRIDE);
        } else {
            unrolled_load_row_row_major<I + 1, 0, OTILE_COL,OTILE_ROW, T>(row_ptr+ROW_STRIDE, registers, ROW_STRIDE);
        }
    }
}

template<int I, int J, int OTILE_COL, int OTILE_ROW,  typename T>
inline constexpr void unrolled_load_col_row_major(T* row_ptr, T* registers,  int ROW_STRIDE) {
    if constexpr (I < OTILE_ROW) {
        if constexpr (J < OTILE_COL) {
            registers[I * OTILE_COL + J] = *(row_ptr + J*ROW_STRIDE);
            unrolled_load_col_row_major<I, J + 1, OTILE_COL,OTILE_ROW, T>(row_ptr, registers, ROW_STRIDE);
        } else {
            unrolled_load_col_row_major<I + 1, 0, OTILE_COL,OTILE_ROW, T>(row_ptr+1, registers,ROW_STRIDE);
        }
    }
}

/// LOAD COLUMN FROM COLUMN MAJOR PTR (+1 new row+same column)
//TODO
template<int I, int J, int OTILE_COL, int OTILE_ROW,  typename T>
inline constexpr void unrolled_load_col_col_major(T* col_ptr, T* registers,  int COL_STRIDE) {
    if constexpr (I < OTILE_ROW) {
        if constexpr (J < OTILE_COL) {
            registers[I * OTILE_COL + J] = *(col_ptr + I);
            unrolled_load_col_col_major<I+1, J , OTILE_COL,OTILE_ROW, T>( col_ptr, registers,COL_STRIDE);
        } else {
            unrolled_load_col_col_major<0, J+1, OTILE_COL,OTILE_ROW, T>(col_ptr + COL_STRIDE,registers, COL_STRIDE);
        }
    }
}


//TODO
template<int I, int J, int OTILE_COL, int OTILE_ROW,  typename T>
inline constexpr void unrolled_load_row_col_major(T* col_ptr, T* registers,  int COL_STRIDE) {
    if constexpr (I < OTILE_ROW) {
        if constexpr (J < OTILE_COL) {
            registers[I * OTILE_COL + J] = *(col_ptr+ I*COL_STRIDE);
            unrolled_load_row_col_major<I+1, J, OTILE_COL,OTILE_ROW, T>( col_ptr,registers, COL_STRIDE);
        } else {
            unrolled_load_row_col_major<0, J+1, OTILE_COL,OTILE_ROW, T>( col_ptr+ 1,registers, COL_STRIDE);
        }
    }
}

template<int I, int J, int OTILE_COL, int OTILE_ROW,  typename T, layout_t layout>
inline constexpr void unrolled_load_row(T* col_ptr, T* registers,  int STRIDE) {
    if constexpr (layout == layout_t::ROW_MAJOR) {
        unrolled_load_row_row_major<I, J, OTILE_COL,OTILE_ROW, T>(col_ptr, registers, STRIDE);
    } else {
        unrolled_load_row_col_major<I, J, OTILE_COL,OTILE_ROW, T>(col_ptr, registers, STRIDE);
    }
}

template<int I, int J, int OTILE_COL, int OTILE_ROW,  typename T, layout_t layout>
inline constexpr void unrolled_load_col(T* col_ptr, T* registers,  int STRIDE) {
    if constexpr (layout == layout_t::ROW_MAJOR) {
        unrolled_load_col_row_major<I, J, OTILE_COL,OTILE_ROW, T>(col_ptr, registers, STRIDE);
    } else {
        unrolled_load_col_col_major<I, J, OTILE_COL,OTILE_ROW, T>(col_ptr, registers, STRIDE);
    }
}



template <typename OP_t, typename Res_t,

    size_t M , size_t N , size_t K  ,     // OUTput matrix sizes
    size_t OTILE_ROW , size_t OTILE_COL,  // output tile partitioning
    size_t NUM_PE_PER_GROUP,    // let's assume I know my thread_id beforehand
    layout_t A_layout = layout_t::ROW_MAJOR,
    layout_t B_layout = layout_t::COL_MAJOR,
    layout_t C_layout = layout_t::ROW_MAJOR
    >


void tc_load(Res_t* A, Res_t* B, Res_t* C, size_t A_STRIDE, size_t B_STRIDE, size_t C_STRIDE, size_t tid){
    constexpr int total_cols = N / OTILE_COL;
    int thread_id = tid;
    int pe_group_id = thread_id  /NUM_PE_PER_GROUP;
    int col_group = pe_group_id % total_cols;
    int row_group = (pe_group_id -col_group)/total_cols;
    // Row major A
    auto row_offset = A_STRIDE*(row_group * OTILE_ROW + (thread_id % OTILE_ROW));
    auto col_offset = B_STRIDE*(col_group * OTILE_COL);

    Res_t* a_row_ptr = A + row_offset/(sizeof(Res_t)/sizeof(OP_t));

    // print all above variables
    printf("row_thread = %d\n", row_offset);
    printf("col_thread = %d\n", col_offset);
    printf("row_group = %d\n", row_group);
    printf("col_group = %d\n", col_group);
    printf("pe_group_id = %d\n", pe_group_id);
    printf("thread_id = %d\n", thread_id);
    printf("A offset: %d\n", a_row_ptr - A);


    // Load entire K in  or just OTILE_COL  (for now only load OTILE_COL)
    Res_t regA[K/(sizeof(Res_t)/sizeof(OP_t))];
    unrolled_load_row_row_major<0, 0, K/(sizeof(Res_t)/sizeof(OP_t)),1, Res_t>(a_row_ptr, regA, A_STRIDE); // this actually loads pe group

    Res_t regB[K/(sizeof(Res_t)/sizeof(OP_t))];
    // B col row major
    Res_t* b_col_ptr = B + col_offset/(sizeof(Res_t)/sizeof(OP_t));
    unrolled_load_col_row_major<0, 0, 1,K/(sizeof(Res_t)/sizeof(OP_t)), Res_t>(b_col_ptr, regB, B_STRIDE);

    // Row major c ASSUMES (templatize into according to layout)
    // if row major
    auto c_row_offset = C_STRIDE*(row_group * OTILE_ROW + (thread_id % OTILE_ROW));
    auto c_col_offset = col_group*OTILE_COL;
    Res_t* c_row_ptr = C + c_row_offset + c_col_offset;
    Res_t regC[OTILE_ROW* OTILE_COL]; // row major
    unrolled_load_row_row_major<0, 0,OTILE_COL,1,  Res_t>(c_row_ptr, regC, C_STRIDE);


    // remove this later print regA
    //OP_t* regA_cast= reinterpret_cast<OP_t*>(regA);
    //for (int i = 0; i < K; i++) {
    //    printf("regA[%d] = %d\n", i, regA_cast[i]);
    //}
    // print regB
    //OP_t* regB_cast= reinterpret_cast<OP_t*>(regB);
    //for (int i = 0; i < K; i++) {
    //    printf("regB[%d] = %d\n", i, regB_cast[i]);
    //}
    // print regC
    //for (int i = 0; i < OTILE_COL; i++) {
    //    printf("regC[%d] = %f\n", i, regC[i]);
    //}
}
