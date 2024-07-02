#ifndef MAT_MMA_HPP
#define MAT_MMA_HPP

#include "VX_config.h"
#define TC_EXT 0x7b
#include "mat_helper.hpp"
#include <vx_intrinsics.h>
#include <vx_print.h>

// func2
enum class OperationMode : int{
    ACC_REG_WB_REG = 0,
    ACC_REG_WB_BUF = 1,
    ACC_BUF_WB_REG = 2,
    ACC_BUF_WB_BUF = 3,

};


//func3
enum class LoadMode : int {
    NORMAL = 0, // load all three operands
    C_ONLY = 1  // load only C (post first step)
};

template <OperationMode mode, LoadMode load, int C_acc=0, int D_acc=0>
inline void mma (float* A, float* B, float* C=nullptr, float*  D = nullptr){
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
                [rd] "i" (D_acc) ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)load),
                [func2] "i" ((int)(mode)),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (C_acc)
            );
        } else {
            if constexpr(mode == OperationMode::ACC_BUF_WB_REG) {
                if constexpr (load == LoadMode::NORMAL){
                    asm volatile(".insn r4 %[EXT], %[func3], %[func2], %[rd], %[rs1], %[rs2], f%[rs3]":
                        [rd] "=f" (*D) :
                        [EXT] "i" (TC_EXT) ,
                        [func3] "i" ((int)(load)),// Don't care
                        [func2] "i" ((int)(mode)),
                        [rs1] "f" (*A),
                        [rs2] "f" (*B),
                        [rs3] "i" (C_acc)
                    );
                } else {
                    asm volatile(".insn r4 %[EXT], %[func3], %[func2], %[rd], f%[rs1], f%[rs2], f%[rs3]":
                        [rd] "=f" (*D) :
                        [EXT] "i" (TC_EXT) ,
                        [func3] "i" ((int)(load)),// Don't care
                        [func2] "i" ((int)(mode)),
                        [rs1] "i" (0),
                        [rs2] "i" (0),
                        [rs3] "i" (C_acc)
                    );
                }
            } else { // OperationMode::ACC_REG_WB_BUF



                if constexpr (load == LoadMode::NORMAL) {
                    asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], %[rs3]"::
                        [rd] "i" (D_acc),
                        [EXT] "i" (TC_EXT) ,
                        [func3] "i" ((int)load),
                        [func2] "i" ((int)(mode)),
                        [rs1] "f" (*A),
                        [rs2] "f" (*B),
                        [rs3] "f" (*C)
                    );

                } else {
                    asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], f%[rs1], f%[rs2], %[rs3]"::
                        [rd] "i" (D_acc),
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

// Execution inside tensor is as follow. Every thread in thread group has same A buffer. And therefore, every thread group is responsible for every element of its own row in the output tile
// include a unrolled function for outer product as well


