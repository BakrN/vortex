#include <vx_intrinsics.h>
#include <vx_print.h>
#include <stdint.h>
#include "base/mat_load.hpp"
//#include "base/mat_mma.hpp"
//#include "base/mat_store.hpp"
#include "common.h"

//#define M 4
//#define N 4
//#define K 8
//
//#define tc_m 2
//#define tc_n 2
//#define tc_k 2
//
//#define OTILE_ROW 2
//#define OTILE_COL 2
//
//#define NUM_PE_PER_GROUP 2
#ifndef tc_m
#error "FAILED M "
#endif



#define DEBUG

#define PREC_RATIO TC_OP_SIZE/TC_RES_SIZE

int main() {
   vx_tmc(-1) ;
   const int thread_id = vx_thread_id();
   const int warp_id = vx_warp_id();
   const int core_id = vx_core_id();

   // possible mat partitioning here...(block should be passed using VX_WSPAWN)

   kernel_arg_t* kernel_arg = (struct kernel_arg_t*)KERNEL_ARG_DEV_MEM_ADDR;

   float* A_start = (float*)(kernel_arg->A_addr);
   float* B_start = (float*)(kernel_arg->B_addr);
   float* C_start = (float*)(kernel_arg->C_addr);
   float* D_start = (float*)(kernel_arg->D_addr);

   const int MAT_M = kernel_arg->M_;
   const int MAT_N = kernel_arg->N_;
   const int MAT_K = kernel_arg->K_;

   float* A_ptr = A_start;
   float* B_ptr = B_start;
   float* C_ptr = C_start;
   float* D_ptr = D_start;

   float regA[tc_k * PREC_RATIO];
   float regB[tc_k * PREC_RATIO];
   float regC[tc_k] = {0};
   // Main GEMM (simple 1 warp impl)
   for (int i = 0 ; i < M; i+=tc_m) {
       A_ptr=A_start + K*i*PREC_RATIO; // ROW MAJOR
       C_ptr=C_start + K*i; // ROW MAJOR
       for (int j = 0; j < N ; j+=tc_n){
           B_ptr=B_start+ K*j*PREC_RATIO;  // COL MAJOR
           C_ptr=C_start +j;
           // load c (OPTIMIZATION)
           for (int k = 0 ; k < K; k+=tc_k){
               // load data into regs
               tc_load<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_ROW, OTILE_COL, TC_NUM_PE_GROUPS
                   >(A_ptr, B_ptr, C_ptr, (float*)regA, (float*)regB, (float*)regC, thread_id, MAT_M, MAT_N, MAT_K);
                    #ifdef DEBUG
                        vx_printf("i = %d, j = %d, k = %d\n",i, j, k );
                    for (int idx = 0 ; idx < k; idx +=TC_RES_SIZE/TC_OP_SIZE) {
                        uint32_t* val = (uint32_t*)(&regA[idx]);
                        uint16_t _first = (uint16_t)(*val >> 16);
                        uint16_t _second = (uint16_t)(*val & 0xFFFF);
                        float16 first(_first) ;
                        float16 second(_second);
                        vx_printf("(%d) regA[%d] = %f\n", thread_id, idx, first.to_float32());
                        vx_printf("(%d) regA[%d] = %f\n", thread_id, idx+1, second.to_float32());

                        val = (uint32_t*)(&regB[idx]);
                        _first = (uint16_t)(*val >> 16);
                        _second = (uint16_t)(*val & 0xFFFF);
                        first = float16(_first);
                        second = float16(_second);
                        vx_printf("(%d) regB[%d] = %f\n", thread_id, idx, first.to_float32());
                        vx_printf("(%d) regB[%d] = %f\n", thread_id, idx+1, second.to_float32());
                    }
                    for (int idx = 0 ; idx < k; idx++) {
                        //print regC
                        vx_printf("(%d) regC[%d] = %f\n", thread_id, idx, regC[idx]);
                    }
                    #endif

                    A_ptr+=tc_k;
                    B_ptr+=tc_k;

               //mat_mma_parallel_wb<>(regA, regB, regC); // accumulate buffer in register file

           }
           //tc_store<>(); // regC
       }
   }






   for (int i = 0 ; i < K/2; i++) {

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
