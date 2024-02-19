// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_muldiv_unit__pi27.h"

VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0(VVortex_VX_muldiv_unit__pi27* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__pi27___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__genblk1__BRA__0__KET____DOT__mdv_unit__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h34a6eee8__0;
    // Body
    VL_RAND_RESET_W(112, __Vtemp_h34a6eee8__0);
    vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[0U] 
        = __Vtemp_h34a6eee8__0[0U];
    vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[1U] 
        = __Vtemp_h34a6eee8__0[1U];
    vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[2U] 
        = __Vtemp_h34a6eee8__0[2U];
    vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0[3U] 
        = (0xffffU & __Vtemp_h34a6eee8__0[3U]);
    vlSelf->mul_shift_reg__DOT____Vxrand_h9b58951b__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->mul_shift_reg__DOT____Vxrand_h9b58951b__0 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->div_shift_reg__DOT____Vxrand_h9b58951b__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->div_shift_reg__DOT____Vxrand_h9b58951b__0 
        = (1U & VL_RAND_RESET_I(1));
}

VL_ATTR_COLD void VVortex_VX_muldiv_unit__pi27___ctor_var_reset(VVortex_VX_muldiv_unit__pi27* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_muldiv_unit__pi27___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_valid_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_ready_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_result_tmp = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mul_fire_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_valid_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_ready_in = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_in1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_in2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_result_in = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_fire_in = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__rsp_buf__ready_in = VL_RAND_RESET_I(2);
    vlSelf->__Vcellinp__rsp_buf__valid_in = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resultl = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__BRA__0__KET____DOT__mul_resulth = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resultl = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__BRA__1__KET____DOT__mul_resulth = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__div_remainder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_quotient = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__div_remainder = VL_RAND_RESET_I(32);
    vlSelf->mul_shift_reg__DOT____Vxrand_h9b58951b__1 = VL_RAND_RESET_I(1);
    vlSelf->mul_shift_reg__DOT____Vxrand_h9b58951b__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(452, vlSelf->__PVT__mul_shift_reg__DOT__genblk1__DOT__entries);
    vlSelf->mul_shift_reg__DOT____Vlvbound_hbe5f3915__0 = VL_RAND_RESET_I(1);
    vlSelf->mul_shift_reg__DOT____Vlvbound_h2757304d__0 = VL_RAND_RESET_I(1);
    vlSelf->mul_shift_reg__DOT____Vlvbound_h98a14e50__0 = VL_RAND_RESET_I(1);
    vlSelf->div_shift_reg__DOT____Vxrand_h9b58951b__1 = VL_RAND_RESET_I(1);
    vlSelf->div_shift_reg__DOT____Vxrand_h9b58951b__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(452, vlSelf->__PVT__div_shift_reg__DOT__genblk1__DOT__entries);
    vlSelf->div_shift_reg__DOT____Vlvbound_hbe5f3915__0 = VL_RAND_RESET_I(1);
    vlSelf->div_shift_reg__DOT____Vlvbound_h2757304d__0 = VL_RAND_RESET_I(1);
    vlSelf->div_shift_reg__DOT____Vlvbound_h98a14e50__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(112, vlSelf->rsp_buf__DOT____Vxrand_h3ac84f56__0);
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(114, vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellout__genblk1__DOT__pipe_register__data_out);
    VL_RAND_RESET_W(114, vlSelf->rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in);
    VL_RAND_RESET_W(113, vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d);
    vlSelf->__PVT__rsp_buf__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_dpi_imul__0__resultl = 0;
    vlSelf->__Vtask_dpi_imul__0__resulth = 0;
    vlSelf->__Vtask_dpi_imul__1__resultl = 0;
    vlSelf->__Vtask_dpi_imul__1__resulth = 0;
    vlSelf->__Vtask_dpi_idiv__2__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__2__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__3__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__3__remainder = 0;
    vlSelf->__Vtask_dpi_imul__4__resultl = 0;
    vlSelf->__Vtask_dpi_imul__4__resulth = 0;
    vlSelf->__Vtask_dpi_imul__5__resultl = 0;
    vlSelf->__Vtask_dpi_imul__5__resulth = 0;
    vlSelf->__Vtask_dpi_idiv__6__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__6__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__7__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__7__remainder = 0;
    vlSelf->__Vtask_dpi_imul__8__resultl = 0;
    vlSelf->__Vtask_dpi_imul__8__resulth = 0;
    vlSelf->__Vtask_dpi_imul__9__resultl = 0;
    vlSelf->__Vtask_dpi_imul__9__resulth = 0;
    vlSelf->__Vtask_dpi_idiv__10__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__10__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__11__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__11__remainder = 0;
    vlSelf->__Vtask_dpi_imul__12__resultl = 0;
    vlSelf->__Vtask_dpi_imul__12__resulth = 0;
    vlSelf->__Vtask_dpi_imul__13__resultl = 0;
    vlSelf->__Vtask_dpi_imul__13__resulth = 0;
    vlSelf->__Vtask_dpi_idiv__14__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__14__remainder = 0;
    vlSelf->__Vtask_dpi_idiv__15__quotient = 0;
    vlSelf->__Vtask_dpi_idiv__15__remainder = 0;
}
