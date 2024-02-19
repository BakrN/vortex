// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim_vortex_afu.h"

extern const VlWide<17>/*543:0*/ Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0;
extern const VlWide<18>/*575:0*/ Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0;
extern const VlWide<21>/*671:0*/ Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0;
extern const VlWide<19>/*607:0*/ Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0;

VL_ATTR_COLD void Vvortex_afu_shim_vortex_afu___initial__TOP__vortex_afu_shim__afu__0(Vvortex_afu_shim_vortex_afu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim_vortex_afu___initial__TOP__vortex_afu_shim__afu__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h34a784e0__0;
    VlWide<18>/*575:0*/ __Vtemp_h34a75c98__0;
    VlWide<21>/*671:0*/ __Vtemp_h34a76440__0;
    VlWide<19>/*607:0*/ __Vtemp_h34a75470__0;
    VlWide<19>/*607:0*/ __Vtemp_h34a75470__1;
    // Body
    VL_RAND_RESET_W(522, __Vtemp_h34a784e0__0);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0U] 
           & __Vtemp_h34a784e0__0[0U]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[1U] 
           & __Vtemp_h34a784e0__0[1U]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[2U] 
           & __Vtemp_h34a784e0__0[2U]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[3U] 
           & __Vtemp_h34a784e0__0[3U]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[4U] 
           & __Vtemp_h34a784e0__0[4U]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[5U] 
           & __Vtemp_h34a784e0__0[5U]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[6U] 
           & __Vtemp_h34a784e0__0[6U]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[7U] 
           & __Vtemp_h34a784e0__0[7U]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[8U] 
           & __Vtemp_h34a784e0__0[8U]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[9U] 
           & __Vtemp_h34a784e0__0[9U]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xaU] 
           & __Vtemp_h34a784e0__0[0xaU]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xbU] 
           & __Vtemp_h34a784e0__0[0xbU]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xcU] 
           & __Vtemp_h34a784e0__0[0xcU]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xdU] 
           & __Vtemp_h34a784e0__0[0xdU]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xeU] 
           & __Vtemp_h34a784e0__0[0xeU]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xfU] 
           & __Vtemp_h34a784e0__0[0xfU]);
    vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0x10U] 
           & __Vtemp_h34a784e0__0[0x10U]);
    VL_RAND_RESET_W(555, __Vtemp_h34a75c98__0);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & __Vtemp_h34a75c98__0[0U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & __Vtemp_h34a75c98__0[1U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & __Vtemp_h34a75c98__0[2U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & __Vtemp_h34a75c98__0[3U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & __Vtemp_h34a75c98__0[4U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & __Vtemp_h34a75c98__0[5U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & __Vtemp_h34a75c98__0[6U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & __Vtemp_h34a75c98__0[7U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & __Vtemp_h34a75c98__0[8U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & __Vtemp_h34a75c98__0[9U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & __Vtemp_h34a75c98__0[0xaU]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & __Vtemp_h34a75c98__0[0xbU]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & __Vtemp_h34a75c98__0[0xcU]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & __Vtemp_h34a75c98__0[0xdU]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & __Vtemp_h34a75c98__0[0xeU]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & __Vtemp_h34a75c98__0[0xfU]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & __Vtemp_h34a75c98__0[0x10U]);
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0x11U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
           & __Vtemp_h34a75c98__0[0x11U]);
    VL_RAND_RESET_W(645, __Vtemp_h34a76440__0);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0U] 
           & __Vtemp_h34a76440__0[0U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[1U] 
           & __Vtemp_h34a76440__0[1U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[2U] 
           & __Vtemp_h34a76440__0[2U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[3U] 
           & __Vtemp_h34a76440__0[3U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[4U] 
           & __Vtemp_h34a76440__0[4U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[5U] 
           & __Vtemp_h34a76440__0[5U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[6U] 
           & __Vtemp_h34a76440__0[6U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[7U] 
           & __Vtemp_h34a76440__0[7U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[8U] 
           & __Vtemp_h34a76440__0[8U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[9U] 
           & __Vtemp_h34a76440__0[9U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xaU] 
           & __Vtemp_h34a76440__0[0xaU]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xbU] 
           & __Vtemp_h34a76440__0[0xbU]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xcU] 
           & __Vtemp_h34a76440__0[0xcU]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xdU] 
           & __Vtemp_h34a76440__0[0xdU]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xeU] 
           & __Vtemp_h34a76440__0[0xeU]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xfU] 
           & __Vtemp_h34a76440__0[0xfU]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0x10U] 
           & __Vtemp_h34a76440__0[0x10U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0x11U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0x11U] 
           & __Vtemp_h34a76440__0[0x11U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0x12U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0x12U] 
           & __Vtemp_h34a76440__0[0x12U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0x13U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0x13U] 
           & __Vtemp_h34a76440__0[0x13U]);
    vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0x14U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0x14U] 
           & __Vtemp_h34a76440__0[0x14U]);
    VL_RAND_RESET_W(602, __Vtemp_h34a75470__0);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0U] 
           & __Vtemp_h34a75470__0[0U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[1U] 
           & __Vtemp_h34a75470__0[1U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[2U] 
           & __Vtemp_h34a75470__0[2U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[3U] 
           & __Vtemp_h34a75470__0[3U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[4U] 
           & __Vtemp_h34a75470__0[4U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[5U] 
           & __Vtemp_h34a75470__0[5U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[6U] 
           & __Vtemp_h34a75470__0[6U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[7U] 
           & __Vtemp_h34a75470__0[7U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[8U] 
           & __Vtemp_h34a75470__0[8U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[9U] 
           & __Vtemp_h34a75470__0[9U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xaU] 
           & __Vtemp_h34a75470__0[0xaU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xbU] 
           & __Vtemp_h34a75470__0[0xbU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xcU] 
           & __Vtemp_h34a75470__0[0xcU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xdU] 
           & __Vtemp_h34a75470__0[0xdU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xeU] 
           & __Vtemp_h34a75470__0[0xeU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xfU] 
           & __Vtemp_h34a75470__0[0xfU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x10U] 
           & __Vtemp_h34a75470__0[0x10U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x11U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x11U] 
           & __Vtemp_h34a75470__0[0x11U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x12U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x12U] 
           & __Vtemp_h34a75470__0[0x12U]);
    VL_RAND_RESET_W(602, __Vtemp_h34a75470__1);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0U] 
           & __Vtemp_h34a75470__1[0U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[1U] 
           & __Vtemp_h34a75470__1[1U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[2U] 
           & __Vtemp_h34a75470__1[2U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[3U] 
           & __Vtemp_h34a75470__1[3U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[4U] 
           & __Vtemp_h34a75470__1[4U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[5U] 
           & __Vtemp_h34a75470__1[5U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[6U] 
           & __Vtemp_h34a75470__1[6U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[7U] 
           & __Vtemp_h34a75470__1[7U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[8U] 
           & __Vtemp_h34a75470__1[8U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[9U] 
           & __Vtemp_h34a75470__1[9U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xaU] 
           & __Vtemp_h34a75470__1[0xaU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xbU] 
           & __Vtemp_h34a75470__1[0xbU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xcU] 
           & __Vtemp_h34a75470__1[0xcU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xdU] 
           & __Vtemp_h34a75470__1[0xdU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xeU] 
           & __Vtemp_h34a75470__1[0xeU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xfU] 
           & __Vtemp_h34a75470__1[0xfU]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x10U] 
           & __Vtemp_h34a75470__1[0x10U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x11U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x11U] 
           & __Vtemp_h34a75470__1[0x11U]);
    vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x12U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x12U] 
           & __Vtemp_h34a75470__1[0x12U]);
}

VL_ATTR_COLD void Vvortex_afu_shim_vortex_afu___ctor_var_reset(Vvortex_afu_shim_vortex_afu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim_vortex_afu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(574, vlSelf->__PVT__cp2af_sRxPort);
    VL_RAND_RESET_W(742, vlSelf->__PVT__af2cp_sTxPort);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__PVT__avs_writedata[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__PVT__avs_readdata[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__avs_address[__Vi0] = VL_RAND_RESET_I(26);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__avs_waitrequest[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__avs_write[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__avs_read[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__avs_byteenable[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__avs_burstcount[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__avs_readdatavalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__vx_mem_req_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(192, vlSelf->__PVT__cmd_args);
    VL_RAND_RESET_W(74, vlSelf->__PVT__mmio_tx);
    vlSelf->__PVT__cout_q_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cout_q_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cmd_mem_wr_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vx_busy_wait = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vx_running = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vx_reset_ctr = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cmd_type = VL_RAND_RESET_I(3);
    vlSelf->__PVT__cci_mem_rd_req_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellout__avs_adapter__avs_burstcount[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellout__avs_adapter__avs_byteenable[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellout__avs_adapter__avs_read[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellout__avs_adapter__avs_write[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellinp__avs_adapter__avs_waitrequest[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellout__avs_adapter__avs_address[__Vi0] = VL_RAND_RESET_I(26);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__Vcellinp__avs_adapter__avs_readdata[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__Vcellout__avs_adapter__avs_writedata[__Vi0]);
    }
    vlSelf->__PVT__cci_mem_wr_req_ctr = VL_RAND_RESET_Q(42);
    vlSelf->__PVT__cci_mem_wr_req_addr_base = VL_RAND_RESET_Q(42);
    vlSelf->__PVT__cci_rd_req_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_req_addr = VL_RAND_RESET_Q(42);
    vlSelf->__PVT__cci_rd_req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_req_wait = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_req_ctr = VL_RAND_RESET_Q(42);
    vlSelf->__PVT__cci_rd_rsp_ctr = VL_RAND_RESET_I(3);
    vlSelf->__PVT__cci_rdq_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_mem_wr_req_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_rsp_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_pending_reads_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_mem_rd_req_ctr = VL_RAND_RESET_Q(42);
    vlSelf->__PVT__cci_mem_rd_req_addr = VL_RAND_RESET_Q(42);
    vlSelf->__PVT__cci_mem_rd_req_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_wr_req_ctr = VL_RAND_RESET_Q(42);
    vlSelf->__PVT__cci_wr_req_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_wr_req_addr = VL_RAND_RESET_Q(42);
    VL_RAND_RESET_W(512, vlSelf->__PVT__cci_wr_req_data);
    vlSelf->__PVT__cci_wr_req_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_mem_rd_req_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_mem_rd_rsp_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_wr_rsp_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_pending_writes_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_pending_writes_full = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__vortex__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cout_q_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cout_q_pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(522, vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out);
    VL_RAND_RESET_W(522, vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0);
    VL_RAND_RESET_W(1044, vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg);
    vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_arb__DOT__req_valid_in = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(1290, vlSelf->__PVT__mem_arb__DOT__req_data_in);
    vlSelf->__PVT__mem_arb__DOT__rsp_valid_out = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mem_arb__DOT__rsp_ready_out = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mem_arb__DOT__rsp_ready_in = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(645, vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0);
    vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__req_queue_push = VL_RAND_RESET_I(2);
    vlSelf->__PVT__avs_adapter__DOT__req_queue_pop = VL_RAND_RESET_I(2);
    vlSelf->__PVT__avs_adapter__DOT__req_queue_going_full = VL_RAND_RESET_I(2);
    vlSelf->__PVT__avs_adapter__DOT__bank_req_ready = VL_RAND_RESET_I(2);
    vlSelf->__PVT__avs_adapter__DOT__rsp_arb_valid_in = VL_RAND_RESET_I(2);
    vlSelf->__PVT__avs_adapter__DOT__rsp_queue_empty = VL_RAND_RESET_I(2);
    vlSelf->avs_adapter__DOT____Vcellout__genblk3__BRA__0__KET____DOT__pending_size__full = VL_RAND_RESET_I(1);
    vlSelf->avs_adapter__DOT____Vcellout__genblk3__BRA__1__KET____DOT__pending_size__full = VL_RAND_RESET_I(1);
    vlSelf->avs_adapter__DOT____Vcellout__genblk6__BRA__0__KET____DOT__rd_rsp_queue__empty = VL_RAND_RESET_I(1);
    vlSelf->avs_adapter__DOT____Vcellout__genblk6__BRA__1__KET____DOT__rd_rsp_queue__empty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(555, vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0);
    VL_RAND_RESET_W(556, vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in);
    vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_n = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vi0] = VL_RAND_RESET_Q(43);
    }
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_n = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vi0] = VL_RAND_RESET_Q(43);
    }
    VL_RAND_RESET_W(602, vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0);
    VL_RAND_RESET_W(1204, vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg);
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(602, vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0);
    VL_RAND_RESET_W(1204, vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg);
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_n = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vi0]);
    }
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_n = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vi0]);
    }
    vlSelf->__PVT__cci_rd_pending_size__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_pending_size__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_pending_size__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_pending_size__DOT__genblk3__DOT__used_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT_____05Fcci_rdq_reset__DOT__genblk1__DOT__reset_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_req_queue__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_n = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = VL_RAND_RESET_I(4);
    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        VL_RAND_RESET_W(554, vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vi0]);
    }
    vlSelf->__PVT__cci_wr_pending_size__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_wr_pending_size__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cci_wr_pending_size__DOT__genblk3__DOT__used_r = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(384, vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr);
    VL_RAND_RESET_W(448, vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v);
    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__empty_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__full_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__used_r = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__used_n = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vi0] = VL_RAND_RESET_I(14);
    }
}
