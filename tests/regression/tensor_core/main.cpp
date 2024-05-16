#include <iostream>
#include <vortex.h>
#include "common.h"
#include "helper.hpp"


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
const char *filename = "py";

int main(){
    float* A, *B ,* C, *D, *D_expected, *D_result; // I want compiler to use float registers (so I give them type float) (irrespective of actual undelrying type)
    int A_bytes = MM_M * MM_K * TC_OP_SIZE;
    int B_bytes = MM_K * MM_N * TC_OP_SIZE;
    int C_bytes = MM_M * MM_N * TC_RES_SIZE;
    int D_bytes = MM_M * MM_N * TC_RES_SIZE;

    A = (float *)malloc(A_bytes);
    B = (float *)malloc(B_bytes);
    C = (float *)malloc(C_bytes);
    D_result = (float *)malloc(C_bytes); // allocate on dev


    D_expected = (float *)malloc(MM_M * MM_N * TC_RES_SIZE); // allocate on host

    read_matrices<TC_OP_SIZE, TC_RES_SIZE>(filename, MM_M, MM_N, MM_K, &A, &B, &C, &D_expected);
    // Print operand matrices
    std::cout << "MAINCPP: PRINTING ROW MAJOR A (" << MM_M << "x" << MM_K << ")" << std::endl;
    for (int i = 0 ; i < MM_M; i++) {
        for (int k = 0 ; k < MM_K/2; k+=1 ) { // fp16
            constexpr int stride = (MM_K*TC_OP_SIZE)/4;
            uint32_t* val = (uint32_t*)(&(A[i *stride  +k]));
            uint16_t _second = (uint16_t)(*val >> 16);
            uint16_t _first = (uint16_t)(*val & 0xFFFF);
            float16 first(_first) ;
            float16 second(_second);
            std::cout << first.to_float32() << " ";
            std::cout << second.to_float32() << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "MAINCPP: PRINTING COL MAJOR B (" << MM_K << "x" << MM_N << ")" << std::endl;
    for (int i = 0 ; i < MM_K; i++) {
        for (int k = 0 ; k < MM_N/2; k+=1 ) {
            constexpr int stride = (MM_K*TC_OP_SIZE)/4;
            uint32_t* val = (uint32_t*)(&(B[i * stride +k]));
            uint16_t _second = (uint16_t)(*val >> 16);
            uint16_t _first = (uint16_t)(*val & 0xFFFF);
            float16 first(_first) ;
            float16 second(_second);
            std::cout << first.to_float32() << " " ;
            std::cout << second.to_float32()<< " ";
        }
        std::cout << std::endl;
    }

    std::cout << "MAINCPP: PRINTING C" << std::endl;
    for (int i = 0 ; i < MM_M; i++) {
        for (int j = 0 ; j < MM_N; j++) {
            printf("%f ", C[((i*MM_N) + j)]);
        }
        std::cout << std::endl;
    }

    //open device connection
    // open device connection
    std::cout << "open device connection" << std::endl;
    vx_dev_open(&device);
    // Read hardware registers
    // Big matrix multiplication tiling strategy (mapping problem here)

    // allocate device memory
    std::cout << "allocate device memory" << std::endl;
    uint64_t A_ADDR;
    uint64_t B_ADDR;
    uint64_t C_ADDR;
    uint64_t D_ADDR;

    kernel_arg_t kernel_args;


    vx_mem_alloc(device, A_bytes, VX_MEM_TYPE_LOCAL, &A_ADDR);
    vx_mem_alloc(device, B_bytes, VX_MEM_TYPE_LOCAL, &B_ADDR);
    vx_mem_alloc(device, C_bytes, VX_MEM_TYPE_LOCAL, &C_ADDR);
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

    kernel_args.M_ = MM_M;
    kernel_args.N_ = MM_N;
    kernel_args.K_ = MM_K;


    kernel_args.num_tasks = NUM_CORES* NUM_THREADS * NUM_WARPS; // how many threads warps etc... warps / cores to launch
    std::cout << "NUM CORES: " << NUM_CORES << " NUM WARPS: " << NUM_WARPS << " NUM THREADS: " << NUM_THREADS << std::endl;

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

    // Compare result
    std::cout << "D RESULT" << std::endl;
    for (int i = 0 ; i < MM_M; i ++) {
        for (int j = 0 ; j < MM_N; j++) {
            std::cout << D_result[i * MM_N + j] << " " ;
        }
        std::cout << std::endl;
    }

    std::cout << "D EXPECTED" << std::endl;
    for (int i = 0 ; i < MM_M; i ++) {
        for (int j = 0 ; j < MM_N; j++) {
            std::cout << D_expected[i * MM_N + j] << " " ;
        }
        std::cout << std::endl;
    }

    //for (int i = 0 ; i < MM_M; i ++) {
    //    for (int j = 0 ; j < MM_N; j++) {
    //        if (!float_eq(D_result[i* MM_N + j], D_expected[i* MM_N + j])) {
    //            std::cout << "Mismatch at (" << i << "," << j << ")" << " exp: " << D_expected[i* MM_N + j] << " act: " << D_result[i* MM_N + j] << std::endl;
    //        }
    //    }
    //}


    free(A);
    free(B);
    free(C);
    free(D_expected) ;
    free(D_result);
}
