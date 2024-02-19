// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVortex.h for the primary calling header

#ifndef VERILATED_VVORTEX_VX_DISPATCH_UNIT__PI26_H_
#define VERILATED_VVORTEX_VX_DISPATCH_UNIT__PI26_H_  // guard

#include "verilated.h"

class VVortex__Syms;

class VVortex_VX_dispatch_unit__pi26 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        CData/*3:0*/ __PVT__dispatch_valid;
        CData/*7:0*/ __PVT__issue_indices;
        CData/*3:0*/ __PVT__block_ready;
        CData/*7:0*/ __PVT__block_tmask;
        CData/*3:0*/ __PVT__block_pid;
        CData/*3:0*/ __PVT__block_sop;
        CData/*3:0*/ __PVT__block_eop;
        CData/*3:0*/ __PVT__ready_in;
        CData/*1:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__sent_mask_p;
        CData/*0:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_first_p;
        CData/*0:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__fire_p;
        CData/*0:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_last_p;
        CData/*0:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__fire_eop;
        CData/*3:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_tmask;
        CData/*1:0*/ __Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in;
        CData/*2:0*/ __PVT__genblk4__BRA__0__KET____DOT__block_wid;
        CData/*1:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__sent_mask_p;
        CData/*0:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_first_p;
        CData/*0:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__fire_p;
        CData/*0:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_last_p;
        CData/*0:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__fire_eop;
        CData/*3:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_tmask;
        CData/*1:0*/ __Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in;
        CData/*2:0*/ __PVT__genblk4__BRA__1__KET____DOT__block_wid;
        CData/*1:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__sent_mask_p;
        CData/*0:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_first_p;
        CData/*0:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__fire_p;
        CData/*0:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_last_p;
        CData/*0:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__fire_eop;
        CData/*3:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_tmask;
        CData/*1:0*/ __Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in;
        CData/*2:0*/ __PVT__genblk4__BRA__2__KET____DOT__block_wid;
        CData/*1:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__sent_mask_p;
        CData/*0:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_first_p;
        CData/*0:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__fire_p;
        CData/*0:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_last_p;
        CData/*0:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__fire_eop;
        CData/*3:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_tmask;
        CData/*1:0*/ __Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in;
        CData/*2:0*/ __PVT__genblk4__BRA__3__KET____DOT__block_wid;
        CData/*2:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n;
        CData/*2:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n;
        CData/*2:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n;
        CData/*2:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n;
        CData/*0:0*/ __PVT__genblk4__BRA__0__KET____DOT_____05Fbuf_out_reset__DOT__genblk1__DOT__reset_r;
        CData/*0:0*/ __PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__stall;
        CData/*0:0*/ __PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r;
        CData/*2:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n;
        CData/*2:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n;
        CData/*2:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n;
        CData/*2:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n;
        CData/*0:0*/ __PVT__genblk4__BRA__1__KET____DOT_____05Fbuf_out_reset__DOT__genblk1__DOT__reset_r;
        CData/*0:0*/ __PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__stall;
        CData/*0:0*/ __PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r;
        CData/*2:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n;
        CData/*2:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n;
        CData/*2:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n;
        CData/*2:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n;
        CData/*0:0*/ __PVT__genblk4__BRA__2__KET____DOT_____05Fbuf_out_reset__DOT__genblk1__DOT__reset_r;
        CData/*0:0*/ __PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__stall;
        CData/*0:0*/ __PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r;
        CData/*2:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n;
    };
    struct {
        CData/*2:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n;
        CData/*2:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n;
        CData/*2:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n;
        CData/*0:0*/ __PVT__genblk4__BRA__3__KET____DOT_____05Fbuf_out_reset__DOT__genblk1__DOT__reset_r;
        CData/*0:0*/ __PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__stall;
        CData/*0:0*/ __PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r;
        VlWide<6>/*191:0*/ __Vxrand_h405aee6f__3;
        VlWide<6>/*191:0*/ __Vxrand_h405aee6f__2;
        VlWide<6>/*191:0*/ __Vxrand_h405aee6f__1;
        VlWide<6>/*191:0*/ __Vxrand_h405aee6f__0;
        VlWide<59>/*1887:0*/ __PVT__dispatch_data;
        VlWide<24>/*767:0*/ __PVT__block_regs;
        VlWide<12>/*383:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs;
        VlWide<12>/*383:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs;
        VlWide<12>/*383:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs;
        VlWide<12>/*383:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs;
        VlWide<9>/*283:0*/ genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out;
        VlWide<9>/*283:0*/ genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in;
        VlWide<9>/*282:0*/ __PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d;
        VlWide<9>/*283:0*/ genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out;
        VlWide<9>/*283:0*/ genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in;
        VlWide<9>/*282:0*/ __PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d;
        VlWide<9>/*283:0*/ genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out;
        VlWide<9>/*283:0*/ genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in;
        VlWide<9>/*282:0*/ __PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d;
        VlWide<9>/*283:0*/ genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out;
        VlWide<9>/*283:0*/ genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in;
        VlWide<9>/*282:0*/ __PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d;
    };

    // INTERNAL VARIABLES
    VVortex__Syms* const vlSymsp;

    // CONSTRUCTORS
    VVortex_VX_dispatch_unit__pi26(VVortex__Syms* symsp, const char* name);
    ~VVortex_VX_dispatch_unit__pi26();
    VL_UNCOPYABLE(VVortex_VX_dispatch_unit__pi26);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
