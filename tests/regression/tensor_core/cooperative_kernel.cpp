#include <vx_intrinsics.h>
#include <vx_print.h>
#include <stdint.h>
#include <vx_spawn.h>
#include "base/mat_load.hpp"
#include "base/mat_mma.hpp"
#include "base/mat_store.hpp"
#include "common.h"

/** NOTES
 *  Before and after barrier ids are unique to each workgroup
 * **/

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
inline void load_fragment(float* ptr , float*reg , const int wid, const int tid, int dim0,int dim1){
    if constexpr(T == MatT::A) {
        load_tile_a_wg<float, TC_OP_SIZE, TC_RES_SIZE,TC_THREAD_GROUP_SIZE, NUM_THREADS,K_MULTIPLE,A_ROWS,WARP_GROUP_SIZE> (ptr, reg, wid,tid, dim0, dim1);
    } else {
        if constexpr(T == MatT::B) {
            load_tile_b_wg<float, TC_OP_SIZE, TC_RES_SIZE,TC_THREAD_GROUP_SIZE, NUM_THREADS,K_MULTIPLE,B_COLS,WARP_GROUP_SIZE>(ptr, reg, wid,tid, dim0, dim1) ;
        }  else {
            load_tile_c<float, TC_OP_SIZE, TC_RES_SIZE,TC_THREAD_N,TC_THREAD_GROUP_SIZE, NUM_THREADS,A_ROWS, B_COLS>(ptr,reg, tid, dim0, dim1) ;
        }
    }
}


void kernel_body(int task_id, kernel_arg_t* __UNIFORM__ kernel_arg) {
    // possible values , 1, 2 , 4 ,8 (warp groups)
   static_assert(WARP_GROUP_SIZE >1 , "To use cooperative warp kernels, the warp group size must at least be 2");
   const int thread_id = vx_thread_id();
   const int warp_id = vx_warp_id();
   const int  warp_group = warp_id  / WARP_GROUP_SIZE;
   const int core_id = vx_core_id();

   const int MAT_M = kernel_arg->M_;
   const int MAT_N = kernel_arg->N_;
   const int MAT_K = kernel_arg->K_;
   // Cooeprative mat partitioning here


   int num_warp_groups = kernel_arg->num_tasks/(WARP_GROUP_SIZE*NUM_THREADS) ;
   uint32_t log2_num_warp_groups = num_warp_groups >> 1 ? num_warp_groups >> 1 : 1;

   uint32_t tileSizeCol = MAT_N/log2_num_warp_groups ;
   uint32_t tileSizeRow = MAT_M/log2_num_warp_groups ;

   if (num_warp_groups == 2) {
       tileSizeCol = MAT_N /2;
       tileSizeRow = MAT_M;
       //tileSizeCol = tileSizeCol/2;
   }

   uint32_t num_blocksCols = MAT_N/tileSizeCol;

   uint32_t blockCol  = warp_group % num_blocksCols;
   uint32_t blockRow  = warp_group / num_blocksCols;

   if (num_warp_groups == 2){
       blockRow = 0 ;
   }

   //vx_printf("task_id: %d, blockCol = %d, blockRow = %d, warp_group_idx: %d\n", task_id, blockCol, blockRow, warp_group);

   float* const A_start = (float*const)(kernel_arg->A_addr) + blockRow*tileSizeRow*MAT_N*PREC_RATIO ; // Assuming row major
   float* const B_start = (float*const)(kernel_arg->B_addr) + blockCol*tileSizeCol*MAT_K*PREC_RATIO ; // assuming col major
   float* const C_start = (float*const)(kernel_arg->C_addr) + blockRow*tileSizeRow*MAT_N + blockCol *tileSizeCol; // assuming row major
   float* const D_start = (float*const)(kernel_arg->D_addr) + blockRow*tileSizeRow*MAT_N + blockCol *tileSizeCol;



   const layout_t a_layout = (layout_t)(kernel_arg->A_layout);
   const layout_t b_layout = (layout_t)(kernel_arg->B_layout);
   const layout_t c_layout = (layout_t)(kernel_arg->C_layout);
   const layout_t d_layout = (layout_t)(kernel_arg->D_layout);

   float* A_ptr = A_start;
   float* B_ptr = B_start;
   float* C_ptr = C_start;
   float* D_ptr = D_start;

   float regA[A_ROWS*K_MULTIPLE]; // THREAD_K*PREC_RATIO is always 1 i want to issue at once
   float regB[B_COLS*K_MULTIPLE];
   float regC[A_ROWS*B_COLS* TC_THREAD_N] = {0}; // Number of mac units per lane

   // Main GEMM (simple 1 warp impl)
   for (int i = 0; i < tileSizeRow; i+=tc_m) {
       C_ptr=C_start + MAT_N*i; // ROW MAJOR
       D_ptr=D_start + MAT_N*i; // ROW MAJOR
       for (int j = 0; j < tileSizeCol; j+=tc_n){
           A_ptr=A_start + MAT_K*i*PREC_RATIO; // ROW MAJOR
           B_ptr=B_start + MAT_K*j*PREC_RATIO;  // COL MAJOR


           //if (warp_id % WARP_GROUP_SIZE == 0) {
           //     load_fragment<MatT::C>(C_ptr, (float*)regC, warp_id, thread_id, MAT_M, MAT_N);
           //     float _tmpA[A_ROWS*K_MULTIPLE] = {0};
           //     float _tmpB[B_COLS*K_MULTIPLE] = {0};
           //    //tc_mma_acc_reg_wb_buf >(_tmpA, _tmpB, regC) ;
           //     tc_mma_acc_reg_wb_buf<A_ROWS, B_COLS,  TC_THREAD_N>(_tmpA, _tmpB, regC);
           //}
           //vx_barrier(warp_group, WARP_GROUP_SIZE);



           for (int k = 0; k < (MAT_K); k+=tc_k*WARP_GROUP_SIZE) {

               load_fragment<MatT::A>(A_ptr, (float*)regA, warp_id, thread_id, MAT_M, MAT_K);

               load_fragment<MatT::B>(B_ptr, (float*)regB, warp_id, thread_id, MAT_N, MAT_K);

               tc_mma_acc_buf_wb_buf<A_ROWS, B_COLS,  TC_THREAD_N>(regA, regB);

               A_ptr+=tc_k * WARP_GROUP_SIZE * PREC_RATIO; // assuming row major
               B_ptr+=tc_k * WARP_GROUP_SIZE * PREC_RATIO; // assumming col_major
           }


           vx_barrier(warp_group,WARP_GROUP_SIZE);

           if (warp_id % warp_group == 0) {
                float _tmpA[A_ROWS*K_MULTIPLE] = {0};
                float _tmpB[B_COLS*K_MULTIPLE] = {0};
                tc_mma_acc_buf_wb_reg<A_ROWS, B_COLS,  TC_THREAD_N> (_tmpA, _tmpB, regC) ;
                tc_store<float, TC_OP_SIZE, TC_RES_SIZE,TC_THREAD_N , TC_THREAD_GROUP_SIZE, TC_NUM_THREADS,A_ROWS,B_COLS>((float*)D_ptr, (float*)regC,  thread_id, MAT_M, MAT_N);
           }



           C_ptr=C_ptr + tc_n ; // ROW MAJOR
           D_ptr=D_ptr + tc_n ; // ROW MAJOR
       }
   }
}


int main(){
	kernel_arg_t* arg = (kernel_arg_t*)KERNEL_ARG_DEV_MEM_ADDR;
    vx_spawn_tasks(arg->num_tasks, (vx_spawn_tasks_cb)kernel_body, arg);
    return 0 ;
}
