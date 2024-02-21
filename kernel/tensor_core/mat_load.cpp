#include "../include/vx_intrinsics.h"
#include <cmath>

// data type
// M

void load_value(int j, int row_ptr, int& reg) {
    asm volatile("lw %0, %1(%2)" : "=r"(reg) : "r"(j), "r"(row_ptr));
}


template<typename T,  int... Is>
constexpr inline void unrolled_load_row_major(int row_ptr, T (&registers)[sizeof...(Is)], int OTILE_ROW, int OTILE_COL, int A_ROW_STRIDE) {
    int unused[] = {((void)Is, registers[Is] = Is, 0)...};
    for (int i = 0; i < OTILE_ROW; ++i) {
        for (int j = 0; j < OTILE_COL; ++j) {

            registers[i * OTILE_COL + j] = row_ptr + j;// re
        }
        row_ptr += A_ROW_STRIDE;
    }
}

template <typename T_OP, typename T_ACC,

    size_t M , size_t N , size_t K  ,     // OUTput matrix sizes
    size_t OTILE_ROW , size_t OTILE_COL,  // output tile partitioning
    size_t NUM_GROUPS, size_t NUM_PES

    >


void tc_load(T_OP* A, T_OP* B, T_ACC* C, size_t A_ROW_STRIDE){
    int thread_id = vx_thread_id();
    int pe_group_id = thread_id  >> (int)log2(NUM_GROUPS);
    constexpr int total_cols = N / OTILE_COL;
    int col_group = pe_group_id % total_cols;
    int row_group = (pe_group_id -col_group)/total_cols;
    // Row major A
    auto row_thread = row_group * OTILE_ROW + (thread_id % OTILE_ROW);
    auto col_thread = col_group * OTILE_COL;

    auto row_ptr = A + row_group*(A_ROW_STRIDE + row_thread) + col_thread;
    // repeat for K as well
    // create a regA  (per thread)


    T_OP regA[];   // how wide the multiplication is

}


// Row major B
//
//
