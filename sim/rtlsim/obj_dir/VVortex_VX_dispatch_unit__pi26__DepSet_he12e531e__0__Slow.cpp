// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_dispatch_unit__pi26.h"
#include "VVortex__Syms.h"

VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__0(VVortex_VX_dispatch_unit__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    CData/*1:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__packet_valids;
    CData/*1:0*/ __Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__valid_in;
    CData/*1:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__packet_valids;
    CData/*1:0*/ __Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__valid_in;
    CData/*1:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__packet_valids;
    CData/*1:0*/ __Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__valid_in;
    CData/*1:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__packet_valids;
    CData/*1:0*/ __Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__valid_in;
    CData/*2:0*/ __Vfunc_wis_to_wid__0__Vfuncout;
    CData/*0:0*/ __Vfunc_wis_to_wid__0__wis;
    CData/*2:0*/ __Vfunc_wis_to_wid__1__Vfuncout;
    CData/*0:0*/ __Vfunc_wis_to_wid__1__wis;
    CData/*2:0*/ __Vfunc_wis_to_wid__2__Vfuncout;
    CData/*0:0*/ __Vfunc_wis_to_wid__2__wis;
    CData/*2:0*/ __Vfunc_wis_to_wid__3__Vfuncout;
    CData/*0:0*/ __Vfunc_wis_to_wid__3__wis;
    // Body
    vlSelf->__PVT__issue_indices = 0xe4U;
    vlSelf->__PVT__block_sop = (((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_first_p) 
                                 << 3U) | (((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_first_p) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_first_p) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_first_p))));
    vlSelf->__PVT__dispatch_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__has_data) 
                                      << 3U) | (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__has_data) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__has_data) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__has_data))));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[7U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
        = (((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x1bU) | vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[8U]);
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[7U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
        = (((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x1bU) | vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[8U]);
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[7U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
        = (((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x1bU) | vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[8U]);
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[7U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
        = (((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x1bU) | vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[8U]);
    vlSelf->__PVT__dispatch_data[0U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U];
    vlSelf->__PVT__dispatch_data[1U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U];
    vlSelf->__PVT__dispatch_data[2U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U];
    vlSelf->__PVT__dispatch_data[3U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U];
    vlSelf->__PVT__dispatch_data[4U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U];
    vlSelf->__PVT__dispatch_data[5U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U];
    vlSelf->__PVT__dispatch_data[6U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U];
    vlSelf->__PVT__dispatch_data[7U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U];
    vlSelf->__PVT__dispatch_data[8U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U];
    vlSelf->__PVT__dispatch_data[9U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U];
    vlSelf->__PVT__dispatch_data[0xaU] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU];
    vlSelf->__PVT__dispatch_data[0xbU] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU];
    vlSelf->__PVT__dispatch_data[0xcU] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU];
    vlSelf->__PVT__dispatch_data[0xdU] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU];
    vlSelf->__PVT__dispatch_data[0xeU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                           << 0x18U) 
                                          | vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__0__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU]);
    vlSelf->__PVT__dispatch_data[0xfU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                           >> 8U) | 
                                          (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                           << 0x18U));
    vlSelf->__PVT__dispatch_data[0x10U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x11U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x12U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x13U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x14U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x15U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x16U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x17U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x18U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x19U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x1aU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x1bU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x1cU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x1dU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__1__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                              >> 8U));
    vlSelf->__PVT__dispatch_data[0x1eU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x1fU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x20U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x21U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x22U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x23U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x24U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x25U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x26U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x27U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x28U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x29U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x2aU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x2bU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x2cU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__2__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                              >> 0x10U));
    vlSelf->__PVT__dispatch_data[0x2dU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x2eU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x2fU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x30U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x31U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x32U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x33U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x34U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x35U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x36U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x37U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x38U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x39U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x3aU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk3__BRA__3__KET____DOT__alu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                              << 8U));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    __Vfunc_wis_to_wid__0__wis = (1U & (vlSelf->__PVT__dispatch_data[0xeU] 
                                        >> 0x16U));
    __Vfunc_wis_to_wid__0__Vfuncout = ((IData)(__Vfunc_wis_to_wid__0__wis) 
                                       << 2U);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__0__Vfuncout;
    __Vfunc_wis_to_wid__1__wis = (1U & (vlSelf->__PVT__dispatch_data[0x1dU] 
                                        >> 0xeU));
    __Vfunc_wis_to_wid__1__Vfuncout = (1U | ((IData)(__Vfunc_wis_to_wid__1__wis) 
                                             << 2U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__1__Vfuncout;
    __Vfunc_wis_to_wid__2__wis = (1U & (vlSelf->__PVT__dispatch_data[0x2cU] 
                                        >> 6U));
    __Vfunc_wis_to_wid__2__Vfuncout = (2U | ((IData)(__Vfunc_wis_to_wid__2__wis) 
                                             << 2U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__2__Vfuncout;
    __Vfunc_wis_to_wid__3__wis = (1U & (vlSelf->__PVT__dispatch_data[0x3aU] 
                                        >> 0x1eU));
    __Vfunc_wis_to_wid__3__Vfuncout = (3U | ((IData)(__Vfunc_wis_to_wid__3__wis) 
                                             << 2U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__3__Vfuncout;
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[0U] 
        = vlSelf->__PVT__dispatch_data[8U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[2U] 
        = vlSelf->__PVT__dispatch_data[4U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[4U] 
        = vlSelf->__PVT__dispatch_data[0U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[1U] 
        = vlSelf->__PVT__dispatch_data[9U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[3U] 
        = vlSelf->__PVT__dispatch_data[5U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[5U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__dispatch_data[0xaU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__dispatch_data[1U]))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[6U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__dispatch_data[0xaU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__dispatch_data[1U]))) 
                   >> 0x20U));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[8U] 
        = vlSelf->__PVT__dispatch_data[6U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[0xaU] 
        = vlSelf->__PVT__dispatch_data[2U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[7U] 
        = vlSelf->__PVT__dispatch_data[0xbU];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[9U] 
        = vlSelf->__PVT__dispatch_data[7U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[0xbU] 
        = vlSelf->__PVT__dispatch_data[3U];
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[0U] 
        = ((vlSelf->__PVT__dispatch_data[0x17U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x16U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[2U] 
        = ((vlSelf->__PVT__dispatch_data[0x13U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x12U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[4U] 
        = ((vlSelf->__PVT__dispatch_data[0xfU] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0xeU] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[1U] 
        = ((vlSelf->__PVT__dispatch_data[0x18U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x17U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[3U] 
        = ((vlSelf->__PVT__dispatch_data[0x14U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x13U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[5U] 
        = (IData)((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x19U] 
                                      << 8U) | (vlSelf->__PVT__dispatch_data[0x18U] 
                                                >> 0x18U)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->__PVT__dispatch_data[0x10U] 
                                                  << 8U) 
                                                 | (vlSelf->__PVT__dispatch_data[0xfU] 
                                                    >> 0x18U))))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[6U] 
        = (IData)(((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x19U] 
                                       << 8U) | (vlSelf->__PVT__dispatch_data[0x18U] 
                                                 >> 0x18U)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->__PVT__dispatch_data[0x10U] 
                                                   << 8U) 
                                                  | (vlSelf->__PVT__dispatch_data[0xfU] 
                                                     >> 0x18U))))) 
                   >> 0x20U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[8U] 
        = ((vlSelf->__PVT__dispatch_data[0x15U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x14U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[0xaU] 
        = ((vlSelf->__PVT__dispatch_data[0x11U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x10U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[7U] 
        = ((vlSelf->__PVT__dispatch_data[0x1aU] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x19U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[9U] 
        = ((vlSelf->__PVT__dispatch_data[0x16U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x15U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[0xbU] 
        = ((vlSelf->__PVT__dispatch_data[0x12U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x11U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[0U] 
        = ((vlSelf->__PVT__dispatch_data[0x26U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x25U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[2U] 
        = ((vlSelf->__PVT__dispatch_data[0x22U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x21U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[4U] 
        = ((vlSelf->__PVT__dispatch_data[0x1eU] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x1dU] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[1U] 
        = ((vlSelf->__PVT__dispatch_data[0x27U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x26U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[3U] 
        = ((vlSelf->__PVT__dispatch_data[0x23U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x22U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[5U] 
        = (IData)((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x28U] 
                                      << 0x10U) | (
                                                   vlSelf->__PVT__dispatch_data[0x27U] 
                                                   >> 0x10U)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->__PVT__dispatch_data[0x1fU] 
                                                  << 0x10U) 
                                                 | (vlSelf->__PVT__dispatch_data[0x1eU] 
                                                    >> 0x10U))))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[6U] 
        = (IData)(((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x28U] 
                                       << 0x10U) | 
                                      (vlSelf->__PVT__dispatch_data[0x27U] 
                                       >> 0x10U)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->__PVT__dispatch_data[0x1fU] 
                                                   << 0x10U) 
                                                  | (vlSelf->__PVT__dispatch_data[0x1eU] 
                                                     >> 0x10U))))) 
                   >> 0x20U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[8U] 
        = ((vlSelf->__PVT__dispatch_data[0x24U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x23U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[0xaU] 
        = ((vlSelf->__PVT__dispatch_data[0x20U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x1fU] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[7U] 
        = ((vlSelf->__PVT__dispatch_data[0x29U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x28U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[9U] 
        = ((vlSelf->__PVT__dispatch_data[0x25U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x24U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[0xbU] 
        = ((vlSelf->__PVT__dispatch_data[0x21U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x20U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[0U] 
        = ((vlSelf->__PVT__dispatch_data[0x35U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x34U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[2U] 
        = ((vlSelf->__PVT__dispatch_data[0x31U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x30U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[4U] 
        = ((vlSelf->__PVT__dispatch_data[0x2dU] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x2cU] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[1U] 
        = ((vlSelf->__PVT__dispatch_data[0x36U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x35U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[3U] 
        = ((vlSelf->__PVT__dispatch_data[0x32U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x31U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[5U] 
        = (IData)((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x37U] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__dispatch_data[0x36U] 
                                                   >> 8U)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->__PVT__dispatch_data[0x2eU] 
                                                  << 0x18U) 
                                                 | (vlSelf->__PVT__dispatch_data[0x2dU] 
                                                    >> 8U))))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[6U] 
        = (IData)(((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x37U] 
                                       << 0x18U) | 
                                      (vlSelf->__PVT__dispatch_data[0x36U] 
                                       >> 8U)))) << 0x20U) 
                    | (QData)((IData)(((vlSelf->__PVT__dispatch_data[0x2eU] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__dispatch_data[0x2dU] 
                                        >> 8U))))) 
                   >> 0x20U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[8U] 
        = ((vlSelf->__PVT__dispatch_data[0x33U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x32U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[0xaU] 
        = ((vlSelf->__PVT__dispatch_data[0x2fU] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x2eU] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[7U] 
        = ((vlSelf->__PVT__dispatch_data[0x38U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x37U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[9U] 
        = ((vlSelf->__PVT__dispatch_data[0x34U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x33U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[0xbU] 
        = ((vlSelf->__PVT__dispatch_data[0x30U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x2fU] >> 8U));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_tmask 
        = (0xfU & (vlSelf->__PVT__dispatch_data[0xeU] 
                   >> 0x12U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_tmask 
        = (0xfU & (vlSelf->__PVT__dispatch_data[0x1dU] 
                   >> 0xaU));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_tmask 
        = (0xfU & (vlSelf->__PVT__dispatch_data[0x2cU] 
                   >> 2U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_tmask 
        = (0xfU & (vlSelf->__PVT__dispatch_data[0x3aU] 
                   >> 0x1aU));
    vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in 
        = ((2U & ((IData)(vlSelf->__PVT__dispatch_valid) 
                  << 1U)) | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in 
        = ((2U & (IData)(vlSelf->__PVT__dispatch_valid)) 
           | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in 
        = ((2U & ((IData)(vlSelf->__PVT__dispatch_valid) 
                  >> 1U)) | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in 
        = ((2U & ((IData)(vlSelf->__PVT__dispatch_valid) 
                  >> 2U)) | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__packet_valids 
        = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                  >> 2U)))) << 1U) 
           | (0U != (3U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_tmask))));
    __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__packet_valids 
        = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                  >> 2U)))) << 1U) 
           | (0U != (3U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_tmask))));
    __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__packet_valids 
        = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                  >> 2U)))) << 1U) 
           | (0U != (3U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_tmask))));
    __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__packet_valids 
        = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                  >> 2U)))) << 1U) 
           | (0U != (3U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_tmask))));
    vlSelf->__PVT__block_pid = ((0xeU & (IData)(vlSelf->__PVT__block_pid)) 
                                | (1U & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)));
    vlSelf->__PVT__block_tmask = ((0xfcU & (IData)(vlSelf->__PVT__block_tmask)) 
                                  | (3U & ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                           >> (2U & 
                                               ((IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                                << 1U)))));
    if ((0x17fU >= (0x1ffU & ((IData)(0xc0U) * (1U 
                                                & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))) {
        vlSelf->__PVT__block_regs[0U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            (0xfU & 
                                             (((IData)(0xc0U) 
                                               * (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                              >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[1U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(1U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[2U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(3U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(2U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[3U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(3U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[4U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(5U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(4U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[5U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(6U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(5U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
    } else {
        vlSelf->__PVT__block_regs[0U] = vlSelf->__Vxrand_h405aee6f__0[0U];
        vlSelf->__PVT__block_regs[1U] = vlSelf->__Vxrand_h405aee6f__0[1U];
        vlSelf->__PVT__block_regs[2U] = vlSelf->__Vxrand_h405aee6f__0[2U];
        vlSelf->__PVT__block_regs[3U] = vlSelf->__Vxrand_h405aee6f__0[3U];
        vlSelf->__PVT__block_regs[4U] = vlSelf->__Vxrand_h405aee6f__0[4U];
        vlSelf->__PVT__block_regs[5U] = vlSelf->__Vxrand_h405aee6f__0[5U];
    }
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_last_p 
        = ((1U & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)) 
           == (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__block_pid = ((0xdU & (IData)(vlSelf->__PVT__block_pid)) 
                                | (2U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                         << 1U)));
    vlSelf->__PVT__block_tmask = ((0xf3U & (IData)(vlSelf->__PVT__block_tmask)) 
                                  | (0xcU & (((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                              >> (2U 
                                                  & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                                     << 1U))) 
                                             << 2U)));
    if ((0x17fU >= (0x1ffU & ((IData)(0xc0U) * (1U 
                                                & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))) {
        vlSelf->__PVT__block_regs[6U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                            (0xfU & 
                                             (((IData)(0xc0U) 
                                               * (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                              >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[7U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(1U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[8U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(3U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(2U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[9U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(3U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0xaU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(5U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0xbU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(6U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(5U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
    } else {
        vlSelf->__PVT__block_regs[6U] = vlSelf->__Vxrand_h405aee6f__1[0U];
        vlSelf->__PVT__block_regs[7U] = vlSelf->__Vxrand_h405aee6f__1[1U];
        vlSelf->__PVT__block_regs[8U] = vlSelf->__Vxrand_h405aee6f__1[2U];
        vlSelf->__PVT__block_regs[9U] = vlSelf->__Vxrand_h405aee6f__1[3U];
        vlSelf->__PVT__block_regs[0xaU] = vlSelf->__Vxrand_h405aee6f__1[4U];
        vlSelf->__PVT__block_regs[0xbU] = vlSelf->__Vxrand_h405aee6f__1[5U];
    }
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_last_p 
        = ((1U & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)) 
           == (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__block_pid = ((0xbU & (IData)(vlSelf->__PVT__block_pid)) 
                                | (4U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                         << 2U)));
    vlSelf->__PVT__block_tmask = ((0xcfU & (IData)(vlSelf->__PVT__block_tmask)) 
                                  | (0x30U & (((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                               >> (2U 
                                                   & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                                      << 1U))) 
                                              << 4U)));
    if ((0x17fU >= (0x1ffU & ((IData)(0xc0U) * (1U 
                                                & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))) {
        vlSelf->__PVT__block_regs[0xcU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(1U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              (0xfU 
                                               & (((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0xdU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(2U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0xeU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(3U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(2U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0xfU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(4U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(3U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x10U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(5U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(4U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x11U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(6U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(5U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
    } else {
        vlSelf->__PVT__block_regs[0xcU] = vlSelf->__Vxrand_h405aee6f__2[0U];
        vlSelf->__PVT__block_regs[0xdU] = vlSelf->__Vxrand_h405aee6f__2[1U];
        vlSelf->__PVT__block_regs[0xeU] = vlSelf->__Vxrand_h405aee6f__2[2U];
        vlSelf->__PVT__block_regs[0xfU] = vlSelf->__Vxrand_h405aee6f__2[3U];
        vlSelf->__PVT__block_regs[0x10U] = vlSelf->__Vxrand_h405aee6f__2[4U];
        vlSelf->__PVT__block_regs[0x11U] = vlSelf->__Vxrand_h405aee6f__2[5U];
    }
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_last_p 
        = ((1U & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)) 
           == (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__block_pid = ((7U & (IData)(vlSelf->__PVT__block_pid)) 
                                | (8U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                         << 3U)));
    vlSelf->__PVT__block_tmask = ((0x3fU & (IData)(vlSelf->__PVT__block_tmask)) 
                                  | (0xc0U & (((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                               >> (2U 
                                                   & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                                      << 1U))) 
                                              << 6U)));
    if ((0x17fU >= (0x1ffU & ((IData)(0xc0U) * (1U 
                                                & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))) {
        vlSelf->__PVT__block_regs[0x12U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x13U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(2U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(1U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x14U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(3U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(2U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x15U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(3U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x16U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(5U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(4U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x17U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(6U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(5U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
    } else {
        vlSelf->__PVT__block_regs[0x12U] = vlSelf->__Vxrand_h405aee6f__3[0U];
        vlSelf->__PVT__block_regs[0x13U] = vlSelf->__Vxrand_h405aee6f__3[1U];
        vlSelf->__PVT__block_regs[0x14U] = vlSelf->__Vxrand_h405aee6f__3[2U];
        vlSelf->__PVT__block_regs[0x15U] = vlSelf->__Vxrand_h405aee6f__3[3U];
        vlSelf->__PVT__block_regs[0x16U] = vlSelf->__Vxrand_h405aee6f__3[4U];
        vlSelf->__PVT__block_regs[0x17U] = vlSelf->__Vxrand_h405aee6f__3[5U];
    }
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_last_p 
        = ((1U & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)) 
           == (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | ((4U & ((IData)(__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__packet_valids) 
                     << 2U)) | (2U & (IData)(__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__packet_valids))));
    __Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__valid_in 
        = ((IData)(__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__packet_valids) 
           & (~ (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__sent_mask_p)));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | ((4U & ((IData)(__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__packet_valids) 
                     << 2U)) | (2U & (IData)(__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__packet_valids))));
    __Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__valid_in 
        = ((IData)(__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__packet_valids) 
           & (~ (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__sent_mask_p)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | ((4U & ((IData)(__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__packet_valids) 
                     << 2U)) | (2U & (IData)(__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__packet_valids))));
    __Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__valid_in 
        = ((IData)(__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__packet_valids) 
           & (~ (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__sent_mask_p)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | ((4U & ((IData)(__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__packet_valids) 
                     << 2U)) | (2U & (IData)(__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__packet_valids))));
    __Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__valid_in 
        = ((IData)(__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__packet_valids) 
           & (~ (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__sent_mask_p)));
    vlSelf->__PVT__block_eop = (((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_last_p) 
                                 << 3U) | (((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_last_p) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_last_p) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_last_p))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | ((IData)(__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__valid_in) 
              << 1U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | ((IData)(__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__valid_in) 
              << 1U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | ((IData)(__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__valid_in) 
              << 1U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | ((IData)(__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__valid_in) 
              << 1U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[5U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[4U])))) 
            << 3U) | ((4U & ((IData)(vlSelf->__PVT__block_pid) 
                             << 2U)) | ((2U & ((IData)(vlSelf->__PVT__block_sop) 
                                               << 1U)) 
                                        | (1U & (IData)(vlSelf->__PVT__block_eop)))));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[5U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[4U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[5U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[4U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[5U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[4U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[2U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[2U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[2U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[2U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[0U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[6U] 
        = ((vlSelf->__PVT__dispatch_data[0xcU] << 3U) 
           | ((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->__PVT__block_regs[0U]))) 
                       >> 0x20U)) >> 0x1dU));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[7U] 
        = ((vlSelf->__PVT__dispatch_data[0xcU] >> 0x1dU) 
           | (vlSelf->__PVT__dispatch_data[0xdU] << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[8U] 
        = ((0x8000000U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                          << 0x1aU)) | ((0x4000000U 
                                         & (vlSelf->__PVT__dispatch_data[0xeU] 
                                            << 3U)) 
                                        | (((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__block_wid) 
                                            << 0x17U) 
                                           | ((0x600000U 
                                               & ((IData)(vlSelf->__PVT__block_tmask) 
                                                  << 0x15U)) 
                                              | ((vlSelf->__PVT__dispatch_data[0xdU] 
                                                  >> 0x1dU) 
                                                 | (0x1ffff8U 
                                                    & (vlSelf->__PVT__dispatch_data[0xeU] 
                                                       << 3U)))))));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0xbU])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0xaU])))) 
            << 3U) | ((4U & ((IData)(vlSelf->__PVT__block_pid) 
                             << 1U)) | ((2U & (IData)(vlSelf->__PVT__block_sop)) 
                                        | (1U & ((IData)(vlSelf->__PVT__block_eop) 
                                                 >> 1U)))));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0xbU])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0xaU])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0xbU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0xaU]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[0xbU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[0xaU]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[9U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[8U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[8U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[9U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[8U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[9U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[8U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[7U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[6U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[6U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[6U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[6U] 
        = (((vlSelf->__PVT__dispatch_data[0x1bU] << 0xbU) 
            | (0x7f8U & (vlSelf->__PVT__dispatch_data[0x1aU] 
                         >> 0x15U))) | ((IData)(((((QData)((IData)(
                                                                   vlSelf->__PVT__block_regs[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__block_regs[6U]))) 
                                                 >> 0x20U)) 
                                        >> 0x1dU));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[7U] 
        = ((7U & (vlSelf->__PVT__dispatch_data[0x1bU] 
                  >> 0x15U)) | ((vlSelf->__PVT__dispatch_data[0x1cU] 
                                 << 0xbU) | (0x7f8U 
                                             & (vlSelf->__PVT__dispatch_data[0x1bU] 
                                                >> 0x15U))));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[8U] 
        = ((0x8000000U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                          << 0x1aU)) | ((0x4000000U 
                                         & (vlSelf->__PVT__dispatch_data[0x1dU] 
                                            << 0xbU)) 
                                        | (((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__block_wid) 
                                            << 0x17U) 
                                           | ((0x600000U 
                                               & ((IData)(vlSelf->__PVT__block_tmask) 
                                                  << 0x13U)) 
                                              | ((7U 
                                                  & (vlSelf->__PVT__dispatch_data[0x1cU] 
                                                     >> 0x15U)) 
                                                 | (0x1ffff8U 
                                                    & ((vlSelf->__PVT__dispatch_data[0x1dU] 
                                                        << 0xbU) 
                                                       | (0x7f8U 
                                                          & (vlSelf->__PVT__dispatch_data[0x1cU] 
                                                             >> 0x15U)))))))));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x11U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x10U])))) 
            << 3U) | ((4U & (IData)(vlSelf->__PVT__block_pid)) 
                      | ((2U & ((IData)(vlSelf->__PVT__block_sop) 
                                >> 1U)) | (1U & ((IData)(vlSelf->__PVT__block_eop) 
                                                 >> 2U)))));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x11U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x10U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0x11U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0x10U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[0x11U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[0x10U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[0xfU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[0xeU])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0xfU])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0xeU])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0xfU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0xeU]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[0xfU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[0xeU]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[0xdU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[0xcU])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0xdU])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0xcU])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0xdU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0xcU]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[6U] 
        = (((vlSelf->__PVT__dispatch_data[0x2aU] << 0x13U) 
            | (0x7fff8U & (vlSelf->__PVT__dispatch_data[0x29U] 
                           >> 0xdU))) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__block_regs[0xdU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__block_regs[0xcU]))) 
                                                  >> 0x20U)) 
                                         >> 0x1dU));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[7U] 
        = ((7U & (vlSelf->__PVT__dispatch_data[0x2aU] 
                  >> 0xdU)) | ((vlSelf->__PVT__dispatch_data[0x2bU] 
                                << 0x13U) | (0x7fff8U 
                                             & (vlSelf->__PVT__dispatch_data[0x2aU] 
                                                >> 0xdU))));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[8U] 
        = ((0x8000000U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                          << 0x1aU)) | ((0x4000000U 
                                         & (vlSelf->__PVT__dispatch_data[0x2cU] 
                                            << 0x13U)) 
                                        | (((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__block_wid) 
                                            << 0x17U) 
                                           | ((0x600000U 
                                               & ((IData)(vlSelf->__PVT__block_tmask) 
                                                  << 0x11U)) 
                                              | ((7U 
                                                  & (vlSelf->__PVT__dispatch_data[0x2bU] 
                                                     >> 0xdU)) 
                                                 | (0x1ffff8U 
                                                    & ((vlSelf->__PVT__dispatch_data[0x2cU] 
                                                        << 0x13U) 
                                                       | (0x7fff8U 
                                                          & (vlSelf->__PVT__dispatch_data[0x2bU] 
                                                             >> 0xdU)))))))));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x17U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x16U])))) 
            << 3U) | ((4U & ((IData)(vlSelf->__PVT__block_pid) 
                             >> 1U)) | ((2U & ((IData)(vlSelf->__PVT__block_sop) 
                                               >> 2U)) 
                                        | (1U & ((IData)(vlSelf->__PVT__block_eop) 
                                                 >> 3U)))));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x17U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x16U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0x16U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[0x17U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[0x16U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[0x15U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[0x14U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x15U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x14U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0x15U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0x14U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[0x15U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[0x14U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[0x13U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[0x12U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x13U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x12U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0x12U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[6U] 
        = (((vlSelf->__PVT__dispatch_data[0x39U] << 0x1bU) 
            | (0x7fffff8U & (vlSelf->__PVT__dispatch_data[0x38U] 
                             >> 5U))) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__block_regs[0x13U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__block_regs[0x12U]))) 
                                                  >> 0x20U)) 
                                         >> 0x1dU));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[7U] 
        = ((7U & (vlSelf->__PVT__dispatch_data[0x39U] 
                  >> 5U)) | ((vlSelf->__PVT__dispatch_data[0x3aU] 
                              << 0x1bU) | (0x7fffff8U 
                                           & (vlSelf->__PVT__dispatch_data[0x39U] 
                                              >> 5U))));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[8U] 
        = ((0x8000000U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                          << 0x1aU)) | ((0x4000000U 
                                         & (vlSelf->__PVT__dispatch_data[0x3aU] 
                                            >> 5U)) 
                                        | (((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__block_wid) 
                                            << 0x17U) 
                                           | ((0x600000U 
                                               & ((IData)(vlSelf->__PVT__block_tmask) 
                                                  << 0xfU)) 
                                              | ((7U 
                                                  & (vlSelf->__PVT__dispatch_data[0x3aU] 
                                                     >> 5U)) 
                                                 | (0x1ffff8U 
                                                    & (vlSelf->__PVT__dispatch_data[0x3aU] 
                                                       >> 5U)))))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                                  >> 2U))));
}

VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__1(VVortex_VX_dispatch_unit__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__1\n"); );
    // Body
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                    >> 0x1bU) & (~ ((0x8000U & vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                     ? ((0x80000U & 
                                         vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                         ? (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit.__PVT__div_ready_in)
                                         : (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit.__PVT__mul_ready_in))
                                     : (~ (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__int_unit__DOT__rsp_buf__DOT__genblk1__DOT__stall))))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                    >> 0x1bU) & (~ ((0x8000U & vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                     ? ((0x80000U & 
                                         vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                         ? (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit.__PVT__div_ready_in)
                                         : (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit.__PVT__mul_ready_in))
                                     : (~ (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__int_unit__DOT__rsp_buf__DOT__genblk1__DOT__stall))))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                    >> 0x1bU) & (~ ((0x8000U & vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                     ? ((0x80000U & 
                                         vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                         ? (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit.__PVT__div_ready_in)
                                         : (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit.__PVT__mul_ready_in))
                                     : (~ (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__int_unit__DOT__rsp_buf__DOT__genblk1__DOT__stall))))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                    >> 0x1bU) & (~ ((0x8000U & vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                     ? ((0x80000U & 
                                         vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                         ? (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit.__PVT__div_ready_in)
                                         : (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit.__PVT__mul_ready_in))
                                     : (~ (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__int_unit__DOT__rsp_buf__DOT__genblk1__DOT__stall))))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__fire_p 
        = (IData)((((IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__stall))));
    vlSelf->__PVT__block_ready = ((0xeU & (IData)(vlSelf->__PVT__block_ready)) 
                                  | (1U & (~ (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__stall))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__fire_p 
        = (IData)((((IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__stall))));
    vlSelf->__PVT__block_ready = ((0xdU & (IData)(vlSelf->__PVT__block_ready)) 
                                  | (2U & ((~ (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__stall)) 
                                           << 1U)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__fire_p 
        = (IData)((((IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__stall))));
    vlSelf->__PVT__block_ready = ((0xbU & (IData)(vlSelf->__PVT__block_ready)) 
                                  | (4U & ((~ (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__stall)) 
                                           << 2U)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__fire_p 
        = (IData)((((IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__stall))));
    vlSelf->__PVT__block_ready = ((7U & (IData)(vlSelf->__PVT__block_ready)) 
                                  | (8U & ((~ (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__stall)) 
                                           << 3U)));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__fire_eop 
        = ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__fire_p) 
           & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_last_p));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__fire_eop 
        = ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__fire_p) 
           & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_last_p));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__fire_eop 
        = ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__fire_p) 
           & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_last_p));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__fire_eop 
        = ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__fire_p) 
           & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_last_p));
    vlSelf->__PVT__ready_in = 0U;
    vlSelf->__PVT__ready_in = ((IData)(vlSelf->__PVT__block_ready) 
                               & (IData)(vlSelf->__PVT__block_eop));
}

VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__0(VVortex_VX_dispatch_unit__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    CData/*1:0*/ __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__packet_valids;
    CData/*1:0*/ __Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__valid_in;
    CData/*1:0*/ __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__packet_valids;
    CData/*1:0*/ __Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__valid_in;
    CData/*1:0*/ __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__packet_valids;
    CData/*1:0*/ __Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__valid_in;
    CData/*1:0*/ __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__packet_valids;
    CData/*1:0*/ __Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__valid_in;
    CData/*2:0*/ __Vfunc_wis_to_wid__4__Vfuncout;
    CData/*0:0*/ __Vfunc_wis_to_wid__4__wis;
    CData/*2:0*/ __Vfunc_wis_to_wid__5__Vfuncout;
    CData/*0:0*/ __Vfunc_wis_to_wid__5__wis;
    CData/*2:0*/ __Vfunc_wis_to_wid__6__Vfuncout;
    CData/*0:0*/ __Vfunc_wis_to_wid__6__wis;
    CData/*2:0*/ __Vfunc_wis_to_wid__7__Vfuncout;
    CData/*0:0*/ __Vfunc_wis_to_wid__7__wis;
    // Body
    vlSelf->__PVT__issue_indices = 0xe4U;
    vlSelf->__PVT__block_sop = (((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_first_p) 
                                 << 3U) | (((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_first_p) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_first_p) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_first_p))));
    vlSelf->__PVT__dispatch_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__has_data) 
                                      << 3U) | (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__has_data) 
                                                 << 2U) 
                                                | (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__has_data) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__has_data))));
    vlSelf->__PVT__dispatch_data[0U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U];
    vlSelf->__PVT__dispatch_data[1U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U];
    vlSelf->__PVT__dispatch_data[2U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U];
    vlSelf->__PVT__dispatch_data[3U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U];
    vlSelf->__PVT__dispatch_data[4U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U];
    vlSelf->__PVT__dispatch_data[5U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U];
    vlSelf->__PVT__dispatch_data[6U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U];
    vlSelf->__PVT__dispatch_data[7U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U];
    vlSelf->__PVT__dispatch_data[8U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U];
    vlSelf->__PVT__dispatch_data[9U] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U];
    vlSelf->__PVT__dispatch_data[0xaU] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU];
    vlSelf->__PVT__dispatch_data[0xbU] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU];
    vlSelf->__PVT__dispatch_data[0xcU] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU];
    vlSelf->__PVT__dispatch_data[0xdU] = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU];
    vlSelf->__PVT__dispatch_data[0xeU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                           << 0x18U) 
                                          | vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__0__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU]);
    vlSelf->__PVT__dispatch_data[0xfU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                           >> 8U) | 
                                          (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                           << 0x18U));
    vlSelf->__PVT__dispatch_data[0x10U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x11U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x12U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x13U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x14U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x15U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x16U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x17U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x18U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x19U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x1aU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x1bU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x1cU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                            >> 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                              << 0x18U));
    vlSelf->__PVT__dispatch_data[0x1dU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__1__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                              >> 8U));
    vlSelf->__PVT__dispatch_data[0x1eU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x1fU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x20U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x21U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x22U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x23U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x24U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x25U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x26U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x27U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x28U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x29U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x2aU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x2bU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                            >> 0x10U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                              << 0x10U));
    vlSelf->__PVT__dispatch_data[0x2cU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                            << 8U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__2__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                              >> 0x10U));
    vlSelf->__PVT__dispatch_data[0x2dU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x2eU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[1U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x2fU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[2U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x30U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[3U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x31U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[4U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x32U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[5U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x33U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[6U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x34U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[7U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x35U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[8U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x36U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[9U] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x37U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xaU] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x38U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xbU] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x39U] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xcU] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                              << 8U));
    vlSelf->__PVT__dispatch_data[0x3aU] = ((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xdU] 
                                            >> 0x18U) 
                                           | (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__issue__DOT__dispatch__DOT__genblk5__BRA__3__KET____DOT__fpu_buffer__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__data_out_r[0xeU] 
                                              << 8U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[7U] 
        = vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
        = (((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x1bU) | vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[8U]);
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[7U] 
        = vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
        = (((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x1bU) | vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[8U]);
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[7U] 
        = vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
        = (((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x1bU) | vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[8U]);
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[4U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[5U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[6U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[7U] 
        = vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[7U];
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
        = (((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x1bU) | vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[8U]);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = (2U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = (4U | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    __Vfunc_wis_to_wid__4__wis = (1U & (vlSelf->__PVT__dispatch_data[0xeU] 
                                        >> 0x16U));
    __Vfunc_wis_to_wid__4__Vfuncout = ((IData)(__Vfunc_wis_to_wid__4__wis) 
                                       << 2U);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__4__Vfuncout;
    __Vfunc_wis_to_wid__5__wis = (1U & (vlSelf->__PVT__dispatch_data[0x1dU] 
                                        >> 0xeU));
    __Vfunc_wis_to_wid__5__Vfuncout = (1U | ((IData)(__Vfunc_wis_to_wid__5__wis) 
                                             << 2U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__5__Vfuncout;
    __Vfunc_wis_to_wid__6__wis = (1U & (vlSelf->__PVT__dispatch_data[0x2cU] 
                                        >> 6U));
    __Vfunc_wis_to_wid__6__Vfuncout = (2U | ((IData)(__Vfunc_wis_to_wid__6__wis) 
                                             << 2U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__6__Vfuncout;
    __Vfunc_wis_to_wid__7__wis = (1U & (vlSelf->__PVT__dispatch_data[0x3aU] 
                                        >> 0x1eU));
    __Vfunc_wis_to_wid__7__Vfuncout = (3U | ((IData)(__Vfunc_wis_to_wid__7__wis) 
                                             << 2U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__block_wid 
        = __Vfunc_wis_to_wid__7__Vfuncout;
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[0U] 
        = vlSelf->__PVT__dispatch_data[8U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[2U] 
        = vlSelf->__PVT__dispatch_data[4U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[4U] 
        = vlSelf->__PVT__dispatch_data[0U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[1U] 
        = vlSelf->__PVT__dispatch_data[9U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[3U] 
        = vlSelf->__PVT__dispatch_data[5U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[5U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__dispatch_data[0xaU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__dispatch_data[1U]))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[6U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__dispatch_data[0xaU])) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__dispatch_data[1U]))) 
                   >> 0x20U));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[8U] 
        = vlSelf->__PVT__dispatch_data[6U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[0xaU] 
        = vlSelf->__PVT__dispatch_data[2U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[7U] 
        = vlSelf->__PVT__dispatch_data[0xbU];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[9U] 
        = vlSelf->__PVT__dispatch_data[7U];
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[0xbU] 
        = vlSelf->__PVT__dispatch_data[3U];
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[0U] 
        = ((vlSelf->__PVT__dispatch_data[0x17U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x16U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[2U] 
        = ((vlSelf->__PVT__dispatch_data[0x13U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x12U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[4U] 
        = ((vlSelf->__PVT__dispatch_data[0xfU] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0xeU] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[1U] 
        = ((vlSelf->__PVT__dispatch_data[0x18U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x17U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[3U] 
        = ((vlSelf->__PVT__dispatch_data[0x14U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x13U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[5U] 
        = (IData)((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x19U] 
                                      << 8U) | (vlSelf->__PVT__dispatch_data[0x18U] 
                                                >> 0x18U)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->__PVT__dispatch_data[0x10U] 
                                                  << 8U) 
                                                 | (vlSelf->__PVT__dispatch_data[0xfU] 
                                                    >> 0x18U))))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[6U] 
        = (IData)(((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x19U] 
                                       << 8U) | (vlSelf->__PVT__dispatch_data[0x18U] 
                                                 >> 0x18U)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->__PVT__dispatch_data[0x10U] 
                                                   << 8U) 
                                                  | (vlSelf->__PVT__dispatch_data[0xfU] 
                                                     >> 0x18U))))) 
                   >> 0x20U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[8U] 
        = ((vlSelf->__PVT__dispatch_data[0x15U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x14U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[0xaU] 
        = ((vlSelf->__PVT__dispatch_data[0x11U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x10U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[7U] 
        = ((vlSelf->__PVT__dispatch_data[0x1aU] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x19U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[9U] 
        = ((vlSelf->__PVT__dispatch_data[0x16U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x15U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[0xbU] 
        = ((vlSelf->__PVT__dispatch_data[0x12U] << 8U) 
           | (vlSelf->__PVT__dispatch_data[0x11U] >> 0x18U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[0U] 
        = ((vlSelf->__PVT__dispatch_data[0x26U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x25U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[2U] 
        = ((vlSelf->__PVT__dispatch_data[0x22U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x21U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[4U] 
        = ((vlSelf->__PVT__dispatch_data[0x1eU] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x1dU] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[1U] 
        = ((vlSelf->__PVT__dispatch_data[0x27U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x26U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[3U] 
        = ((vlSelf->__PVT__dispatch_data[0x23U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x22U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[5U] 
        = (IData)((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x28U] 
                                      << 0x10U) | (
                                                   vlSelf->__PVT__dispatch_data[0x27U] 
                                                   >> 0x10U)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->__PVT__dispatch_data[0x1fU] 
                                                  << 0x10U) 
                                                 | (vlSelf->__PVT__dispatch_data[0x1eU] 
                                                    >> 0x10U))))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[6U] 
        = (IData)(((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x28U] 
                                       << 0x10U) | 
                                      (vlSelf->__PVT__dispatch_data[0x27U] 
                                       >> 0x10U)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   vlSelf->__PVT__dispatch_data[0x1fU] 
                                                   << 0x10U) 
                                                  | (vlSelf->__PVT__dispatch_data[0x1eU] 
                                                     >> 0x10U))))) 
                   >> 0x20U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[8U] 
        = ((vlSelf->__PVT__dispatch_data[0x24U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x23U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[0xaU] 
        = ((vlSelf->__PVT__dispatch_data[0x20U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x1fU] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[7U] 
        = ((vlSelf->__PVT__dispatch_data[0x29U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x28U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[9U] 
        = ((vlSelf->__PVT__dispatch_data[0x25U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x24U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[0xbU] 
        = ((vlSelf->__PVT__dispatch_data[0x21U] << 0x10U) 
           | (vlSelf->__PVT__dispatch_data[0x20U] >> 0x10U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[0U] 
        = ((vlSelf->__PVT__dispatch_data[0x35U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x34U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[2U] 
        = ((vlSelf->__PVT__dispatch_data[0x31U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x30U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[4U] 
        = ((vlSelf->__PVT__dispatch_data[0x2dU] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x2cU] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[1U] 
        = ((vlSelf->__PVT__dispatch_data[0x36U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x35U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[3U] 
        = ((vlSelf->__PVT__dispatch_data[0x32U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x31U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[5U] 
        = (IData)((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x37U] 
                                      << 0x18U) | (
                                                   vlSelf->__PVT__dispatch_data[0x36U] 
                                                   >> 8U)))) 
                    << 0x20U) | (QData)((IData)(((vlSelf->__PVT__dispatch_data[0x2eU] 
                                                  << 0x18U) 
                                                 | (vlSelf->__PVT__dispatch_data[0x2dU] 
                                                    >> 8U))))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[6U] 
        = (IData)(((((QData)((IData)(((vlSelf->__PVT__dispatch_data[0x37U] 
                                       << 0x18U) | 
                                      (vlSelf->__PVT__dispatch_data[0x36U] 
                                       >> 8U)))) << 0x20U) 
                    | (QData)((IData)(((vlSelf->__PVT__dispatch_data[0x2eU] 
                                        << 0x18U) | 
                                       (vlSelf->__PVT__dispatch_data[0x2dU] 
                                        >> 8U))))) 
                   >> 0x20U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[8U] 
        = ((vlSelf->__PVT__dispatch_data[0x33U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x32U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[0xaU] 
        = ((vlSelf->__PVT__dispatch_data[0x2fU] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x2eU] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[7U] 
        = ((vlSelf->__PVT__dispatch_data[0x38U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x37U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[9U] 
        = ((vlSelf->__PVT__dispatch_data[0x34U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x33U] >> 8U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[0xbU] 
        = ((vlSelf->__PVT__dispatch_data[0x30U] << 0x18U) 
           | (vlSelf->__PVT__dispatch_data[0x2fU] >> 8U));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_tmask 
        = (0xfU & (vlSelf->__PVT__dispatch_data[0xeU] 
                   >> 0x12U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_tmask 
        = (0xfU & (vlSelf->__PVT__dispatch_data[0x1dU] 
                   >> 0xaU));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_tmask 
        = (0xfU & (vlSelf->__PVT__dispatch_data[0x2cU] 
                   >> 2U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_tmask 
        = (0xfU & (vlSelf->__PVT__dispatch_data[0x3aU] 
                   >> 0x1aU));
    vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in 
        = ((2U & ((IData)(vlSelf->__PVT__dispatch_valid) 
                  << 1U)) | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in 
        = ((2U & (IData)(vlSelf->__PVT__dispatch_valid)) 
           | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in 
        = ((2U & ((IData)(vlSelf->__PVT__dispatch_valid) 
                  >> 1U)) | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in 
        = ((2U & ((IData)(vlSelf->__PVT__dispatch_valid) 
                  >> 2U)) | (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n)));
    __PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__packet_valids 
        = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                  >> 2U)))) << 1U) 
           | (0U != (3U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_tmask))));
    __PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__packet_valids 
        = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                  >> 2U)))) << 1U) 
           | (0U != (3U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_tmask))));
    __PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__packet_valids 
        = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                  >> 2U)))) << 1U) 
           | (0U != (3U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_tmask))));
    __PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__packet_valids 
        = (((IData)((0U != (3U & ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                  >> 2U)))) << 1U) 
           | (0U != (3U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_tmask))));
    vlSelf->__PVT__block_pid = ((0xeU & (IData)(vlSelf->__PVT__block_pid)) 
                                | (1U & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)));
    vlSelf->__PVT__block_tmask = ((0xfcU & (IData)(vlSelf->__PVT__block_tmask)) 
                                  | (3U & ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                           >> (2U & 
                                               ((IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                                << 1U)))));
    if ((0x17fU >= (0x1ffU & ((IData)(0xc0U) * (1U 
                                                & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))) {
        vlSelf->__PVT__block_regs[0U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            (0xfU & 
                                             (((IData)(0xc0U) 
                                               * (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                              >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[1U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(1U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[2U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(3U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(2U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[3U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(3U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[4U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(5U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(4U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[5U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(6U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(5U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
    } else {
        vlSelf->__PVT__block_regs[0U] = vlSelf->__Vxrand_h405aee6f__0[0U];
        vlSelf->__PVT__block_regs[1U] = vlSelf->__Vxrand_h405aee6f__0[1U];
        vlSelf->__PVT__block_regs[2U] = vlSelf->__Vxrand_h405aee6f__0[2U];
        vlSelf->__PVT__block_regs[3U] = vlSelf->__Vxrand_h405aee6f__0[3U];
        vlSelf->__PVT__block_regs[4U] = vlSelf->__Vxrand_h405aee6f__0[4U];
        vlSelf->__PVT__block_regs[5U] = vlSelf->__Vxrand_h405aee6f__0[5U];
    }
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_last_p 
        = ((1U & (IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in)) 
           == (1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__block_pid = ((0xdU & (IData)(vlSelf->__PVT__block_pid)) 
                                | (2U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                         << 1U)));
    vlSelf->__PVT__block_tmask = ((0xf3U & (IData)(vlSelf->__PVT__block_tmask)) 
                                  | (0xcU & (((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                              >> (2U 
                                                  & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                                     << 1U))) 
                                             << 2U)));
    if ((0x17fU >= (0x1ffU & ((IData)(0xc0U) * (1U 
                                                & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))) {
        vlSelf->__PVT__block_regs[6U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(1U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                            (0xfU & 
                                             (((IData)(0xc0U) 
                                               * (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                              >> 5U))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[7U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(1U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[8U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(3U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(2U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[9U] = (((0U == (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                           ? 0U : (
                                                   vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                                   ((IData)(4U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0xc0U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xc0U) 
                                                        * 
                                                        (1U 
                                                         & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                         | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                            ((IData)(3U) 
                                             + (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0xaU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(5U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0xbU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(6U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(5U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
    } else {
        vlSelf->__PVT__block_regs[6U] = vlSelf->__Vxrand_h405aee6f__1[0U];
        vlSelf->__PVT__block_regs[7U] = vlSelf->__Vxrand_h405aee6f__1[1U];
        vlSelf->__PVT__block_regs[8U] = vlSelf->__Vxrand_h405aee6f__1[2U];
        vlSelf->__PVT__block_regs[9U] = vlSelf->__Vxrand_h405aee6f__1[3U];
        vlSelf->__PVT__block_regs[0xaU] = vlSelf->__Vxrand_h405aee6f__1[4U];
        vlSelf->__PVT__block_regs[0xbU] = vlSelf->__Vxrand_h405aee6f__1[5U];
    }
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_last_p 
        = ((1U & (IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in)) 
           == (1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__block_pid = ((0xbU & (IData)(vlSelf->__PVT__block_pid)) 
                                | (4U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                         << 2U)));
    vlSelf->__PVT__block_tmask = ((0xcfU & (IData)(vlSelf->__PVT__block_tmask)) 
                                  | (0x30U & (((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                               >> (2U 
                                                   & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                                      << 1U))) 
                                              << 4U)));
    if ((0x17fU >= (0x1ffU & ((IData)(0xc0U) * (1U 
                                                & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))) {
        vlSelf->__PVT__block_regs[0xcU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(1U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              (0xfU 
                                               & (((IData)(0xc0U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0xdU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(2U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0xeU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(3U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(2U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0xfU] = (((0U == 
                                             (0x1fU 
                                              & ((IData)(0xc0U) 
                                                 * 
                                                 (1U 
                                                  & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                             ? 0U : 
                                            (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                             ((IData)(4U) 
                                              + (0xfU 
                                                 & (((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                           | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(3U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              >> (0x1fU 
                                                  & ((IData)(0xc0U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x10U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(5U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(4U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x11U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(6U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(5U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
    } else {
        vlSelf->__PVT__block_regs[0xcU] = vlSelf->__Vxrand_h405aee6f__2[0U];
        vlSelf->__PVT__block_regs[0xdU] = vlSelf->__Vxrand_h405aee6f__2[1U];
        vlSelf->__PVT__block_regs[0xeU] = vlSelf->__Vxrand_h405aee6f__2[2U];
        vlSelf->__PVT__block_regs[0xfU] = vlSelf->__Vxrand_h405aee6f__2[3U];
        vlSelf->__PVT__block_regs[0x10U] = vlSelf->__Vxrand_h405aee6f__2[4U];
        vlSelf->__PVT__block_regs[0x11U] = vlSelf->__Vxrand_h405aee6f__2[5U];
    }
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_last_p 
        = ((1U & (IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in)) 
           == (1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__block_pid = ((7U & (IData)(vlSelf->__PVT__block_pid)) 
                                | (8U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                         << 3U)));
    vlSelf->__PVT__block_tmask = ((0x3fU & (IData)(vlSelf->__PVT__block_tmask)) 
                                  | (0xc0U & (((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_tmask) 
                                               >> (2U 
                                                   & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                                                      << 1U))) 
                                              << 6U)));
    if ((0x17fU >= (0x1ffU & ((IData)(0xc0U) * (1U 
                                                & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))) {
        vlSelf->__PVT__block_regs[0x12U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(1U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               (0xfU 
                                                & (((IData)(0xc0U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x13U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(2U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(1U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x14U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(3U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(2U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x15U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(4U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(3U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x16U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(5U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(4U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
        vlSelf->__PVT__block_regs[0x17U] = (((0U == 
                                              (0x1fU 
                                               & ((IData)(0xc0U) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)))))
                                              ? 0U : 
                                             (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                              ((IData)(6U) 
                                               + (0xfU 
                                                  & (((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))))) 
                                            | (vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs[
                                               ((IData)(5U) 
                                                + (0xfU 
                                                   & (((IData)(0xc0U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))) 
                                                      >> 5U)))] 
                                               >> (0x1fU 
                                                   & ((IData)(0xc0U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in))))));
    } else {
        vlSelf->__PVT__block_regs[0x12U] = vlSelf->__Vxrand_h405aee6f__3[0U];
        vlSelf->__PVT__block_regs[0x13U] = vlSelf->__Vxrand_h405aee6f__3[1U];
        vlSelf->__PVT__block_regs[0x14U] = vlSelf->__Vxrand_h405aee6f__3[2U];
        vlSelf->__PVT__block_regs[0x15U] = vlSelf->__Vxrand_h405aee6f__3[3U];
        vlSelf->__PVT__block_regs[0x16U] = vlSelf->__Vxrand_h405aee6f__3[4U];
        vlSelf->__PVT__block_regs[0x17U] = vlSelf->__Vxrand_h405aee6f__3[5U];
    }
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_last_p 
        = ((1U & (IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in)) 
           == (1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n)));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | ((4U & ((IData)(__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__packet_valids) 
                     << 2U)) | (2U & (IData)(__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__packet_valids))));
    __Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__valid_in 
        = ((IData)(__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__packet_valids) 
           & (~ (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__sent_mask_p)));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | ((4U & ((IData)(__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__packet_valids) 
                     << 2U)) | (2U & (IData)(__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__packet_valids))));
    __Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__valid_in 
        = ((IData)(__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__packet_valids) 
           & (~ (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__sent_mask_p)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | ((4U & ((IData)(__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__packet_valids) 
                     << 2U)) | (2U & (IData)(__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__packet_valids))));
    __Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__valid_in 
        = ((IData)(__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__packet_valids) 
           & (~ (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__sent_mask_p)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | ((4U & ((IData)(__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__packet_valids) 
                     << 2U)) | (2U & (IData)(__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__packet_valids))));
    __Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__valid_in 
        = ((IData)(__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__packet_valids) 
           & (~ (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__sent_mask_p)));
    vlSelf->__PVT__block_eop = (((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_last_p) 
                                 << 3U) | (((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_last_p) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_last_p) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_last_p))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | ((IData)(__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__valid_in) 
              << 1U));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | ((IData)(__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__valid_in) 
              << 1U));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | ((IData)(__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__valid_in) 
              << 1U));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((1U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | ((IData)(__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__valid_in) 
              << 1U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[5U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[4U])))) 
            << 3U) | ((4U & ((IData)(vlSelf->__PVT__block_pid) 
                             << 2U)) | ((2U & ((IData)(vlSelf->__PVT__block_sop) 
                                               << 1U)) 
                                        | (1U & (IData)(vlSelf->__PVT__block_eop)))));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[5U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[4U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[5U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[4U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[5U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[4U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[2U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[3U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[2U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[2U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[2U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[0U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[6U] 
        = ((vlSelf->__PVT__dispatch_data[0xcU] << 3U) 
           | ((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->__PVT__block_regs[0U]))) 
                       >> 0x20U)) >> 0x1dU));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[7U] 
        = ((vlSelf->__PVT__dispatch_data[0xcU] >> 0x1dU) 
           | (vlSelf->__PVT__dispatch_data[0xdU] << 3U));
    vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[8U] 
        = ((0x8000000U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                          << 0x1aU)) | ((0x4000000U 
                                         & (vlSelf->__PVT__dispatch_data[0xeU] 
                                            << 3U)) 
                                        | (((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__block_wid) 
                                            << 0x17U) 
                                           | ((0x600000U 
                                               & ((IData)(vlSelf->__PVT__block_tmask) 
                                                  << 0x15U)) 
                                              | ((vlSelf->__PVT__dispatch_data[0xdU] 
                                                  >> 0x1dU) 
                                                 | (0x1ffff8U 
                                                    & (vlSelf->__PVT__dispatch_data[0xeU] 
                                                       << 3U)))))));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0xbU])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0xaU])))) 
            << 3U) | ((4U & ((IData)(vlSelf->__PVT__block_pid) 
                             << 1U)) | ((2U & (IData)(vlSelf->__PVT__block_sop)) 
                                        | (1U & ((IData)(vlSelf->__PVT__block_eop) 
                                                 >> 1U)))));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0xbU])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0xaU])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0xbU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0xaU]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[0xbU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[0xaU]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[9U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[8U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[8U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[9U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[8U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[9U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[8U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[7U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[6U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[6U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[7U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[6U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[6U] 
        = (((vlSelf->__PVT__dispatch_data[0x1bU] << 0xbU) 
            | (0x7f8U & (vlSelf->__PVT__dispatch_data[0x1aU] 
                         >> 0x15U))) | ((IData)(((((QData)((IData)(
                                                                   vlSelf->__PVT__block_regs[7U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__block_regs[6U]))) 
                                                 >> 0x20U)) 
                                        >> 0x1dU));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[7U] 
        = ((7U & (vlSelf->__PVT__dispatch_data[0x1bU] 
                  >> 0x15U)) | ((vlSelf->__PVT__dispatch_data[0x1cU] 
                                 << 0xbU) | (0x7f8U 
                                             & (vlSelf->__PVT__dispatch_data[0x1bU] 
                                                >> 0x15U))));
    vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[8U] 
        = ((0x8000000U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                          << 0x1aU)) | ((0x4000000U 
                                         & (vlSelf->__PVT__dispatch_data[0x1dU] 
                                            << 0xbU)) 
                                        | (((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__block_wid) 
                                            << 0x17U) 
                                           | ((0x600000U 
                                               & ((IData)(vlSelf->__PVT__block_tmask) 
                                                  << 0x13U)) 
                                              | ((7U 
                                                  & (vlSelf->__PVT__dispatch_data[0x1cU] 
                                                     >> 0x15U)) 
                                                 | (0x1ffff8U 
                                                    & ((vlSelf->__PVT__dispatch_data[0x1dU] 
                                                        << 0xbU) 
                                                       | (0x7f8U 
                                                          & (vlSelf->__PVT__dispatch_data[0x1cU] 
                                                             >> 0x15U)))))))));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x11U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x10U])))) 
            << 3U) | ((4U & (IData)(vlSelf->__PVT__block_pid)) 
                      | ((2U & ((IData)(vlSelf->__PVT__block_sop) 
                                >> 1U)) | (1U & ((IData)(vlSelf->__PVT__block_eop) 
                                                 >> 2U)))));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x11U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x10U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0x11U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0x10U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[0x11U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[0x10U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[0xfU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[0xeU])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0xfU])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0xeU])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0xfU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0xeU]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[0xfU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[0xeU]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[0xdU])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[0xcU])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0xdU])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0xcU])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0xdU])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0xcU]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[6U] 
        = (((vlSelf->__PVT__dispatch_data[0x2aU] << 0x13U) 
            | (0x7fff8U & (vlSelf->__PVT__dispatch_data[0x29U] 
                           >> 0xdU))) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__block_regs[0xdU])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__block_regs[0xcU]))) 
                                                  >> 0x20U)) 
                                         >> 0x1dU));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[7U] 
        = ((7U & (vlSelf->__PVT__dispatch_data[0x2aU] 
                  >> 0xdU)) | ((vlSelf->__PVT__dispatch_data[0x2bU] 
                                << 0x13U) | (0x7fff8U 
                                             & (vlSelf->__PVT__dispatch_data[0x2aU] 
                                                >> 0xdU))));
    vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[8U] 
        = ((0x8000000U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                          << 0x1aU)) | ((0x4000000U 
                                         & (vlSelf->__PVT__dispatch_data[0x2cU] 
                                            << 0x13U)) 
                                        | (((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__block_wid) 
                                            << 0x17U) 
                                           | ((0x600000U 
                                               & ((IData)(vlSelf->__PVT__block_tmask) 
                                                  << 0x11U)) 
                                              | ((7U 
                                                  & (vlSelf->__PVT__dispatch_data[0x2bU] 
                                                     >> 0xdU)) 
                                                 | (0x1ffff8U 
                                                    & ((vlSelf->__PVT__dispatch_data[0x2cU] 
                                                        << 0x13U) 
                                                       | (0x7fff8U 
                                                          & (vlSelf->__PVT__dispatch_data[0x2bU] 
                                                             >> 0xdU)))))))));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x17U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x16U])))) 
            << 3U) | ((4U & ((IData)(vlSelf->__PVT__block_pid) 
                             >> 1U)) | ((2U & ((IData)(vlSelf->__PVT__block_sop) 
                                               >> 2U)) 
                                        | (1U & ((IData)(vlSelf->__PVT__block_eop) 
                                                 >> 3U)))));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x17U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x16U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0x17U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0x16U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[0x17U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[0x16U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[0x15U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[0x14U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x15U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x14U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0x15U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0x14U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[4U] 
        = (((IData)(((((QData)((IData)(vlSelf->__PVT__block_regs[0x15U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->__PVT__block_regs[0x14U]))) 
                     >> 0x20U)) >> 0x1dU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__block_regs[0x13U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__block_regs[0x12U])))) 
                                             << 3U));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[5U] 
        = (((IData)((((QData)((IData)(vlSelf->__PVT__block_regs[0x13U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__block_regs[0x12U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->__PVT__block_regs[0x13U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__PVT__block_regs[0x12U]))) 
                                  >> 0x20U)) << 3U));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[6U] 
        = (((vlSelf->__PVT__dispatch_data[0x39U] << 0x1bU) 
            | (0x7fffff8U & (vlSelf->__PVT__dispatch_data[0x38U] 
                             >> 5U))) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__block_regs[0x13U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->__PVT__block_regs[0x12U]))) 
                                                  >> 0x20U)) 
                                         >> 0x1dU));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[7U] 
        = ((7U & (vlSelf->__PVT__dispatch_data[0x39U] 
                  >> 5U)) | ((vlSelf->__PVT__dispatch_data[0x3aU] 
                              << 0x1bU) | (0x7fffff8U 
                                           & (vlSelf->__PVT__dispatch_data[0x39U] 
                                              >> 5U))));
    vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[8U] 
        = ((0x8000000U & ((IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                          << 0x1aU)) | ((0x4000000U 
                                         & (vlSelf->__PVT__dispatch_data[0x3aU] 
                                            >> 5U)) 
                                        | (((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__block_wid) 
                                            << 0x17U) 
                                           | ((0x600000U 
                                               & ((IData)(vlSelf->__PVT__block_tmask) 
                                                  << 0xfU)) 
                                              | ((7U 
                                                  & (vlSelf->__PVT__dispatch_data[0x3aU] 
                                                     >> 5U)) 
                                                 | (0x1ffff8U 
                                                    & (vlSelf->__PVT__dispatch_data[0x3aU] 
                                                       >> 5U)))))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                                  >> 2U))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n)) 
           | (IData)((0U != (6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n)))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n 
        = ((6U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n)) 
           | (1U & ((2U & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n))
                     ? ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                        >> 1U) : ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n) 
                                  >> 2U))));
}

VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__1(VVortex_VX_dispatch_unit__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__1\n"); );
    // Body
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                    >> 0x1bU) & (~ (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__execute_if__BRA__0__KET__.__PVT__ready))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                    >> 0x1bU) & (~ (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__execute_if__BRA__1__KET__.__PVT__ready))));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                    >> 0x1bU) & (~ (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__execute_if__BRA__2__KET__.__PVT__ready))));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                    >> 0x1bU) & (~ (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__execute_if__BRA__3__KET__.__PVT__ready))));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__fire_p 
        = (IData)((((IData)(vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__stall))));
    vlSelf->__PVT__block_ready = ((0xeU & (IData)(vlSelf->__PVT__block_ready)) 
                                  | (1U & (~ (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__stall))));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__fire_p 
        = (IData)((((IData)(vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__stall))));
    vlSelf->__PVT__block_ready = ((0xdU & (IData)(vlSelf->__PVT__block_ready)) 
                                  | (2U & ((~ (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__stall)) 
                                           << 1U)));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__fire_p 
        = (IData)((((IData)(vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__stall))));
    vlSelf->__PVT__block_ready = ((0xbU & (IData)(vlSelf->__PVT__block_ready)) 
                                  | (4U & ((~ (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__stall)) 
                                           << 2U)));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__fire_p 
        = (IData)((((IData)(vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__stall))));
    vlSelf->__PVT__block_ready = ((7U & (IData)(vlSelf->__PVT__block_ready)) 
                                  | (8U & ((~ (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__stall)) 
                                           << 3U)));
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__fire_eop 
        = ((IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__fire_p) 
           & (IData)(vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_last_p));
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__fire_eop 
        = ((IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__fire_p) 
           & (IData)(vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_last_p));
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__fire_eop 
        = ((IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__fire_p) 
           & (IData)(vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_last_p));
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__fire_eop 
        = ((IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__fire_p) 
           & (IData)(vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_last_p));
    vlSelf->__PVT__ready_in = 0U;
    vlSelf->__PVT__ready_in = ((IData)(vlSelf->__PVT__block_ready) 
                               & (IData)(vlSelf->__PVT__block_eop));
}
