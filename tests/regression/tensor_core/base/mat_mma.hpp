#ifndef MAT_MMA_HPP
#define MAT_MMA_HPP
#include "mat_helper.hpp"
#include <cstdint>

#define TC_EXT 0x7B

enum class Acc_t : uint8_t {
    ACC_NONE = 0 , // Already loaded in accumulator value or no accumulation (0s)
    ACC_REG ,
    ACC_BUF,
};

enum class WriteBack_t : uint8_t {
    WB_LOAD = 0,  // doesn't reserve anything in scoreboard
    WB_REG ,
    WB_BUF
};


// Should have 2 functions: mat_mma_load: No write back (loading operands A,B)
//                          mat_mma_wb  : Acc source , And writeback options
//                          2 Functions are seperated for clarity.


template<Acc_t t>
struct AccSrc;

template <>
struct AccSrc<Acc_t::ACC_BUF>{
    using type = const int ;
};

template <>
struct AccSrc<Acc_t::ACC_REG>{
    using type = float*;
};



// Acc_buf_tile . In case of acc src
template <Acc_t acc_type, WriteBack_t wb_type, int acc_wb_tile= 0>
inline void mat_mma(float* A, float* B, typename AccSrc<acc_type>::type C, float* D = nullptr) {
    // static_assert(acc_type != Acc_t::ACC_NONE, "No source accumulate is not supported at the moment");
    if constexpr (acc_type==Acc_t::ACC_REG) {
        if constexpr(wb_type == WriteBack_t::WB_LOAD) {
            asm volatile(".insn r4 %[EXT], %[func2], %[func3], f%[rd], %[rs1], %[rs2], %[rs3]"::
                [rd] "i" (0) ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)WriteBack_t::WB_LOAD),
                [func2] "i" ((int)(acc_type)),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "f" (*C)
            ); // validate I'm writing back to float
        } else if (wb_type == WriteBack_t::WB_BUF) {  // acc buffer
            asm volatile(".insn r4 %[EXT], %[func2], %[func3], f%[rd], %[rs1], %[rs2], %[rs3]"::
                [rd] "i" (acc_wb_tile) ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)acc_type),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "f" (*C)
            ); // validate I'm writing back to float
        } else {  // reg
            asm volatile(".insn r4 %[EXT], %[func2], %[func3], %[rd], %[rs1], %[rs2], %[rs3]":
                [rd] "=f" (*D) :
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)acc_type),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "f" (*C)
            ); // validate I'm writing back to float
        }
    }  else if (acc_type == Acc_t::ACC_BUF){
        if constexpr (wb_type == WriteBack_t::WB_LOAD) {
            asm volatile(".insn r4 %[EXT], %[func2], %[func3], f%[rd], %[rs1], %[rs2], %[rs3]"::
                [rd] "i" (0)  ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)acc_type),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (C)
            );
        } else if (wb_type == WriteBack_t::WB_BUF) {
            asm volatile(".insn r4 %[EXT], %[func2], %[func3], f%[rd], %[rs1], %[rs2], %[rs3]"::
                [rd] "i" (acc_wb_tile)  ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)(acc_type)),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (C)
            );
        } else {
            asm volatile(".insn r4 %[EXT], %[func2], %[func3], %[rd], %[rs1], %[rs2], %[rs3]":
                [rd] "=f" (*D)  :
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)(acc_type)),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (C) // Writeback to reg file , and acc_tile_inp
            );
        }
    } else { // ACC NONE (0)
        if constexpr (wb_type == WriteBack_t::WB_LOAD) {
            asm volatile(".insn r4 %[EXT], %[func2], %[func3], f%[rd], %[rs1], %[rs2], %[rs3]"::
                [rd] "i" (0)  ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)acc_type),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (0)
            );
        } else if (wb_type == WriteBack_t::WB_BUF) {
            asm volatile(".insn r4 %[EXT], %[func2], %[func3], f%[rd], %[rs1], %[rs2], %[rs3]"::
                [rd] "i" (acc_wb_tile)  ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)acc_type),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (0)
            );
        } else {  // Reg writeback
            asm volatile(".insn r4 %[EXT], %[func2], %[func3], %[rd], %[rs1], %[rs2], %[rs3]":
                [rd] "=f" (*D)  :
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)acc_type),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (0)
            );
        }

    }
}


// Matrix multiplication strategies
// Tensor Core MMA Strategy: Accumulate Register,  WriteBack Register
// For inplace pass regC to regD

inline void mat_mma_wb_load_unroll(float** regA , float** regB , float** regC, float** regD) {
    mat_mma<Acc_t::ACC_REG, WriteBack_t::WB_LOAD>(*regA, *regB, *regC,*regD);
    (*regA)++;
    (*regB)++;
}

inline void mat_mma_wb_unroll (float** regA , float** regB , float** regC, float** regD) {
    mat_mma<Acc_t::ACC_REG, WriteBack_t::WB_LOAD>(*regA, *regB, *regC,*regD);

    (*regA)++;
    (*regB)++;
    (*regC)++;
    (*regD)++;

}

template<int DOT_WIDTH, int STEPS, int RES_TYPE_SIZE = 4,int OP_TYPE_SIZE= 2>
inline void tc_mma_acc_reg_wb_reg(float* regA , float* regB , float* regC, float* regD) {
    constexpr int num_loads = DOT_WIDTH / (RES_TYPE_SIZE/OP_TYPE_SIZE);
    static_assert(num_loads >= STEPS, "Steps cannot be larger than number of loads when using register file as accumulator. Because if steps is more that means my C register per PE is not entirely filled");
    // if it's equal to 1 then just store back directly
    if constexpr(num_loads == 1) {
        static_assert(STEPS == 1, "");
        mat_mma<Acc_t::ACC_REG, WriteBack_t::WB_REG>(regA, regB, regC,regD);
    } else {
        if constexpr (num_loads > STEPS) {
            // WB load (so I don't reserve and if I use inplace I will stall otherwise)
            //unrolled_for_func<STEPS, num_loads>(mat_mma<Acc_t::ACC_REG, WriteBack_t::WB_LOAD>, regA++, regB++, regC,regD);
            unrolled_for_func<STEPS, num_loads>(mat_mma_wb_load_unroll, &regA, &regB, &regC,&regD);
        }
        // Unroll the rest
        //unrolled_for_func<0, STEPS>(mat_mma<Acc_t::ACC_REG, WriteBack_t::WB_REG>, regA++, regB++, regC++,regD++);
        unrolled_for_func<0, STEPS>(mat_mma_wb_unroll, &regA, &regB, &regC,&regD);
    }
}

#endif

