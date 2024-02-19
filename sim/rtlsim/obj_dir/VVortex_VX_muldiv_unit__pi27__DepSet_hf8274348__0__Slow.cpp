// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_muldiv_unit__pi27.h"
#include "VVortex__Syms.h"

VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__pi27* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_hfec4d022__0;
    VlWide<4>/*127:0*/ __Vtemp_h525eaa08__0;
    VlWide<4>/*127:0*/ __Vtemp_h0cfce02c__0;
    // Body
    vlSelf->__Vcellinp__rsp_buf__valid_in = ((2U & 
                                              (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 0xfU)) 
                                             | (1U 
                                                & (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                   >> 0x10U)));
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = (((IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x11U) | vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U]);
    vlSelf->__PVT__div_in1 = ((0xffffffff00000000ULL 
                               & vlSelf->__PVT__div_in1) 
                              | (IData)((IData)(((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                  << 0x1dU) 
                                                 | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                    >> 3U)))));
    vlSelf->__PVT__div_in2 = ((0xffffffff00000000ULL 
                               & vlSelf->__PVT__div_in2) 
                              | (IData)((IData)(((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                  << 0x1dU) 
                                                 | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                    >> 3U)))));
    vlSelf->__PVT__div_in1 = ((0xffffffffULL & vlSelf->__PVT__div_in1) 
                              | ((QData)((IData)(((
                                                   vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                   << 0x1dU) 
                                                  | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                     >> 3U)))) 
                                 << 0x20U));
    vlSelf->__PVT__div_in2 = ((0xffffffffULL & vlSelf->__PVT__div_in2) 
                              | ((QData)((IData)(((
                                                   vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                   << 0x1dU) 
                                                  | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                     >> 3U)))) 
                                 << 0x20U));
    __Vtemp_hfec4d022__0[0U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vtemp_hfec4d022__0[1U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vtemp_hfec4d022__0[2U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vtemp_hfec4d022__0[3U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U]));
    __Vtemp_hfec4d022__0[4U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                              << 0x10U));
    __Vtemp_hfec4d022__0[5U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                              << 0x10U));
    __Vtemp_hfec4d022__0[6U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                              << 0x10U));
    if ((0xdfU >= (0xffU & ((IData)(0x70U) * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))) {
        __Vtemp_h525eaa08__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(1U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       (7U & (((IData)(0x70U) 
                                               * (1U 
                                                  & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(2U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(1U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(2U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(4U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(3U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
    } else {
        __Vtemp_h525eaa08__0[0U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[0U];
        __Vtemp_h525eaa08__0[1U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[1U];
        __Vtemp_h525eaa08__0[2U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[2U];
        __Vtemp_h525eaa08__0[3U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[3U];
    }
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = __Vtemp_h525eaa08__0[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = __Vtemp_h525eaa08__0[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = __Vtemp_h525eaa08__0[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))) 
            << 0x11U) | ((0x10000U & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                      << 0x10U)) | 
                         (0xffffU & __Vtemp_h525eaa08__0[3U])));
    __Vtemp_h0cfce02c__0[3U] = (((IData)(((0x1fffffffff80ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                               << 0x1dU) 
                                              | (0x1fffffffffffff80ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            ((0x40U 
                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                 << 3U)) 
                                                             | (0x3fU 
                                                                & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                   >> 4U))))))) 
                                 >> 0x1dU) | ((IData)(
                                                      (((0x1fffffffff80ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                                             << 0x1dU) 
                                                            | (0x1fffffffffffff80ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                                  >> 3U)))) 
                                                        | (QData)((IData)(
                                                                          ((0x40U 
                                                                            & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                               << 3U)) 
                                                                           | (0x3fU 
                                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                                >> 4U)))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_commit_if.__PVT__data[0U] 
        = (((IData)((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U])))) 
            << 3U) | (7U & vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U]));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_commit_if.__PVT__data[1U] 
        = (((IData)((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U]))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_commit_if.__PVT__data[2U] 
        = (((IData)(((0x1fffffffff80ULL & (((QData)((IData)(
                                                            vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                            << 0x1dU) 
                                           | (0x1fffffffffffff80ULL 
                                              & ((QData)((IData)(
                                                                 vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                 >> 3U)))) 
                     | (QData)((IData)(((0x40U & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                  << 3U)) 
                                        | (0x3fU & 
                                           (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                            >> 4U))))))) 
            << 3U) | ((IData)(((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U]))) 
                               >> 0x20U)) >> 0x1dU));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_commit_if.__PVT__data[3U] 
        = __Vtemp_h0cfce02c__0[3U];
}

void VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(CData/*0:0*/ enable, CData/*0:0*/ is_signed_a, CData/*0:0*/ is_signed_b, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &resultl, IData/*31:0*/ &resulth);
void VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(CData/*0:0*/ enable, CData/*0:0*/ is_signed, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &quotient, IData/*31:0*/ &remainder);

VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__pi27* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__1\n"); );
    // Body
    vlSelf->__PVT__mul_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (~ (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                         >> 0x13U)));
    vlSelf->__PVT__div_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                      >> 0x13U));
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                    >> 0x11U) & (~ ((IData)(vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT____Vcellout__genblk1__BRA__0__KET____DOT__rsp_arb__ready_in) 
                                    >> 1U))));
    vlSelf->__Vcellout__rsp_buf__ready_in = ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall))))) 
                                             & ((2U 
                                                 & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))));
    vlSelf->__PVT__mul_ready_in = (1U & ((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                         | (~ (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 0x10U))));
    vlSelf->__PVT__div_ready_in = (1U & (((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                          >> 1U) | 
                                         (~ (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             >> 0x10U))));
    vlSelf->__PVT__mul_fire_in = ((IData)(vlSelf->__PVT__mul_valid_in) 
                                  & (IData)(vlSelf->__PVT__mul_ready_in));
    vlSelf->__PVT__div_fire_in = ((IData)(vlSelf->__PVT__div_valid_in) 
                                  & (IData)(vlSelf->__PVT__div_ready_in));
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__0__resultl, vlSelf->__Vtask_dpi_imul__0__resulth);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__0__resultl;
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__0__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__1__resultl, vlSelf->__Vtask_dpi_imul__1__resulth);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__1__resultl;
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__1__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), (IData)(vlSelf->__PVT__div_in1), (IData)(vlSelf->__PVT__div_in2), vlSelf->__Vtask_dpi_idiv__2__quotient, vlSelf->__Vtask_dpi_idiv__2__remainder);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__2__quotient;
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__2__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), (IData)(
                                                                                (vlSelf->__PVT__div_in1 
                                                                                >> 0x20U)), (IData)(
                                                                                (vlSelf->__PVT__div_in2 
                                                                                >> 0x20U)), vlSelf->__Vtask_dpi_idiv__3__quotient, vlSelf->__Vtask_dpi_idiv__3__remainder);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__3__quotient;
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__3__remainder;
    vlSelf->__PVT__mul_result_tmp = ((0xffffffff00000000ULL 
                                      & vlSelf->__PVT__mul_result_tmp) 
                                     | (IData)((IData)(
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                             >> 0x11U)))
                                                         ? vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth
                                                         : vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl))));
    vlSelf->__PVT__mul_result_tmp = ((0xffffffffULL 
                                      & vlSelf->__PVT__mul_result_tmp) 
                                     | ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                              >> 0x11U)))
                                                          ? vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth
                                                          : vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl))) 
                                        << 0x20U));
    vlSelf->__PVT__div_result_in = (((QData)((IData)(
                                                     ((0x40000U 
                                                       & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                                       ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                       : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                                                   ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient))));
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__pi27* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_hfec4d022__0;
    VlWide<4>/*127:0*/ __Vtemp_h525eaa08__0;
    VlWide<4>/*127:0*/ __Vtemp_h0cfce02c__0;
    // Body
    vlSelf->__Vcellinp__rsp_buf__valid_in = ((2U & 
                                              (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 0xfU)) 
                                             | (1U 
                                                & (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                   >> 0x10U)));
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = (((IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x11U) | vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U]);
    vlSelf->__PVT__div_in1 = ((0xffffffff00000000ULL 
                               & vlSelf->__PVT__div_in1) 
                              | (IData)((IData)(((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                  << 0x1dU) 
                                                 | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                    >> 3U)))));
    vlSelf->__PVT__div_in2 = ((0xffffffff00000000ULL 
                               & vlSelf->__PVT__div_in2) 
                              | (IData)((IData)(((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                  << 0x1dU) 
                                                 | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                    >> 3U)))));
    vlSelf->__PVT__div_in1 = ((0xffffffffULL & vlSelf->__PVT__div_in1) 
                              | ((QData)((IData)(((
                                                   vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                   << 0x1dU) 
                                                  | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                     >> 3U)))) 
                                 << 0x20U));
    vlSelf->__PVT__div_in2 = ((0xffffffffULL & vlSelf->__PVT__div_in2) 
                              | ((QData)((IData)(((
                                                   vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                   << 0x1dU) 
                                                  | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                     >> 3U)))) 
                                 << 0x20U));
    __Vtemp_hfec4d022__0[0U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vtemp_hfec4d022__0[1U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vtemp_hfec4d022__0[2U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vtemp_hfec4d022__0[3U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U]));
    __Vtemp_hfec4d022__0[4U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                              << 0x10U));
    __Vtemp_hfec4d022__0[5U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                              << 0x10U));
    __Vtemp_hfec4d022__0[6U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                              << 0x10U));
    if ((0xdfU >= (0xffU & ((IData)(0x70U) * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))) {
        __Vtemp_h525eaa08__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(1U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       (7U & (((IData)(0x70U) 
                                               * (1U 
                                                  & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(2U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(1U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(2U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(4U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(3U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
    } else {
        __Vtemp_h525eaa08__0[0U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[0U];
        __Vtemp_h525eaa08__0[1U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[1U];
        __Vtemp_h525eaa08__0[2U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[2U];
        __Vtemp_h525eaa08__0[3U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[3U];
    }
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = __Vtemp_h525eaa08__0[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = __Vtemp_h525eaa08__0[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = __Vtemp_h525eaa08__0[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))) 
            << 0x11U) | ((0x10000U & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                      << 0x10U)) | 
                         (0xffffU & __Vtemp_h525eaa08__0[3U])));
    __Vtemp_h0cfce02c__0[3U] = (((IData)(((0x1fffffffff80ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                               << 0x1dU) 
                                              | (0x1fffffffffffff80ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            ((0x40U 
                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                 << 3U)) 
                                                             | (0x3fU 
                                                                & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                   >> 4U))))))) 
                                 >> 0x1dU) | ((IData)(
                                                      (((0x1fffffffff80ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                                             << 0x1dU) 
                                                            | (0x1fffffffffffff80ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                                  >> 3U)))) 
                                                        | (QData)((IData)(
                                                                          ((0x40U 
                                                                            & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                               << 3U)) 
                                                                           | (0x3fU 
                                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                                >> 4U)))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_commit_if.__PVT__data[0U] 
        = (((IData)((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U])))) 
            << 3U) | (7U & vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U]));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_commit_if.__PVT__data[1U] 
        = (((IData)((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U]))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_commit_if.__PVT__data[2U] 
        = (((IData)(((0x1fffffffff80ULL & (((QData)((IData)(
                                                            vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                            << 0x1dU) 
                                           | (0x1fffffffffffff80ULL 
                                              & ((QData)((IData)(
                                                                 vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                 >> 3U)))) 
                     | (QData)((IData)(((0x40U & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                  << 3U)) 
                                        | (0x3fU & 
                                           (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                            >> 4U))))))) 
            << 3U) | ((IData)(((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U]))) 
                               >> 0x20U)) >> 0x1dU));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_commit_if.__PVT__data[3U] 
        = __Vtemp_h0cfce02c__0[3U];
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__pi27* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_unit__1\n"); );
    // Body
    vlSelf->__PVT__mul_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (~ (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                         >> 0x13U)));
    vlSelf->__PVT__div_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__1__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                      >> 0x13U));
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                    >> 0x11U) & (~ ((IData)(vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT____Vcellout__genblk1__BRA__1__KET____DOT__rsp_arb__ready_in) 
                                    >> 1U))));
    vlSelf->__Vcellout__rsp_buf__ready_in = ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall))))) 
                                             & ((2U 
                                                 & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))));
    vlSelf->__PVT__mul_ready_in = (1U & ((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                         | (~ (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 0x10U))));
    vlSelf->__PVT__div_ready_in = (1U & (((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                          >> 1U) | 
                                         (~ (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             >> 0x10U))));
    vlSelf->__PVT__mul_fire_in = ((IData)(vlSelf->__PVT__mul_valid_in) 
                                  & (IData)(vlSelf->__PVT__mul_ready_in));
    vlSelf->__PVT__div_fire_in = ((IData)(vlSelf->__PVT__div_valid_in) 
                                  & (IData)(vlSelf->__PVT__div_ready_in));
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__4__resultl, vlSelf->__Vtask_dpi_imul__4__resulth);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__4__resultl;
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__4__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__5__resultl, vlSelf->__Vtask_dpi_imul__5__resulth);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__5__resultl;
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__5__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), (IData)(vlSelf->__PVT__div_in1), (IData)(vlSelf->__PVT__div_in2), vlSelf->__Vtask_dpi_idiv__6__quotient, vlSelf->__Vtask_dpi_idiv__6__remainder);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__6__quotient;
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__6__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), (IData)(
                                                                                (vlSelf->__PVT__div_in1 
                                                                                >> 0x20U)), (IData)(
                                                                                (vlSelf->__PVT__div_in2 
                                                                                >> 0x20U)), vlSelf->__Vtask_dpi_idiv__7__quotient, vlSelf->__Vtask_dpi_idiv__7__remainder);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__7__quotient;
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__7__remainder;
    vlSelf->__PVT__mul_result_tmp = ((0xffffffff00000000ULL 
                                      & vlSelf->__PVT__mul_result_tmp) 
                                     | (IData)((IData)(
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                             >> 0x11U)))
                                                         ? vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth
                                                         : vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl))));
    vlSelf->__PVT__mul_result_tmp = ((0xffffffffULL 
                                      & vlSelf->__PVT__mul_result_tmp) 
                                     | ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                              >> 0x11U)))
                                                          ? vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth
                                                          : vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl))) 
                                        << 0x20U));
    vlSelf->__PVT__div_result_in = (((QData)((IData)(
                                                     ((0x40000U 
                                                       & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                                       ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                       : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                                                   ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient))));
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__pi27* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_hfec4d022__0;
    VlWide<4>/*127:0*/ __Vtemp_h525eaa08__0;
    VlWide<4>/*127:0*/ __Vtemp_h0cfce02c__0;
    // Body
    vlSelf->__Vcellinp__rsp_buf__valid_in = ((2U & 
                                              (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 0xfU)) 
                                             | (1U 
                                                & (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                   >> 0x10U)));
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = (((IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x11U) | vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U]);
    vlSelf->__PVT__div_in1 = ((0xffffffff00000000ULL 
                               & vlSelf->__PVT__div_in1) 
                              | (IData)((IData)(((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                  << 0x1dU) 
                                                 | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                    >> 3U)))));
    vlSelf->__PVT__div_in2 = ((0xffffffff00000000ULL 
                               & vlSelf->__PVT__div_in2) 
                              | (IData)((IData)(((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                  << 0x1dU) 
                                                 | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                    >> 3U)))));
    vlSelf->__PVT__div_in1 = ((0xffffffffULL & vlSelf->__PVT__div_in1) 
                              | ((QData)((IData)(((
                                                   vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                   << 0x1dU) 
                                                  | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                     >> 3U)))) 
                                 << 0x20U));
    vlSelf->__PVT__div_in2 = ((0xffffffffULL & vlSelf->__PVT__div_in2) 
                              | ((QData)((IData)(((
                                                   vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                   << 0x1dU) 
                                                  | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                     >> 3U)))) 
                                 << 0x20U));
    __Vtemp_hfec4d022__0[0U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vtemp_hfec4d022__0[1U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vtemp_hfec4d022__0[2U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vtemp_hfec4d022__0[3U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U]));
    __Vtemp_hfec4d022__0[4U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                              << 0x10U));
    __Vtemp_hfec4d022__0[5U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                              << 0x10U));
    __Vtemp_hfec4d022__0[6U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                              << 0x10U));
    if ((0xdfU >= (0xffU & ((IData)(0x70U) * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))) {
        __Vtemp_h525eaa08__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(1U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       (7U & (((IData)(0x70U) 
                                               * (1U 
                                                  & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(2U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(1U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(2U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(4U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(3U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
    } else {
        __Vtemp_h525eaa08__0[0U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[0U];
        __Vtemp_h525eaa08__0[1U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[1U];
        __Vtemp_h525eaa08__0[2U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[2U];
        __Vtemp_h525eaa08__0[3U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[3U];
    }
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = __Vtemp_h525eaa08__0[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = __Vtemp_h525eaa08__0[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = __Vtemp_h525eaa08__0[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))) 
            << 0x11U) | ((0x10000U & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                      << 0x10U)) | 
                         (0xffffU & __Vtemp_h525eaa08__0[3U])));
    __Vtemp_h0cfce02c__0[3U] = (((IData)(((0x1fffffffff80ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                               << 0x1dU) 
                                              | (0x1fffffffffffff80ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            ((0x40U 
                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                 << 3U)) 
                                                             | (0x3fU 
                                                                & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                   >> 4U))))))) 
                                 >> 0x1dU) | ((IData)(
                                                      (((0x1fffffffff80ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                                             << 0x1dU) 
                                                            | (0x1fffffffffffff80ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                                  >> 3U)))) 
                                                        | (QData)((IData)(
                                                                          ((0x40U 
                                                                            & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                               << 3U)) 
                                                                           | (0x3fU 
                                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                                >> 4U)))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_commit_if.__PVT__data[0U] 
        = (((IData)((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U])))) 
            << 3U) | (7U & vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U]));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_commit_if.__PVT__data[1U] 
        = (((IData)((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U]))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_commit_if.__PVT__data[2U] 
        = (((IData)(((0x1fffffffff80ULL & (((QData)((IData)(
                                                            vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                            << 0x1dU) 
                                           | (0x1fffffffffffff80ULL 
                                              & ((QData)((IData)(
                                                                 vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                 >> 3U)))) 
                     | (QData)((IData)(((0x40U & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                  << 3U)) 
                                        | (0x3fU & 
                                           (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                            >> 4U))))))) 
            << 3U) | ((IData)(((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U]))) 
                               >> 0x20U)) >> 0x1dU));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_commit_if.__PVT__data[3U] 
        = __Vtemp_h0cfce02c__0[3U];
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__pi27* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_unit__1\n"); );
    // Body
    vlSelf->__PVT__mul_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (~ (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                         >> 0x13U)));
    vlSelf->__PVT__div_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__2__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                      >> 0x13U));
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                    >> 0x11U) & (~ ((IData)(vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT____Vcellout__genblk1__BRA__2__KET____DOT__rsp_arb__ready_in) 
                                    >> 1U))));
    vlSelf->__Vcellout__rsp_buf__ready_in = ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall))))) 
                                             & ((2U 
                                                 & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))));
    vlSelf->__PVT__mul_ready_in = (1U & ((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                         | (~ (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 0x10U))));
    vlSelf->__PVT__div_ready_in = (1U & (((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                          >> 1U) | 
                                         (~ (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             >> 0x10U))));
    vlSelf->__PVT__mul_fire_in = ((IData)(vlSelf->__PVT__mul_valid_in) 
                                  & (IData)(vlSelf->__PVT__mul_ready_in));
    vlSelf->__PVT__div_fire_in = ((IData)(vlSelf->__PVT__div_valid_in) 
                                  & (IData)(vlSelf->__PVT__div_ready_in));
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__8__resultl, vlSelf->__Vtask_dpi_imul__8__resulth);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__8__resultl;
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__8__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__9__resultl, vlSelf->__Vtask_dpi_imul__9__resulth);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__9__resultl;
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__9__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), (IData)(vlSelf->__PVT__div_in1), (IData)(vlSelf->__PVT__div_in2), vlSelf->__Vtask_dpi_idiv__10__quotient, vlSelf->__Vtask_dpi_idiv__10__remainder);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__10__quotient;
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__10__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), (IData)(
                                                                                (vlSelf->__PVT__div_in1 
                                                                                >> 0x20U)), (IData)(
                                                                                (vlSelf->__PVT__div_in2 
                                                                                >> 0x20U)), vlSelf->__Vtask_dpi_idiv__11__quotient, vlSelf->__Vtask_dpi_idiv__11__remainder);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__11__quotient;
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__11__remainder;
    vlSelf->__PVT__mul_result_tmp = ((0xffffffff00000000ULL 
                                      & vlSelf->__PVT__mul_result_tmp) 
                                     | (IData)((IData)(
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                             >> 0x11U)))
                                                         ? vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth
                                                         : vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl))));
    vlSelf->__PVT__mul_result_tmp = ((0xffffffffULL 
                                      & vlSelf->__PVT__mul_result_tmp) 
                                     | ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                              >> 0x11U)))
                                                          ? vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth
                                                          : vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl))) 
                                        << 0x20U));
    vlSelf->__PVT__div_result_in = (((QData)((IData)(
                                                     ((0x40000U 
                                                       & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                                       ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                       : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                                                   ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient))));
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__pi27* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_hfec4d022__0;
    VlWide<4>/*127:0*/ __Vtemp_h525eaa08__0;
    VlWide<4>/*127:0*/ __Vtemp_h0cfce02c__0;
    // Body
    vlSelf->__Vcellinp__rsp_buf__valid_in = ((2U & 
                                              (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 0xfU)) 
                                             | (1U 
                                                & (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                                   >> 0x10U)));
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
        = (((IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0x11U) | vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[3U]);
    vlSelf->__PVT__div_in1 = ((0xffffffff00000000ULL 
                               & vlSelf->__PVT__div_in1) 
                              | (IData)((IData)(((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                  << 0x1dU) 
                                                 | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                    >> 3U)))));
    vlSelf->__PVT__div_in2 = ((0xffffffff00000000ULL 
                               & vlSelf->__PVT__div_in2) 
                              | (IData)((IData)(((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                  << 0x1dU) 
                                                 | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                    >> 3U)))));
    vlSelf->__PVT__div_in1 = ((0xffffffffULL & vlSelf->__PVT__div_in1) 
                              | ((QData)((IData)(((
                                                   vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                   << 0x1dU) 
                                                  | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                     >> 3U)))) 
                                 << 0x20U));
    vlSelf->__PVT__div_in2 = ((0xffffffffULL & vlSelf->__PVT__div_in2) 
                              | ((QData)((IData)(((
                                                   vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                   << 0x1dU) 
                                                  | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                     >> 3U)))) 
                                 << 0x20U));
    __Vtemp_hfec4d022__0[0U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vtemp_hfec4d022__0[1U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vtemp_hfec4d022__0[2U] = vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vtemp_hfec4d022__0[3U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U]));
    __Vtemp_hfec4d022__0[4U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[0U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                              << 0x10U));
    __Vtemp_hfec4d022__0[5U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[1U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                              << 0x10U));
    __Vtemp_hfec4d022__0[6U] = ((vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[2U] 
                                 >> 0x10U) | (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                              << 0x10U));
    if ((0xdfU >= (0xffU & ((IData)(0x70U) * (1U & 
                                              (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))) {
        __Vtemp_h525eaa08__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(1U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       (7U & (((IData)(0x70U) 
                                               * (1U 
                                                  & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                              >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(2U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(1U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(3U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(2U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
        __Vtemp_h525eaa08__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(0x70U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))))))
                                      ? 0U : (__Vtemp_hfec4d022__0[
                                              ((IData)(4U) 
                                               + (7U 
                                                  & (((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x70U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))))) 
                                    | (__Vtemp_hfec4d022__0[
                                       ((IData)(3U) 
                                        + (7U & (((IData)(0x70U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))) 
                                                 >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x70U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)))))));
    } else {
        __Vtemp_h525eaa08__0[0U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[0U];
        __Vtemp_h525eaa08__0[1U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[1U];
        __Vtemp_h525eaa08__0[2U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[2U];
        __Vtemp_h525eaa08__0[3U] = vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[3U];
    }
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
        = __Vtemp_h525eaa08__0[0U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
        = __Vtemp_h525eaa08__0[1U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = __Vtemp_h525eaa08__0[2U];
    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[3U] 
        = (((IData)((0U != (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))) 
            << 0x11U) | ((0x10000U & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                      << 0x10U)) | 
                         (0xffffU & __Vtemp_h525eaa08__0[3U])));
    __Vtemp_h0cfce02c__0[3U] = (((IData)(((0x1fffffffff80ULL 
                                           & (((QData)((IData)(
                                                               vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                               << 0x1dU) 
                                              | (0x1fffffffffffff80ULL 
                                                 & ((QData)((IData)(
                                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                    >> 3U)))) 
                                          | (QData)((IData)(
                                                            ((0x40U 
                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                 << 3U)) 
                                                             | (0x3fU 
                                                                & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                   >> 4U))))))) 
                                 >> 0x1dU) | ((IData)(
                                                      (((0x1fffffffff80ULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                                             << 0x1dU) 
                                                            | (0x1fffffffffffff80ULL 
                                                               & ((QData)((IData)(
                                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                                  >> 3U)))) 
                                                        | (QData)((IData)(
                                                                          ((0x40U 
                                                                            & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                               << 3U)) 
                                                                           | (0x3fU 
                                                                              & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                                >> 4U)))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_commit_if.__PVT__data[0U] 
        = (((IData)((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U])))) 
            << 3U) | (7U & vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U]));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_commit_if.__PVT__data[1U] 
        = (((IData)((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U]))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_commit_if.__PVT__data[2U] 
        = (((IData)(((0x1fffffffff80ULL & (((QData)((IData)(
                                                            vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U])) 
                                            << 0x1dU) 
                                           | (0x1fffffffffffff80ULL 
                                              & ((QData)((IData)(
                                                                 vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U])) 
                                                 >> 3U)))) 
                     | (QData)((IData)(((0x40U & (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                  << 3U)) 
                                        | (0x3fU & 
                                           (vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                            >> 4U))))))) 
            << 3U) | ((IData)(((((QData)((IData)(vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U]))) 
                               >> 0x20U)) >> 0x1dU));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_commit_if.__PVT__data[3U] 
        = __Vtemp_h0cfce02c__0[3U];
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__1(VVortex_VX_muldiv_unit__pi27* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__pi27___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_unit__1\n"); );
    // Body
    vlSelf->__PVT__mul_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (~ (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                         >> 0x13U)));
    vlSelf->__PVT__div_valid_in = ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__3__KET____DOT__mdv_execute_if.__PVT__valid) 
                                   & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                      >> 0x13U));
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                    >> 0x11U) & (~ ((IData)(vlSymsp->TOP__Vortex.genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT____Vcellout__genblk1__BRA__3__KET____DOT__rsp_arb__ready_in) 
                                    >> 1U))));
    vlSelf->__Vcellout__rsp_buf__ready_in = ((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall))))) 
                                             & ((2U 
                                                 & ((~ (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(vlSelf->__Vcellinp__rsp_buf__valid_in))));
    vlSelf->__PVT__mul_ready_in = (1U & ((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                         | (~ (vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                               >> 0x10U))));
    vlSelf->__PVT__div_ready_in = (1U & (((IData)(vlSelf->__Vcellout__rsp_buf__ready_in) 
                                          >> 1U) | 
                                         (~ (vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries[3U] 
                                             >> 0x10U))));
    vlSelf->__PVT__mul_fire_in = ((IData)(vlSelf->__PVT__mul_valid_in) 
                                  & (IData)(vlSelf->__PVT__mul_ready_in));
    vlSelf->__PVT__div_fire_in = ((IData)(vlSelf->__PVT__div_valid_in) 
                                  & (IData)(vlSelf->__PVT__div_ready_in));
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__12__resultl, vlSelf->__Vtask_dpi_imul__12__resulth);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__12__resultl;
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__12__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_imul_TOP____024unit(vlSelf->__PVT__mul_fire_in, 
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                >> 3U)), 
                                                            ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                              << 0x1dU) 
                                                             | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                >> 3U)), vlSelf->__Vtask_dpi_imul__13__resultl, vlSelf->__Vtask_dpi_imul__13__resulth);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl 
        = vlSelf->__Vtask_dpi_imul__13__resultl;
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth 
        = vlSelf->__Vtask_dpi_imul__13__resulth;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), (IData)(vlSelf->__PVT__div_in1), (IData)(vlSelf->__PVT__div_in2), vlSelf->__Vtask_dpi_idiv__14__quotient, vlSelf->__Vtask_dpi_idiv__14__remainder);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__14__quotient;
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__14__remainder;
    VVortex___024unit____Vdpiimwrap_dpi_idiv_TOP____024unit(vlSelf->__PVT__div_fire_in, 
                                                            (1U 
                                                             & (~ 
                                                                (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                                 >> 0x11U))), (IData)(
                                                                                (vlSelf->__PVT__div_in1 
                                                                                >> 0x20U)), (IData)(
                                                                                (vlSelf->__PVT__div_in2 
                                                                                >> 0x20U)), vlSelf->__Vtask_dpi_idiv__15__quotient, vlSelf->__Vtask_dpi_idiv__15__remainder);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient 
        = vlSelf->__Vtask_dpi_idiv__15__quotient;
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder 
        = vlSelf->__Vtask_dpi_idiv__15__remainder;
    vlSelf->__PVT__mul_result_tmp = ((0xffffffff00000000ULL 
                                      & vlSelf->__PVT__mul_result_tmp) 
                                     | (IData)((IData)(
                                                       ((0U 
                                                         != 
                                                         (3U 
                                                          & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                             >> 0x11U)))
                                                         ? vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth
                                                         : vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl))));
    vlSelf->__PVT__mul_result_tmp = ((0xffffffffULL 
                                      & vlSelf->__PVT__mul_result_tmp) 
                                     | ((QData)((IData)(
                                                        ((0U 
                                                          != 
                                                          (3U 
                                                           & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                                              >> 0x11U)))
                                                          ? vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth
                                                          : vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl))) 
                                        << 0x20U));
    vlSelf->__PVT__div_result_in = (((QData)((IData)(
                                                     ((0x40000U 
                                                       & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                                       ? vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder
                                                       : vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0x40000U 
                                                                   & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])
                                                                   ? vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder
                                                                   : vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient))));
}
