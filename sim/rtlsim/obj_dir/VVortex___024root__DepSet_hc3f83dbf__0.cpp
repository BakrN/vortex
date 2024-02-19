// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex___024root.h"

QData VVortex___024root___change_request_1(VVortex___024root* vlSelf);

VL_INLINE_OPT QData VVortex___024root___change_request(VVortex___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex___024root___change_request\n"); );
    // Body
    return (VVortex___024root___change_request_1(vlSelf));
}

#ifdef VL_DEBUG
void VVortex___024root___eval_debug_assertions(VVortex___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->mem_req_ready & 0xfeU))) {
        Verilated::overWidthError("mem_req_ready");}
    if (VL_UNLIKELY((vlSelf->mem_rsp_valid & 0xfeU))) {
        Verilated::overWidthError("mem_rsp_valid");}
    if (VL_UNLIKELY((vlSelf->mem_rsp_tag & 0xfc00U))) {
        Verilated::overWidthError("mem_rsp_tag");}
    if (VL_UNLIKELY((vlSelf->dcr_wr_valid & 0xfeU))) {
        Verilated::overWidthError("dcr_wr_valid");}
    if (VL_UNLIKELY((vlSelf->dcr_wr_addr & 0xf000U))) {
        Verilated::overWidthError("dcr_wr_addr");}
}
#endif  // VL_DEBUG
