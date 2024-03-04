import numpy as np
import argparse

# Tensor core parameters
class TCParams:
    num_pes = 3         # TC_NUM_PES
    num_groups = 2      # TC_NUM_GROUPS
    dot_size = 4        # TC_DOT_SIZE
    buffer_depth = 2    # TC_BUFFER_DEPTH
    sets = 4            # TC_SETS
    num_acc_tiles = 2   # TC_NUM_ACC_TILES
    out_fifo_size = 2   # TC_OUT_FIFO_SIZE

    def DNUM_PES(self):
        return "-DTC_NUM_PES=" + str(self.num_pes)
    def DNUM_GROUPS(self):
        return "-DTC_NUM_PE_GROUPS=" + str(self.num_groups)
    def DOP_COUNT(self):
        return "-DTC_OP_COUNT=" + str(self.dot_size)
    def DMAT_BUF_DEPTH(self):
        return "-DTC_MAT_BUF_DEPTH=" + str(self.buffer_depth)
    def DACC_BUF_ROWS(self):
        return "-DTC_ACC_BUF_ROWS=" + ""  # TODO
    def DACC_BUF_COLS(self):
        return "-DTC_ACC_BUF_COLS=" + ""  # TODO
    def DOUTPUT_FIFO_SIZE(self):
        return "-DTC_OUTPUT_FIFO_SIZE=" + str(self.out_fifo_size)
    def DNUM_ACC_TILES(self):
        return "-DTC_NUM_ACC_TILES=" + str(self.num_acc_tiles)



class MatMemOrientation:
    ROW_MAJOR = 0
    COL_MAJOR = 1

def generate_matrices(M, N, K, A_type='fp16', B_type='fp16', C_type='fp32', D_type='fp32',
                      A_mem_orientation=MatMemOrientation.ROW_MAJOR, B_mem_orientation=MatMemOrientation.COL_MAJOR, C_mem_orientation=MatMemOrientation.ROW_MAJOR, D_mem_orientation=MatMemOrientation.ROW_MAJOR):
    if A_type == 'fp16':
        A = np.random.rand(M, K).astype(np.float16)
    else:
        A = np.random.rand(M, K).astype(np.float32)

    if B_type == 'fp16':
        B = np.random.rand(K, N).astype(np.float16)
    else:
        B = np.random.rand(K, N).astype(np.float32)

    if C_type == 'fp16':
        C = np.random.rand(M, N).astype(np.float16)
    else:
        C = np.random.rand(M, N).astype(np.float32)

    D = np.dot(A, B) + C

    if D_type == 'fp16':
        D = D.astype(np.float16)
    else:
        D = D.astype(np.float32)
    if A_mem_orientation == MatMemOrientation.COL_MAJOR:
        A = A.T
    if B_mem_orientation == MatMemOrientation.COL_MAJOR:
        B = B.T
    if C_mem_orientation == MatMemOrientation.COL_MAJOR:
        C = C.T
    if D_mem_orientation == MatMemOrientation.COL_MAJOR:
        D = D.T
    return A, B, C, D

def save_matrices_to_file(A, B, C, D, filename):
    with open(filename, 'wb') as file:
        A.tofile(file)
        B.tofile(file)
        C.tofile(file)
        D.tofile(file)

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='Generate matrices and serialize to a file.')
    parser.add_argument('M', type=int, help='Number of rows in matrices A and D')
    parser.add_argument('N', type=int, help='Number of columns in matrices B and D')
    parser.add_argument('K', type=int, help='Number of columns in matrix A and rows in matrix B')
    parser.add_argument('--A_type', type=str, default='fp16', choices=['fp16', 'fp32', 'int16', 'int32'], help='Data type for matrix A')
    parser.add_argument('--B_type', type=str, default='fp16', choices=['fp16', 'fp32', 'int16', 'int32'], help='Data type for matrix B')
    parser.add_argument('--C_type', type=str, default='fp32', choices=['fp16', 'fp32', 'int16', 'int32'], help='Data type for matrix C')
    parser.add_argument('--D_type', type=str, default='fp32', choices=['fp16', 'fp32', 'int16', 'int32'], help='Data type for matrix D')
    parser.add_argument('--A_INTERNAL', type=str, default='row_major', choices=['row_major, col_major'], help='A Matrix internal representation ')
    parser.add_argument('--B_INTERNAL', type=str, default='col_major', choices=['row_major, col_major'], help='B Matrix internal representation ')
    parser.add_argument('--C_INTERNAL', type=str, default='row_major', choices=['row_major, col_major'], help='C Matrix internal representation ')
    parser.add_argument('--D_INTERNAL', type=str, default='row_major', choices=['row_major, col_major'], help='D Matrix internal representation ')
    parser.add_argument('--output_file', type=str, default='matrices.bin', help='Output file name')
    args = parser.parse_args()

    A, B, C, D = generate_matrices(args.M, args.N, args.K, args.A_type, args.B_type, args.C_type, args.D_type)
    save_matrices_to_file(A, B, C, D, args.output_file)
    print(f"Matrices saved to {args.output_file}")

