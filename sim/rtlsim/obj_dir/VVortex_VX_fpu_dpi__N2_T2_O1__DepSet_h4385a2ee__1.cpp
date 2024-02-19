// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_fpu_dpi__N2_T2_O1.h"
#include "VVortex__Syms.h"

void VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, IData/*31:0*/ src_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ c, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ &result);
void VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, QData/*63:0*/ &result);
void VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, QData/*63:0*/ b, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);
void VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(CData/*0:0*/ enable, IData/*31:0*/ dst_fmt, QData/*63:0*/ a, CData/*2:0*/ frm, QData/*63:0*/ &result, CData/*4:0*/ &fflags);

VL_INLINE_OPT void VVortex_VX_fpu_dpi__N2_T2_O1___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_dpi__1(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_fpu_dpi__N2_T2_O1___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_dpi__1\n"); );
    // Body
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0xaU) | vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U]);
    vlSelf->__PVT__fdiv__DOT__fdiv_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_valid) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__core_select))) 
                                            & (IData)(vlSelf->__PVT__is_div));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_valid) 
                                               & (1U 
                                                  == (IData)(vlSelf->__PVT__core_select))) 
                                              & (~ (IData)(vlSelf->__PVT__is_div)));
    vlSelf->__PVT__fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_valid) 
                                            & (2U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__fma__DOT__fma_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_valid) 
                                          & (0U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_valid) 
                                            & (3U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                    >> 0xaU) & (~ ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__gather_unit__DOT__commit_in_ready) 
                                   >> 1U))));
    vlSelf->__PVT__per_core_ready_out = ((8U & (IData)(vlSelf->__PVT__per_core_ready_out)) 
                                         | ((4U & (
                                                   ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall)) 
                                                    << 2U) 
                                                   & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r))) 
                                            | (3U & 
                                               ((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall))))) 
                                                & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r)))));
    vlSelf->__PVT__per_core_ready_out = ((7U & (IData)(vlSelf->__PVT__per_core_ready_out)) 
                                         | (((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall)) 
                                             & ((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r) 
                                                >> 3U)) 
                                            << 3U));
    vlSelf->__PVT__fcvt__DOT__fcvt_ready = (1U & (((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                   >> 2U) 
                                                  | (~ 
                                                     ((IData)(vlSelf->__PVT__per_core_valid_out) 
                                                      >> 2U))));
    vlSelf->__PVT__fma__DOT__fma_ready = (1U & ((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                | (~ (IData)(vlSelf->__PVT__per_core_valid_out))));
    vlSelf->__PVT__fncp__DOT__fncp_ready = (1U & (((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                   >> 3U) 
                                                  | (~ 
                                                     ((IData)(vlSelf->__PVT__per_core_valid_out) 
                                                      >> 3U))));
    vlSelf->__Vcellout__div_sqrt_arb__ready_in = ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                                 >> 1U)))) 
                                                  & (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r));
    vlSelf->__PVT__fcvt__DOT__fcvt_fire = ((IData)(vlSelf->__PVT__fcvt__DOT__fcvt_valid) 
                                           & (IData)(vlSelf->__PVT__fcvt__DOT__fcvt_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xbU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | ((IData)(vlSelf->__PVT__fcvt__DOT__fcvt_ready) 
                                           << 2U));
    vlSelf->__PVT__fma__DOT__fma_fire = ((IData)(vlSelf->__PVT__fma__DOT__fma_valid) 
                                         & (IData)(vlSelf->__PVT__fma__DOT__fma_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xeU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | (IData)(vlSelf->__PVT__fma__DOT__fma_ready));
    vlSelf->__PVT__fncp__DOT__fncp_fire = ((IData)(vlSelf->__PVT__fncp__DOT__fncp_valid) 
                                           & (IData)(vlSelf->__PVT__fncp__DOT__fncp_ready));
    vlSelf->__PVT__per_core_ready_in = ((7U & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | ((IData)(vlSelf->__PVT__fncp__DOT__fncp_ready) 
                                           << 3U));
    vlSelf->__PVT__fdiv__DOT__fdiv_ready = (1U & ((IData)(vlSelf->__Vcellout__div_sqrt_arb__ready_in) 
                                                  | (~ 
                                                     (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                      >> 7U))));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_ready = (1U & 
                                              (((IData)(vlSelf->__Vcellout__div_sqrt_arb__ready_in) 
                                                >> 1U) 
                                               | (~ 
                                                  (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                   >> 7U))));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[0U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__32__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2e9bfe6a__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_itof)) 
                                             | (IData)(vlSelf->__Vlvbound_h2e9bfe6a__0));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[0U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__33__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h4bd064b9__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_utof)) 
                                             | (IData)(vlSelf->__Vlvbound_h4bd064b9__0));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[0U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h29370721__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftoi)) 
                                             | (IData)(vlSelf->__Vlvbound_h29370721__0));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[0U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__35__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2849bae9__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftou)) 
                                             | (IData)(vlSelf->__Vlvbound_h2849bae9__0));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[0U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__36__result 
                                                        >> 0x20U));
    vlSelf->__PVT__fcvt__DOT__result_fcvt = ((0xffffffff00000000ULL 
                                              & vlSelf->__PVT__fcvt__DOT__result_fcvt) 
                                             | (IData)((IData)(
                                                               ((IData)(vlSelf->__PVT__is_itof)
                                                                 ? 
                                                                vlSelf->__PVT__fcvt__DOT__result_itof[0U]
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__is_utof)
                                                                  ? 
                                                                 vlSelf->__PVT__fcvt__DOT__result_utof[0U]
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__is_ftoi)
                                                                   ? 
                                                                  vlSelf->__PVT__fcvt__DOT__result_ftoi[0U]
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__is_ftou)
                                                                    ? 
                                                                   vlSelf->__PVT__fcvt__DOT__result_ftou[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__is_f2f)
                                                                     ? 
                                                                    vlSelf->__PVT__fcvt__DOT__result_f2f[0U]
                                                                     : 0U))))))));
    vlSelf->__Vlvbound_h602015d0__0 = (0x1fU & ((IData)(vlSelf->__PVT__is_itof)
                                                 ? (IData)(vlSelf->__PVT__fcvt__DOT__fflags_itof)
                                                 : 
                                                ((IData)(vlSelf->__PVT__is_utof)
                                                  ? (IData)(vlSelf->__PVT__fcvt__DOT__fflags_utof)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__is_ftoi)
                                                   ? (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftoi)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__is_ftou)
                                                    ? (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftou)
                                                    : 0U)))));
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt)) 
                                             | (IData)(vlSelf->__Vlvbound_h602015d0__0));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__32__result, vlSelf->__Vtask_dpi_itof__32__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[2U] = (IData)(vlSelf->__Vtask_dpi_itof__32__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__32__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2e9bfe6a__0 = vlSelf->__Vtask_dpi_itof__32__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_itof)) 
                                             | ((IData)(vlSelf->__Vlvbound_h2e9bfe6a__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__33__result, vlSelf->__Vtask_dpi_utof__33__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[2U] = (IData)(vlSelf->__Vtask_dpi_utof__33__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__33__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h4bd064b9__0 = vlSelf->__Vtask_dpi_utof__33__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_utof)) 
                                             | ((IData)(vlSelf->__Vlvbound_h4bd064b9__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__34__result, vlSelf->__Vtask_dpi_ftoi__34__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[2U] = (IData)(vlSelf->__Vtask_dpi_ftoi__34__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__34__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h29370721__0 = vlSelf->__Vtask_dpi_ftoi__34__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftoi)) 
                                             | ((IData)(vlSelf->__Vlvbound_h29370721__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__35__result, vlSelf->__Vtask_dpi_ftou__35__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[2U] = (IData)(vlSelf->__Vtask_dpi_ftou__35__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__35__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2849bae9__0 = vlSelf->__Vtask_dpi_ftou__35__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftou)) 
                                             | ((IData)(vlSelf->__Vlvbound_h2849bae9__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__Vlvbound_h602015d0__0 = (0x1fU & ((IData)(vlSelf->__PVT__is_itof)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_itof) 
                                                 >> 5U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__is_utof)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_utof) 
                                                  >> 5U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__is_ftoi)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftoi) 
                                                   >> 5U)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__is_ftou)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftou) 
                                                    >> 5U)
                                                    : 0U)))));
    vlSelf->__PVT__fcvt__DOT__result_f2f[2U] = (IData)(vlSelf->__Vtask_dpi_f2f__36__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__36__result 
                                                        >> 0x20U));
    vlSelf->__PVT__fcvt__DOT__result_fcvt = ((0xffffffffULL 
                                              & vlSelf->__PVT__fcvt__DOT__result_fcvt) 
                                             | ((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__is_itof)
                                                                  ? 
                                                                 vlSelf->__PVT__fcvt__DOT__result_itof[2U]
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__is_utof)
                                                                   ? 
                                                                  vlSelf->__PVT__fcvt__DOT__result_utof[2U]
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__is_ftoi)
                                                                    ? 
                                                                   vlSelf->__PVT__fcvt__DOT__result_ftoi[2U]
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__is_ftou)
                                                                     ? 
                                                                    vlSelf->__PVT__fcvt__DOT__result_ftou[2U]
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__is_f2f)
                                                                      ? 
                                                                     vlSelf->__PVT__fcvt__DOT__result_f2f[2U]
                                                                      : 0U))))))) 
                                                << 0x20U));
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt)) 
                                             | ((IData)(vlSelf->__Vlvbound_h602015d0__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[0U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__fma__DOT__result_fadd[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__23__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hd0358701__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fadd)) 
                                            | (IData)(vlSelf->__Vlvbound_hd0358701__0));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[0U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__fma__DOT__result_fsub[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__24__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h3e5a0693__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fsub)) 
                                            | (IData)(vlSelf->__Vlvbound_h3e5a0693__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[0U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__fma__DOT__result_fmul[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__25__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hbdab4cf9__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmul)) 
                                            | (IData)(vlSelf->__Vlvbound_hbdab4cf9__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h57c9cc29__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmadd)) 
                                             | (IData)(vlSelf->__Vlvbound_h57c9cc29__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6d7b0f8b__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmsub)) 
                                             | (IData)(vlSelf->__Vlvbound_h6d7b0f8b__0));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hf5e73f0f__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0x3e0U 
                                               & (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmadd)) 
                                              | (IData)(vlSelf->__Vlvbound_hf5e73f0f__0));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h33426f81__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0x3e0U 
                                               & (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmsub)) 
                                              | (IData)(vlSelf->__Vlvbound_h33426f81__0));
    vlSelf->__PVT__fma__DOT__result_fma = ((0xffffffff00000000ULL 
                                            & vlSelf->__PVT__fma__DOT__result_fma) 
                                           | (IData)((IData)(
                                                             ((IData)(vlSelf->__PVT__is_fadd)
                                                               ? 
                                                              vlSelf->__PVT__fma__DOT__result_fadd[0U]
                                                               : 
                                                              ((IData)(vlSelf->__PVT__is_fsub)
                                                                ? 
                                                               vlSelf->__PVT__fma__DOT__result_fsub[0U]
                                                                : 
                                                               ((IData)(vlSelf->__PVT__is_fmul)
                                                                 ? 
                                                                vlSelf->__PVT__fma__DOT__result_fmul[0U]
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__is_fmadd)
                                                                  ? 
                                                                 vlSelf->__PVT__fma__DOT__result_fmadd[0U]
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__is_fmsub)
                                                                   ? 
                                                                  vlSelf->__PVT__fma__DOT__result_fmsub[0U]
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__is_fnmadd)
                                                                    ? 
                                                                   vlSelf->__PVT__fma__DOT__result_fnmadd[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__is_fnmsub)
                                                                     ? 
                                                                    vlSelf->__PVT__fma__DOT__result_fnmsub[0U]
                                                                     : 0U))))))))));
    vlSelf->__Vlvbound_h52a87fc1__0 = (0x1fU & ((IData)(vlSelf->__PVT__is_fadd)
                                                 ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fadd)
                                                 : 
                                                ((IData)(vlSelf->__PVT__is_fsub)
                                                  ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fsub)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__is_fmul)
                                                   ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fmul)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__is_fmadd)
                                                    ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fmadd)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__is_fmsub)
                                                     ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fmsub)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__is_fnmadd)
                                                      ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmadd)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__is_fnmsub)
                                                       ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmsub)
                                                       : 0U))))))));
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0x3e0U 
                                            & (IData)(vlSelf->__PVT__fma__DOT__fflags_fma)) 
                                           | (IData)(vlSelf->__Vlvbound_h52a87fc1__0));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__23__result, vlSelf->__Vtask_dpi_fadd__23__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[2U] = (IData)(vlSelf->__Vtask_dpi_fadd__23__result);
    vlSelf->__PVT__fma__DOT__result_fadd[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__23__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hd0358701__0 = vlSelf->__Vtask_dpi_fadd__23__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fadd)) 
                                            | ((IData)(vlSelf->__Vlvbound_hd0358701__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__24__result, vlSelf->__Vtask_dpi_fsub__24__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[2U] = (IData)(vlSelf->__Vtask_dpi_fsub__24__result);
    vlSelf->__PVT__fma__DOT__result_fsub[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__24__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h3e5a0693__0 = vlSelf->__Vtask_dpi_fsub__24__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fsub)) 
                                            | ((IData)(vlSelf->__Vlvbound_h3e5a0693__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__25__result, vlSelf->__Vtask_dpi_fmul__25__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[2U] = (IData)(vlSelf->__Vtask_dpi_fmul__25__result);
    vlSelf->__PVT__fma__DOT__result_fmul[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__25__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hbdab4cf9__0 = vlSelf->__Vtask_dpi_fmul__25__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmul)) 
                                            | ((IData)(vlSelf->__Vlvbound_hbdab4cf9__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__26__result, vlSelf->__Vtask_dpi_fmadd__26__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fmadd__26__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__26__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h57c9cc29__0 = vlSelf->__Vtask_dpi_fmadd__26__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmadd)) 
                                             | ((IData)(vlSelf->__Vlvbound_h57c9cc29__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__27__result, vlSelf->__Vtask_dpi_fmsub__27__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fmsub__27__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__27__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6d7b0f8b__0 = vlSelf->__Vtask_dpi_fmsub__27__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmsub)) 
                                             | ((IData)(vlSelf->__Vlvbound_h6d7b0f8b__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__28__result, vlSelf->__Vtask_dpi_fnmadd__28__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__28__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__28__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hf5e73f0f__0 = vlSelf->__Vtask_dpi_fnmadd__28__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0x1fU 
                                               & (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmadd)) 
                                              | ((IData)(vlSelf->__Vlvbound_hf5e73f0f__0) 
                                                 << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__29__result, vlSelf->__Vtask_dpi_fnmsub__29__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__29__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__29__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h33426f81__0 = vlSelf->__Vtask_dpi_fnmsub__29__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0x1fU 
                                               & (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmsub)) 
                                              | ((IData)(vlSelf->__Vlvbound_h33426f81__0) 
                                                 << 5U));
    vlSelf->__Vlvbound_h52a87fc1__0 = (0x1fU & ((IData)(vlSelf->__PVT__is_fadd)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__fma__DOT__fflags_fadd) 
                                                 >> 5U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__is_fsub)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__fma__DOT__fflags_fsub) 
                                                  >> 5U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__is_fmul)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__fma__DOT__fflags_fmul) 
                                                   >> 5U)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__is_fmadd)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__fma__DOT__fflags_fmadd) 
                                                    >> 5U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__is_fmsub)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__fma__DOT__fflags_fmsub) 
                                                     >> 5U)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__is_fnmadd)
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__fma__DOT__fflags_fnmadd) 
                                                      >> 5U)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__is_fnmsub)
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__fma__DOT__fflags_fnmsub) 
                                                       >> 5U)
                                                       : 0U))))))));
    vlSelf->__PVT__fma__DOT__result_fma = ((0xffffffffULL 
                                            & vlSelf->__PVT__fma__DOT__result_fma) 
                                           | ((QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__is_fadd)
                                                                ? 
                                                               vlSelf->__PVT__fma__DOT__result_fadd[2U]
                                                                : 
                                                               ((IData)(vlSelf->__PVT__is_fsub)
                                                                 ? 
                                                                vlSelf->__PVT__fma__DOT__result_fsub[2U]
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__is_fmul)
                                                                  ? 
                                                                 vlSelf->__PVT__fma__DOT__result_fmul[2U]
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__is_fmadd)
                                                                   ? 
                                                                  vlSelf->__PVT__fma__DOT__result_fmadd[2U]
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__is_fmsub)
                                                                    ? 
                                                                   vlSelf->__PVT__fma__DOT__result_fmsub[2U]
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__is_fnmadd)
                                                                     ? 
                                                                    vlSelf->__PVT__fma__DOT__result_fnmadd[2U]
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__is_fnmsub)
                                                                      ? 
                                                                     vlSelf->__PVT__fma__DOT__result_fnmsub[2U]
                                                                      : 0U))))))))) 
                                              << 0x20U));
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0x1fU & (IData)(vlSelf->__PVT__fma__DOT__fflags_fma)) 
                                           | ((IData)(vlSelf->__Vlvbound_h52a87fc1__0) 
                                              << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[0U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__37__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[0U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__fncp__DOT__result_fle[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__38__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h211fabc7__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fle)) 
                                            | (IData)(vlSelf->__Vlvbound_h211fabc7__0));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[0U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__fncp__DOT__result_flt[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__39__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h56f728ba__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_flt)) 
                                            | (IData)(vlSelf->__Vlvbound_h56f728ba__0));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[0U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__fncp__DOT__result_feq[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__40__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h6f32243e__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_feq)) 
                                            | (IData)(vlSelf->__Vlvbound_h6f32243e__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[0U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__41__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2a86cb7b__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmin)) 
                                             | (IData)(vlSelf->__Vlvbound_h2a86cb7b__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[0U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__42__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_hbbf976b3__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmax)) 
                                             | (IData)(vlSelf->__Vlvbound_hbbf976b3__0));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[2U] = (IData)(vlSelf->__Vtask_dpi_fclss__37__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__37__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_fle__38__result, vlSelf->__Vtask_dpi_fle__38__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[2U] = (IData)(vlSelf->__Vtask_dpi_fle__38__result);
    vlSelf->__PVT__fncp__DOT__result_fle[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__38__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h211fabc7__0 = vlSelf->__Vtask_dpi_fle__38__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fle)) 
                                            | ((IData)(vlSelf->__Vlvbound_h211fabc7__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_flt__39__result, vlSelf->__Vtask_dpi_flt__39__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[2U] = (IData)(vlSelf->__Vtask_dpi_flt__39__result);
    vlSelf->__PVT__fncp__DOT__result_flt[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__39__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h56f728ba__0 = vlSelf->__Vtask_dpi_flt__39__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_flt)) 
                                            | ((IData)(vlSelf->__Vlvbound_h56f728ba__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_feq__40__result, vlSelf->__Vtask_dpi_feq__40__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[2U] = (IData)(vlSelf->__Vtask_dpi_feq__40__result);
    vlSelf->__PVT__fncp__DOT__result_feq[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__40__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h6f32243e__0 = vlSelf->__Vtask_dpi_feq__40__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_feq)) 
                                            | ((IData)(vlSelf->__Vlvbound_h6f32243e__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), vlSelf->__Vtask_dpi_fmin__41__result, vlSelf->__Vtask_dpi_fmin__41__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[2U] = (IData)(vlSelf->__Vtask_dpi_fmin__41__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__41__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2a86cb7b__0 = vlSelf->__Vtask_dpi_fmin__41__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmin)) 
                                             | ((IData)(vlSelf->__Vlvbound_h2a86cb7b__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), vlSelf->__Vtask_dpi_fmax__42__result, vlSelf->__Vtask_dpi_fmax__42__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[2U] = (IData)(vlSelf->__Vtask_dpi_fmax__42__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__42__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_hbbf976b3__0 = vlSelf->__Vtask_dpi_fmax__42__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmax)) 
                                             | ((IData)(vlSelf->__Vlvbound_hbbf976b3__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__43__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__43__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__44__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__44__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__45__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__45__result 
                                                           >> 0x20U));
    vlSelf->__PVT__fdiv__DOT__fdiv_fire = ((IData)(vlSelf->__PVT__fdiv__DOT__fdiv_valid) 
                                           & (IData)(vlSelf->__PVT__fdiv__DOT__fdiv_ready));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_fire = ((IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_valid) 
                                             & (IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xdU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | (((IData)(vlSelf->__PVT__is_div)
                                             ? (IData)(vlSelf->__PVT__fdiv__DOT__fdiv_ready)
                                             : (IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_ready)) 
                                           << 1U));
    vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged = 0U;
    vlSelf->__PVT__fma__DOT_____05Ffflags_merged = 0U;
    vlSelf->__PVT__fncp__DOT__result_fncp = vlSelf->__Vxrand_h66cc2c69__0;
    vlSelf->__PVT__fncp__DOT__fflags_fncp = vlSelf->__Vxrand_h9b57f0ef__0;
    if (((((((((0U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm)))) {
        vlSelf->__PVT__fncp__DOT__result_fncp = ((0xffffffff00000000ULL 
                                                  & vlSelf->__PVT__fncp__DOT__result_fncp) 
                                                 | (IData)((IData)(
                                                                   ((0U 
                                                                     == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__is_fcmp)
                                                                      ? 
                                                                     vlSelf->__PVT__fncp__DOT__result_fle[0U]
                                                                      : 
                                                                     vlSelf->__PVT__fncp__DOT__result_fsgnj[0U])
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__is_fcmp)
                                                                       ? 
                                                                      vlSelf->__PVT__fncp__DOT__result_flt[0U]
                                                                       : 
                                                                      vlSelf->__PVT__fncp__DOT__result_fsgnjn[0U])
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__is_fcmp)
                                                                        ? 
                                                                       vlSelf->__PVT__fncp__DOT__result_feq[0U]
                                                                        : 
                                                                       vlSelf->__PVT__fncp__DOT__result_fsgnjx[0U])
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                        ? 
                                                                       vlSelf->__PVT__fncp__DOT__result_fclss[0U]
                                                                        : 
                                                                       ((4U 
                                                                         == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                         ? 
                                                                        vlSelf->__PVT__fncp__DOT__result_fmvx[0U]
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                          ? 
                                                                         vlSelf->__PVT__fncp__DOT__result_fmvf[0U]
                                                                          : 
                                                                         ((6U 
                                                                           == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                           ? 
                                                                          vlSelf->__PVT__fncp__DOT__result_fmin[0U]
                                                                           : 
                                                                          vlSelf->__PVT__fncp__DOT__result_fmax[0U]))))))))));
        vlSelf->__PVT__fncp__DOT__result_fncp = ((0xffffffffULL 
                                                  & vlSelf->__PVT__fncp__DOT__result_fncp) 
                                                 | ((QData)((IData)(
                                                                    ((0U 
                                                                      == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__is_fcmp)
                                                                       ? 
                                                                      vlSelf->__PVT__fncp__DOT__result_fle[2U]
                                                                       : 
                                                                      vlSelf->__PVT__fncp__DOT__result_fsgnj[2U])
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__is_fcmp)
                                                                        ? 
                                                                       vlSelf->__PVT__fncp__DOT__result_flt[2U]
                                                                        : 
                                                                       vlSelf->__PVT__fncp__DOT__result_fsgnjn[2U])
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                        ? 
                                                                       ((IData)(vlSelf->__PVT__is_fcmp)
                                                                         ? 
                                                                        vlSelf->__PVT__fncp__DOT__result_feq[2U]
                                                                         : 
                                                                        vlSelf->__PVT__fncp__DOT__result_fsgnjx[2U])
                                                                        : 
                                                                       ((3U 
                                                                         == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                         ? 
                                                                        vlSelf->__PVT__fncp__DOT__result_fclss[2U]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                          ? 
                                                                         vlSelf->__PVT__fncp__DOT__result_fmvx[2U]
                                                                          : 
                                                                         ((5U 
                                                                           == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                           ? 
                                                                          vlSelf->__PVT__fncp__DOT__result_fmvf[2U]
                                                                           : 
                                                                          ((6U 
                                                                            == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))
                                                                            ? 
                                                                           vlSelf->__PVT__fncp__DOT__result_fmin[2U]
                                                                            : 
                                                                           vlSelf->__PVT__fncp__DOT__result_fmax[2U]))))))))) 
                                                    << 0x20U));
        if ((0U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) {
            vlSelf->__Vlvbound_h5881caf4__0 = (0x1fU 
                                               & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fle));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x3e0U & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | (IData)(vlSelf->__Vlvbound_h5881caf4__0));
            vlSelf->__Vlvbound_h5881caf4__0 = (0x1fU 
                                               & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fle) 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | ((IData)(vlSelf->__Vlvbound_h5881caf4__0) 
                    << 5U));
        } else if ((1U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) {
            vlSelf->__Vlvbound_h5881caf4__1 = (0x1fU 
                                               & (IData)(vlSelf->__PVT__fncp__DOT__fflags_flt));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x3e0U & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | (IData)(vlSelf->__Vlvbound_h5881caf4__1));
            vlSelf->__Vlvbound_h5881caf4__1 = (0x1fU 
                                               & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_flt) 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | ((IData)(vlSelf->__Vlvbound_h5881caf4__1) 
                    << 5U));
        } else if ((2U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) {
            vlSelf->__Vlvbound_h5881caf4__2 = (0x1fU 
                                               & (IData)(vlSelf->__PVT__fncp__DOT__fflags_feq));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x3e0U & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | (IData)(vlSelf->__Vlvbound_h5881caf4__2));
            vlSelf->__Vlvbound_h5881caf4__2 = (0x1fU 
                                               & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_feq) 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | ((IData)(vlSelf->__Vlvbound_h5881caf4__2) 
                    << 5U));
        } else if ((3U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) {
            if ((4U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) {
                if ((5U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) {
                    if ((6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm))) {
                        vlSelf->__Vlvbound_h5881caf4__3 
                            = (0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmin));
                        vlSelf->__PVT__fncp__DOT__fflags_fncp 
                            = ((0x3e0U & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                               | (IData)(vlSelf->__Vlvbound_h5881caf4__3));
                        vlSelf->__Vlvbound_h5881caf4__3 
                            = (0x1fU & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fmin) 
                                        >> 5U));
                        vlSelf->__PVT__fncp__DOT__fflags_fncp 
                            = ((0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                               | ((IData)(vlSelf->__Vlvbound_h5881caf4__3) 
                                  << 5U));
                    } else {
                        vlSelf->__Vlvbound_h5881caf4__4 
                            = (0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmax));
                        vlSelf->__PVT__fncp__DOT__fflags_fncp 
                            = ((0x3e0U & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                               | (IData)(vlSelf->__Vlvbound_h5881caf4__4));
                        vlSelf->__Vlvbound_h5881caf4__4 
                            = (0x1fU & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fmax) 
                                        >> 5U));
                        vlSelf->__PVT__fncp__DOT__fflags_fncp 
                            = ((0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                               | ((IData)(vlSelf->__Vlvbound_h5881caf4__4) 
                                  << 5U));
                    }
                }
            }
        }
    }
    if ((0x200000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fma__DOT__fflags_fma))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fma__DOT__fflags_fma))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fma__DOT__fflags_fma))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fma__DOT__fflags_fma))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelf->__PVT__fma__DOT__fflags_fma))));
    }
    if ((0x400000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                           >> 5U))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                      >> 9U))) << 4U));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelf->__PVT__fma__DOT__fflags_fma) 
                           >> 5U))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelf->__PVT__fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelf->__PVT__fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelf->__PVT__fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelf->__PVT__fma__DOT__fflags_fma) 
                                      >> 9U))) << 4U));
    }
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[0U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h00b0650d__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv)) 
                                             | (IData)(vlSelf->__Vlvbound_h00b0650d__0));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r = ((0xffffffff00000000ULL 
                                                & vlSelf->__PVT__fdiv__DOT__result_fdiv_r) 
                                               | (IData)((IData)(
                                                                 vlSelf->__PVT__fdiv__DOT__result_fdiv[0U])));
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__30__result, vlSelf->__Vtask_dpi_fdiv__30__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[2U] = (IData)(vlSelf->__Vtask_dpi_fdiv__30__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__30__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h00b0650d__0 = vlSelf->__Vtask_dpi_fdiv__30__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv)) 
                                             | ((IData)(vlSelf->__Vlvbound_h00b0650d__0) 
                                                << 5U));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r = ((0xffffffffULL 
                                                & vlSelf->__PVT__fdiv__DOT__result_fdiv_r) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__fdiv__DOT__result_fdiv[2U])) 
                                                  << 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[0U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h23046ae6__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0x3e0U 
                                                & (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)) 
                                               | (IData)(vlSelf->__Vlvbound_h23046ae6__0));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r = ((0xffffffff00000000ULL 
                                                  & vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r) 
                                                 | (IData)((IData)(
                                                                   vlSelf->__PVT__fsqrt__DOT__result_fsqrt[0U])));
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__1__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__31__result, vlSelf->__Vtask_dpi_fsqrt__31__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[2U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__31__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__31__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h23046ae6__0 = vlSelf->__Vtask_dpi_fsqrt__31__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0x1fU 
                                                & (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)) 
                                               | ((IData)(vlSelf->__Vlvbound_h23046ae6__0) 
                                                  << 5U));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r = ((0xffffffffULL 
                                                  & vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[2U])) 
                                                    << 0x20U));
    vlSelf->__PVT__fncp__DOT_____05Ffflags_merged = 0U;
    vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged = 0U;
    if ((0x200000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged = 0U;
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt))));
    } else {
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged = 0U;
    }
    if ((0x400000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                           >> 5U))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                      >> 9U))) << 4U));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                           >> 5U))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                      >> 9U))) << 4U));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                           >> 5U))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                      >> 9U))) << 4U));
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_he5873c6d_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hf4e66895_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hea639f5c_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h654ca46e_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h638a629f_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hc6d37415_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hcbfd6d22_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h454b5b0c_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hca5c4cb8_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h54d78c29_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h83052c29_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h32021d26_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hb62e4706_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hc80541b1_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_hc6b7c1e1_0;
extern const VlUnpacked<CData/*1:0*/, 16> VVortex__ConstPool__TABLE_h57ee0b9c_0;
extern const VlUnpacked<CData/*3:0*/, 64> VVortex__ConstPool__TABLE_hd4629e97_0;
extern const VlUnpacked<CData/*1:0*/, 64> VVortex__ConstPool__TABLE_hf73fbda4_0;

