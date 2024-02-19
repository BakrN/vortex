// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_Vortex.h"
#include "VVortex__Syms.h"

VL_INLINE_OPT void VVortex_Vortex___combo__TOP__Vortex__2(VVortex_Vortex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VVortex_Vortex___combo__TOP__Vortex__2\n"); );
    // Body
    vlSelf->sim_ebreak = ((((IData)(vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__has_data) 
                            & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.__PVT__ready_in)) 
                           & (0x800U == (0x400800U 
                                         & vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU]))) 
                          & ((0xbU == (0xfU & (vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                               >> 0xeU))) 
                             | (0xaU == (0xfU & (vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                                 >> 0xeU)))));
}
