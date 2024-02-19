// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim__Syms.h"
#include "Vvortex_afu_shim_vortex_afu.h"

VL_INLINE_OPT void Vvortex_afu_shim_vortex_afu___combo__TOP__vortex_afu_shim__afu__0(Vvortex_afu_shim_vortex_afu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim_vortex_afu___combo__TOP__vortex_afu_shim__afu__0\n"); );
    // Init
    CData/*0:0*/ __PVT__cci_mem_rsp_ready;
    CData/*1:0*/ __PVT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__ready_out_r;
    CData/*1:0*/ __PVT__avs_adapter__DOT__rsp_arb_ready_in;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__16__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__17__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__18__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__19__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__20__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__21__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__22__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__23__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__24__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__25__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__26__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__27__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__28__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__29__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__30__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__31__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__vs;
    CData/*1:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__vs;
    // Body
    vlSelf->__Vcellinp__vortex__reset = (1U & ((IData)(vlSymsp->TOP.reset) 
                                               | (~ (IData)(vlSelf->__PVT__vx_running))));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U]);
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 2U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 4U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 6U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 8U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 0xaU));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 0xcU));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 0xeU));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 0x10U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 0x12U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 0x14U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 0x16U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 0x18U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 0x1aU));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                 >> 0x1cU));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__vs 
        = (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
           >> 0x1eU);
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__16__KET____DOT__vs 
        = (3U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U]);
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__17__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 2U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__18__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 4U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__19__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 6U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__20__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 8U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__21__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 0xaU));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__22__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 0xcU));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__23__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 0xeU));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__24__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 0x10U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__25__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 0x12U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__26__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 0x14U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__27__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 0x16U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__28__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 0x18U));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__29__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 0x1aU));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__30__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                 >> 0x1cU));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__31__KET____DOT__vs 
        = (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
           >> 0x1eU);
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                  >> 1U)) | (1U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                                   >> 4U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                                   >> 8U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                                     >> 0xcU)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                                      >> 0x10U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                                      >> 0x14U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                                      >> 0x18U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
                                      >> 0x1cU)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                  >> 1U)) | (1U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                  >> 5U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                                   >> 4U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                  >> 9U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                                   >> 8U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                                     >> 0xcU)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                  >> 0x11U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                                      >> 0x10U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                  >> 0x15U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                                      >> 0x14U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                  >> 0x19U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                                      >> 0x18U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                  >> 0x1dU)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
                                      >> 0x1cU)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
                  >> 3U)) | (1U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U]));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
                                     >> 8U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
                                      >> 0x10U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
                                      >> 0x18U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
                  >> 3U)) | (1U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U]));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
                  >> 0xbU)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
                                     >> 8U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
                                      >> 0x10U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
                  >> 0x1bU)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
                                      >> 0x18U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U] 
                  >> 7U)) | (1U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U]));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U] 
                                      >> 0x10U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U] 
                  >> 7U)) | (1U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U]));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U] 
                  >> 0x17U)) | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U] 
                                      >> 0x10U)));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[8U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[8U]));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[9U] 
                  >> 0xfU)) | (1U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[9U]));
    __PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0xbU] 
                  << 1U)) | (1U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0xaU]));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xfffffffbU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (4U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                    >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xffffffefU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x10U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xffffffbfU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x40U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                       >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xfffffeffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x100U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xfffffbffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x400U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                        >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xffffefffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x1000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xffffbfffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x4000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                         >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xfffeffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x10000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x40000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                          >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xffefffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x100000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xffbfffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x400000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                           >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xfeffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x1000000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xfbffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x4000000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                            >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xefffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x10000000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U] 
        = ((0xbfffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]) 
           | (0x40000000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
                             >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (1U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (4U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                    >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xffffffefU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x10U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x40U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                       >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x100U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x400U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                        >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xffffefffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x1000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x4000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                         >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x10000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x40000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                          >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xffefffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x100000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x400000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                           >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x1000000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x4000000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                            >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xefffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x10000000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]) 
           | (0x40000000U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
                             >> 1U)));
    vlSelf->__PVT__cmd_type = (((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0U] 
                                 >> 0x1dU) & (0xa000U 
                                              == (0xffff000U 
                                                  & vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U])))
                                ? (7U & vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[1U])
                                : 0U);
    vlSelf->__PVT__cci_wr_rsp_fire = (IData)(((2U == (IData)(vlSelf->__PVT__state)) 
                                              & (1U 
                                                 == 
                                                 (0x1e0001U 
                                                  & vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0U]))));
    vlSelf->__PVT__cci_rd_rsp_fire = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0U] 
                                       >> 0x1fU) & 
                                      (0U == (0xf0000U 
                                              & vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U])));
    vlSelf->__PVT__cout_q_pop = (((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0U] 
                                   >> 0x1eU) & (0x12000U 
                                                == 
                                                (0xffff000U 
                                                 & vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U]))) 
                                 & (~ (IData)(vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__empty_r)));
    __PVT__cci_mem_rsp_ready = (1U & ((~ (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                          >> 0x1cU)) 
                                      & (~ (IData)(vlSelf->__PVT__cci_wr_pending_size__DOT__full_r))));
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][0U] 
        = vlSelf->__PVT__avs_readdata[0U][0U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][1U] 
        = vlSelf->__PVT__avs_readdata[0U][1U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][2U] 
        = vlSelf->__PVT__avs_readdata[0U][2U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][3U] 
        = vlSelf->__PVT__avs_readdata[0U][3U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][4U] 
        = vlSelf->__PVT__avs_readdata[0U][4U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][5U] 
        = vlSelf->__PVT__avs_readdata[0U][5U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][6U] 
        = vlSelf->__PVT__avs_readdata[0U][6U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][7U] 
        = vlSelf->__PVT__avs_readdata[0U][7U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][8U] 
        = vlSelf->__PVT__avs_readdata[0U][8U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][9U] 
        = vlSelf->__PVT__avs_readdata[0U][9U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][0xaU] 
        = vlSelf->__PVT__avs_readdata[0U][0xaU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][0xbU] 
        = vlSelf->__PVT__avs_readdata[0U][0xbU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][0xcU] 
        = vlSelf->__PVT__avs_readdata[0U][0xcU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][0xdU] 
        = vlSelf->__PVT__avs_readdata[0U][0xdU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][0xeU] 
        = vlSelf->__PVT__avs_readdata[0U][0xeU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[0U][0xfU] 
        = vlSelf->__PVT__avs_readdata[0U][0xfU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][0U] 
        = vlSelf->__PVT__avs_readdata[1U][0U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][1U] 
        = vlSelf->__PVT__avs_readdata[1U][1U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][2U] 
        = vlSelf->__PVT__avs_readdata[1U][2U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][3U] 
        = vlSelf->__PVT__avs_readdata[1U][3U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][4U] 
        = vlSelf->__PVT__avs_readdata[1U][4U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][5U] 
        = vlSelf->__PVT__avs_readdata[1U][5U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][6U] 
        = vlSelf->__PVT__avs_readdata[1U][6U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][7U] 
        = vlSelf->__PVT__avs_readdata[1U][7U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][8U] 
        = vlSelf->__PVT__avs_readdata[1U][8U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][9U] 
        = vlSelf->__PVT__avs_readdata[1U][9U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][0xaU] 
        = vlSelf->__PVT__avs_readdata[1U][0xaU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][0xbU] 
        = vlSelf->__PVT__avs_readdata[1U][0xbU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][0xcU] 
        = vlSelf->__PVT__avs_readdata[1U][0xcU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][0xdU] 
        = vlSelf->__PVT__avs_readdata[1U][0xdU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][0xeU] 
        = vlSelf->__PVT__avs_readdata[1U][0xeU];
    vlSelf->__Vcellinp__avs_adapter__avs_readdata[1U][0xfU] 
        = vlSelf->__PVT__avs_readdata[1U][0xfU];
    vlSelf->__Vcellinp__avs_adapter__avs_waitrequest[0U] 
        = vlSelf->__PVT__avs_waitrequest[0U];
    vlSelf->__Vcellinp__avs_adapter__avs_waitrequest[1U] 
        = vlSelf->__PVT__avs_waitrequest[1U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid[0U] 
        = vlSelf->__PVT__avs_readdatavalid[0U];
    vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid[1U] 
        = vlSelf->__PVT__avs_readdatavalid[1U];
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__1__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xffffffefU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__2__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__3__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__4__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__5__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xffffefffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__6__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__7__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__8__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__9__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xffefffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__10__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__11__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__12__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__13__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xefffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__14__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[2U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__15__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__16__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__17__KET____DOT__vs))) 
              << 2U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xffffffefU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__18__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__19__KET____DOT__vs))) 
              << 6U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__20__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__21__KET____DOT__vs))) 
              << 0xaU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xffffefffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__22__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__23__KET____DOT__vs))) 
              << 0xeU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__24__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__25__KET____DOT__vs))) 
              << 0x12U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xffefffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__26__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__27__KET____DOT__vs))) 
              << 0x16U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__28__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__29__KET____DOT__vs))) 
              << 0x1aU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xefffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__30__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[3U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__1__KET____DOT__genblk1__BRA__31__KET____DOT__vs))) 
              << 0x1eU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
        = ((0xffffffefU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
        = ((0xffffefffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
        = ((0xffefffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U] 
        = ((0xefffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[4U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
        = ((0xffffffefU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__vs))) 
              << 4U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
        = ((0xfffffeffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
        = ((0xffffefffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__vs))) 
              << 0xcU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
        = ((0xfffeffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
        = ((0xffefffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__vs))) 
              << 0x14U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
        = ((0xfeffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U] 
        = ((0xefffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[5U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__vs))) 
              << 0x1cU));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U] 
        = ((0xfffffeffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U] 
        = ((0xfffeffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U] 
        = ((0xfeffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[6U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U] 
        = ((0xfffffeffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__vs))) 
              << 8U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U] 
        = ((0xfffeffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U] 
        = ((0xfeffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[7U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__vs))) 
              << 0x18U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[8U] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[8U]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[8U] 
        = ((0xfffeffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[8U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[9U] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[9U]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[9U] 
        = ((0xfffeffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[9U]) 
           | ((IData)((0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__vs))) 
              << 0x10U));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0xaU]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0xbU] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0xbU]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0xcU] 
        = ((0xfffffffeU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0xcU]) 
           | (0U != (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__vs)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
        = ((0xfffffffcU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
           | ((2U & (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__0__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U])))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
        = ((0xffffffcfU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
           | ((0x20U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__1__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]))) 
                                   << 4U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
        = ((0xfffffcffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
           | ((0x200U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__2__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]))) 
                                    << 8U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
        = ((0xffffcfffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
           | ((0x2000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__3__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
        = ((0xfffcffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
           | ((0x20000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__4__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
        = ((0xffcfffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
           | ((0x200000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__5__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
        = ((0xfcffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
           | ((0x2000000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__6__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
        = ((0xcfffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
           | ((0x20000000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__7__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
        = ((0xfffffffcU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
           | ((2U & (IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__8__KET____DOT__vs)) 
              | (IData)((0U != (5U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U])))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
        = ((0xffffffcfU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
           | ((0x20U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__9__KET____DOT__vs) 
                        << 4U)) | ((IData)((0U != (0x50U 
                                                   & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]))) 
                                   << 4U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
        = ((0xfffffcffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
           | ((0x200U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__10__KET____DOT__vs) 
                         << 8U)) | ((IData)((0U != 
                                             (0x500U 
                                              & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]))) 
                                    << 8U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
        = ((0xffffcfffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
           | ((0x2000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__11__KET____DOT__vs) 
                          << 0xcU)) | ((IData)((0U 
                                                != 
                                                (0x5000U 
                                                 & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]))) 
                                       << 0xcU)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
        = ((0xfffcffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
           | ((0x20000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__12__KET____DOT__vs) 
                           << 0x10U)) | ((IData)((0U 
                                                  != 
                                                  (0x50000U 
                                                   & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]))) 
                                         << 0x10U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
        = ((0xffcfffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
           | ((0x200000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__13__KET____DOT__vs) 
                            << 0x14U)) | ((IData)((0U 
                                                   != 
                                                   (0x500000U 
                                                    & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]))) 
                                          << 0x14U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
        = ((0xfcffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
           | ((0x2000000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__14__KET____DOT__vs) 
                             << 0x18U)) | ((IData)(
                                                   (0U 
                                                    != 
                                                    (0x5000000U 
                                                     & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]))) 
                                           << 0x18U)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
        = ((0xcfffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
           | ((0x20000000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__2__KET____DOT__genblk1__BRA__15__KET____DOT__vs) 
                              << 0x1cU)) | ((IData)(
                                                    (0U 
                                                     != 
                                                     (0x50000000U 
                                                      & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[1U]))) 
                                            << 0x1cU)));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U] 
        = ((0xfffffff8U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U]) 
           | ((4U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__0__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
                                      | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
                                            >> 4U))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U] 
        = ((0xfffff8ffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U]) 
           | ((0x400U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__1__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U] 
        = ((0xfff8ffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U]) 
           | ((0x40000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__2__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
                                          | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U] 
        = ((0xf8ffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U]) 
           | ((0x4000000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__3__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U]) 
                                              | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[2U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U] 
        = ((0xfffffff8U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U]) 
           | ((4U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__4__KET____DOT__vs) 
                     << 1U)) | (3U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
                                      | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
                                          << 0x1cU) 
                                         | (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
                                            >> 4U))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U] 
        = ((0xfffff8ffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U]) 
           | ((0x400U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__5__KET____DOT__vs) 
                         << 9U)) | (0x300U & ((0xffffff00U 
                                               & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
                                              | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
                                                  << 0x1cU) 
                                                 | (0xfffff00U 
                                                    & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U] 
        = ((0xfff8ffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U]) 
           | ((0x40000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__6__KET____DOT__vs) 
                           << 0x11U)) | (0x30000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
                                          | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
                                              << 0x1cU) 
                                             | (0xfff0000U 
                                                & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
                                                   >> 4U)))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U] 
        = ((0xf8ffffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U]) 
           | ((0x4000000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__3__KET____DOT__genblk1__BRA__7__KET____DOT__vs) 
                             << 0x19U)) | (0x3000000U 
                                           & ((0xff000000U 
                                               & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U]) 
                                              | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
                                                  << 0x1cU) 
                                                 | (0xf000000U 
                                                    & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[3U] 
                                                       >> 4U)))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[6U] 
        = ((0xfffffff0U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[6U]) 
           | ((8U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__0__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U] 
                                      | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U] 
                                            >> 8U))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[6U] 
        = ((0xfff0ffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[6U]) 
           | ((0x80000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__1__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U]) 
                                          | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[4U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[7U] 
        = ((0xfffffff0U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[7U]) 
           | ((8U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__2__KET____DOT__vs) 
                     << 2U)) | (7U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U] 
                                      | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U] 
                                          << 0x18U) 
                                         | (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U] 
                                            >> 8U))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[7U] 
        = ((0xfff0ffffU & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[7U]) 
           | ((0x80000U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__4__KET____DOT__genblk1__BRA__3__KET____DOT__vs) 
                           << 0x12U)) | (0x70000U & 
                                         ((0xffff0000U 
                                           & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U]) 
                                          | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[5U] 
                                                   >> 8U)))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[8U] 
        = ((0xffffffe0U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[8U]) 
           | ((0x10U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__genblk1__BRA__0__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[6U] 
                                           | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[6U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[6U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[9U] 
        = ((0xffffffe0U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[9U]) 
           | ((0x10U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__5__KET____DOT__genblk1__BRA__1__KET____DOT__vs) 
                        << 3U)) | (0xfU & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[7U] 
                                           | ((vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[7U] 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[7U] 
                                                 >> 0x10U))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0xaU] 
        = ((0xffffffc0U & vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0xaU]) 
           | ((0x20U & ((IData)(__PVT__cout_tid_enc__DOT__genblk1__DOT__genblk1__BRA__6__KET____DOT__genblk1__BRA__0__KET____DOT__vs) 
                        << 4U)) | (0x1fU & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[8U] 
                                            | vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[9U]))));
    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_n 
        = (0xfU & ((IData)(vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_r) 
                   + VL_EXTENDS_II(4,2, (3U & ((IData)(vlSelf->__PVT__cci_rd_rsp_fire) 
                                               - (IData)(vlSelf->__PVT__cci_mem_wr_req_fire))))));
    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__used_n 
        = (0x3fU & ((IData)(vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__used_r) 
                    + VL_EXTENDS_II(6,2, (3U & ((IData)(vlSelf->__PVT__cout_q_push) 
                                                - (IData)(vlSelf->__PVT__cout_q_pop))))));
    vlSelf->__PVT__mem_arb__DOT__rsp_ready_out = ((1U 
                                                   & (IData)(vlSelf->__PVT__mem_arb__DOT__rsp_ready_out)) 
                                                  | ((IData)(__PVT__cci_mem_rsp_ready) 
                                                     << 1U));
    vlSelf->__PVT__cci_mem_rd_rsp_fire = (((IData)(vlSelf->__PVT__mem_arb__DOT__rsp_valid_out) 
                                           >> 1U) & (IData)(__PVT__cci_mem_rsp_ready));
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (~ vlSelf->__Vcellinp__avs_adapter__avs_waitrequest
              [0U]));
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (~ vlSelf->__Vcellinp__avs_adapter__avs_waitrequest
              [1U]));
    __PVT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__ready_out_r 
        = vlSelf->__PVT__mem_arb__DOT__rsp_ready_out;
    vlSelf->__PVT__mem_arb__DOT__rsp_ready_in = (1U 
                                                 & ((IData)(__PVT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__ready_out_r) 
                                                    >> 
                                                    (1U 
                                                     & vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U])));
    __PVT__avs_adapter__DOT__rsp_arb_ready_in = ((- (IData)((IData)(vlSelf->__PVT__mem_arb__DOT__rsp_ready_in))) 
                                                 & (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r));
    vlSelf->__PVT__avs_adapter__DOT__req_queue_pop 
        = ((IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb_valid_in) 
           & (IData)(__PVT__avs_adapter__DOT__rsp_arb_ready_in));
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_n 
        = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r) 
                    + VL_EXTENDS_II(5,2, (3U & (vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
                                                [0U] 
                                                - (1U 
                                                   & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop)))))));
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_n 
        = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r) 
                    + VL_EXTENDS_II(5,2, (3U & (vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
                                                [1U] 
                                                - (1U 
                                                   & ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                                                      >> 1U)))))));
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_n 
        = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r) 
                    + VL_EXTENDS_II(5,2, (3U & ((1U 
                                                 & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push)) 
                                                - (1U 
                                                   & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop)))))));
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_n 
        = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r) 
                    + VL_EXTENDS_II(5,2, (3U & ((1U 
                                                 & ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push) 
                                                    >> 1U)) 
                                                - (1U 
                                                   & ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                                                      >> 1U)))))));
}
