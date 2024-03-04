#include <vx_intrinsics.h>
#include <vx_print.h>
#include "base/mat_mma.hpp"

#define M 4
#define N 4
#define K 8
#define OTILE_ROW 2
#define OTILE_COL 2

#define NUM_PE_PER_GROUP 2
#define NUM_THREADS 8

#define OP_t uint16_t
#define Res_t float



int main() {
    vx_tmc(-1) ;  // enable all threads

    float regA[]; // dot width

    // try half thread masking
    return 0 ;
}
