#include <vx_intrinsics.h>
#include <vx_print.h>
#include <stdint.h>
#include "base/mat_load.hpp"
#include "base/mat_mma.hpp"
#include "base/mat_store.hpp"
#include "common.h"

//#define MAT_M 4
//#define MAT_N 4
//#define MAT_K 8
//
//#define tc_m 2
//#define tc_n 2
//#define tc_k 2
//
//#define OTILE_ROW 2
//#define OTILE_COL 2
//
//#define NUM_PE_PER_GROUP 2




#define PREC_RATIO TC_OP_SIZE/TC_RES_SIZE



int main() {

   // print a , b , c and , d
   vx_tmc(-1) ;
   const int thread_id = vx_thread_id();
   const int warp_id = vx_warp_id();
   const int core_id = vx_core_id();

   // possible mat partitioning here...(block should be passed using VX_WSPAWN)

   kernel_arg_t* kernel_arg = (kernel_arg_t*)KERNEL_ARG_DEV_MEM_ADDR;

   float* const A_start = (float*const)(kernel_arg->A_addr);
   float* const B_start = (float*const)(kernel_arg->B_addr);
   float* const C_start = (float*const)(kernel_arg->C_addr);
   float* const D_start = (float*const)(kernel_arg->D_addr);

   const int MAT_M = kernel_arg->M_;
   const int MAT_N = kernel_arg->N_;
   const int MAT_K = kernel_arg->K_;

   const layout_t a_layout = (layout_t)(kernel_arg->A_layout);
   const layout_t b_layout = (layout_t)(kernel_arg->B_layout);
   const layout_t c_layout = (layout_t)(kernel_arg->C_layout);
   const layout_t d_layout = (layout_t)(kernel_arg->D_layout);

   float* A_ptr = A_start;
   float* B_ptr = B_start;
   float* C_ptr = C_start;
   float* D_ptr = D_start;

   float regA[tc_k * PREC_RATIO];
   float regB[tc_k * PREC_RATIO];
   float regC[OTILE_COL] = {0}; // this should be equal to tc_n
   // Main GEMM (simple 1 warp impl)
   for (int i = 0 ; i < MAT_M; i+=tc_m) {
       C_ptr=C_start + MAT_N*i; // ROW MAJOR
       for (int j = 0; j < MAT_N ; j+=tc_n){
           A_ptr=A_start + MAT_K*i*PREC_RATIO; // ROW MAJOR
           B_ptr=B_start+ MAT_K*j*PREC_RATIO;  // COL MAJOR

           // load c (OPTIMIZATION)
           tc_load_fragment_c<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_ROW, OTILE_COL, TC_NUM_PES>(C_ptr, regC, thread_id, MAT_M, MAT_N);
           for (int k = 0 ; k < MAT_K; k+=tc_k){
               tc_load_fragment_a<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_ROW, OTILE_COL, TC_NUM_PES>(A_ptr, regA, thread_id, MAT_M, MAT_K);
               tc_load_fragment_b<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_ROW, OTILE_COL, TC_NUM_PES>(B_ptr, regB, thread_id, MAT_N, MAT_K);

               #ifdef DEBUG

                   vx_printf("i = %d, j = %d, k = %d\n",i, j, k );
                   for (int idx = 0 ; idx < tc_k*PREC_RATIO; idx +=1) {
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
                   for (int idx = 0 ; idx < OTILE_COL; idx++) {
                       //print regC
                       vx_printf("(%d) regC[%d] = %f\n", thread_id, idx, regC[idx]);
                   }

               #endif


               tc_mma_acc_reg_wb_reg<TC_OP_COUNT, TC_NUM_PES, TC_RES_SIZE, TC_OP_SIZE,true>((float*)regA, (float*)regB, (float*)regC, (float*) regC);


               //#ifdef DEBUG

               //for (int idx = 0 ; idx < OTILE_COL; idx++) {
               //    vx_printf("(%d) regD[%d] = %f\n", thread_id, idx, regD[idx]);
               //}

               //#endif

               A_ptr+=tc_k * PREC_RATIO; // assuming row major
               B_ptr+=tc_k * PREC_RATIO; // assumiming col_major
           }
           C_ptr=C_ptr + tc_n ; // ROW MAJOR
           // Storage strategy can change here
           tc_store<float,1, tc_n>(thread_id , 0 , MAT_N, /*d_layout,*/ (float*)regC, (float*)D_ptr);
       }
   }



   // Doing computation

   // Storing the data

    return 0 ;
}
