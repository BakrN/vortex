#include "helper.hpp"
#include <iostream>
#include <vortex.h>
#define OP_TYPE  uint16_t
#define RES_TYPE float

#define M 16
#define N 16
#define K 16
#define MATFILE "matrices.bin"

vx_device_h device = nullptr;

int main(){
    const char *filename = "matrices.bin";
    float* A, *B ,* C, *D, *D_expected, *D_result; // I want compiler to use float registers (so I give them type float) (irrespective of actual undelrying type)
    A = (float *)malloc(M * K * sizeof(OP_TYPE));
    B = (float *)malloc(K * N * sizeof(OP_TYPE));
    C = (float *)malloc(M * N * sizeof(RES_TYPE));
    D_result = (float *)malloc(M * N * sizeof(RES_TYPE)); // allocate on dev


    D_expected = (float *)malloc(M * N * sizeof(RES_TYPE)); // allocate on host

    read_matrices(filename, M, N, K, &A, &B, &C, &D_expected);

    //open device connection
    // open device connection
    std::cout << "open device connection" << std::endl;
    RT_CHECK(vx_dev_open(&device));
    // Read hardware registers
    // Big matrix multiplication tiling strategy (mapping problem here)

    // allocate device memory
    std::cout << "allocate device memory" << std::endl;
    RT_CHECK(vx_mem_alloc(device, buf_size, VX_MEM_TYPE_GLOBAL, &kernel_arg.src_addr));
    RT_CHECK(vx_mem_alloc(device, buf_size, VX_MEM_TYPE_GLOBAL, &kernel_arg.dst_addr));
    free(A);
    free(B);
    free(C);
    free(D_expected) ;
    free(D_result);
}
