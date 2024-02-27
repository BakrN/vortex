#include "helper.h"
#include <chrono>
#define OP_TYPE  uint16_t
#define RES_TYPE float

#define M 16
#define N 16
#define K 16
#define MATFILE "matrices.bin"

int main(){
    const char *filename = "matrices.bin";
    float* A, *B ,* C, *D, *D_expected;
    A = (float *)malloc(M * K * sizeof(OP_TYPE));
    A = (float *)malloc(M * K * sizeof(OP_TYPE));
    B = (float *)malloc(K * N * sizeof(OP_TYPE));
    C = (float *)malloc(M * N * sizeof(RES_TYPE));
    D = (float *)malloc(M * N * sizeof(RES_TYPE)); // allocate on dev


    D_expected = (float *)malloc(M * N * sizeof(RES_TYPE)); // allocate on host


    free(D_expected) ;
}
