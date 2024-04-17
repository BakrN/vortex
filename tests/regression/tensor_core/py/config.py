import numpy as np
import argparse
import math
import json
parser = argparse.ArgumentParser(description='Configure vortex with simx simulation')
parser.add_argument('--config', type=str, default="", help='Config file')
parser.add_argument('--M', type=int, default=4, help='Number of rows in matrices A and D')
parser.add_argument('--N', type=int, default=4, help='Number of columns in matrices B and D')
parser.add_argument('--K', type=int, default= 2, help='Number of columns in matrix A and rows in matrix B')
parser.add_argument('--op_type', type=str, default='fp16', choices=['fp16', 'fp32', 'int16', 'int32'], help='Data type for operand matrices')
parser.add_argument('--res_type', type=str, default='fp32', choices=['fp16', 'fp32', 'int16', 'int32'], help='Data type for accumulation and result matrices')
parser.add_argument('--a_orientation', type=str, default='row_major', choices=['row_major, col_major'], help='A Matrix internal representation ')
parser.add_argument('--b_orientation', type=str, default='col_major', choices=['row_major, col_major'], help='B Matrix internal representation ')
parser.add_argument('--c_orientation', type=str, default='row_major', choices=['row_major, col_major'], help='C Matrix internal representation ')
parser.add_argument('--d_orientation', type=str, default='row_major', choices=['row_major, col_major'], help='D Matrix internal representation ')
parser.add_argument('--output_file', type=str, default='', help='Output file name')
parser.add_argument('--num_threads', '-t', type=int, default=4,help='Number of threads in system')
parser.add_argument('--num_warps', '-w', type=int, default=1, help='Number of warps')
parser.add_argument('--num_cores', '-c', type=int, default=1, help='Number of cores')
parser.add_argument('--num_clusters',  type=int, default=1, help='number of clusters')
parser.add_argument('--num_pes',  type=int, default=2, help='Number of pes per group')
parser.add_argument('--num_groups', type=int,  help='Number of pe groups', default=1)
parser.add_argument('--operand_count', type=int, help='Number of operands in a group', default=2)
parser.add_argument('--input_mat_buf_depth', type=int, help='Depth of input matrix buffer', default=1)
parser.add_argument('--output_fifo_size', type=int, help='Size of output FIFO', default=1)
parser.add_argument('--num_acc_tiles', type=int, help='Number of accumulator tiles', default=0)
parser.add_argument('--ex_latency', type=int, help='Execution latency', default=4)
parser.add_argument('--define_file', type=str, help="File definition", default="defines.txt")

args = parser.parse_args()

if args.config:
    with open(args.config, 'r') as f:
        args = json.load(f)
else:
    args = vars(args)





class MatMemOrientation:
    ROW_MAJOR = 0
    COL_MAJOR = 1

def getCSize(type: str) :
    if "16" in type:
        return 2
    elif "32" in type:
        return 4
    else:
        raise RuntimeError("Unrecognizable type")

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




# For now will assume threads == num_pes

#assert(args["num_pes"] == args["num_thread"], "Assuming num_pes == num_threads")
print(args)


# Print Matrices

if args["output_file"]:
    A, B, C, D = generate_matrices(args["M"], args["N"], args["K"], args["op_type"], args["op_type"], args["res_type"], args["res_type"])
    print("----PRINTING A----")
    print(A)
    print("----PRINTING B----")
    print(B)
    print("----PRINTING C----")
    print(C)
    print("----PRINTING D----")
    print(D)
    save_matrices_to_file(A, B, C, D, args["output_file"])
    print(f"Matrices saved to{args['output_file']}")

