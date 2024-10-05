#include <vx_intrinsics.h>
#include "base/mat_helper.hpp"
#include "base/mat_mma.hpp"




void body() {

    vx_tmc(-1);

    // Reg file operation
   float regA[2] = {-1};
   float regB[2] = {2};
   float regC[2] = {3};
   float regD[2] = {0};


   //for (int i = 0 ;i  < 1000; i++) {
       unrolled_for_func<0, 1000>( // ILP
               [&](){
               mma<OperationMode::ACC_REG_WB_REG,LoadMode::NORMAL> ((float*)regA, (float*)regB,(float*) regC , (float*)regD);
               unrolled_for_func<0, TC_THREAD_N-1>([&](){
                    mma<OperationMode::ACC_REG_WB_REG,LoadMode::C_ONLY> (nullptr, nullptr,(float*) regC ,(float*) regD);
               });
       });
   //}
}

int main(){
    vx_wspawn(NUM_WARPS, body);
    body();
    return 0 ;
}
