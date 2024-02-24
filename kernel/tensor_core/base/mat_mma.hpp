#ifndef MAT_MMA_HPP
#define MAT_MMA_HPP
#include <cstdint>
#include <type_traits>

#define TC_EXT 0x7B

enum class Acc_t : uint8_t {
    ACC_NONE = 0 ,
    ACC_REG ,
    ACC_BUF,
};


//(TODO: REMOVE enable_if_t)
// MAT MMA WRITE BACK TO REG FILE
template<typename Op_t , typename Res_t, Acc_t acc_src, bool wb_reg = true>
void mat_mma(float* A , float* B , float* C, float* result) { // write back to reg file without accumulation
    asm volatile(".insn r4 %[EXT], %[rd], %[func3], %[rs1], %[rs2], %[func2], %[rs3]" :
            [rd] "=r" (*result) :
            [EXT] "i" (TC_EXT) ,
            [func3] "i" ((int)(!wb_reg)),
            [func2] "i" ((int)(acc_src)),
            [rs1] "f" (*A),
            [rs2] "f" (*B),
            [rs3] "f" (*C)
    );
}
//

// Intermediate output D's between steps are written into accumulation buffer
void mat_mma_multi_use_accum(){
}

void mat_mma_multi(){
}

#endif

