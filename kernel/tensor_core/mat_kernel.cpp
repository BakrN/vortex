#include <vx_intrinsics.h>
#include "base/mat_mma.hpp"


// Using floating point registers

int main() {
    vx_tmc(-1) ;  // enable all threads

    // Write back tests (Just runs)
    // asm volatile (".insn r4 %[EXT], %[rd], %[func3], %[rs1], %[rs2], %[func2], %[rs3]" ::
    //         [EXT] "i" (TC_EXT),
    //         [rd] "f" ("f3"),
    //         [func3] "i" (0), // write back to reg file
    //         [func2] "i" (0),
    //         [rs1] "f" ("f0"),
    //         [rs2] "f" ("f1"),
    //         [rs3] "f" ("f4")
    //         :  "f16" ) ;

    //asm volatile(".insn r4 0x7B, 16, 0, 0, 0, 1, 4");
    asm volatile (".insn r4 %0, 1, 0, f16, f1, f2,f3" :: "i"(RISCV_CUSTOM1) : "f16") ;

    // ext Func2, func3 , rd, rs1, rs2, rs3



    // try half thread masking
    return 0 ;
}
