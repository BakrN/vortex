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

VL_INLINE_OPT void VVortex_VX_fpu_dpi__N2_T2_O1___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_dpi__1(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_fpu_dpi__N2_T2_O1___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_dpi__1\n"); );
    // Body
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[0U] 
        = vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[0U];
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[1U] 
        = vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[1U];
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
        = (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r) 
            << 0xaU) | vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d[2U]);
    vlSelf->__PVT__fdiv__DOT__fdiv_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_valid) 
                                             & (1U 
                                                == (IData)(vlSelf->__PVT__core_select))) 
                                            & (IData)(vlSelf->__PVT__is_div));
    vlSelf->__PVT__fsqrt__DOT__fsqrt_valid = (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_valid) 
                                               & (1U 
                                                  == (IData)(vlSelf->__PVT__core_select))) 
                                              & (~ (IData)(vlSelf->__PVT__is_div)));
    vlSelf->__PVT__fcvt__DOT__fcvt_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_valid) 
                                            & (2U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__fma__DOT__fma_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_valid) 
                                          & (0U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__fncp__DOT__fncp_valid = ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_valid) 
                                            & (3U == (IData)(vlSelf->__PVT__core_select)));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall 
        = (IData)(((vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[2U] 
                    >> 0xaU) & (~ ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__gather_unit__DOT__commit_in_ready) 
                                   >> 3U))));
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
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__78__result, vlSelf->__Vtask_dpi_itof__78__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[0U] = (IData)(vlSelf->__Vtask_dpi_itof__78__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__78__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2e9bfe6a__0 = vlSelf->__Vtask_dpi_itof__78__fflags;
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
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__79__result, vlSelf->__Vtask_dpi_utof__79__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[0U] = (IData)(vlSelf->__Vtask_dpi_utof__79__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__79__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h4bd064b9__0 = vlSelf->__Vtask_dpi_utof__79__fflags;
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
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__80__result, vlSelf->__Vtask_dpi_ftoi__80__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[0U] = (IData)(vlSelf->__Vtask_dpi_ftoi__80__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__80__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h29370721__0 = vlSelf->__Vtask_dpi_ftoi__80__fflags;
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
                                                                               [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__81__result, vlSelf->__Vtask_dpi_ftou__81__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[0U] = (IData)(vlSelf->__Vtask_dpi_ftou__81__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__81__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2849bae9__0 = vlSelf->__Vtask_dpi_ftou__81__fflags;
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
                                                                              [0U][0U]))), vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[0U] = (IData)(vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__82__result 
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
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_itof__78__result, vlSelf->__Vtask_dpi_itof__78__fflags);
    vlSelf->__PVT__fcvt__DOT__result_itof[2U] = (IData)(vlSelf->__Vtask_dpi_itof__78__result);
    vlSelf->__PVT__fcvt__DOT__result_itof[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_itof__78__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2e9bfe6a__0 = vlSelf->__Vtask_dpi_itof__78__fflags;
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
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_utof__79__result, vlSelf->__Vtask_dpi_utof__79__fflags);
    vlSelf->__PVT__fcvt__DOT__result_utof[2U] = (IData)(vlSelf->__Vtask_dpi_utof__79__result);
    vlSelf->__PVT__fcvt__DOT__result_utof[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_utof__79__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h4bd064b9__0 = vlSelf->__Vtask_dpi_utof__79__fflags;
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
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftoi__80__result, vlSelf->__Vtask_dpi_ftoi__80__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[2U] = (IData)(vlSelf->__Vtask_dpi_ftoi__80__result);
    vlSelf->__PVT__fcvt__DOT__result_ftoi[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftoi__80__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h29370721__0 = vlSelf->__Vtask_dpi_ftoi__80__fflags;
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
                                                                               [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_ftou__81__result, vlSelf->__Vtask_dpi_ftou__81__fflags);
    vlSelf->__PVT__fcvt__DOT__result_ftou[2U] = (IData)(vlSelf->__Vtask_dpi_ftou__81__result);
    vlSelf->__PVT__fcvt__DOT__result_ftou[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_ftou__81__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2849bae9__0 = vlSelf->__Vtask_dpi_ftou__81__fflags;
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
                                                                              [0U][2U]))), vlSelf->__Vtask_dpi_f2f__82__result);
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
    vlSelf->__PVT__fcvt__DOT__result_f2f[2U] = (IData)(vlSelf->__Vtask_dpi_f2f__82__result);
    vlSelf->__PVT__fcvt__DOT__result_f2f[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_f2f__82__result 
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
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__69__result, vlSelf->__Vtask_dpi_fadd__69__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[0U] = (IData)(vlSelf->__Vtask_dpi_fadd__69__result);
    vlSelf->__PVT__fma__DOT__result_fadd[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__69__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hd0358701__0 = vlSelf->__Vtask_dpi_fadd__69__fflags;
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
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__70__result, vlSelf->__Vtask_dpi_fsub__70__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[0U] = (IData)(vlSelf->__Vtask_dpi_fsub__70__result);
    vlSelf->__PVT__fma__DOT__result_fsub[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__70__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h3e5a0693__0 = vlSelf->__Vtask_dpi_fsub__70__fflags;
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
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__71__result, vlSelf->__Vtask_dpi_fmul__71__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[0U] = (IData)(vlSelf->__Vtask_dpi_fmul__71__result);
    vlSelf->__PVT__fma__DOT__result_fmul[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__71__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hbdab4cf9__0 = vlSelf->__Vtask_dpi_fmul__71__fflags;
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
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__72__result, vlSelf->__Vtask_dpi_fmadd__72__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fmadd__72__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__72__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h57c9cc29__0 = vlSelf->__Vtask_dpi_fmadd__72__fflags;
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
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__73__result, vlSelf->__Vtask_dpi_fmsub__73__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fmsub__73__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__73__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6d7b0f8b__0 = vlSelf->__Vtask_dpi_fmsub__73__fflags;
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
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__74__result, vlSelf->__Vtask_dpi_fnmadd__74__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[0U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__74__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__74__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hf5e73f0f__0 = vlSelf->__Vtask_dpi_fnmadd__74__fflags;
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
                                                                                [2U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__75__result, vlSelf->__Vtask_dpi_fnmsub__75__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[0U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__75__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__75__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h33426f81__0 = vlSelf->__Vtask_dpi_fnmsub__75__fflags;
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
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fadd__69__result, vlSelf->__Vtask_dpi_fadd__69__fflags);
    vlSelf->__PVT__fma__DOT__result_fadd[2U] = (IData)(vlSelf->__Vtask_dpi_fadd__69__result);
    vlSelf->__PVT__fma__DOT__result_fadd[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fadd__69__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hd0358701__0 = vlSelf->__Vtask_dpi_fadd__69__fflags;
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
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsub__70__result, vlSelf->__Vtask_dpi_fsub__70__fflags);
    vlSelf->__PVT__fma__DOT__result_fsub[2U] = (IData)(vlSelf->__Vtask_dpi_fsub__70__result);
    vlSelf->__PVT__fma__DOT__result_fsub[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fsub__70__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h3e5a0693__0 = vlSelf->__Vtask_dpi_fsub__70__fflags;
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
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmul__71__result, vlSelf->__Vtask_dpi_fmul__71__fflags);
    vlSelf->__PVT__fma__DOT__result_fmul[2U] = (IData)(vlSelf->__Vtask_dpi_fmul__71__result);
    vlSelf->__PVT__fma__DOT__result_fmul[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fmul__71__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_hbdab4cf9__0 = vlSelf->__Vtask_dpi_fmul__71__fflags;
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
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmadd__72__result, vlSelf->__Vtask_dpi_fmadd__72__fflags);
    vlSelf->__PVT__fma__DOT__result_fmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fmadd__72__result);
    vlSelf->__PVT__fma__DOT__result_fmadd[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmadd__72__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h57c9cc29__0 = vlSelf->__Vtask_dpi_fmadd__72__fflags;
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
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fmsub__73__result, vlSelf->__Vtask_dpi_fmsub__73__fflags);
    vlSelf->__PVT__fma__DOT__result_fmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fmsub__73__result);
    vlSelf->__PVT__fma__DOT__result_fmsub[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmsub__73__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h6d7b0f8b__0 = vlSelf->__Vtask_dpi_fmsub__73__fflags;
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
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmadd__74__result, vlSelf->__Vtask_dpi_fnmadd__74__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmadd[2U] = (IData)(vlSelf->__Vtask_dpi_fnmadd__74__result);
    vlSelf->__PVT__fma__DOT__result_fnmadd[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmadd__74__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_hf5e73f0f__0 = vlSelf->__Vtask_dpi_fnmadd__74__fflags;
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
                                                                                [2U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fnmsub__75__result, vlSelf->__Vtask_dpi_fnmsub__75__fflags);
    vlSelf->__PVT__fma__DOT__result_fnmsub[2U] = (IData)(vlSelf->__Vtask_dpi_fnmsub__75__result);
    vlSelf->__PVT__fma__DOT__result_fnmsub[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fnmsub__75__result 
                                                          >> 0x20U));
    vlSelf->__Vlvbound_h33426f81__0 = vlSelf->__Vtask_dpi_fnmsub__75__fflags;
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
                                                                                [0U][0U]))), vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[0U] = (IData)(vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__83__result 
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
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_fle__84__result, vlSelf->__Vtask_dpi_fle__84__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[0U] = (IData)(vlSelf->__Vtask_dpi_fle__84__result);
    vlSelf->__PVT__fncp__DOT__result_fle[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__84__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h211fabc7__0 = vlSelf->__Vtask_dpi_fle__84__fflags;
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
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_flt__85__result, vlSelf->__Vtask_dpi_flt__85__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[0U] = (IData)(vlSelf->__Vtask_dpi_flt__85__result);
    vlSelf->__PVT__fncp__DOT__result_flt[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__85__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h56f728ba__0 = vlSelf->__Vtask_dpi_flt__85__fflags;
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
                                                                              [1U][0U]))), vlSelf->__Vtask_dpi_feq__86__result, vlSelf->__Vtask_dpi_feq__86__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[0U] = (IData)(vlSelf->__Vtask_dpi_feq__86__result);
    vlSelf->__PVT__fncp__DOT__result_feq[1U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__86__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h6f32243e__0 = vlSelf->__Vtask_dpi_feq__86__fflags;
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
                                                                               [1U][0U]))), vlSelf->__Vtask_dpi_fmin__87__result, vlSelf->__Vtask_dpi_fmin__87__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[0U] = (IData)(vlSelf->__Vtask_dpi_fmin__87__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__87__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2a86cb7b__0 = vlSelf->__Vtask_dpi_fmin__87__fflags;
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
                                                                               [1U][0U]))), vlSelf->__Vtask_dpi_fmax__88__result, vlSelf->__Vtask_dpi_fmax__88__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[0U] = (IData)(vlSelf->__Vtask_dpi_fmax__88__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__88__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_hbbf976b3__0 = vlSelf->__Vtask_dpi_fmax__88__fflags;
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
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[1U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__89__result 
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
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__90__result 
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
                                                                                [1U][0U]))), vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[0U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__91__result 
                                                           >> 0x20U));
    VVortex___024unit____Vdpiimwrap_dpi_fclss_TOP____024unit(vlSelf->__PVT__fncp__DOT__fncp_fire, (IData)(vlSelf->__PVT__dst_fmt), 
                                                             (((QData)((IData)(
                                                                               vlSelf->__PVT__operands
                                                                               [0U][3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__operands
                                                                                [0U][2U]))), vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[2U] = (IData)(vlSelf->__Vtask_dpi_fclss__83__result);
    vlSelf->__PVT__fncp__DOT__result_fclss[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fclss__83__result 
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
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_fle__84__result, vlSelf->__Vtask_dpi_fle__84__fflags);
    vlSelf->__PVT__fncp__DOT__result_fle[2U] = (IData)(vlSelf->__Vtask_dpi_fle__84__result);
    vlSelf->__PVT__fncp__DOT__result_fle[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_fle__84__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h211fabc7__0 = vlSelf->__Vtask_dpi_fle__84__fflags;
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
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_flt__85__result, vlSelf->__Vtask_dpi_flt__85__fflags);
    vlSelf->__PVT__fncp__DOT__result_flt[2U] = (IData)(vlSelf->__Vtask_dpi_flt__85__result);
    vlSelf->__PVT__fncp__DOT__result_flt[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_flt__85__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h56f728ba__0 = vlSelf->__Vtask_dpi_flt__85__fflags;
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
                                                                              [1U][2U]))), vlSelf->__Vtask_dpi_feq__86__result, vlSelf->__Vtask_dpi_feq__86__fflags);
    vlSelf->__PVT__fncp__DOT__result_feq[2U] = (IData)(vlSelf->__Vtask_dpi_feq__86__result);
    vlSelf->__PVT__fncp__DOT__result_feq[3U] = (IData)(
                                                       (vlSelf->__Vtask_dpi_feq__86__result 
                                                        >> 0x20U));
    vlSelf->__Vlvbound_h6f32243e__0 = vlSelf->__Vtask_dpi_feq__86__fflags;
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
                                                                               [1U][2U]))), vlSelf->__Vtask_dpi_fmin__87__result, vlSelf->__Vtask_dpi_fmin__87__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmin[2U] = (IData)(vlSelf->__Vtask_dpi_fmin__87__result);
    vlSelf->__PVT__fncp__DOT__result_fmin[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmin__87__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h2a86cb7b__0 = vlSelf->__Vtask_dpi_fmin__87__fflags;
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
                                                                               [1U][2U]))), vlSelf->__Vtask_dpi_fmax__88__result, vlSelf->__Vtask_dpi_fmax__88__fflags);
    vlSelf->__PVT__fncp__DOT__result_fmax[2U] = (IData)(vlSelf->__Vtask_dpi_fmax__88__result);
    vlSelf->__PVT__fncp__DOT__result_fmax[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fmax__88__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_hbbf976b3__0 = vlSelf->__Vtask_dpi_fmax__88__fflags;
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
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnj__89__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnj[3U] = (IData)(
                                                         (vlSelf->__Vtask_dpi_fsgnj__89__result 
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
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjn__90__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjn[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjn__90__result 
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
                                                                                [1U][2U]))), vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[2U] = (IData)(vlSelf->__Vtask_dpi_fsgnjx__91__result);
    vlSelf->__PVT__fncp__DOT__result_fsgnjx[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsgnjx__91__result 
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
    if (((((((((0U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm)) 
               | (1U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
              | (2U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
             | (3U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
            | (4U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
           | (5U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
          | (6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) 
         | (7U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm)))) {
        vlSelf->__PVT__fncp__DOT__result_fncp = ((0xffffffff00000000ULL 
                                                  & vlSelf->__PVT__fncp__DOT__result_fncp) 
                                                 | (IData)((IData)(
                                                                   ((0U 
                                                                     == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__is_fcmp)
                                                                      ? 
                                                                     vlSelf->__PVT__fncp__DOT__result_fle[0U]
                                                                      : 
                                                                     vlSelf->__PVT__fncp__DOT__result_fsgnj[0U])
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__is_fcmp)
                                                                       ? 
                                                                      vlSelf->__PVT__fncp__DOT__result_flt[0U]
                                                                       : 
                                                                      vlSelf->__PVT__fncp__DOT__result_fsgnjn[0U])
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__is_fcmp)
                                                                        ? 
                                                                       vlSelf->__PVT__fncp__DOT__result_feq[0U]
                                                                        : 
                                                                       vlSelf->__PVT__fncp__DOT__result_fsgnjx[0U])
                                                                       : 
                                                                      ((3U 
                                                                        == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                        ? 
                                                                       vlSelf->__PVT__fncp__DOT__result_fclss[0U]
                                                                        : 
                                                                       ((4U 
                                                                         == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                         ? 
                                                                        vlSelf->__PVT__fncp__DOT__result_fmvx[0U]
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                          ? 
                                                                         vlSelf->__PVT__fncp__DOT__result_fmvf[0U]
                                                                          : 
                                                                         ((6U 
                                                                           == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                           ? 
                                                                          vlSelf->__PVT__fncp__DOT__result_fmin[0U]
                                                                           : 
                                                                          vlSelf->__PVT__fncp__DOT__result_fmax[0U]))))))))));
        vlSelf->__PVT__fncp__DOT__result_fncp = ((0xffffffffULL 
                                                  & vlSelf->__PVT__fncp__DOT__result_fncp) 
                                                 | ((QData)((IData)(
                                                                    ((0U 
                                                                      == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__is_fcmp)
                                                                       ? 
                                                                      vlSelf->__PVT__fncp__DOT__result_fle[2U]
                                                                       : 
                                                                      vlSelf->__PVT__fncp__DOT__result_fsgnj[2U])
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__is_fcmp)
                                                                        ? 
                                                                       vlSelf->__PVT__fncp__DOT__result_flt[2U]
                                                                        : 
                                                                       vlSelf->__PVT__fncp__DOT__result_fsgnjn[2U])
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                        ? 
                                                                       ((IData)(vlSelf->__PVT__is_fcmp)
                                                                         ? 
                                                                        vlSelf->__PVT__fncp__DOT__result_feq[2U]
                                                                         : 
                                                                        vlSelf->__PVT__fncp__DOT__result_fsgnjx[2U])
                                                                        : 
                                                                       ((3U 
                                                                         == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                         ? 
                                                                        vlSelf->__PVT__fncp__DOT__result_fclss[2U]
                                                                         : 
                                                                        ((4U 
                                                                          == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                          ? 
                                                                         vlSelf->__PVT__fncp__DOT__result_fmvx[2U]
                                                                          : 
                                                                         ((5U 
                                                                           == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                           ? 
                                                                          vlSelf->__PVT__fncp__DOT__result_fmvf[2U]
                                                                           : 
                                                                          ((6U 
                                                                            == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))
                                                                            ? 
                                                                           vlSelf->__PVT__fncp__DOT__result_fmin[2U]
                                                                            : 
                                                                           vlSelf->__PVT__fncp__DOT__result_fmax[2U]))))))))) 
                                                    << 0x20U));
        if ((0U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
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
        } else if ((1U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
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
        } else if ((2U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
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
        } else if ((3U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
            if ((4U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
                if ((5U != (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
                    if ((6U == (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm))) {
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
    if ((0x200000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
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
    if ((0x400000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
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
                                                                               [1U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__76__result, vlSelf->__Vtask_dpi_fdiv__76__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[0U] = (IData)(vlSelf->__Vtask_dpi_fdiv__76__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[1U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__76__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h00b0650d__0 = vlSelf->__Vtask_dpi_fdiv__76__fflags;
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
                                                                               [1U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fdiv__76__result, vlSelf->__Vtask_dpi_fdiv__76__fflags);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[2U] = (IData)(vlSelf->__Vtask_dpi_fdiv__76__result);
    vlSelf->__PVT__fdiv__DOT__result_fdiv[3U] = (IData)(
                                                        (vlSelf->__Vtask_dpi_fdiv__76__result 
                                                         >> 0x20U));
    vlSelf->__Vlvbound_h00b0650d__0 = vlSelf->__Vtask_dpi_fdiv__76__fflags;
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
                                                                                [0U][0U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__77__result, vlSelf->__Vtask_dpi_fsqrt__77__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[0U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__77__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[1U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__77__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h23046ae6__0 = vlSelf->__Vtask_dpi_fsqrt__77__fflags;
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
                                                                                [0U][2U]))), (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__genblk1__BRA__3__KET____DOT__fpu_req_frm), vlSelf->__Vtask_dpi_fsqrt__77__result, vlSelf->__Vtask_dpi_fsqrt__77__fflags);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[2U] = (IData)(vlSelf->__Vtask_dpi_fsqrt__77__result);
    vlSelf->__PVT__fsqrt__DOT__result_fsqrt[3U] = (IData)(
                                                          (vlSelf->__Vtask_dpi_fsqrt__77__result 
                                                           >> 0x20U));
    vlSelf->__Vlvbound_h23046ae6__0 = vlSelf->__Vtask_dpi_fsqrt__77__fflags;
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
    if ((0x200000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
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
    if ((0x400000U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__fpu_unit__DOT__dispatch_unit.genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out[8U])) {
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
