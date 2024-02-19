// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_dispatch_unit__pi26.h"

VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__0(VVortex_VX_dispatch_unit__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_dispatch_unit__pi26___initial__TOP__Vortex__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__execute__DOT__alu_unit__DOT__dispatch_unit__0\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h34a6c038__0;
    VlWide<6>/*191:0*/ __Vtemp_h34a6c038__1;
    VlWide<6>/*191:0*/ __Vtemp_h34a6c038__2;
    VlWide<6>/*191:0*/ __Vtemp_h34a6c038__3;
    // Body
    VL_RAND_RESET_W(192, __Vtemp_h34a6c038__0);
    vlSelf->__Vxrand_h405aee6f__3[0U] = __Vtemp_h34a6c038__0[0U];
    vlSelf->__Vxrand_h405aee6f__3[1U] = __Vtemp_h34a6c038__0[1U];
    vlSelf->__Vxrand_h405aee6f__3[2U] = __Vtemp_h34a6c038__0[2U];
    vlSelf->__Vxrand_h405aee6f__3[3U] = __Vtemp_h34a6c038__0[3U];
    vlSelf->__Vxrand_h405aee6f__3[4U] = __Vtemp_h34a6c038__0[4U];
    vlSelf->__Vxrand_h405aee6f__3[5U] = __Vtemp_h34a6c038__0[5U];
    VL_RAND_RESET_W(192, __Vtemp_h34a6c038__1);
    vlSelf->__Vxrand_h405aee6f__2[0U] = __Vtemp_h34a6c038__1[0U];
    vlSelf->__Vxrand_h405aee6f__2[1U] = __Vtemp_h34a6c038__1[1U];
    vlSelf->__Vxrand_h405aee6f__2[2U] = __Vtemp_h34a6c038__1[2U];
    vlSelf->__Vxrand_h405aee6f__2[3U] = __Vtemp_h34a6c038__1[3U];
    vlSelf->__Vxrand_h405aee6f__2[4U] = __Vtemp_h34a6c038__1[4U];
    vlSelf->__Vxrand_h405aee6f__2[5U] = __Vtemp_h34a6c038__1[5U];
    VL_RAND_RESET_W(192, __Vtemp_h34a6c038__2);
    vlSelf->__Vxrand_h405aee6f__1[0U] = __Vtemp_h34a6c038__2[0U];
    vlSelf->__Vxrand_h405aee6f__1[1U] = __Vtemp_h34a6c038__2[1U];
    vlSelf->__Vxrand_h405aee6f__1[2U] = __Vtemp_h34a6c038__2[2U];
    vlSelf->__Vxrand_h405aee6f__1[3U] = __Vtemp_h34a6c038__2[3U];
    vlSelf->__Vxrand_h405aee6f__1[4U] = __Vtemp_h34a6c038__2[4U];
    vlSelf->__Vxrand_h405aee6f__1[5U] = __Vtemp_h34a6c038__2[5U];
    VL_RAND_RESET_W(192, __Vtemp_h34a6c038__3);
    vlSelf->__Vxrand_h405aee6f__0[0U] = __Vtemp_h34a6c038__3[0U];
    vlSelf->__Vxrand_h405aee6f__0[1U] = __Vtemp_h34a6c038__3[1U];
    vlSelf->__Vxrand_h405aee6f__0[2U] = __Vtemp_h34a6c038__3[2U];
    vlSelf->__Vxrand_h405aee6f__0[3U] = __Vtemp_h34a6c038__3[3U];
    vlSelf->__Vxrand_h405aee6f__0[4U] = __Vtemp_h34a6c038__3[4U];
    vlSelf->__Vxrand_h405aee6f__0[5U] = __Vtemp_h34a6c038__3[5U];
}

