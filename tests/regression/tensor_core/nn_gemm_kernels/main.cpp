// Take argv at runtime to run either vanilla vortex, vanilla tensor core, vanilla sliced_k,
// Adds padding to problem

#include <iostream>
#include <vortex.h>
#include "VX_config.h"
#include "common.h"
#include "../helper.hpp"


bool float_eq( float a , float b, float epsilon = 0.05) {
    float diff;
    if (a > b) {
        diff = a-b;
    } else if (b > a) {
        diff = b-a;
    }


    return epsilon > diff;
}


vx_device_h device = nullptr;
const char* kernel_file = "kernel.bin";
const char* sgemm_file = "sgemm_kernel.bin"; // baseline (sgemm)
const char *filename = "../py";

int main(){
    float* A, *B ,* C, *D, *D_expected, *D_result; // I want compiler to use float registers (so I give them type float) (irrespective of actual undelrying type)
    int A_bytes = MM_M * MM_K * TC_OP_SIZE;
    int B_bytes = MM_K * MM_N * TC_OP_SIZE;
    int C_bytes = MM_M * MM_N * TC_RES_SIZE;
    int D_bytes = MM_M * MM_N * TC_RES_SIZE;

    A = (float *)malloc(A_bytes);
    B = (float *)malloc(B_bytes);
    //C = (float *)malloc(C_bytes);
    D_result = (float *)malloc(C_bytes); // allocate on dev


    D_expected = (float *)malloc(MM_M * MM_N * TC_RES_SIZE); // allocate on host

    read_matrices<TC_OP_SIZE, TC_RES_SIZE>(filename, MM_M, MM_N, MM_K, &A, &B, &D_expected);

    std::cout << "open device connection" << std::endl;
    vx_dev_open(&device);

    std::cout << "allocate device memory" << std::endl;
    uint64_t A_ADDR;
    uint64_t B_ADDR;
    uint64_t D_ADDR;

    kernel_arg_t kernel_args;


    vx_mem_alloc(device, A_bytes, VX_MEM_TYPE_LOCAL, &A_ADDR);
    vx_mem_alloc(device, B_bytes, VX_MEM_TYPE_LOCAL, &B_ADDR);
    vx_mem_alloc(device, D_bytes, VX_MEM_TYPE_GLOBAL, &D_ADDR);
    std::cout << std::hex << "A_ADDR: " << A_ADDR << "\n \
            B_ADDR: " << B_ADDR << "\n \
            D_ADDR: " << D_ADDR << std::endl;

    kernel_args.A_addr = A_ADDR;
    kernel_args.A_layout = 0;
    kernel_args.B_addr = B_ADDR;
    kernel_args.B_layout = 0;
    kernel_args.D_addr = D_ADDR;
    kernel_args.D_layout = 0;

    kernel_args.M_ = MM_M;
    kernel_args.N_ = MM_N;
    kernel_args.K_ = MM_K;


    int num_cores ;
    int num_warps;
    int num_threads;
    vx_dev_caps(device, VX_CAPS_NUM_CORES, reinterpret_cast<uint64_t*>(&num_cores));
    vx_dev_caps(device, VX_CAPS_NUM_WARPS, reinterpret_cast<uint64_t*>(&num_warps));
    vx_dev_caps(device, VX_CAPS_NUM_THREADS, reinterpret_cast<uint64_t*>(&num_threads));
    kernel_args.num_tasks = num_cores * num_warps * num_threads;
    std::cout << "NUM CORES: " << num_cores << " NUM WARPS: " << num_warps << " NUM THREADS: " << num_threads <<  "NUM TASKS: " << kernel_args.num_tasks << std::endl;

    // copy operand data to device
    vx_copy_to_dev(device, A_ADDR, A, A_bytes);
    vx_copy_to_dev(device, B_ADDR, B, B_bytes);
    //vx_copy_to_dev(device, C_ADDR, C, C_bytes);
    vx_copy_to_dev(device, KERNEL_ARG_DEV_MEM_ADDR, &kernel_args, sizeof(kernel_args));

    // upload program
    vx_upload_kernel_file(device, kernel_file);

    // Start & wait
    vx_start(device);
    vx_ready_wait(device, VX_MAX_TIMEOUT);
    // copy result back to host
    vx_copy_from_dev(device, D_result, D_ADDR, D_bytes);

    uint32_t errors=0;
    for (int i = 0 ; i < MM_M; i ++) {
        for (int j = 0 ; j < MM_N; j++) {
            if (!float_eq(D_result[i* MM_N + j], D_expected[i* MM_N + j], 0.1f)) {
                errors+=1;
                std::cout << "Mismatch at (" << i << "," << j << ")" << " exp: " << D_expected[i* MM_N + j] << " act: " << D_result[i* MM_N + j] << std::endl;
            }
        }
    }
    std::cout << "Total errors: " << errors << std::endl;

    free(A);
    free(B);
    free(D_expected) ;
    free(D_result);
}
