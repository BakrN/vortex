#include "mat_load.hpp"
#include <cstdint>
#include <iostream>

#define M 4
#define N 4
#define K 8
#define OTILE_ROW 2
#define OTILE_COL 2

#define NUM_PE_PER_GROUP 2
#define NUM_THREADS 8

#define OP_t uint16_t
#define Res_t float

