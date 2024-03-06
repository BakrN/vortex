#ifndef TC_HOST_HELP_H
#define TC_HOST_HELP_H

#include <stdio.h>
#include <stdlib.h>


template <typename OpT, typename ResT>
void read_matrices(const char *filename, int M, int N, int K, OpT**A, OpT**B, OpT**C, ResT** D) {
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
    fread(*A, sizeof(OpT), M * K, file);
    fread(*B, sizeof(OpT), K * N, file);
    fread(*C, sizeof(ResT), M * N, file);
    fread(*D, sizeof(ResT), M * N, file);

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
