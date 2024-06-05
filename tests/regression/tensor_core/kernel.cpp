#include <vx_intrinsics.h>
#include <vx_print.h>
#include <stdint.h>
#include <vx_spawn.h>
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



#if (TC_NUM_ACC_TILES > 0)
#define TILE_ACC_STRATEGY
#endif

#define PREC_RATIO TC_OP_SIZE/TC_RES_SIZE

void kernel_body(int task_id, kernel_arg_t* __UNIFORM__ kernel_arg) {

   const int thread_id = vx_thread_id();
   const int warp_id = vx_warp_id();
   const int core_id = vx_core_id();

   const int MAT_M = kernel_arg->M_;
   const int MAT_N = kernel_arg->N_;
   const int MAT_K = kernel_arg->K_;
   // Mat partitioning here

   // Strategy here
   // 2D Block output tile partitiong (possible to do k opt)
   // Possible to assign X tasks per tile and reduce

   uint32_t log2_num_tasks = (kernel_arg->num_tasks/NUM_THREADS >1 ? kernel_arg->num_tasks/NUM_THREADS >> 1 : 1);

   uint32_t tileSizeX = MAT_N/log2_num_tasks;
   uint32_t tileSizeY = MAT_M/log2_num_tasks;

   if (kernel_arg->num_tasks/NUM_THREADS ==2) {
       tileSizeX = tileSizeX/2;
   }

   uint32_t num_blocksX = MAT_N/tileSizeX;
   uint32_t num_blocksY = MAT_M/tileSizeY;


   uint32_t blockX  = (task_id/NUM_THREADS) % num_blocksX;
   uint32_t blockY  = (task_id/NUM_THREADS) / num_blocksY;

   //vx_printf("task_id: %d, blockX = %d, blockY = %d\n", task_id, blockX, blockY);

   float* const A_start = (float*const)(kernel_arg->A_addr) + blockY*MAT_N*PREC_RATIO ; // Assuming row major
   float* const B_start = (float*const)(kernel_arg->B_addr) + blockX*MAT_K*PREC_RATIO; // assuming col major
   float* const C_start = (float*const)(kernel_arg->C_addr) + blockY*MAT_N + blockX *tileSizeX; // assuming row major
   float* const D_start = (float*const)(kernel_arg->D_addr) + blockY*MAT_N + blockX *tileSizeX;



   const layout_t a_layout = (layout_t)(kernel_arg->A_layout);
   const layout_t b_layout = (layout_t)(kernel_arg->B_layout);
   const layout_t c_layout = (layout_t)(kernel_arg->C_layout);
   const layout_t d_layout = (layout_t)(kernel_arg->D_layout);

   float* A_ptr = A_start;
   float* B_ptr = B_start;
   float* C_ptr = C_start;
   float* D_ptr = D_start;

   float regA[tc_k * PREC_RATIO];
   float regB[tc_k * PREC_RATIO * ((TC_NUM_ACC_TILES > 0) ? TC_NUM_ACC_TILES : 1)];
   float regC[OTILE_COL] = {0}; // this should be equal to tc_n

   // Main GEMM (simple 1 warp impl)
   for (int i = 0 ; i < MAT_M; i+=tc_m*((TC_NUM_ACC_TILES > 0) ? TC_NUM_ACC_TILES : 1)) {
       C_ptr=C_start + MAT_N*i; // ROW MAJOR
       D_ptr=D_start + MAT_N*i; // ROW MAJOR
       for (int j = 0; j < MAT_N ; j+=tc_n*((TC_NUM_ACC_TILES > 0) ? TC_NUM_ACC_TILES : 1)){
           A_ptr=A_start + MAT_K*i*PREC_RATIO; // ROW MAJOR
           B_ptr=B_start + MAT_K*j*PREC_RATIO;  // COL MAJOR


           #ifdef TILE_ACC_STRATEGY
           tc_load_fragment_a<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_ROW, OTILE_COL, TC_NUM_PES>(A_ptr, regA, thread_id, MAT_M, MAT_K);
           tc_load_fragment_b<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_COL, TC_NUM_PES,((TC_NUM_ACC_TILES > 0) ? TC_NUM_ACC_TILES : 1) >(B_ptr, regB, thread_id, MAT_N, MAT_K);

           tc_mma_acc_zero_wb_buf<TC_OP_COUNT, TC_NUM_PES, TC_RES_SIZE, TC_OP_SIZE, TC_NUM_ACC_TILES>((float*)regA, (float*)regB, 0);
           A_ptr+=tc_k * PREC_RATIO; // assuming row major
           B_ptr+=tc_k * PREC_RATIO; // assumming col_major

           for (int k = tc_k ; k < MAT_K; k+=tc_k){
           #else
           tc_load_fragment_c<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_ROW, OTILE_COL, TC_NUM_PES>(C_ptr, regC, thread_id, MAT_M, MAT_N);
           for (int k = 0 ; k < MAT_K; k+=tc_k){
           #endif

               tc_load_fragment_a<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_ROW, OTILE_COL, TC_NUM_PES>(A_ptr, regA, thread_id, MAT_M, MAT_K);

               tc_load_fragment_b<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_COL, TC_NUM_PES,((TC_NUM_ACC_TILES > 0) ? TC_NUM_ACC_TILES : 1) >(B_ptr, regB, thread_id, MAT_N, MAT_K);




               #ifdef TILE_ACC_STRATEGY
                   // acc tile (unroll for N times acc tiles)
                   // repeat this NUM Tile times
                   //
                   tc_mma_acc_buf_wb_buf<TC_OP_COUNT, TC_NUM_PES, TC_RES_SIZE, TC_OP_SIZE, TC_NUM_ACC_TILES>((float*)regA, (float*)regB, 0) ;
               #else
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
                   tc_mma_acc_reg_wb_reg<TC_OP_COUNT, TC_NUM_PES, TC_RES_SIZE, TC_OP_SIZE,true>((float*)regA, (float*)regB, (float*)regC);
               #endif



               //#ifdef DEBUG

               //for (int idx = 0 ; idx < OTILE_COL; idx++) {
               //    vx_printf("(%d) regD[%d] = %f\n", thread_id, idx, regD[idx]);
               //}

               //#endif

               A_ptr+=tc_k * PREC_RATIO; // assuming row major
               B_ptr+=tc_k * PREC_RATIO; // assumming col_major
           }
           #ifdef TILE_ACC_STRATEGY
           // flush tc results for each used tiles
           // Do (initial C) accumulation
           tc_load_fragment_c<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_ROW, OTILE_COL, TC_NUM_PES>(C_ptr, regC, thread_id, MAT_M, MAT_N);
           float regD[OTILE_COL] = {0};
           tc_flush_tiles<float, OTILE_COL, TC_NUM_ACC_TILES> ((float*)(regD)) ;

           // Treat the float as an unsigned 32-bit integer
           float* regD_ptr = (float*)(regD);
           float* regC_ptr = (float*)(regC);

           unrolled_for_func<0,OTILE_COL>(fadd_regs, &regD_ptr, &regC_ptr);

           // store
           tc_store<float, tc_n, OTILE_ROW, OTILE_COL, TC_NUM_PES>((float*)regD, (float*)D_ptr, thread_id, MAT_N);
           #else
           tc_store<float, tc_n, OTILE_ROW, OTILE_COL, TC_NUM_PES>((float*)regC, (float*)D_ptr, thread_id, MAT_N);
           #endif
           C_ptr=C_ptr + tc_n * ((TC_NUM_ACC_TILES > 0) ? TC_NUM_ACC_TILES : 1) ; // ROW MAJOR
           D_ptr=D_ptr + tc_n * ((TC_NUM_ACC_TILES > 0) ? TC_NUM_ACC_TILES : 1); // ROW MAJOR
       }
   }
   // Accumulation of first C here
}


int main(){
	kernel_arg_t* arg = (kernel_arg_t*)KERNEL_ARG_DEV_MEM_ADDR;
	vx_spawn_tasks(arg->num_tasks, (vx_spawn_tasks_cb)kernel_body, arg);
    return 0 ;
}
