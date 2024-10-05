#include <vx_intrinsics.h>
#include <stdint.h>
#include <vx_spawn.h>
#include "common.h"


#define A_ROWS 4
#define B_COLS 4


void kernel_body(int task_id, kernel_arg_t* __UNIFORM__ kernel_arg) {

   constexpr threads_per_col = (NUM_THREADS == 16 || NUM_THREADS = 4 || NUM_THREADS = 2) ? NUM_THREADS >> 1 : []() constexpr {
       // assuming no prime
    int closest = 1;
    for (int i = 1; i < NUM_THREADS; ++i) {
        if (NUM_THREADS % i == 0) {
            closest = i;
        }
    }
    return NUM_THREADS / closest;
}();
   constexpr threads_per_row = NUM_THREADS/threads_per_col;
   const int thread_id = vx_thread_id();
   const int warp_id = vx_warp_id();
   const int core_id = vx_core_id();

   const int MAT_M = kernel_arg->M_;
   const int MAT_N = kernel_arg->N_;
   const int MAT_K = kernel_arg->K_;

   const size_t total_warps = kernel_arg->num_tasks/NUM_THREADS;

   uint32_t log2_num_tasks = (kernel_arg->num_tasks/NUM_THREADS >1 ? kernel_arg->num_tasks/NUM_THREADS >> 1 : 1);

   uint32_t tileSizeCol = MAT_N/log2_num_tasks;
   uint32_t tileSizeRow = MAT_M/log2_num_tasks;

   //if ()
   //if kernel_ar

   if (kernel_arg->num_tasks/NUM_THREADS ==2) { // number of total warps
       tileSizeCol = MAT_N /2;
       tileSizeRow = MAT_M;
       //tileSizeCol = tileSizeCol/2;
   } else if (kernel_arg->num_tasks/NUM_THREADS ==8) {
       tileSizeCol = MAT_N /4;
       tileSizeRow = MAT_M /2 ;
   } else if (kernel_arg->num_tasks/NUM_THREAS == 32) {
       tileSizeRow = MAT_M/4 ;
       tileSizeCol = MAT_N/8 ;
   }

   uint32_t num_blocksCols = MAT_N/tileSizeCol;

   uint32_t blockCol  = (task_id/NUM_THREADS) % num_blocksCols;
   uint32_t blockRow  = (task_id/NUM_THREADS) / num_blocksCols;
   if (kernel_arg->num_tasks/NUM_THREADS==2){
       blockRow = 0 ;
   }


   float* const A_start = (float*const)(kernel_arg->A_addr) + blockRow*tileSizeRow*MAT_N*PREC_RATIO ; // Assuming row major
   float* const B_start = (float*const)(kernel_arg->B_addr) + blockCol*tileSizeCol*MAT_K*PREC_RATIO; // assuming col major
   //float* const C_start = (float*const)(kernel_arg->C_addr) + blockRow*tileSizeRow*MAT_N + blockCol *tileSizeCol; // assuming row major
   float* const D_start = (float*const)(kernel_arg->D_addr) + blockRow*tileSizeRow*MAT_N + blockCol *tileSizeCol;



   const layout_t a_layout = (layout_t)(kernel_arg->A_layout);
   const layout_t b_layout = (layout_t)(kernel_arg->B_layout);
   //const layout_t c_layout = (layout_t)(kernel_arg->C_layout);
   const layout_t d_layout = (layout_t)(kernel_arg->D_layout);

   float* A_ptr = A_start;
   float* B_ptr = B_start;
   //float* C_ptr = C_start;
   float* D_ptr = D_start;

   float regA[A_ROWS]; // THREAD_K*PREC_RATIO is always 1 i want to issue at once
   float regB[B_COLS];


   for (int i = 0; i < tileSizeRow; i+=threads_per_col*A_ROWS) {
       D_ptr=D_start + MAT_N*i;
       for (int j = 0; j < tileSizeCol; j+=threads_per_row*B_COLS){
           A_ptr=A_start + MAT_K*i;
           B_ptr=B_start + MAT_K*j;
           float regC[A_ROWS*B_COLS] = {0};
           for (int k = 0 ; k < MAT_K; k++){
               // A rows load
               regA[0] = A_ptr[MAT_N*A_ROWS* thread_id/threads_per_row];
               regA[1] = A_ptr[MAT_N*A_ROWS*(thread_id/threads_per_row+1)];
               regA[2] = A_ptr[MAT_N*A_ROWS*(thread_id/threads_per_row+2)];
               regA[3] = A_ptr[MAT_N*A_ROWS*(thread_id/threads_per_row+3)];

               // B cols load
               regB[0] = B_ptr[MAT_K*B_COLS*(thread_id % threads_per_row)];
               regB[1] = B_ptr[MAT_K*B_COLS*(thread_id % threads_per_row)+1)];
               regB[2] = B_ptr[MAT_K*B_COLS*(thread_id % threads_per_row)+2)];
               regB[3] = B_ptr[MAT_K*B_COLS*(thread_id % threads_per_row)+3)];
               // MMA

               regC[0] += regA[0] * regB[0];
               regC[1] += regA[0] * regB[1];
               regC[2] += regA[0] * regB[2];
               regC[3] += regA[0] * regB[3];


               regC[4] += regA[1] * regB[0];
               regC[5] += regA[1] * regB[1];
               regC[6] += regA[1] * regB[2];
               regC[7] += regA[1] * regB[3];


               regC[8]  += regA[2] * regB[0];
               regC[9]  += regA[2] * regB[1];
               regC[10] += regA[2] * regB[2];
               regC[11] += regA[2] * regB[3];

               regC[12] += regA[3] * regB[0];
               regC[13] += regA[3] * regB[1];
               regC[14] += regA[3] * regB[2];
               regC[15] += regA[3] * regB[3];

               A_ptr++;
               B_ptr++;
           }

           float* Dest = D_ptr + (thread_id/threads_per_row) * MAT_N * A_ROWS + (thread_id % threads_per_row)*B_COLS;
           // for a rows
           // for b cols
           *(Dest + 0) = regC[0 + 0];
           *(Dest + 1) = regC[0 + 1];
           *(Dest + 2) = regC[0 + 2];
           *(Dest + 3) = regC[0 + 3];

           *(Dest + MAT_N + 0) = regC[B_COLS + 0];
           *(Dest + MAT_N + 1) = regC[B_COLS + 1];
           *(Dest + MAT_N + 2) = regC[B_COLS + 2];
           *(Dest + MAT_N + 3) = regC[B_COLS + 3];

           *(Dest + 2*MAT_N + 0) = regC[2*B_COLS + 0];
           *(Dest + 2*MAT_N + 1) = regC[2*B_COLS + 1];
           *(Dest + 2*MAT_N + 2) = regC[2*B_COLS + 2];
           *(Dest + 2*MAT_N + 3) = regC[2*B_COLS + 3];

           *(Dest + 3*MAT_N + 0) = regC[3*B_COLS + 0];
           *(Dest + 3*MAT_N + 1) = regC[3*B_COLS + 1];
           *(Dest + 3*MAT_N + 2) = regC[3*B_COLS + 2];
           *(Dest + 3*MAT_N + 3) = regC[3*B_COLS + 3];
           // store
           D_ptr=D_ptr + threads_per_row*B_COLS;
       }
   }
}

int main(){
	kernel_arg_t* arg = (kernel_arg_t*)KERNEL_ARG_DEV_MEM_ADDR;
    vx_spawn_tasks(arg->num_tasks, (vx_spawn_tasks_cb)kernel_body, arg);
    return 0 ;
}
