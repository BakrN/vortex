#include <vx_intrinsics.h>
#include <vx_print.h>
#include <stdint.h>
#include <vx_spawn.h>
#include "../base/mat_load.hpp"
#include "../base/mat_mma.hpp"
#include "../base/mat_store.hpp"
#include "VX_config.h"
#include "common.h"


#define PREC_RATIO TC_OP_SIZE/TC_RES_SIZE


enum class MatT {
    A,
    B,
    C,
    D
};


template<MatT T >
inline void load_fragment(float* ptr , float*reg , const int wid, const int tid, int dim0,int dim1){
    if constexpr(T == MatT::A) {
        load_tile_a_wg<float, TC_OP_SIZE, TC_RES_SIZE,TC_THREAD_GROUP_SIZE, NUM_THREADS,K_MULTIPLE,A_ROWS, NUM_WARPS> (ptr, reg, wid,tid, dim0, dim1);
    } else {
        if constexpr(T == MatT::B) {
            load_tile_b_wg<float, TC_OP_SIZE, TC_RES_SIZE,TC_THREAD_GROUP_SIZE, NUM_THREADS,K_MULTIPLE,B_COLS,NUM_WARPS>(ptr, reg, wid,tid, dim0, dim1) ;
        }  else {
            load_tile_c<float, TC_OP_SIZE, TC_RES_SIZE,TC_THREAD_N,TC_THREAD_GROUP_SIZE, NUM_THREADS,A_ROWS, B_COLS>(ptr,reg, tid, dim0, dim1) ;
        }
    }
}





void kernel_body(int task_id, sliced_k_args* __UNIFORM__ kernel_arg) {

    const int thread_id = vx_thread_id();
    const int warp_id = vx_warp_id();
    const int core_id = vx_core_id();

    const int MAT_M = kernel_arg->M_;
    const int MAT_N = kernel_arg->N_;
    const int MAT_K = kernel_arg->K_;


    const uint32_t num_cores = kernel_arg->num_tasks/(NUM_THREADS*NUM_WARPS);
    uint32_t log2_num_cores = (num_cores) >1 ? num_cores >> 1 : 1);

    uint32_t tileSizeCol = MAT_N/log2_num_cores;
    uint32_t tileSizeRow = MAT_M/log2_num_cores;

    if (num_cores ==2) { // number of total cores
        tileSizeCol = MAT_N /2;
        tileSizeRow = MAT_M;
    } else if (num_cores ==8) {
        tileSizeCol = MAT_N /4;
        tileSizeRow = MAT_M /2 ;
    }

    uint32_t num_blocksCols = MAT_N/tileSizeCol;

    uint32_t blockCol  = (core_id) % num_blocksCols;
    uint32_t blockRow  = (core_id) / num_blocksCols;
    if (num_cores == 2){
        blockRow = 0 ;
    }


    float* const A_start  = (float*const)(kernel_arg->A_addr) + blockRow*tileSizeRow*MAT_N*PREC_RATIO ; // Assuming row major
    float* const B_start  = (float*const)(kernel_arg->B_addr) + blockCol*tileSizeCol*MAT_K*PREC_RATIO; // assuming col major
    float* const D_start  = (float*const)(kernel_arg->D_addr) + blockRow*tileSizeRow*MAT_N + blockCol *tileSizeCol;
    float* const tile_buf = (float*const)(kernel_arg->tile_buf_addr) ;

    const layout_t a_layout = (layout_t)(kernel_arg->A_layout);
    const layout_t b_layout = (layout_t)(kernel_arg->B_layout);
    const layout_t d_layout = (layout_t)(kernel_arg->D_layout);

    float* A_ptr = A_start;
    float* B_ptr = B_start;
    float* D_ptr = D_start;


    float regA[A_ROWS*K_MULTIPLE];
    float regB[B_COLS*K_MULTIPLE];


    for (int i = 0; i < tileSizeRow; i+=tc_m) {
        D_ptr=D_start + MAT_N*i; // ROW MAJOR
        for (int j = 0; j < tileSizeCol; j+=tc_n){
            A_ptr=A_start + MAT_K*i*PREC_RATIO; // ROW MAJOR
            B_ptr=B_start + MAT_K*j*PREC_RATIO;  // COL MAJOR
            float regC[A_ROWS*B_COLS* TC_THREAD_N] = {0}; // Number of mac units per lane


            for (int k = 0 ; k < MAT_K; k+=tc_k*NUM_WARPS){

                load_fragment<MatT::A>(A_ptr, (float*)regA, warp_id, thread_id, MAT_M, MAT_K);

                load_fragment<MatT::B>(B_ptr, (float*)regB, warp_id, thread_id, MAT_N, MAT_K);


                tc_mma<A_ROWS, B_COLS, K_MULTIPLE, TC_THREAD_N>((float*)regA, (float*)regB, (float*)regC);

                A_ptr+=tc_k * NUM_WARPS * PREC_RATIO; // assuming row major
                B_ptr+=tc_k * NUM_WARPS * PREC_RATIO; // assumming col_major
            }

            for (int i = 1 ; i < NUM_WARPS; i *=2){
                if (warp_id  < NUM_WARPS/(2*i)) {
                    vx_barrier(0, NUM_WARPS);
                    float addend[A_ROWS*B_COLS* TC_THREAD_N]; // Number of mac units per lane
                    float* accumulator = tile_buf + (warp_id+NUM_WARPS/(2*i))*(tc_m*tc_n);
                    load_fragment<MatT::C>(accumulator, addend, warp_id, thread_id, tc_m, tc_n) ;
                    for (int k = 0 ; k < A_ROWS*B_COLS*TC_THREAD_N;k++) {
                        regC[k] += addend[k];
                    }
                }
                else {
                    float* accumulator = tile_buf + (warp_id+1)*(tc_m*tc_n);
                    tc_store<float, TC_OP_SIZE, TC_RES_SIZE,TC_THREAD_N , TC_THREAD_GROUP_SIZE, TC_NUM_THREADS,A_ROWS,B_COLS>((float*)accumulator, (float*)regC,  thread_id, tc_m, tc_n);
                    vx_barrier(0, NUM_WARPS);
                    break;
                }
            }

            if (warp_id == 0) {
                tc_store<float, TC_OP_SIZE, TC_RES_SIZE,TC_THREAD_N , TC_THREAD_GROUP_SIZE, TC_NUM_THREADS,A_ROWS,B_COLS>((float*)D_ptr, (float*)regC,  thread_id, MAT_M, MAT_N);
            }

            D_ptr=D_ptr + tc_n ; // ROW MAJOR
        }
    }
}


int main(){
    sliced_k_args* arg = (sliced_k_args*)KERNEL_ARG_DEV_MEM_ADDR;
    vx_spawn_tasks(arg->num_tasks, (vx_spawn_tasks_cb)kernel_body, arg);
    return 0 ;
}
