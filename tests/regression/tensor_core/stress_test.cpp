#include <vx_intrinsics.h>
#include "base/mat_helper.hpp"
#include "base/mat_mma.hpp"


void body() {

    vx_tmc(-1);
    vx_barrier(0, 8) ;
    // Reg file operation
   float regA[A_ROWS*K_MULTIPLE]; // THREAD_K*PREC_RATIO is always 1 i want to issue at once
   float regB[B_COLS*K_MULTIPLE];
   float regC[A_ROWS*B_COLS*TC_THREAD_N] = {0}; // Number of mac units per lane

   for (int i = 0 ;i  < 100; i++) {
       unrolled_for_func<0, 100>(
               [&](){tc_mma<A_ROWS, B_COLS, K_MULTIPLE, TC_THREAD_N> (regA, regB, regC);
       });
   }
   //tc_acc_reg_wb_reg<A_ROWS, B_COLS, K_MULTIPLE, TC_THREAD_N>(regA, regB, regC);



}

int main(){
    vx_wspawn(8, body);
    body();
    return 0 ;
}
