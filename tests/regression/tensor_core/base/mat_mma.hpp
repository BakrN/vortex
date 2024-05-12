#ifndef MAT_MMA_HPP
#define MAT_MMA_HPP
#include "mat_helper.hpp"

#define TC_EXT 0x7b

enum class Accsrc_t : int{
    ACC_NONE = 0 , // Already loaded in accumulator value or no accumulation (Do nothing with the C)
    ACC_REG = 1, // C loaded from reg file (issued based on STEPS)
    ACC_BUF = 2, // C loaded from one  of the accumulation tile (only issued once)
    ACC_IMM = 3 // C loaded with immediate value. Only issued once (should be done first) (will be easier for hardware to reset all signals since it will take time to reload)  (can do it in the beginning) (mostly used with zero out)
};

enum class WriteBack_t : int{
    WB_LOAD = 0,  // doesn't reserve anything in scoreboard
    WB_REG = 1 ,
    WB_BUF = 2
};


// Should have 2 functions: mat_mma_load: No write back (loading operands A,B)
//                          mat_mma_wb  : Acc source , And writeback options
//                          2 Functions are seperated for clarity.


template<Accsrc_t t> // ACC_NONE && ACC_BUF && ACC_IMM
struct AccsrcSelector {
    using type = const int ;
    static constexpr const int value = 0 ;
};

template <>
struct AccsrcSelector<Accsrc_t::ACC_REG> {
    using type = float*;
    static constexpr type value = nullptr;
};



//template <>
//struct AccsrcSelector<Accsrc_t::ACC_REG>{
//    using type = float*;
//};

template<WriteBack_t t>
struct WritebackSelector{
    using type = const int;
    static constexpr int value = 0 ;
};

template<>
struct WritebackSelector<WriteBack_t::WB_REG>{
    using type  = float* ;
    static constexpr float* value = nullptr;
};




// Acc_buf_tile . In case of acc src
template <Accsrc_t acc_type, WriteBack_t wb_type, int acc_wb_tile= 0>
inline void mat_mma(float* A, float* B, typename AccsrcSelector<acc_type>::type C = AccsrcSelector<acc_type>::value, typename WritebackSelector<wb_type>::type D = WritebackSelector<wb_type>::value) {
    // static_assert(acc_type != Accsrc_t::ACC_NONE, "No source accumulate is not supported at the moment");
    if constexpr (acc_type==Accsrc_t::ACC_REG) {
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
    }  else if (acc_type == Accsrc_t::ACC_BUF){
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
    } else { // ACC None or immediate
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
                [func2] "i" ((int)acc_type),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (C)
            );
        } else {  // Reg writeback
            asm volatile(".insn r4 %[EXT], %[func2], %[func3], %[rd], %[rs1], %[rs2], %[rs3]":
                [rd] "=f" (*D)  :
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)acc_type),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (C)
            );
        }
    }
}

inline void flush_tc(){

}

// Matrix multiplication strategies
// Tensor Core MMA Strategy: Accumulate Register,  WriteBack Register
// For inplace pass regC to regD


inline void mat_mma_acc_reg_wb_reg (float** regA , float** regB , float** regC, float** regD) {
    mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_REG>(*regA, *regB, *regC,*regD);
    (*regA)++;
    (*regB)++;
    (*regC)++;
    (*regD)++;

}

inline void mat_mma_acc_reg_wb_reg_overwrite (float** regA , float** regB , float** regC) {
    mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_REG>(*regA, *regB, *regC,*regC);
    (*regA)++;
    (*regB)++;
    (*regC)++;
}

inline void mat_mma_acc_none_wb_load(float** regA, float** regB) {
    mat_mma<Accsrc_t::ACC_NONE, WriteBack_t::LOAD>(*regA,  *regB, 0);
    (*regA)++;
    (*regB)++;
}

inline void mat_mma_acc_buf_wb_buf(float** regA, float** regB, const int acc_tile) {
    mat_mma<Accsrc_t::ACC_BUF, WriteBack_t::LOAD>(*regA,  *regB, 0, acc_tile);
}



template<int DOT_WIDTH, int STEPS, int RES_TYPE_SIZE = 4,int OP_TYPE_SIZE= 2, bool IN_PLACE =true>
inline void tc_mma_acc_reg_wb_reg(float* regA , float* regB , float* regC, float* regD) {
    constexpr int num_loads = DOT_WIDTH / (RES_TYPE_SIZE/OP_TYPE_SIZE);
    static_assert(num_loads >= STEPS, "Steps cannot be larger than number of loads when using register file as accumulator. Because if steps is more that means my C register per PE is not entirely filled");
    // if it's equal to 1 then just store back directly
    if constexpr(num_loads == 1) {
        static_assert(STEPS == 1, "");
        mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_REG>(regA, regB, regC,regD);
    } else {
        if constexpr (num_loads > STEPS) {
            // WB load (so I don't reserve and if I use inplace I will stall otherwise)
            //unrolled_for_func<STEPS, num_loads>(mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_LOAD>, regA++, regB++, regC,regD);
            unrolled_for_func<STEPS, num_loads>(mat_mma_acc_none_wb_load, &regA, &regB);
        }
        // Unroll the rest
        //unrolled_for_func<0, STEPS>(mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_REG>, regA++, regB++, regC++,regD++);
        if constexpr (IN_PLACE){
            unrolled_for_func<0, STEPS>(mat_mma_acc_reg_wb_reg_overwrite, &regA, &regB, &regC);
        } else {
            unrolled_for_func<0, STEPS>(mat_mma_acc_reg_wb_reg, &regA, &regB, &regC,&regD);
        }
    }
}

tempalte <int DOT_WIDTH, int STEPS>
inline void tc_mma_acc_zero_wb_buf() {
    constexpr int num_loads = DOT_WIDTH / (RES_TYPE_SIZE/OP_TYPE_SIZE);
    static_assert(num_loads >= STEPS, "Steps cannot be larger than number of loads when using register file as accumulator. Because if steps is more that means my C register per PE is not entirely filled");
    if constexpr (num_loads == 1 ) {

    }
}

#endif

