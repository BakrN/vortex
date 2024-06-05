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
    using pType = const int ;
    static constexpr const int value = 0 ;
};

template <>
struct AccsrcSelector<Accsrc_t::ACC_REG> {
    using type = float*;
    using pType = float**;
    static constexpr type value = nullptr;
};



//template <>
//struct AccsrcSelector<Accsrc_t::ACC_REG>{
//    using type = float*;
//};

template<WriteBack_t t>
struct WritebackSelector{
    using type = const int;
    using pType = const int;
    static constexpr int value = 0 ;
};

template<>
struct WritebackSelector<WriteBack_t::WB_REG>{
    using type  = float* ;
    using pType = float**;
    static constexpr float* value = nullptr;
};




// Acc_buf_tile . In case of acc src
template <Accsrc_t acc_type, WriteBack_t wb_type>
inline void mat_mma(float* A, float* B, typename AccsrcSelector<acc_type>::type C = AccsrcSelector<acc_type>::value, typename WritebackSelector<wb_type>::type D = WritebackSelector<wb_type>::value) {
    // static_assert(acc_type != Accsrc_t::ACC_NONE, "No source accumulate is not supported at the moment");
    if constexpr (acc_type==Accsrc_t::ACC_REG) {
        if constexpr(wb_type == WriteBack_t::WB_LOAD) {
            asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], %[rs3]"::
                [rd] "i" (0) ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)WriteBack_t::WB_LOAD),
                [func2] "i" ((int)(acc_type)),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "f" (*C)
            ); // validate I'm writing back to float
        } else {
            if constexpr (wb_type == WriteBack_t::WB_BUF) {  // acc buffer
                asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], %[rs3]"::
                    [rd] "i" (D) ,
                    [EXT] "i" (TC_EXT) ,
                    [func3] "i" ((int)wb_type),
                    [func2] "i" ((int)acc_type),
                    [rs1] "f" (*A),
                    [rs2] "f" (*B),
                    [rs3] "f" (*C)
                ); // validate I'm writing back to float rf
            } else {  // reg
                asm volatile(".insn r4 %[EXT], %[func3], %[func2], %[rd], %[rs1], %[rs2], %[rs3]":
                    [rd] "=f" (*D) :
                    [EXT] "i" (TC_EXT) ,
                    [func3] "i" ((int)wb_type),
                    [func2] "i" ((int)acc_type),
                    [rs1] "f" (*A),
                    [rs2] "f" (*B),
                    [rs3] "f" (*C)
                ); // validate I'm writing back to float
        }
        }
    }  else if (acc_type == Accsrc_t::ACC_BUF){
        if constexpr (wb_type == WriteBack_t::WB_LOAD) {
            asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], f%[rs3]"::
                [rd] "i" (0)  ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)acc_type),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (C)
            );
        } else {
            if constexpr (wb_type == WriteBack_t::WB_BUF) {
                asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], f%[rs3]"::
                    [rd] "i" (D)  ,
                    [EXT] "i" (TC_EXT) ,
                    [func3] "i" ((int)wb_type),
                    [func2] "i" ((int)(acc_type)),
                    [rs1] "f" (*A),
                    [rs2] "f" (*B),
                    [rs3] "i" (C)
                );
            } else {
                asm volatile(".insn r4 %[EXT], %[func3], %[func2], %[rd], %[rs1], %[rs2], f%[rs3]":
                    [rd] "=f" (*D)  :
                    [EXT] "i" (TC_EXT) ,
                    [func3] "i" ((int)wb_type),
                    [func2] "i" ((int)(acc_type)),
                    [rs1] "f" (*A),
                    [rs2] "f" (*B),
                    [rs3] "i" (C) // Writeback to reg file , and acc_tile_inp
                );
            }
        }
    } else { // ACC None or immediate
        if constexpr (wb_type == WriteBack_t::WB_LOAD) {
            asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], f%[rs3]"::
                [rd] "i" (0)  ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)wb_type),
                [func2] "i" ((int)acc_type),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (C)
            );
        } else {
            if constexpr (wb_type == WriteBack_t::WB_BUF) {
                asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], f%[rs3]"::
                    [rd] "i" (D)  ,
                    [EXT] "i" (TC_EXT) ,
                    [func3] "i" ((int)wb_type),
                    [func2] "i" ((int)acc_type),
                    [rs1] "f" (*A),
                    [rs2] "f" (*B),
                    [rs3] "i" (C)
                );
            } else {  // Reg writeback
                asm volatile(".insn r4 %[EXT], %[func3], %[func2], %[rd], %[rs1], %[rs2], f%[rs3]":
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
}

// Matrix multiplication strategies
// Tensor Core MMA Strategy: Accumulate Register,  WriteBack Register
// For inplace pass regC to regD


template<Accsrc_t acc_type, WriteBack_t wb_type, bool IN_PLACE=false>
inline void mat_mma_unroll (float** regA, float** regB,  typename AccsrcSelector<acc_type>::pType regC = AccsrcSelector<acc_type>::value, typename WritebackSelector<wb_type>::pType regD = static_cast<typename WritebackSelector<wb_type>::pType >(WritebackSelector<wb_type>::value)) {
    // If type of C is float**
    if constexpr(acc_type == Accsrc_t::ACC_REG) {
        if constexpr(wb_type == WriteBack_t::WB_REG) {
            mat_mma<acc_type, wb_type>(*regA, *regB, *regC, *regD);
            if constexpr (!IN_PLACE) {
                (*regD)++;
            }
        } else {
            mat_mma<acc_type, wb_type>(*regA, *regB, *regC, regD);
        }
        (*regC)++;
    } else {
        if constexpr(wb_type == WriteBack_t::WB_REG) {
            mat_mma<acc_type, wb_type>(*regA, *regB, regC, *regD);
            (*regD)++;
        } else {
            mat_mma<acc_type, wb_type>(*regA, *regB, regC, regD);
        }
    }
    (*regA)++;
    (*regB)++;
}

// Tensor core strategies

/**
 * @brief Tensor core matrix multiplication with accumulation in register file and write back to register file
 * */
template<int DOT_WIDTH, int STEPS, int RES_TYPE_SIZE = 4,int OP_TYPE_SIZE= 2, bool IN_PLACE =true>
inline void tc_mma_acc_reg_wb_reg(float* regA , float* regB , float* regC, float* regD=nullptr) {
    constexpr int num_loads = DOT_WIDTH / (RES_TYPE_SIZE/OP_TYPE_SIZE);
    static_assert(num_loads >= STEPS, "Steps cannot be larger than number of loads when using register file as accumulator. Because if steps is more that means my C register per PE is not entirely filled");
    // if it's equal to 1 then just store back directly
    if constexpr(num_loads == 1) {
        static_assert(STEPS == 1, "");
        if constexpr (IN_PLACE) {
            mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_REG>(regA, regB, regC, regC);
        } else {
            mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_REG>(regA, regB, regC,regD);
        }
    } else {
        if constexpr (num_loads > STEPS) {
            // WB load (so I don't reserve and if I use inplace I will stall otherwise)
            //unrolled_for_func<STEPS, num_loads>(mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_LOAD>, regA++, regB++, regC,regD);
            unrolled_for_func<STEPS, num_loads>(mat_mma_unroll<Accsrc_t::ACC_NONE, WriteBack_t::WB_LOAD>, &regA, &regB ,0,0);
        }
        // Unroll the rest
        //unrolled_for_func<0, STEPS>(mat_mma<Accsrc_t::ACC_NONE, WriteBack_t::WB_REG>, regA++, regB++, regC++,regD++);
        if constexpr (IN_PLACE){
            unrolled_for_func<0, STEPS>(mat_mma_unroll<Accsrc_t::ACC_REG, WriteBack_t::WB_REG,true>, &regA, &regB, &regC, &regC);
        } else {
            unrolled_for_func<0, STEPS>(mat_mma_unroll<Accsrc_t::ACC_REG, WriteBack_t::WB_REG>, &regA, &regB, &regC, &regD);
        }
    }
}

/**
 * @brief Tensor core matrix multiplication with source accumulation in buffer and intermediate write backs to buffer
 * */
template <int DOT_WIDTH, int STEPS, int RES_TYPE_SIZE = 4,int OP_TYPE_SIZE= 2,int USE_TILES = 1, int LOOP_IDX=0 >
inline void tc_mma_acc_zero_wb_buf(float* regA, float* regB , const int wb_tile=0) {
    constexpr int num_loads = DOT_WIDTH / (RES_TYPE_SIZE/OP_TYPE_SIZE);
    float* s_regA = regA;
    float* s_regB = regB;
    //static_assert(num_loads != 1, "For only one load use write back to register file");

    if constexpr (num_loads ==1) {
        mat_mma<Accsrc_t::ACC_IMM, WriteBack_t::WB_BUF>(regA, regB,0,wb_tile); // loads zero by default
    } else {
        mat_mma<Accsrc_t::ACC_IMM, WriteBack_t::WB_LOAD>(regA, regB); // loads zero by default
        regA++;
        regB++;

        if constexpr(num_loads >2)  {
            unrolled_for_func<0, num_loads-2>(mat_mma_unroll<Accsrc_t::ACC_NONE, WriteBack_t::WB_LOAD>, &regA, &regB,0,0);
        }
        mat_mma<Accsrc_t::ACC_NONE, WriteBack_t::WB_BUF>(regA, regB, 0,wb_tile);
    }

    if constexpr (LOOP_IDX < USE_TILES-1) {
        tc_mma_acc_zero_wb_buf<DOT_WIDTH, STEPS, RES_TYPE_SIZE,OP_TYPE_SIZE,USE_TILES,LOOP_IDX+1>(s_regA, s_regB+num_loads,wb_tile+1);
    }
}

/*
 * used in conjunction with  tc_mma_acc_IMM_wb_buf
 * */
template <int DOT_WIDTH, int STEPS, int RES_TYPE_SIZE = 4,int OP_TYPE_SIZE= 2, int USE_TILES = 1, int LOOP_IDX=0 >
inline void tc_mma_acc_buf_wb_buf(float* regA, float* regB, const int acc_tile=0) {
    constexpr int num_loads = DOT_WIDTH / (RES_TYPE_SIZE/OP_TYPE_SIZE);
    float* s_regA = regA;
    float* s_regB = regB;
    //static_assert(num_loads != 1, "For only one load use write back to register file");
    if constexpr(num_loads >1)  {
        unrolled_for_func<0, num_loads-1>(mat_mma_unroll<Accsrc_t::ACC_NONE, WriteBack_t::WB_LOAD>, &regA, &regB,0,0);
    }

    mat_mma<Accsrc_t::ACC_BUF, WriteBack_t::WB_BUF>(regA, regB, acc_tile); // in hw do it in the beginning

    if constexpr (LOOP_IDX < USE_TILES-1) {
        tc_mma_acc_buf_wb_buf<DOT_WIDTH, STEPS, RES_TYPE_SIZE,OP_TYPE_SIZE,USE_TILES,LOOP_IDX+1>(s_regA, s_regB+num_loads,acc_tile+1);
    }
}

/**
 * Unrolled accumulation for regC and regD
 * */

inline void fadd_regs(float** regD, float** regC) {
    // implement floating point add...
    asm volatile ("fadd.s %0, %1, %0" : "+f" (**regD) : "f" (**regC));
    (*regC)++;
    (*regD)++;
}


#endif

