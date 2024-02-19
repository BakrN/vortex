// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex__Syms.h"
#include "VVortex___024root.h"

VL_ATTR_COLD void VVortex___024root___settle__TOP__0(VVortex___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->busy = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__schedule__DOT_____05Fbusy;
    vlSelf->mem_req_valid = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r;
    vlSelf->mem_rsp_ready = ((IData)(vlSelf->mem_rsp_valid) 
                             & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__ready_out_r) 
                                >> (1U & (vlSymsp->TOP__Vortex__mem_bus_if.__PVT__rsp_data[0U] 
                                          >> 1U))));
    vlSelf->mem_req_tag = (0x3ffU & vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0U]);
    vlSelf->mem_req_data[0U] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[1U] 
                                 << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0U] 
                                              >> 0xaU));
    vlSelf->mem_req_data[1U] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[2U] 
                                 << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[1U] 
                                              >> 0xaU));
    vlSelf->mem_req_data[2U] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[3U] 
                                 << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[2U] 
                                              >> 0xaU));
    vlSelf->mem_req_data[3U] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[4U] 
                                 << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[3U] 
                                              >> 0xaU));
    vlSelf->mem_req_data[4U] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[5U] 
                                 << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[4U] 
                                              >> 0xaU));
    vlSelf->mem_req_data[5U] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[6U] 
                                 << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[5U] 
                                              >> 0xaU));
    vlSelf->mem_req_data[6U] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[7U] 
                                 << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[6U] 
                                              >> 0xaU));
    vlSelf->mem_req_data[7U] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[8U] 
                                 << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[7U] 
                                              >> 0xaU));
    vlSelf->mem_req_data[8U] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[9U] 
                                 << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[8U] 
                                              >> 0xaU));
    vlSelf->mem_req_data[9U] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xaU] 
                                 << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[9U] 
                                              >> 0xaU));
    vlSelf->mem_req_data[0xaU] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xbU] 
                                   << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xaU] 
                                                >> 0xaU));
    vlSelf->mem_req_data[0xbU] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xcU] 
                                   << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xbU] 
                                                >> 0xaU));
    vlSelf->mem_req_data[0xcU] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xdU] 
                                   << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xcU] 
                                                >> 0xaU));
    vlSelf->mem_req_data[0xdU] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xeU] 
                                   << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xdU] 
                                                >> 0xaU));
    vlSelf->mem_req_data[0xeU] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xfU] 
                                   << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xeU] 
                                                >> 0xaU));
    vlSelf->mem_req_data[0xfU] = ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x10U] 
                                   << 0x16U) | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xfU] 
                                                >> 0xaU));
    vlSelf->mem_req_addr = (0x3ffffffU & ((vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x11U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x10U] 
                                             >> 0xaU)));
    vlSelf->mem_req_byteen = (((QData)((IData)(vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x13U])) 
                               << 0x3cU) | (((QData)((IData)(
                                                             vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x12U])) 
                                             << 0x1cU) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x11U])) 
                                               >> 4U)));
    vlSelf->mem_req_rw = (1U & (vlSymsp->TOP__Vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x13U] 
                                >> 4U));
}

VL_ATTR_COLD void VVortex_Vortex___initial__TOP__Vortex__0(VVortex_Vortex* vlSelf);
VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__pi27* vlSelf);
VL_ATTR_COLD void VVortex_VX_fpu_dpi__N2_T2_O1___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_dpi__0(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf);
VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__0(VVortex_VX_dispatch_unit__pi26* vlSelf);
VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf);

