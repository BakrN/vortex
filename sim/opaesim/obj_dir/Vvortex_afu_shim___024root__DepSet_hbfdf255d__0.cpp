// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim___024root.h"

QData Vvortex_afu_shim___024root___change_request_1(Vvortex_afu_shim___024root* vlSelf);

VL_INLINE_OPT QData Vvortex_afu_shim___024root___change_request(Vvortex_afu_shim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvortex_afu_shim___024root___change_request\n"); );
    // Body
    return (Vvortex_afu_shim___024root___change_request_1(vlSelf));
}

#ifdef VL_DEBUG
void Vvortex_afu_shim___024root___eval_debug_assertions(Vvortex_afu_shim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvortex_afu_shim___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_TxAlmFull 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_TxAlmFull");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c1_TxAlmFull 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c1_TxAlmFull");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_hdr_vc_used 
                     & 0xfcU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_hdr_vc_used");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_hdr_rsvd1 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_hdr_rsvd1");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_hdr_hit_miss 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_hdr_hit_miss");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_hdr_rsvd0 
                     & 0xfcU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_hdr_rsvd0");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_hdr_cl_num 
                     & 0xfcU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_hdr_cl_num");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_hdr_resp_type 
                     & 0xf0U))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_hdr_resp_type");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_rspValid 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_rspValid");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_mmioRdValid 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_mmioRdValid");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_mmioWrValid 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_mmioWrValid");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_ReqMmioHdr_length 
                     & 0xfcU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_ReqMmioHdr_length");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_ReqMmioHdr_rsvd 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_ReqMmioHdr_rsvd");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c0_ReqMmioHdr_tid 
                     & 0xfe00U))) {
        Verilated::overWidthError("vcp2af_sRxPort_c0_ReqMmioHdr_tid");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c1_hdr_vc_used 
                     & 0xfcU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c1_hdr_vc_used");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c1_hdr_rsvd1 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c1_hdr_rsvd1");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c1_hdr_hit_miss 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c1_hdr_hit_miss");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c1_hdr_format 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c1_hdr_format");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c1_hdr_rsvd0 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c1_hdr_rsvd0");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c1_hdr_cl_num 
                     & 0xfcU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c1_hdr_cl_num");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c1_hdr_resp_type 
                     & 0xf0U))) {
        Verilated::overWidthError("vcp2af_sRxPort_c1_hdr_resp_type");}
    if (VL_UNLIKELY((vlSelf->vcp2af_sRxPort_c1_rspValid 
                     & 0xfeU))) {
        Verilated::overWidthError("vcp2af_sRxPort_c1_rspValid");}
}
#endif  // VL_DEBUG
