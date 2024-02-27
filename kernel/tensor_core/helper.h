#ifndef TC_HOST_HELP_H
#define TC_HOST_HELP_H

#include <stdio.h>
#include <stdlib.h>



void read_matrices(const char *filename, int M, int N, int K, float **A, float **B, float **C) {
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
    fread(*A, sizeof(float), M * K, file);
    fread(*B, sizeof(float), K * N, file);
    fread(*C, sizeof(float), M * N, file);
    //fread(*D, sizeof(float), M * N, file);

    fclose(file);
}



int main() {
    const char *filename = "matrices.bin";
    int M = 3; // Number of rows in matrices A and D
    int N = 4; // Number of columns in matrices B and D
    int K = 5; // Number of columns in matrix A and rows in matrix B

    float* A, *B, *C, *D;
    // Allocate memory for matrices
    A = (float *)malloc(M * K * sizeof(OP_TYPE));
    B = (float *)malloc(K * N * sizeof(OP_TYPE));
    C = (float *)malloc(M * N * sizeof(RES_TYPE));
    D = (float *)malloc(M * N * sizeof(RES_TYPE));


    read_matrices(filename, M, N, K, &A, &B, &C);

    // Example usage: printing matrix D
    printf("Matrix D:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%f ", D[i * N + j]);
        }
        printf("\n");
    }

    // Free allocated memory
    free(A);
    free(B);
    free(C);
    free(D);

    return 0;
}

#endif //TC_HOST_HELP_H
