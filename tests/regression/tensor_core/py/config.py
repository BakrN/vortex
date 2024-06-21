
import numpy as np
import argparse
import json
import math

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
parser.add_argument('--generate_gemm', help="generate a new gemm", action='store_false')

# Vortex configurtion
parser.add_argument('--num_threads', '-t', type=int, default=4,help='Number of threads in system')
parser.add_argument('--num_warps', '-w', type=int, default=1, help='Number of warps')
parser.add_argument('--num_cores', '-c', type=int, default=1, help='Number of cores')
parser.add_argument('--num_clusters',  type=int, default=1, help='number of clusters')
parser.add_argument('--issue_width',  type=int, default=4, help='Issue width')

# Tensor Core Configuration
parser.add_argument('--input_mat_buf_depth', type=int, default=1, help='input elastic buffer depth')
parser.add_argument('--output_fifo_size', type=int, default=1, help='output elastic buffer depth')
parser.add_argument('--num_dot_units', type=int, default=1, help='Number of transprecision FP32 MAC units')

parser.add_argument('--mul_lat', type=int, default=3, help='Multiplier latency')
parser.add_argument('--add_lat', type=int, default=2, help='Adder latency')

# Kernel configuration

parser.add_argument('--A_ROWS', type=int, default=1, help='Outer product A rows')
parser.add_argument('--B_COLS', type=int, default=1, help='Outer product B cols')
parser.add_argument('--K_MULTIPLE', type=int, default=1, help='Hide latency using k multiple')
parser.add_argument('--warp_group_size', type=int, default=0, help='Warp group size')
parser.add_argument('--define_file', type=str, help="File definition", default="defines.txt")


args = parser.parse_args()

args = vars(args)

if args["config"]:
    with open(args["config"], 'r') as f:
        config_args = json.load(f)
        args.update(config_args)


def get_precision_ratio(op_type) :
    if (op_type == 'fp16'):
        return 2
    if (op_type == 'fp32'):
        return 1

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

    D = np.dot(A, B)# + C

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

def save_matrices_to_file(A, B, C, D):
    with open("A.bin", 'wb') as file:
        A.tofile("A.bin")
    with open("B.bin", 'wb') as file:
        B.tofile("B.bin")
    with open("C.bin", 'wb') as file:
        C.tofile("C.bin")
    with open("D.bin", 'wb') as file:
        D.tofile("D.bin")


print(args)


# Print Matrices

if 1: #args["generate_gemm"]:
    A, B, C, D = generate_matrices(args["M"], args["N"], args["K"], args["op_type"], args["op_type"], args["res_type"], args["res_type"])
    print("----PRINTING A----")
    print(A)
    print("----PRINTING B----")
    print(B)
    print("----PRINTING C----")
    print(C)
    print("----PRINTING D----")
    print(D)
    save_matrices_to_file(A, B, C, D)

class TCConfig:
    thread_group_size = 0 #
    num_threads = 0
    thread_n= 0

    input_mat_buf_depth = 0
    output_fifo_size = 0
    execution_latency = 0

    warp_group_size = 0
    def Dthread_group_size(self):
        return f"-DTC_THREAD_GROUP_SIZE={self.thread_group_size}"
    def Dnum_threads(self):
        return f"-DTC_NUM_THREADS={self.num_threads}"
    def Dthread_n(self):
        return f"-DTC_THREAD_N={self.thread_n}"

    def Dexec_latency(self):
        return f"-DTC_EXECUTION_LAT={self.execution_latency}"
    def Dmat_buf_depth(self):
        return f"-DTC_MAT_BUF_DEPTH={self.input_mat_buf_depth}"
    def Doutput_fifo_size(self):
        return f"-DTC_OUTPUT_FIFO_SIZE={self.output_fifo_size}"
    def Dwarp_group_size(self):
        return f"-DWARP_GROUP_SIZE={self.warp_group_size}"
    def getdef(self):
        return f"{self.Dthread_group_size()} {self.Dnum_threads()} {self.Dthread_n()} {self.Dexec_latency()} {self.Dmat_buf_depth()} {self.Doutput_fifo_size()} {self.Dwarp_group_size()}"
    def __str__(self):
        attributes = [(attr, getattr(self, attr)) for attr in dir(self) if not attr.startswith("__") and not callable(getattr(self, attr))]
        return "\n".join([f"{attr_name}: {attr_value}" for attr_name, attr_value in attributes])



