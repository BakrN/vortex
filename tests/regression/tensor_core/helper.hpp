#ifndef TC_HOST_HELP_H
#define TC_HOST_HELP_H

#include <string>
#include <iostream>
#include <fstream>


template <int OP_SIZE, int RES_SIZE>
void read_matrices(const std::string& dir, int M, int N, int K, float**A, float**B, float**C, float** D) {
    std::string A_filename = dir + "/A.bin";
    std::ifstream A_f(A_filename, std::ios::binary);

    std::string B_filename = dir + "/B.bin";
    std::ifstream B_f(B_filename, std::ios::binary);

    std::string C_filename = dir + "/C.bin";
    std::ifstream C_f(C_filename, std::ios::binary);

    std::string D_filename = dir + "/D.bin";
    std::ifstream D_f(D_filename, std::ios::binary);

    if (*A == NULL || *B == NULL || *C == NULL ) {
        fprintf(stderr, "Error allocating memory\n");
        exit(1);
    }

    // Read matrices from the file
    A_f.read(reinterpret_cast<char*>(*A),OP_SIZE* M * K);
    B_f.read(reinterpret_cast<char*>(*B),OP_SIZE* K * N);
    C_f.read(reinterpret_cast<char*>(*C),RES_SIZE* M * N);
    D_f.read(reinterpret_cast<char*>(*D),RES_SIZE* M * N);
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
