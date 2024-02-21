
MEM_A_ADDR: .word 0x12345678
MEM_B_ADDR: .word 0x87654321
MEM_C_ADDR: .word 0x00000000
MEM_D_ADDR: .word 0x11111111

M: .word 16
N: .word 16

K: .word 16 // unrolled over sets

OTILE_ROW:  .word 4   //  num_threads Per thread
OTILE_COL:  .word 4
NUM_THREADS: .word 4
NUM_PEGROUPS: .word 4 // STEPPING MECHANISM


TOTLA_COL_GRPS: .word 4 // N/OTILE_COL
TOTLA_ROW_GRPS: .word 4 // M/OTILE_ROW
ROW_STIRDE: .word 1

// pe_group calculation (first find my group)
// pe_group:  Thread id / num_pegroups

pe_group_id = thread_id / NUM_PEGROUPS
index= col + row*total_cols
total_cols = N/OTILE_COL
col_offset = (pe_group_id % total_cols) // new col

row_offset = (index - col_offset)/total_cols


// Row major
row_thread = row_offset * (OTILE_ROW) + (thread_id % OTILE_ROW)
col_thread = col_offset * OTILE_COL

ROW_STRIDE :  BIG_N*sizeof(A_OPERAND)
ROW_PTR= MEM_ADDR + sizeof(A_OPERAND)*(row_offset*ROW_STRIDE + row_thread) + sizeof(A_OPERAND)*(col_thread) // computation of row major. Will load elements next to each other in a row if you increase by sizeof(A_OPERAND)

// Col major
row_thread = row_offset * (OTILE_ROW) + (thread_id % OTILE_ROW)
col_thread = col_offset * OTILE_COL

COL_PTR = MEM_ADDR + sizeof(A_OPERAND)*(col_offset*COL_STRIDE + col_thread) + sizeof(A_OPERAND)*(row_thread) // computation of col major. Will load elements next to each other in a col if you increase by sizeof(A_OPERAND)

// I'm assuming A is row major , B is col major , C whatever

// I'm going to assum A is row major , B is col major , C whatever
_start:
    // load in thread id
    csrr t5 , VX_CSR_THREAD_ID
    // A MEM ADDR
    lui t0, %hi(MEM_A_ADDR)
    lw  t0, %lo(MEM_A_ADDR)(t0)
    // LOAD A operands (row major)
    // calculate my ptr data values
    // Loop however many times to get cols i need to load
    lw



    lw f0, 0(t0)

    // B MEM ADDR
    lui t1, %hi(MEM_B_ADDR)
    lw  t1, %lo(MEM_B_ADDR)(t1)

    // C MEM ADDR
    lui t2, %hi(MEM_C_ADDR)
    lw  t2, %lo(MEM_C_ADDR)(t2)

    // D MEM ADDR
    lui t3, %hi(MEM_D_ADDR)
    lw  t3, %lo(MEM_D_ADDR)(t3)

    // LOAD B operands


    // LOAD C operands


_NO_SHARED_LD_MAT_ROW_MAJOR: // partitioning strategy doesn't need to be propagated
    lui t0, %hi(MEM_A_ADDR)
    lw  t0, %lo(MEM_A_ADDR)(t0)
     // GET PE GRP ID


_NO_SHARED_LD_MAT_COL_MAJOR:

_SHARED_LD_MAT_ROW_MAJOR:
_SHARED_LD_MAT_COL_MAJOR:


.data
OTILE_ROW:      .word 4   // num_threads Per thread
OTILE_COL:      .word 4
NUM_THREADS:    .word 4
NUM_PEGROUPS:   .word 4 // STEPPING MECHANISM

TOTLA_COL_GRPS: .word 4 // N/OTILE_COL
TOTLA_ROW_GRPS: .word 4 // M/OTILE_ROW
ROW_STIRDE:     .word 1

.text
.global main

