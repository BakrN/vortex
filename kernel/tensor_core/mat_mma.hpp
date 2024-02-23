#ifndef MAT_MMA_HPP
#define MAT_MMA_HPP
#include <sstream>
#include <type_traits>

#define TC_EXT 0x7B

enum class Acc_t : uint8_t {
    ACC_NONE = 0 ,
    ACC_REG ,
    ACC_BUF,
};


//(TODO: REMOVE enable_if_t)
// MAT MMA WRITE BACK TO REG FILE
template<typename Op_t , typename Res_t, Acc_t acc_src, bool overwrite_C>
inline std::enable_if_t<acc_src != Acc_t::ACC_NONE, void> mat_mma_wb(float* A , float* B , float* C, float* result) { // write back to reg file without accumulation
    asm volatile(".insn r4 %[EXT], %[rd], %[func3], %[rs1], %[rs2], %[func2], %[rs3]" :
            [rd] "=r" (*result) :
            [EXT] "i" (TC_EXT) ,
            [func3] "i" (0b0),
            [func2] "i" (0b0),
            [rs1] "f" (*A),
            [rs2] "f" (*B),
            [rs3] "f" (*C)
    );
}
template<typename Op_t , typename Res_t, Acc_t acc_src , bool overwrite_C>
inline std::enable_if_t<acc_src != Acc_t::ACC_REG, void> mat_mma_wb(float* A , float* B , float* C, float* result) {
    asm volatile(".insn r4 %[EXT], %[rd], %[func3], %[rs1], %[rs2], %[func2], %[rs3]" :
            [rd] "=r" (*result) :
            [EXT] "i" (TC_EXT) ,
            [func3] "i" (0b1),
            [func2] "i" (0b0),
            [rs1] "f" (*A),
            [rs2] "f" (*B),
            [rs3] "f" (*C)
    );

}

template<typename Op_t , typename Res_t, Acc_t acc_src, bool overwrite_C>
inline std::enable_if_t<acc_src!= Acc_t::ACC_BUF, void> mat_mma_wb(float* A , float* B , float* C, float* result) {
    asm volatile(".insn r4 %[EXT], %[rd], %[func3], %[rs1], %[rs2], %[func2], %[rs3]" :
            [rd] "=r" (*result) :
            [EXT] "i" (TC_EXT) ,
            [func3] "i" (0b1),
            [func2] "i" (0b10),
            [rs1] "f" (*A),
            [rs2] "f" (*B),
            [rs3] "f" (*C)
    );

}


// MAT MMA WRITE TO ACCUMULATOR
template<typename Op_t , typename Res_t, Acc_t acc_source, bool overwrite_C>
inline std::enable_if_t<acc_source != Acc_t::ACC_NONE, void> mat_mma_wacc(float* A , float* B , float* C, float* result) { // write back to reg file without accumulation
    asm volatile(".insn r4 %[EXT], %[rd], %[func3], %[rs1], %[rs2], %[func2], %[rs3]" :
            [rd] "=r" (*result) :
            [EXT] "i" (TC_EXT) ,
            [func3] "i" (1),
            [func2] "i" (0),
            [rs1] "f" (*A),
            [rs2] "f" (*B),
            [rs3] "f" (*C)
    );
}

template<typename Op_t , typename Res_t, Acc_t acc_source, bool overwrite_C>
inline std::enable_if_t<acc_source!= Acc_t::ACC_REG, void> mat_mma_wacc(float* A , float* B , float* C, float* result) {
    asm volatile(".insn r4 %[EXT], %[rd], %[func3], %[rs1], %[rs2], %[func2], %[rs3]" :
            [rd] "=r" (*result) :
            [EXT] "i" (TC_EXT) ,
            [func3] "i" (1),
            [func2] "i" ((int)(acc_source)),
            [rs1] "f" (*A),
            [rs2] "f" (*B),
            [rs3] "f" (*C)
    );
}

template<typename Op_t , typename Res_t, Acc_t acc_source, bool overwrite_C>
inline std::enable_if_t<acc_source != Acc_t::ACC_BUF, void> mat_mma_wacc(float* A , float* B , float* C, float* result) {
    asm volatile(".insn r4 %[EXT], %[rd], %[func3], %[rs1], %[rs2], %[func2], %[rs3]" :
            [rd] "=r" (*result) :
            [EXT] "i" (TC_EXT) ,
            [func3] "i" (1),
            [func2] "i" ((int)(acc_source)),
            [rs1] "f" (*A),
            [rs2] "f" (*B),
            [rs3] "f" (*C)
    );
}



// do mma
//template<typename Op_t , typename Res_t >
//void mat_mma (){
//    mat_mma_wb();
//    mat_mma<Op_t,Res_t>(Op_t::A,Op_t::B,Res_t::C);
//}

//void mat_mma_multi_step(){
    // not now
//}

void mat_mma_multi_step(){
}

#endif
