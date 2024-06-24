#ifndef MAT_MMA_HPP
#define MAT_MMA_HPP

#define TC_EXT 0x7b
#include "mat_helper.hpp"

// mat mma func3 func2

enum class OperationMode : int{
    ACC_REG_WB_REG = 0,
    ACC_REG_WB_BUF = 1,
    ACC_BUF_WB_REG = 2,
    ACC_BUF_WB_BUF = 3,

};

enum class LoadMode : int {
    NORMAL = 0, // load all three operands
    C_ONLY = 1  // load only C (post first step)
};



template <OperationMode mode, LoadMode load>
inline void mma (float* A, float* B, float*C = nullptr, float*D = nullptr){
    if constexpr(mode == OperationMode::ACC_REG_WB_REG){
        if constexpr (load == LoadMode::NORMAL) {
            asm volatile(".insn r4 %[EXT], %[func3], %[func2], %[rd], %[rs1], %[rs2], %[rs3]":
                [rd] "=f" (*D) :
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)load),// unused for now
                [func2] "i" ((int)(mode)),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "f" (*C)
            );
        } else {
            asm volatile(".insn r4 %[EXT], %[func3], %[func2], %[rd], f%[rs1], f%[rs2], %[rs3]":
                [rd] "=f" (*D) :
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)load),
                [func2] "i" ((int)(mode)),
                [rs1] "i" (0),
                [rs2] "i" (0),
                [rs3] "f" (*C)
            );
        }

    } else {
        if constexpr( mode == OperationMode::ACC_BUF_WB_BUF) {

            asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], f%[rs3]"::
                [rd] "i" (0) ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" (0),// Don't care
                [func2] "i" ((int)(mode)),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (0)
            );
        } else {
            if constexpr(mode == OperationMode::ACC_BUF_WB_REG) {
                asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], f%[rs3]":
                    [rd] "=f" (*D) :
                    [EXT] "i" (TC_EXT) ,
                    [func3] "i" (0),// Don't care
                    [func2] "i" ((int)(mode)),
                    [rs1] "f" (*A),
                    [rs2] "f" (*B),
                    [rs3] "i" (0)
                );
            } else { // OperationMode::ACC_REG_WB_BUF

                if constexpr (load == LoadMode::NORMAL) {
                    asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], %[rs3]"::
                        [rd] "i" (0),
                        [EXT] "i" (TC_EXT) ,
                        [func3] "i" ((int)load),
                        [func2] "i" ((int)(mode)),
                        [rs1] "f" (*A),
                        [rs2] "f" (*B),
                        [rs3] "f" (*C)
                    );

                } else {
                    asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], f%[rs1], f%[rs2], %[rs3]"::
                        [rd] "i" (0),
                        [EXT] "i" (TC_EXT) ,
                        [func3] "i" ((int)load),
                        [func2] "i" ((int)(mode)),
                        [rs1] "i" (0),
                        [rs2] "i" (0),
                        [rs3] "f" (*C)
                    );
                }
            }

        }
    }
}

// include a unrolled function for outer product as well

template <int a_rows, int b_cols, int k_multiple, int thread_n, bool in_place=true, int cur_row =0 , int cur_col=0>
inline void tc_acc_reg_wb_reg (float* regA, float* regB , float*regC , float* regD=nullptr) {
    // if it's equal to 1 then just store back directly
    float* s_regA = regA + cur_row;
    float* s_regB = regB + cur_col;
    float* s_regC = regC + b_cols*thread_n*cur_row+ cur_col*thread_n;
    float* s_regD = regD ;
    if constexpr (!in_place) {
        s_regD = regD +b_cols*thread_n*cur_row+ cur_col*thread_n ;
    }
    // unroll over k
    unrolled_for_func<0, k_multiple>([&](){
        if constexpr (in_place) {
            mma<OperationMode::ACC_REG_WB_REG, LoadMode::NORMAL>(s_regA, s_regB, s_regC, s_regC) ;
            s_regC++;
        }else{
            s_regC++;
            s_regD++;
        }
        unrolled_for_func<0,thread_n-1> ([&](){
                if constexpr (in_place) {
                    mma<OperationMode::ACC_REG_WB_REG, LoadMode::C_ONLY>(nullptr, nullptr, s_regC, s_regC); s_regC++;

                } else {
                    mma<OperationMode::ACC_REG_WB_REG, LoadMode::C_ONLY>(nullptr, nullptr, s_regC, s_regD);
                    s_regC++; s_regD++;
                }
        });
        s_regA += a_rows;
        s_regB += b_cols;
        // reset C
        s_regC = regC + b_cols*thread_n*cur_row+ cur_col*thread_n;
        if (!in_place) {
            s_regD = regD + b_cols*thread_n*cur_row+ cur_col*thread_n;
        }
    });

    if constexpr (cur_row  < a_rows -1) {
        if constexpr  (cur_col < b_cols -1) {
            tc_acc_reg_wb_reg<a_rows, b_cols, k_multiple, thread_n, in_place, cur_row , cur_col+1>(regA, regB, regC, regD);
        } else {
            tc_acc_reg_wb_reg<a_rows, b_cols, k_multiple, thread_n, in_place, cur_row+1, 0>(regA, regB, regC, regD);
        }

    } else {
        if constexpr (cur_col < b_cols -1 ) {
            tc_acc_reg_wb_reg<a_rows, b_cols, k_multiple, thread_n, in_place, cur_row , cur_col+1>(regA, regB, regC, regD);
        }
    }
}


#endif