# Case where A buffer width == B buffer width (if not I will have to come up with better loading strategy)
tc = TCConfig()
tc.num_threads = args["num_threads"]
tc.thread_group_size = args["num_dot_units"]
tc.thread_n = int(tc.num_threads/tc.thread_group_size**2)
tc.execution_latency = int(args["mul_lat"]+args["add_lat"]*math.log2(tc.thread_group_size*2)+args["add_lat"]*(args["op_type"]!="fp32")+args["add_lat"]-1)  # *2 for upscale , -1 for commit fifo in model
tc.input_mat_buf_depth = args["input_mat_buf_depth"]
tc.output_fifo_size = max(args["output_fifo_size"], tc.execution_latency+1)
tc.warp_group_size = args["warp_group_size"]

# Check for valid configuration here
# Thread group size is also equal to participating threads in an output row
assert tc.num_threads/tc.thread_group_size >= tc.thread_group_size, "Invalid configuration. Each thread must be able to calculate at least 1 output value per load"
# assert tc.warp_group_size != 1 , "Invalid warp group size. Warp group size cannot be 1"

# 2. System parameters
class GEMMArgs:
    def __init__(self, m=0, n=0, k=0):
        self.m = m
        self.n = n
        self.k = k
        # inner product params reduce loop ratio (increase arithmetic intensity)
        self.k_multiple = 0
        # Outer product params
        self.a_rows = 0
        self.b_cols = 0
        #
        self.lsu_lanes =1
        self.issue_width=1
    def Dm(self):
        return f"-Dtc_m={self.m}"
    def Dn(self):
        return f"-Dtc_n={self.n}"
    def Dk(self):
        return f"-Dtc_k={self.k}"
    def Darows(self):
        return f"-DA_ROWS={self.a_rows}"
    def Dbcols(self):
        return f"-DB_COLS={self.b_cols}"
    def Dk_multiple(self):
        return f"-DK_MULTIPLE={self.k_multiple}"
    def Dnum_lanes(self):
        return f"-DNUM_LSU_LANES={self.lsu_lanes}"
    def Dissue_width(self):
        return f"-DISSUE_WIDTH={self.issue_width}"
    def getdef(self):
        return f"{self.Dm()} {self.Dn()} {self.Dk()} {self.Darows()} {self.Dbcols()} {self.Dk_multiple()} {self.Dnum_lanes()} {self.Dissue_width()}"
    def __str__(self):
        attributes = [(attr, getattr(self, attr)) for attr in dir(self) if not attr.startswith("__") and not callable(getattr(self, attr))]
        return "\n".join([f"{attr_name}: {attr_value}" for attr_name, attr_value in attributes])

system = GEMMArgs()
system.k_multiple = args["K_MULTIPLE"]
system.a_rows = args["A_ROWS"]
system.b_cols = args["B_COLS"]
system.m = int(tc.num_threads / tc.thread_group_size) * system.a_rows
system.n = int(tc.num_threads / tc.thread_group_size) * system.b_cols
system.k = int (tc.thread_group_size * get_precision_ratio(args["op_type"])) * system.k_multiple  # * precision of fp16 (res_size/op_size)
system.lsu_lanes = min(2**math.ceil(math.log2(tc.num_threads/tc.thread_n * (1/system.a_rows + 1/system.b_cols))), tc.num_threads)
system.issue_width = min(4,int(min(args["issue_width"], args["num_warps"])))

print("TC")
print (tc)
print("GEMM")
print(system)

# Output defines to defines.txt


with open(args["define_file"], "w") as f:
    f.write(f"-DMM_M={args['M']} -DMM_N={args['N']} -DMM_K={args['K']} -DTC_OP_SIZE={getCSize(args['op_type'])} -DTC_RES_SIZE={getCSize(args['res_type'])} {system.getdef()} {tc.getdef()}  \
    -DNUM_THREADS={args['num_threads']} -DNUM_WARPS={args['num_warps']} -DNUM_CORES={args['num_cores']} -DNUM_CLUSTERS={args['num_clusters']} -DTC_NUM_TILE_REGS={system.a_rows * system.b_cols * tc.thread_n} -DTC_NUM_TILE_BUFS={int(args['num_warps'] /tc.warp_group_size) if tc.warp_group_size else 1}")  # Parameters
    f.close()


