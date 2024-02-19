// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_smem_switch__pi17.h"
#include "VVortex__Syms.h"

extern const VlUnpacked<CData/*2:0*/, 16> VVortex__ConstPool__TABLE_h4893871c_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h9e1d19ab_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h233ace7c_0;
extern const VlUnpacked<CData/*0:0*/, 16> VVortex__ConstPool__TABLE_h519abc85_0;

VL_INLINE_OPT void VVortex_VX_smem_switch__pi17___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_switch__DOT__genblk1__DOT__valid_out_r;
    QData/*35:0*/ rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out;
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    QData/*63:0*/ __Vtemp_h0f294ba4__0;
    VlWide<5>/*159:0*/ __Vtemp_he8ff83cd__0;
    VlWide<5>/*159:0*/ __Vtemp_h3b013ee4__0;
    // Body
    __PVT__req_switch__DOT__genblk1__DOT__valid_out_r 
        = ((2U & (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                   & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[0U]) 
                  << 1U)) | (1U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                                   & (~ vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[0U]))));
    if (vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h0f294ba4__0 = (0xfffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]))));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((0xfU & vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]) 
               | ((IData)((0xfffffffffULL & (((QData)((IData)(
                                                              vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]))))) 
                  << 4U));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = (0xffU & (((IData)(__Vtemp_h0f294ba4__0) 
                         >> 0x1cU) | ((IData)((__Vtemp_h0f294ba4__0 
                                               >> 0x20U)) 
                                      << 4U)));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = (IData)((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))) 
                        << 0x23U) | (0x7ffffffffULL 
                                     & ((0x45U >= (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                         ? (((QData)((IData)(
                                                             vlSelf->__PVT__rsp_data_out[
                                                             (((IData)(0x22U) 
                                                               + 
                                                               (0x7fU 
                                                                & ((IData)(0x23U) 
                                                                   * 
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelf->__PVT__rsp_data_out[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__rsp_data_out[
                                                                  (3U 
                                                                   & (((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))))
                                         : vlSelf->rsp_arb__DOT____Vxrand_h66a6ee59__0))));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((0xfffffff0U & vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]) 
               | (IData)(((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))) 
                            << 0x23U) | (0x7ffffffffULL 
                                         & ((0x45U 
                                             >= (0x7fU 
                                                 & ((IData)(0x23U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->__PVT__rsp_data_out[
                                                                 (((IData)(0x22U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x23U) 
                                                         * 
                                                         (1U 
                                                          & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelf->__PVT__rsp_data_out[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x23U) 
                                                                           * 
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__rsp_data_out[
                                                                      (3U 
                                                                       & (((IData)(0x23U) 
                                                                           * 
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))))
                                             : vlSelf->rsp_arb__DOT____Vxrand_h66a6ee59__0))) 
                          >> 0x20U)));
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx3])) {
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx3];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx3])) {
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx3];
    }
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx3];
    if (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_he8ff83cd__0[2U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     << 6U) | vlSelf->__PVT__req_data_in[2U]);
        __Vtemp_he8ff83cd__0[3U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     >> 0x1aU) | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                                  << 6U));
        __Vtemp_he8ff83cd__0[4U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                     >> 0x1aU) | (0xfc0U 
                                                  & (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
                                                     << 6U)));
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = vlSelf->__PVT__req_data_in[0U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = vlSelf->__PVT__req_data_in[1U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = __Vtemp_he8ff83cd__0[2U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = __Vtemp_he8ff83cd__0[3U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = __Vtemp_he8ff83cd__0[4U];
    }
    if (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h3b013ee4__0[2U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     << 6U) | vlSelf->__PVT__req_data_in[2U]);
        __Vtemp_h3b013ee4__0[3U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     >> 0x1aU) | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                                  << 6U));
        __Vtemp_h3b013ee4__0[4U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                     >> 0x1aU) | (0xfc0U 
                                                  & (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
                                                     << 6U)));
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = vlSelf->__PVT__req_data_in[0U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = vlSelf->__PVT__req_data_in[1U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = __Vtemp_h3b013ee4__0[2U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = __Vtemp_h3b013ee4__0[3U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = __Vtemp_h3b013ee4__0[4U];
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx2])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx2];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx2])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx2];
    }
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx2];
    __Vtableidx1 = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx1])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx1];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx1])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx1];
    vlSelf->__PVT__rsp_data_out[0U] = (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__0__KET____DOT__cache_arb__DOT__rsp_data_in);
    vlSelf->__PVT__rsp_data_out[1U] = (((IData)((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__rsp_data 
                                                 >> 3U)) 
                                        << 3U) | (IData)(
                                                         (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__0__KET____DOT__cache_arb__DOT__rsp_data_in 
                                                          >> 0x20U)));
    vlSelf->__PVT__rsp_data_out[2U] = ((0x38U & ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__rsp_data) 
                                                 << 3U)) 
                                       | ((IData)((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__rsp_data 
                                                   >> 3U)) 
                                          >> 0x1dU));
    vlSelf->__PVT__rsp_valid_out = ((2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_rsp_valid) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__genblk4__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    vlSelf->__PVT__req_data_in[0U] = (IData)((((QData)((IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[2U] 
                                                                   >> 6U)))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[2U] 
                                                                      >> 2U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[1U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[0U] 
                                                                       >> 4U)))))));
    vlSelf->__PVT__req_data_in[1U] = ((0xffffffe0U 
                                       & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[1U] 
                                          << 1U)) | (IData)(
                                                            ((((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[2U] 
                                                                                >> 6U)))) 
                                                               << 0x24U) 
                                                              | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[2U] 
                                                                                >> 2U)))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[0U] 
                                                                                >> 4U)))))) 
                                                             >> 0x20U)));
    vlSelf->__PVT__req_data_in[2U] = ((0x38U & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[0U] 
                                                << 2U)) 
                                      | (7U & ((0x1eU 
                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[2U] 
                                                   << 1U)) 
                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[1U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((0U != (IData)(vlSelf->__PVT__rsp_valid_out)) 
           & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_ready_out = ((- (IData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r))) 
                                    & ((2U & ((~ (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->__PVT__rsp_valid_out))));
    rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
        = (0xfffffffffULL & ((0x47U >= (0x7fU & ((IData)(0x24U) 
                                                 * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                              ? (((QData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                  (((IData)(0x23U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x24U) 
                                                        * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(0x24U) 
                                                 * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x24U) 
                                                      * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(0x24U) 
                                                * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x24U) 
                                                                      * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x24U) 
                                                     * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                    | ((QData)((IData)(
                                                       vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                       (3U 
                                                        & (((IData)(0x24U) 
                                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((IData)(0x24U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))))
                              : vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h669af165__0));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r 
        = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r;
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = ((1U & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r)) 
           | ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r) 
              << 1U));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = (((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
            >> 1U) & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_valid_out = ((1U & (IData)(vlSelf->__PVT__req_valid_out)) 
                                    | ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                       << 1U));
    vlSelf->__Vcellout__req_switch__data_out[2U] = 
        ((0x3fU & vlSelf->__Vcellout__req_switch__data_out[2U]) 
         | (((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
              ? (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                   ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                           ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(0x46U) 
                                                    * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                 | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                    (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
              : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U]) 
            << 6U));
    vlSelf->__Vcellout__req_switch__data_out[3U] = 
        ((((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
            ? (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                               * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
            : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U]) 
          >> 0x1aU) | (((0x8bU >= (0xffU & ((IData)(0x46U) 
                                            * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                         ? (((0U == (0x1fU & ((IData)(0x46U) 
                                              * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                              ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                      ((IData)(2U) 
                                       + (7U & (((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                            | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                               ((IData)(1U) + (7U & 
                                               (((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                               >> (0x1fU & ((IData)(0x46U) 
                                            * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                         : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U]) 
                       << 6U));
    vlSelf->__Vcellout__req_switch__data_out[4U] = 
        (0xfffU & ((((0x8bU >= (0xffU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                      ? (((0U == (0x1fU & ((IData)(0x46U) 
                                           * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                           ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                   ((IData)(2U) + (7U 
                                                   & (((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                         | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                      : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U]) 
                    >> 0x1aU) | (0xfc0U & (((0x8bU 
                                             >= (0xffU 
                                                 & ((IData)(0x46U) 
                                                    * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x46U) 
                                                      * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                  ((IData)(3U) 
                                                   + 
                                                   (7U 
                                                    & (((IData)(0x46U) 
                                                        * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                                | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                   ((IData)(2U) 
                                                    + 
                                                    (7U 
                                                     & (((IData)(0x46U) 
                                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                                             : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[2U]) 
                                           << 6U))));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r 
        = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r;
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = ((2U & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r)) 
           | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_valid_out = ((2U & (IData)(vlSelf->__PVT__req_valid_out)) 
                                    | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    if ((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))) {
        vlSelf->__Vcellout__req_switch__data_out[0U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                               * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))));
        vlSelf->__Vcellout__req_switch__data_out[1U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  ((IData)(1U) + (7U & (((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))));
    } else {
        vlSelf->__Vcellout__req_switch__data_out[0U] 
            = vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U];
        vlSelf->__Vcellout__req_switch__data_out[1U] 
            = vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U];
    }
    vlSelf->__Vcellout__req_switch__data_out[2U] = 
        ((0xffffffc0U & vlSelf->__Vcellout__req_switch__data_out[2U]) 
         | (0x3fU & ((0x8bU >= (0xffU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                      ? (((0U == (0x1fU & ((IData)(0x46U) 
                                           * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                           ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                   ((IData)(3U) + (7U 
                                                   & (((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                         | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                      : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[2U])));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__rsp_data 
        = (((QData)((IData)(rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out)) 
            << 4U) | (QData)((IData)(((0xeU & ((IData)(
                                                       (rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
                                                        >> 0x20U)) 
                                               << 1U)) 
                                      | (1U & (IData)(
                                                      (rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
                                                       >> 0x23U)))))));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__req_data[0U] 
        = ((0xfffffff8U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__req_data[0U]) 
           | (7U & (vlSelf->__Vcellout__req_switch__data_out[4U] 
                    >> 9U)));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__req_data[0U] 
        = ((7U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__req_data[0U]) 
           | ((IData)((((QData)((IData)((0x3fffffffU 
                                         & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                             << 0x15U) 
                                            | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                               >> 0xbU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                        >> 6U)))))) 
              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__req_data[1U] 
        = (((IData)((((QData)((IData)((0x3fffffffU 
                                       & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                           << 0x15U) 
                                          | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                             >> 0xbU))))) 
                      << 0x20U) | (QData)((IData)((
                                                   (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                      >> 6U)))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (0x3fffffffU 
                                                     & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                                         << 0x15U) 
                                                        | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                           >> 0xbU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                    >> 6U))))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__req_data[2U] 
        = (0x3fU & (((6U & (vlSelf->__Vcellout__req_switch__data_out[3U] 
                            >> 5U)) | ((IData)(((((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                                                       << 0x15U) 
                                                                      | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                         >> 0xbU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                     << 0x1aU) 
                                                                    | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                       >> 6U))))) 
                                                >> 0x20U)) 
                                       >> 0x1dU)) | 
                    (0x38U & (vlSelf->__Vcellout__req_switch__data_out[3U] 
                              >> 5U))));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__0__KET__.__PVT__req_data[0U] 
        = ((0xfffffff8U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__0__KET__.__PVT__req_data[0U]) 
           | (7U & (vlSelf->__Vcellout__req_switch__data_out[2U] 
                    >> 3U)));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__0__KET__.__PVT__req_data[0U] 
        = ((7U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__0__KET__.__PVT__req_data[0U]) 
           | ((IData)((((QData)((IData)((0x3fffffffU 
                                         & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                             << 0x1bU) 
                                            | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                               >> 5U))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__Vcellout__req_switch__data_out[0U])))) 
              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__0__KET__.__PVT__req_data[1U] 
        = (((IData)((((QData)((IData)((0x3fffffffU 
                                       & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                           << 0x1bU) 
                                          | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                             >> 5U))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->__Vcellout__req_switch__data_out[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (0x3fffffffU 
                                                     & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                         << 0x1bU) 
                                                        | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                                           >> 5U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__Vcellout__req_switch__data_out[0U]))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__0__KET__.__PVT__req_data[2U] 
        = (0x3fU & (((6U & (vlSelf->__Vcellout__req_switch__data_out[1U] 
                            << 1U)) | ((IData)(((((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                       << 0x1bU) 
                                                                      | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                                                         >> 5U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__Vcellout__req_switch__data_out[0U]))) 
                                                >> 0x20U)) 
                                       >> 0x1dU)) | 
                    (0x38U & (vlSelf->__Vcellout__req_switch__data_out[1U] 
                              << 1U))));
}

VL_INLINE_OPT void VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_ready_out;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__mem_scheduler__DOT__mem_rsp_sel__DOT__genblk3__DOT__rsp_ready_sel));
    __PVT__req_ready_out = ((2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_req_ready) 
                                   << 1U)) | (1U & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__core_req_ready)));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (IData)(__PVT__req_ready_out));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & ((IData)(__PVT__req_ready_out) >> 1U));
}

VL_INLINE_OPT void VVortex_VX_smem_switch__pi17___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_switch__DOT__genblk1__DOT__valid_out_r;
    QData/*35:0*/ rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out;
    CData/*3:0*/ __Vtableidx4;
    CData/*3:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    QData/*63:0*/ __Vtemp_h0f294ba4__0;
    VlWide<5>/*159:0*/ __Vtemp_he8ff83cd__0;
    VlWide<5>/*159:0*/ __Vtemp_h3b013ee4__0;
    // Body
    __PVT__req_switch__DOT__genblk1__DOT__valid_out_r 
        = ((2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                  & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[0U] 
                     << 1U))) | (1U & (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                                        >> 1U) & (~ 
                                                  vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[0U]))));
    if (vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h0f294ba4__0 = (0xfffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]))));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((0xfU & vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]) 
               | ((IData)((0xfffffffffULL & (((QData)((IData)(
                                                              vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]))))) 
                  << 4U));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = (0xffU & (((IData)(__Vtemp_h0f294ba4__0) 
                         >> 0x1cU) | ((IData)((__Vtemp_h0f294ba4__0 
                                               >> 0x20U)) 
                                      << 4U)));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = (IData)((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))) 
                        << 0x23U) | (0x7ffffffffULL 
                                     & ((0x45U >= (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                         ? (((QData)((IData)(
                                                             vlSelf->__PVT__rsp_data_out[
                                                             (((IData)(0x22U) 
                                                               + 
                                                               (0x7fU 
                                                                & ((IData)(0x23U) 
                                                                   * 
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelf->__PVT__rsp_data_out[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__rsp_data_out[
                                                                  (3U 
                                                                   & (((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))))
                                         : vlSelf->rsp_arb__DOT____Vxrand_h66a6ee59__0))));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((0xfffffff0U & vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]) 
               | (IData)(((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))) 
                            << 0x23U) | (0x7ffffffffULL 
                                         & ((0x45U 
                                             >= (0x7fU 
                                                 & ((IData)(0x23U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->__PVT__rsp_data_out[
                                                                 (((IData)(0x22U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x23U) 
                                                         * 
                                                         (1U 
                                                          & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelf->__PVT__rsp_data_out[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x23U) 
                                                                           * 
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__rsp_data_out[
                                                                      (3U 
                                                                       & (((IData)(0x23U) 
                                                                           * 
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))))
                                             : vlSelf->rsp_arb__DOT____Vxrand_h66a6ee59__0))) 
                          >> 0x20U)));
    }
    __Vtableidx6 = (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx6])) {
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx6];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx6])) {
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx6];
    }
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx6];
    if (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_he8ff83cd__0[2U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     << 6U) | vlSelf->__PVT__req_data_in[2U]);
        __Vtemp_he8ff83cd__0[3U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     >> 0x1aU) | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                                  << 6U));
        __Vtemp_he8ff83cd__0[4U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                     >> 0x1aU) | (0xfc0U 
                                                  & (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
                                                     << 6U)));
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = vlSelf->__PVT__req_data_in[0U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = vlSelf->__PVT__req_data_in[1U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = __Vtemp_he8ff83cd__0[2U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = __Vtemp_he8ff83cd__0[3U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = __Vtemp_he8ff83cd__0[4U];
    }
    if (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h3b013ee4__0[2U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     << 6U) | vlSelf->__PVT__req_data_in[2U]);
        __Vtemp_h3b013ee4__0[3U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     >> 0x1aU) | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                                  << 6U));
        __Vtemp_h3b013ee4__0[4U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                     >> 0x1aU) | (0xfc0U 
                                                  & (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
                                                     << 6U)));
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = vlSelf->__PVT__req_data_in[0U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = vlSelf->__PVT__req_data_in[1U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = __Vtemp_h3b013ee4__0[2U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = __Vtemp_h3b013ee4__0[3U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = __Vtemp_h3b013ee4__0[4U];
    }
    __Vtableidx5 = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx5])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx5];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx5])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx5];
    }
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx5];
    __Vtableidx4 = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx4])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx4];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx4])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx4];
    }
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx4];
    vlSelf->__PVT__rsp_data_out[0U] = (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__1__KET____DOT__cache_arb__DOT__rsp_data_in);
    vlSelf->__PVT__rsp_data_out[1U] = (((IData)((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__rsp_data 
                                                 >> 3U)) 
                                        << 3U) | (IData)(
                                                         (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__1__KET____DOT__cache_arb__DOT__rsp_data_in 
                                                          >> 0x20U)));
    vlSelf->__PVT__rsp_data_out[2U] = ((0x38U & ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__rsp_data) 
                                                 << 3U)) 
                                       | ((IData)((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__rsp_data 
                                                   >> 3U)) 
                                          >> 0x1dU));
    vlSelf->__PVT__rsp_valid_out = ((2U & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_rsp_valid)) 
                                    | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__genblk4__BRA__1__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    vlSelf->__PVT__req_data_in[0U] = (IData)((((QData)((IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[2U] 
                                                                   >> 6U)))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[2U] 
                                                                      >> 2U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[1U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[0U] 
                                                                       >> 4U)))))));
    vlSelf->__PVT__req_data_in[1U] = ((0xffffffe0U 
                                       & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[1U] 
                                          << 1U)) | (IData)(
                                                            ((((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[2U] 
                                                                                >> 6U)))) 
                                                               << 0x24U) 
                                                              | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[2U] 
                                                                                >> 2U)))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[0U] 
                                                                                >> 4U)))))) 
                                                             >> 0x20U)));
    vlSelf->__PVT__req_data_in[2U] = ((0x38U & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[0U] 
                                                << 2U)) 
                                      | (7U & ((0x1eU 
                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[2U] 
                                                   << 1U)) 
                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[1U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((0U != (IData)(vlSelf->__PVT__rsp_valid_out)) 
           & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_ready_out = ((- (IData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r))) 
                                    & ((2U & ((~ (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->__PVT__rsp_valid_out))));
    rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
        = (0xfffffffffULL & ((0x47U >= (0x7fU & ((IData)(0x24U) 
                                                 * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                              ? (((QData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                  (((IData)(0x23U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x24U) 
                                                        * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(0x24U) 
                                                 * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x24U) 
                                                      * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(0x24U) 
                                                * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x24U) 
                                                                      * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x24U) 
                                                     * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                    | ((QData)((IData)(
                                                       vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                       (3U 
                                                        & (((IData)(0x24U) 
                                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((IData)(0x24U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))))
                              : vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h669af165__0));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r 
        = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r;
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = ((1U & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r)) 
           | ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r) 
              << 1U));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = (((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
            >> 1U) & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_valid_out = ((1U & (IData)(vlSelf->__PVT__req_valid_out)) 
                                    | ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                       << 1U));
    vlSelf->__Vcellout__req_switch__data_out[2U] = 
        ((0x3fU & vlSelf->__Vcellout__req_switch__data_out[2U]) 
         | (((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
              ? (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                   ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                           ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(0x46U) 
                                                    * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                 | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                    (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
              : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U]) 
            << 6U));
    vlSelf->__Vcellout__req_switch__data_out[3U] = 
        ((((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
            ? (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                               * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
            : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U]) 
          >> 0x1aU) | (((0x8bU >= (0xffU & ((IData)(0x46U) 
                                            * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                         ? (((0U == (0x1fU & ((IData)(0x46U) 
                                              * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                              ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                      ((IData)(2U) 
                                       + (7U & (((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                            | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                               ((IData)(1U) + (7U & 
                                               (((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                               >> (0x1fU & ((IData)(0x46U) 
                                            * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                         : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U]) 
                       << 6U));
    vlSelf->__Vcellout__req_switch__data_out[4U] = 
        (0xfffU & ((((0x8bU >= (0xffU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                      ? (((0U == (0x1fU & ((IData)(0x46U) 
                                           * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                           ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                   ((IData)(2U) + (7U 
                                                   & (((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                         | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                      : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U]) 
                    >> 0x1aU) | (0xfc0U & (((0x8bU 
                                             >= (0xffU 
                                                 & ((IData)(0x46U) 
                                                    * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x46U) 
                                                      * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                  ((IData)(3U) 
                                                   + 
                                                   (7U 
                                                    & (((IData)(0x46U) 
                                                        * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                                | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                   ((IData)(2U) 
                                                    + 
                                                    (7U 
                                                     & (((IData)(0x46U) 
                                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                                             : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[2U]) 
                                           << 6U))));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r 
        = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r;
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = ((2U & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r)) 
           | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_valid_out = ((2U & (IData)(vlSelf->__PVT__req_valid_out)) 
                                    | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    if ((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))) {
        vlSelf->__Vcellout__req_switch__data_out[0U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                               * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))));
        vlSelf->__Vcellout__req_switch__data_out[1U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  ((IData)(1U) + (7U & (((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))));
    } else {
        vlSelf->__Vcellout__req_switch__data_out[0U] 
            = vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U];
        vlSelf->__Vcellout__req_switch__data_out[1U] 
            = vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U];
    }
    vlSelf->__Vcellout__req_switch__data_out[2U] = 
        ((0xffffffc0U & vlSelf->__Vcellout__req_switch__data_out[2U]) 
         | (0x3fU & ((0x8bU >= (0xffU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                      ? (((0U == (0x1fU & ((IData)(0x46U) 
                                           * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                           ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                   ((IData)(3U) + (7U 
                                                   & (((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                         | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                      : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[2U])));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__rsp_data 
        = (((QData)((IData)(rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out)) 
            << 4U) | (QData)((IData)(((0xeU & ((IData)(
                                                       (rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
                                                        >> 0x20U)) 
                                               << 1U)) 
                                      | (1U & (IData)(
                                                      (rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
                                                       >> 0x23U)))))));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__req_data[0U] 
        = ((0xfffffff8U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__req_data[0U]) 
           | (7U & (vlSelf->__Vcellout__req_switch__data_out[4U] 
                    >> 9U)));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__req_data[0U] 
        = ((7U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__req_data[0U]) 
           | ((IData)((((QData)((IData)((0x3fffffffU 
                                         & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                             << 0x15U) 
                                            | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                               >> 0xbU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                        >> 6U)))))) 
              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__req_data[1U] 
        = (((IData)((((QData)((IData)((0x3fffffffU 
                                       & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                           << 0x15U) 
                                          | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                             >> 0xbU))))) 
                      << 0x20U) | (QData)((IData)((
                                                   (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                      >> 6U)))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (0x3fffffffU 
                                                     & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                                         << 0x15U) 
                                                        | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                           >> 0xbU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                    >> 6U))))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__req_data[2U] 
        = (0x3fU & (((6U & (vlSelf->__Vcellout__req_switch__data_out[3U] 
                            >> 5U)) | ((IData)(((((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                                                       << 0x15U) 
                                                                      | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                         >> 0xbU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                     << 0x1aU) 
                                                                    | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                       >> 6U))))) 
                                                >> 0x20U)) 
                                       >> 0x1dU)) | 
                    (0x38U & (vlSelf->__Vcellout__req_switch__data_out[3U] 
                              >> 5U))));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__2__KET__.__PVT__req_data[0U] 
        = ((0xfffffff8U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__2__KET__.__PVT__req_data[0U]) 
           | (7U & (vlSelf->__Vcellout__req_switch__data_out[2U] 
                    >> 3U)));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__2__KET__.__PVT__req_data[0U] 
        = ((7U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__2__KET__.__PVT__req_data[0U]) 
           | ((IData)((((QData)((IData)((0x3fffffffU 
                                         & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                             << 0x1bU) 
                                            | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                               >> 5U))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__Vcellout__req_switch__data_out[0U])))) 
              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__2__KET__.__PVT__req_data[1U] 
        = (((IData)((((QData)((IData)((0x3fffffffU 
                                       & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                           << 0x1bU) 
                                          | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                             >> 5U))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->__Vcellout__req_switch__data_out[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (0x3fffffffU 
                                                     & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                         << 0x1bU) 
                                                        | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                                           >> 5U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__Vcellout__req_switch__data_out[0U]))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__2__KET__.__PVT__req_data[2U] 
        = (0x3fU & (((6U & (vlSelf->__Vcellout__req_switch__data_out[1U] 
                            << 1U)) | ((IData)(((((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                       << 0x1bU) 
                                                                      | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                                                         >> 5U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__Vcellout__req_switch__data_out[0U]))) 
                                                >> 0x20U)) 
                                       >> 0x1dU)) | 
                    (0x38U & (vlSelf->__Vcellout__req_switch__data_out[1U] 
                              << 1U))));
}

VL_INLINE_OPT void VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_ready_out;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__mem_scheduler__DOT__mem_rsp_sel__DOT__genblk3__DOT__rsp_ready_sel) 
              >> 1U));
    __PVT__req_ready_out = ((2U & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_req_ready)) 
                            | (1U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__core_req_ready) 
                                     >> 1U)));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (IData)(__PVT__req_ready_out));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & ((IData)(__PVT__req_ready_out) >> 1U));
}

VL_INLINE_OPT void VVortex_VX_smem_switch__pi17___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_switch__DOT__genblk1__DOT__valid_out_r;
    QData/*35:0*/ rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out;
    CData/*3:0*/ __Vtableidx7;
    CData/*3:0*/ __Vtableidx8;
    CData/*3:0*/ __Vtableidx9;
    QData/*63:0*/ __Vtemp_h0f294ba4__0;
    VlWide<5>/*159:0*/ __Vtemp_he8ff83cd__0;
    VlWide<5>/*159:0*/ __Vtemp_h3b013ee4__0;
    // Body
    __PVT__req_switch__DOT__genblk1__DOT__valid_out_r 
        = ((2U & (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                   >> 1U) & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[0U] 
                             << 1U))) | (1U & (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                                                >> 2U) 
                                               & (~ 
                                                  vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[0U]))));
    if (vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h0f294ba4__0 = (0xfffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]))));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((0xfU & vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]) 
               | ((IData)((0xfffffffffULL & (((QData)((IData)(
                                                              vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]))))) 
                  << 4U));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = (0xffU & (((IData)(__Vtemp_h0f294ba4__0) 
                         >> 0x1cU) | ((IData)((__Vtemp_h0f294ba4__0 
                                               >> 0x20U)) 
                                      << 4U)));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = (IData)((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))) 
                        << 0x23U) | (0x7ffffffffULL 
                                     & ((0x45U >= (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                         ? (((QData)((IData)(
                                                             vlSelf->__PVT__rsp_data_out[
                                                             (((IData)(0x22U) 
                                                               + 
                                                               (0x7fU 
                                                                & ((IData)(0x23U) 
                                                                   * 
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelf->__PVT__rsp_data_out[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__rsp_data_out[
                                                                  (3U 
                                                                   & (((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))))
                                         : vlSelf->rsp_arb__DOT____Vxrand_h66a6ee59__0))));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((0xfffffff0U & vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]) 
               | (IData)(((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))) 
                            << 0x23U) | (0x7ffffffffULL 
                                         & ((0x45U 
                                             >= (0x7fU 
                                                 & ((IData)(0x23U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->__PVT__rsp_data_out[
                                                                 (((IData)(0x22U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x23U) 
                                                         * 
                                                         (1U 
                                                          & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelf->__PVT__rsp_data_out[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x23U) 
                                                                           * 
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__rsp_data_out[
                                                                      (3U 
                                                                       & (((IData)(0x23U) 
                                                                           * 
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))))
                                             : vlSelf->rsp_arb__DOT____Vxrand_h66a6ee59__0))) 
                          >> 0x20U)));
    }
    __Vtableidx9 = (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx9])) {
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx9];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx9])) {
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx9];
    }
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx9];
    if (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_he8ff83cd__0[2U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     << 6U) | vlSelf->__PVT__req_data_in[2U]);
        __Vtemp_he8ff83cd__0[3U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     >> 0x1aU) | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                                  << 6U));
        __Vtemp_he8ff83cd__0[4U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                     >> 0x1aU) | (0xfc0U 
                                                  & (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
                                                     << 6U)));
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = vlSelf->__PVT__req_data_in[0U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = vlSelf->__PVT__req_data_in[1U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = __Vtemp_he8ff83cd__0[2U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = __Vtemp_he8ff83cd__0[3U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = __Vtemp_he8ff83cd__0[4U];
    }
    if (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h3b013ee4__0[2U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     << 6U) | vlSelf->__PVT__req_data_in[2U]);
        __Vtemp_h3b013ee4__0[3U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     >> 0x1aU) | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                                  << 6U));
        __Vtemp_h3b013ee4__0[4U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                     >> 0x1aU) | (0xfc0U 
                                                  & (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
                                                     << 6U)));
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = vlSelf->__PVT__req_data_in[0U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = vlSelf->__PVT__req_data_in[1U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = __Vtemp_h3b013ee4__0[2U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = __Vtemp_h3b013ee4__0[3U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = __Vtemp_h3b013ee4__0[4U];
    }
    __Vtableidx8 = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx8])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx8];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx8])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx8];
    }
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx8];
    __Vtableidx7 = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx7])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx7];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx7])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx7];
    }
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx7];
    vlSelf->__PVT__rsp_data_out[0U] = (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__2__KET____DOT__cache_arb__DOT__rsp_data_in);
    vlSelf->__PVT__rsp_data_out[1U] = (((IData)((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__rsp_data 
                                                 >> 3U)) 
                                        << 3U) | (IData)(
                                                         (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__2__KET____DOT__cache_arb__DOT__rsp_data_in 
                                                          >> 0x20U)));
    vlSelf->__PVT__rsp_data_out[2U] = ((0x38U & ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__rsp_data) 
                                                 << 3U)) 
                                       | ((IData)((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__rsp_data 
                                                   >> 3U)) 
                                          >> 0x1dU));
    vlSelf->__PVT__rsp_valid_out = ((2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_rsp_valid) 
                                           >> 1U)) 
                                    | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__genblk4__BRA__2__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    vlSelf->__PVT__req_data_in[0U] = (IData)((((QData)((IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[2U] 
                                                                   >> 6U)))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[2U] 
                                                                      >> 2U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[1U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[0U] 
                                                                       >> 4U)))))));
    vlSelf->__PVT__req_data_in[1U] = ((0xffffffe0U 
                                       & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[1U] 
                                          << 1U)) | (IData)(
                                                            ((((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[2U] 
                                                                                >> 6U)))) 
                                                               << 0x24U) 
                                                              | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[2U] 
                                                                                >> 2U)))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[0U] 
                                                                                >> 4U)))))) 
                                                             >> 0x20U)));
    vlSelf->__PVT__req_data_in[2U] = ((0x38U & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[0U] 
                                                << 2U)) 
                                      | (7U & ((0x1eU 
                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[2U] 
                                                   << 1U)) 
                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[1U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((0U != (IData)(vlSelf->__PVT__rsp_valid_out)) 
           & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_ready_out = ((- (IData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r))) 
                                    & ((2U & ((~ (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->__PVT__rsp_valid_out))));
    rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
        = (0xfffffffffULL & ((0x47U >= (0x7fU & ((IData)(0x24U) 
                                                 * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                              ? (((QData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                  (((IData)(0x23U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x24U) 
                                                        * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(0x24U) 
                                                 * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x24U) 
                                                      * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(0x24U) 
                                                * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x24U) 
                                                                      * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x24U) 
                                                     * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                    | ((QData)((IData)(
                                                       vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                       (3U 
                                                        & (((IData)(0x24U) 
                                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((IData)(0x24U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))))
                              : vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h669af165__0));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r 
        = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r;
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = ((1U & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r)) 
           | ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r) 
              << 1U));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = (((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
            >> 1U) & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_valid_out = ((1U & (IData)(vlSelf->__PVT__req_valid_out)) 
                                    | ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                       << 1U));
    vlSelf->__Vcellout__req_switch__data_out[2U] = 
        ((0x3fU & vlSelf->__Vcellout__req_switch__data_out[2U]) 
         | (((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
              ? (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                   ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                           ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(0x46U) 
                                                    * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                 | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                    (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
              : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U]) 
            << 6U));
    vlSelf->__Vcellout__req_switch__data_out[3U] = 
        ((((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
            ? (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                               * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
            : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U]) 
          >> 0x1aU) | (((0x8bU >= (0xffU & ((IData)(0x46U) 
                                            * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                         ? (((0U == (0x1fU & ((IData)(0x46U) 
                                              * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                              ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                      ((IData)(2U) 
                                       + (7U & (((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                            | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                               ((IData)(1U) + (7U & 
                                               (((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                               >> (0x1fU & ((IData)(0x46U) 
                                            * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                         : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U]) 
                       << 6U));
    vlSelf->__Vcellout__req_switch__data_out[4U] = 
        (0xfffU & ((((0x8bU >= (0xffU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                      ? (((0U == (0x1fU & ((IData)(0x46U) 
                                           * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                           ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                   ((IData)(2U) + (7U 
                                                   & (((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                         | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                      : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U]) 
                    >> 0x1aU) | (0xfc0U & (((0x8bU 
                                             >= (0xffU 
                                                 & ((IData)(0x46U) 
                                                    * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x46U) 
                                                      * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                  ((IData)(3U) 
                                                   + 
                                                   (7U 
                                                    & (((IData)(0x46U) 
                                                        * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                                | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                   ((IData)(2U) 
                                                    + 
                                                    (7U 
                                                     & (((IData)(0x46U) 
                                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                                             : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[2U]) 
                                           << 6U))));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r 
        = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r;
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = ((2U & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r)) 
           | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_valid_out = ((2U & (IData)(vlSelf->__PVT__req_valid_out)) 
                                    | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    if ((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))) {
        vlSelf->__Vcellout__req_switch__data_out[0U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                               * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))));
        vlSelf->__Vcellout__req_switch__data_out[1U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  ((IData)(1U) + (7U & (((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))));
    } else {
        vlSelf->__Vcellout__req_switch__data_out[0U] 
            = vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U];
        vlSelf->__Vcellout__req_switch__data_out[1U] 
            = vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U];
    }
    vlSelf->__Vcellout__req_switch__data_out[2U] = 
        ((0xffffffc0U & vlSelf->__Vcellout__req_switch__data_out[2U]) 
         | (0x3fU & ((0x8bU >= (0xffU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                      ? (((0U == (0x1fU & ((IData)(0x46U) 
                                           * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                           ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                   ((IData)(3U) + (7U 
                                                   & (((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                         | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                      : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[2U])));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__rsp_data 
        = (((QData)((IData)(rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out)) 
            << 4U) | (QData)((IData)(((0xeU & ((IData)(
                                                       (rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
                                                        >> 0x20U)) 
                                               << 1U)) 
                                      | (1U & (IData)(
                                                      (rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
                                                       >> 0x23U)))))));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__req_data[0U] 
        = ((0xfffffff8U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__req_data[0U]) 
           | (7U & (vlSelf->__Vcellout__req_switch__data_out[4U] 
                    >> 9U)));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__req_data[0U] 
        = ((7U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__req_data[0U]) 
           | ((IData)((((QData)((IData)((0x3fffffffU 
                                         & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                             << 0x15U) 
                                            | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                               >> 0xbU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                        >> 6U)))))) 
              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__req_data[1U] 
        = (((IData)((((QData)((IData)((0x3fffffffU 
                                       & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                           << 0x15U) 
                                          | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                             >> 0xbU))))) 
                      << 0x20U) | (QData)((IData)((
                                                   (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                      >> 6U)))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (0x3fffffffU 
                                                     & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                                         << 0x15U) 
                                                        | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                           >> 0xbU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                    >> 6U))))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__req_data[2U] 
        = (0x3fU & (((6U & (vlSelf->__Vcellout__req_switch__data_out[3U] 
                            >> 5U)) | ((IData)(((((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                                                       << 0x15U) 
                                                                      | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                         >> 0xbU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                     << 0x1aU) 
                                                                    | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                       >> 6U))))) 
                                                >> 0x20U)) 
                                       >> 0x1dU)) | 
                    (0x38U & (vlSelf->__Vcellout__req_switch__data_out[3U] 
                              >> 5U))));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__4__KET__.__PVT__req_data[0U] 
        = ((0xfffffff8U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__4__KET__.__PVT__req_data[0U]) 
           | (7U & (vlSelf->__Vcellout__req_switch__data_out[2U] 
                    >> 3U)));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__4__KET__.__PVT__req_data[0U] 
        = ((7U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__4__KET__.__PVT__req_data[0U]) 
           | ((IData)((((QData)((IData)((0x3fffffffU 
                                         & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                             << 0x1bU) 
                                            | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                               >> 5U))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__Vcellout__req_switch__data_out[0U])))) 
              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__4__KET__.__PVT__req_data[1U] 
        = (((IData)((((QData)((IData)((0x3fffffffU 
                                       & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                           << 0x1bU) 
                                          | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                             >> 5U))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->__Vcellout__req_switch__data_out[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (0x3fffffffU 
                                                     & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                         << 0x1bU) 
                                                        | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                                           >> 5U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__Vcellout__req_switch__data_out[0U]))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__4__KET__.__PVT__req_data[2U] 
        = (0x3fU & (((6U & (vlSelf->__Vcellout__req_switch__data_out[1U] 
                            << 1U)) | ((IData)(((((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                       << 0x1bU) 
                                                                      | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                                                         >> 5U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__Vcellout__req_switch__data_out[0U]))) 
                                                >> 0x20U)) 
                                       >> 0x1dU)) | 
                    (0x38U & (vlSelf->__Vcellout__req_switch__data_out[1U] 
                              << 1U))));
}

VL_INLINE_OPT void VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_ready_out;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__mem_scheduler__DOT__mem_rsp_sel__DOT__genblk3__DOT__rsp_ready_sel) 
              >> 2U));
    __PVT__req_ready_out = ((2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_req_ready) 
                                   >> 1U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__core_req_ready) 
                                               >> 2U)));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (IData)(__PVT__req_ready_out));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & ((IData)(__PVT__req_ready_out) >> 1U));
}

VL_INLINE_OPT void VVortex_VX_smem_switch__pi17___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___sequent__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_switch__DOT__genblk1__DOT__valid_out_r;
    QData/*35:0*/ rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out;
    CData/*3:0*/ __Vtableidx10;
    CData/*3:0*/ __Vtableidx11;
    CData/*3:0*/ __Vtableidx12;
    QData/*63:0*/ __Vtemp_h0f294ba4__0;
    VlWide<5>/*159:0*/ __Vtemp_he8ff83cd__0;
    VlWide<5>/*159:0*/ __Vtemp_h3b013ee4__0;
    // Body
    __PVT__req_switch__DOT__genblk1__DOT__valid_out_r 
        = (((IData)((((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                      >> 3U) & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[0U])) 
            << 1U) | (IData)((((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                               >> 3U) & (~ vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[0U]))));
    if (vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h0f294ba4__0 = (0xfffffffffULL & (((QData)((IData)(
                                                                   vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]))));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((0xfU & vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]) 
               | ((IData)((0xfffffffffULL & (((QData)((IData)(
                                                              vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]))))) 
                  << 4U));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = (0xffU & (((IData)(__Vtemp_h0f294ba4__0) 
                         >> 0x1cU) | ((IData)((__Vtemp_h0f294ba4__0 
                                               >> 0x20U)) 
                                      << 4U)));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = (IData)((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))) 
                        << 0x23U) | (0x7ffffffffULL 
                                     & ((0x45U >= (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                         ? (((QData)((IData)(
                                                             vlSelf->__PVT__rsp_data_out[
                                                             (((IData)(0x22U) 
                                                               + 
                                                               (0x7fU 
                                                                & ((IData)(0x23U) 
                                                                   * 
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                              >> 5U)])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                            | (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlSelf->__PVT__rsp_data_out[
                                                                 (((IData)(0x1fU) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__rsp_data_out[
                                                                  (3U 
                                                                   & (((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))) 
                                                                      >> 5U))])) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))))
                                         : vlSelf->rsp_arb__DOT____Vxrand_h66a6ee59__0))));
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((0xfffffff0U & vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]) 
               | (IData)(((((QData)((IData)((1U & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))) 
                            << 0x23U) | (0x7ffffffffULL 
                                         & ((0x45U 
                                             >= (0x7fU 
                                                 & ((IData)(0x23U) 
                                                    * 
                                                    (1U 
                                                     & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->__PVT__rsp_data_out[
                                                                 (((IData)(0x22U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x23U) 
                                                                       * 
                                                                       (1U 
                                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x23U) 
                                                         * 
                                                         (1U 
                                                          & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelf->__PVT__rsp_data_out[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x23U) 
                                                                           * 
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__rsp_data_out[
                                                                      (3U 
                                                                       & (((IData)(0x23U) 
                                                                           * 
                                                                           (1U 
                                                                            & (~ (IData)(vlSelf->__PVT__rsp_valid_out)))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          (1U 
                                                           & (~ (IData)(vlSelf->__PVT__rsp_valid_out))))))))
                                             : vlSelf->rsp_arb__DOT____Vxrand_h66a6ee59__0))) 
                          >> 0x20U)));
    }
    __Vtableidx12 = (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                      << 3U) | (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                 << 2U) | (((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx12])) {
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx12];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx12])) {
        vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx12];
    }
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx12];
    if (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_he8ff83cd__0[2U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     << 6U) | vlSelf->__PVT__req_data_in[2U]);
        __Vtemp_he8ff83cd__0[3U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     >> 0x1aU) | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                                  << 6U));
        __Vtemp_he8ff83cd__0[4U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                     >> 0x1aU) | (0xfc0U 
                                                  & (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
                                                     << 6U)));
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = vlSelf->__PVT__req_data_in[0U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = vlSelf->__PVT__req_data_in[1U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = __Vtemp_he8ff83cd__0[2U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = __Vtemp_he8ff83cd__0[3U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = __Vtemp_he8ff83cd__0[4U];
    }
    if (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h3b013ee4__0[2U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     << 6U) | vlSelf->__PVT__req_data_in[2U]);
        __Vtemp_h3b013ee4__0[3U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
                                     >> 0x1aU) | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                                  << 6U));
        __Vtemp_h3b013ee4__0[4U] = ((vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
                                     >> 0x1aU) | (0xfc0U 
                                                  & (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
                                                     << 6U)));
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = vlSelf->__PVT__req_data_in[0U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = vlSelf->__PVT__req_data_in[1U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = __Vtemp_h3b013ee4__0[2U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = __Vtemp_h3b013ee4__0[3U];
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = __Vtemp_h3b013ee4__0[4U];
    }
    __Vtableidx11 = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                      << 3U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                 << 2U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx11])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx11];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx11])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx11];
    }
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx11];
    __Vtableidx10 = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                      << 3U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                 << 2U) | (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                            << 1U) 
                                           | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx10])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = VVortex__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx10];
    }
    if ((2U & VVortex__ConstPool__TABLE_h4893871c_0
         [__Vtableidx10])) {
        vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = VVortex__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx10];
    }
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = VVortex__ConstPool__TABLE_h519abc85_0[__Vtableidx10];
    vlSelf->__PVT__rsp_data_out[0U] = (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__3__KET____DOT__cache_arb__DOT__rsp_data_in);
    vlSelf->__PVT__rsp_data_out[1U] = (((IData)((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__rsp_data 
                                                 >> 3U)) 
                                        << 3U) | (IData)(
                                                         (vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__3__KET____DOT__cache_arb__DOT__rsp_data_in 
                                                          >> 0x20U)));
    vlSelf->__PVT__rsp_data_out[2U] = ((0x38U & ((IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__rsp_data) 
                                                 << 3U)) 
                                       | ((IData)((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__rsp_data 
                                                   >> 3U)) 
                                          >> 0x1dU));
    vlSelf->__PVT__rsp_valid_out = ((2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_rsp_valid) 
                                           >> 2U)) 
                                    | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__genblk4__BRA__3__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    vlSelf->__PVT__req_data_in[0U] = (IData)((((QData)((IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[2U] 
                                                                   >> 6U)))) 
                                               << 0x24U) 
                                              | (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[2U] 
                                                                      >> 2U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[1U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[0U] 
                                                                       >> 4U)))))));
    vlSelf->__PVT__req_data_in[1U] = ((0xffffffe0U 
                                       & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[1U] 
                                          << 1U)) | (IData)(
                                                            ((((QData)((IData)(
                                                                               (1U 
                                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[2U] 
                                                                                >> 6U)))) 
                                                               << 0x24U) 
                                                              | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[2U] 
                                                                                >> 2U)))) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                ((vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[1U] 
                                                                                << 0x1cU) 
                                                                                | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[0U] 
                                                                                >> 4U)))))) 
                                                             >> 0x20U)));
    vlSelf->__PVT__req_data_in[2U] = ((0x38U & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[0U] 
                                                << 2U)) 
                                      | (7U & ((0x1eU 
                                                & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[2U] 
                                                   << 1U)) 
                                               | (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[1U] 
                                                  >> 0x1fU))));
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((0U != (IData)(vlSelf->__PVT__rsp_valid_out)) 
           & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_ready_out = ((- (IData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r))) 
                                    & ((2U & ((~ (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->__PVT__rsp_valid_out))));
    rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
        = (0xfffffffffULL & ((0x47U >= (0x7fU & ((IData)(0x24U) 
                                                 * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                              ? (((QData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                  (((IData)(0x23U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x24U) 
                                                        * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(0x24U) 
                                                 * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x24U) 
                                                      * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(0x24U) 
                                                * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x24U) 
                                                                      * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x24U) 
                                                     * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                    | ((QData)((IData)(
                                                       vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                       (3U 
                                                        & (((IData)(0x24U) 
                                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((IData)(0x24U) 
                                            * (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))))
                              : vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h669af165__0));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r 
        = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r;
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = ((1U & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r)) 
           | ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r) 
              << 1U));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = (((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
            >> 1U) & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_valid_out = ((1U & (IData)(vlSelf->__PVT__req_valid_out)) 
                                    | ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                       << 1U));
    vlSelf->__Vcellout__req_switch__data_out[2U] = 
        ((0x3fU & vlSelf->__Vcellout__req_switch__data_out[2U]) 
         | (((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
              ? (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                   ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                           ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                           << ((IData)(0x20U) - (0x1fU 
                                                 & ((IData)(0x46U) 
                                                    * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                 | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                    (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                           >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
              : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U]) 
            << 6U));
    vlSelf->__Vcellout__req_switch__data_out[3U] = 
        ((((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
            ? (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                               * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
            : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U]) 
          >> 0x1aU) | (((0x8bU >= (0xffU & ((IData)(0x46U) 
                                            * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                         ? (((0U == (0x1fU & ((IData)(0x46U) 
                                              * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                              ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                      ((IData)(2U) 
                                       + (7U & (((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                            | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                               ((IData)(1U) + (7U & 
                                               (((IData)(0x46U) 
                                                 * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                               >> (0x1fU & ((IData)(0x46U) 
                                            * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                         : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U]) 
                       << 6U));
    vlSelf->__Vcellout__req_switch__data_out[4U] = 
        (0xfffU & ((((0x8bU >= (0xffU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                      ? (((0U == (0x1fU & ((IData)(0x46U) 
                                           * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                           ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                   ((IData)(2U) + (7U 
                                                   & (((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                         | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                      : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U]) 
                    >> 0x1aU) | (0xfc0U & (((0x8bU 
                                             >= (0xffU 
                                                 & ((IData)(0x46U) 
                                                    * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x46U) 
                                                      * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                  ((IData)(3U) 
                                                   + 
                                                   (7U 
                                                    & (((IData)(0x46U) 
                                                        * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                                                | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                                   ((IData)(2U) 
                                                    + 
                                                    (7U 
                                                     & (((IData)(0x46U) 
                                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                        >> 5U)))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                                             : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[2U]) 
                                           << 6U))));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r 
        = vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT_____05Fswitch_reset__DOT__genblk1__DOT__reset_r;
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = ((2U & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r)) 
           | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_valid_out = ((2U & (IData)(vlSelf->__PVT__req_valid_out)) 
                                    | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    if ((0x8bU >= (0xffU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))) {
        vlSelf->__Vcellout__req_switch__data_out[0U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(1U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  (7U & (((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x46U) 
                                               * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))));
        vlSelf->__Vcellout__req_switch__data_out[1U] 
            = (((0U == (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                 ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                         ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x46U) 
                                                  * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
               | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                  ((IData)(1U) + (7U & (((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x46U) * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))));
    } else {
        vlSelf->__Vcellout__req_switch__data_out[0U] 
            = vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U];
        vlSelf->__Vcellout__req_switch__data_out[1U] 
            = vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U];
    }
    vlSelf->__Vcellout__req_switch__data_out[2U] = 
        ((0xffffffc0U & vlSelf->__Vcellout__req_switch__data_out[2U]) 
         | (0x3fU & ((0x8bU >= (0xffU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                      ? (((0U == (0x1fU & ((IData)(0x46U) 
                                           * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                           ? 0U : (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                                   ((IData)(3U) + (7U 
                                                   & (((IData)(0x46U) 
                                                       * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                         | (vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(2U) + (7U & (((IData)(0x46U) 
                                                   * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            >> (0x1fU & ((IData)(0x46U) 
                                         * (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
                      : vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[2U])));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__rsp_data 
        = (((QData)((IData)(rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out)) 
            << 4U) | (QData)((IData)(((0xeU & ((IData)(
                                                       (rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
                                                        >> 0x20U)) 
                                               << 1U)) 
                                      | (1U & (IData)(
                                                      (rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out 
                                                       >> 0x23U)))))));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__req_data[0U] 
        = ((0xfffffff8U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__req_data[0U]) 
           | (7U & (vlSelf->__Vcellout__req_switch__data_out[4U] 
                    >> 9U)));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__req_data[0U] 
        = ((7U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__req_data[0U]) 
           | ((IData)((((QData)((IData)((0x3fffffffU 
                                         & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                             << 0x15U) 
                                            | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                               >> 0xbU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                      << 0x1aU) 
                                                     | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                        >> 6U)))))) 
              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__req_data[1U] 
        = (((IData)((((QData)((IData)((0x3fffffffU 
                                       & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                           << 0x15U) 
                                          | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                             >> 0xbU))))) 
                      << 0x20U) | (QData)((IData)((
                                                   (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                    << 0x1aU) 
                                                   | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                      >> 6U)))))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (0x3fffffffU 
                                                     & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                                         << 0x15U) 
                                                        | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                           >> 0xbU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                  << 0x1aU) 
                                                                 | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                    >> 6U))))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__req_data[2U] 
        = (0x3fU & (((6U & (vlSelf->__Vcellout__req_switch__data_out[3U] 
                            >> 5U)) | ((IData)(((((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & ((vlSelf->__Vcellout__req_switch__data_out[4U] 
                                                                       << 0x15U) 
                                                                      | (vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                         >> 0xbU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->__Vcellout__req_switch__data_out[3U] 
                                                                     << 0x1aU) 
                                                                    | (vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                       >> 6U))))) 
                                                >> 0x20U)) 
                                       >> 0x1dU)) | 
                    (0x38U & (vlSelf->__Vcellout__req_switch__data_out[3U] 
                              >> 5U))));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__6__KET__.__PVT__req_data[0U] 
        = ((0xfffffff8U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__6__KET__.__PVT__req_data[0U]) 
           | (7U & (vlSelf->__Vcellout__req_switch__data_out[2U] 
                    >> 3U)));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__6__KET__.__PVT__req_data[0U] 
        = ((7U & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__6__KET__.__PVT__req_data[0U]) 
           | ((IData)((((QData)((IData)((0x3fffffffU 
                                         & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                             << 0x1bU) 
                                            | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                               >> 5U))))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->__Vcellout__req_switch__data_out[0U])))) 
              << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__6__KET__.__PVT__req_data[1U] 
        = (((IData)((((QData)((IData)((0x3fffffffU 
                                       & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                           << 0x1bU) 
                                          | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                             >> 5U))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->__Vcellout__req_switch__data_out[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    (0x3fffffffU 
                                                     & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                         << 0x1bU) 
                                                        | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                                           >> 5U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->__Vcellout__req_switch__data_out[0U]))) 
                                  >> 0x20U)) << 3U));
    vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__6__KET__.__PVT__req_data[2U] 
        = (0x3fU & (((6U & (vlSelf->__Vcellout__req_switch__data_out[1U] 
                            << 1U)) | ((IData)(((((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & ((vlSelf->__Vcellout__req_switch__data_out[2U] 
                                                                       << 0x1bU) 
                                                                      | (vlSelf->__Vcellout__req_switch__data_out[1U] 
                                                                         >> 5U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__Vcellout__req_switch__data_out[0U]))) 
                                                >> 0x20U)) 
                                       >> 0x1dU)) | 
                    (0x38U & (vlSelf->__Vcellout__req_switch__data_out[1U] 
                              << 1U))));
}

VL_INLINE_OPT void VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___combo__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_ready_out;
    // Body
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__mem_scheduler__DOT__mem_rsp_sel__DOT__genblk3__DOT__rsp_ready_sel) 
              >> 3U));
    __PVT__req_ready_out = ((2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_req_ready) 
                                   >> 2U)) | (1U & 
                                              ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__core_req_ready) 
                                               >> 3U)));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (IData)(__PVT__req_ready_out));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & ((IData)(__PVT__req_ready_out) >> 1U));
}
