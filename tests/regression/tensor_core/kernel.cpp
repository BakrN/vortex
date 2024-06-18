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




#define PREC_RATIO TC_OP_SIZE/TC_RES_SIZE


enum class MatT {
    A,
    B,
    C,
    D
};

template <MatT>
struct tc_tile ;


template<MatT T >
inline void load_fragment(float* ptr , float*reg , int tid, int dim0,int dim1){
    if constexpr(T == MatT::A) {
        tc_load_fragment_a<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_ROW, OTILE_COL, TC_NUM_PES, TC_OUTER_PRODUCT_ROWS>(ptr, reg, tid, dim0, dim1) ;
    } else {
        if constexpr(T == MatT::B) {
            tc_load_fragment_b<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_COL, TC_NUM_PES,TC_OUTER_PRODUCT_COLS>(ptr,reg,tid, dim0,dim1);
        }  else {
            tc_load_fragment_c<float,TC_OP_SIZE, TC_RES_SIZE, tc_n, tc_k, OTILE_ROW, OTILE_COL, TC_NUM_PES, TC_OUTER_PRODUCT_ROWS>(ptr,reg,tid, dim0,dim1) ;
        }
    }
}


void kernel_body(int task_id, kernel_arg_t* __UNIFORM__ kernel_arg) {

   const int thread_id = vx_thread_id();
   //const int warp_id = vx_warp_id();
   //const int core_id = vx_core_id();

   const int MAT_M = kernel_arg->M_;
   const int MAT_N = kernel_arg->N_;
   const int MAT_K = kernel_arg->K_;
   // Mat partitioning here

   // Strategy here
   // 2D Block output tile partitiong (possible to do k opt)
   // Possible to assign X tasks per tile and reduce

   uint32_t log2_num_tasks = (kernel_arg->num_tasks/NUM_THREADS >1 ? kernel_arg->num_tasks/NUM_THREADS >> 1 : 1);

   uint32_t tileSizeCol = MAT_N/log2_num_tasks;
   uint32_t tileSizeRow = MAT_M/log2_num_tasks;

   if (kernel_arg->num_tasks/NUM_THREADS ==2) {
       tileSizeCol = MAT_N /2;
       tileSizeRow = MAT_M;
       //tileSizeCol = tileSizeCol/2;
   } else if (kernel_arg->num_tasks/NUM_THREADS ==8) {
       tileSizeCol = MAT_N /4;
       tileSizeRow = MAT_M /2 ;
   }

   uint32_t num_blocksCols = MAT_N/tileSizeCol;

   uint32_t blockCol  = (task_id/NUM_THREADS) % num_blocksCols;
   uint32_t blockRow  = (task_id/NUM_THREADS) / num_blocksCols;
   if (kernel_arg->num_tasks/NUM_THREADS==2){
       blockRow = 0 ;
   }

   //vx_printf("task_id: %d, blockCol = %d, blockRow = %d\n", task_id, blockCol, blockRow);

   float* const A_start = (float*const)(kernel_arg->A_addr) + blockRow*tileSizeRow*MAT_N*PREC_RATIO ; // Assuming row major
   float* const B_start = (float*const)(kernel_arg->B_addr) + blockCol*tileSizeCol*MAT_K*PREC_RATIO; // assuming col major
   float* const C_start = (float*const)(kernel_arg->C_addr) + blockRow*tileSizeRow*MAT_N + blockCol *tileSizeCol; // assuming row major
   float* const D_start = (float*const)(kernel_arg->D_addr) + blockRow*tileSizeRow*MAT_N + blockCol *tileSizeCol;



   //const layout_t a_layout = (layout_t)(kernel_arg->A_layout);
   //const layout_t b_layout = (layout_t)(kernel_arg->B_layout);
   //const layout_t c_layout = (layout_t)(kernel_arg->C_layout);
   //const layout_t d_layout = (layout_t)(kernel_arg->D_layout);

   float* A_ptr = A_start;
   float* B_ptr = B_start;
   float* C_ptr = C_start;
   float* D_ptr = D_start;

   float regA[tc_k * PREC_RATIO * TC_OUTER_PRODUCT_ROWS ];
   float regB[tc_k * PREC_RATIO * TC_OUTER_PRODUCT_COLS ];
   float regC[TC_OUTER_PRODUCT_ROWS* OTILE_COL] = {0}; // this should be equal to tc_n

   // Main GEMM (simple 1 warp impl)
   for (int i = 0; i < tileSizeRow; i+=tc_m) {
       C_ptr=C_start + MAT_N*i; // ROW MAJOR
       D_ptr=D_start + MAT_N*i; // ROW MAJOR
       for (int j = 0; j < tileSizeCol; j+=tc_n){
           A_ptr=A_start + MAT_K*i*PREC_RATIO; // ROW MAJOR
           B_ptr=B_start + MAT_K*j*PREC_RATIO;  // COL MAJOR


           #ifdef TC_USE_TILES
           load_fragment<MatT::A>(A_ptr, regA, thread_id, MAT_M, MAT_K);
           load_fragment<MatT::B>(B_ptr, regB, thread_id, MAT_N, MAT_K);

           tc_mma_acc_zero_wb_buf<TC_OP_COUNT, TC_NUM_PES, TC_RES_SIZE, TC_OP_SIZE, TC_OUTER_PRODUCT_COLS>((float*)regA, (float*)regB);
           A_ptr+=tc_k * PREC_RATIO; // assuming row major
           B_ptr+=tc_k * PREC_RATIO; // assumming col_major

           for (int k = tc_k ; k < MAT_K; k+=tc_k){
           #else
           load_fragment<MatT::C>(C_ptr, regC, thread_id, MAT_M, MAT_N);
           for (int k = 0 ; k < MAT_K; k+=tc_k){
           #endif

               load_fragment<MatT::A>(A_ptr, regA, thread_id, MAT_M, MAT_K);

               load_fragment<MatT::B>(B_ptr, regB, thread_id, MAT_N, MAT_K);



               #ifdef TC_USE_TILES
                   // acc tile (unroll for N times acc tiles)
                   // repeat this NUM Tile times
                   //
                   tc_mma_acc_buf_wb_buf<TC_OP_COUNT, TC_NUM_PES, TC_RES_SIZE, TC_OP_SIZE, TC_OUTER_PRODUCT_COLS>((float*)regA, (float*)regB) ;
               #else
                   //#ifdef DEBUG

                   //vx_printf("i = %d, j = %d, k = %d\n",i, j, k );
                   //for (int idx = 0 ; idx < tc_k*PREC_RATIO; idx +=1) {
                   //    uint32_t* val = (uint32_t*)(&regA[idx]);
                   //    uint16_t _first = (uint16_t)(*val >> 16);
                   //    uint16_t _second = (uint16_t)(*val & 0xFFFF);
                   //    float16 first(_first) ;
                   //    float16 second(_second);
                   //    vx_printf("(%d) regA[%d] = %f\n", thread_id, idx, first.to_float32());
                   //    vx_printf("(%d) regA[%d] = %f\n", thread_id, idx+1, second.to_float32());

                   //    val = (uint32_t*)(&regB[idx]);
                   //    _first = (uint16_t)(*val >> 16);
                   //    _second = (uint16_t)(*val & 0xFFFF);
                   //    first = float16(_first);
                   //    second = float16(_second);
                   //    vx_printf("(%d) regB[%d] = %f\n", thread_id, idx, first.to_float32());
                   //    vx_printf("(%d) regB[%d] = %f\n", thread_id, idx+1, second.to_float32());
                   //}
                   //for (int i = 0 ; i < TC_OUTER_PRODUCT_ROWS; i++) {
                   //    //print regC
                   //    for (int j = 0 ; j < OTILE_COL; j++) {
                   //        vx_printf(" (%d, %d) , regC[%d] = %f\n", i,j, regC[i*OTILE_COL + j]);
                   //    }
                   //}

                   //#endif
                   tc_mma_acc_reg_wb_reg<TC_OP_COUNT, TC_NUM_PES, TC_RES_SIZE, TC_OP_SIZE,TC_OUTER_PRODUCT_ROWS,TC_OUTER_PRODUCT_COLS,true>((float*)regA, (float*)regB, (float*)regC);
               #endif



               //#ifdef DEBUG

               //for (int idx = 0 ; idx < OTILE_COL; idx++) {
               //    vx_printf("(%d) regD[%d] = %f\n", thread_id, idx, regD[idx]);
               //}

               //#endif

               A_ptr+=tc_k * PREC_RATIO; // assuming row major
               B_ptr+=tc_k * PREC_RATIO; // assumming col_major
           }
           #ifdef TC_USE_TILES
           // flush tc results for each used tiles
           // Do (initial C) accumulation
           load_fragment<MatT::C>(C_ptr, regC, thread_id, MAT_M, MAT_N);
           float regD[TC_OUTER_PRODUCT_ROWS* OTILE_COL] = {0};
           tc_flush_tiles<float, TC_NUM_PES, TC_OUTER_PRODUCT_ROWS,TC_OUTER_PRODUCT_COLS > ((float*)(regD)) ;

           // Treat the float as an unsigned 32-bit integer
           float* regD_ptr = (float*)(regD);
           float* regC_ptr = (float*)(regC);

           unrolled_for_func<0,OTILE_COL>(fadd_regs, &regD_ptr, &regC_ptr);

           // store
           tc_store<float, tc_n, OTILE_ROW, OTILE_COL, TC_NUM_PES, TC_OUTER_PRODUCT_ROWS>((float*)regD, (float*)D_ptr, thread_id, MAT_M, MAT_N);
           #else
           tc_store<float, tc_n, OTILE_ROW, OTILE_COL, TC_NUM_PES,TC_OUTER_PRODUCT_ROWS>((float*)regC, (float*)D_ptr, thread_id, MAT_M, MAT_N);
           #endif
           C_ptr=C_ptr + tc_n ; // ROW MAJOR
           D_ptr=D_ptr + tc_n ; // ROW MAJOR
       }
   }
   // Accumulation of first C here
}


int main(){
	kernel_arg_t* arg = (kernel_arg_t*)KERNEL_ARG_DEV_MEM_ADDR;
	vx_spawn_tasks(arg->num_tasks, (vx_spawn_tasks_cb)kernel_body, arg);
    return 0 ;
}
