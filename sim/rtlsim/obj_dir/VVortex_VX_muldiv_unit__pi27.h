// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVortex.h for the primary calling header

#ifndef VERILATED_VVORTEX_VX_MULDIV_UNIT__PI27_H_
#define VERILATED_VVORTEX_VX_MULDIV_UNIT__PI27_H_  // guard

#include "verilated.h"

class VVortex__Syms;

class VVortex_VX_muldiv_unit__pi27 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        CData/*0:0*/ __PVT__mul_valid_in;
        CData/*0:0*/ __PVT__mul_ready_in;
        CData/*0:0*/ __PVT__mul_fire_in;
        CData/*0:0*/ __PVT__div_valid_in;
        CData/*0:0*/ __PVT__div_ready_in;
        CData/*0:0*/ __PVT__div_fire_in;
        CData/*1:0*/ __Vcellout__rsp_buf__ready_in;
        CData/*1:0*/ __Vcellinp__rsp_buf__valid_in;
        CData/*0:0*/ mul_shift_reg__DOT____Vxrand_h9b58951b__1;
        CData/*0:0*/ mul_shift_reg__DOT____Vxrand_h9b58951b__0;
        CData/*0:0*/ mul_shift_reg__DOT____Vlvbound_hbe5f3915__0;
        CData/*0:0*/ mul_shift_reg__DOT____Vlvbound_h2757304d__0;
        CData/*0:0*/ mul_shift_reg__DOT____Vlvbound_h98a14e50__0;
        CData/*0:0*/ div_shift_reg__DOT____Vxrand_h9b58951b__1;
        CData/*0:0*/ div_shift_reg__DOT____Vxrand_h9b58951b__0;
        CData/*0:0*/ div_shift_reg__DOT____Vlvbound_hbe5f3915__0;
        CData/*0:0*/ div_shift_reg__DOT____Vlvbound_h2757304d__0;
        CData/*0:0*/ div_shift_reg__DOT____Vlvbound_h98a14e50__0;
        CData/*0:0*/ __PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall;
        CData/*0:0*/ __PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r;
        QData/*63:0*/ __PVT__mul_result_tmp;
        QData/*63:0*/ __PVT__div_in1;
        QData/*63:0*/ __PVT__div_in2;
        QData/*63:0*/ __PVT__div_result_in;
        IData/*31:0*/ __PVT__genblk2__BRA__0__KET____DOT__mul_resultl;
        IData/*31:0*/ __PVT__genblk2__BRA__0__KET____DOT__mul_resulth;
        IData/*31:0*/ __PVT__genblk2__BRA__1__KET____DOT__mul_resultl;
        IData/*31:0*/ __PVT__genblk2__BRA__1__KET____DOT__mul_resulth;
        IData/*31:0*/ __PVT__genblk4__BRA__0__KET____DOT__div_quotient;
        IData/*31:0*/ __PVT__genblk4__BRA__0__KET____DOT__div_remainder;
        IData/*31:0*/ __PVT__genblk4__BRA__1__KET____DOT__div_quotient;
        IData/*31:0*/ __PVT__genblk4__BRA__1__KET____DOT__div_remainder;
        VlWide<15>/*451:0*/ __PVT__mul_shift_reg__DOT__genblk1__DOT__entries;
        VlWide<15>/*451:0*/ __PVT__div_shift_reg__DOT__genblk1__DOT__entries;
        VlWide<4>/*111:0*/ rsp_buf__DOT____Vxrand_h3ac84f56__0;
        VlWide<4>/*113:0*/ rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out;
        VlWide<4>/*113:0*/ rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in;
        VlWide<4>/*112:0*/ __PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d;
        IData/*31:0*/ __Vtask_dpi_imul__0__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__0__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__1__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__1__resulth;
        IData/*31:0*/ __Vtask_dpi_idiv__2__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__2__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__3__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__3__remainder;
        IData/*31:0*/ __Vtask_dpi_imul__4__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__4__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__5__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__5__resulth;
        IData/*31:0*/ __Vtask_dpi_idiv__6__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__6__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__7__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__7__remainder;
        IData/*31:0*/ __Vtask_dpi_imul__8__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__8__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__9__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__9__resulth;
        IData/*31:0*/ __Vtask_dpi_idiv__10__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__10__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__11__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__11__remainder;
    };
    struct {
        IData/*31:0*/ __Vtask_dpi_imul__12__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__12__resulth;
        IData/*31:0*/ __Vtask_dpi_imul__13__resultl;
        IData/*31:0*/ __Vtask_dpi_imul__13__resulth;
        IData/*31:0*/ __Vtask_dpi_idiv__14__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__14__remainder;
        IData/*31:0*/ __Vtask_dpi_idiv__15__quotient;
        IData/*31:0*/ __Vtask_dpi_idiv__15__remainder;
    };

    // INTERNAL VARIABLES
    VVortex__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVortex_VX_muldiv_unit__pi27(VVortex__Syms* symsp, const char* name);
    ~VVortex_VX_muldiv_unit__pi27();
    VL_UNCOPYABLE(VVortex_VX_muldiv_unit__pi27);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
