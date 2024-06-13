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
template<int DOT_WIDTH, int STEPS, int RES_TYPE_SIZE = 4,int OP_TYPE_SIZE= 2, int OUTER_PRODUCT_COLS, int OUTER_PRODUCT_ROWS, bool IN_PLACE =true, /*For loop unroll management*/ int CUR_ROW=0, int CUR_COL=0>
inline void tc_mma_acc_reg_wb_reg(float* regA , float* regB , float* regC, float* regD=nullptr) {
    constexpr int num_loads = DOT_WIDTH / (RES_TYPE_SIZE/OP_TYPE_SIZE);
    static_assert(num_loads >= STEPS, "Steps cannot be larger than number of loads when using register file as accumulator. Because if steps is more that means my C register per PE is not entirely filled");
    // if it's equal to 1 then just store back directly
    float* s_regA = regA + num_loads * CUR_ROW;
    float* s_regB = regB + num_loads * CUR_COL;
    float* s_regC = regC + STEPS * CUR_ROW + CUR_COL;
    float* s_regD = regD ;
    if constexpr (!IN_PLACE) {
        s_regD = regD + STEPS * CUR_ROW + CUR_COL;
    }
    if constexpr(num_loads == 1) {
        static_assert(STEPS == 1, "");
        if constexpr (IN_PLACE) {
            mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_REG>(s_regA, s_regB, s_regC, s_regC);
        } else {
            mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_REG>(s_regA, s_regB, s_regC,s_regD);
        }
    } else {
        if constexpr (num_loads > STEPS) {
            // WB load (so I don't reserve and if I use inplace I will stall otherwise)
            //unrolled_for_func<STEPS, num_loads>(mat_mma<Accsrc_t::ACC_REG, WriteBack_t::WB_LOAD>, s_regA++, s_regB++, s_regC,s_regD);
            unrolled_for_func<STEPS, num_loads>(mat_mma_unroll<Accsrc_t::ACC_NONE, WriteBack_t::WB_LOAD>, &s_regA, &s_regB ,0,0);
        }
        // Unroll the rest
        //unrolled_for_func<0, STEPS>(mat_mma<Accsrc_t::ACC_NONE, WriteBack_t::WB_REG>, s_regA++, s_regB++, s_regC++,s_regD++);
        if constexpr (IN_PLACE){
            unrolled_for_func<0, STEPS>(mat_mma_unroll<Accsrc_t::ACC_REG, WriteBack_t::WB_REG,true>, &s_regA, &s_regB, &s_regC, &s_regC);
        } else {
            unrolled_for_func<0, STEPS>(mat_mma_unroll<Accsrc_t::ACC_REG, WriteBack_t::WB_REG>, &s_regA, &s_regB, &s_regC, &s_regD);
        }
    }

    // Outer product accumulation loop unroll

    if constexpr(CUR_ROW < OUTER_PRODUCT_ROWS-1){
        if constexpr (CUR_COL < OUTER_PRODUCT_COLS-1) {
            if constexpr(IN_PLACE) {
                tc_mma_acc_reg_wb_reg<DOT_WIDTH, STEPS, RES_TYPE_SIZE,OP_TYPE_SIZE,OUTER_PRODUCT_COLS,OUTER_PRODUCT_ROWS,true,CUR_ROW,CUR_COL+1>(regA, regB, regC);
            } else {
                tc_mma_acc_reg_wb_reg<DOT_WIDTH, STEPS, RES_TYPE_SIZE,OP_TYPE_SIZE,OUTER_PRODUCT_COLS,OUTER_PRODUCT_ROWS,true,CUR_ROW,CUR_COL+1>(regA, regB, regC, regD);
            }
        } else {
            if constexpr(IN_PLACE) {
                tc_mma_acc_reg_wb_reg<DOT_WIDTH, STEPS, RES_TYPE_SIZE,OP_TYPE_SIZE,OUTER_PRODUCT_COLS,OUTER_PRODUCT_ROWS,true,CUR_ROW+1,0>(regA, regB, regC);
            } else {
                tc_mma_acc_reg_wb_reg<DOT_WIDTH, STEPS, RES_TYPE_SIZE,OP_TYPE_SIZE,OUTER_PRODUCT_COLS,OUTER_PRODUCT_ROWS,false,CUR_ROW+1,0>(regA, regB, regC, regD);
            }
        }
    }
}


/**
 * @brief Tensor core matrix multiplication with source accumulation begin zero and intermediate write backs going to tile buffer
 * */