VL_ATTR_COLD void VVortex___024root___eval_initial(VVortex___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex___024root___eval_initial\n"); );
    // Body
    VVortex_Vortex___initial__TOP__Vortex__0((&vlSymsp->TOP__Vortex));
    VVortex_VX_muldiv_unit__pi27___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit));
    VVortex_VX_muldiv_unit__pi27___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit));
    VVortex_VX_muldiv_unit__pi27___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit));
    VVortex_VX_muldiv_unit__pi27___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit));
    VVortex_VX_fpu_dpi__N2_T2_O1___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_dpi__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_dpi));
    VVortex_VX_fpu_dpi__N2_T2_O1___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_dpi__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_dpi));
    VVortex_VX_fpu_dpi__N2_T2_O1___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_dpi__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_dpi));
    VVortex_VX_fpu_dpi__N2_T2_O1___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_dpi__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_dpi));
    VVortex_VX_dispatch_unit__pi26___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit));
    VVortex_VX_dispatch_unit__pi26___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit));
    VVortex_VX_smem_switch__pi17___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch));
    VVortex_VX_smem_switch__pi17___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch));
    VVortex_VX_smem_switch__pi17___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch));
    VVortex_VX_smem_switch__pi17___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch));
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__0(VVortex_VX_dispatch_unit__pi26* vlSelf);
VL_ATTR_COLD void VVortex_Vortex___settle__TOP__Vortex__0(VVortex_Vortex* vlSelf);
VL_ATTR_COLD void VVortex_Vortex___settle__TOP__Vortex__1(VVortex_Vortex* vlSelf);
VL_ATTR_COLD void VVortex_Vortex___settle__TOP__Vortex__2(VVortex_Vortex* vlSelf);
VL_ATTR_COLD void VVortex_Vortex___settle__TOP__Vortex__3(VVortex_Vortex* vlSelf);
VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__0(VVortex_VX_dispatch_unit__pi26* vlSelf);
VL_ATTR_COLD void VVortex_VX_fpu_dpi__N2_T2_O1___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_dpi__0(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf);
VL_ATTR_COLD void VVortex_VX_fpu_dpi__N2_T2_O1___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_dpi__0(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf);
VL_ATTR_COLD void VVortex_VX_fpu_dpi__N2_T2_O1___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_dpi__0(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf);
VL_ATTR_COLD void VVortex_VX_fpu_dpi__N2_T2_O1___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_dpi__0(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf);
VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf);
VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf);
VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf);
VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf);
VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__pi27* vlSelf);
VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__pi27* vlSelf);
VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__pi27* vlSelf);
VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__pi27* vlSelf);
VL_ATTR_COLD void VVortex_Vortex___settle__TOP__Vortex__4(VVortex_Vortex* vlSelf);
VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__pi27* vlSelf);
VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__pi27* vlSelf);
VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__pi27* vlSelf);
VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__pi27* vlSelf);
VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__1(VVortex_VX_dispatch_unit__pi26* vlSelf);
void VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf);
void VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf);
void VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf);
void VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf);
VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__1(VVortex_VX_dispatch_unit__pi26* vlSelf);
void VVortex_Vortex___combo__TOP__Vortex__2(VVortex_Vortex* vlSelf);

VL_ATTR_COLD void VVortex___024root___eval_settle(VVortex___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVortex___024root___eval_settle\n"); );
    // Body
    VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit));
    VVortex_Vortex___settle__TOP__Vortex__0((&vlSymsp->TOP__Vortex));
    VVortex_Vortex___settle__TOP__Vortex__1((&vlSymsp->TOP__Vortex));
    VVortex_Vortex___settle__TOP__Vortex__2((&vlSymsp->TOP__Vortex));
    VVortex_Vortex___settle__TOP__Vortex__3((&vlSymsp->TOP__Vortex));
    VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit));
    VVortex_VX_fpu_dpi__N2_T2_O1___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_dpi__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__0__KET____DOT__fpu_dpi));
    VVortex_VX_fpu_dpi__N2_T2_O1___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_dpi__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_dpi));
    VVortex_VX_fpu_dpi__N2_T2_O1___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_dpi__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_dpi));
    VVortex_VX_fpu_dpi__N2_T2_O1___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_dpi__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_dpi));
    VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch));
    VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch));
    VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch));
    VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch));
    VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit));
    VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit));
    VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit));
    VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit));
    VVortex___024root___settle__TOP__0(vlSelf);
    VVortex_Vortex___settle__TOP__Vortex__4((&vlSymsp->TOP__Vortex));
    VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__1((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit));
    VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__1((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit));
    VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__1((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit));
    VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__1((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit));
    VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit__1((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit));
    VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch));
    VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch));
    VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch));
    VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch__0((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch));
    VVortex_VX_dispatch_unit__pi26___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__1((&vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit));
    VVortex_Vortex___combo__TOP__Vortex__2((&vlSymsp->TOP__Vortex));
}
