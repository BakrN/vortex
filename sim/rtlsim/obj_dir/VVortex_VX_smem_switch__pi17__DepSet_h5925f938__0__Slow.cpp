// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_smem_switch__pi17.h"
#include "VVortex__Syms.h"

VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_switch__DOT__genblk1__DOT__valid_out_r;
    QData/*35:0*/ rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out;
    // Body
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r) 
            << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_valid_out = ((2U & (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                    | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__genblk4__BRA__0__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    vlSelf->__PVT__req_valid_out = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                     << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
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
    vlSelf->__PVT__rsp_valid_out = ((1U & (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                    | (2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_rsp_valid) 
                                             << 1U)));
    vlSelf->__PVT__rsp_data_out[0U] = (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__0__KET____DOT__cache_arb__DOT__rsp_data_in);
    vlSelf->__PVT__rsp_data_out[1U] = ((0xfffffff8U 
                                        & vlSelf->__PVT__rsp_data_out[1U]) 
                                       | (IData)((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__0__KET____DOT__cache_arb__DOT__rsp_data_in 
                                                  >> 0x20U)));
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
    __PVT__req_switch__DOT__genblk1__DOT__valid_out_r 
        = ((2U & (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                   & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[0U]) 
                  << 1U)) | (1U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                                   & (~ vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__0__KET__.__PVT__req_data[0U]))));
    vlSelf->__PVT__rsp_data_out[1U] = ((7U & vlSelf->__PVT__rsp_data_out[1U]) 
                                       | ((IData)((
                                                   ((QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__rsp_data)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__rsp_data 
                                                                      >> 3U))))) 
                                          << 3U));
    vlSelf->__PVT__rsp_data_out[2U] = (0x3fU & (((IData)(
                                                         (((QData)((IData)(
                                                                           (7U 
                                                                            & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__rsp_data)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__rsp_data 
                                                                             >> 3U))))) 
                                                 >> 0x1dU) 
                                                | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (7U 
                                                                               & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__rsp_data)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__1__KET__.__PVT__rsp_data 
                                                                                >> 3U)))) 
                                                            >> 0x20U)) 
                                                   << 3U)));
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
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((0U != (IData)(vlSelf->__PVT__rsp_valid_out)) 
           & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_ready_out = ((- (IData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r))) 
                                    & ((2U & ((~ (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->__PVT__rsp_valid_out))));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = (((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
            >> 1U) & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
}

VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__1__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_switch__DOT__genblk1__DOT__valid_out_r;
    QData/*35:0*/ rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out;
    // Body
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r) 
            << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_valid_out = ((2U & (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                    | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__genblk4__BRA__1__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    vlSelf->__PVT__req_valid_out = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                     << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
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
    vlSelf->__PVT__rsp_valid_out = ((1U & (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                    | (2U & (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_rsp_valid)));
    vlSelf->__PVT__rsp_data_out[0U] = (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__1__KET____DOT__cache_arb__DOT__rsp_data_in);
    vlSelf->__PVT__rsp_data_out[1U] = ((0xfffffff8U 
                                        & vlSelf->__PVT__rsp_data_out[1U]) 
                                       | (IData)((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__1__KET____DOT__cache_arb__DOT__rsp_data_in 
                                                  >> 0x20U)));
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
    __PVT__req_switch__DOT__genblk1__DOT__valid_out_r 
        = ((2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                  & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[0U] 
                     << 1U))) | (1U & (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                                        >> 1U) & (~ 
                                                  vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__1__KET__.__PVT__req_data[0U]))));
    vlSelf->__PVT__rsp_data_out[1U] = ((7U & vlSelf->__PVT__rsp_data_out[1U]) 
                                       | ((IData)((
                                                   ((QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__rsp_data)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__rsp_data 
                                                                      >> 3U))))) 
                                          << 3U));
    vlSelf->__PVT__rsp_data_out[2U] = (0x3fU & (((IData)(
                                                         (((QData)((IData)(
                                                                           (7U 
                                                                            & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__rsp_data)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__rsp_data 
                                                                             >> 3U))))) 
                                                 >> 0x1dU) 
                                                | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (7U 
                                                                               & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__rsp_data)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__3__KET__.__PVT__rsp_data 
                                                                                >> 3U)))) 
                                                            >> 0x20U)) 
                                                   << 3U)));
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
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((0U != (IData)(vlSelf->__PVT__rsp_valid_out)) 
           & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_ready_out = ((- (IData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r))) 
                                    & ((2U & ((~ (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->__PVT__rsp_valid_out))));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = (((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
            >> 1U) & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
}

VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__2__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_switch__DOT__genblk1__DOT__valid_out_r;
    QData/*35:0*/ rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out;
    // Body
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r) 
            << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_valid_out = ((2U & (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                    | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__genblk4__BRA__2__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    vlSelf->__PVT__req_valid_out = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                     << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
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
    vlSelf->__PVT__rsp_valid_out = ((1U & (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                    | (2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_rsp_valid) 
                                             >> 1U)));
    vlSelf->__PVT__rsp_data_out[0U] = (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__2__KET____DOT__cache_arb__DOT__rsp_data_in);
    vlSelf->__PVT__rsp_data_out[1U] = ((0xfffffff8U 
                                        & vlSelf->__PVT__rsp_data_out[1U]) 
                                       | (IData)((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__2__KET____DOT__cache_arb__DOT__rsp_data_in 
                                                  >> 0x20U)));
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
    __PVT__req_switch__DOT__genblk1__DOT__valid_out_r 
        = ((2U & (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                   >> 1U) & (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[0U] 
                             << 1U))) | (1U & (((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                                                >> 2U) 
                                               & (~ 
                                                  vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__2__KET__.__PVT__req_data[0U]))));
    vlSelf->__PVT__rsp_data_out[1U] = ((7U & vlSelf->__PVT__rsp_data_out[1U]) 
                                       | ((IData)((
                                                   ((QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__rsp_data)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__rsp_data 
                                                                      >> 3U))))) 
                                          << 3U));
    vlSelf->__PVT__rsp_data_out[2U] = (0x3fU & (((IData)(
                                                         (((QData)((IData)(
                                                                           (7U 
                                                                            & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__rsp_data)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__rsp_data 
                                                                             >> 3U))))) 
                                                 >> 0x1dU) 
                                                | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (7U 
                                                                               & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__rsp_data)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__5__KET__.__PVT__rsp_data 
                                                                                >> 3U)))) 
                                                            >> 0x20U)) 
                                                   << 3U)));
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
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((0U != (IData)(vlSelf->__PVT__rsp_valid_out)) 
           & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_ready_out = ((- (IData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r))) 
                                    & ((2U & ((~ (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->__PVT__rsp_valid_out))));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = (((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
            >> 1U) & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
}

VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___settle__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__3__KET____DOT__smem_switch__0\n"); );
    // Init
    CData/*1:0*/ __PVT__req_switch__DOT__genblk1__DOT__valid_out_r;
    QData/*35:0*/ rsp_arb__DOT____Vcellout__genblk1__DOT__genblk1__DOT__out_buf__data_out;
    // Body
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r 
        = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r) 
            << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_valid_out = ((2U & (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                    | (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk3__BRA__0__KET____DOT__cache_wrap__DOT__genblk4__BRA__3__KET____DOT__core_rsp_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
    vlSelf->__PVT__req_valid_out = (((IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                     << 1U) | (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r));
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
    vlSelf->__PVT__rsp_valid_out = ((1U & (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                    | (2U & ((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__smem_rsp_valid) 
                                             >> 2U)));
    vlSelf->__PVT__rsp_data_out[0U] = (IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__3__KET____DOT__cache_arb__DOT__rsp_data_in);
    vlSelf->__PVT__rsp_data_out[1U] = ((0xfffffff8U 
                                        & vlSelf->__PVT__rsp_data_out[1U]) 
                                       | (IData)((vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__dcache__DOT__genblk2__BRA__3__KET____DOT__cache_arb__DOT__rsp_data_in 
                                                  >> 0x20U)));
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
    __PVT__req_switch__DOT__genblk1__DOT__valid_out_r 
        = (((IData)((((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                      >> 3U) & vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[0U])) 
            << 1U) | (IData)((((IData)(vlSymsp->TOP__Vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__lsu_unit__DOT__cache_req_valid) 
                               >> 3U) & (~ vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__dcache_bus_tmp_if__BRA__3__KET__.__PVT__req_data[0U]))));
    vlSelf->__PVT__rsp_data_out[1U] = ((7U & vlSelf->__PVT__rsp_data_out[1U]) 
                                       | ((IData)((
                                                   ((QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__rsp_data)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__rsp_data 
                                                                      >> 3U))))) 
                                          << 3U));
    vlSelf->__PVT__rsp_data_out[2U] = (0x3fU & (((IData)(
                                                         (((QData)((IData)(
                                                                           (7U 
                                                                            & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__rsp_data)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__rsp_data 
                                                                             >> 3U))))) 
                                                 >> 0x1dU) 
                                                | ((IData)(
                                                           ((((QData)((IData)(
                                                                              (7U 
                                                                               & (IData)(vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__rsp_data)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (vlSymsp->TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__switch_out_bus_if__BRA__7__KET__.__PVT__rsp_data 
                                                                                >> 3U)))) 
                                                            >> 0x20U)) 
                                                   << 3U)));
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
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((0U != (IData)(vlSelf->__PVT__rsp_valid_out)) 
           & (IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__rsp_ready_out = ((- (IData)((IData)(vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r))) 
                                    & ((2U & ((~ (IData)(vlSelf->__PVT__rsp_valid_out)) 
                                              << 1U)) 
                                       | (1U & (IData)(vlSelf->__PVT__rsp_valid_out))));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
           & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = (((IData)(__PVT__req_switch__DOT__genblk1__DOT__valid_out_r) 
            >> 1U) & (IData)(vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
}