VL_INLINE_OPT void VVortex_VX_fpu_dpi__N2_T2_O1___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_dpi__0(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_fpu_dpi__N2_T2_O1___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_dpi__0\n"); );
    // Init
    IData/*31:0*/ __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i;
    VlWide<9>/*287:0*/ __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries;
    VlWide<34>/*1079:0*/ __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries;
    VlWide<23>/*719:0*/ __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries;
    VlWide<12>/*359:0*/ __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries;
    VlWide<5>/*145:0*/ __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries;
    VlWide<3>/*95:0*/ __Vtemp_h95cb2aee__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a5bfa91__0;
    VlWide<3>/*95:0*/ __Vtemp_h5d2644fe__0;
    VlWide<3>/*95:0*/ __Vtemp_h207fd4ce__0;
    VlWide<3>/*95:0*/ __Vtemp_h1a5bba46__0;
    VlWide<5>/*159:0*/ __Vtemp_he374970f__0;
    // Body
    vlSelf->__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x17U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x17U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x18U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x18U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x19U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x19U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1aU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1aU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1bU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1bU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1cU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1cU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1dU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1dU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1eU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1eU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1fU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1fU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x20U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x20U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x21U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x21U];
    if (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r) {
        vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state = 0U;
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state = 0U;
    } else {
        if (((0U != (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in)) 
             & ((IData)(vlSelf->__PVT__per_core_ready_out) 
                >> 1U))) {
            vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state 
                = vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall)))) {
            vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r 
                = (1U & (vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
                         >> 0xaU));
        }
        if (((0U != (IData)(vlSelf->__PVT__per_core_valid_out)) 
             & (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall)))) {
            vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state 
                = vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall)))) {
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U] 
            = vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U];
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U] 
            = vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U];
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U] 
            = (0x3ffU & vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U]);
    }
    __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x48U, __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x47U, __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r))) {
            __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                   (3U & (__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0 = 0U;
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x48U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x48U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0 = 0U;
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x90U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x90U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x90U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0 = 0U;
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0xd8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0xd8U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0) 
                                              << (0x1fU 
                                                  & ((IData)(0xd8U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0 = 0U;
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x120U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x120U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x120U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__fcvt__DOT__fcvt_ready) {
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0 
                = (1U & ((0x167U >= (0x1ffU & ((IData)(0x48U) 
                                               + (0x7fU 
                                                  & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0x48U) 
                                       + (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                    (3U & (__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0) 
                                        << (0x1fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)));
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0 
                = (1U & ((0x167U >= (0x1ffU & ((IData)(0x90U) 
                                               + (0x7fU 
                                                  & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0x90U) 
                                       + (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x48U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x48U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0 
                = (1U & ((0x167U >= (0x1ffU & ((IData)(0xd8U) 
                                               + (0x7fU 
                                                  & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0xd8U) 
                                       + (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x90U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x90U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x90U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0 
                = (1U & ((0x167U >= (0x1ffU & ((IData)(0x120U) 
                                               + (0x7fU 
                                                  & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0x120U) 
                                       + (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x120U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0xd8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0xd8U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0) 
                                              << (0x1fU 
                                                  & ((IData)(0xd8U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_h95cb2aee__0[0U] = (((IData)(vlSelf->__PVT__fcvt__DOT__result_fcvt) 
                                         << 5U) | (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged));
            __Vtemp_h95cb2aee__0[1U] = (((IData)(vlSelf->__PVT__fcvt__DOT__result_fcvt) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (vlSelf->__PVT__fcvt__DOT__result_fcvt 
                                                    >> 0x20U)) 
                                           << 5U));
            __Vtemp_h95cb2aee__0[2U] = (((IData)(vlSelf->__PVT__fcvt__DOT__fcvt_valid) 
                                         << 7U) | (
                                                   ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                                    << 5U) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__fcvt__DOT__result_fcvt 
                                                               >> 0x20U)) 
                                                      >> 0x1bU)));
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_h563768aa__0 
                = (1U & ((0x47U >= (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_h95cb2aee__0[(3U 
                                                   & (__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                      >> 5U))] 
                             >> (0x1fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vxrand_h9b58951b__1)));
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x120U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x120U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_h563768aa__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x120U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i);
    }
    __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x48U, __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x47U, __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r))) {
            __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                     & (__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                        >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                   (3U & (__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0 = 0U;
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0x48U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x48U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0 = 0U;
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0x90U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x90U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x90U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0 = 0U;
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0xd8U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0xd8U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0) 
                                              << (0x1fU 
                                                  & ((IData)(0xd8U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__fma__DOT__fma_ready) {
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0 
                = (1U & ((0x11fU >= (0x1ffU & ((IData)(0x48U) 
                                               + (0x7fU 
                                                  & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0x48U) 
                                       + (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fma__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                     & (__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                        >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                    (3U & (__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0) 
                                        << (0x1fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)));
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0 
                = (1U & ((0x11fU >= (0x1ffU & ((IData)(0x90U) 
                                               + (0x7fU 
                                                  & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0x90U) 
                                       + (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fma__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0x48U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x48U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0 
                = (1U & ((0x11fU >= (0x1ffU & ((IData)(0xd8U) 
                                               + (0x7fU 
                                                  & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0xd8U) 
                                       + (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fma__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0x90U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x90U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x90U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_h3a5bfa91__0[0U] = (((IData)(vlSelf->__PVT__fma__DOT__result_fma) 
                                         << 5U) | (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged));
            __Vtemp_h3a5bfa91__0[1U] = (((IData)(vlSelf->__PVT__fma__DOT__result_fma) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (vlSelf->__PVT__fma__DOT__result_fma 
                                                    >> 0x20U)) 
                                           << 5U));
            __Vtemp_h3a5bfa91__0[2U] = (((IData)(vlSelf->__PVT__fma__DOT__fma_valid) 
                                         << 7U) | (
                                                   ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                                    << 5U) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__fma__DOT__result_fma 
                                                               >> 0x20U)) 
                                                      >> 0x1bU)));
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_h2058a6de__0 
                = (1U & ((0x47U >= (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_h3a5bfa91__0[(3U 
                                                   & (__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                      >> 5U))] 
                             >> (0x1fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->fma__DOT__shift_reg__DOT____Vxrand_h9b58951b__1)));
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0xd8U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0xd8U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_h2058a6de__0) 
                                              << (0x1fU 
                                                  & ((IData)(0xd8U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i);
    }
    __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x49U, __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x48U, __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r))) {
            __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[
                   (3U & (__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_h5344c213__0 = 0U;
            if (VL_LIKELY((0x91U >= (0xffU & ((IData)(0x49U) 
                                              + (0x7fU 
                                                 & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[(7U 
                                                                          & (((IData)(0x49U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x49U) 
                                             + (0x7fU 
                                                & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (7U & (((IData)(0x49U) + (0x7fU 
                                                  & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                               >> 5U))]) | ((IData)(vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_h5344c213__0) 
                                            << (0x1fU 
                                                & ((IData)(0x49U) 
                                                   + 
                                                   (0x7fU 
                                                    & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__fncp__DOT__fncp_ready) {
            vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_he67dff96__0 
                = (1U & ((0x91U >= (0xffU & ((IData)(0x49U) 
                                             + (0x7fU 
                                                & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (7U & (((IData)(0x49U) 
                                     + (0x7fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x49U) 
                                                    + 
                                                    (0x7fU 
                                                     & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fncp__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[
                    (3U & (__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_he67dff96__0) 
                                        << (0x1fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)));
            __Vtemp_h5d2644fe__0[0U] = (((IData)(vlSelf->__PVT__fncp__DOT__result_fncp) 
                                         << 5U) | (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged));
            __Vtemp_h5d2644fe__0[1U] = (((IData)(vlSelf->__PVT__fncp__DOT__result_fncp) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (vlSelf->__PVT__fncp__DOT__result_fncp 
                                                    >> 0x20U)) 
                                           << 5U));
            __Vtemp_h5d2644fe__0[2U] = (((IData)(vlSelf->__PVT__fncp__DOT__fncp_valid) 
                                         << 8U) | (
                                                   ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                                    << 6U) 
                                                   | ((((6U 
                                                         <= (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm)) 
                                                        | (IData)(vlSelf->__PVT__is_fcmp)) 
                                                       << 5U) 
                                                      | ((IData)(
                                                                 (vlSelf->__PVT__fncp__DOT__result_fncp 
                                                                  >> 0x20U)) 
                                                         >> 0x1bU))));
            vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_h33c0b887__0 
                = (1U & ((0x48U >= (0x7fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_h5d2644fe__0[(3U 
                                                   & (__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                      >> 5U))] 
                             >> (0x1fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->fncp__DOT__shift_reg__DOT____Vxrand_h9b58951b__1)));
            if (VL_LIKELY((0x91U >= (0xffU & ((IData)(0x49U) 
                                              + (0x7fU 
                                                 & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[(7U 
                                                                          & (((IData)(0x49U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x49U) 
                                             + (0x7fU 
                                                & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (7U & (((IData)(0x49U) + (0x7fU 
                                                  & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                               >> 5U))]) | ((IData)(vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_h33c0b887__0) 
                                            << (0x1fU 
                                                & ((IData)(0x49U) 
                                                   + 
                                                   (0x7fU 
                                                    & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i);
    }
    __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x48U, __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x47U, __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r))) {
            __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                       & (__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                          >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                   (3U & (__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x48U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x48U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x90U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x90U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0xd8U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0xd8U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x120U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x120U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x120U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x168U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x168U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x168U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x168U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x168U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x1b0U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x1b0U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1b0U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x1b0U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1b0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x1f8U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x1f8U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1f8U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x1f8U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1f8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x240U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x240U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x240U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x240U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x240U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x288U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x288U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x288U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x288U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x288U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__fsqrt__DOT__fsqrt_ready) {
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x48U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x48U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x48U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                       & (__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                          >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                    (3U & (__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                        << (0x1fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)));
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x90U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x90U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x90U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x48U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x48U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0xd8U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0xd8U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0xd8U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x90U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x90U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x120U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x120U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x120U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0xd8U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0xd8U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x168U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x168U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x168U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x120U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x120U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x120U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x1b0U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x1b0U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x1b0U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x168U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x168U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x168U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x168U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x168U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x1f8U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x1f8U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x1f8U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x1b0U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x1b0U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1b0U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x1b0U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1b0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x240U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x240U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x240U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x1f8U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x1f8U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1f8U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x1f8U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1f8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x288U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x288U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x288U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x240U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x240U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x240U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x240U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x240U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_h207fd4ce__0[0U] = (((IData)(vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r) 
                                         << 5U) | (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged));
            __Vtemp_h207fd4ce__0[1U] = (((IData)(vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r 
                                                    >> 0x20U)) 
                                           << 5U));
            __Vtemp_h207fd4ce__0[2U] = (((IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_valid) 
                                         << 7U) | (
                                                   ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                                    << 5U) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r 
                                                               >> 0x20U)) 
                                                      >> 0x1bU)));
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hd60967cc__0 
                = (1U & ((0x47U >= (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_h207fd4ce__0[(3U 
                                                   & (__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                      >> 5U))] 
                             >> (0x1fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__1)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x288U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x288U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x288U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x288U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hd60967cc__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x288U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i);
    }
    __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x48U, __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x47U, __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r))) {
            __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                   (3U & (__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x48U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x48U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x90U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x90U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0xd8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0xd8U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x120U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x120U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x120U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x168U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x168U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x168U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x168U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x168U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x1b0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x1b0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1b0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x1b0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1b0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x1f8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x1f8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1f8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x1f8U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1f8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x240U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x240U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x240U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x240U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x240U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x288U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x288U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x288U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x288U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x288U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x2d0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x2d0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x2d0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x2d0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x2d0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x318U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x318U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x318U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x318U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x318U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x360U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x360U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x360U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x360U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x360U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x3a8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x3a8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3a8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x3a8U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3a8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x3f0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x3f0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3f0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x3f0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3f0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__fdiv__DOT__fdiv_ready) {
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x48U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x48U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x48U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                    (3U & (__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                        << (0x1fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)));
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x90U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x90U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x90U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x48U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x48U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0xd8U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0xd8U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0xd8U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x90U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x90U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x120U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x120U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x120U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0xd8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0xd8U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x168U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x168U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x168U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x120U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x120U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x120U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x1b0U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x1b0U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x1b0U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x168U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x168U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x168U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x168U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x168U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x1f8U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x1f8U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x1f8U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x1b0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x1b0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1b0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x1b0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1b0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x240U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x240U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x240U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x1f8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x1f8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1f8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x1f8U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1f8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x288U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x288U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x288U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x240U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x240U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x240U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x240U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x240U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x2d0U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x2d0U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x2d0U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x288U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x288U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x288U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x288U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x288U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x318U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x318U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x318U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x2d0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x2d0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x2d0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x2d0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x2d0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x360U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x360U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x360U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x318U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x318U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x318U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x318U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x318U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x3a8U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x3a8U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x3a8U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x360U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x360U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x360U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x360U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x360U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x3f0U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x3f0U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x3f0U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x3a8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x3a8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3a8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x3a8U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3a8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_h1a5bba46__0[0U] = (((IData)(vlSelf->__PVT__fdiv__DOT__result_fdiv_r) 
                                         << 5U) | (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged));
            __Vtemp_h1a5bba46__0[1U] = (((IData)(vlSelf->__PVT__fdiv__DOT__result_fdiv_r) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (vlSelf->__PVT__fdiv__DOT__result_fdiv_r 
                                                    >> 0x20U)) 
                                           << 5U));
            __Vtemp_h1a5bba46__0[2U] = (((IData)(vlSelf->__PVT__fdiv__DOT__fdiv_valid) 
                                         << 7U) | (
                                                   ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                                    << 5U) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__fdiv__DOT__result_fdiv_r 
                                                               >> 0x20U)) 
                                                      >> 0x1bU)));
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_h503d6ec1__0 
                = (1U & ((0x47U >= (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_h1a5bba46__0[(3U 
                                                   & (__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                      >> 5U))] 
                             >> (0x1fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__1)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x3f0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x3f0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3f0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x3f0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_h503d6ec1__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3f0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    vlSelf->__Vtableidx5 = (0xfU & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                    >> 0x11U));
    vlSelf->__PVT__is_fadd = VVortex__ConstPool__TABLE_he5873c6d_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fsub = VVortex__ConstPool__TABLE_hf4e66895_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fmul = VVortex__ConstPool__TABLE_hea639f5c_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fmadd = VVortex__ConstPool__TABLE_h654ca46e_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fmsub = VVortex__ConstPool__TABLE_h638a629f_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fnmadd = VVortex__ConstPool__TABLE_hc6d37415_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fnmsub = VVortex__ConstPool__TABLE_hcbfd6d22_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_div = VVortex__ConstPool__TABLE_h454b5b0c_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_fcmp = VVortex__ConstPool__TABLE_hca5c4cb8_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_itof = VVortex__ConstPool__TABLE_h54d78c29_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_utof = VVortex__ConstPool__TABLE_h83052c29_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_ftoi = VVortex__ConstPool__TABLE_h32021d26_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_ftou = VVortex__ConstPool__TABLE_hb62e4706_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__is_f2f = VVortex__ConstPool__TABLE_hc80541b1_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__dst_fmt = VVortex__ConstPool__TABLE_hc6b7c1e1_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__int_fmt = VVortex__ConstPool__TABLE_hc6b7c1e1_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__core_select = VVortex__ConstPool__TABLE_h57ee0b9c_0
        [vlSelf->__Vtableidx5];
    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x17U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x17U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x18U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x18U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x19U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x19U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1aU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1aU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1bU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1bU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1cU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1cU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1dU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1dU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1eU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1eU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1fU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1fU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x20U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x20U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x21U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x21U];
    vlSelf->__PVT__per_core_tag_out = ((0xcfU & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | (0x30U & (
                                                   vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                   >> 1U)));
    vlSelf->__PVT__per_core_result[4U] = (IData)((((QData)((IData)(
                                                                   vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                        >> 5U))));
    vlSelf->__PVT__per_core_result[5U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                         >> 5U))) 
                                                  >> 0x20U));
    vlSelf->__PVT__per_core_fflags = ((0xf83ffU & vlSelf->__PVT__per_core_fflags) 
                                      | (0x7c00U & 
                                         (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                          << 0xaU)));
    vlSelf->__PVT__per_core_valid_out = ((0xbU & (IData)(vlSelf->__PVT__per_core_valid_out)) 
                                         | (4U & (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                  >> 5U)));
    vlSelf->__PVT__fncp__DOT__result_fmvx[0U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][0U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][0U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[1U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][0U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][0U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvx[2U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][3U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][2U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][2U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[3U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][3U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][2U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][2U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvf[0U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][0U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[1U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][0U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvf[2U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][3U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][2U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[3U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][3U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][2U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__per_core_tag_out = ((0x3fU & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | (0xc0U & vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U]));
    vlSelf->__PVT__per_core_has_fflags = ((7U & (IData)(vlSelf->__PVT__per_core_has_fflags)) 
                                          | (8U & (
                                                   vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                   >> 2U)));
    vlSelf->__PVT__per_core_result[6U] = (IData)((((QData)((IData)(
                                                                   vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                        >> 5U))));
    vlSelf->__PVT__per_core_result[7U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                         >> 5U))) 
                                                  >> 0x20U));
    vlSelf->__PVT__per_core_fflags = ((0x7fffU & vlSelf->__PVT__per_core_fflags) 
                                      | (0xf8000U & 
                                         (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                          << 0xfU)));
    vlSelf->__PVT__per_core_valid_out = ((7U & (IData)(vlSelf->__PVT__per_core_valid_out)) 
                                         | (8U & (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                  >> 5U)));
    vlSelf->__Vcellinp__div_sqrt_arb__valid_in = ((2U 
                                                   & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                      >> 6U)) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                        >> 7U)));
    vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r 
        = (1U & (~ ((1U == (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                             << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
                    | (5U == (5U & (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                                     << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in)))))));
    vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r 
        = (((1U == (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                     << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
            | (5U == (5U & (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                             << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in)))))
            ? 1U : 2U);
    vlSelf->__PVT__per_core_valid_out = ((0xcU & (IData)(vlSelf->__PVT__per_core_valid_out)) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
                                             << 1U) 
                                            | (1U & 
                                               (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                >> 7U))));
    __Vtemp_he374970f__0[0U] = (0x80U | (((IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                         >> 5U)))) 
                                          << 8U) | 
                                         ((0x7cU & 
                                           (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                            << 2U)) 
                                          | (3U & (
                                                   vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                   >> 5U)))));
    __Vtemp_he374970f__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                           << 0x3bU) 
                                          | (((QData)((IData)(
                                                              vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                              << 0x1bU) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                >> 5U)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                              >> 5U))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_he374970f__0[2U] = (0x8000U | ((((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                          << 0x1bU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                            >> 5U)))) 
                                             << 0x10U) 
                                            | ((0x7c00U 
                                                & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                                   << 0xaU)) 
                                               | (0x300U 
                                                  & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                     << 3U)))) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                              >> 5U))) 
                                                       >> 0x20U)) 
                                              >> 0x18U)));
    __Vtemp_he374970f__0[3U] = ((0xffU & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                         >> 5U)))) 
                                          >> 0x10U)) 
                                | ((0xff00U & ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                              >> 5U)))) 
                                               >> 0x10U)) 
                                   | ((IData)(((((QData)((IData)(
                                                                 vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                    << 0x1bU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                      >> 5U))) 
                                               >> 0x20U)) 
                                      << 0x10U)));
    __Vtemp_he374970f__0[4U] = ((0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                        << 0x1bU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                          >> 5U))) 
                                                   >> 0x20U)) 
                                          >> 0x10U)) 
                                | (0xff00U & ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                              >> 5U))) 
                                                       >> 0x20U)) 
                                              >> 0x10U)));
    if ((0x8fU >= (0xffU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))) {
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_he374970f__0[((IData)(1U) 
                                               + (7U 
                                                  & (((IData)(0x48U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_he374970f__0[(7U & (((IData)(0x48U) 
                                               * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U))] 
                  >> (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_he374970f__0[((IData)(2U) 
                                               + (7U 
                                                  & (((IData)(0x48U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_he374970f__0[((IData)(1U) 
                                        + (7U & (((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                  >> (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
    } else {
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h7e15b196__0[0U];
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h7e15b196__0[1U];
    }
    vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
        = (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r) 
            << 8U) | (0xffU & ((0x8fU >= (0xffU & ((IData)(0x48U) 
                                                   * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0x48U) 
                                             * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                     ? 0U : (__Vtemp_he374970f__0[
                                             ((IData)(3U) 
                                              + (7U 
                                                 & (((IData)(0x48U) 
                                                     * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                                   | (__Vtemp_he374970f__0[
                                      ((IData)(2U) 
                                       + (7U & (((IData)(0x48U) 
                                                 * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U)))] 
                                      >> (0x1fU & ((IData)(0x48U) 
                                                   * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
                                : vlSelf->div_sqrt_arb__DOT____Vxrand_h7e15b196__0[2U])));
    vlSelf->__Vtableidx6 = (((IData)(vlSelf->__PVT__per_core_valid_out) 
                             << 2U) | (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r 
        = VVortex__ConstPool__TABLE_hd4629e97_0[vlSelf->__Vtableidx6];
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r 
        = VVortex__ConstPool__TABLE_hf73fbda4_0[vlSelf->__Vtableidx6];
    vlSelf->__PVT__per_core_has_fflags = ((9U & (IData)(vlSelf->__PVT__per_core_has_fflags)) 
                                          | (4U | (2U 
                                                   & (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                                      >> 6U))));
    vlSelf->__PVT__per_core_result[0U] = (IData)((((QData)((IData)(
                                                                   vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                        >> 5U))));
    vlSelf->__PVT__per_core_result[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                         >> 5U))) 
                                                  >> 0x20U));
    vlSelf->__PVT__per_core_result[2U] = (IData)((((QData)((IData)(
                                                                   vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U])) 
                                                        >> 8U))));
    vlSelf->__PVT__per_core_result[3U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U])) 
                                                         >> 8U))) 
                                                  >> 0x20U));
    vlSelf->__PVT__per_core_fflags = ((0xffc00U & vlSelf->__PVT__per_core_fflags) 
                                      | ((0x3e0U & 
                                          (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                           << 3U)) 
                                         | (0x1fU & 
                                            vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])));
    vlSelf->__PVT__per_core_tag_out = ((0xf0U & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | ((0xcU & (
                                                   vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                                   << 2U)) 
                                          | (3U & (
                                                   vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                   >> 5U))));
    vlSelf->__PVT__per_core_data_out[0U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__per_core_result[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__per_core_result[0U])))) 
                                             << 8U) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                   << 7U)) 
                                               | ((0x7cU 
                                                   & (vlSelf->__PVT__per_core_fflags 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (IData)(vlSelf->__PVT__per_core_tag_out)))));
    vlSelf->__PVT__per_core_data_out[1U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__per_core_result[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__per_core_result[0U])))) 
                                             >> 0x18U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[0U]))) 
                                                        >> 0x20U)) 
                                               << 8U));
    vlSelf->__PVT__per_core_data_out[2U] = ((0xffffff00U 
                                             & vlSelf->__PVT__per_core_data_out[2U]) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[0U]))) 
                                                        >> 0x20U)) 
                                               >> 0x18U));
    vlSelf->__PVT__per_core_data_out[2U] = ((0xffU 
                                             & vlSelf->__PVT__per_core_data_out[2U]) 
                                            | (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[2U])))) 
                                                << 0x10U) 
                                               | ((0x8000U 
                                                   & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                      << 0xeU)) 
                                                  | ((0x7c00U 
                                                      & (vlSelf->__PVT__per_core_fflags 
                                                         << 5U)) 
                                                     | (0x300U 
                                                        & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                           << 6U))))));
    vlSelf->__PVT__per_core_data_out[3U] = ((0xffU 
                                             & ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[2U])))) 
                                                >> 0x10U)) 
                                            | ((0xff00U 
                                                & ((IData)(
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__per_core_result[3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[2U])))) 
                                                   >> 0x10U)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->__PVT__per_core_result[3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[2U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U)));
    vlSelf->__PVT__per_core_data_out[4U] = ((0xffff0000U 
                                             & vlSelf->__PVT__per_core_data_out[4U]) 
                                            | ((0xffU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__per_core_result[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x10U)) 
                                               | (0xff00U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->__PVT__per_core_result[3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__per_core_result[2U]))) 
                                                              >> 0x20U)) 
                                                     >> 0x10U))));
    vlSelf->__PVT__per_core_data_out[4U] = ((0xffffU 
                                             & vlSelf->__PVT__per_core_data_out[4U]) 
                                            | (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[5U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[4U])))) 
                                                << 0x18U) 
                                               | ((0x800000U 
                                                   & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                      << 0x15U)) 
                                                  | ((0x7c0000U 
                                                      & (vlSelf->__PVT__per_core_fflags 
                                                         << 8U)) 
                                                     | (0x30000U 
                                                        & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                           << 0xcU))))));
    vlSelf->__PVT__per_core_data_out[5U] = ((0xffffU 
                                             & ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[5U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[4U])))) 
                                                >> 8U)) 
                                            | ((0xff0000U 
                                                & ((IData)(
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__per_core_result[5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[4U])))) 
                                                   >> 8U)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->__PVT__per_core_result[5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[4U]))) 
                                                           >> 0x20U)) 
                                                  << 0x18U)));
    vlSelf->__PVT__per_core_data_out[6U] = ((0xff000000U 
                                             & vlSelf->__PVT__per_core_data_out[6U]) 
                                            | ((0xffffU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__per_core_result[4U]))) 
                                                            >> 0x20U)) 
                                                   >> 8U)) 
                                               | (0xff0000U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->__PVT__per_core_result[5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__per_core_result[4U]))) 
                                                              >> 0x20U)) 
                                                     >> 8U))));
    vlSelf->__PVT__per_core_data_out[6U] = ((0xffffffU 
                                             & vlSelf->__PVT__per_core_data_out[6U]) 
                                            | ((0x80000000U 
                                                & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                   << 0x1cU)) 
                                               | ((0x7c000000U 
                                                   & (vlSelf->__PVT__per_core_fflags 
                                                      << 0xbU)) 
                                                  | (0x3000000U 
                                                     & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                        << 0x12U)))));
    vlSelf->__PVT__per_core_data_out[7U] = ((0xffffffU 
                                             & (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->__PVT__per_core_result[7U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[6U]))))) 
                                            | (0xff000000U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[7U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__per_core_result[6U]))))));
    vlSelf->__PVT__per_core_data_out[8U] = ((0xffffffU 
                                             & (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[7U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[6U]))) 
                                                        >> 0x20U))) 
                                            | (0xff000000U 
                                               & (IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->__PVT__per_core_result[7U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__per_core_result[6U]))) 
                                                          >> 0x20U))));
    if ((0x11fU >= (0x1ffU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))) {
        vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(1U) + (0xfU & (((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  (0xfU & (((IData)(0x48U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x48U) 
                                                 * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(2U) + (0xfU & (((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  ((IData)(1U) + (0xfU & (((IData)(0x48U) 
                                           * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
    } else {
        vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h7e15b196__0[0U];
        vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h7e15b196__0[1U];
    }
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = (((IData)((0U != (IData)(vlSelf->__PVT__per_core_valid_out))) 
            << 0xaU) | (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r) 
                         << 8U) | (0xffU & ((0x11fU 
                                             >= (0x1ffU 
                                                 & ((IData)(0x48U) 
                                                    * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__per_core_data_out[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x48U) 
                                                        * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x48U) 
                                                       * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                                                | (vlSelf->__PVT__per_core_data_out[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0x48U) 
                                                         * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x48U) 
                                                       * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
                                             : vlSelf->rsp_arb__DOT____Vxrand_h7e15b196__0[2U]))));
}

VL_INLINE_OPT void VVortex_VX_fpu_dpi__N2_T2_O1___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_dpi__1(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_fpu_dpi__N2_T2_O1___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_dpi__1\n"); );
    // Body
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0xaU) | vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U]);
    vlSelf->__PVT__fdiv__DOT__fdiv_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_valid) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__core_select))) 
                                            & (IData)(vlSelf->__PVT__is_div));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_valid) 
                                               & (1U 
                                                  == (IData)(vlSelf->__PVT__core_select))) 
                                              & (~ (IData)(vlSelf->__PVT__is_div)));
    vlSelf->__PVT__fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_valid) 
                                            & (2U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__fma__DOT__fma_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_valid) 
                                          & (0U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_valid) 
                                            & (3U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                    >> 0xaU) & (~ ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__gather_unit__DOT__commit_in_ready) 
                                   >> 2U))));
    vlSelf->__PVT__per_core_ready_out = ((8U & (IData)(vlSelf->__PVT__per_core_ready_out)) 
                                         | ((4U & (
                                                   ((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall)) 
                                                    << 2U) 
                                                   & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r))) 
                                            | (3U & 
                                               ((- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall))))) 
                                                & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r)))));
    vlSelf->__PVT__per_core_ready_out = ((7U & (IData)(vlSelf->__PVT__per_core_ready_out)) 
                                         | (((~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall)) 
                                             & ((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r) 
                                                >> 3U)) 
                                            << 3U));
    vlSelf->__PVT__fcvt__DOT__fcvt_ready = (1U & (((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                   >> 2U) 
                                                  | (~ 
                                                     ((IData)(vlSelf->__PVT__per_core_valid_out) 
                                                      >> 2U))));
    vlSelf->__PVT__fma__DOT__fma_ready = (1U & ((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                | (~ (IData)(vlSelf->__PVT__per_core_valid_out))));
    vlSelf->__PVT__fncp__DOT__fncp_ready = (1U & (((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                   >> 3U) 
                                                  | (~ 
                                                     ((IData)(vlSelf->__PVT__per_core_valid_out) 
                                                      >> 3U))));
    vlSelf->__Vcellout__div_sqrt_arb__ready_in = ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__per_core_ready_out) 
                                                                 >> 1U)))) 
                                                  & (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r));
    vlSelf->__PVT__fcvt__DOT__fcvt_fire = ((IData)(vlSelf->__PVT__fcvt__DOT__fcvt_valid) 
                                           & (IData)(vlSelf->__PVT__fcvt__DOT__fcvt_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xbU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | ((IData)(vlSelf->__PVT__fcvt__DOT__fcvt_ready) 
                                           << 2U));
    vlSelf->__PVT__fma__DOT__fma_fire = ((IData)(vlSelf->__PVT__fma__DOT__fma_valid) 
                                         & (IData)(vlSelf->__PVT__fma__DOT__fma_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xeU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | (IData)(vlSelf->__PVT__fma__DOT__fma_ready));
    vlSelf->__PVT__fncp__DOT__fncp_fire = ((IData)(vlSelf->__PVT__fncp__DOT__fncp_valid) 
                                           & (IData)(vlSelf->__PVT__fncp__DOT__fncp_ready));
    vlSelf->__PVT__per_core_ready_in = ((7U & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | ((IData)(vlSelf->__PVT__fncp__DOT__fncp_ready) 
                                           << 3U));
    vlSelf->__PVT__fdiv__DOT__fdiv_ready = (1U & ((IData)(vlSelf->__Vcellout__div_sqrt_arb__ready_in) 
                                                  | (~ 
                                                     (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                      >> 7U))));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_ready = (1U & 
                                              (((IData)(vlSelf->__Vcellout__div_sqrt_arb__ready_in) 
                                                >> 1U) 
                                               | (~ 
                                                  (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                   >> 7U))));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__55__result, vlSelf->__Vtask_dpi_itof__55__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[0U] = (IData)(vlSelf->__Vtask_dpi_itof__55__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__55__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2e9bfe6a__0 = vlSelf->__Vtask_dpi_itof__55__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_itof)) 
                                             | (IData)(vlSelf->__Vlvbound_h2e9bfe6a__0));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__56__result, vlSelf->__Vtask_dpi_utof__56__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[0U] = (IData)(vlSelf->__Vtask_dpi_utof__56__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__56__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h4bd064b9__0 = vlSelf->__Vtask_dpi_utof__56__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_utof)) 
                                             | (IData)(vlSelf->__Vlvbound_h4bd064b9__0));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__57__result, vlSelf->__Vtask_dpi_ftoi__57__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[0U] = (IData)(vlSelf->__Vtask_dpi_ftoi__57__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__57__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h29370721__0 = vlSelf->__Vtask_dpi_ftoi__57__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftoi)) 
                                             | (IData)(vlSelf->__Vlvbound_h29370721__0));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__58__result, vlSelf->__Vtask_dpi_ftou__58__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[0U] = (IData)(vlSelf->__Vtask_dpi_ftou__58__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__58__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2849bae9__0 = vlSelf->__Vtask_dpi_ftou__58__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftou)) 
                                             | (IData)(vlSelf->__Vlvbound_h2849bae9__0));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[0U] = (IData)(vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__59__result 
                                                        >> 0x20U));
    vlSelf->__PVT__fcvt__DOT__result_fcvt = ((0xffffffff00000000ULL 
                                              & vlSelf->__PVT__fcvt__DOT__result_fcvt) 
                                             | (IData)((IData)(
                                                               ((IData)(vlSelf->__PVT__is_itof)
                                                                 ? 
                                                                vlSelf->__PVT__fcvt__DOT__result_itof[0U]
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__is_utof)
                                                                  ? 
                                                                 vlSelf->__PVT__fcvt__DOT__result_utof[0U]
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__is_ftoi)
                                                                   ? 
                                                                  vlSelf->__PVT__fcvt__DOT__result_ftoi[0U]
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__is_ftou)
                                                                    ? 
                                                                   vlSelf->__PVT__fcvt__DOT__result_ftou[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__is_f2f)
                                                                     ? 
                                                                    vlSelf->__PVT__fcvt__DOT__result_f2f[0U]
                                                                     : 0U))))))));
    vlSelf->__Vlvbound_h602015d0__0 = (0x1fU & ((IData)(vlSelf->__PVT__is_itof)
                                                 ? (IData)(vlSelf->__PVT__fcvt__DOT__fflags_itof)
                                                 : 
                                                ((IData)(vlSelf->__PVT__is_utof)
                                                  ? (IData)(vlSelf->__PVT__fcvt__DOT__fflags_utof)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__is_ftoi)
                                                   ? (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftoi)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__is_ftou)
                                                    ? (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftou)
                                                    : 0U)))));
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt)) 
                                             | (IData)(vlSelf->__Vlvbound_h602015d0__0));
    VVortex___024unit____Vdpiimwrap_dpi_itof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__55__result, vlSelf->__Vtask_dpi_itof__55__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[2U] = (IData)(vlSelf->__Vtask_dpi_itof__55__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__55__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2e9bfe6a__0 = vlSelf->__Vtask_dpi_itof__55__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_itof = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_itof)) 
                                             | ((IData)(vlSelf->__Vlvbound_h2e9bfe6a__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_utof_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), vlSelf->__PVT__int_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__56__result, vlSelf->__Vtask_dpi_utof__56__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[2U] = (IData)(vlSelf->__Vtask_dpi_utof__56__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__56__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h4bd064b9__0 = vlSelf->__Vtask_dpi_utof__56__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_utof = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_utof)) 
                                             | ((IData)(vlSelf->__Vlvbound_h4bd064b9__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_ftoi_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__57__result, vlSelf->__Vtask_dpi_ftoi__57__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[2U] = (IData)(vlSelf->__Vtask_dpi_ftoi__57__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__57__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h29370721__0 = vlSelf->__Vtask_dpi_ftoi__57__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftoi = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftoi)) 
                                             | ((IData)(vlSelf->__Vlvbound_h29370721__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_ftou_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__int_fmt), vlSelf->__PVT__dst_fmt, 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__58__result, vlSelf->__Vtask_dpi_ftou__58__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[2U] = (IData)(vlSelf->__Vtask_dpi_ftou__58__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__58__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2849bae9__0 = vlSelf->__Vtask_dpi_ftou__58__fflags;
    vlSelf->__PVT__fcvt__DOT__fflags_ftou = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftou)) 
                                             | ((IData)(vlSelf->__Vlvbound_h2849bae9__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_f2f_TOP____024unit(vlSelf->__PVT__fcvt__DOT__fcvt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__Vlvbound_h602015d0__0 = (0x1fU & ((IData)(vlSelf->__PVT__is_itof)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_itof) 
                                                 >> 5U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__is_utof)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_utof) 
                                                  >> 5U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__is_ftoi)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftoi) 
                                                   >> 5U)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__is_ftou)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_ftou) 
                                                    >> 5U)
                                                    : 0U)))));
    vlSelf->__PVT__fcvt__DOT__result_f2f[2U] = (IData)(vlSelf->__Vtask_dpi_f2f__59__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__59__result 
                                                        >> 0x20U));
    vlSelf->__PVT__fcvt__DOT__result_fcvt = ((0xffffffffULL 
                                              & vlSelf->__PVT__fcvt__DOT__result_fcvt) 
                                             | ((QData)((IData)(
                                                                ((IData)(vlSelf->__PVT__is_itof)
                                                                  ? 
                                                                 vlSelf->__PVT__fcvt__DOT__result_itof[2U]
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__is_utof)
                                                                   ? 
                                                                  vlSelf->__PVT__fcvt__DOT__result_utof[2U]
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__is_ftoi)
                                                                    ? 
                                                                   vlSelf->__PVT__fcvt__DOT__result_ftoi[2U]
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__is_ftou)
                                                                     ? 
                                                                    vlSelf->__PVT__fcvt__DOT__result_ftou[2U]
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__is_f2f)
                                                                      ? 
                                                                     vlSelf->__PVT__fcvt__DOT__result_f2f[2U]
                                                                      : 0U))))))) 
                                                << 0x20U));
    vlSelf->__PVT__fcvt__DOT__fflags_fcvt = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt)) 
                                             | ((IData)(vlSelf->__Vlvbound_h602015d0__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__46__result, vlSelf->__Vtask_dpi_fadd__46__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[0U] = (IData)(vlSelf->__Vtask_dpi_fadd__46__result);
    vlSelf->__PVT__fma__DOT__result_fadd[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__46__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hd0358701__0 = vlSelf->__Vtask_dpi_fadd__46__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fadd)) 
                                            | (IData)(vlSelf->__Vlvbound_hd0358701__0));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__47__result, vlSelf->__Vtask_dpi_fsub__47__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[0U] = (IData)(vlSelf->__Vtask_dpi_fsub__47__result);
    vlSelf->__PVT__fma__DOT__result_fsub[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__47__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h3e5a0693__0 = vlSelf->__Vtask_dpi_fsub__47__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fsub)) 
                                            | (IData)(vlSelf->__Vlvbound_h3e5a0693__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__48__result, vlSelf->__Vtask_dpi_fmul__48__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[0U] = (IData)(vlSelf->__Vtask_dpi_fmul__48__result);
    vlSelf->__PVT__fma__DOT__result_fmul[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__48__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hbdab4cf9__0 = vlSelf->__Vtask_dpi_fmul__48__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmul)) 
                                            | (IData)(vlSelf->__Vlvbound_hbdab4cf9__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__49__result, vlSelf->__Vtask_dpi_fmadd__49__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fmadd__49__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__49__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h57c9cc29__0 = vlSelf->__Vtask_dpi_fmadd__49__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmadd)) 
                                             | (IData)(vlSelf->__Vlvbound_h57c9cc29__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__50__result, vlSelf->__Vtask_dpi_fmsub__50__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fmsub__50__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__50__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6d7b0f8b__0 = vlSelf->__Vtask_dpi_fmsub__50__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmsub)) 
                                             | (IData)(vlSelf->__Vlvbound_h6d7b0f8b__0));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__51__result, vlSelf->__Vtask_dpi_fnmadd__51__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__51__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__51__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hf5e73f0f__0 = vlSelf->__Vtask_dpi_fnmadd__51__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0x3e0U 
                                               & (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmadd)) 
                                              | (IData)(vlSelf->__Vlvbound_hf5e73f0f__0));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__52__result, vlSelf->__Vtask_dpi_fnmsub__52__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__52__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__52__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h33426f81__0 = vlSelf->__Vtask_dpi_fnmsub__52__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0x3e0U 
                                               & (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmsub)) 
                                              | (IData)(vlSelf->__Vlvbound_h33426f81__0));
    vlSelf->__PVT__fma__DOT__result_fma = ((0xffffffff00000000ULL 
                                            & vlSelf->__PVT__fma__DOT__result_fma) 
                                           | (IData)((IData)(
                                                             ((IData)(vlSelf->__PVT__is_fadd)
                                                               ? 
                                                              vlSelf->__PVT__fma__DOT__result_fadd[0U]
                                                               : 
                                                              ((IData)(vlSelf->__PVT__is_fsub)
                                                                ? 
                                                               vlSelf->__PVT__fma__DOT__result_fsub[0U]
                                                                : 
                                                               ((IData)(vlSelf->__PVT__is_fmul)
                                                                 ? 
                                                                vlSelf->__PVT__fma__DOT__result_fmul[0U]
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__is_fmadd)
                                                                  ? 
                                                                 vlSelf->__PVT__fma__DOT__result_fmadd[0U]
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__is_fmsub)
                                                                   ? 
                                                                  vlSelf->__PVT__fma__DOT__result_fmsub[0U]
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__is_fnmadd)
                                                                    ? 
                                                                   vlSelf->__PVT__fma__DOT__result_fnmadd[0U]
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__is_fnmsub)
                                                                     ? 
                                                                    vlSelf->__PVT__fma__DOT__result_fnmsub[0U]
                                                                     : 0U))))))))));
    vlSelf->__Vlvbound_h52a87fc1__0 = (0x1fU & ((IData)(vlSelf->__PVT__is_fadd)
                                                 ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fadd)
                                                 : 
                                                ((IData)(vlSelf->__PVT__is_fsub)
                                                  ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fsub)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__is_fmul)
                                                   ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fmul)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__is_fmadd)
                                                    ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fmadd)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__is_fmsub)
                                                     ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fmsub)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__is_fnmadd)
                                                      ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmadd)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__is_fnmsub)
                                                       ? (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmsub)
                                                       : 0U))))))));
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0x3e0U 
                                            & (IData)(vlSelf->__PVT__fma__DOT__fflags_fma)) 
                                           | (IData)(vlSelf->__Vlvbound_h52a87fc1__0));
    VVortex___024unit____Vdpiimwrap_dpi_fadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__46__result, vlSelf->__Vtask_dpi_fadd__46__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[2U] = (IData)(vlSelf->__Vtask_dpi_fadd__46__result);
    vlSelf->__PVT__fma__DOT__result_fadd[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__46__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hd0358701__0 = vlSelf->__Vtask_dpi_fadd__46__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fadd = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fadd)) 
                                            | ((IData)(vlSelf->__Vlvbound_hd0358701__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__47__result, vlSelf->__Vtask_dpi_fsub__47__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[2U] = (IData)(vlSelf->__Vtask_dpi_fsub__47__result);
    vlSelf->__PVT__fma__DOT__result_fsub[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__47__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h3e5a0693__0 = vlSelf->__Vtask_dpi_fsub__47__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fsub = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fsub)) 
                                            | ((IData)(vlSelf->__Vlvbound_h3e5a0693__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmul_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__48__result, vlSelf->__Vtask_dpi_fmul__48__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[2U] = (IData)(vlSelf->__Vtask_dpi_fmul__48__result);
    vlSelf->__PVT__fma__DOT__result_fmul[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__48__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hbdab4cf9__0 = vlSelf->__Vtask_dpi_fmul__48__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmul = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmul)) 
                                            | ((IData)(vlSelf->__Vlvbound_hbdab4cf9__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__49__result, vlSelf->__Vtask_dpi_fmadd__49__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fmadd__49__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__49__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h57c9cc29__0 = vlSelf->__Vtask_dpi_fmadd__49__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmadd = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmadd)) 
                                             | ((IData)(vlSelf->__Vlvbound_h57c9cc29__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [2U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__50__result, vlSelf->__Vtask_dpi_fmsub__50__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fmsub__50__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__50__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6d7b0f8b__0 = vlSelf->__Vtask_dpi_fmsub__50__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fmsub = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fma__DOT__fflags_fmsub)) 
                                             | ((IData)(vlSelf->__Vlvbound_h6d7b0f8b__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fnmadd_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__51__result, vlSelf->__Vtask_dpi_fnmadd__51__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__51__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__51__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hf5e73f0f__0 = vlSelf->__Vtask_dpi_fnmadd__51__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmadd = ((0x1fU 
                                               & (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmadd)) 
                                              | ((IData)(vlSelf->__Vlvbound_hf5e73f0f__0) 
                                                 << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fnmsub_TOP____024unit(vlSelf->__PVT__fma__DOT__fma_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__52__result, vlSelf->__Vtask_dpi_fnmsub__52__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__52__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__52__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h33426f81__0 = vlSelf->__Vtask_dpi_fnmsub__52__fflags;
    vlSelf->__PVT__fma__DOT__fflags_fnmsub = ((0x1fU 
                                               & (IData)(vlSelf->__PVT__fma__DOT__fflags_fnmsub)) 
                                              | ((IData)(vlSelf->__Vlvbound_h33426f81__0) 
                                                 << 5U));
    vlSelf->__Vlvbound_h52a87fc1__0 = (0x1fU & ((IData)(vlSelf->__PVT__is_fadd)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__fma__DOT__fflags_fadd) 
                                                 >> 5U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__is_fsub)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__fma__DOT__fflags_fsub) 
                                                  >> 5U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__is_fmul)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__fma__DOT__fflags_fmul) 
                                                   >> 5U)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__is_fmadd)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__fma__DOT__fflags_fmadd) 
                                                    >> 5U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__is_fmsub)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__fma__DOT__fflags_fmsub) 
                                                     >> 5U)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__is_fnmadd)
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__fma__DOT__fflags_fnmadd) 
                                                      >> 5U)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__is_fnmsub)
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__fma__DOT__fflags_fnmsub) 
                                                       >> 5U)
                                                       : 0U))))))));
    vlSelf->__PVT__fma__DOT__result_fma = ((0xffffffffULL 
                                            & vlSelf->__PVT__fma__DOT__result_fma) 
                                           | ((QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__is_fadd)
                                                                ? 
                                                               vlSelf->__PVT__fma__DOT__result_fadd[2U]
                                                                : 
                                                               ((IData)(vlSelf->__PVT__is_fsub)
                                                                 ? 
                                                                vlSelf->__PVT__fma__DOT__result_fsub[2U]
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__is_fmul)
                                                                  ? 
                                                                 vlSelf->__PVT__fma__DOT__result_fmul[2U]
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__is_fmadd)
                                                                   ? 
                                                                  vlSelf->__PVT__fma__DOT__result_fmadd[2U]
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__is_fmsub)
                                                                    ? 
                                                                   vlSelf->__PVT__fma__DOT__result_fmsub[2U]
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__is_fnmadd)
                                                                     ? 
                                                                    vlSelf->__PVT__fma__DOT__result_fnmadd[2U]
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__is_fnmsub)
                                                                      ? 
                                                                     vlSelf->__PVT__fma__DOT__result_fnmsub[2U]
                                                                      : 0U))))))))) 
                                              << 0x20U));
    vlSelf->__PVT__fma__DOT__fflags_fma = ((0x1fU & (IData)(vlSelf->__PVT__fma__DOT__fflags_fma)) 
                                           | ((IData)(vlSelf->__Vlvbound_h52a87fc1__0) 
                                              << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[0U] = (IData)(vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__60__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_fle__61__result, vlSelf->__Vtask_dpi_fle__61__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[0U] = (IData)(vlSelf->__Vtask_dpi_fle__61__result);
    vlSelf->__PVT__fncp__DOT__result_fle[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__61__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h211fabc7__0 = vlSelf->__Vtask_dpi_fle__61__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fle)) 
                                            | (IData)(vlSelf->__Vlvbound_h211fabc7__0));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_flt__62__result, vlSelf->__Vtask_dpi_flt__62__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[0U] = (IData)(vlSelf->__Vtask_dpi_flt__62__result);
    vlSelf->__PVT__fncp__DOT__result_flt[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__62__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h56f728ba__0 = vlSelf->__Vtask_dpi_flt__62__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_flt)) 
                                            | (IData)(vlSelf->__Vlvbound_h56f728ba__0));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][0U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_feq__63__result, vlSelf->__Vtask_dpi_feq__63__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[0U] = (IData)(vlSelf->__Vtask_dpi_feq__63__result);
    vlSelf->__PVT__fncp__DOT__result_feq[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__63__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h6f32243e__0 = vlSelf->__Vtask_dpi_feq__63__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0x3e0U 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_feq)) 
                                            | (IData)(vlSelf->__Vlvbound_h6f32243e__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), vlSelf->__Vtask_dpi_fmin__64__result, vlSelf->__Vtask_dpi_fmin__64__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[0U] = (IData)(vlSelf->__Vtask_dpi_fmin__64__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__64__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2a86cb7b__0 = vlSelf->__Vtask_dpi_fmin__64__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmin)) 
                                             | (IData)(vlSelf->__Vlvbound_h2a86cb7b__0));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), vlSelf->__Vtask_dpi_fmax__65__result, vlSelf->__Vtask_dpi_fmax__65__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[0U] = (IData)(vlSelf->__Vtask_dpi_fmax__65__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__65__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_hbbf976b3__0 = vlSelf->__Vtask_dpi_fmax__65__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmax)) 
                                             | (IData)(vlSelf->__Vlvbound_hbbf976b3__0));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__66__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__67__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__68__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[2U] = (IData)(vlSelf->__Vtask_dpi_fclss__60__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__60__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fle_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_fle__61__result, vlSelf->__Vtask_dpi_fle__61__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[2U] = (IData)(vlSelf->__Vtask_dpi_fle__61__result);
    vlSelf->__PVT__fncp__DOT__result_fle[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__61__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h211fabc7__0 = vlSelf->__Vtask_dpi_fle__61__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fle = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fle)) 
                                            | ((IData)(vlSelf->__Vlvbound_h211fabc7__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_flt_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_flt__62__result, vlSelf->__Vtask_dpi_flt__62__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[2U] = (IData)(vlSelf->__Vtask_dpi_flt__62__result);
    vlSelf->__PVT__fncp__DOT__result_flt[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__62__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h56f728ba__0 = vlSelf->__Vtask_dpi_flt__62__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_flt = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_flt)) 
                                            | ((IData)(vlSelf->__Vlvbound_h56f728ba__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_feq_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][2U]))), 
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [1U][3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_feq__63__result, vlSelf->__Vtask_dpi_feq__63__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[2U] = (IData)(vlSelf->__Vtask_dpi_feq__63__result);
    vlSelf->__PVT__fncp__DOT__result_feq[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__63__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h6f32243e__0 = vlSelf->__Vtask_dpi_feq__63__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_feq = ((0x1fU 
                                             & (IData)(vlSelf->__PVT__fncp__DOT__fflags_feq)) 
                                            | ((IData)(vlSelf->__Vlvbound_h6f32243e__0) 
                                               << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmin_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), vlSelf->__Vtask_dpi_fmin__64__result, vlSelf->__Vtask_dpi_fmin__64__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[2U] = (IData)(vlSelf->__Vtask_dpi_fmin__64__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__64__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2a86cb7b__0 = vlSelf->__Vtask_dpi_fmin__64__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmin = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmin)) 
                                             | ((IData)(vlSelf->__Vlvbound_h2a86cb7b__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fmax_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), vlSelf->__Vtask_dpi_fmax__65__result, vlSelf->__Vtask_dpi_fmax__65__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[2U] = (IData)(vlSelf->__Vtask_dpi_fmax__65__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__65__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_hbbf976b3__0 = vlSelf->__Vtask_dpi_fmax__65__fflags;
    vlSelf->__PVT__fncp__DOT__fflags_fmax = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmax)) 
                                             | ((IData)(vlSelf->__Vlvbound_hbbf976b3__0) 
                                                << 5U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnj_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__66__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__66__result 
                                                          >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjn_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__67__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__67__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsgnjx_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), 
                                                              (((QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__68__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__68__result 
                                                           >> 0x20U));
    vlSelf->__PVT__fdiv__DOT__fdiv_fire = ((IData)(vlSelf->__PVT__fdiv__DOT__fdiv_valid) 
                                           & (IData)(vlSelf->__PVT__fdiv__DOT__fdiv_ready));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_fire = ((IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_valid) 
                                             & (IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_ready));
    vlSelf->__PVT__per_core_ready_in = ((0xdU & (IData)(vlSelf->__PVT__per_core_ready_in)) 
                                        | (((IData)(vlSelf->__PVT__is_div)
                                             ? (IData)(vlSelf->__PVT__fdiv__DOT__fdiv_ready)
                                             : (IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_ready)) 
                                           << 1U));
    vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged = 0U;
    vlSelf->__PVT__fma__DOT_____05Ffflags_merged = 0U;
    vlSelf->__PVT__fncp__DOT__result_fncp = vlSelf->__Vxrand_h66cc2c69__0;
    vlSelf->__PVT__fncp__DOT__fflags_fncp = vlSelf->__Vxrand_h9b57f0ef__0;
    if (((((((((0U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm)))) {
        vlSelf->__PVT__fncp__DOT__result_fncp = ((0xffffffff00000000ULL 
                                                  & vlSelf->__PVT__fncp__DOT__result_fncp) 
                                                 | (IData)((IData)(
                                                                   ((0U 
                                                                     == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__is_fcmp)
                                                                      ? 
                                                                     vlSelf->__PVT__fncp__DOT__result_fle[0U]
                                                                      : 
                                                                     vlSelf->__PVT__fncp__DOT__result_fsgnj[0U])
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__is_fcmp)
                                                                       ? 
                                                                      vlSelf->__PVT__fncp__DOT__result_flt[0U]
                                                                       : 
                                                                      vlSelf->__PVT__fncp__DOT__result_fsgnjn[0U])
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__is_fcmp)
                                                                        ? 
                                                                       vlSelf->__PVT__fncp__DOT__result_feq[0U]
                                                                        : 
                                                                       vlSelf->__PVT__fncp__DOT__result_fsgnjx[0U])
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                        ? 
                                                                       vlSelf->__PVT__fncp__DOT__result_fclss[0U]
                                                                        : 
                                                                       ((4U 
                                                                         == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                         ? 
                                                                        vlSelf->__PVT__fncp__DOT__result_fmvx[0U]
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                          ? 
                                                                         vlSelf->__PVT__fncp__DOT__result_fmvf[0U]
                                                                          : 
                                                                         ((6U 
                                                                           == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                           ? 
                                                                          vlSelf->__PVT__fncp__DOT__result_fmin[0U]
                                                                           : 
                                                                          vlSelf->__PVT__fncp__DOT__result_fmax[0U]))))))))));
        vlSelf->__PVT__fncp__DOT__result_fncp = ((0xffffffffULL 
                                                  & vlSelf->__PVT__fncp__DOT__result_fncp) 
                                                 | ((QData)((IData)(
                                                                    ((0U 
                                                                      == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__is_fcmp)
                                                                       ? 
                                                                      vlSelf->__PVT__fncp__DOT__result_fle[2U]
                                                                       : 
                                                                      vlSelf->__PVT__fncp__DOT__result_fsgnj[2U])
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__is_fcmp)
                                                                        ? 
                                                                       vlSelf->__PVT__fncp__DOT__result_flt[2U]
                                                                        : 
                                                                       vlSelf->__PVT__fncp__DOT__result_fsgnjn[2U])
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                        ? 
                                                                       ((IData)(vlSelf->__PVT__is_fcmp)
                                                                         ? 
                                                                        vlSelf->__PVT__fncp__DOT__result_feq[2U]
                                                                         : 
                                                                        vlSelf->__PVT__fncp__DOT__result_fsgnjx[2U])
                                                                        : 
                                                                       ((3U 
                                                                         == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                         ? 
                                                                        vlSelf->__PVT__fncp__DOT__result_fclss[2U]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                          ? 
                                                                         vlSelf->__PVT__fncp__DOT__result_fmvx[2U]
                                                                          : 
                                                                         ((5U 
                                                                           == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                           ? 
                                                                          vlSelf->__PVT__fncp__DOT__result_fmvf[2U]
                                                                           : 
                                                                          ((6U 
                                                                            == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))
                                                                            ? 
                                                                           vlSelf->__PVT__fncp__DOT__result_fmin[2U]
                                                                            : 
                                                                           vlSelf->__PVT__fncp__DOT__result_fmax[2U]))))))))) 
                                                    << 0x20U));
        if ((0U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
            vlSelf->__Vlvbound_h5881caf4__0 = (0x1fU 
                                               & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fle));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x3e0U & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | (IData)(vlSelf->__Vlvbound_h5881caf4__0));
            vlSelf->__Vlvbound_h5881caf4__0 = (0x1fU 
                                               & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fle) 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | ((IData)(vlSelf->__Vlvbound_h5881caf4__0) 
                    << 5U));
        } else if ((1U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
            vlSelf->__Vlvbound_h5881caf4__1 = (0x1fU 
                                               & (IData)(vlSelf->__PVT__fncp__DOT__fflags_flt));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x3e0U & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | (IData)(vlSelf->__Vlvbound_h5881caf4__1));
            vlSelf->__Vlvbound_h5881caf4__1 = (0x1fU 
                                               & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_flt) 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | ((IData)(vlSelf->__Vlvbound_h5881caf4__1) 
                    << 5U));
        } else if ((2U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
            vlSelf->__Vlvbound_h5881caf4__2 = (0x1fU 
                                               & (IData)(vlSelf->__PVT__fncp__DOT__fflags_feq));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x3e0U & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | (IData)(vlSelf->__Vlvbound_h5881caf4__2));
            vlSelf->__Vlvbound_h5881caf4__2 = (0x1fU 
                                               & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_feq) 
                                                  >> 5U));
            vlSelf->__PVT__fncp__DOT__fflags_fncp = 
                ((0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                 | ((IData)(vlSelf->__Vlvbound_h5881caf4__2) 
                    << 5U));
        } else if ((3U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
            if ((4U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                if ((5U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                    if ((6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm))) {
                        vlSelf->__Vlvbound_h5881caf4__3 
                            = (0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmin));
                        vlSelf->__PVT__fncp__DOT__fflags_fncp 
                            = ((0x3e0U & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                               | (IData)(vlSelf->__Vlvbound_h5881caf4__3));
                        vlSelf->__Vlvbound_h5881caf4__3 
                            = (0x1fU & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fmin) 
                                        >> 5U));
                        vlSelf->__PVT__fncp__DOT__fflags_fncp 
                            = ((0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                               | ((IData)(vlSelf->__Vlvbound_h5881caf4__3) 
                                  << 5U));
                    } else {
                        vlSelf->__Vlvbound_h5881caf4__4 
                            = (0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fmax));
                        vlSelf->__PVT__fncp__DOT__fflags_fncp 
                            = ((0x3e0U & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                               | (IData)(vlSelf->__Vlvbound_h5881caf4__4));
                        vlSelf->__Vlvbound_h5881caf4__4 
                            = (0x1fU & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fmax) 
                                        >> 5U));
                        vlSelf->__PVT__fncp__DOT__fflags_fncp 
                            = ((0x1fU & (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp)) 
                               | ((IData)(vlSelf->__Vlvbound_h5881caf4__4) 
                                  << 5U));
                    }
                }
            }
        }
    }
    if ((0x200000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fma__DOT__fflags_fma))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fma__DOT__fflags_fma))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fma__DOT__fflags_fma))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fma__DOT__fflags_fma))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelf->__PVT__fma__DOT__fflags_fma))));
    }
    if ((0x400000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                           >> 5U))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                         >> 5U)))));
        vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelf->__PVT__fcvt__DOT__fflags_fcvt) 
                                      >> 9U))) << 4U));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelf->__PVT__fma__DOT__fflags_fma) 
                           >> 5U))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelf->__PVT__fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelf->__PVT__fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelf->__PVT__fma__DOT__fflags_fma) 
                                         >> 5U)))));
        vlSelf->__PVT__fma__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelf->__PVT__fma__DOT__fflags_fma) 
                                      >> 9U))) << 4U));
    }
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__53__result, vlSelf->__Vtask_dpi_fdiv__53__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[0U] = (IData)(vlSelf->__Vtask_dpi_fdiv__53__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__53__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h00b0650d__0 = vlSelf->__Vtask_dpi_fdiv__53__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0x3e0U 
                                              & (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv)) 
                                             | (IData)(vlSelf->__Vlvbound_h00b0650d__0));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r = ((0xffffffff00000000ULL 
                                                & vlSelf->__PVT__fdiv__DOT__result_fdiv_r) 
                                               | (IData)((IData)(
                                                                 vlSelf->__PVT__fdiv__DOT__result_fdiv[0U])));
    VVortex___024unit____Vdpiimwrap_dpi_fdiv_TOP____024unit(vlSelf->__PVT__fdiv__DOT__fdiv_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))), 
                                                            (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [1U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__53__result, vlSelf->__Vtask_dpi_fdiv__53__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[2U] = (IData)(vlSelf->__Vtask_dpi_fdiv__53__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__53__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h00b0650d__0 = vlSelf->__Vtask_dpi_fdiv__53__fflags;
    vlSelf->__PVT__fdiv__DOT__fflags_fdiv = ((0x1fU 
                                              & (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv)) 
                                             | ((IData)(vlSelf->__Vlvbound_h00b0650d__0) 
                                                << 5U));
    vlSelf->__PVT__fdiv__DOT__result_fdiv_r = ((0xffffffffULL 
                                                & vlSelf->__PVT__fdiv__DOT__result_fdiv_r) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__fdiv__DOT__result_fdiv[2U])) 
                                                  << 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__54__result, vlSelf->__Vtask_dpi_fsqrt__54__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[0U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__54__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__54__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h23046ae6__0 = vlSelf->__Vtask_dpi_fsqrt__54__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0x3e0U 
                                                & (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)) 
                                               | (IData)(vlSelf->__Vlvbound_h23046ae6__0));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r = ((0xffffffff00000000ULL 
                                                  & vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r) 
                                                 | (IData)((IData)(
                                                                   vlSelf->__PVT__fsqrt__DOT__result_fsqrt[0U])));
    VVortex___024unit____Vdpiimwrap_dpi_fsqrt_TOP____024unit(vlSelf->__PVT__fsqrt__DOT__fsqrt_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__2__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__54__result, vlSelf->__Vtask_dpi_fsqrt__54__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[2U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__54__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__54__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h23046ae6__0 = vlSelf->__Vtask_dpi_fsqrt__54__fflags;
    vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt = ((0x1fU 
                                                & (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt)) 
                                               | ((IData)(vlSelf->__Vlvbound_h23046ae6__0) 
                                                  << 5U));
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r = ((0xffffffffULL 
                                                  & vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[2U])) 
                                                    << 0x20U));
    vlSelf->__PVT__fncp__DOT_____05Ffflags_merged = 0U;
    vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged = 0U;
    if ((0x200000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged = 0U;
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (0x10U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                           | (IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt))));
    } else {
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged = 0U;
    }
    if ((0x400000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                           >> 5U))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                         >> 5U)))));
        vlSelf->__PVT__fncp__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelf->__PVT__fncp__DOT__fflags_fncp) 
                                      >> 9U))) << 4U));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                           >> 5U))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                         >> 5U)))));
        vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelf->__PVT__fdiv__DOT__fflags_fdiv) 
                                      >> 9U))) << 4U));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1eU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (1U & ((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                        | ((IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                           >> 5U))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1dU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffeU & ((IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x1bU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffffcU & ((IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0x17U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
                        | (0x7fffff8U & ((IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                         >> 5U)))));
        vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged 
            = ((0xfU & (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged)) 
               | ((IData)((((IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged) 
                            >> 4U) | ((IData)(vlSelf->__PVT__fsqrt__DOT__fflags_fsqrt) 
                                      >> 9U))) << 4U));
    }
}

VL_INLINE_OPT void VVortex_VX_fpu_dpi__N2_T2_O1___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_dpi__0(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_fpu_dpi__N2_T2_O1___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_dpi__0\n"); );
    // Init
    IData/*31:0*/ __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i;
    VlWide<9>/*287:0*/ __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries;
    VlWide<34>/*1079:0*/ __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries;
    VlWide<23>/*719:0*/ __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries;
    VlWide<12>/*359:0*/ __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries;
    VlWide<5>/*145:0*/ __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries;
    VlWide<3>/*95:0*/ __Vtemp_hdeda3eb6__0;
    VlWide<3>/*95:0*/ __Vtemp_hb904b655__0;
    VlWide<3>/*95:0*/ __Vtemp_h6a54194d__0;
    VlWide<3>/*95:0*/ __Vtemp_hebf90fb0__0;
    VlWide<3>/*95:0*/ __Vtemp_h3954c419__0;
    VlWide<5>/*159:0*/ __Vtemp_he374970f__0;
    // Body
    vlSelf->__PVT__operands[0U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][0U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][1U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[0U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[0U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[6U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[5U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[1U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[1U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[4U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[3U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    vlSelf->__PVT__operands[2U][2U] = (IData)((QData)((IData)(
                                                              ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                << 0x1dU) 
                                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                                                                  >> 3U)))));
    vlSelf->__PVT__operands[2U][3U] = (IData)(((QData)((IData)(
                                                               ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                                                                 << 0x1dU) 
                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
                                                                   >> 3U)))) 
                                               >> 0x20U));
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U];
    __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U] 
        = vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x17U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x17U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x18U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x18U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x19U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x19U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1aU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1aU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1bU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1bU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1cU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1cU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1dU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1dU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1eU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1eU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1fU] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1fU];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x20U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x20U];
    __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x21U] 
        = vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x21U];
    if (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r) {
        vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state = 0U;
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r = 0U;
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state = 0U;
    } else {
        if (((0U != (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in)) 
             & ((IData)(vlSelf->__PVT__per_core_ready_out) 
                >> 1U))) {
            vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state 
                = vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall)))) {
            vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r 
                = (1U & (vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
                         >> 0xaU));
        }
        if (((0U != (IData)(vlSelf->__PVT__per_core_valid_out)) 
             & (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall)))) {
            vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state 
                = vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r;
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall)))) {
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U] 
            = vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U];
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U] 
            = vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U];
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U] 
            = (0x3ffU & vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U]);
    }
    __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x48U, __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x47U, __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r))) {
            __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                   (3U & (__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0 = 0U;
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x48U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x48U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0 = 0U;
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x90U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x90U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x90U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0 = 0U;
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0xd8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0xd8U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0) 
                                              << (0x1fU 
                                                  & ((IData)(0xd8U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0 = 0U;
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x120U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x120U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_had9bbe87__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x120U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__fcvt__DOT__fcvt_ready) {
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0 
                = (1U & ((0x167U >= (0x1ffU & ((IData)(0x48U) 
                                               + (0x7fU 
                                                  & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0x48U) 
                                       + (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                    (3U & (__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0) 
                                        << (0x1fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)));
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0 
                = (1U & ((0x167U >= (0x1ffU & ((IData)(0x90U) 
                                               + (0x7fU 
                                                  & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0x90U) 
                                       + (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x48U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x48U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0 
                = (1U & ((0x167U >= (0x1ffU & ((IData)(0xd8U) 
                                               + (0x7fU 
                                                  & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0xd8U) 
                                       + (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x90U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x90U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x90U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0 
                = (1U & ((0x167U >= (0x1ffU & ((IData)(0x120U) 
                                               + (0x7fU 
                                                  & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0x120U) 
                                       + (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x120U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0xd8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0xd8U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_hab636c7c__0) 
                                              << (0x1fU 
                                                  & ((IData)(0xd8U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_hdeda3eb6__0[0U] = (((IData)(vlSelf->__PVT__fcvt__DOT__result_fcvt) 
                                         << 5U) | (IData)(vlSelf->__PVT__fcvt__DOT_____05Ffflags_merged));
            __Vtemp_hdeda3eb6__0[1U] = (((IData)(vlSelf->__PVT__fcvt__DOT__result_fcvt) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (vlSelf->__PVT__fcvt__DOT__result_fcvt 
                                                    >> 0x20U)) 
                                           << 5U));
            __Vtemp_hdeda3eb6__0[2U] = (((IData)(vlSelf->__PVT__fcvt__DOT__fcvt_valid) 
                                         << 7U) | (
                                                   ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                                    << 5U) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__fcvt__DOT__result_fcvt 
                                                               >> 0x20U)) 
                                                      >> 0x1bU)));
            vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_h563768aa__0 
                = (1U & ((0x47U >= (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_hdeda3eb6__0[(3U 
                                                   & (__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                      >> 5U))] 
                             >> (0x1fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vxrand_h9b58951b__1)));
            if (VL_LIKELY((0x167U >= (0x1ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                          & (((IData)(0x120U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x120U) + 
                                  (0x7fU & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fcvt__DOT__shift_reg__DOT____Vlvbound_h563768aa__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x120U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i);
    }
    __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x48U, __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x47U, __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r))) {
            __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                     & (__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                        >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                   (3U & (__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0 = 0U;
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0x48U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x48U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0 = 0U;
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0x90U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x90U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x90U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0 = 0U;
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0xd8U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0xd8U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hea93ed70__0) 
                                              << (0x1fU 
                                                  & ((IData)(0xd8U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__fma__DOT__fma_ready) {
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0 
                = (1U & ((0x11fU >= (0x1ffU & ((IData)(0x48U) 
                                               + (0x7fU 
                                                  & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0x48U) 
                                       + (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fma__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                     & (__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                        >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                    (3U & (__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0) 
                                        << (0x1fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)));
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0 
                = (1U & ((0x11fU >= (0x1ffU & ((IData)(0x90U) 
                                               + (0x7fU 
                                                  & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0x90U) 
                                       + (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fma__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0x48U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x48U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0 
                = (1U & ((0x11fU >= (0x1ffU & ((IData)(0xd8U) 
                                               + (0x7fU 
                                                  & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0xfU & (((IData)(0xd8U) 
                                       + (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fma__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0x90U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0x90U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_hf17be9cf__0) 
                                              << (0x1fU 
                                                  & ((IData)(0x90U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_hb904b655__0[0U] = (((IData)(vlSelf->__PVT__fma__DOT__result_fma) 
                                         << 5U) | (IData)(vlSelf->__PVT__fma__DOT_____05Ffflags_merged));
            __Vtemp_hb904b655__0[1U] = (((IData)(vlSelf->__PVT__fma__DOT__result_fma) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (vlSelf->__PVT__fma__DOT__result_fma 
                                                    >> 0x20U)) 
                                           << 5U));
            __Vtemp_hb904b655__0[2U] = (((IData)(vlSelf->__PVT__fma__DOT__fma_valid) 
                                         << 7U) | (
                                                   ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                                    << 5U) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__fma__DOT__result_fma 
                                                               >> 0x20U)) 
                                                      >> 0x1bU)));
            vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_h2058a6de__0 
                = (1U & ((0x47U >= (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_hb904b655__0[(3U 
                                                   & (__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                      >> 5U))] 
                             >> (0x1fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->fma__DOT__shift_reg__DOT____Vxrand_h9b58951b__1)));
            if (VL_LIKELY((0x11fU >= (0x1ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[(0xfU 
                                                                         & (((IData)(0xd8U) 
                                                                             + 
                                                                             (0x7fU 
                                                                              & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                            >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0xfU & (((IData)(0xd8U) + 
                                  (0x7fU & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                 >> 5U))]) | ((IData)(vlSelf->fma__DOT__shift_reg__DOT____Vlvbound_h2058a6de__0) 
                                              << (0x1fU 
                                                  & ((IData)(0xd8U) 
                                                     + 
                                                     (0x7fU 
                                                      & __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i);
    }
    __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x49U, __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x48U, __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r))) {
            __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[
                   (3U & (__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_h5344c213__0 = 0U;
            if (VL_LIKELY((0x91U >= (0xffU & ((IData)(0x49U) 
                                              + (0x7fU 
                                                 & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[(7U 
                                                                          & (((IData)(0x49U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x49U) 
                                             + (0x7fU 
                                                & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (7U & (((IData)(0x49U) + (0x7fU 
                                                  & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                               >> 5U))]) | ((IData)(vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_h5344c213__0) 
                                            << (0x1fU 
                                                & ((IData)(0x49U) 
                                                   + 
                                                   (0x7fU 
                                                    & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__fncp__DOT__fncp_ready) {
            vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_he67dff96__0 
                = (1U & ((0x91U >= (0xffU & ((IData)(0x49U) 
                                             + (0x7fU 
                                                & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (7U & (((IData)(0x49U) 
                                     + (0x7fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(0x49U) 
                                                    + 
                                                    (0x7fU 
                                                     & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fncp__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[
                    (3U & (__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_he67dff96__0) 
                                        << (0x1fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)));
            __Vtemp_h6a54194d__0[0U] = (((IData)(vlSelf->__PVT__fncp__DOT__result_fncp) 
                                         << 5U) | (IData)(vlSelf->__PVT__fncp__DOT_____05Ffflags_merged));
            __Vtemp_h6a54194d__0[1U] = (((IData)(vlSelf->__PVT__fncp__DOT__result_fncp) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (vlSelf->__PVT__fncp__DOT__result_fncp 
                                                    >> 0x20U)) 
                                           << 5U));
            __Vtemp_h6a54194d__0[2U] = (((IData)(vlSelf->__PVT__fncp__DOT__fncp_valid) 
                                         << 8U) | (
                                                   ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                                    << 6U) 
                                                   | ((((6U 
                                                         <= (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm)) 
                                                        | (IData)(vlSelf->__PVT__is_fcmp)) 
                                                       << 5U) 
                                                      | ((IData)(
                                                                 (vlSelf->__PVT__fncp__DOT__result_fncp 
                                                                  >> 0x20U)) 
                                                         >> 0x1bU))));
            vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_h33c0b887__0 
                = (1U & ((0x48U >= (0x7fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_h6a54194d__0[(3U 
                                                   & (__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                      >> 5U))] 
                             >> (0x1fU & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->fncp__DOT__shift_reg__DOT____Vxrand_h9b58951b__1)));
            if (VL_LIKELY((0x91U >= (0xffU & ((IData)(0x49U) 
                                              + (0x7fU 
                                                 & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[(7U 
                                                                          & (((IData)(0x49U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x49U) 
                                             + (0x7fU 
                                                & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (7U & (((IData)(0x49U) + (0x7fU 
                                                  & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                               >> 5U))]) | ((IData)(vlSelf->fncp__DOT__shift_reg__DOT____Vlvbound_h33c0b887__0) 
                                            << (0x1fU 
                                                & ((IData)(0x49U) 
                                                   + 
                                                   (0x7fU 
                                                    & __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i);
    }
    __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x48U, __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x47U, __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r))) {
            __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                       & (__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                          >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                   (3U & (__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x48U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x48U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x90U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x90U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0xd8U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0xd8U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x120U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x120U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x120U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x168U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x168U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x168U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x168U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x168U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x1b0U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x1b0U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1b0U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x1b0U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1b0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x1f8U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x1f8U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1f8U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x1f8U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1f8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x240U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x240U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x240U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x240U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x240U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0 = 0U;
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x288U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x288U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x288U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x288U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_h7a6f1169__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x288U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__fsqrt__DOT__fsqrt_ready) {
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x48U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x48U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x48U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                       & (__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                          >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                    (3U & (__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                        << (0x1fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)));
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x90U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x90U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x90U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x48U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x48U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0xd8U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0xd8U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0xd8U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x90U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x90U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x120U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x120U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x120U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0xd8U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0xd8U) + 
                                   (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x168U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x168U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x168U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x120U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x120U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x120U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x1b0U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x1b0U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x1b0U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x168U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x168U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x168U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x168U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x168U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x1f8U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x1f8U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x1f8U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x1b0U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x1b0U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1b0U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x1b0U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1b0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x240U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x240U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x240U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x1f8U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x1f8U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1f8U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x1f8U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1f8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0 
                = (1U & ((0x2cfU >= (0x3ffU & ((IData)(0x288U) 
                                               + (0x7fU 
                                                  & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x1fU & (((IData)(0x288U) 
                                        + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x288U) 
                                       + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x240U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x240U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x240U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x240U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hc5aee17f__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x240U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_hebf90fb0__0[0U] = (((IData)(vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r) 
                                         << 5U) | (IData)(vlSelf->__PVT__fsqrt__DOT_____05Ffflags_merged));
            __Vtemp_hebf90fb0__0[1U] = (((IData)(vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r 
                                                    >> 0x20U)) 
                                           << 5U));
            __Vtemp_hebf90fb0__0[2U] = (((IData)(vlSelf->__PVT__fsqrt__DOT__fsqrt_valid) 
                                         << 7U) | (
                                                   ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                                    << 5U) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__fsqrt__DOT__result_fsqrt_r 
                                                               >> 0x20U)) 
                                                      >> 0x1bU)));
            vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hd60967cc__0 
                = (1U & ((0x47U >= (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_hebf90fb0__0[(3U 
                                                   & (__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                      >> 5U))] 
                             >> (0x1fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vxrand_h9b58951b__1)));
            if (VL_LIKELY((0x2cfU >= (0x3ffU & ((IData)(0x288U) 
                                                + (0x7fU 
                                                   & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x1fU 
                                                                           & (((IData)(0x288U) 
                                                                               + 
                                                                               (0x7fU 
                                                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                              >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x288U) 
                                             + (0x7fU 
                                                & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x1fU & (((IData)(0x288U) 
                                   + (0x7fU & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fsqrt__DOT__shift_reg__DOT____Vlvbound_hd60967cc__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x288U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i);
    }
    __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x48U, __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) {
        if ((VL_LTES_III(32, 0x47U, __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i) 
             & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT_____05Ffpu_reset__DOT__genblk1__DOT__reset_r))) {
            __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                   & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                   (3U & (__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                          >> 5U))]);
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x48U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x48U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x90U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x90U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0xd8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0xd8U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x120U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x120U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x120U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x168U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x168U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x168U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x168U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x168U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x1b0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x1b0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1b0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x1b0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1b0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x1f8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x1f8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1f8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x1f8U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1f8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x240U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x240U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x240U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x240U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x240U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x288U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x288U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x288U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x288U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x288U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x2d0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x2d0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x2d0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x2d0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x2d0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x318U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x318U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x318U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x318U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x318U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x360U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x360U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x360U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x360U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x360U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x3a8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x3a8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3a8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x3a8U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3a8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0 = 0U;
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x3f0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x3f0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3f0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x3f0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hbac3ffee__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3f0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        } else if (vlSelf->__PVT__fdiv__DOT__fdiv_ready) {
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x48U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x48U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x48U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(3U 
                                                                      & (__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                                         >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))) 
                    & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                    (3U & (__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                        << (0x1fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)));
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x90U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x90U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x90U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x48U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x48U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x48U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x48U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0xd8U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0xd8U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0xd8U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x90U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x90U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x90U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x90U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x90U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x120U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x120U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x120U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0xd8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0xd8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0xd8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0xd8U) + 
                                   (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0xd8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x168U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x168U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x168U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x120U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x120U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x120U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x120U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x120U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x1b0U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x1b0U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x1b0U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x168U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x168U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x168U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x168U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x168U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x1f8U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x1f8U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x1f8U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x1b0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x1b0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1b0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x1b0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1b0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x240U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x240U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x240U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x1f8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x1f8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x1f8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x1f8U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x1f8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x288U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x288U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x288U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x240U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x240U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x240U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x240U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x240U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x2d0U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x2d0U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x2d0U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x288U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x288U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x288U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x288U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x288U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x318U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x318U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x318U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x2d0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x2d0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x2d0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x2d0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x2d0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x360U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x360U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x360U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x318U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x318U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x318U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x318U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x318U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x3a8U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x3a8U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x3a8U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x360U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x360U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x360U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x360U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x360U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0 
                = (1U & ((0x437U >= (0x7ffU & ((IData)(0x3f0U) 
                                               + (0x7fU 
                                                  & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          ? (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                             (0x3fU & (((IData)(0x3f0U) 
                                        + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                       >> 5U))] >> 
                             (0x1fU & ((IData)(0x3f0U) 
                                       + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__0)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x3a8U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x3a8U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3a8U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x3a8U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_hcd3d2dfb__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3a8U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
            __Vtemp_h3954c419__0[0U] = (((IData)(vlSelf->__PVT__fdiv__DOT__result_fdiv_r) 
                                         << 5U) | (IData)(vlSelf->__PVT__fdiv__DOT_____05Ffflags_merged));
            __Vtemp_h3954c419__0[1U] = (((IData)(vlSelf->__PVT__fdiv__DOT__result_fdiv_r) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (vlSelf->__PVT__fdiv__DOT__result_fdiv_r 
                                                    >> 0x20U)) 
                                           << 5U));
            __Vtemp_h3954c419__0[2U] = (((IData)(vlSelf->__PVT__fdiv__DOT__fdiv_valid) 
                                         << 7U) | (
                                                   ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__tag_store__DOT__allocator__DOT__acquire_addr_r) 
                                                    << 5U) 
                                                   | ((IData)(
                                                              (vlSelf->__PVT__fdiv__DOT__result_fdiv_r 
                                                               >> 0x20U)) 
                                                      >> 0x1bU)));
            vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_h503d6ec1__0 
                = (1U & ((0x47U >= (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          ? (__Vtemp_h3954c419__0[(3U 
                                                   & (__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
                                                      >> 5U))] 
                             >> (0x1fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))
                          : (IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vxrand_h9b58951b__1)));
            if (VL_LIKELY((0x437U >= (0x7ffU & ((IData)(0x3f0U) 
                                                + (0x7fU 
                                                   & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))))) {
                __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[(0x3fU 
                                                                          & (((IData)(0x3f0U) 
                                                                              + 
                                                                              (0x7fU 
                                                                               & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                                                             >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x3f0U) 
                                             + (0x7fU 
                                                & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i))))) 
                        & __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[
                        (0x3fU & (((IData)(0x3f0U) 
                                   + (0x7fU & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)) 
                                  >> 5U))]) | ((IData)(vlSelf->fdiv__DOT__shift_reg__DOT____Vlvbound_h503d6ec1__0) 
                                               << (0x1fU 
                                                   & ((IData)(0x3f0U) 
                                                      + 
                                                      (0x7fU 
                                                       & __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i)))));
            }
        }
        __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = __Vdly__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = __Vdly__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    vlSelf->__Vtableidx7 = (0xfU & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U] 
                                    >> 0x11U));
    vlSelf->__PVT__is_fadd = VVortex__ConstPool__TABLE_he5873c6d_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fsub = VVortex__ConstPool__TABLE_hf4e66895_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fmul = VVortex__ConstPool__TABLE_hea639f5c_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fmadd = VVortex__ConstPool__TABLE_h654ca46e_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fmsub = VVortex__ConstPool__TABLE_h638a629f_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fnmadd = VVortex__ConstPool__TABLE_hc6d37415_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fnmsub = VVortex__ConstPool__TABLE_hcbfd6d22_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_div = VVortex__ConstPool__TABLE_h454b5b0c_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_fcmp = VVortex__ConstPool__TABLE_hca5c4cb8_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_itof = VVortex__ConstPool__TABLE_h54d78c29_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_utof = VVortex__ConstPool__TABLE_h83052c29_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_ftoi = VVortex__ConstPool__TABLE_h32021d26_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_ftou = VVortex__ConstPool__TABLE_hb62e4706_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__is_f2f = VVortex__ConstPool__TABLE_hc80541b1_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__dst_fmt = VVortex__ConstPool__TABLE_hc6b7c1e1_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__int_fmt = VVortex__ConstPool__TABLE_hc6b7c1e1_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__core_select = VVortex__ConstPool__TABLE_h57ee0b9c_0
        [vlSelf->__Vtableidx7];
    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = __Vdly__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U];
    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U] 
        = __Vdly__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[3U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[4U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[5U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[5U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[6U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[6U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[7U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[7U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[8U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[8U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[9U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[9U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xaU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xbU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xcU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xdU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xeU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0xfU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x10U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x11U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x12U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x13U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x14U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x15U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x16U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x17U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x17U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x18U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x18U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x19U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x19U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1aU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1aU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1bU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1bU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1cU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1cU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1dU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1dU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1eU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1eU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1fU] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x1fU];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x20U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x20U];
    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x21U] 
        = __Vdly__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0x21U];
    vlSelf->__PVT__per_core_tag_out = ((0xcfU & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | (0x30U & (
                                                   vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                   >> 1U)));
    vlSelf->__PVT__per_core_result[4U] = (IData)((((QData)((IData)(
                                                                   vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                        >> 5U))));
    vlSelf->__PVT__per_core_result[5U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                         >> 5U))) 
                                                  >> 0x20U));
    vlSelf->__PVT__per_core_fflags = ((0xf83ffU & vlSelf->__PVT__per_core_fflags) 
                                      | (0x7c00U & 
                                         (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                          << 0xaU)));
    vlSelf->__PVT__per_core_valid_out = ((0xbU & (IData)(vlSelf->__PVT__per_core_valid_out)) 
                                         | (4U & (vlSelf->__PVT__fcvt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                  >> 5U)));
    vlSelf->__PVT__fncp__DOT__result_fmvx[0U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][0U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][0U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[1U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][0U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][0U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvx[2U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][3U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][2U])))
                                                          : 
                                                         VL_EXTENDS_QI(64,32, 
                                                                       vlSelf->__PVT__operands
                                                                       [0U][2U])));
    vlSelf->__PVT__fncp__DOT__result_fmvx[3U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][3U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][2U])))
                                                           : 
                                                          VL_EXTENDS_QI(64,32, 
                                                                        vlSelf->__PVT__operands
                                                                        [0U][2U])) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvf[0U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][0U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][0U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[1U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][0U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][0U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__fncp__DOT__result_fmvf[2U] = (IData)(
                                                        ((IData)(vlSelf->__PVT__dst_fmt)
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__operands
                                                                           [0U][3U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][2U])))
                                                          : 
                                                         (0xffffffff00000000ULL 
                                                          | (((QData)((IData)(
                                                                              vlSelf->__PVT__operands
                                                                              [0U][3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][2U]))))));
    vlSelf->__PVT__fncp__DOT__result_fmvf[3U] = (IData)(
                                                        (((IData)(vlSelf->__PVT__dst_fmt)
                                                           ? 
                                                          (((QData)((IData)(
                                                                            vlSelf->__PVT__operands
                                                                            [0U][3U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__operands
                                                                             [0U][2U])))
                                                           : 
                                                          (0xffffffff00000000ULL 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))))) 
                                                         >> 0x20U));
    vlSelf->__PVT__per_core_tag_out = ((0x3fU & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | (0xc0U & vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U]));
    vlSelf->__PVT__per_core_has_fflags = ((7U & (IData)(vlSelf->__PVT__per_core_has_fflags)) 
                                          | (8U & (
                                                   vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                   >> 2U)));
    vlSelf->__PVT__per_core_result[6U] = (IData)((((QData)((IData)(
                                                                   vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                        >> 5U))));
    vlSelf->__PVT__per_core_result[7U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                         >> 5U))) 
                                                  >> 0x20U));
    vlSelf->__PVT__per_core_fflags = ((0x7fffU & vlSelf->__PVT__per_core_fflags) 
                                      | (0xf8000U & 
                                         (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                          << 0xfU)));
    vlSelf->__PVT__per_core_valid_out = ((7U & (IData)(vlSelf->__PVT__per_core_valid_out)) 
                                         | (8U & (vlSelf->__PVT__fncp__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                  >> 5U)));
    vlSelf->__Vcellinp__div_sqrt_arb__valid_in = ((2U 
                                                   & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                      >> 6U)) 
                                                  | (1U 
                                                     & (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                        >> 7U)));
    vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r 
        = (1U & (~ ((1U == (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                             << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
                    | (5U == (5U & (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                                     << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in)))))));
    vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r 
        = (((1U == (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                     << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
            | (5U == (5U & (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                             << 2U) | (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in)))))
            ? 1U : 2U);
    vlSelf->__PVT__per_core_valid_out = ((0xcU & (IData)(vlSelf->__PVT__per_core_valid_out)) 
                                         | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->__Vcellinp__div_sqrt_arb__valid_in))) 
                                             << 1U) 
                                            | (1U & 
                                               (vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                >> 7U))));
    __Vtemp_he374970f__0[0U] = (0x80U | (((IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                         >> 5U)))) 
                                          << 8U) | 
                                         ((0x7cU & 
                                           (vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                            << 2U)) 
                                          | (3U & (
                                                   vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                   >> 5U)))));
    __Vtemp_he374970f__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                           << 0x3bU) 
                                          | (((QData)((IData)(
                                                              vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                              << 0x1bU) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                >> 5U)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                              >> 5U))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_he374970f__0[2U] = (0x8000U | ((((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                       << 0x3bU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                          << 0x1bU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                            >> 5U)))) 
                                             << 0x10U) 
                                            | ((0x7c00U 
                                                & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U] 
                                                   << 0xaU)) 
                                               | (0x300U 
                                                  & (vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                     << 3U)))) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__PVT__fdiv__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                              >> 5U))) 
                                                       >> 0x20U)) 
                                              >> 0x18U)));
    __Vtemp_he374970f__0[3U] = ((0xffU & ((IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                         >> 5U)))) 
                                          >> 0x10U)) 
                                | ((0xff00U & ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                              >> 5U)))) 
                                               >> 0x10U)) 
                                   | ((IData)(((((QData)((IData)(
                                                                 vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                    << 0x1bU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                      >> 5U))) 
                                               >> 0x20U)) 
                                      << 0x10U)));
    __Vtemp_he374970f__0[4U] = ((0xffU & ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                        << 0x1bU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                          >> 5U))) 
                                                   >> 0x20U)) 
                                          >> 0x10U)) 
                                | (0xff00U & ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                            << 0x1bU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__PVT__fsqrt__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                              >> 5U))) 
                                                       >> 0x20U)) 
                                              >> 0x10U)));
    if ((0x8fU >= (0xffU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))) {
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_he374970f__0[((IData)(1U) 
                                               + (7U 
                                                  & (((IData)(0x48U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_he374970f__0[(7U & (((IData)(0x48U) 
                                               * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U))] 
                  >> (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (__Vtemp_he374970f__0[((IData)(2U) 
                                               + (7U 
                                                  & (((IData)(0x48U) 
                                                      * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                     >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (__Vtemp_he374970f__0[((IData)(1U) 
                                        + (7U & (((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                  >> (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
    } else {
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h7e15b196__0[0U];
        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            = vlSelf->div_sqrt_arb__DOT____Vxrand_h7e15b196__0[1U];
    }
    vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
        = (((IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r) 
            << 8U) | (0xffU & ((0x8fU >= (0xffU & ((IData)(0x48U) 
                                                   * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                ? (((0U == (0x1fU & 
                                            ((IData)(0x48U) 
                                             * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                     ? 0U : (__Vtemp_he374970f__0[
                                             ((IData)(3U) 
                                              + (7U 
                                                 & (((IData)(0x48U) 
                                                     * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                    >> 5U)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x48U) 
                                                     * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                                   | (__Vtemp_he374970f__0[
                                      ((IData)(2U) 
                                       + (7U & (((IData)(0x48U) 
                                                 * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U)))] 
                                      >> (0x1fU & ((IData)(0x48U) 
                                                   * (IData)(vlSelf->__PVT__div_sqrt_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
                                : vlSelf->div_sqrt_arb__DOT____Vxrand_h7e15b196__0[2U])));
    vlSelf->__Vtableidx8 = (((IData)(vlSelf->__PVT__per_core_valid_out) 
                             << 2U) | (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r 
        = VVortex__ConstPool__TABLE_hd4629e97_0[vlSelf->__Vtableidx8];
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r 
        = VVortex__ConstPool__TABLE_hf73fbda4_0[vlSelf->__Vtableidx8];
    vlSelf->__PVT__per_core_has_fflags = ((9U & (IData)(vlSelf->__PVT__per_core_has_fflags)) 
                                          | (4U | (2U 
                                                   & (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                                      >> 6U))));
    vlSelf->__PVT__per_core_result[0U] = (IData)((((QData)((IData)(
                                                                   vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                   << 0x3bU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                      << 0x1bU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                        >> 5U))));
    vlSelf->__PVT__per_core_result[1U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U])) 
                                                    << 0x3bU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[1U])) 
                                                       << 0x1bU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])) 
                                                         >> 5U))) 
                                                  >> 0x20U));
    vlSelf->__PVT__per_core_result[2U] = (IData)((((QData)((IData)(
                                                                   vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U])) 
                                                   << 0x38U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U])) 
                                                        >> 8U))));
    vlSelf->__PVT__per_core_result[3U] = (IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U])) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U])) 
                                                       << 0x18U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U])) 
                                                         >> 8U))) 
                                                  >> 0x20U));
    vlSelf->__PVT__per_core_fflags = ((0xffc00U & vlSelf->__PVT__per_core_fflags) 
                                      | ((0x3e0U & 
                                          (vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                           << 3U)) 
                                         | (0x1fU & 
                                            vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[0U])));
    vlSelf->__PVT__per_core_tag_out = ((0xf0U & (IData)(vlSelf->__PVT__per_core_tag_out)) 
                                       | ((0xcU & (
                                                   vlSelf->div_sqrt_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
                                                   << 2U)) 
                                          | (3U & (
                                                   vlSelf->__PVT__fma__DOT__shift_reg__DOT__genblk1__DOT__entries[2U] 
                                                   >> 5U))));
    vlSelf->__PVT__per_core_data_out[0U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__per_core_result[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__per_core_result[0U])))) 
                                             << 8U) 
                                            | ((0x80U 
                                                & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                   << 7U)) 
                                               | ((0x7cU 
                                                   & (vlSelf->__PVT__per_core_fflags 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (IData)(vlSelf->__PVT__per_core_tag_out)))));
    vlSelf->__PVT__per_core_data_out[1U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->__PVT__per_core_result[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__per_core_result[0U])))) 
                                             >> 0x18U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[0U]))) 
                                                        >> 0x20U)) 
                                               << 8U));
    vlSelf->__PVT__per_core_data_out[2U] = ((0xffffff00U 
                                             & vlSelf->__PVT__per_core_data_out[2U]) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[0U]))) 
                                                        >> 0x20U)) 
                                               >> 0x18U));
    vlSelf->__PVT__per_core_data_out[2U] = ((0xffU 
                                             & vlSelf->__PVT__per_core_data_out[2U]) 
                                            | (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[2U])))) 
                                                << 0x10U) 
                                               | ((0x8000U 
                                                   & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                      << 0xeU)) 
                                                  | ((0x7c00U 
                                                      & (vlSelf->__PVT__per_core_fflags 
                                                         << 5U)) 
                                                     | (0x300U 
                                                        & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                           << 6U))))));
    vlSelf->__PVT__per_core_data_out[3U] = ((0xffU 
                                             & ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[2U])))) 
                                                >> 0x10U)) 
                                            | ((0xff00U 
                                                & ((IData)(
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__per_core_result[3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[2U])))) 
                                                   >> 0x10U)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->__PVT__per_core_result[3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[2U]))) 
                                                           >> 0x20U)) 
                                                  << 0x10U)));
    vlSelf->__PVT__per_core_data_out[4U] = ((0xffff0000U 
                                             & vlSelf->__PVT__per_core_data_out[4U]) 
                                            | ((0xffU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__per_core_result[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x10U)) 
                                               | (0xff00U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->__PVT__per_core_result[3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__per_core_result[2U]))) 
                                                              >> 0x20U)) 
                                                     >> 0x10U))));
    vlSelf->__PVT__per_core_data_out[4U] = ((0xffffU 
                                             & vlSelf->__PVT__per_core_data_out[4U]) 
                                            | (((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[5U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[4U])))) 
                                                << 0x18U) 
                                               | ((0x800000U 
                                                   & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                      << 0x15U)) 
                                                  | ((0x7c0000U 
                                                      & (vlSelf->__PVT__per_core_fflags 
                                                         << 8U)) 
                                                     | (0x30000U 
                                                        & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                           << 0xcU))))));
    vlSelf->__PVT__per_core_data_out[5U] = ((0xffffU 
                                             & ((IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[5U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[4U])))) 
                                                >> 8U)) 
                                            | ((0xff0000U 
                                                & ((IData)(
                                                           (((QData)((IData)(
                                                                             vlSelf->__PVT__per_core_result[5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[4U])))) 
                                                   >> 8U)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->__PVT__per_core_result[5U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[4U]))) 
                                                           >> 0x20U)) 
                                                  << 0x18U)));
    vlSelf->__PVT__per_core_data_out[6U] = ((0xff000000U 
                                             & vlSelf->__PVT__per_core_data_out[6U]) 
                                            | ((0xffffU 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->__PVT__per_core_result[5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__per_core_result[4U]))) 
                                                            >> 0x20U)) 
                                                   >> 8U)) 
                                               | (0xff0000U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->__PVT__per_core_result[5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->__PVT__per_core_result[4U]))) 
                                                              >> 0x20U)) 
                                                     >> 8U))));
    vlSelf->__PVT__per_core_data_out[6U] = ((0xffffffU 
                                             & vlSelf->__PVT__per_core_data_out[6U]) 
                                            | ((0x80000000U 
                                                & ((IData)(vlSelf->__PVT__per_core_has_fflags) 
                                                   << 0x1cU)) 
                                               | ((0x7c000000U 
                                                   & (vlSelf->__PVT__per_core_fflags 
                                                      << 0xbU)) 
                                                  | (0x3000000U 
                                                     & ((IData)(vlSelf->__PVT__per_core_tag_out) 
                                                        << 0x12U)))));
    vlSelf->__PVT__per_core_data_out[7U] = ((0xffffffU 
                                             & (IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->__PVT__per_core_result[7U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[6U]))))) 
                                            | (0xff000000U 
                                               & (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[7U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__per_core_result[6U]))))));
    vlSelf->__PVT__per_core_data_out[8U] = ((0xffffffU 
                                             & (IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->__PVT__per_core_result[7U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__per_core_result[6U]))) 
                                                        >> 0x20U))) 
                                            | (0xff000000U 
                                               & (IData)(
                                                         ((((QData)((IData)(
                                                                            vlSelf->__PVT__per_core_result[7U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->__PVT__per_core_result[6U]))) 
                                                          >> 0x20U))));
    if ((0x11fU >= (0x1ffU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))) {
        vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
            = (((0U == (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(1U) + (0xfU & (((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  (0xfU & (((IData)(0x48U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x48U) 
                                                 * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
        vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
            = (((0U == (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                 ? 0U : (vlSelf->__PVT__per_core_data_out[
                         ((IData)(2U) + (0xfU & (((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x48U) 
                                                  * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
               | (vlSelf->__PVT__per_core_data_out[
                  ((IData)(1U) + (0xfU & (((IData)(0x48U) 
                                           * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                          >> 5U)))] 
                  >> (0x1fU & ((IData)(0x48U) * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))));
    } else {
        vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[0U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h7e15b196__0[0U];
        vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[1U] 
            = vlSelf->rsp_arb__DOT____Vxrand_h7e15b196__0[1U];
    }
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in[2U] 
        = (((IData)((0U != (IData)(vlSelf->__PVT__per_core_valid_out))) 
            << 0xaU) | (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r) 
                         << 8U) | (0xffU & ((0x11fU 
                                             >= (0x1ffU 
                                                 & ((IData)(0x48U) 
                                                    * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x48U) 
                                                      * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__per_core_data_out[
                                                  ((IData)(3U) 
                                                   + 
                                                   (0xfU 
                                                    & (((IData)(0x48U) 
                                                        * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x48U) 
                                                       * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                                                | (vlSelf->__PVT__per_core_data_out[
                                                   ((IData)(2U) 
                                                    + 
                                                    (0xfU 
                                                     & (((IData)(0x48U) 
                                                         * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x48U) 
                                                       * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
                                             : vlSelf->rsp_arb__DOT____Vxrand_h7e15b196__0[2U]))));
}
