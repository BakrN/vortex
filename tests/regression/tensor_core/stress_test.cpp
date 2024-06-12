#include <vx_intrinsics.h>
#include "base/mat_mma.hpp"
#define PREC_RATIO TC_OP_SIZE/TC_RES_SIZE

void body() {
    vx_barrier(0, 8) ;

    vx_tmc(-1);
    // Reg file operation
   float regA[tc_k * PREC_RATIO];
   float regB[tc_k * PREC_RATIO * ((TC_NUM_ACC_TILES > 0) ? TC_NUM_ACC_TILES : 1)];
   float regC[OTILE_COL] = {0}; // this should be equal to tc_n
   float regD[OTILE_COL] = {0}; // this should be equal to tc_n

   #if (TC_NUM_ACC_TILES ==0)
   //for (int i = 0 ; i < 10; i ++) {
    unrolled_for_func<0, 1000>(tc_mma_acc_reg_wb_reg<TC_OP_COUNT, TC_NUM_PES, TC_RES_SIZE, TC_OP_SIZE,false>, (float*)regA, (float*)regB, (float*)regC, (float*)regD) ;

   //}
    //tc_mma_acc_reg_wb_reg<TC_OP_COUNT, TC_NUM_PES, TC_RES_SIZE, TC_OP_SIZE,true>((float*)regA, (float*)regB, (float*)regC) ;

   #else
    unrolled_for_func<0, 100>(tc_mma_acc_buf_wb_buf<TC_OP_COUNT, TC_NUM_PES, TC_RES_SIZE, TC_OP_SIZE, TC_NUM_ACC_TILES>,(float*)regA, (float*)regB) ;
    #endif


}

int main(){
    vx_wspawn(8, body);
    body();
    return 0 ;
}
