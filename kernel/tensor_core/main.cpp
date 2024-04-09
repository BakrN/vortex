#include "helper.hpp"
#include <iostream>
#include <vortex.h>
#include "common.h"





#define M 16
#define N 16
#define K 16
#define MATFILE "matrices.bin"


vx_device_h device = nullptr;
const char* kernel_file = "kernel.bin";
const char *filename = "matrices.bin";

int main(){
    float* A, *B ,* C, *D, *D_expected, *D_result; // I want compiler to use float registers (so I give them type float) (irrespective of actual undelrying type)
    int A_bytes = M * K * TC_OP_SIZE;
    int B_bytes = K * N * TC_OP_SIZE;
    int C_bytes = M * N * TC_RES_SIZE;
    int D_bytes = M * N * TC_RES_SIZE;

    A = (float *)malloc(A_bytes);
    B = (float *)malloc(B_bytes);
    C = (float *)malloc(C_bytes);
    D_result = (float *)malloc(C_bytes); // allocate on dev


    D_expected = (float *)malloc(M * N * TC_RES_SIZE); // allocate on host

    read_matrices(filename, M, N, K, &A, &B, &C, &D_expected);

    //open device connection
    // open device connection
    std::cout << "open device connection" << std::endl;
    RT_CHECK(vx_dev_open(&device));
    // Read hardware registers
    // Big matrix multiplication tiling strategy (mapping problem here)

    // allocate device memory
    std::cout << "allocate device memory" << std::endl;
    uint64_t A_ADDR;
    uint64_t B_ADDR;
    uint64_t C_ADDR;
    uint64_t D_ADDR;

    kernel_arg_t kernel_args;


    vx_mem_alloc(device, A_bytes, VX_MEM_TYPE_GLOBAL, &A_ADDR);
    vx_mem_alloc(device, B_bytes, VX_MEM_TYPE_GLOBAL, &B_ADDR);
    vx_mem_alloc(device, C_bytes, VX_MEM_TYPE_GLOBAL, &C_ADDR);
    vx_mem_alloc(device, D_bytes, VX_MEM_TYPE_GLOBAL, &D_ADDR);
    std::cout << std::hex << "A_ADDR: " << A_ADDR << "\n \
            B_ADDR: " << B_ADDR << "\n \
            C_ADDR: " << C_ADDR << "\n \
            D_ADDR: " << D_ADDR << std::endl;

    kernel_args.A_addr = A_ADDR;
    kernel_args.A_layout = 0;
    kernel_args.B_addr = B_ADDR;
    kernel_args.B_layout = 0;
    kernel_args.C_addr = C_ADDR;
    kernel_args.C_layout = 0;
    kernel_args.D_addr = D_ADDR;
    kernel_args.D_layout = 0;

    kernel_args.M_ = M;
    kernel_args.N_ = N;
    kernel_args.K_ = K;

    // copy operand data to device
    vx_copy_to_dev(device, A_ADDR, A, A_bytes);
    vx_copy_to_dev(device, B_ADDR, B, B_bytes);
    vx_copy_to_dev(device, C_ADDR, C, C_bytes);
    vx_copy_to_dev(device, KERNEL_ARG_DEV_MEM_ADDR, &kernel_args, sizeof(kernel_args));

    // upload program
    vx_upload_kernel_file(device, kernel_file);

    // Start & wait
    vx_start(device);
    vx_ready_wait(device, VX_MAX_TIMEOUT);
    // copy result back to host
    vx_copy_from_dev(device, D_result, D_ADDR, D_bytes);


    free(A);
    free(B);
    free(C);
    free(D_expected) ;
    free(D_result);
}
