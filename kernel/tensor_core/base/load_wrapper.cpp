#include "mat_load.hpp"

#ifndef M
#define M 4
//#error M not defined
#endif

#ifndef N
#define N 4
//#error N not defined
#endif

#ifndef K
#define K 4
//#error K not defined
#endif

#ifndef K
#define K 4
//#error K not defined
#endif

#ifndef OTILE_COL
#define OTILE_COL 4
#endif

#ifndef OTILE_ROW
#define OTILE_ROW 4
#endif

#ifndef NUM_PE_PER_GROUP
#define NUM_PE_PER_GROUP 4
#endif


#ifndef A_LAYOUT
#define A_LAYOUT ROW_MAJOR
#endif

#ifndef B_LAYOUT
#define B_LAYOUT ROW_MAJOR
#endif

#ifndef C_LAYOUT
#define C_LAYOUT ROW_MAJOR
#endif

#if A_LAYOUT == ROW_MAJOR
#define a_layout layout_t::ROW_MAJOR
#elif A_LAYOUT == COL_MAJOR
#define a_layout layout_t::COL_MAJOR
#endif

#if B_LAYOUT == ROW_MAJOR
#define b_layout layout_t::ROW_MAJOR
#elif B_LAYOUT == COL_MAJOR
#define a_layout layout_t::COL_MAJOR
#endif

#if C_LAYOUT == ROW_MAJOR
#define c_layout layout_t::ROW_MAJOR
#elif C_LAYOUT == COL_MAJOR
#define a_layout layout_t::COL_MAJOR
#endif

extern "C" {
    void mma_load_float16_float32(float* A, float * B, float* C, float* regA, float* regB, float* regC , unsigned int A_STRIDE, unsigned int B_STRIDE, unsigned int C_STRIDE, int thread_id) {

        tc_load<uint16_t, float, M, N, K, OTILE_ROW, OTILE_COL, NUM_PE_PER_GROUP,a_layout, b_layout, c_layout>(A, B, C, regA, regB, regC, A_STRIDE, B_STRIDE, C_STRIDE, thread_id);
    }
}
