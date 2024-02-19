// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVortex.h for the primary calling header

#ifndef VERILATED_VVORTEX_VX_SMEM_SWITCH__PI17_H_
#define VERILATED_VVORTEX_VX_SMEM_SWITCH__PI17_H_  // guard

#include "verilated.h"

class VVortex__Syms;

class VVortex_VX_smem_switch__pi17 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    CData/*1:0*/ __PVT__req_valid_out;
    CData/*1:0*/ __PVT__rsp_valid_out;
    CData/*1:0*/ __PVT__rsp_ready_out;
    CData/*1:0*/ __PVT__req_switch__DOT__genblk1__DOT__ready_out_r;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push;
    CData/*0:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop;
    CData/*0:0*/ __PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r;
    CData/*0:0*/ __PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r;
    CData/*0:0*/ __PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r;
    CData/*0:0*/ __PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push;
    CData/*0:0*/ __PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop;
    VlWide<3>/*69:0*/ __PVT__req_data_in;
    VlWide<5>/*139:0*/ __Vcellout__req_switch__data_out;
    VlWide<3>/*69:0*/ req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0;
    VlWide<5>/*139:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg;
    VlWide<3>/*69:0*/ req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0;
    VlWide<5>/*139:0*/ __PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg;
    VlWide<3>/*69:0*/ __PVT__rsp_data_out;
    QData/*34:0*/ rsp_arb__DOT____Vxrand_h66a6ee59__0;
    QData/*35:0*/ rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h669af165__0;
    VlWide<3>/*71:0*/ __PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg;

    // INTERNAL VARIABLES
    VVortex__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVortex_VX_smem_switch__pi17(VVortex__Syms* symsp, const char* name);
    ~VVortex_VX_smem_switch__pi17();
    VL_UNCOPYABLE(VVortex_VX_smem_switch__pi17);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