template <int a_rows, int b_cols, int k_multiple, int thread_n,  bool in_place=true, int cur_row =0 , int cur_col=0>
inline void tc_mma (float* regA, float* regB , float* regC ,  float* regD= nullptr) {
    // if it's equal to 1 then just store back directly
    static_assert(thread_n * a_rows * b_cols <= 32 , "Can only address up to 32 tile regs (5 bits) so total regs inside must not exceed that");
    float* s_regA = regA + cur_row;
    float* s_regB = regB + cur_col;
    float* s_regC = regC + thread_n*cur_row+ cur_col*a_rows*thread_n;
    float* s_regD = regD;


    if constexpr (!in_place) {
        s_regD = regD + thread_n*cur_row+ cur_col*a_rows*thread_n;
    }

    // unroll over k
    unrolled_for_func<0, k_multiple>([&](){
        if constexpr (in_place) {
            mma<OperationMode::ACC_REG_WB_REG, LoadMode::NORMAL>(s_regA, s_regB, s_regC, s_regC) ;
            s_regC++;
        }else{
            mma<OperationMode::ACC_REG_WB_REG, LoadMode::NORMAL>(s_regA, s_regB, s_regC, s_regD) ;
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

        s_regC = regC + thread_n*cur_row+ cur_col*a_rows*thread_n;

        if constexpr (!in_place) {
            s_regD = regD + thread_n*cur_row+ cur_col*a_rows*thread_n;
        }

    });

    if constexpr (cur_row  < a_rows -1) {
        if constexpr  (cur_col < b_cols -1) {
            tc_mma<a_rows, b_cols, k_multiple, thread_n, in_place, cur_row , cur_col+1>(regA, regB, regC, regD);
        } else {
            tc_mma<a_rows, b_cols, k_multiple, thread_n, in_place, cur_row+1, 0>(regA, regB, regC, regD);
        }

    } else {
        if constexpr (cur_col < b_cols -1 ) {
            tc_mma<a_rows, b_cols, k_multiple, thread_n, in_place, cur_row , cur_col+1>(regA, regB, regC, regD);
        }
    }
}




template <int a_rows, int b_cols, int thread_n, int cur_row =0 , int cur_col=0>
void inline tc_mma_acc_buf_wb_buf(float* regA, float*regB) {
    float* s_regA = regA + cur_row;
    float* s_regB = regB + cur_col;
    constexpr int C = thread_n*cur_row+ cur_col*a_rows*thread_n;

    mma<OperationMode::ACC_BUF_WB_BUF, LoadMode::NORMAL, C, C>(s_regA, s_regB) ;
    if constexpr (cur_row  < a_rows -1) {
        if constexpr  (cur_col < b_cols -1) {
            tc_mma_acc_buf_wb_buf<a_rows, b_cols,  thread_n,   cur_row , cur_col+1>(regA, regB);
        } else {
            tc_mma_acc_buf_wb_buf<a_rows, b_cols,  thread_n,   cur_row+1, 0>(regA, regB);
        }
    } else {
        if constexpr (cur_col < b_cols -1 ) {
            tc_mma_acc_buf_wb_buf<a_rows, b_cols,  thread_n,   cur_row , cur_col+1>(regA, regB);
        }
    }
}


template <int loop, int a_rows, int b_cols,  int thread_n, int cur_row , int cur_col>
struct UnrollAccBufWbReg {
    inline void operator()(float*& regD) {
        constexpr int C_tn = thread_n*cur_row+ cur_col*a_rows*thread_n + loop+1;
        mma<OperationMode::ACC_BUF_WB_REG, LoadMode::C_ONLY, C_tn>(nullptr, nullptr, nullptr, regD) ;
        regD++;
    }
};


template <int a_rows, int b_cols,  int thread_n, int cur_row =0 , int cur_col=0>
void inline tc_mma_acc_buf_wb_reg(float* regA, float* regB, float* regD){
    float* s_regA = regA + cur_row;
    float* s_regB = regB + cur_col;
    float* s_regD = regD + thread_n*cur_row+ cur_col*a_rows*thread_n;
    constexpr auto C = thread_n*cur_row+ cur_col*a_rows*thread_n;

    mma<OperationMode::ACC_BUF_WB_REG, LoadMode::NORMAL, C>(s_regA, s_regB, nullptr, s_regD) ;
    s_regD++;
    unrolled_for_func_it<0, thread_n-1, UnrollAccBufWbReg,a_rows,b_cols,thread_n,cur_row,cur_col>(s_regD);

    if constexpr (cur_row  < a_rows -1) {
        if constexpr  (cur_col < b_cols -1) {
            tc_mma_acc_buf_wb_reg<a_rows, b_cols,  thread_n,   cur_row , cur_col+1>(regA, regB, regD);
        } else {
            tc_mma_acc_buf_wb_reg<a_rows, b_cols,  thread_n,   cur_row+1, 0>(regA, regB, regD);
        }
    } else {
        if constexpr (cur_col < b_cols -1 ) {
            tc_mma_acc_buf_wb_reg<a_rows, b_cols,  thread_n,   cur_row , cur_col+1>(regA, regB,regD);
        }
    }
}



template <int loop, int a_rows, int b_cols,  int thread_n, int cur_row , int cur_col>
struct UnrollAccRegWbBuf {
    inline void operator()(float*& regC) {
        constexpr int D_tn = thread_n*cur_row+ cur_col*a_rows*thread_n + loop+1;
        mma<OperationMode::ACC_REG_WB_BUF, LoadMode::C_ONLY, 0,D_tn>(nullptr, nullptr, regC) ;
        regC++;
    }
};

template <int a_rows, int b_cols, int thread_n, int cur_row =0 , int cur_col=0>
void inline tc_mma_acc_reg_wb_buf(float* regA, float* regB, float* regC){
    float* s_regA = regA + cur_row;
    float* s_regB = regB + cur_col;
    float* s_regC = regC + thread_n*cur_row+ cur_col*a_rows*thread_n;

    constexpr int D = thread_n*cur_row+ cur_col*a_rows*thread_n;

    mma<OperationMode::ACC_REG_WB_BUF, LoadMode::NORMAL, 0,D>(s_regA, s_regB, s_regC) ;
    s_regC++;
    unrolled_for_func_it<0, thread_n-1, UnrollAccRegWbBuf,a_rows,b_cols,thread_n,cur_row,cur_col>(s_regC);

    if constexpr (cur_row  < a_rows -1) {
        if constexpr  (cur_col < b_cols -1) {
            tc_mma_acc_reg_wb_buf<a_rows, b_cols,  thread_n,   cur_row , cur_col+1>(regA, regB, regC);
        } else {
            tc_mma_acc_reg_wb_buf<a_rows, b_cols,  thread_n,   cur_row+1, 0>(regA, regB, regC);
        }
    } else {
        if constexpr (cur_col < b_cols -1 ) {
            tc_mma_acc_reg_wb_buf<a_rows, b_cols,  thread_n,   cur_row , cur_col+1>(regA, regB, regC);
        }
    }


}

// Cooperative warp execution:

template <int a_rows, int b_cols, int thread_n, int warp_group_size, bool in_place=true, int cur_row =0 , int cur_col=0>
inline void tc_mma_wg_before(float* regA, float* regB , float*regC , const int warp_id, const int before_barrier_id) {
    const int wg_idx = warp_id % warp_group_size;
    if (wg_idx == 0) {
        tc_mma_acc_reg_wb_buf<a_rows, b_cols,  thread_n>(regA, regB, regC);
        vx_barrier(before_barrier_id, warp_group_size);
    } else {
        vx_barrier(before_barrier_id, warp_group_size);
        tc_mma_acc_buf_wb_buf<a_rows, b_cols,  thread_n>(regA, regB);
    }
}

template <int a_rows, int b_cols, int thread_n, int warp_group_size>
inline void tc_mma_wg_after(float* regA, float* regB ,const int warp_id, const int after_barrier_id , float* regD){
    const int wg_idx = warp_id % warp_group_size;
    if (wg_idx==0) {
        vx_barrier(after_barrier_id,  warp_group_size);
        tc_mma_acc_buf_wb_reg<a_rows, b_cols,  thread_n>(regA, regB, regD);
    } else {
        tc_mma_acc_buf_wb_buf<a_rows, b_cols,  thread_n>(regA, regB);
        vx_barrier(after_barrier_id,  warp_group_size);
    }
}






#endif
