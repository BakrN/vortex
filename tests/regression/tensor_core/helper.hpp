#ifndef TC_HOST_HELP_H
#define TC_HOST_HELP_H

#include <stdio.h>
#include <stdlib.h>


template <int OP_SIZE, int RES_SIZE>
void read_matrices(const char *filename, int M, int N, int K, float**A, float**B, float**C, float** D) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        fprintf(stderr, "Error opening file %s\n", filename);
        exit(1);
    }


    if (*A == NULL || *B == NULL || *C == NULL ) {
        fprintf(stderr, "Error allocating memory\n");
        exit(1);
    }

    // Read matrices from the file
    fread(*A, OP_SIZE, M * K, file);
    fread(*B, OP_SIZE, K * N, file);
    fread(*C, RES_SIZE, M * N, file);
    fread(*D, RES_SIZE, M * N, file);

    fclose(file);
}

template <typename ResT>
void write_matrix(const char * out_file, ResT*D, int M, int N) {
    FILE *file = fopen(out_file, "wb");
    if (file == NULL) {
        fprintf(stderr, "Error opening file %s\n", out_file);
        exit(1);
    }

    fwrite(D, sizeof(float), M * N, file);
    fclose(file);
}

#endif //TC_HOST_HELP_H
