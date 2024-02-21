#include "../include/vx_intrinsics.h"
#include <cmath>

// data type
// M
template <typename T_OP, typename T_ACC,

    size_t M , size_t N , size_t K  ,     // OUTput matrix sizes
    size_t OTILE_ROW , size_t OTILE_COL,  // output tile partitioning
    size_t NUM_GROUPS, size_t NUM_PES,

    >
void tc_load(T_OP* A, T_OP* B, T_ACC* C){
    int pe_group_id = vx_thread_id() >> log2(NUM_GROUPS);
    constexpr int total_cols = N / OTILE_COL;
    int col_offset = pe_group_id % total_cols;
    int row_offset = (index -col)/total_cols;
    // Row major A
    auto row_thread = row_offset * OTILE_ROW +


}


// Row major B
//
//
