#include "mat_load.hpp"
#include <cstdint>
#include <iostream>

#define M 4
#define N 4
#define K 8
#define OTILE_ROW 2
#define OTILE_COL 2

#define NUM_PE_PER_GROUP 2
#define NUM_THREADS 8

#define OP_t uint16_t
#define Res_t float


void tload(float* A_ptr, float* B_ptr, float* C_ptr,  int row, int col, int stride, int thread_id) {
    // Create A matrix and fill it with some values
    //uint16_t A [4][4] = {
    //    {1, 2, 3, 4},
    //    {5, 6, 7, 8},
    //    {9, 10, 11, 12},
    //    {13, 14, 15, 16}
    //};
    //// Creat B matrix and fill it with some values
    //uint16_t B [4][4] = {
    //    {1, 2, 3, 4},
    //    {5, 6, 7, 8},
    //    {9, 10, 11, 12},
    //    {13, 14, 15, 16}
    //};
    //// Create C matrix and fill it with some values
    //float C [4][4] = {
    //    {1, 2, 3, 4},
    //    {5, 6, 7, 8},
    //    {9, 10, 11, 12},
    //    {13, 14, 15, 16}
    //};

    //float* A_ptr = reinterpret_cast<float*>(A);
    //float* B_ptr = reinterpret_cast<float*>(B);
    //float* C_ptr = reinterpret_cast<float*>(C);

    //float* A_ptr = reinterpret_cast<float*>(a_ptr);
    //float* B_ptr = reinterpret_cast<float*>(b_ptr);
    //float* C_ptr = reinterpret_cast<float*>(c_ptr);
    float  regA[K/2];
    float regB[K/2];
    float  regC[K];
    //float  regD[K];

    //for (auto thread_id = 0 ; thread_id < NUM_THREADS ; thread_id++)  {
        //std::cout << "#########################" <<  std::endl;
        //std::cout << "Now accessing thread id: " << thread_id << std::endl;
        tc_load<OP_t, Res_t, M, N, K,OTILE_ROW, OTILE_COL, NUM_PE_PER_GROUP>(A_ptr, B_ptr, C_ptr, reinterpret_cast<float*>(regA), reinterpret_cast<float*>(regB), regC,  2 , 2, 4, 0) ;
        //std::cout << "#########################" << std::endl;
    //}


    float regD;
    for (auto i = 0; i < K/2; i++) {
          regD += regA[i] * regB[i];
    }
    std::cout << "regD = " << regD << std::endl;

    //for (int i = 0; i < K; i++) {
    //      printf("regA[%d] = %d\n", i, regA[i]);
    //}
    //for (int i = 0; i < K; i++) {
    //      printf("regB[%d] = %d\n", i, regB[i]);
    //}
    //for (int i = 0; i < K; i++) {
    //      printf("regC[%d] = %f\n", i, regC[i]);
    //}

}
