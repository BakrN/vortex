#ifndef _COMMON_H
#define _COMMON_H


#define KERNEL_ARG_DEV_MEM_ADDR 0x7ffff000


struct gemm_args_t{
    unsigned int A_addr;
    unsigned int B_addr;
    unsigned int C_addr;
    unsigned int D_addr;

    int A_layout;
    int B_layout;
    int C_layout;
    int D_layout;

    unsigned int M_;
    unsigned int N_;
    unsigned int K_;
};



#endif // _COMMON_H