VL_ATTR_COLD void VVortex_VX_dispatch_unit__pi26___ctor_var_reset(VVortex_VX_dispatch_unit__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VVortex__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VVortex_VX_dispatch_unit__pi26___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(192, vlSelf->__Vxrand_h405aee6f__3);
    VL_RAND_RESET_W(192, vlSelf->__Vxrand_h405aee6f__2);
    VL_RAND_RESET_W(192, vlSelf->__Vxrand_h405aee6f__1);
    VL_RAND_RESET_W(192, vlSelf->__Vxrand_h405aee6f__0);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dispatch_valid = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(1888, vlSelf->__PVT__dispatch_data);
    vlSelf->__PVT__issue_indices = VL_RAND_RESET_I(8);
    vlSelf->__PVT__block_ready = VL_RAND_RESET_I(4);
    vlSelf->__PVT__block_tmask = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(768, vlSelf->__PVT__block_regs);
    vlSelf->__PVT__block_pid = VL_RAND_RESET_I(4);
    vlSelf->__PVT__block_sop = VL_RAND_RESET_I(4);
    vlSelf->__PVT__block_eop = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ready_in = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__sent_mask_p = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_first_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__fire_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__is_last_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__fire_eop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_tmask = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(384, vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__per_packet_regs);
    vlSelf->__Vcellinp__genblk4__BRA__0__KET____DOT__genblk1__DOT__pipe_reg__data_in = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__block_wid = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__sent_mask_p = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_first_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__fire_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__is_last_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__fire_eop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_tmask = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(384, vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__per_packet_regs);
    vlSelf->__Vcellinp__genblk4__BRA__1__KET____DOT__genblk1__DOT__pipe_reg__data_in = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__block_wid = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__sent_mask_p = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_first_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__fire_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__is_last_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__fire_eop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_tmask = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(384, vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__per_packet_regs);
    vlSelf->__Vcellinp__genblk4__BRA__2__KET____DOT__genblk1__DOT__pipe_reg__data_in = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__block_wid = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__sent_mask_p = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_first_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__fire_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__is_last_p = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__fire_eop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_tmask = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(384, vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__per_packet_regs);
    vlSelf->__Vcellinp__genblk4__BRA__3__KET____DOT__genblk1__DOT__pipe_reg__data_in = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__block_wid = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__s_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_first__DOT__d_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__s_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__genblk1__DOT__find_last__DOT__d_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT_____05Fbuf_out_reset__DOT__genblk1__DOT__reset_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(284, vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out);
    VL_RAND_RESET_W(284, vlSelf->genblk4__BRA__0__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in);
    VL_RAND_RESET_W(283, vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d);
    vlSelf->__PVT__genblk4__BRA__0__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__s_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_first__DOT__d_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__s_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__genblk1__DOT__find_last__DOT__d_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT_____05Fbuf_out_reset__DOT__genblk1__DOT__reset_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(284, vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out);
    VL_RAND_RESET_W(284, vlSelf->genblk4__BRA__1__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in);
    VL_RAND_RESET_W(283, vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d);
    vlSelf->__PVT__genblk4__BRA__1__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__s_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_first__DOT__d_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__s_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__genblk1__DOT__find_last__DOT__d_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT_____05Fbuf_out_reset__DOT__genblk1__DOT__reset_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(284, vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out);
    VL_RAND_RESET_W(284, vlSelf->genblk4__BRA__2__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in);
    VL_RAND_RESET_W(283, vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d);
    vlSelf->__PVT__genblk4__BRA__2__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__s_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_first__DOT__d_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__s_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__genblk1__DOT__find_last__DOT__d_n = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT_____05Fbuf_out_reset__DOT__genblk1__DOT__reset_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(284, vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellout__genblk1__DOT__pipe_register__data_out);
    VL_RAND_RESET_W(284, vlSelf->genblk4__BRA__3__KET____DOT__buf_out__DOT____Vcellinp__genblk1__DOT__pipe_register__data_in);
    VL_RAND_RESET_W(283, vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_d);
    vlSelf->__PVT__genblk4__BRA__3__KET____DOT__buf_out__DOT__genblk1__DOT__pipe_register__DOT__genblk1__DOT__genblk1__DOT__value_r = VL_RAND_RESET_I(1);
}