class TCConfig:
    num_pes = 0
    num_groups = 0
    operand_count = 0
    input_mat_buf_depth = 0
    output_fifo_size = 0
    num_acc_tiles = 0
    execution_latency = 0
    def Dnum_pes(self):
        return f"-DTC_NUM_PES={self.num_pes}"
    def Dnum_groups(self):
        return f"-DTC_NUM_PE_GROUPS={self.num_groups}"
    def Dexec_latency(self):
        return f"-DTC_EXECUTION_LAT={self.execution_latency}"
    def Doperand_count(self):
        return f"-DTC_OP_COUNT={self.operand_count}"
    def Dmat_buf_depth(self):
        return f"-DTC_MAT_BUF_DEPTH={self.input_mat_buf_depth}"
    def Doutput_fifo_size(self):
        return f"-DTC_OUTPUT_FIFO_SIZE={self.output_fifo_size}"
    def Dnum_acc_tiles(self):
        return f"-DTC_NUM_ACC_TILES={self.num_acc_tiles}"
    def getdef(self):
        return f"{self.Dnum_pes()} {self.Dnum_groups()} {self.Dexec_latency()} {self.Doperand_count()} {self.Dmat_buf_depth()} {self.Doutput_fifo_size()} {self.Dnum_acc_tiles()}"
    def __str__(self):
        attributes = [(attr, getattr(self, attr)) for attr in dir(self) if not attr.startswith("__") and not callable(getattr(self, attr))]
        return "\n".join([f"{attr_name}: {attr_value}" for attr_name, attr_value in attributes])


# Case where A buffer width == B buffer width (if not I will have to come up with better loading strategy)
tc = TCConfig()
tc.num_pes = args["num_pes"]
tc.num_groups = args["num_groups"]
tc.operand_count = args["operand_count"]
tc.input_mat_buf_depth = args["input_mat_buf_depth"]
tc.output_fifo_size = args["output_fifo_size"]
tc.num_acc_tiles = args["num_acc_tiles"]
tc.execution_latency = args["ex_latency"]

# 2. System parameters
class GEMMArgs:
    def __init__(self, m=0, n=0, k=0, otile_row=0, otile_col=0):
        self.m = m
        self.n = n
        self.k = k
        self.otile_row = otile_row
        self.otile_col = otile_col
    def Dm(self):
        return f"-Dtc_m={self.m}"
    def Dn(self):
        return f"-Dtc_n={self.n}"
    def Dk(self):
        return f"-Dtc_k={self.k}"
    def Dotile_row(self):
        return f"-DOTILE_ROW={self.otile_row}"
    def Dotile_col(self):
        return f"-DOTILE_COL={self.otile_col}"
    def getdef(self):
        return f"{self.Dm()} {self.Dn()} {self.Dk()} {self.Dotile_row()} {self.Dotile_col()}"
    def __str__(self):
        attributes = [(attr, getattr(self, attr)) for attr in dir(self) if not attr.startswith("__") and not callable(getattr(self, attr))]
        return "\n".join([f"{attr_name}: {attr_value}" for attr_name, attr_value in attributes])

system = GEMMArgs()
# Assume M == N, no Acc tiles for now
system.otile_row = tc.num_pes
system.otile_col = tc.num_pes
system.n = int(math.sqrt(tc.num_groups * system.otile_row * system.otile_col))
system.m = int(math.sqrt(tc.num_groups * system.otile_row * system.otile_col))
system.k = tc.operand_count # TileSizeRow
print("TC")
print (tc)
print("GEMM")
print(system)

# Output defines to defines.txt


with open(args["define_file"], "w") as f:
    f.write(f"-DMM_M={args['M']} -DMM_N={args['N']} -DMM_K={args['K']} -DTC_OP_SIZE={getCSize(args['op_type'])} -DTC_RES_SIZE={getCSize(args['res_type'])} {system.getdef()} {tc.getdef()}  \
    -DNUM_THREADS={args['num_threads']} -DNUM_WARPS={args['num_warps']} -DNUM_CORES={args['num_cores']} -DNUM_CLUSTERS={args['num_clusters']}")  # Parameters
    f.close()



