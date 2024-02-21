
MEM_A_ADDR: .word 0x12345678

// LOAD A Operands

_start:
    lui t0, %hi(MEM_A_ADDR)
    lw  t0, %lo(MEM_A_ADDR)(t0)