template <int DOT_WIDTH, int STEPS, int RES_TYPE_SIZE = 4,int OP_TYPE_SIZE= 2,int OUTER_PRODUCT_ROWS=1,int OUTER_PRODUCT_COLS = 1,  int CUR_ROW =0, int CUR_COL=0, const int tile=0 >
inline void tc_mma_acc_zero_wb_buf(float* regA, float* regB ) {
    constexpr int num_loads = DOT_WIDTH / (RES_TYPE_SIZE/OP_TYPE_SIZE);
    float* s_regA = regA + num_loads * CUR_ROW;
    float* s_regB = regB + num_loads * CUR_COL;

    //static_assert(num_loads != 1, "For only one load use write back to register file");

    constexpr int wb_tile = tile;
    if constexpr (num_loads ==1) {
        mat_mma<Accsrc_t::ACC_IMM, WriteBack_t::WB_BUF>(s_regA, s_regB,0,wb_tile); // loads zero by default
    } else {
        mat_mma<Accsrc_t::ACC_IMM, WriteBack_t::WB_LOAD>(s_regA, s_regB); // loads zero by default
        s_regA++;
        s_regB++;


        if constexpr(num_loads >2)  {
            unrolled_for_func<0, num_loads-2>(mat_mma_unroll<Accsrc_t::ACC_NONE, WriteBack_t::WB_LOAD>, &s_regA, &s_regB,0,0);
        }
        mat_mma<Accsrc_t::ACC_NONE, WriteBack_t::WB_BUF>(s_regA, s_regB, 0,wb_tile);
    }

    if constexpr(CUR_ROW < OUTER_PRODUCT_ROWS-1) {
        if constexpr (CUR_COL < OUTER_PRODUCT_COLS-1) {
            tc_mma_acc_zero_wb_buf<DOT_WIDTH, STEPS, RES_TYPE_SIZE,OP_TYPE_SIZE,OUTER_PRODUCT_ROWS,OUTER_PRODUCT_COLS,CUR_ROW,CUR_COL+1,wb_tile+1>(regA, regB);
        } else {
            tc_mma_acc_zero_wb_buf<DOT_WIDTH, STEPS, RES_TYPE_SIZE,OP_TYPE_SIZE,OUTER_PRODUCT_ROWS,OUTER_PRODUCT_COLS,CUR_ROW+1,0,wb_tile+1>(regA, regB);
        }
    }
}

/*
 * used in conjunction with  tc_mma_acc_IMM_wb_buf
 * A reuse strategy
 * */
template <int DOT_WIDTH, int STEPS, int RES_TYPE_SIZE = 4,int OP_TYPE_SIZE= 2,int OUTER_PRODUCT_ROWS=1,int OUTER_PRODUCT_COLS = 1,  int CUR_ROW =0, int CUR_COL=0, const int tile=0 >
inline void tc_mma_acc_buf_wb_buf(float* regA, float* regB) {
    constexpr int num_loads = DOT_WIDTH / (RES_TYPE_SIZE/OP_TYPE_SIZE);
    float* s_regA = regA + num_loads * CUR_ROW;
    float* s_regB = regB + num_loads * CUR_COL;
    //static_assert(num_loads != 1, "For only one load use write back to register file");
    constexpr int acc_tile = tile;
    if constexpr(num_loads >1)  {
        unrolled_for_func<0, num_loads-1>(mat_mma_unroll<Accsrc_t::ACC_NONE, WriteBack_t::WB_LOAD>, &s_regA, &s_regB,0,0);
    }

    mat_mma<Accsrc_t::ACC_BUF, WriteBack_t::WB_BUF>(s_regA, s_regB, acc_tile,acc_tile); // in hw do it in the beginning

    if constexpr(CUR_ROW < OUTER_PRODUCT_ROWS-1) {
        if constexpr (CUR_COL < OUTER_PRODUCT_COLS-1) {
            tc_mma_acc_buf_wb_buf<DOT_WIDTH, STEPS, RES_TYPE_SIZE,OP_TYPE_SIZE,OUTER_PRODUCT_ROWS,OUTER_PRODUCT_COLS,CUR_ROW,CUR_COL+1,wb_tile+1>(regA, ++regB);
        } else {
            tc_mma_acc_buf_wb_buf<DOT_WIDTH, STEPS, RES_TYPE_SIZE,OP_TYPE_SIZE,OUTER_PRODUCT_ROWS,OUTER_PRODUCT_COLS,CUR_ROW+1,0,wb_tile+1>(regA, ++regB);
        }
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

