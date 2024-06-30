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

template<OperationMode mode>
struct OpModeSelect;


template<>
struct OpModeSelect<OperationMode::ACC_REG_WB_REG> {
    using C_t = float*;
    using D_t = float*;

    static constexpr float* D_default = nullptr;
};

template<>
struct OpModeSelect<OperationMode::ACC_REG_WB_BUF> {
    using C_t = float*;
    using D_t = int;
    static constexpr D_t D_default = 0;
};

template<>
struct OpModeSelect<OperationMode::ACC_BUF_WB_BUF> {
    using C_t = int ;
    using D_t = int ;
    static constexpr D_t D_default = 0;
};

template<>
struct OpModeSelect<OperationMode::ACC_BUF_WB_REG> {
    using C_t = int;
    using D_t = float*;
    static constexpr D_t D_default = nullptr;
};




template <OperationMode mode, LoadMode load>
inline void mma (float* A, float* B, typename OpModeSelect<mode>::C_t C, typename OpModeSelect<mode>::D_t D = OpModeSelect<mode>::D_default){
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
                [rd] "i" (D) ,
                [EXT] "i" (TC_EXT) ,
                [func3] "i" ((int)load),
                [func2] "i" ((int)(mode)),
                [rs1] "f" (*A),
                [rs2] "f" (*B),
                [rs3] "i" (C)
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
                        [rs3] "i" (C)
                    );
                } else {
                    asm volatile(".insn r4 %[EXT], %[func3], %[func2], %[rd], f%[rs1], f%[rs2], f%[rs3]":
                        [rd] "=f" (*D) :
                        [EXT] "i" (TC_EXT) ,
                        [func3] "i" ((int)(load)),// Don't care
                        [func2] "i" ((int)(mode)),
                        [rs1] "i" (0),
                        [rs2] "i" (0),
                        [rs3] "i" (C)
                    );
                }
            } else { // OperationMode::ACC_REG_WB_BUF



                if constexpr (load == LoadMode::NORMAL) {
                    asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], %[rs1], %[rs2], %[rs3]"::
                        [rd] "i" (D),
                        [EXT] "i" (TC_EXT) ,
                        [func3] "i" ((int)load),
                        [func2] "i" ((int)(mode)),
                        [rs1] "f" (*A),
                        [rs2] "f" (*B),
                        [rs3] "f" (*C)
                    );

                } else {
                    asm volatile(".insn r4 %[EXT], %[func3], %[func2], f%[rd], f%[rs1], f%[rs2], %[rs3]"::
                        [rd] "i" (D),
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


template <int a_rows, int b_cols, int k_multiple, int thread_n, OperationMode mode=OperationMode::ACC_REG_WB_REG, bool in_place=true, int cur_row =0 , int cur_col=0>
inline void tc_mma (float* regA, float* regB , typename OpModeSelect<mode>::C_t regC ,  typename OpModeSelect<mode>::D_t regD= OpModeSelect<mode>::D_default) {
    // if it's equal to 1 then just store back directly
    static_assert(thread_n * a_rows * b_cols <= 32 , "Can only address up to 32 tile regs (5 bits) so total regs inside must not exceed that");
    float* s_regA = regA + cur_row;
    float* s_regB = regB + cur_col;
    typename OpModeSelect<mode>::C_t s_regC = regC + thread_n*cur_row+ cur_col*a_rows*thread_n;
    typename OpModeSelect<mode>::D_t s_regD = regD;


    if constexpr (!in_place) {
        s_regD = regD + thread_n*cur_row+ cur_col*a_rows*thread_n;
    }

    // unroll over k
    unrolled_for_func<0, k_multiple>([&](){
        if constexpr (in_place) {
            mma<mode, LoadMode::NORMAL>(s_regA, s_regB, s_regC, s_regC) ;
            s_regC++;
        }else{
            mma<mode, LoadMode::NORMAL>(s_regA, s_regB, s_regC, s_regD) ;
            s_regC++;
            s_regD++;
        }

        if constexpr(mode != OperationMode::ACC_BUF_WB_BUF) {
            unrolled_for_func<0,thread_n-1> ([&](){
                    if constexpr (in_place) {
                        mma<mode, LoadMode::C_ONLY>(nullptr, nullptr, s_regC, s_regC); s_regC++;

                    } else {
                        mma<mode, LoadMode::C_ONLY>(nullptr, nullptr, s_regC, s_regD);
                        s_regC++; s_regD++;
                    }
            });
        }
        s_regA += a_rows;
        s_regB += b_cols;

        s_regC = regC + thread_n*cur_row+ cur_col*a_rows*thread_n;

        if constexpr (!in_place) {
            s_regD = regD + thread_n*cur_row+ cur_col*a_rows*thread_n;
        }

    });

    if constexpr (cur_row  < a_rows -1) {
        if constexpr  (cur_col < b_cols -1) {
            tc_mma<a_rows, b_cols, k_multiple, thread_n, mode, in_place, cur_row , cur_col+1>(regA, regB, regC, regD);
        } else {
            tc_mma<a_rows, b_cols, k_multiple, thread_n, mode, in_place, cur_row+1, 0>(regA, regB, regC, regD);
        }

    } else {
        if constexpr (cur_col < b_cols -1 ) {
            tc_mma<a_rows, b_cols, k_multiple, thread_n, mode, in_place, cur_row , cur_col+1>(regA, regB, regC, regD);
        }
    }
}


// Cooperative warp execution:

template <int a_rows, int b_cols, int k_multiple, int thread_n, int warp_group_size, bool in_place=true, int cur_row =0 , int cur_col=0>
inline void tc_mma_wg_before(float* regA, float* regB , float*regC , const int warp_id, const int before_barrier_id) {
    const int wg_idx = warp_id % warp_group_size;
    if (wg_idx == 0) {
        tc_mma<a_rows, b_cols, k_multiple, thread_n, OperationMode::ACC_REG_WB_BUF, false> (regA, regB, regC, 0);
        vx_barrier(before_barrier_id, warp_group_size);
    } else {
        vx_barrier(before_barrier_id, warp_group_size);
        //tc_mma<a_rows, b_cols, k_multiple, thread_n, OperationMode::ACC_BUF_WB_BUF, true> (regA, regB, 0);
    }
}

template <int a_rows, int b_cols, int k_multiple, int thread_n>
inline void tc_mma_wg(float* regA, float* regB ) {
    tc_mma<a_rows, b_cols, k_multiple, thread_n, OperationMode::ACC_BUF_WB_BUF, false>(regA, regB, 0);
}

template <int a_rows, int b_cols, int k_multiple, int thread_n, int warp_group_size>
inline void tc_mma_wg_after(float* regA, float* regB ,const int warp_id, const int after_barrier_id , float* regD){
    const int wg_idx = warp_id % warp_group_size;
    if (wg_idx==0) {
        vx_barrier(after_barrier_id,  warp_group_size);
        tc_mma<a_rows, b_cols, k_multiple, thread_n, OperationMode::ACC_BUF_WB_REG, false>(regA, regB,0 , regD);
        //int idx[1] = {1};
        //float zeroA[a_rows*k_multiple] = {0};
        //float zeroB[a_rows*k_multiple] = {0};
        //unrolled_for_func<0, thread_n-1>([&](int* const){
        //    tc_mma<a_rows, b_cols, k_multiple, thread_n, OperationMode::ACC_BUF_WB_REG, false>(zeroA,zeroB, (*idx)++, regD++);
        //}, idx) ;
    } else {
        //tc_mma_wg<a_rows, b_cols, k_multiple, thread_n>(regA, regB); // I lag here
        vx_barrier(after_barrier_id,  warp_group_size);
    }
}

#endif
