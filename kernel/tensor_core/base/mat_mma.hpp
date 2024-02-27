#ifndef MAT_MMA_HPP
#define MAT_MMA_HPP
#include <cstdint>
#include <type_traits>

#define TC_EXT 0x7B

enum class Acc_t : uint8_t {
    ACC_NONE = 0 , // Already loaded in accumulator value or no accumulation
    ACC_REG ,
    ACC_BUF,
};

enum class WriteBack_t : uint8_t {
    WB_REG = 0,
    WB_BUF = 0
};

//(TODO: REMOVE enable_if_t)
// MAT MMA WRITE BACK TO REG FILE


template< Acc_t acc_src>
void mat_mma_wb(float* A , float* B , float* C, float* result) { // write back to reg file without accumulation
    asm volatile(".insn r4 %[EXT], %[rd], %[func3], %[rs1], %[rs2], %[func2], %[rs3]" :
            [rd] "=r" (*result) :
            [EXT] "i" (TC_EXT) ,
            [func3] "i" (0), // write back to reg file
            [func2] "i" ((int)(acc_src)),
            [rs1] "f" (*A),
            [rs2] "f" (*B),
            [rs3] "f" (*C)
    );
}

template< Acc_t acc_src>
void mat_mma(float* A , float* B , float* C, int result=-1){ // mat mma  with on writeback
    asm volatile(".insn r4 %[EXT], %[rd], %[func3], %[rs1], %[rs2], %[func2], %[rs3]" ::
            [rd] "i" (result),
            [EXT] "i" (TC_EXT) ,
            [func3] "i" (1), // write back to accumulation buffer
            [func2] "i" ((int)(acc_src)),
            [rs1] "f" (*A),
            [rs2] "f" (*B),
            [rs3] "f" (*C) // optimize this away if c is already loaded
    );
}

// if acc_src is none it won't be used anyway

template<int i , int i_end, Acc_t acc_src>
void unrolled_mat_mma(float* A , float* B , float* C, float* result) {
    if constexpr(i < i_end) {
        mat_mma<acc_src>(A+i, B+i, C);
        unrolled_mat_mma<i+1, i_end>();
    }
}

// Intermediate output D's between steps are written into accumulation buffer
inline void mat_mma_multi_use_accum(){
}

// A buffer size =
template<int dot_width, int num_groups, int num_pes, int b_width, int CUR_SET = 0 , int SETS=1, int op_size_bytes = 2>
inline void mat_mma_parallel_wb(float* regA , float* regB , float* regC, float* regresult) {
    constexpr int num_loads = dot_width / (4/op_size_bytes);
    if constexpr (CUR_SET < SETS) {
        // if it's equal to 1 then just store back directly
        if constexpr(num_loads == 1) {
            mat_mma_wb<Acc_t::ACC_REG>(regA ,regB, regC, regresult) ;
        } else if constexpr(num_loads ==  2){
            mat_mma<Acc_t::ACC_REG>(regA ,regB, regC) ;  // load in a b and c
            mat_mma_wb<Acc_t::ACC_NONE>(regA ,regB, regC, regresult) ;
        } else {
            mat_mma<Acc_t::ACC_REG>(regA ,regB, regC) ;  // load in a b and c
            unrolled_mat_mma<1, num_loads-1, Acc_t::ACC_NONE>(regA,regB,regC);
            mat_mma_wb<Acc_t::ACC_NONE>(regA ,regB, regC,regresult) ;  // load in a b and c
        }
    } else {
        mat_mma_parallel_wb<dot_width, num_groups, num_pes, b_width, CUR_SET+1, SETS, op_size_bytes>(regA + num_loads, regB+num_loads, regresult, regresult + num_loads); // overwrite regc
    }
}

#endif

