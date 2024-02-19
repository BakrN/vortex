// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_smem_switch__pi17.h"

VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__smem_unit__DOT__genblk1__BRA__0__KET____DOT__smem_switch__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h34a6d6f0__0;
    VlWide<3>/*95:0*/ __Vtemp_h34a6d6f0__1;
    // Body
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h669af165__0 
        = (0xfffffffffULL & VL_RAND_RESET_Q(36));
    VL_RAND_RESET_W(70, __Vtemp_h34a6d6f0__0);
    vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U] 
        = __Vtemp_h34a6d6f0__0[0U];
    vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U] 
        = __Vtemp_h34a6d6f0__0[1U];
    vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[2U] 
        = (0x3fU & __Vtemp_h34a6d6f0__0[2U]);
    VL_RAND_RESET_W(70, __Vtemp_h34a6d6f0__1);
    vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[0U] 
        = __Vtemp_h34a6d6f0__1[0U];
    vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[1U] 
        = __Vtemp_h34a6d6f0__1[1U];
    vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0[2U] 
        = (0x3fU & __Vtemp_h34a6d6f0__1[2U]);
    vlSelf->rsp_arb__DOT____Vxrand_h66a6ee59__0 = (0x7ffffffffULL 
                                                   & VL_RAND_RESET_Q(35));
}

VL_ATTR_COLD void VVortex_VX_smem_switch__pi17___ctor_var_reset(VVortex_VX_smem_switch__pi17* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VVortex_VX_smem_switch__pi17___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_valid_out = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(70, vlSelf->__PVT__req_data_in);
    VL_RAND_RESET_W(140, vlSelf->__Vcellout__req_switch__data_out);
    vlSelf->__PVT__rsp_valid_out = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(70, vlSelf->__PVT__rsp_data_out);
    vlSelf->__PVT__rsp_ready_out = VL_RAND_RESET_I(2);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__ready_out_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(70, vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0);
    VL_RAND_RESET_W(140, vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__0__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT_____05Fout_buf_reset__DOT__genblk1__DOT__reset_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(70, vlSelf->req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h7a3a9a6d__0);
    VL_RAND_RESET_W(140, vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_switch__DOT__genblk1__DOT__genblk2__BRA__0__KET____DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->rsp_arb__DOT____Vxrand_h66a6ee59__0 = VL_RAND_RESET_Q(35);
    vlSelf->rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h669af165__0 = VL_RAND_RESET_Q(36);
    VL_RAND_RESET_W(72, vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg);
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop = VL_RAND_RESET_I(1);
}
