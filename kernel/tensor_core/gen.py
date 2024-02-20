# Generate assembly code for given TC tile size

NUM_PE_GROUPS    = 8
NUM_PE_PER_GROUP = 4
DOT_PROD_SIZE    = 4
NUM_ACC_TILE = 0  # disabled by default
SETS         = 1  # Loops (). I only need to do 1 set

NUM_THREADS = NUM_PE_GROUPS * NUM_PE_PER_GROUP
NUM_THREAD_GROUPS = NUM_PE_GROUPS
B_BUFFER_WIDTH = DOT_PROD_SIZE

OTILE_ROWS = NUM_PE_PER_GROUP # each pe is responsible for 1 row
OTILE_COLS = B_BUFFER_WIDTH*(NUM_ACC_TILE if NUM_ACC_TILE else 1)


K = SETS * DOT_PROD_SIZE

def MN_CONSTRAINT(M, N):
    return OTILE_ROWS*OTILE_COLS == M*N and  N < NUM_PE_PER_GROUP * NUM_PE_GROUPS and M < NUM_PE_PER_GROUP * NUM_PE_GROUPS


A_ADDR = 0
A_LAY