main:
    lw a0, NUM_PEGROUPS          // Load NUM_PEGROUPS into a0
    lw a1, NUM_THREADS            // Load NUM_THREADS into a1
    div a1, a1, a0                // pe_group_id = thread_id / NUM_PEGROUPS

    lw a2, OTILE_COL              // Load OTILE_COL into a2
    lw a3, TOTLA_COL_GRPS         // Load TOTLA_COL_GRPS into a3
    div a3, a3, a2                // total_cols = N/OTILE_COL

    mul a4, a0, a3                // col_offset = (pe_group_id % total_cols)

    lw a5, 0(sp)                  // Load index from stack
    lw a6, OTILE_ROW              // Load OTILE_ROW into a6
    mul a7, a5, a3                // row_offset = (index - col) / total_cols

    mul a5, a6, a7                // row_thread = row_offset * (OTILE_ROW)
    rem a8, a1, a6                // (thread_id % OTILE_ROW)
    add a5, a5, a8

    lw a6, 0(sp)                  // Load index from stack
    lw a7, OTILE_COL              // Load OTILE_COL into a7
    mul a8, a4, a7                // col_thread = col_offset * OTILE_COL

    lw a9, ROW_STIRDE             // Load ROW_STIRDE into a9
    lw a10, BIG_N                  // Load BIG_N into a10
    lw a11, A_OPERAND              // Load A_OPERAND into a11
    mul a12, a10, a11             // ROW_STRIDE: BIG_N*sizeof(A_OPERAND)

    lw a10, MEM_ADDR               // Load MEM_ADDR into a10
    mul a11, a7, a12              // col_offset*COL_STRIDE
    add a11, a11, a8              // col_offset*COL_STRIDE + col_thread
    mul a8, a7, a6                // sizeof(A_OPERAND)*(row_thread)
    add a11, a10, a11             // MEM_ADDR + sizeof(A_OPERAND)*(col_offset*COL_STRIDE + col_thread)
    mul a8, a12, a5               // sizeof(A_OPERAND)*(row_offset*ROW_STRIDE + row_thread)
    add a11, a11, a8              // MEM_ADDR + sizeof(A_OPERAND)*(col_offset*COL_STRIDE + col_thread) + sizeof(A_OPERAND)*(row_thread)

    lw a5, 0(sp)                  // Load index from stack
    lw a6, OTILE_ROW              // Load OTILE_ROW into a6
    mul a7, a5, a3                // row_offset = (index - col) / total_cols

    mul a5, a6, a7                // row_thread = row_offset * (OTILE_ROW)
    rem a8, a1, a6                // (thread_id % OTILE_ROW)
    add a5, a5, a8

    lw a6, 0(sp)                  // Load index from stack
    lw a7, OTILE_COL              // Load OTILE_COL into a7
    mul a8, a4, a7                // col_thread = col_offset * OTILE_COL

    lw a9, COL_STRIDE             // Load COL_STRIDE into a9
    lw a10, A_OPERAND              // Load A_OPERAND into a10
    mul a11, a9, a10              // COL_STRIDE: BIG_N*sizeof(A_OPERAND)

    lw a10, MEM_ADDR               // Load MEM_ADDR into a10
    mul a11, a9, a8               // col_offset*COL_STRIDE
    add a11, a11, a5              // col_offset*COL_STRIDE + col_thread
    mul a8, a6, a10               // sizeof(A_OPERAND)*(row_thread)
    add a11, a10, a11             // MEM_ADDR + sizeof(A_OPERAND)*(col_offset*COL_STRIDE + col_thread)
    mul a8, a9, a7                // sizeof(A_OPERAND)*(col_offset*COL_STRIDE + col_thread)
    add a11, a11, a8              // MEM_ADDR + sizeof(A_OPERAND)*(col_offset*COL_STRIDE + col_thread) + sizeof(A_OPERAND)*(row_thread)

    # continue with your code...

