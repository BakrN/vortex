// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim_Vortex.h"
#include "Vvortex_afu_shim__Syms.h"

VL_ATTR_COLD void Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__5(Vvortex_afu_shim_Vortex* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__5\n"); );
    // Init
    CData/*0:0*/ __PVT__l3cache__DOT__core_req_ready;
    CData/*0:0*/ __PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__l2cache__DOT__core_req_ready;
    CData/*1:0*/ __PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__valid_out_r;
    // Body
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[0U] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[1U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0U] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[1U] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[2U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[1U] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[2U] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[3U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[2U] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[3U] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[4U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[3U] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[4U] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[5U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[4U] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[5U] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[6U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[5U] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[6U] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[7U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[6U] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[7U] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[8U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[7U] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[8U] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[9U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[8U] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[9U] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xaU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[9U] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[0xaU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xbU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xaU] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[0xbU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xcU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xbU] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[0xcU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xdU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xcU] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[0xdU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xeU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xdU] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[0xeU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xfU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xeU] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[0xfU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0x10U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xfU] 
                         >> 0xaU));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__rsp_data_in[0x10U] 
        = ((0x1feU & (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0U] 
                      >> 1U)) | (1U & vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0U]));
    __PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__valid_out_r 
        = ((0xfffffffeU & (((IData)(vlSymsp->TOP__vortex_afu_shim__afu.__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                            << 1U) & vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0U])) 
           | ((IData)(vlSymsp->TOP__vortex_afu_shim__afu.__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
              & (~ (vlSymsp->TOP__vortex_afu_shim__afu.vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0U] 
                    >> 1U))));
    __PVT__l3cache__DOT__core_req_ready = ((IData)(vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                           & (IData)(vlSymsp->TOP__vortex_afu_shim__afu.__PVT__vx_mem_req_ready));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((IData)(__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = (((IData)(__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__valid_out_r) 
            >> 1U) & (IData)(vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    __PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__l2cache__DOT__core_req_ready 
        = ((IData)(vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (IData)(__PVT__l3cache__DOT__core_req_ready));
    vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (IData)(__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__l2cache__DOT__core_req_ready));
}
