#include <cstdint>
#include <vx_intrinsics.h>
#include <vx_print.h>
#include "base/mat_load.hpp"
#include "base/mat_mma.hpp"

#define M 4
#define N 4
#define K 8
#define OTILE_ROW 2
#define OTILE_COL 2

#define NUM_PE_PER_GROUP 2
#define NUM_THREADS 8

#define OP_t uint16_t
#define Res_t float


int main() {
    //vx_tmc(-1) ;
   int thread_id = vx_thread_id();

    float A [4][2] = {
        {0b00000000000000010000000000000010, 0b00000000000000110000000000000100},
        {0b00000000000001010000000000000110, 0b00000000000001110000000000001000},
        {0b00000000000010010000000000001010, 0b00000000000010110000000000001100},
        {0b00000000000011010000000000001110 , 0b00000000000011110000000000010000}
    };

    float B[4][2] = {
        {0b00000000000000010000000000000010, 0b00000000000000110000000000000100},
        {0b00000000000001010000000000000110, 0b00000000000001110000000000001000},
        {0b00000000000010010000000000001010, 0b00000000000010110000000000001100},
        {0b00000000000011010000000000001110, 0b00000000000011110000000000010000}
    };


    float C [4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    float* A_ptr = reinterpret_cast<float*>(A);
    float* B_ptr = reinterpret_cast<float*>(B);
    float* C_ptr = reinterpret_cast<float*>(C);

    // Loading the data

    float regA[K/2] = {0};
    float regB[K/2] = {0};
    float  regC[K] = {0};

    tc_load<OP_t, Res_t, M, N, K,OTILE_ROW, OTILE_COL, NUM_PE_PER_GROUP>(A_ptr, B_ptr, C_ptr, reinterpret_cast<float*>(regA), reinterpret_cast<float*>(regB), regC,  2 , 2, 4, thread_id);


    for (int i = 0 ; i < K/2; i++) {
        vx_printf("(%d) regA[%d] = %f\n", thread_id, i, regA[i]);
    }

    for (int i = 0 ; i < K/2; i++) {
        vx_printf("(%d) regB[%d] = %f\n", thread_id, i, regB[i]);
    }

    for (int i = 0 ; i < K; i++) {
        vx_printf("(%d) regC[%d] = %f\n", thread_id, i, regC[i]);
    }
    // Doing computation

    // Storing the data

    return 0 ;
}
