// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim__Syms.h"
#include "Vvortex_afu_shim_vortex_afu.h"

extern const VlWide<17>/*543:0*/ Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0;
extern const VlUnpacked<CData/*2:0*/, 16> Vvortex_afu_shim__ConstPool__TABLE_h4893871c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vvortex_afu_shim__ConstPool__TABLE_h9e1d19ab_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vvortex_afu_shim__ConstPool__TABLE_h233ace7c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vvortex_afu_shim__ConstPool__TABLE_h519abc85_0;
extern const VlWide<19>/*607:0*/ Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0;
extern const VlWide<18>/*575:0*/ Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0;
extern const VlWide<35>/*1119:0*/ Vvortex_afu_shim__ConstPool__CONST_h2d832103_0;

VL_INLINE_OPT void Vvortex_afu_shim_vortex_afu___sequent__TOP__vortex_afu_shim__afu__0(Vvortex_afu_shim_vortex_afu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim_vortex_afu___sequent__TOP__vortex_afu_shim__afu__0\n"); );
    // Init
    VlWide<18>/*553:0*/ __PVT__cci_rdq_dout;
    VlWide<18>/*553:0*/ __PVT__mem_arb__DOT__rsp_data_in;
    VlWide<35>/*1107:0*/ mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out;
    CData/*1:0*/ __PVT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__valid_out_r;
    VlWide<3>/*85:0*/ __PVT__avs_adapter__DOT__req_queue_tag_out;
    VlWide<35>/*1109:0*/ __PVT__avs_adapter__DOT__rsp_arb_data_in;
    VlWide<32>/*1023:0*/ __PVT__avs_adapter__DOT__rsp_queue_data_out;
    VlWide<19>/*601:0*/ avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out;
    VlWide<19>/*601:0*/ avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out;
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*3:0*/ __Vdly__vx_reset_ctr;
    CData/*2:0*/ __Vdly__state;
    CData/*0:0*/ __Vdly__vx_busy_wait;
    CData/*0:0*/ __Vdly__vx_running;
    CData/*2:0*/ __Vdly__cci_rd_rsp_ctr;
    QData/*41:0*/ __Vdly__cci_mem_wr_req_addr_base;
    QData/*41:0*/ __Vdly__cci_rd_req_addr;
    QData/*41:0*/ __Vdly__cci_rd_req_ctr;
    QData/*41:0*/ __Vdly__cci_mem_wr_req_ctr;
    QData/*41:0*/ __Vdly__cci_wr_req_ctr;
    QData/*41:0*/ __Vdly__cci_mem_rd_req_ctr;
    QData/*41:0*/ __Vdly__cci_mem_rd_req_addr;
    CData/*4:0*/ __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r;
    CData/*4:0*/ __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r;
    CData/*4:0*/ __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    CData/*4:0*/ __Vdlyvdim0__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    QData/*42:0*/ __Vdlyvval__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*4:0*/ __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r;
    CData/*4:0*/ __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r;
    CData/*4:0*/ __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    CData/*4:0*/ __Vdlyvdim0__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    QData/*42:0*/ __Vdlyvval__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*4:0*/ __Vdly__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r;
    CData/*4:0*/ __Vdly__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    CData/*4:0*/ __Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    VlWide<16>/*511:0*/ __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*4:0*/ __Vdly__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r;
    CData/*4:0*/ __Vdly__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    CData/*4:0*/ __Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    VlWide<16>/*511:0*/ __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*3:0*/ __Vdly__cci_rd_pending_size__DOT__genblk3__DOT__used_r;
    CData/*3:0*/ __Vdly__cci_rd_req_queue__DOT__genblk6__DOT__used_r;
    CData/*3:0*/ __Vdly__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    CData/*3:0*/ __Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    VlWide<18>/*553:0*/ __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*7:0*/ __Vdly__cci_wr_pending_size__DOT__genblk3__DOT__used_r;
    CData/*5:0*/ __Vdly__cout_queue__DOT__genblk6__DOT__used_r;
    CData/*5:0*/ __Vdly__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r;
    CData/*5:0*/ __Vdly__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    CData/*5:0*/ __Vdlyvdim0__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    SData/*13:0*/ __Vdlyvval__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    VlWide<33>/*1055:0*/ __Vtemp_h43419aeb__0;
    VlWide<19>/*607:0*/ __Vtemp_h31ac725e__0;
    VlWide<19>/*607:0*/ __Vtemp_h03bd43c8__0;
    VlWide<3>/*95:0*/ __Vtemp_h1d8fd1dc__0;
    // Body
    __Vdly__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r 
        = vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r;
    __Vdly__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    __Vdly__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    __Vdly__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    __Vdly__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    __Vdly__cout_queue__DOT__genblk6__DOT__used_r = vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__used_r;
    __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r;
    __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r;
    __Vdly__cci_rd_pending_size__DOT__genblk3__DOT__used_r 
        = vlSelf->__PVT__cci_rd_pending_size__DOT__genblk3__DOT__used_r;
    __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r;
    __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r;
    __Vdly__cci_rd_req_queue__DOT__genblk6__DOT__used_r 
        = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_r;
    __Vdly__cci_wr_pending_size__DOT__genblk3__DOT__used_r 
        = vlSelf->__PVT__cci_wr_pending_size__DOT__genblk3__DOT__used_r;
    __Vdly__vx_reset_ctr = vlSelf->__PVT__vx_reset_ctr;
    __Vdly__cci_rd_req_ctr = vlSelf->__PVT__cci_rd_req_ctr;
    __Vdly__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r;
    __Vdly__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r;
    __Vdly__cci_wr_req_ctr = vlSelf->__PVT__cci_wr_req_ctr;
    __Vdly__cci_mem_wr_req_addr_base = vlSelf->__PVT__cci_mem_wr_req_addr_base;
    __Vdly__cci_rd_rsp_ctr = vlSelf->__PVT__cci_rd_rsp_ctr;
    __Vdly__cci_rd_req_addr = vlSelf->__PVT__cci_rd_req_addr;
    __Vdly__cci_mem_rd_req_addr = vlSelf->__PVT__cci_mem_rd_req_addr;
    __Vdly__cci_mem_wr_req_ctr = vlSelf->__PVT__cci_mem_wr_req_ctr;
    __Vdlyvset__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdlyvset__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdlyvset__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdlyvset__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdlyvset__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__cci_mem_rd_req_ctr = vlSelf->__PVT__cci_mem_rd_req_ctr;
    __Vdlyvset__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 0U;
    __Vdly__vx_busy_wait = vlSelf->__PVT__vx_busy_wait;
    __Vdly__vx_running = vlSelf->__PVT__vx_running;
    __Vdly__state = vlSelf->__PVT__state;
    __Vdly__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = ((IData)(vlSelf->__PVT_____05Fcci_rdq_reset__DOT__genblk1__DOT__reset_r)
            ? 0U : (0xfU & ((IData)(vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r) 
                            + (IData)(vlSelf->__PVT__cci_rd_rsp_fire))));
    if (vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r) {
        __Vdly__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = 0U;
        __Vdly__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = 0U;
        __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = 0U;
        __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = 0U;
    } else {
        __Vdly__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
            = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r) 
                        + vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
                        [1U]));
        __Vdly__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
            = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r) 
                        + vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
                        [0U]));
        __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
            = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r) 
                        + (1U & ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push) 
                                 >> 1U))));
        __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
            = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r) 
                        + (1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push))));
    }
    if (vlSymsp->TOP.reset) {
        __Vdly__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = 0U;
        __Vdly__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r = 0U;
    } else {
        __Vdly__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r 
            = (0x3fU & ((IData)(vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r) 
                        + (IData)(vlSelf->__PVT__cout_q_pop)));
        __Vdly__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
            = (0x3fU & ((IData)(vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r) 
                        + (IData)(vlSelf->__PVT__cout_q_push)));
    }
    if (vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r) {
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r = 1U;
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r = 0U;
        __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push) 
                               >> 1U) & (~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                                            >> 1U)))) 
                          | (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:94: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk3[1].rd_req_queue.genblk6: runtime error: incrementing full queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 94, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                               >> 1U) & (~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push) 
                                            >> 1U)))) 
                          | (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:95: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk3[1].rd_req_queue.genblk6: runtime error: decrementing empty queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 95, "");
                }
            }
        }
        if ((2U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                          >> 1U)))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r = 0U;
                if ((0x1fU == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r))) {
                    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop))) {
            vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r = 1U;
            }
        }
        __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r 
            = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_n;
    }
    if (vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r) {
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r = 1U;
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r = 0U;
        __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push) 
                              & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop)))) 
                          | (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:94: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk3[0].rd_req_queue.genblk6: runtime error: incrementing full queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 94, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                              & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push)))) 
                          | (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:95: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk3[0].rd_req_queue.genblk6: runtime error: decrementing empty queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 95, "");
                }
            }
        }
        if ((1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop)))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r = 0U;
                if ((0x1fU == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r))) {
                    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop))) {
            vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r = 1U;
            }
        }
        __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r 
            = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_n;
    }
    if (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h43419aeb__0[0x10U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]) 
                                        << 0xaU) | 
                                       (0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0x11U]));
        __Vtemp_h43419aeb__0[0x11U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[1U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x12U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[1U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[2U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x13U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[2U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[3U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x14U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[3U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[4U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x15U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[4U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[5U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[5U]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x16U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[5U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[5U]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[6U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[6U]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x17U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[6U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[6U]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[7U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[7U]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x18U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[7U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[7U]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[8U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[8U]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x19U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[8U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[8U]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[9U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[9U]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x1aU] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[9U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[9U]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xaU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xaU]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x1bU] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xaU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xaU]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xbU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xbU]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x1cU] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xbU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xbU]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xcU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xcU]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x1dU] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xcU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xcU]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xdU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xdU]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x1eU] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xdU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xdU]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xeU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xeU]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x1fU] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xeU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xeU]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xfU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xfU]) 
                                        << 0xaU));
        __Vtemp_h43419aeb__0[0x20U] = (((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xfU] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xfU]) 
                                        >> 0x16U) | 
                                       ((Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0x10U] 
                                         & vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x10U]) 
                                        << 0xaU));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = ((0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[1U]) 
               | (0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0U]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[2U]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[2U]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[3U]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[3U]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[4U]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[4U]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[5U]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[5U]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[5U] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[6U]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[6U]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[6U] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[7U]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[7U]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[7U] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[8U]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[8U]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[8U] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[9U]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[9U]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[9U] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xaU]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xaU]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xaU] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xbU]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xbU]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xbU] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xcU]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xcU]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xcU] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xdU]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xdU]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xdU] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xeU]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xeU]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xeU] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xfU]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xfU]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xfU] 
            = ((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0x10U]) 
               | (0xfffffc00U & vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0x10U]));
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x10U] 
            = __Vtemp_h43419aeb__0[0x10U];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x11U] 
            = __Vtemp_h43419aeb__0[0x11U];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U] 
            = __Vtemp_h43419aeb__0[0x12U];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x13U] 
            = __Vtemp_h43419aeb__0[0x13U];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x14U] 
            = __Vtemp_h43419aeb__0[0x14U];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x15U] 
            = __Vtemp_h43419aeb__0[0x15U];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x16U] 
            = __Vtemp_h43419aeb__0[0x16U];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x17U] 
            = __Vtemp_h43419aeb__0[0x17U];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x18U] 
            = __Vtemp_h43419aeb__0[0x18U];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x19U] 
            = __Vtemp_h43419aeb__0[0x19U];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1aU] 
            = __Vtemp_h43419aeb__0[0x1aU];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1bU] 
            = __Vtemp_h43419aeb__0[0x1bU];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1cU] 
            = __Vtemp_h43419aeb__0[0x1cU];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1dU] 
            = __Vtemp_h43419aeb__0[0x1dU];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1eU] 
            = __Vtemp_h43419aeb__0[0x1eU];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1fU] 
            = __Vtemp_h43419aeb__0[0x1fU];
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x20U] 
            = __Vtemp_h43419aeb__0[0x20U];
    }
    vlSelf->__PVT__cci_wr_req_data[0U] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[2U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[1U] 
                                             >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[1U] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[3U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[2U] 
                                             >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[2U] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[4U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[3U] 
                                             >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[3U] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[5U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[4U] 
                                             >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[4U] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[6U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[5U] 
                                             >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[5U] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[7U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[6U] 
                                             >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[6U] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[8U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[7U] 
                                             >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[7U] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[9U] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[8U] 
                                             >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[8U] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xaU] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[9U] 
                                             >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[9U] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xbU] 
                                           << 0x16U) 
                                          | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xaU] 
                                             >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[0xaU] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xcU] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xbU] 
                                               >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[0xbU] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xdU] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xcU] 
                                               >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[0xcU] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xeU] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xdU] 
                                               >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[0xdU] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xfU] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xeU] 
                                               >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[0xeU] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0x10U] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xfU] 
                                               >> 0xaU));
    vlSelf->__PVT__cci_wr_req_data[0xfU] = ((vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0x11U] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0x10U] 
                                               >> 0xaU));
    if (vlSymsp->TOP.reset) {
        __Vdly__cci_rd_pending_size__DOT__genblk3__DOT__used_r = 0U;
        vlSelf->__PVT__cci_rd_pending_size__DOT__empty_r = 1U;
        vlSelf->__PVT__cci_rd_pending_size__DOT__full_r = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__cci_rd_req_fire) 
                              & (~ (IData)(vlSelf->__PVT__cci_mem_wr_req_fire)))) 
                          | (~ (IData)(vlSelf->__PVT__cci_pending_reads_full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_pending_size.sv:69: Assertion failed in %Nvortex_afu_shim.afu.cci_rd_pending_size.genblk3: runtime error: incrementing full counter\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_pending_size.sv", 69, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__cci_mem_wr_req_fire) 
                              & (~ (IData)(vlSelf->__PVT__cci_rd_req_fire)))) 
                          | (~ (IData)(vlSelf->__PVT__cci_rd_pending_size__DOT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_pending_size.sv:70: Assertion failed in %Nvortex_afu_shim.afu.cci_rd_pending_size.genblk3: runtime error: decrementing empty counter\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_pending_size.sv", 70, "");
                }
            }
        }
        if (vlSelf->__PVT__cci_rd_req_fire) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cci_mem_wr_req_fire)))) {
                vlSelf->__PVT__cci_rd_pending_size__DOT__empty_r = 0U;
                if ((0xfU == (IData)(vlSelf->__PVT__cci_rd_pending_size__DOT__genblk3__DOT__used_r))) {
                    vlSelf->__PVT__cci_rd_pending_size__DOT__full_r = 1U;
                }
            }
        } else if (vlSelf->__PVT__cci_mem_wr_req_fire) {
            vlSelf->__PVT__cci_rd_pending_size__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelf->__PVT__cci_rd_pending_size__DOT__genblk3__DOT__used_r))) {
                vlSelf->__PVT__cci_rd_pending_size__DOT__empty_r = 1U;
            }
        }
        __Vdly__cci_rd_pending_size__DOT__genblk3__DOT__used_r 
            = (0xfU & ((IData)(vlSelf->__PVT__cci_rd_pending_size__DOT__genblk3__DOT__used_r) 
                       + VL_EXTENDS_II(4,2, (3U & ((IData)(vlSelf->__PVT__cci_rd_req_fire) 
                                                   - (IData)(vlSelf->__PVT__cci_mem_wr_req_fire))))));
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSymsp->TOP.reset))));
    if ((1U & Vvortex_afu_shim__ConstPool__TABLE_h4893871c_0
         [__Vtableidx1])) {
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = Vvortex_afu_shim__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx1];
    }
    if ((2U & Vvortex_afu_shim__ConstPool__TABLE_h4893871c_0
         [__Vtableidx1])) {
        vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = Vvortex_afu_shim__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = Vvortex_afu_shim__ConstPool__TABLE_h519abc85_0
        [__Vtableidx1];
    if (vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r) {
        __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r = 0U;
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__empty_r = 1U;
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__full_r = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push) 
                               >> 1U) & (~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                                            >> 1U)))) 
                          | (~ (IData)(vlSelf->avs_adapter__DOT____Vcellout__genblk3__BRA__1__KET____DOT__pending_size__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_pending_size.sv:69: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk3[1].pending_size.genblk3: runtime error: incrementing full counter\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_pending_size.sv", 69, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                               >> 1U) & (~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push) 
                                            >> 1U)))) 
                          | (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_pending_size.sv:70: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk3[1].pending_size.genblk3: runtime error: decrementing empty counter\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_pending_size.sv", 70, "");
                }
            }
        }
        if ((2U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                          >> 1U)))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__empty_r = 0U;
                if ((0x1fU == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r))) {
                    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__full_r = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop))) {
            vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__empty_r = 1U;
            }
        }
        __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r 
            = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r) 
                        + VL_EXTENDS_II(5,2, (3U & 
                                              ((1U 
                                                & ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push) 
                                                   >> 1U)) 
                                               - (1U 
                                                  & ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                                                     >> 1U)))))));
    }
    if (vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r) {
        __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r = 0U;
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__empty_r = 1U;
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__full_r = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push) 
                              & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop)))) 
                          | (~ (IData)(vlSelf->avs_adapter__DOT____Vcellout__genblk3__BRA__0__KET____DOT__pending_size__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_pending_size.sv:69: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk3[0].pending_size.genblk3: runtime error: incrementing full counter\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_pending_size.sv", 69, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                              & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push)))) 
                          | (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_pending_size.sv:70: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk3[0].pending_size.genblk3: runtime error: decrementing empty counter\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_pending_size.sv", 70, "");
                }
            }
        }
        if ((1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop)))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__empty_r = 0U;
                if ((0x1fU == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r))) {
                    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__full_r = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop))) {
            vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__empty_r = 1U;
            }
        }
        __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r 
            = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r) 
                        + VL_EXTENDS_II(5,2, (3U & 
                                              ((1U 
                                                & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push)) 
                                               - (1U 
                                                  & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop)))))));
    }
    if (vlSelf->__PVT_____05Fcci_rdq_reset__DOT__genblk1__DOT__reset_r) {
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__empty_r = 1U;
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__full_r = 0U;
        __Vdly__cci_rd_req_queue__DOT__genblk6__DOT__used_r = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__cci_rd_rsp_fire) 
                              & (~ (IData)(vlSelf->__PVT__cci_mem_wr_req_fire)))) 
                          | (~ (IData)(vlSelf->__PVT__cci_rd_req_queue__DOT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:94: Assertion failed in %Nvortex_afu_shim.afu.cci_rd_req_queue.genblk6: runtime error: incrementing full queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 94, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__cci_mem_wr_req_fire) 
                              & (~ (IData)(vlSelf->__PVT__cci_rd_rsp_fire)))) 
                          | (~ (IData)(vlSelf->__PVT__cci_rdq_empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:95: Assertion failed in %Nvortex_afu_shim.afu.cci_rd_req_queue.genblk6: runtime error: decrementing empty queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 95, "");
                }
            }
        }
        if (vlSelf->__PVT__cci_rd_rsp_fire) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cci_mem_wr_req_fire)))) {
                vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__empty_r = 0U;
                if ((0xfU == (IData)(vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_r))) {
                    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__full_r = 1U;
                }
            }
        } else if (vlSelf->__PVT__cci_mem_wr_req_fire) {
            vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_r))) {
                vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__empty_r = 1U;
            }
        }
        __Vdly__cci_rd_req_queue__DOT__genblk6__DOT__used_r 
            = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_n;
    }
    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r 
        = ((IData)(vlSelf->__PVT_____05Fcci_rdq_reset__DOT__genblk1__DOT__reset_r)
            ? 0U : (0xfU & ((IData)(vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r) 
                            + (IData)(vlSelf->__PVT__cci_mem_wr_req_fire))));
    vlSelf->__PVT__cci_wr_req_addr = (0x3ffffffffffULL 
                                      & ((((QData)((IData)(
                                                           vlSelf->__PVT__cmd_args[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__cmd_args[0U]))) 
                                         + (((QData)((IData)(
                                                             vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0U])))));
    __Vdly__vx_reset_ctr = ((3U == (IData)(vlSelf->__PVT__state))
                             ? (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__vx_reset_ctr)))
                             : 0U);
    if (((0U == (IData)(vlSelf->__PVT__state)) & (2U 
                                                  == (IData)(vlSelf->__PVT__cmd_type)))) {
        __Vdly__cci_rd_req_ctr = 0ULL;
    }
    if (vlSelf->__PVT__cci_rd_req_fire) {
        __Vdly__cci_rd_req_ctr = (0x3ffffffffffULL 
                                  & (1ULL + vlSelf->__PVT__cci_rd_req_ctr));
    }
    if (((0U == (IData)(vlSelf->__PVT__state)) & (2U 
                                                  == (IData)(vlSelf->__PVT__cmd_type)))) {
        __Vdly__cci_rd_req_addr = (0x3ffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->__PVT__cmd_args[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__cmd_args[0U]))));
    }
    if (vlSelf->__PVT__cci_rd_req_fire) {
        __Vdly__cci_rd_req_addr = (0x3ffffffffffULL 
                                   & (1ULL + vlSelf->__PVT__cci_rd_req_addr));
    }
    vlSelf->__PVT__mmio_tx[2U] = ((IData)(vlSymsp->TOP.reset)
                                   ? 0U : (0x3ffU & 
                                           ((0x3feU 
                                             & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                << 1U)) 
                                            | (1U & 
                                               (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0U] 
                                                >> 0x1eU)))));
    if ((0x40000000U & vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0U])) {
        vlSelf->__PVT__mmio_tx[0U] = (IData)(((((((
                                                   (((0U 
                                                      == 
                                                      (0xffffU 
                                                       & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                          >> 0xcU))) 
                                                     | (2U 
                                                        == 
                                                        (0xffffU 
                                                         & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                            >> 0xcU)))) 
                                                    | (4U 
                                                       == 
                                                       (0xffffU 
                                                        & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                           >> 0xcU)))) 
                                                   | (6U 
                                                      == 
                                                      (0xffffU 
                                                       & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                          >> 0xcU)))) 
                                                  | (8U 
                                                     == 
                                                     (0xffffU 
                                                      & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                         >> 0xcU)))) 
                                                 | (0x12U 
                                                    == 
                                                    (0xffffU 
                                                     & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                        >> 0xcU)))) 
                                                | (0x18U 
                                                   == 
                                                   (0xffffU 
                                                    & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                       >> 0xcU)))) 
                                               | (0x1aU 
                                                  == 
                                                  (0xffffU 
                                                   & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                      >> 0xcU))))
                                               ? ((0U 
                                                   == 
                                                   (0xffffU 
                                                    & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                       >> 0xcU)))
                                                   ? 0x1000010000000000ULL
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (0xffffU 
                                                     & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                        >> 0xcU)))
                                                    ? 0x93d56f8c60db361cULL
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xffffU 
                                                      & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                         >> 0xcU)))
                                                     ? 0x35f9452b25c2434cULL
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0xffffU 
                                                       & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                          >> 0xcU)))
                                                      ? 0ULL
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0xffffU 
                                                        & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                           >> 0xcU)))
                                                       ? 0ULL
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0xffffU 
                                                         & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                            >> 0xcU)))
                                                        ? (QData)((IData)(
                                                                          ((vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
                                                                            [vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r] 
                                                                            << 9U) 
                                                                           | ((0x100U 
                                                                               & ((~ (IData)(vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__empty_r)) 
                                                                                << 8U)) 
                                                                              | (IData)(vlSelf->__PVT__state)))))
                                                        : 
                                                       ((0x18U 
                                                         == 
                                                         (0xffffU 
                                                          & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                             >> 0xcU)))
                                                         ? 0xe0001040400ULL
                                                         : 0x1340901120ULL)))))))
                                               : 0ULL));
        vlSelf->__PVT__mmio_tx[1U] = (IData)(((((((
                                                   ((((0U 
                                                       == 
                                                       (0xffffU 
                                                        & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                           >> 0xcU))) 
                                                      | (2U 
                                                         == 
                                                         (0xffffU 
                                                          & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                             >> 0xcU)))) 
                                                     | (4U 
                                                        == 
                                                        (0xffffU 
                                                         & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                            >> 0xcU)))) 
                                                    | (6U 
                                                       == 
                                                       (0xffffU 
                                                        & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                           >> 0xcU)))) 
                                                   | (8U 
                                                      == 
                                                      (0xffffU 
                                                       & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                          >> 0xcU)))) 
                                                  | (0x12U 
                                                     == 
                                                     (0xffffU 
                                                      & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                         >> 0xcU)))) 
                                                 | (0x18U 
                                                    == 
                                                    (0xffffU 
                                                     & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                        >> 0xcU)))) 
                                                | (0x1aU 
                                                   == 
                                                   (0xffffU 
                                                    & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                       >> 0xcU))))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (0xffffU 
                                                     & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                        >> 0xcU)))
                                                    ? 0x1000010000000000ULL
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xffffU 
                                                      & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                         >> 0xcU)))
                                                     ? 0x93d56f8c60db361cULL
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (0xffffU 
                                                       & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                          >> 0xcU)))
                                                      ? 0x35f9452b25c2434cULL
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0xffffU 
                                                        & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                           >> 0xcU)))
                                                       ? 0ULL
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0xffffU 
                                                         & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                            >> 0xcU)))
                                                        ? 0ULL
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0xffffU 
                                                          & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                             >> 0xcU)))
                                                         ? (QData)((IData)(
                                                                           ((vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
                                                                             [vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r] 
                                                                             << 9U) 
                                                                            | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__empty_r)) 
                                                                                << 8U)) 
                                                                               | (IData)(vlSelf->__PVT__state)))))
                                                         : 
                                                        ((0x18U 
                                                          == 
                                                          (0xffffU 
                                                           & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                              >> 0xcU)))
                                                          ? 0xe0001040400ULL
                                                          : 0x1340901120ULL)))))))
                                                : 0ULL) 
                                              >> 0x20U));
    }
    if (((0U == (IData)(vlSelf->__PVT__state)) & (2U 
                                                  == (IData)(vlSelf->__PVT__cmd_type)))) {
        __Vdly__cci_rd_rsp_ctr = 0U;
        __Vdly__cci_mem_wr_req_addr_base = (0x3ffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->__PVT__cmd_args[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__cmd_args[2U]))));
    }
    if (vlSelf->__PVT__cci_rd_rsp_fire) {
        __Vdly__cci_rd_rsp_ctr = (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__cci_rd_rsp_ctr)));
        if ((7U == (IData)(vlSelf->__PVT__cci_rd_rsp_ctr))) {
            __Vdly__cci_mem_wr_req_addr_base = (0x3ffffffffffULL 
                                                & (8ULL 
                                                   + vlSelf->__PVT__cci_mem_wr_req_addr_base));
        }
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0U] 
            = (IData)((0x3ffffffffffULL & (vlSelf->__PVT__cci_mem_wr_req_addr_base 
                                           + (QData)((IData)(
                                                             (7U 
                                                              & vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U]))))));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[1U] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[1U] 
                << 0xaU) | (IData)(((0x3ffffffffffULL 
                                     & (vlSelf->__PVT__cci_mem_wr_req_addr_base 
                                        + (QData)((IData)(
                                                          (7U 
                                                           & vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U]))))) 
                                    >> 0x20U)));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[2U] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[1U] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[2U] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[3U] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[2U] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[3U] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[4U] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[3U] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[4U] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[5U] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[4U] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[5U] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[6U] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[5U] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[6U] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[7U] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[6U] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[7U] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[8U] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[7U] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[8U] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[9U] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[8U] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[9U] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xaU] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[9U] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xaU] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xbU] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xaU] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xbU] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xcU] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xbU] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xcU] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xdU] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xcU] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xdU] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xeU] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xdU] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xeU] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xfU] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xeU] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xfU] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0x10U] 
            = ((vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0xfU] 
                >> 0x16U) | (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x10U] 
                             << 0xaU));
        __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0x11U] 
            = (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x10U] 
               >> 0x16U);
        __Vdlyvset__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 
            = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    }
    if (((0U == (IData)(vlSelf->__PVT__state)) & (1U 
                                                  == (IData)(vlSelf->__PVT__cmd_type)))) {
        __Vdly__cci_mem_rd_req_addr = (0x3ffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__cmd_args[3U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->__PVT__cmd_args[2U]))));
    }
    if (vlSelf->__PVT__cci_mem_rd_req_fire) {
        __Vdly__cci_mem_rd_req_addr = (0x3ffffffffffULL 
                                       & (1ULL + vlSelf->__PVT__cci_mem_rd_req_addr));
    }
    if (((0U == (IData)(vlSelf->__PVT__state)) & (1U 
                                                  == (IData)(vlSelf->__PVT__cmd_type)))) {
        __Vdly__cci_mem_rd_req_ctr = 0ULL;
        vlSelf->__PVT__cci_mem_rd_req_done = 0U;
    }
    if (vlSelf->__PVT__cci_mem_rd_req_fire) {
        __Vdly__cci_mem_rd_req_ctr = (0x3ffffffffffULL 
                                      & (1ULL + vlSelf->__PVT__cci_mem_rd_req_ctr));
        if ((vlSelf->__PVT__cci_mem_rd_req_ctr == (0x3ffffffffffULL 
                                                   & ((((QData)((IData)(
                                                                        vlSelf->__PVT__cmd_args[5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__cmd_args[4U]))) 
                                                      - 1ULL)))) {
            vlSelf->__PVT__cci_mem_rd_req_done = 1U;
        }
    }
    if (vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
        [1U]) {
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][0U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][1U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][2U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][3U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[4U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][4U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[5U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][5U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[6U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][6U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[7U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][7U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[8U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][8U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[9U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][9U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xaU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][0xaU];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xbU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][0xbU];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xcU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][0xcU];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xdU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][0xdU];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xeU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][0xeU];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xfU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [1U][0xfU];
        __Vdlyvset__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 
            = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    }
    if (vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
        [0U]) {
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][0U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[1U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][1U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[2U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][2U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[3U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][3U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[4U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][4U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[5U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][5U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[6U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][6U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[7U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][7U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[8U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][8U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[9U] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][9U];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xaU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][0xaU];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xbU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][0xbU];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xcU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][0xcU];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xdU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][0xdU];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xeU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][0xeU];
        __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xfU] 
            = vlSelf->__Vcellinp__avs_adapter__avs_readdata
            [0U][0xfU];
        __Vdlyvset__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 
            = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    }
    if ((2U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push))) {
        __Vdlyvval__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 
            = (0x7ffffffffffULL & (((QData)((IData)(
                                                    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0U]))));
        __Vdlyvset__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 
            = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    }
    if ((1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push))) {
        __Vdlyvval__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 
            = (0x7ffffffffffULL & (((QData)((IData)(
                                                    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0U]))));
        __Vdlyvset__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 
            = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    }
    if (vlSelf->__PVT__cout_q_push) {
        __Vdlyvval__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 
            = ((0x3f00U & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0xaU] 
                           << 8U)) | (0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0xaU) 
                                                     + 
                                                     (0x1f8U 
                                                      & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0xaU] 
                                                         << 3U)))))
                                                 ? 0U
                                                 : 
                                                (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[
                                                 (((IData)(0x11U) 
                                                   + 
                                                   (0x1f8U 
                                                    & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0xaU] 
                                                       << 3U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      + 
                                                      (0x1f8U 
                                                       & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0xaU] 
                                                          << 3U))))))) 
                                               | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[
                                                  (((IData)(0xaU) 
                                                    + 
                                                    (0x1f8U 
                                                     & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0xaU] 
                                                        << 3U))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0xaU) 
                                                      + 
                                                      (0x1f8U 
                                                       & (vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__addr[0xaU] 
                                                          << 3U))))))));
        __Vdlyvset__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0 
            = vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    }
    if (vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r) {
        vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state = 0U;
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = 0U;
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = 0U;
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = 0U;
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r = 0U;
    } else {
        if (((0U != (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb_valid_in)) 
             & (IData)(vlSelf->__PVT__mem_arb__DOT__rsp_ready_in))) {
            vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state 
                = vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r;
        }
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r 
            = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r) 
                        + (1U & ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                                 >> 1U))));
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r 
            = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r) 
                        + (1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop))));
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r 
            = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r) 
                        + (1U & ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                                 >> 1U))));
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r 
            = (0x1fU & ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r) 
                        + (1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop))));
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__cci_rd_req_wait = 0U;
        vlSelf->__PVT__cci_rd_req_valid = 0U;
    } else {
        if (((0U == (IData)(vlSelf->__PVT__state)) 
             & (2U == (IData)(vlSelf->__PVT__cmd_type)))) {
            vlSelf->__PVT__cci_rd_req_wait = 0U;
            vlSelf->__PVT__cci_rd_req_valid = (0ULL 
                                               != (0x3ffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->__PVT__cmd_args[5U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__cmd_args[4U])))));
        }
        if (((IData)(vlSelf->__PVT__cci_rd_req_fire) 
             & (7U == (7U & (IData)(vlSelf->__PVT__cci_rd_req_ctr))))) {
            vlSelf->__PVT__cci_rd_req_wait = 1U;
        }
        if (((IData)(vlSelf->__PVT__cci_rd_rsp_fire) 
             & (7U == (IData)(vlSelf->__PVT__cci_rd_rsp_ctr)))) {
            vlSelf->__PVT__cci_rd_req_wait = 0U;
        }
        vlSelf->__PVT__cci_rd_req_valid = (((1U == (IData)(vlSelf->__PVT__state)) 
                                            & ((0x3ffffffffffULL 
                                                & (vlSelf->__PVT__cci_rd_req_ctr 
                                                   + 
                                                   ((IData)(vlSelf->__PVT__cci_rd_req_fire)
                                                     ? 1ULL
                                                     : 0ULL))) 
                                               != (0x3ffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->__PVT__cmd_args[5U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__PVT__cmd_args[4U])))))) 
                                           & (~ (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                                 >> 0x1dU)));
    }
    if (vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r) {
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r = 1U;
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r = 0U;
        __Vdly__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
                              [1U] & (~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                                         >> 1U)))) 
                          | (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:94: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk6[1].rd_rsp_queue.genblk6: runtime error: incrementing full queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 94, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                               >> 1U) & (~ vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
                                         [1U]))) | 
                          (~ (IData)(vlSelf->avs_adapter__DOT____Vcellout__genblk6__BRA__1__KET____DOT__rd_rsp_queue__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:95: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk6[1].rd_rsp_queue.genblk6: runtime error: decrementing empty queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 95, "");
                }
            }
        }
        if (vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
            [1U]) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                          >> 1U)))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r = 0U;
                if ((0x1fU == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r))) {
                    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop))) {
            vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r = 1U;
            }
        }
        __Vdly__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r 
            = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_n;
    }
    if (vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r) {
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r = 1U;
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r = 0U;
        __Vdly__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ (vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
                              [0U] & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop)))) 
                          | (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:94: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk6[0].rd_rsp_queue.genblk6: runtime error: incrementing full queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 94, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop) 
                              & (~ vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
                                 [0U]))) | (~ (IData)(vlSelf->avs_adapter__DOT____Vcellout__genblk6__BRA__0__KET____DOT__rd_rsp_queue__empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:95: Assertion failed in %Nvortex_afu_shim.afu.avs_adapter.genblk6[0].rd_rsp_queue.genblk6: runtime error: decrementing empty queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 95, "");
                }
            }
        }
        if (vlSelf->__Vcellinp__avs_adapter__avs_readdatavalid
            [0U]) {
            if ((1U & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop)))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r = 0U;
                if ((0x1fU == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r))) {
                    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_pop))) {
            vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r))) {
                vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r = 1U;
            }
        }
        __Vdly__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r 
            = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_n;
    }
    if (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h31ac725e__0[0U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]);
        __Vtemp_h31ac725e__0[1U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[1U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]);
        __Vtemp_h31ac725e__0[2U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[2U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U]);
        __Vtemp_h31ac725e__0[3U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[3U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U]);
        __Vtemp_h31ac725e__0[4U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[4U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U]);
        __Vtemp_h31ac725e__0[5U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[5U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[5U]);
        __Vtemp_h31ac725e__0[6U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[6U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[6U]);
        __Vtemp_h31ac725e__0[7U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[7U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[7U]);
        __Vtemp_h31ac725e__0[8U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[8U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[8U]);
        __Vtemp_h31ac725e__0[9U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[9U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[9U]);
        __Vtemp_h31ac725e__0[0xaU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xaU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xaU]);
        __Vtemp_h31ac725e__0[0xbU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xbU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xbU]);
        __Vtemp_h31ac725e__0[0xcU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xcU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xcU]);
        __Vtemp_h31ac725e__0[0xdU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xdU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xdU]);
        __Vtemp_h31ac725e__0[0xeU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xeU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xeU]);
        __Vtemp_h31ac725e__0[0xfU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xfU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xfU]);
        __Vtemp_h31ac725e__0[0x10U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x10U] 
                                       & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x10U]);
        __Vtemp_h31ac725e__0[0x11U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x11U] 
                                       & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x11U]);
        __Vtemp_h31ac725e__0[0x12U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x12U] 
                                       & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U]);
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U] 
            = ((0x3ffffffU & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U]) 
               | ((Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0U] 
                   & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]) 
                  << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x13U] 
            = ((__Vtemp_h31ac725e__0[0U] >> 6U) | (
                                                   __Vtemp_h31ac725e__0[1U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x14U] 
            = ((__Vtemp_h31ac725e__0[1U] >> 6U) | (
                                                   __Vtemp_h31ac725e__0[2U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x15U] 
            = ((__Vtemp_h31ac725e__0[2U] >> 6U) | (
                                                   __Vtemp_h31ac725e__0[3U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x16U] 
            = ((__Vtemp_h31ac725e__0[3U] >> 6U) | (
                                                   __Vtemp_h31ac725e__0[4U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x17U] 
            = ((__Vtemp_h31ac725e__0[4U] >> 6U) | (
                                                   __Vtemp_h31ac725e__0[5U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x18U] 
            = ((__Vtemp_h31ac725e__0[5U] >> 6U) | (
                                                   __Vtemp_h31ac725e__0[6U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x19U] 
            = ((__Vtemp_h31ac725e__0[6U] >> 6U) | (
                                                   __Vtemp_h31ac725e__0[7U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1aU] 
            = ((__Vtemp_h31ac725e__0[7U] >> 6U) | (
                                                   __Vtemp_h31ac725e__0[8U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1bU] 
            = ((__Vtemp_h31ac725e__0[8U] >> 6U) | (
                                                   __Vtemp_h31ac725e__0[9U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1cU] 
            = ((__Vtemp_h31ac725e__0[9U] >> 6U) | (
                                                   __Vtemp_h31ac725e__0[0xaU] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1dU] 
            = ((__Vtemp_h31ac725e__0[0xaU] >> 6U) | 
               (__Vtemp_h31ac725e__0[0xbU] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1eU] 
            = ((__Vtemp_h31ac725e__0[0xbU] >> 6U) | 
               (__Vtemp_h31ac725e__0[0xcU] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1fU] 
            = ((__Vtemp_h31ac725e__0[0xcU] >> 6U) | 
               (__Vtemp_h31ac725e__0[0xdU] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x20U] 
            = ((__Vtemp_h31ac725e__0[0xdU] >> 6U) | 
               (__Vtemp_h31ac725e__0[0xeU] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x21U] 
            = ((__Vtemp_h31ac725e__0[0xeU] >> 6U) | 
               (__Vtemp_h31ac725e__0[0xfU] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x22U] 
            = ((__Vtemp_h31ac725e__0[0xfU] >> 6U) | 
               (__Vtemp_h31ac725e__0[0x10U] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x23U] 
            = ((__Vtemp_h31ac725e__0[0x10U] >> 6U) 
               | (__Vtemp_h31ac725e__0[0x11U] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x24U] 
            = ((__Vtemp_h31ac725e__0[0x11U] >> 6U) 
               | (__Vtemp_h31ac725e__0[0x12U] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x25U] 
            = (0xfffffU & (__Vtemp_h31ac725e__0[0x12U] 
                           >> 6U));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[2U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[1U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[3U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[2U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[4U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[3U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[5U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[4U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[6U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[5U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[5U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[7U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[6U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[6U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[8U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[7U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[7U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[9U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[8U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[8U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xaU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[9U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[9U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xbU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xaU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xaU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xcU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xbU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xbU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xdU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xcU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xcU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xeU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xdU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xdU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xfU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xeU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xeU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x10U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xfU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xfU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x11U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x10U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x10U] 
            = (((IData)((((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U])) 
                          << 0x3bU) | (((QData)((IData)(
                                                        vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x13U])) 
                                        << 0x1bU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U])) 
                                        >> 5U)))) << 0x19U) 
               | (0x1ffffffU & ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U] 
                                 << 0x14U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x11U] 
                                              >> 0xcU))));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x11U] 
            = (((IData)((((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U])) 
                          << 0x3bU) | (((QData)((IData)(
                                                        vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x13U])) 
                                        << 0x1bU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U])) 
                                        >> 5U)))) >> 7U) 
               | ((IData)(((((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U])) 
                             << 0x3bU) | (((QData)((IData)(
                                                           vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x13U])) 
                                           << 0x1bU) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U])) 
                                             >> 5U))) 
                           >> 0x20U)) << 0x19U));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U] 
            = ((0xfc000000U & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U]) 
               | ((0x2000000U & (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U] 
                                 << 0x14U)) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U])) 
                                                          << 0x3bU) 
                                                         | (((QData)((IData)(
                                                                             vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x13U])) 
                                                             << 0x1bU) 
                                                            | ((QData)((IData)(
                                                                               vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U])) 
                                                               >> 5U))) 
                                                        >> 0x20U)) 
                                               >> 7U)));
    }
    if (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) {
        __Vtemp_h03bd43c8__0[0U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]);
        __Vtemp_h03bd43c8__0[1U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[1U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U]);
        __Vtemp_h03bd43c8__0[2U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[2U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U]);
        __Vtemp_h03bd43c8__0[3U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[3U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U]);
        __Vtemp_h03bd43c8__0[4U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[4U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U]);
        __Vtemp_h03bd43c8__0[5U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[5U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[5U]);
        __Vtemp_h03bd43c8__0[6U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[6U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[6U]);
        __Vtemp_h03bd43c8__0[7U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[7U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[7U]);
        __Vtemp_h03bd43c8__0[8U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[8U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[8U]);
        __Vtemp_h03bd43c8__0[9U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[9U] 
                                    & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[9U]);
        __Vtemp_h03bd43c8__0[0xaU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xaU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xaU]);
        __Vtemp_h03bd43c8__0[0xbU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xbU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xbU]);
        __Vtemp_h03bd43c8__0[0xcU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xcU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xcU]);
        __Vtemp_h03bd43c8__0[0xdU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xdU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xdU]);
        __Vtemp_h03bd43c8__0[0xeU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xeU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xeU]);
        __Vtemp_h03bd43c8__0[0xfU] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xfU] 
                                      & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xfU]);
        __Vtemp_h03bd43c8__0[0x10U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x10U] 
                                       & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x10U]);
        __Vtemp_h03bd43c8__0[0x11U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x11U] 
                                       & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x11U]);
        __Vtemp_h03bd43c8__0[0x12U] = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x12U] 
                                       & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U]);
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U] 
            = ((0x3ffffffU & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U]) 
               | ((Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0U] 
                   & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U]) 
                  << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x13U] 
            = ((__Vtemp_h03bd43c8__0[0U] >> 6U) | (
                                                   __Vtemp_h03bd43c8__0[1U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x14U] 
            = ((__Vtemp_h03bd43c8__0[1U] >> 6U) | (
                                                   __Vtemp_h03bd43c8__0[2U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x15U] 
            = ((__Vtemp_h03bd43c8__0[2U] >> 6U) | (
                                                   __Vtemp_h03bd43c8__0[3U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x16U] 
            = ((__Vtemp_h03bd43c8__0[3U] >> 6U) | (
                                                   __Vtemp_h03bd43c8__0[4U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x17U] 
            = ((__Vtemp_h03bd43c8__0[4U] >> 6U) | (
                                                   __Vtemp_h03bd43c8__0[5U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x18U] 
            = ((__Vtemp_h03bd43c8__0[5U] >> 6U) | (
                                                   __Vtemp_h03bd43c8__0[6U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x19U] 
            = ((__Vtemp_h03bd43c8__0[6U] >> 6U) | (
                                                   __Vtemp_h03bd43c8__0[7U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1aU] 
            = ((__Vtemp_h03bd43c8__0[7U] >> 6U) | (
                                                   __Vtemp_h03bd43c8__0[8U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1bU] 
            = ((__Vtemp_h03bd43c8__0[8U] >> 6U) | (
                                                   __Vtemp_h03bd43c8__0[9U] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1cU] 
            = ((__Vtemp_h03bd43c8__0[9U] >> 6U) | (
                                                   __Vtemp_h03bd43c8__0[0xaU] 
                                                   << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1dU] 
            = ((__Vtemp_h03bd43c8__0[0xaU] >> 6U) | 
               (__Vtemp_h03bd43c8__0[0xbU] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1eU] 
            = ((__Vtemp_h03bd43c8__0[0xbU] >> 6U) | 
               (__Vtemp_h03bd43c8__0[0xcU] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x1fU] 
            = ((__Vtemp_h03bd43c8__0[0xcU] >> 6U) | 
               (__Vtemp_h03bd43c8__0[0xdU] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x20U] 
            = ((__Vtemp_h03bd43c8__0[0xdU] >> 6U) | 
               (__Vtemp_h03bd43c8__0[0xeU] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x21U] 
            = ((__Vtemp_h03bd43c8__0[0xeU] >> 6U) | 
               (__Vtemp_h03bd43c8__0[0xfU] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x22U] 
            = ((__Vtemp_h03bd43c8__0[0xfU] >> 6U) | 
               (__Vtemp_h03bd43c8__0[0x10U] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x23U] 
            = ((__Vtemp_h03bd43c8__0[0x10U] >> 6U) 
               | (__Vtemp_h03bd43c8__0[0x11U] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x24U] 
            = ((__Vtemp_h03bd43c8__0[0x11U] >> 6U) 
               | (__Vtemp_h03bd43c8__0[0x12U] << 0x1aU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x25U] 
            = (0xfffffU & (__Vtemp_h03bd43c8__0[0x12U] 
                           >> 6U));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[2U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[1U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[1U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[3U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[2U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[2U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[4U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[3U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[3U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[5U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[4U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[4U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[6U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[5U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[5U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[7U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[6U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[6U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[8U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[7U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[7U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[9U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[8U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[8U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xaU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[9U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[9U] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xbU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xaU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xaU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xcU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xbU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xbU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xdU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xcU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xcU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xeU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xdU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xdU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xfU] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xeU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xeU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x10U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xfU] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0xfU] 
            = ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x11U] 
                << 0x15U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x10U] 
                             >> 0xbU));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x10U] 
            = (((IData)((((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U])) 
                          << 0x3bU) | (((QData)((IData)(
                                                        vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x13U])) 
                                        << 0x1bU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U])) 
                                        >> 5U)))) << 0x19U) 
               | (0x1ffffffU & ((vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U] 
                                 << 0x14U) | (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x11U] 
                                              >> 0xcU))));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x11U] 
            = (((IData)((((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U])) 
                          << 0x3bU) | (((QData)((IData)(
                                                        vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x13U])) 
                                        << 0x1bU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U])) 
                                        >> 5U)))) >> 7U) 
               | ((IData)(((((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U])) 
                             << 0x3bU) | (((QData)((IData)(
                                                           vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x13U])) 
                                           << 0x1bU) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U])) 
                                             >> 5U))) 
                           >> 0x20U)) << 0x19U));
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U] 
            = ((0xfc000000U & vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[0x12U]) 
               | ((0x2000000U & (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U] 
                                 << 0x14U)) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U])) 
                                                          << 0x3bU) 
                                                         | (((QData)((IData)(
                                                                             vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x13U])) 
                                                             << 0x1bU) 
                                                            | ((QData)((IData)(
                                                                               vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U])) 
                                                               >> 5U))) 
                                                        >> 0x20U)) 
                                               >> 7U)));
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & Vvortex_afu_shim__ConstPool__TABLE_h4893871c_0
         [__Vtableidx3])) {
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = Vvortex_afu_shim__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx3];
    }
    if ((2U & Vvortex_afu_shim__ConstPool__TABLE_h4893871c_0
         [__Vtableidx3])) {
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = Vvortex_afu_shim__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx3];
    }
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = Vvortex_afu_shim__ConstPool__TABLE_h519abc85_0
        [__Vtableidx3];
    __Vtableidx2 = (((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r) 
                     << 3U) | (((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop) 
                                << 2U) | (((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push) 
                                           << 1U) | (IData)(vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r))));
    if ((1U & Vvortex_afu_shim__ConstPool__TABLE_h4893871c_0
         [__Vtableidx2])) {
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r 
            = Vvortex_afu_shim__ConstPool__TABLE_h9e1d19ab_0
            [__Vtableidx2];
    }
    if ((2U & Vvortex_afu_shim__ConstPool__TABLE_h4893871c_0
         [__Vtableidx2])) {
        vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r 
            = Vvortex_afu_shim__ConstPool__TABLE_h233ace7c_0
            [__Vtableidx2];
    }
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r 
        = Vvortex_afu_shim__ConstPool__TABLE_h519abc85_0
        [__Vtableidx2];
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r 
        = __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r;
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r 
        = __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r;
    vlSelf->__PVT__cci_rd_pending_size__DOT__genblk3__DOT__used_r 
        = __Vdly__cci_rd_pending_size__DOT__genblk3__DOT__used_r;
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r 
        = __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r;
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r 
        = __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r;
    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_r 
        = __Vdly__cci_rd_req_queue__DOT__genblk6__DOT__used_r;
    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r 
        = __Vdly__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r;
    vlSelf->__PVT__cci_rd_req_addr = __Vdly__cci_rd_req_addr;
    vlSelf->__PVT__cci_rd_rsp_ctr = __Vdly__cci_rd_rsp_ctr;
    vlSelf->__PVT__cci_mem_rd_req_addr = __Vdly__cci_mem_rd_req_addr;
    vlSelf->__PVT__cci_rd_req_ctr = __Vdly__cci_rd_req_ctr;
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = __Vdly__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    if (__Vdlyvset__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0) {
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][1U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][2U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][3U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][4U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][5U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][6U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][7U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][8U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][9U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xaU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xaU];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xbU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xbU];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xcU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xcU];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xdU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xdU];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xeU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xeU];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xfU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xfU];
    }
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = __Vdly__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    if (__Vdlyvset__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0) {
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][1U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][2U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][3U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][4U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][5U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][6U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][7U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][8U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][9U] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xaU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xaU];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xbU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xbU];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xcU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xcU];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xdU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xdU];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xeU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xeU];
        vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xfU] 
            = __Vdlyvval__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xfU];
    }
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = __Vdly__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    if (__Vdlyvset__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0) {
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0] 
            = __Vdlyvval__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = __Vdly__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    if (__Vdlyvset__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0) {
        vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0] 
            = __Vdlyvval__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelf->__PVT__cci_mem_wr_req_addr_base = __Vdly__cci_mem_wr_req_addr_base;
    vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = __Vdly__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    if (__Vdlyvset__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0) {
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][1U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[1U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][2U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[2U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][3U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[3U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][4U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[4U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][5U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[5U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][6U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[6U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][7U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[7U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][8U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[8U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][9U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[9U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xaU] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xaU];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xbU] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xbU];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xcU] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xcU];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xdU] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xdU];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xeU] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xeU];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0xfU] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0xfU];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0x10U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0x10U];
        vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0][0x11U] 
            = __Vdlyvval__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0[0x11U];
    }
    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r 
        = __Vdly__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
    if (__Vdlyvset__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0) {
        vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram[__Vdlyvdim0__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0] 
            = __Vdlyvval__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram__v0;
    }
    vlSelf->__PVT__cci_mem_rd_req_ctr = __Vdly__cci_mem_rd_req_ctr;
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r 
        = __Vdly__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r;
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r 
        = __Vdly__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r;
    if (vlSymsp->TOP.reset) {
        __Vdly__state = 0U;
        __Vdly__vx_busy_wait = 0U;
        __Vdly__vx_running = 0U;
    } else if ((0U == (IData)(vlSelf->__PVT__state))) {
        if ((1U == (IData)(vlSelf->__PVT__cmd_type))) {
            __Vdly__state = 2U;
        } else if ((2U == (IData)(vlSelf->__PVT__cmd_type))) {
            __Vdly__state = 1U;
        } else if ((4U == (IData)(vlSelf->__PVT__cmd_type))) {
            __Vdly__state = 4U;
        } else if ((3U == (IData)(vlSelf->__PVT__cmd_type))) {
            __Vdly__state = 3U;
            __Vdly__vx_running = 0U;
        } else {
            __Vdly__state = vlSelf->__PVT__state;
        }
    } else if ((2U == (IData)(vlSelf->__PVT__state))) {
        if (((IData)(vlSelf->__PVT__cci_wr_req_done) 
             & (IData)(vlSelf->__PVT__cci_wr_pending_size__DOT__empty_r))) {
            __Vdly__state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT__cmd_mem_wr_done) {
            __Vdly__state = 0U;
        }
    } else if ((4U == (IData)(vlSelf->__PVT__state))) {
        __Vdly__state = 0U;
    } else if ((3U == (IData)(vlSelf->__PVT__state))) {
        if (vlSelf->__PVT__vx_running) {
            if (vlSelf->__PVT__vx_busy_wait) {
                if (vlSymsp->TOP__vortex_afu_shim__afu__vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__schedule__DOT_____05Fbusy) {
                    __Vdly__vx_busy_wait = 0U;
                }
            } else if ((1U & (~ (IData)(vlSymsp->TOP__vortex_afu_shim__afu__vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__genblk6__BRA__0__KET____DOT__core__DOT__schedule__DOT_____05Fbusy)))) {
                __Vdly__state = 0U;
            }
        } else if ((7U == (IData)(vlSelf->__PVT__vx_reset_ctr))) {
            __Vdly__vx_running = 1U;
            __Vdly__vx_busy_wait = 1U;
        }
    }
    vlSelf->__PVT__vx_busy_wait = __Vdly__vx_busy_wait;
    vlSelf->__PVT__vx_reset_ctr = __Vdly__vx_reset_ctr;
    vlSelf->__PVT__vx_running = __Vdly__vx_running;
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__empty 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r;
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__full 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r;
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__empty 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r;
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__full 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r;
    vlSelf->__PVT__cci_rd_pending_size__DOT__empty 
        = vlSelf->__PVT__cci_rd_pending_size__DOT__empty_r;
    vlSelf->__PVT__cci_pending_reads_full = vlSelf->__PVT__cci_rd_pending_size__DOT__full_r;
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(1U) + (0x3fU & 
                                            (((IData)(0x20aU) 
                                              * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     (0x3fU & (((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                               >> 5U))] >> (0x1fU & 
                                            ((IData)(0x20aU) 
                                             * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0U]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[1U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(2U) + (0x3fU & 
                                            (((IData)(0x20aU) 
                                              * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(1U) + (0x3fU & (((IData)(0x20aU) 
                                               * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[1U]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[2U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(3U) + (0x3fU & 
                                            (((IData)(0x20aU) 
                                              * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(2U) + (0x3fU & (((IData)(0x20aU) 
                                               * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[2U]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[3U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(4U) + (0x3fU & 
                                            (((IData)(0x20aU) 
                                              * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(3U) + (0x3fU & (((IData)(0x20aU) 
                                               * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[3U]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[4U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(5U) + (0x3fU & 
                                            (((IData)(0x20aU) 
                                              * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(4U) + (0x3fU & (((IData)(0x20aU) 
                                               * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[4U]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[5U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(6U) + (0x3fU & 
                                            (((IData)(0x20aU) 
                                              * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(5U) + (0x3fU & (((IData)(0x20aU) 
                                               * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[5U]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[6U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(7U) + (0x3fU & 
                                            (((IData)(0x20aU) 
                                              * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(6U) + (0x3fU & (((IData)(0x20aU) 
                                               * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[6U]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[7U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(8U) + (0x3fU & 
                                            (((IData)(0x20aU) 
                                              * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(7U) + (0x3fU & (((IData)(0x20aU) 
                                               * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[7U]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[8U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(9U) + (0x3fU & 
                                            (((IData)(0x20aU) 
                                              * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(8U) + (0x3fU & (((IData)(0x20aU) 
                                               * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[8U]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[9U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xaU) + (0x3fU 
                                              & (((IData)(0x20aU) 
                                                  * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(9U) + (0x3fU & (((IData)(0x20aU) 
                                               * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[9U]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xaU] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xbU) + (0x3fU 
                                              & (((IData)(0x20aU) 
                                                  * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xaU) + (0x3fU & (((IData)(0x20aU) 
                                                 * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xaU]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xbU] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xcU) + (0x3fU 
                                              & (((IData)(0x20aU) 
                                                  * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xbU) + (0x3fU & (((IData)(0x20aU) 
                                                 * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xbU]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xcU] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xdU) + (0x3fU 
                                              & (((IData)(0x20aU) 
                                                  * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xcU) + (0x3fU & (((IData)(0x20aU) 
                                                 * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xcU]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xdU] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xeU) + (0x3fU 
                                              & (((IData)(0x20aU) 
                                                  * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xdU) + (0x3fU & (((IData)(0x20aU) 
                                                 * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xdU]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xeU] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xfU) + (0x3fU 
                                              & (((IData)(0x20aU) 
                                                  * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xeU) + (0x3fU & (((IData)(0x20aU) 
                                                 * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xeU]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0xfU] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0x10U) + (0x3fU 
                                               & (((IData)(0x20aU) 
                                                   * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xfU) + (0x3fU & (((IData)(0x20aU) 
                                                 * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0xfU]));
    vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h00a54ff1_0[0x10U] 
           & ((0x413U >= (0x7ffU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x20aU) 
                                    * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0x11U) + (0x3fU 
                                               & (((IData)(0x20aU) 
                                                   * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x20aU) 
                                                     * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0x10U) + (0x3fU & (((IData)(0x20aU) 
                                                  * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                     >> (0x1fU & ((IData)(0x20aU) * (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0[0x10U]));
    vlSelf->__PVT__mem_arb__DOT__rsp_ready_out = ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_arb__DOT__rsp_ready_out)) 
                                                  | (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__empty 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__empty_r;
    vlSelf->avs_adapter__DOT____Vcellout__genblk3__BRA__1__KET____DOT__pending_size__full 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__full_r;
    vlSelf->__PVT__avs_adapter__DOT__req_queue_going_full 
        = ((1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_going_full)) 
           | ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__full_r) 
              << 1U));
    vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__empty 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__empty_r;
    vlSelf->avs_adapter__DOT____Vcellout__genblk3__BRA__0__KET____DOT__pending_size__full 
        = vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__full_r;
    vlSelf->__PVT__avs_adapter__DOT__req_queue_going_full 
        = ((2U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_going_full)) 
           | (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__full_r));
    vlSelf->__PVT__cci_rd_req_queue__DOT__full = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__full_r;
    vlSelf->__PVT__cci_rdq_empty = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__empty_r;
    vlSelf->__PVT_____05Fcci_rdq_reset__DOT__genblk1__DOT__reset_r 
        = vlSymsp->TOP.reset;
    vlSelf->__PVT__af2cp_sTxPort[0U] = vlSelf->__PVT__mmio_tx[0U];
    vlSelf->__PVT__af2cp_sTxPort[1U] = vlSelf->__PVT__mmio_tx[1U];
    vlSelf->__PVT__af2cp_sTxPort[2U] = ((0xfffffc00U 
                                         & vlSelf->__PVT__af2cp_sTxPort[2U]) 
                                        | vlSelf->__PVT__mmio_tx[2U]);
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__empty_r = 1U;
        vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__full_r = 0U;
        __Vdly__cout_queue__DOT__genblk6__DOT__used_r = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__cout_q_push) 
                              & (~ (IData)(vlSelf->__PVT__cout_q_pop)))) 
                          | (~ (IData)(vlSelf->__PVT__cout_q_full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:94: Assertion failed in %Nvortex_afu_shim.afu.cout_queue.genblk6: runtime error: incrementing full queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 94, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__cout_q_pop) 
                              & (~ (IData)(vlSelf->__PVT__cout_q_push)))) 
                          | (~ (IData)(vlSelf->__PVT__cout_q_empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_fifo_queue.sv:95: Assertion failed in %Nvortex_afu_shim.afu.cout_queue.genblk6: runtime error: decrementing empty queue\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_fifo_queue.sv", 95, "");
                }
            }
        }
        if (vlSelf->__PVT__cout_q_push) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cout_q_pop)))) {
                vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__empty_r = 0U;
                if ((0x3fU == (IData)(vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__used_r))) {
                    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__full_r = 1U;
                }
            }
        } else if (vlSelf->__PVT__cout_q_pop) {
            vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__used_r))) {
                vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__empty_r = 1U;
            }
        }
        __Vdly__cout_queue__DOT__genblk6__DOT__used_r 
            = vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__used_n;
    }
    vlSelf->__PVT__cci_rd_req_fire = ((IData)(vlSelf->__PVT__cci_rd_req_valid) 
                                      & (~ ((IData)(vlSelf->__PVT__cci_rd_req_wait) 
                                            | (IData)(vlSelf->__PVT__cci_rd_pending_size__DOT__full_r))));
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[1U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][1U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[2U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][2U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[3U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][3U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[4U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][4U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[5U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][5U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[6U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][6U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[7U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][7U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[8U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][8U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[9U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][9U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0xaU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xaU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0xbU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xbU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0xcU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xcU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0xdU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xdU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0xeU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xeU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0xfU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xfU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x10U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x11U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][1U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x12U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][2U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x13U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][3U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x14U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][4U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x15U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][5U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x16U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][6U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x17U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][7U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x18U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][8U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x19U] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][9U];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x1aU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xaU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x1bU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xbU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x1cU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xcU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x1dU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xdU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x1eU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xeU];
    __PVT__avs_adapter__DOT__rsp_queue_data_out[0x1fU] 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xfU];
    __PVT__avs_adapter__DOT__req_queue_tag_out[0U] 
        = (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
                  [vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r]);
    __PVT__avs_adapter__DOT__req_queue_tag_out[1U] 
        = (((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
                    [vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r]) 
            << 0xbU) | (IData)((vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
                                [vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r] 
                                >> 0x20U)));
    __PVT__avs_adapter__DOT__req_queue_tag_out[2U] 
        = (((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
                    [vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r]) 
            >> 0x15U) | ((IData)((vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
                                  [vlSelf->__PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r] 
                                  >> 0x20U)) << 0xbU));
    __PVT__cci_rdq_dout[0U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0U];
    __PVT__cci_rdq_dout[1U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][1U];
    __PVT__cci_rdq_dout[2U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][2U];
    __PVT__cci_rdq_dout[3U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][3U];
    __PVT__cci_rdq_dout[4U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][4U];
    __PVT__cci_rdq_dout[5U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][5U];
    __PVT__cci_rdq_dout[6U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][6U];
    __PVT__cci_rdq_dout[7U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][7U];
    __PVT__cci_rdq_dout[8U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][8U];
    __PVT__cci_rdq_dout[9U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][9U];
    __PVT__cci_rdq_dout[0xaU] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xaU];
    __PVT__cci_rdq_dout[0xbU] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xbU];
    __PVT__cci_rdq_dout[0xcU] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xcU];
    __PVT__cci_rdq_dout[0xdU] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xdU];
    __PVT__cci_rdq_dout[0xeU] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xeU];
    __PVT__cci_rdq_dout[0xfU] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0xfU];
    __PVT__cci_rdq_dout[0x10U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0x10U];
    __PVT__cci_rdq_dout[0x11U] = vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram
        [vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r][0x11U];
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__full 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r;
    vlSelf->avs_adapter__DOT____Vcellout__genblk6__BRA__1__KET____DOT__rd_rsp_queue__empty 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r;
    vlSelf->__PVT__avs_adapter__DOT__rsp_queue_empty 
        = ((1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_queue_empty)) 
           | ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r) 
              << 1U));
    vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__full 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r;
    vlSelf->avs_adapter__DOT____Vcellout__genblk6__BRA__0__KET____DOT__rd_rsp_queue__empty 
        = vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r;
    vlSelf->__PVT__avs_adapter__DOT__rsp_queue_empty 
        = ((2U & (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_queue_empty)) 
           | (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(1U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     (0x3fU & (((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                               >> 5U))] >> (0x1fU & 
                                            ((IData)(0x25aU) 
                                             * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[1U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(2U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(1U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[1U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[2U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(3U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(2U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[2U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[3U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(4U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(3U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[3U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[4U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(5U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(4U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[4U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[5U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(6U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(5U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[5U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[6U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(7U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(6U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[6U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[7U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(8U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(7U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[7U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[8U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(9U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(8U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[8U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[9U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xaU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(9U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[9U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xaU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xbU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xaU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xaU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xbU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xcU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xbU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xbU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xcU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xdU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xcU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xcU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xdU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xeU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xdU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xdU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xeU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xfU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xeU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xeU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xfU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0x10U) + (0x3fU 
                                               & (((IData)(0x25aU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xfU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xfU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x10U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0x11U) + (0x3fU 
                                               & (((IData)(0x25aU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0x10U) + (0x3fU & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x10U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0x11U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x11U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0x12U) + (0x3fU 
                                               & (((IData)(0x25aU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0x11U) + (0x3fU & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x11U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0x12U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x12U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0x13U) + (0x3fU 
                                               & (((IData)(0x25aU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0x12U) + (0x3fU & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x12U]));
    vlSelf->__PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r 
        = vlSymsp->TOP.reset;
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(1U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     (0x3fU & (((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                               >> 5U))] >> (0x1fU & 
                                            ((IData)(0x25aU) 
                                             * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[1U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(2U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(1U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[1U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[2U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(3U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(2U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[2U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[3U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(4U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(3U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[3U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[4U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(5U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(4U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[4U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[5U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(6U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(5U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[5U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[6U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(7U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(6U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[6U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[7U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(8U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(7U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[7U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[8U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(9U) + (0x3fU & 
                                            (((IData)(0x25aU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(8U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[8U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[9U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xaU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(9U) + (0x3fU & (((IData)(0x25aU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[9U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xaU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xbU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xaU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xaU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xbU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xcU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xbU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xbU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xcU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xdU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xcU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xcU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xdU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xeU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xdU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xdU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xeU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0xfU) + (0x3fU 
                                              & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xeU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xeU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0xfU] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0x10U) + (0x3fU 
                                               & (((IData)(0x25aU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0xfU) + (0x3fU & (((IData)(0x25aU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0xfU]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x10U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0x11U) + (0x3fU 
                                               & (((IData)(0x25aU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0x10U) + (0x3fU & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x10U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0x11U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x11U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0x12U) + (0x3fU 
                                               & (((IData)(0x25aU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0x11U) + (0x3fU & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x11U]));
    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0x12U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h7f110ceb_0[0x12U] 
           & ((0x4b3U >= (0x7ffU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
               ? (((0U == (0x1fU & ((IData)(0x25aU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r))))
                    ? 0U : (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                            ((IData)(0x13U) + (0x3fU 
                                               & (((IData)(0x25aU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x25aU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))) 
                  | (vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg[
                     ((IData)(0x12U) + (0x3fU & (((IData)(0x25aU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)) 
                                                 >> 5U)))] 
                     >> (0x1fU & ((IData)(0x25aU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r)))))
               : vlSelf->avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0[0x12U]));
    if (vlSymsp->TOP.reset) {
        __Vdly__cci_wr_pending_size__DOT__genblk3__DOT__used_r = 0U;
        vlSelf->__PVT__cci_wr_pending_size__DOT__empty_r = 1U;
        vlSelf->__PVT__cci_wr_pending_size__DOT__full_r = 0U;
    } else {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__cci_mem_rd_rsp_fire) 
                              & (~ (IData)(vlSelf->__PVT__cci_wr_rsp_fire)))) 
                          | (~ (IData)(vlSelf->__PVT__cci_pending_writes_full)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_pending_size.sv:69: Assertion failed in %Nvortex_afu_shim.afu.cci_wr_pending_size.genblk3: runtime error: incrementing full counter\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_pending_size.sv", 69, "");
                }
            }
        }
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((1U & (~ ((~ ((IData)(vlSelf->__PVT__cci_wr_rsp_fire) 
                              & (~ (IData)(vlSelf->__PVT__cci_mem_rd_rsp_fire)))) 
                          | (~ (IData)(vlSelf->__PVT__cci_pending_writes_empty)))))) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: VX_pending_size.sv:70: Assertion failed in %Nvortex_afu_shim.afu.cci_wr_pending_size.genblk3: runtime error: decrementing empty counter\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/libs/VX_pending_size.sv", 70, "");
                }
            }
        }
        if (vlSelf->__PVT__cci_mem_rd_rsp_fire) {
            if ((1U & (~ (IData)(vlSelf->__PVT__cci_wr_rsp_fire)))) {
                vlSelf->__PVT__cci_wr_pending_size__DOT__empty_r = 0U;
                if ((0xffU == (IData)(vlSelf->__PVT__cci_wr_pending_size__DOT__genblk3__DOT__used_r))) {
                    vlSelf->__PVT__cci_wr_pending_size__DOT__full_r = 1U;
                }
            }
        } else if (vlSelf->__PVT__cci_wr_rsp_fire) {
            vlSelf->__PVT__cci_wr_pending_size__DOT__full_r = 0U;
            if ((1U == (IData)(vlSelf->__PVT__cci_wr_pending_size__DOT__genblk3__DOT__used_r))) {
                vlSelf->__PVT__cci_wr_pending_size__DOT__empty_r = 1U;
            }
        }
        __Vdly__cci_wr_pending_size__DOT__genblk3__DOT__used_r 
            = (0xffU & ((IData)(vlSelf->__PVT__cci_wr_pending_size__DOT__genblk3__DOT__used_r) 
                        + VL_EXTENDS_II(8,2, (3U & 
                                              ((IData)(vlSelf->__PVT__cci_mem_rd_rsp_fire) 
                                               - (IData)(vlSelf->__PVT__cci_wr_rsp_fire))))));
    }
    if (((0U == (IData)(vlSelf->__PVT__state)) & (1U 
                                                  == (IData)(vlSelf->__PVT__cmd_type)))) {
        __Vdly__cci_wr_req_ctr = (0x3ffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->__PVT__cmd_args[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->__PVT__cmd_args[4U]))));
        vlSelf->__PVT__cci_wr_req_done = 0U;
    }
    if (vlSelf->__PVT__cci_wr_req_fire) {
        if (vlSymsp->_vm_contextp__->assertOn()) {
            if ((0ULL == vlSelf->__PVT__cci_wr_req_ctr)) {
                if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                    VL_WRITEF("[%0t] %%Error: vortex_afu.sv:886: Assertion failed in %Nvortex_afu_shim.afu: runtime error\n",
                              64,VL_TIME_UNITED_Q(1),
                              -12,vlSymsp->name());
                    VL_STOP_MT("../../hw/rtl/afu/opae/vortex_afu.sv", 886, "");
                }
            }
        }
        __Vdly__cci_wr_req_ctr = (0x3ffffffffffULL 
                                  & (vlSelf->__PVT__cci_wr_req_ctr 
                                     - 1ULL));
        if ((1ULL == vlSelf->__PVT__cci_wr_req_ctr)) {
            vlSelf->__PVT__cci_wr_req_done = 1U;
        }
    }
    if (((0U == (IData)(vlSelf->__PVT__state)) & (2U 
                                                  == (IData)(vlSelf->__PVT__cmd_type)))) {
        __Vdly__cci_mem_wr_req_ctr = 0ULL;
        vlSelf->__PVT__cmd_mem_wr_done = 0U;
    }
    if (vlSelf->__PVT__cci_mem_wr_req_fire) {
        __Vdly__cci_mem_wr_req_ctr = (0x3ffffffffffULL 
                                      & (1ULL + vlSelf->__PVT__cci_mem_wr_req_ctr));
        if ((vlSelf->__PVT__cci_mem_wr_req_ctr == (0x3ffffffffffULL 
                                                   & ((((QData)((IData)(
                                                                        vlSelf->__PVT__cmd_args[5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__PVT__cmd_args[4U]))) 
                                                      - 1ULL)))) {
            vlSelf->__PVT__cmd_mem_wr_done = 1U;
        }
    }
    vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop 
        = ((IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & ((IData)(vlSymsp->TOP__vortex_afu_shim__afu__vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__ready_out_r) 
              >> (1U & (vlSelf->vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out[0U] 
                        >> 1U))));
    vlSelf->__PVT__avs_adapter__DOT__bank_req_ready 
        = ((2U & (IData)(vlSelf->__PVT__avs_adapter__DOT__bank_req_ready)) 
           | ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r) 
              & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_going_full))));
    vlSelf->__PVT__avs_adapter__DOT__bank_req_ready 
        = ((1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__bank_req_ready)) 
           | (((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r) 
               & (~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_going_full) 
                     >> 1U))) << 1U));
    vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__used_r 
        = __Vdly__cout_queue__DOT__genblk6__DOT__used_r;
    VL_EXTEND_WI(75,1, __Vtemp_h1d8fd1dc__0, (IData)(vlSelf->__PVT__cci_rd_req_fire));
    vlSelf->__PVT__af2cp_sTxPort[0x14U] = ((0x7ffffffU 
                                            & vlSelf->__PVT__af2cp_sTxPort[0x14U]) 
                                           | (__Vtemp_h1d8fd1dc__0[0U] 
                                              << 0x1bU));
    vlSelf->__PVT__af2cp_sTxPort[0x15U] = ((__Vtemp_h1d8fd1dc__0[0U] 
                                            >> 5U) 
                                           | (__Vtemp_h1d8fd1dc__0[1U] 
                                              << 0x1bU));
    vlSelf->__PVT__af2cp_sTxPort[0x16U] = ((__Vtemp_h1d8fd1dc__0[1U] 
                                            >> 5U) 
                                           | (__Vtemp_h1d8fd1dc__0[2U] 
                                              << 0x1bU));
    vlSelf->__PVT__af2cp_sTxPort[0x17U] = (0x3fU & 
                                           (__Vtemp_h1d8fd1dc__0[2U] 
                                            >> 5U));
    vlSelf->__PVT__af2cp_sTxPort[0x14U] = ((0xfffffffU 
                                            & vlSelf->__PVT__af2cp_sTxPort[0x14U]) 
                                           | ((IData)(
                                                      ((vlSelf->__PVT__cci_rd_req_addr 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         (7U 
                                                                          & (IData)(vlSelf->__PVT__cci_rd_req_ctr)))))) 
                                              << 0x1cU));
    vlSelf->__PVT__af2cp_sTxPort[0x15U] = (((IData)(
                                                    ((vlSelf->__PVT__cci_rd_req_addr 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (7U 
                                                                        & (IData)(vlSelf->__PVT__cci_rd_req_ctr)))))) 
                                            >> 4U) 
                                           | ((IData)(
                                                      (((vlSelf->__PVT__cci_rd_req_addr 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (7U 
                                                                           & (IData)(vlSelf->__PVT__cci_rd_req_ctr))))) 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    vlSelf->__PVT__af2cp_sTxPort[0x16U] = ((0xffc00000U 
                                            & vlSelf->__PVT__af2cp_sTxPort[0x16U]) 
                                           | ((IData)(
                                                      (((vlSelf->__PVT__cci_rd_req_addr 
                                                         << 0x10U) 
                                                        | (QData)((IData)(
                                                                          (7U 
                                                                           & (IData)(vlSelf->__PVT__cci_rd_req_ctr))))) 
                                                       >> 0x20U)) 
                                              >> 4U));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0U] = (IData)(
                                                           (0x7ffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                __PVT__avs_adapter__DOT__req_queue_tag_out[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                __PVT__avs_adapter__DOT__req_queue_tag_out[0U])))));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[1U] = 
        ((__PVT__avs_adapter__DOT__rsp_queue_data_out[0U] 
          << 0xbU) | (IData)(((0x7ffffffffffULL & (
                                                   ((QData)((IData)(
                                                                    __PVT__avs_adapter__DOT__req_queue_tag_out[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     __PVT__avs_adapter__DOT__req_queue_tag_out[0U])))) 
                              >> 0x20U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[2U] = 
        ((__PVT__avs_adapter__DOT__rsp_queue_data_out[0U] 
          >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[1U] 
                       << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[3U] = 
        ((__PVT__avs_adapter__DOT__rsp_queue_data_out[1U] 
          >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[2U] 
                       << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[4U] = 
        ((__PVT__avs_adapter__DOT__rsp_queue_data_out[2U] 
          >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[3U] 
                       << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[5U] = 
        ((__PVT__avs_adapter__DOT__rsp_queue_data_out[3U] 
          >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[4U] 
                       << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[6U] = 
        ((__PVT__avs_adapter__DOT__rsp_queue_data_out[4U] 
          >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[5U] 
                       << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[7U] = 
        ((__PVT__avs_adapter__DOT__rsp_queue_data_out[5U] 
          >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[6U] 
                       << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[8U] = 
        ((__PVT__avs_adapter__DOT__rsp_queue_data_out[6U] 
          >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[7U] 
                       << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[9U] = 
        ((__PVT__avs_adapter__DOT__rsp_queue_data_out[7U] 
          >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[8U] 
                       << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0xaU] 
        = ((__PVT__avs_adapter__DOT__rsp_queue_data_out[8U] 
            >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[9U] 
                         << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0xbU] 
        = ((__PVT__avs_adapter__DOT__rsp_queue_data_out[9U] 
            >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0xaU] 
                         << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0xcU] 
        = ((__PVT__avs_adapter__DOT__rsp_queue_data_out[0xaU] 
            >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0xbU] 
                         << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0xdU] 
        = ((__PVT__avs_adapter__DOT__rsp_queue_data_out[0xbU] 
            >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0xcU] 
                         << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0xeU] 
        = ((__PVT__avs_adapter__DOT__rsp_queue_data_out[0xcU] 
            >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0xdU] 
                         << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0xfU] 
        = ((__PVT__avs_adapter__DOT__rsp_queue_data_out[0xdU] 
            >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0xeU] 
                         << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x10U] 
        = ((__PVT__avs_adapter__DOT__rsp_queue_data_out[0xeU] 
            >> 0x15U) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0xfU] 
                         << 0xbU));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x11U] 
        = (((IData)((0x7ffffffffffULL & (((QData)((IData)(
                                                          __PVT__avs_adapter__DOT__req_queue_tag_out[2U])) 
                                          << 0x15U) 
                                         | ((QData)((IData)(
                                                            __PVT__avs_adapter__DOT__req_queue_tag_out[1U])) 
                                            >> 0xbU)))) 
            << 0xbU) | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0xfU] 
                        >> 0x15U));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x12U] 
        = (((IData)((0x7ffffffffffULL & (((QData)((IData)(
                                                          __PVT__avs_adapter__DOT__req_queue_tag_out[2U])) 
                                          << 0x15U) 
                                         | ((QData)((IData)(
                                                            __PVT__avs_adapter__DOT__req_queue_tag_out[1U])) 
                                            >> 0xbU)))) 
            >> 0x15U) | ((__PVT__avs_adapter__DOT__rsp_queue_data_out[0x10U] 
                          << 0x16U) | ((IData)(((0x7ffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     __PVT__avs_adapter__DOT__req_queue_tag_out[2U])) 
                                                     << 0x15U) 
                                                    | ((QData)((IData)(
                                                                       __PVT__avs_adapter__DOT__req_queue_tag_out[1U])) 
                                                       >> 0xbU))) 
                                                >> 0x20U)) 
                                       << 0xbU)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x13U] 
        = (((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x10U] 
                       >> 0xaU)) | ((IData)(((0x7ffffffffffULL 
                                              & (((QData)((IData)(
                                                                  __PVT__avs_adapter__DOT__req_queue_tag_out[2U])) 
                                                  << 0x15U) 
                                                 | ((QData)((IData)(
                                                                    __PVT__avs_adapter__DOT__req_queue_tag_out[1U])) 
                                                    >> 0xbU))) 
                                             >> 0x20U)) 
                                    >> 0x15U)) | ((0x3ff800U 
                                                   & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x10U] 
                                                      >> 0xaU)) 
                                                  | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x11U] 
                                                     << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x14U] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x11U] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x11U] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x12U] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x15U] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x12U] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x12U] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x13U] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x16U] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x13U] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x13U] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x14U] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x17U] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x14U] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x14U] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x15U] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x18U] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x15U] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x15U] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x16U] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x19U] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x16U] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x16U] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x17U] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x1aU] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x17U] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x17U] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x18U] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x1bU] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x18U] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x18U] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x19U] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x1cU] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x19U] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x19U] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1aU] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x1dU] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1aU] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1aU] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1bU] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x1eU] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1bU] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1bU] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1cU] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x1fU] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1cU] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1cU] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1dU] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x20U] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1dU] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1dU] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1eU] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x21U] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1eU] 
                      >> 0xaU)) | ((0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1eU] 
                                                 >> 0xaU)) 
                                   | (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1fU] 
                                      << 0x16U)));
    __PVT__avs_adapter__DOT__rsp_arb_data_in[0x22U] 
        = ((0x7ffU & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1fU] 
                      >> 0xaU)) | (0x3ff800U & (__PVT__avs_adapter__DOT__rsp_queue_data_out[0x1fU] 
                                                >> 0xaU)));
    vlSelf->__PVT__avs_adapter__DOT__rsp_arb_valid_in 
        = ((2U & ((~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_queue_empty) 
                      >> 1U)) << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_queue_empty))));
    vlSelf->__Vcellout__avs_adapter__avs_address[1U] 
        = (0x1ffffffU & avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0x10U]);
    vlSelf->__Vcellout__avs_adapter__avs_byteenable[1U] 
        = (((QData)((IData)(avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0x12U])) 
            << 0x27U) | (((QData)((IData)(avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0x11U])) 
                          << 7U) | ((QData)((IData)(
                                                    avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0x10U])) 
                                    >> 0x19U)));
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][0U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][1U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[1U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][2U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[2U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][3U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[3U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][4U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[4U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][5U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[5U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][6U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[6U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][7U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[7U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][8U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[8U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][9U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[9U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][0xaU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xaU];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][0xbU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xbU];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][0xcU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xcU];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][0xdU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xdU];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][0xeU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xeU];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[1U][0xfU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0xfU];
    vlSelf->__Vcellout__avs_adapter__avs_read[1U] = 
        ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
         & (~ (avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0x12U] 
               >> 0x19U)));
    vlSelf->__Vcellout__avs_adapter__avs_write[1U] 
        = ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (avs_adapter__DOT____Vcellout__genblk4__BRA__1__KET____DOT__req_out_buf__data_out[0x12U] 
              >> 0x19U));
    vlSelf->__Vcellout__avs_adapter__avs_address[0U] 
        = (0x1ffffffU & avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0x10U]);
    vlSelf->__Vcellout__avs_adapter__avs_byteenable[0U] 
        = (((QData)((IData)(avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0x12U])) 
            << 0x27U) | (((QData)((IData)(avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0x11U])) 
                          << 7U) | ((QData)((IData)(
                                                    avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0x10U])) 
                                    >> 0x19U)));
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][0U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][1U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[1U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][2U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[2U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][3U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[3U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][4U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[4U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][5U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[5U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][6U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[6U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][7U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[7U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][8U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[8U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][9U] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[9U];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][0xaU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xaU];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][0xbU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xbU];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][0xcU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xcU];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][0xdU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xdU];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][0xeU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xeU];
    vlSelf->__Vcellout__avs_adapter__avs_writedata[0U][0xfU] 
        = avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0xfU];
    vlSelf->__Vcellout__avs_adapter__avs_read[0U] = 
        ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
         & (~ (avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0x12U] 
               >> 0x19U)));
    vlSelf->__Vcellout__avs_adapter__avs_write[0U] 
        = ((IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
           & (avs_adapter__DOT____Vcellout__genblk4__BRA__0__KET____DOT__req_out_buf__data_out[0x12U] 
              >> 0x19U));
    vlSelf->__PVT__cci_wr_pending_size__DOT__genblk3__DOT__used_r 
        = __Vdly__cci_wr_pending_size__DOT__genblk3__DOT__used_r;
    vlSelf->__PVT__cci_wr_req_ctr = __Vdly__cci_wr_req_ctr;
    vlSelf->__PVT__cci_mem_wr_req_ctr = __Vdly__cci_mem_wr_req_ctr;
    vlSelf->__PVT__state = __Vdly__state;
    vlSelf->__PVT__cout_q_empty = vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__empty_r;
    vlSelf->__PVT__cout_q_full = vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__full_r;
    vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r 
        = (((1U == (((IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                     << 2U) | (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb_valid_in))) 
            | (5U == (5U & (((IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                             << 2U) | (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb_valid_in)))))
            ? 1U : 2U);
    vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r 
        = (1U & (~ ((1U == (((IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                             << 2U) | (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb_valid_in))) 
                    | (5U == (5U & (((IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state) 
                                     << 2U) | (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb_valid_in)))))));
    vlSelf->__PVT__avs_address[0U] = vlSelf->__Vcellout__avs_adapter__avs_address
        [0U];
    vlSelf->__PVT__avs_address[1U] = vlSelf->__Vcellout__avs_adapter__avs_address
        [1U];
    vlSelf->__PVT__avs_byteenable[0U] = vlSelf->__Vcellout__avs_adapter__avs_byteenable
        [0U];
    vlSelf->__PVT__avs_byteenable[1U] = vlSelf->__Vcellout__avs_adapter__avs_byteenable
        [1U];
    vlSelf->__PVT__avs_writedata[0U][0U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][0U];
    vlSelf->__PVT__avs_writedata[0U][1U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][1U];
    vlSelf->__PVT__avs_writedata[0U][2U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][2U];
    vlSelf->__PVT__avs_writedata[0U][3U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][3U];
    vlSelf->__PVT__avs_writedata[0U][4U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][4U];
    vlSelf->__PVT__avs_writedata[0U][5U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][5U];
    vlSelf->__PVT__avs_writedata[0U][6U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][6U];
    vlSelf->__PVT__avs_writedata[0U][7U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][7U];
    vlSelf->__PVT__avs_writedata[0U][8U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][8U];
    vlSelf->__PVT__avs_writedata[0U][9U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][9U];
    vlSelf->__PVT__avs_writedata[0U][0xaU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][0xaU];
    vlSelf->__PVT__avs_writedata[0U][0xbU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][0xbU];
    vlSelf->__PVT__avs_writedata[0U][0xcU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][0xcU];
    vlSelf->__PVT__avs_writedata[0U][0xdU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][0xdU];
    vlSelf->__PVT__avs_writedata[0U][0xeU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][0xeU];
    vlSelf->__PVT__avs_writedata[0U][0xfU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [0U][0xfU];
    vlSelf->__PVT__avs_writedata[1U][0U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][0U];
    vlSelf->__PVT__avs_writedata[1U][1U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][1U];
    vlSelf->__PVT__avs_writedata[1U][2U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][2U];
    vlSelf->__PVT__avs_writedata[1U][3U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][3U];
    vlSelf->__PVT__avs_writedata[1U][4U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][4U];
    vlSelf->__PVT__avs_writedata[1U][5U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][5U];
    vlSelf->__PVT__avs_writedata[1U][6U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][6U];
    vlSelf->__PVT__avs_writedata[1U][7U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][7U];
    vlSelf->__PVT__avs_writedata[1U][8U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][8U];
    vlSelf->__PVT__avs_writedata[1U][9U] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][9U];
    vlSelf->__PVT__avs_writedata[1U][0xaU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][0xaU];
    vlSelf->__PVT__avs_writedata[1U][0xbU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][0xbU];
    vlSelf->__PVT__avs_writedata[1U][0xcU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][0xcU];
    vlSelf->__PVT__avs_writedata[1U][0xdU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][0xdU];
    vlSelf->__PVT__avs_writedata[1U][0xeU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][0xeU];
    vlSelf->__PVT__avs_writedata[1U][0xfU] = vlSelf->__Vcellout__avs_adapter__avs_writedata
        [1U][0xfU];
    vlSelf->__PVT__avs_read[0U] = vlSelf->__Vcellout__avs_adapter__avs_read
        [0U];
    vlSelf->__PVT__avs_read[1U] = vlSelf->__Vcellout__avs_adapter__avs_read
        [1U];
    vlSelf->__PVT__avs_write[0U] = vlSelf->__Vcellout__avs_adapter__avs_write
        [0U];
    vlSelf->__PVT__avs_write[1U] = vlSelf->__Vcellout__avs_adapter__avs_write
        [1U];
    vlSelf->__PVT__cci_pending_writes_empty = vlSelf->__PVT__cci_wr_pending_size__DOT__empty_r;
    vlSelf->__PVT__cci_pending_writes_full = vlSelf->__PVT__cci_wr_pending_size__DOT__full_r;
    vlSelf->__PVT__cci_wr_req_fire = ((~ (IData)(vlSymsp->TOP.reset)) 
                                      & (IData)(vlSelf->__PVT__cci_mem_rd_rsp_fire));
    if ((0x20000000U & vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0U])) {
        if ((0xcU == (0xffffU & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                 >> 0xcU)))) {
            vlSelf->__PVT__cmd_args[0U] = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[1U]))));
            vlSelf->__PVT__cmd_args[1U] = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[2U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[1U]))) 
                                                   >> 0x20U));
        } else if ((0xeU == (0xffffU & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                        >> 0xcU)))) {
            vlSelf->__PVT__cmd_args[2U] = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[1U]))));
            vlSelf->__PVT__cmd_args[3U] = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[2U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[1U]))) 
                                                   >> 0x20U));
        } else if ((0x10U == (0xffffU & (vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[0x11U] 
                                         >> 0xcU)))) {
            vlSelf->__PVT__cmd_args[4U] = (IData)((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[2U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[1U]))));
            vlSelf->__PVT__cmd_args[5U] = (IData)((
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[2U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP__vortex_afu_shim.__PVT__cp2af_sRxPort[1U]))) 
                                                   >> 0x20U));
        }
    }
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x14U] 
        = ((0x1fU & vlSelf->__PVT__mem_arb__DOT__req_data_in[0x14U]) 
           | ((__PVT__cci_rdq_dout[2U] << 0x1bU) | 
              (0x7ffffe0U & (__PVT__cci_rdq_dout[1U] 
                             >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x15U] 
        = ((0x1fU & (__PVT__cci_rdq_dout[2U] >> 5U)) 
           | ((__PVT__cci_rdq_dout[3U] << 0x1bU) | 
              (0x7ffffe0U & (__PVT__cci_rdq_dout[2U] 
                             >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x16U] 
        = ((0x1fU & (__PVT__cci_rdq_dout[3U] >> 5U)) 
           | ((__PVT__cci_rdq_dout[4U] << 0x1bU) | 
              (0x7ffffe0U & (__PVT__cci_rdq_dout[3U] 
                             >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x17U] 
        = ((0x1fU & (__PVT__cci_rdq_dout[4U] >> 5U)) 
           | ((__PVT__cci_rdq_dout[5U] << 0x1bU) | 
              (0x7ffffe0U & (__PVT__cci_rdq_dout[4U] 
                             >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x18U] 
        = ((0x1fU & (__PVT__cci_rdq_dout[5U] >> 5U)) 
           | ((__PVT__cci_rdq_dout[6U] << 0x1bU) | 
              (0x7ffffe0U & (__PVT__cci_rdq_dout[5U] 
                             >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x19U] 
        = ((0x1fU & (__PVT__cci_rdq_dout[6U] >> 5U)) 
           | ((__PVT__cci_rdq_dout[7U] << 0x1bU) | 
              (0x7ffffe0U & (__PVT__cci_rdq_dout[6U] 
                             >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x1aU] 
        = ((0x1fU & (__PVT__cci_rdq_dout[7U] >> 5U)) 
           | ((__PVT__cci_rdq_dout[8U] << 0x1bU) | 
              (0x7ffffe0U & (__PVT__cci_rdq_dout[7U] 
                             >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x1bU] 
        = ((0x1fU & (__PVT__cci_rdq_dout[8U] >> 5U)) 
           | ((__PVT__cci_rdq_dout[9U] << 0x1bU) | 
              (0x7ffffe0U & (__PVT__cci_rdq_dout[8U] 
                             >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x1cU] 
        = ((0x1fU & (__PVT__cci_rdq_dout[9U] >> 5U)) 
           | ((__PVT__cci_rdq_dout[0xaU] << 0x1bU) 
              | (0x7ffffe0U & (__PVT__cci_rdq_dout[9U] 
                               >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x1dU] 
        = ((0x1fU & (__PVT__cci_rdq_dout[0xaU] >> 5U)) 
           | ((__PVT__cci_rdq_dout[0xbU] << 0x1bU) 
              | (0x7ffffe0U & (__PVT__cci_rdq_dout[0xaU] 
                               >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x1eU] 
        = ((0x1fU & (__PVT__cci_rdq_dout[0xbU] >> 5U)) 
           | ((__PVT__cci_rdq_dout[0xcU] << 0x1bU) 
              | (0x7ffffe0U & (__PVT__cci_rdq_dout[0xbU] 
                               >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x1fU] 
        = ((0x1fU & (__PVT__cci_rdq_dout[0xcU] >> 5U)) 
           | ((__PVT__cci_rdq_dout[0xdU] << 0x1bU) 
              | (0x7ffffe0U & (__PVT__cci_rdq_dout[0xcU] 
                               >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x20U] 
        = ((0x1fU & (__PVT__cci_rdq_dout[0xdU] >> 5U)) 
           | ((__PVT__cci_rdq_dout[0xeU] << 0x1bU) 
              | (0x7ffffe0U & (__PVT__cci_rdq_dout[0xdU] 
                               >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x21U] 
        = ((0x1fU & (__PVT__cci_rdq_dout[0xeU] >> 5U)) 
           | ((__PVT__cci_rdq_dout[0xfU] << 0x1bU) 
              | (0x7ffffe0U & (__PVT__cci_rdq_dout[0xeU] 
                               >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x22U] 
        = ((0x1fU & (__PVT__cci_rdq_dout[0xfU] >> 5U)) 
           | ((__PVT__cci_rdq_dout[0x10U] << 0x1bU) 
              | (0x7ffffe0U & (__PVT__cci_rdq_dout[0xfU] 
                               >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x23U] 
        = ((0x1fU & (__PVT__cci_rdq_dout[0x10U] >> 5U)) 
           | ((__PVT__cci_rdq_dout[0x11U] << 0x1bU) 
              | (0x7ffffe0U & (__PVT__cci_rdq_dout[0x10U] 
                               >> 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x24U] 
        = (0xffffffe0U | (0x1fU & (__PVT__cci_rdq_dout[0x11U] 
                                   >> 5U)));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x25U] = 0xffffffffU;
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x26U] 
        = (0x1fU | (((IData)((0x3ffffffffffULL & ((1U 
                                                   & (IData)(vlSelf->__PVT__state))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __PVT__cci_rdq_dout[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     __PVT__cci_rdq_dout[0U])))
                                                   : vlSelf->__PVT__cci_mem_rd_req_addr))) 
                     << 6U) | (0x20U & ((IData)(vlSelf->__PVT__state) 
                                        << 5U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x27U] 
        = ((0x1fU & (IData)(((1U & (IData)(vlSelf->__PVT__state))
                              ? vlSelf->__PVT__cci_mem_wr_req_ctr
                              : vlSelf->__PVT__cci_mem_rd_req_ctr))) 
           | (0xffffffe0U & (IData)(((1U & (IData)(vlSelf->__PVT__state))
                                      ? vlSelf->__PVT__cci_mem_wr_req_ctr
                                      : vlSelf->__PVT__cci_mem_rd_req_ctr))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x28U] 
        = (0x3ffU & ((0x1fU & (IData)((((1U & (IData)(vlSelf->__PVT__state))
                                         ? vlSelf->__PVT__cci_mem_wr_req_ctr
                                         : vlSelf->__PVT__cci_mem_rd_req_ctr) 
                                       >> 0x20U))) 
                     | (0xffffffe0U & (IData)((((1U 
                                                 & (IData)(vlSelf->__PVT__state))
                                                 ? vlSelf->__PVT__cci_mem_wr_req_ctr
                                                 : vlSelf->__PVT__cci_mem_rd_req_ctr) 
                                               >> 0x20U)))));
    vlSelf->__PVT__cci_mem_rd_req_valid = ((2U == (IData)(vlSelf->__PVT__state)) 
                                           & (~ (IData)(vlSelf->__PVT__cci_mem_rd_req_done)));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(1U) + (0x3fU & 
                                            (((IData)(0x22bU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     (0x3fU & (((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                               >> 5U))] >> (0x1fU & 
                                            ((IData)(0x22bU) 
                                             * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[1U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(2U) + (0x3fU & 
                                            (((IData)(0x22bU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(1U) + (0x3fU & (((IData)(0x22bU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[1U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[2U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(3U) + (0x3fU & 
                                            (((IData)(0x22bU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(2U) + (0x3fU & (((IData)(0x22bU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[2U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[3U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(4U) + (0x3fU & 
                                            (((IData)(0x22bU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(3U) + (0x3fU & (((IData)(0x22bU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[3U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[4U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(5U) + (0x3fU & 
                                            (((IData)(0x22bU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(4U) + (0x3fU & (((IData)(0x22bU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[4U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[5U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(6U) + (0x3fU & 
                                            (((IData)(0x22bU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(5U) + (0x3fU & (((IData)(0x22bU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[5U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[6U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(7U) + (0x3fU & 
                                            (((IData)(0x22bU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(6U) + (0x3fU & (((IData)(0x22bU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[6U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[7U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(8U) + (0x3fU & 
                                            (((IData)(0x22bU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(7U) + (0x3fU & (((IData)(0x22bU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[7U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[8U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(9U) + (0x3fU & 
                                            (((IData)(0x22bU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                             >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(8U) + (0x3fU & (((IData)(0x22bU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[8U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[9U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(0xaU) + (0x3fU 
                                              & (((IData)(0x22bU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(9U) + (0x3fU & (((IData)(0x22bU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                              >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[9U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xaU] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(0xbU) + (0x3fU 
                                              & (((IData)(0x22bU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(0xaU) + (0x3fU & (((IData)(0x22bU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xaU]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xbU] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(0xcU) + (0x3fU 
                                              & (((IData)(0x22bU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(0xbU) + (0x3fU & (((IData)(0x22bU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xbU]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xcU] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(0xdU) + (0x3fU 
                                              & (((IData)(0x22bU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(0xcU) + (0x3fU & (((IData)(0x22bU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xcU]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xdU] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(0xeU) + (0x3fU 
                                              & (((IData)(0x22bU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(0xdU) + (0x3fU & (((IData)(0x22bU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xdU]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xeU] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(0xfU) + (0x3fU 
                                              & (((IData)(0x22bU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(0xeU) + (0x3fU & (((IData)(0x22bU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xeU]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0xfU] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(0x10U) + (0x3fU 
                                               & (((IData)(0x22bU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(0xfU) + (0x3fU & (((IData)(0x22bU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0xfU]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0x10U] 
           & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
               ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                    * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                    ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                            ((IData)(0x11U) + (0x3fU 
                                               & (((IData)(0x22bU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                  >> 5U)))] 
                            << ((IData)(0x20U) - (0x1fU 
                                                  & ((IData)(0x22bU) 
                                                     * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                  | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                     ((IData)(0x10U) + (0x3fU & (((IData)(0x22bU) 
                                                  * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                 >> 5U)))] 
                     >> (0x1fU & ((IData)(0x22bU) * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
               : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0x10U]));
    vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x11U] 
        = (((IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r) 
            << 0xbU) | (Vvortex_afu_shim__ConstPool__CONST_h6e9ab14f_0[0x11U] 
                        & ((0x455U >= (0x7ffU & ((IData)(0x22bU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                            ? (((0U == (0x1fU & ((IData)(0x22bU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r))))
                                 ? 0U : (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                                         ((IData)(0x12U) 
                                          + (0x3fU 
                                             & (((IData)(0x22bU) 
                                                 * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x22bU) 
                                                   * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))) 
                               | (__PVT__avs_adapter__DOT__rsp_arb_data_in[
                                  ((IData)(0x11U) + 
                                   (0x3fU & (((IData)(0x22bU) 
                                              * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)) 
                                             >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x22bU) 
                                               * (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r)))))
                            : vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0[0x11U])));
    vlSelf->__PVT__mem_arb__DOT__req_valid_in = ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)) 
                                                 | (2U 
                                                    & (((1U 
                                                         & (IData)(vlSelf->__PVT__state))
                                                         ? 
                                                        (~ (IData)(vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__empty_r))
                                                         : (IData)(vlSelf->__PVT__cci_mem_rd_req_valid)) 
                                                       << 1U)));
    __PVT__mem_arb__DOT__rsp_data_in[0U] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
                                             << 0x15U) 
                                            | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
                                               >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[1U] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
                                             << 0x15U) 
                                            | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
                                               >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[2U] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
                                             << 0x15U) 
                                            | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
                                               >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[3U] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[5U] 
                                             << 0x15U) 
                                            | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
                                               >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[4U] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[6U] 
                                             << 0x15U) 
                                            | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[5U] 
                                               >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[5U] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[7U] 
                                             << 0x15U) 
                                            | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[6U] 
                                               >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[6U] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[8U] 
                                             << 0x15U) 
                                            | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[7U] 
                                               >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[7U] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[9U] 
                                             << 0x15U) 
                                            | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[8U] 
                                               >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[8U] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xaU] 
                                             << 0x15U) 
                                            | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[9U] 
                                               >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[9U] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xbU] 
                                             << 0x15U) 
                                            | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xaU] 
                                               >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[0xaU] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xcU] 
                                               << 0x15U) 
                                              | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xbU] 
                                                 >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[0xbU] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xdU] 
                                               << 0x15U) 
                                              | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xcU] 
                                                 >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[0xcU] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xeU] 
                                               << 0x15U) 
                                              | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xdU] 
                                                 >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[0xdU] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xfU] 
                                               << 0x15U) 
                                              | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xeU] 
                                                 >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[0xeU] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x10U] 
                                               << 0x15U) 
                                              | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xfU] 
                                                 >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[0xfU] = ((vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x11U] 
                                               << 0x15U) 
                                              | (vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x10U] 
                                                 >> 0xbU));
    __PVT__mem_arb__DOT__rsp_data_in[0x10U] = (IData)(
                                                      (0x3ffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U])) 
                                                           << 0x1fU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U])) 
                                                             >> 1U))));
    __PVT__mem_arb__DOT__rsp_data_in[0x11U] = (IData)(
                                                      ((0x3ffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U])) 
                                                            << 0x1fU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U])) 
                                                              >> 1U))) 
                                                       >> 0x20U));
    __PVT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__valid_out_r 
        = ((((0U != (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb_valid_in)) 
             & vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U]) 
            << 1U) | ((0U != (IData)(vlSelf->__PVT__avs_adapter__DOT__rsp_arb_valid_in)) 
                      & (~ vlSelf->avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U])));
    vlSelf->__PVT__af2cp_sTxPort[2U] = ((0xfffffbffU 
                                         & vlSelf->__PVT__af2cp_sTxPort[2U]) 
                                        | ((IData)(vlSelf->__PVT__cci_wr_req_fire) 
                                           << 0xaU));
    vlSelf->__PVT__af2cp_sTxPort[0x12U] = (0x7ffU & 
                                           vlSelf->__PVT__af2cp_sTxPort[0x12U]);
    vlSelf->__PVT__af2cp_sTxPort[0x13U] = 0U;
    vlSelf->__PVT__af2cp_sTxPort[0x14U] = (0xf8000000U 
                                           & vlSelf->__PVT__af2cp_sTxPort[0x14U]);
    vlSelf->__PVT__af2cp_sTxPort[0x14U] = (0x40000U 
                                           | vlSelf->__PVT__af2cp_sTxPort[0x14U]);
    vlSelf->__PVT__af2cp_sTxPort[0x12U] = ((0x7ffffffU 
                                            & vlSelf->__PVT__af2cp_sTxPort[0x12U]) 
                                           | ((IData)(vlSelf->__PVT__cci_wr_req_addr) 
                                              << 0x1bU));
    vlSelf->__PVT__af2cp_sTxPort[0x13U] = (((IData)(vlSelf->__PVT__cci_wr_req_addr) 
                                            >> 5U) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__cci_wr_req_addr 
                                                       >> 0x20U)) 
                                              << 0x1bU));
    vlSelf->__PVT__af2cp_sTxPort[0x14U] = ((0xffffffe0U 
                                            & vlSelf->__PVT__af2cp_sTxPort[0x14U]) 
                                           | ((IData)(
                                                      (vlSelf->__PVT__cci_wr_req_addr 
                                                       >> 0x20U)) 
                                              >> 5U));
    vlSelf->__PVT__af2cp_sTxPort[2U] = ((0x7ffU & vlSelf->__PVT__af2cp_sTxPort[2U]) 
                                        | (vlSelf->__PVT__cci_wr_req_data[0U] 
                                           << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[3U] = ((vlSelf->__PVT__cci_wr_req_data[0U] 
                                         >> 0x15U) 
                                        | (vlSelf->__PVT__cci_wr_req_data[1U] 
                                           << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[4U] = ((vlSelf->__PVT__cci_wr_req_data[1U] 
                                         >> 0x15U) 
                                        | (vlSelf->__PVT__cci_wr_req_data[2U] 
                                           << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[5U] = ((vlSelf->__PVT__cci_wr_req_data[2U] 
                                         >> 0x15U) 
                                        | (vlSelf->__PVT__cci_wr_req_data[3U] 
                                           << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[6U] = ((vlSelf->__PVT__cci_wr_req_data[3U] 
                                         >> 0x15U) 
                                        | (vlSelf->__PVT__cci_wr_req_data[4U] 
                                           << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[7U] = ((vlSelf->__PVT__cci_wr_req_data[4U] 
                                         >> 0x15U) 
                                        | (vlSelf->__PVT__cci_wr_req_data[5U] 
                                           << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[8U] = ((vlSelf->__PVT__cci_wr_req_data[5U] 
                                         >> 0x15U) 
                                        | (vlSelf->__PVT__cci_wr_req_data[6U] 
                                           << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[9U] = ((vlSelf->__PVT__cci_wr_req_data[6U] 
                                         >> 0x15U) 
                                        | (vlSelf->__PVT__cci_wr_req_data[7U] 
                                           << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[0xaU] = ((vlSelf->__PVT__cci_wr_req_data[7U] 
                                           >> 0x15U) 
                                          | (vlSelf->__PVT__cci_wr_req_data[8U] 
                                             << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[0xbU] = ((vlSelf->__PVT__cci_wr_req_data[8U] 
                                           >> 0x15U) 
                                          | (vlSelf->__PVT__cci_wr_req_data[9U] 
                                             << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[0xcU] = ((vlSelf->__PVT__cci_wr_req_data[9U] 
                                           >> 0x15U) 
                                          | (vlSelf->__PVT__cci_wr_req_data[0xaU] 
                                             << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[0xdU] = ((vlSelf->__PVT__cci_wr_req_data[0xaU] 
                                           >> 0x15U) 
                                          | (vlSelf->__PVT__cci_wr_req_data[0xbU] 
                                             << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[0xeU] = ((vlSelf->__PVT__cci_wr_req_data[0xbU] 
                                           >> 0x15U) 
                                          | (vlSelf->__PVT__cci_wr_req_data[0xcU] 
                                             << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[0xfU] = ((vlSelf->__PVT__cci_wr_req_data[0xcU] 
                                           >> 0x15U) 
                                          | (vlSelf->__PVT__cci_wr_req_data[0xdU] 
                                             << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[0x10U] = ((vlSelf->__PVT__cci_wr_req_data[0xdU] 
                                            >> 0x15U) 
                                           | (vlSelf->__PVT__cci_wr_req_data[0xeU] 
                                              << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[0x11U] = ((vlSelf->__PVT__cci_wr_req_data[0xeU] 
                                            >> 0x15U) 
                                           | (vlSelf->__PVT__cci_wr_req_data[0xfU] 
                                              << 0xbU));
    vlSelf->__PVT__af2cp_sTxPort[0x12U] = ((0xfffff800U 
                                            & vlSelf->__PVT__af2cp_sTxPort[0x12U]) 
                                           | (vlSelf->__PVT__cci_wr_req_data[0xfU] 
                                              >> 0x15U));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0U] 
           & __PVT__mem_arb__DOT__rsp_data_in[0U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[1U] 
           & __PVT__mem_arb__DOT__rsp_data_in[1U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[2U] 
           & __PVT__mem_arb__DOT__rsp_data_in[2U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[3U] 
           & __PVT__mem_arb__DOT__rsp_data_in[3U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[4U] 
           & __PVT__mem_arb__DOT__rsp_data_in[4U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[5U] 
           & __PVT__mem_arb__DOT__rsp_data_in[5U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[6U] 
           & __PVT__mem_arb__DOT__rsp_data_in[6U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[7U] 
           & __PVT__mem_arb__DOT__rsp_data_in[7U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[8U] 
           & __PVT__mem_arb__DOT__rsp_data_in[8U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[9U] 
           & __PVT__mem_arb__DOT__rsp_data_in[9U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0xaU] 
           & __PVT__mem_arb__DOT__rsp_data_in[0xaU]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0xbU] 
           & __PVT__mem_arb__DOT__rsp_data_in[0xbU]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0xcU] 
           & __PVT__mem_arb__DOT__rsp_data_in[0xcU]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0xdU] 
           & __PVT__mem_arb__DOT__rsp_data_in[0xdU]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0xeU] 
           & __PVT__mem_arb__DOT__rsp_data_in[0xeU]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0xfU] 
           & __PVT__mem_arb__DOT__rsp_data_in[0xfU]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x10U] 
           & __PVT__mem_arb__DOT__rsp_data_in[0x10U]);
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x11U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x11U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[0U] 
               << 0xaU) | __PVT__mem_arb__DOT__rsp_data_in[0x11U]));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x12U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x12U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[0U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[1U] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x13U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x13U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[1U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[2U] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x14U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x14U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[2U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[3U] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x15U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x15U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[3U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[4U] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x16U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x16U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[4U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[5U] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x17U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x17U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[5U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[6U] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x18U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x18U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[6U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[7U] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x19U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x19U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[7U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[8U] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1aU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x1aU] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[8U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[9U] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1bU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x1bU] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[9U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[0xaU] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1cU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x1cU] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[0xaU] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[0xbU] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1dU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x1dU] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[0xbU] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[0xcU] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1eU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x1eU] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[0xcU] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[0xdU] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1fU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x1fU] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[0xdU] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[0xeU] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x20U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x20U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[0xeU] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[0xfU] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x21U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x21U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[0xfU] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[0x10U] 
                            << 0xaU)));
    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x22U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h2d832103_0[0x22U] 
           & ((__PVT__mem_arb__DOT__rsp_data_in[0x10U] 
               >> 0x16U) | (__PVT__mem_arb__DOT__rsp_data_in[0x11U] 
                            << 0xaU)));
    vlSelf->__PVT__mem_arb__DOT__rsp_valid_out = __PVT__mem_arb__DOT__genblk4__DOT__rsp_switch__DOT__genblk1__DOT__valid_out_r;
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0U] 
        = (IData)((0x3ffffffffffULL & (((QData)((IData)(
                                                        mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x11U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x10U])))));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[1U] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0U] 
            << 0xaU) | (IData)(((0x3ffffffffffULL & 
                                 (((QData)((IData)(
                                                   mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x11U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x10U])))) 
                                >> 0x20U)));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[2U] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0U] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[1U] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[3U] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[1U] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[2U] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[4U] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[2U] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[3U] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[5U] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[3U] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[4U] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[6U] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[4U] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[5U] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[7U] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[5U] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[6U] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[8U] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[6U] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[7U] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[9U] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[7U] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[8U] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xaU] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[8U] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[9U] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xbU] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[9U] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xaU] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xcU] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xaU] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xbU] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xdU] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xbU] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xcU] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xeU] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xcU] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xdU] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0xfU] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xdU] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xeU] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0x10U] 
        = ((mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xeU] 
            >> 0x16U) | (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xfU] 
                         << 0xaU));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__0__KET__.__PVT__rsp_data[0x11U] 
        = (mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0xfU] 
           >> 0x16U);
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0U] 
        = (IData)((0x3ffffffffffULL & (((QData)((IData)(
                                                        mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x22U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x21U])) 
                                        >> 0xaU))));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[1U] 
        = ((0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x11U]) 
           | (IData)(((0x3ffffffffffULL & (((QData)((IData)(
                                                            mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x22U])) 
                                            << 0x16U) 
                                           | ((QData)((IData)(
                                                              mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x21U])) 
                                              >> 0xaU))) 
                      >> 0x20U)));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[2U] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x12U]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x12U]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[3U] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x13U]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x13U]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[4U] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x14U]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x14U]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[5U] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x15U]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x15U]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[6U] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x16U]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x16U]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[7U] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x17U]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x17U]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[8U] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x18U]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x18U]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[9U] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x19U]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x19U]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xaU] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1aU]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1aU]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xbU] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1bU]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1bU]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xcU] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1cU]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1cU]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xdU] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1dU]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1dU]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xeU] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1eU]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1eU]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0xfU] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1fU]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x1fU]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0x10U] 
        = ((0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x20U]) 
           | (0xfffffc00U & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x20U]));
    vlSymsp->TOP__vortex_afu_shim__afu__cci_vx_mem_bus_if__BRA__1__KET__.__PVT__rsp_data[0x11U] 
        = (0x3ffU & mem_arb__DOT____Vcellout__genblk4__DOT__rsp_switch__data_out[0x21U]);
    vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((IData)(vlSelf->__PVT__mem_arb__DOT__rsp_valid_out) 
           & (IData)(vlSelf->__PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
}

extern const VlWide<21>/*671:0*/ Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0;

VL_INLINE_OPT void Vvortex_afu_shim_vortex_afu___sequent__TOP__vortex_afu_shim__afu__1(Vvortex_afu_shim_vortex_afu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vvortex_afu_shim_vortex_afu___sequent__TOP__vortex_afu_shim__afu__1\n"); );
    // Init
    CData/*0:0*/ __Vcellout__avs_adapter__mem_req_ready;
    CData/*1:0*/ __PVT__mem_arb__DOT__req_ready_in;
    VlWide<21>/*645:0*/ mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in;
    VlWide<21>/*671:0*/ __Vtemp_hbc03687f__0;
    // Body
    vlSelf->__PVT__cout_q_push = (((IData)(vlSymsp->TOP__vortex_afu_shim__afu__vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                   & (0x3fc0100U == 
                                      (0x3ffffffU & 
                                       ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x11U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x10U] 
                                           >> 0xaU))))) 
                                  & (~ (IData)(vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__full_r)));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0U] = 
        ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[1U] 
          << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0U] 
                       >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[1U] = 
        ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[2U] 
          << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[1U] 
                       >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[2U] = 
        ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[3U] 
          << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[2U] 
                       >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[3U] = 
        ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[4U] 
          << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[3U] 
                       >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[4U] = 
        ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[5U] 
          << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[4U] 
                       >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[5U] = 
        ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[6U] 
          << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[5U] 
                       >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[6U] = 
        ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[7U] 
          << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[6U] 
                       >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[7U] = 
        ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[8U] 
          << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[7U] 
                       >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[8U] = 
        ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[9U] 
          << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[8U] 
                       >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[9U] = 
        ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xaU] 
          << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[9U] 
                       >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0xaU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xbU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xaU] 
                         >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0xbU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xcU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xbU] 
                         >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0xcU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xdU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xcU] 
                         >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0xdU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xeU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xdU] 
                         >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0xeU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xfU] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xeU] 
                         >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0xfU] 
        = ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x10U] 
            << 0x16U) | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0xfU] 
                         >> 0xaU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x10U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x13U])) 
                    << 0x3cU) | (((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x12U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x11U])) 
                                               >> 4U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x11U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x13U])) 
                     << 0x3cU) | (((QData)((IData)(
                                                   vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x12U])) 
                                   << 0x1cU) | ((QData)((IData)(
                                                                vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x11U])) 
                                                >> 4U))) 
                   >> 0x20U));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x12U] 
        = (((IData)((QData)((IData)((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0U])))) 
            << 0x1bU) | ((0x7fffffeU & ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x11U] 
                                         << 0x17U) 
                                        | (0x7ffffeU 
                                           & (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x10U] 
                                              >> 9U)))) 
                         | (1U & (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x13U] 
                                  >> 4U))));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x13U] 
        = (((IData)((QData)((IData)((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0U])))) 
            >> 5U) | ((IData)(((QData)((IData)((0x3ffU 
                                                & vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0U]))) 
                               >> 0x20U)) << 0x1bU));
    vlSelf->__PVT__mem_arb__DOT__req_data_in[0x14U] 
        = ((0xffffffe0U & vlSelf->__PVT__mem_arb__DOT__req_data_in[0x14U]) 
           | ((IData)(((QData)((IData)((0x3ffU & vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0U]))) 
                       >> 0x20U)) >> 5U));
    vlSelf->__PVT__mem_arb__DOT__req_valid_in = ((2U 
                                                  & (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)) 
                                                 | ((IData)(vlSymsp->TOP__vortex_afu_shim__afu__vortex.__PVT__genblk5__BRA__0__KET____DOT__cluster__DOT__genblk4__BRA__0__KET____DOT__socket__DOT__mem_arb__DOT__req_arb__DOT__genblk1__DOT__genblk1__DOT__out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r) 
                                                    & (0x3fc0100U 
                                                       != 
                                                       (0x3ffffffU 
                                                        & ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x11U] 
                                                            << 0x16U) 
                                                           | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x10U] 
                                                              >> 0xaU))))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[0U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x13U])) 
                    << 0x3cU) | (((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x12U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x11U])) 
                                               >> 4U))));
    vlSelf->__PVT__cout_tid_enc__DOT__genblk1__DOT__v[1U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x13U])) 
                     << 0x3cU) | (((QData)((IData)(
                                                   vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x12U])) 
                                   << 0x1cU) | ((QData)((IData)(
                                                                vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x11U])) 
                                                >> 4U))) 
                   >> 0x20U));
    if ((0x509U >= (0x7ffU & ((IData)(0x285U) * (1U 
                                                 & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))) {
        __Vtemp_hbc03687f__0[0U] = (((0U == (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                      ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                              ((IData)(1U) 
                                               + (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                    | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                       (0x3fU & (((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x285U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[1U] = (((0U == (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                      ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                              ((IData)(2U) 
                                               + (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                    | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                       ((IData)(1U) 
                                        + (0x3fU & 
                                           (((IData)(0x285U) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x285U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[2U] = (((0U == (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                      ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                              ((IData)(3U) 
                                               + (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                    | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                       ((IData)(2U) 
                                        + (0x3fU & 
                                           (((IData)(0x285U) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x285U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[3U] = (((0U == (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                      ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                              ((IData)(4U) 
                                               + (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                    | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                       ((IData)(3U) 
                                        + (0x3fU & 
                                           (((IData)(0x285U) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x285U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[4U] = (((0U == (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                      ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                              ((IData)(5U) 
                                               + (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                    | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                       ((IData)(4U) 
                                        + (0x3fU & 
                                           (((IData)(0x285U) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x285U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[5U] = (((0U == (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                      ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                              ((IData)(6U) 
                                               + (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                    | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                       ((IData)(5U) 
                                        + (0x3fU & 
                                           (((IData)(0x285U) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x285U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[6U] = (((0U == (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                      ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                              ((IData)(7U) 
                                               + (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                    | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                       ((IData)(6U) 
                                        + (0x3fU & 
                                           (((IData)(0x285U) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x285U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[7U] = (((0U == (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                      ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                              ((IData)(8U) 
                                               + (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                    | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                       ((IData)(7U) 
                                        + (0x3fU & 
                                           (((IData)(0x285U) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x285U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[8U] = (((0U == (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                      ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                              ((IData)(9U) 
                                               + (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                    | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                       ((IData)(8U) 
                                        + (0x3fU & 
                                           (((IData)(0x285U) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x285U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[9U] = (((0U == (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                      ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                              ((IData)(0xaU) 
                                               + (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                    | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                       ((IData)(9U) 
                                        + (0x3fU & 
                                           (((IData)(0x285U) 
                                             * (1U 
                                                & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                            >> 5U)))] 
                                       >> (0x1fU & 
                                           ((IData)(0x285U) 
                                            * (1U & 
                                               (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0xaU] = (((0U == (0x1fU 
                                               & ((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                        ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                ((IData)(0xbU) 
                                                 + 
                                                 (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x285U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                      | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                         ((IData)(0xaU) 
                                          + (0x3fU 
                                             & (((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0xbU] = (((0U == (0x1fU 
                                               & ((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                        ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                ((IData)(0xcU) 
                                                 + 
                                                 (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x285U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                      | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                         ((IData)(0xbU) 
                                          + (0x3fU 
                                             & (((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0xcU] = (((0U == (0x1fU 
                                               & ((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                        ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                ((IData)(0xdU) 
                                                 + 
                                                 (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x285U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                      | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                         ((IData)(0xcU) 
                                          + (0x3fU 
                                             & (((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0xdU] = (((0U == (0x1fU 
                                               & ((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                        ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                ((IData)(0xeU) 
                                                 + 
                                                 (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x285U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                      | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                         ((IData)(0xdU) 
                                          + (0x3fU 
                                             & (((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0xeU] = (((0U == (0x1fU 
                                               & ((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                        ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                ((IData)(0xfU) 
                                                 + 
                                                 (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x285U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                      | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                         ((IData)(0xeU) 
                                          + (0x3fU 
                                             & (((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0xfU] = (((0U == (0x1fU 
                                               & ((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                        ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                ((IData)(0x10U) 
                                                 + 
                                                 (0x3fU 
                                                  & (((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                     >> 5U)))] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x285U) 
                                                     * 
                                                     (1U 
                                                      & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                      | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                         ((IData)(0xfU) 
                                          + (0x3fU 
                                             & (((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                >> 5U)))] 
                                         >> (0x1fU 
                                             & ((IData)(0x285U) 
                                                * (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0x10U] = (((0U == (0x1fU 
                                                & ((IData)(0x285U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                         ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                 ((IData)(0x11U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x285U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                       | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                          ((IData)(0x10U) 
                                           + (0x3fU 
                                              & (((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                 >> 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0x11U] = (((0U == (0x1fU 
                                                & ((IData)(0x285U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                         ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                 ((IData)(0x12U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x285U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                       | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                          ((IData)(0x11U) 
                                           + (0x3fU 
                                              & (((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                 >> 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0x12U] = (((0U == (0x1fU 
                                                & ((IData)(0x285U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                         ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                 ((IData)(0x13U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x285U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                       | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                          ((IData)(0x12U) 
                                           + (0x3fU 
                                              & (((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                 >> 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0x13U] = (((0U == (0x1fU 
                                                & ((IData)(0x285U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                         ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                 ((IData)(0x14U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x285U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                       | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                          ((IData)(0x13U) 
                                           + (0x3fU 
                                              & (((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                 >> 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
        __Vtemp_hbc03687f__0[0x14U] = (((0U == (0x1fU 
                                                & ((IData)(0x285U) 
                                                   * 
                                                   (1U 
                                                    & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))))))
                                         ? 0U : (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                                 ((IData)(0x15U) 
                                                  + 
                                                  (0x3fU 
                                                   & (((IData)(0x285U) 
                                                       * 
                                                       (1U 
                                                        & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                      >> 5U)))] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x285U) 
                                                      * 
                                                      (1U 
                                                       & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))))) 
                                       | (vlSelf->__PVT__mem_arb__DOT__req_data_in[
                                          ((IData)(0x14U) 
                                           + (0x3fU 
                                              & (((IData)(0x285U) 
                                                  * 
                                                  (1U 
                                                   & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))) 
                                                 >> 5U)))] 
                                          >> (0x1fU 
                                              & ((IData)(0x285U) 
                                                 * 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)))))));
    } else {
        __Vtemp_hbc03687f__0[0U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0U];
        __Vtemp_hbc03687f__0[1U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[1U];
        __Vtemp_hbc03687f__0[2U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[2U];
        __Vtemp_hbc03687f__0[3U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[3U];
        __Vtemp_hbc03687f__0[4U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[4U];
        __Vtemp_hbc03687f__0[5U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[5U];
        __Vtemp_hbc03687f__0[6U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[6U];
        __Vtemp_hbc03687f__0[7U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[7U];
        __Vtemp_hbc03687f__0[8U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[8U];
        __Vtemp_hbc03687f__0[9U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[9U];
        __Vtemp_hbc03687f__0[0xaU] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xaU];
        __Vtemp_hbc03687f__0[0xbU] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xbU];
        __Vtemp_hbc03687f__0[0xcU] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xcU];
        __Vtemp_hbc03687f__0[0xdU] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xdU];
        __Vtemp_hbc03687f__0[0xeU] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xeU];
        __Vtemp_hbc03687f__0[0xfU] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0xfU];
        __Vtemp_hbc03687f__0[0x10U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0x10U];
        __Vtemp_hbc03687f__0[0x11U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0x11U];
        __Vtemp_hbc03687f__0[0x12U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0x12U];
        __Vtemp_hbc03687f__0[0x13U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0x13U];
        __Vtemp_hbc03687f__0[0x14U] = vlSelf->mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0[0x14U];
    }
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0U] 
           & __Vtemp_hbc03687f__0[0U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[1U] 
           & __Vtemp_hbc03687f__0[1U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[2U] 
           & __Vtemp_hbc03687f__0[2U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[3U] 
           & __Vtemp_hbc03687f__0[3U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[4U] 
           & __Vtemp_hbc03687f__0[4U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[5U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[5U] 
           & __Vtemp_hbc03687f__0[5U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[6U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[6U] 
           & __Vtemp_hbc03687f__0[6U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[7U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[7U] 
           & __Vtemp_hbc03687f__0[7U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[8U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[8U] 
           & __Vtemp_hbc03687f__0[8U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[9U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[9U] 
           & __Vtemp_hbc03687f__0[9U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xaU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xaU] 
           & __Vtemp_hbc03687f__0[0xaU]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xbU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xbU] 
           & __Vtemp_hbc03687f__0[0xbU]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xcU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xcU] 
           & __Vtemp_hbc03687f__0[0xcU]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xdU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xdU] 
           & __Vtemp_hbc03687f__0[0xdU]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xeU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xeU] 
           & __Vtemp_hbc03687f__0[0xeU]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xfU] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0xfU] 
           & __Vtemp_hbc03687f__0[0xfU]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x10U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0x10U] 
           & __Vtemp_hbc03687f__0[0x10U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x11U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0x11U] 
           & __Vtemp_hbc03687f__0[0x11U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x12U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0x12U] 
           & __Vtemp_hbc03687f__0[0x12U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x13U] 
        = (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0x13U] 
           & __Vtemp_hbc03687f__0[0x13U]);
    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x14U] 
        = ((0x20U & ((~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)) 
                     << 5U)) | (Vvortex_afu_shim__ConstPool__CONST_h3bb602a3_0[0x14U] 
                                & __Vtemp_hbc03687f__0[0x14U]));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0U] 
        = (IData)(((0x7fffffffffeULL & (((QData)((IData)(
                                                         mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x14U])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x13U])) 
                                            << 6U) 
                                           | (0x3ffffffffeULL 
                                              & ((QData)((IData)(
                                                                 mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x12U])) 
                                                 >> 0x1aU))))) 
                   | (QData)((IData)((1U & (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x14U] 
                                            >> 5U))))));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[1U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            << 0xbU) | (IData)((((0x7fffffffffeULL 
                                  & (((QData)((IData)(
                                                      mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x14U])) 
                                      << 0x26U) | (
                                                   ((QData)((IData)(
                                                                    mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x13U])) 
                                                    << 6U) 
                                                   | (0x3ffffffffeULL 
                                                      & ((QData)((IData)(
                                                                         mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x12U])) 
                                                         >> 0x1aU))))) 
                                 | (QData)((IData)(
                                                   (1U 
                                                    & (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x14U] 
                                                       >> 5U))))) 
                                >> 0x20U)));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[2U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0U] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[3U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[1U] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[4U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[2U] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[5U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[3U] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[6U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[4U] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[5U] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[7U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[5U] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[6U] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[8U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[6U] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[7U] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[9U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[7U] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[8U] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xaU] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[8U] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[9U] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xbU] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[9U] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xaU] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xcU] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xaU] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xbU] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xdU] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xbU] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xcU] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xeU] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xcU] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xdU] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0xfU] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xdU] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xeU] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x10U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xeU] 
            >> 0x15U) | (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xfU] 
                         << 0xbU));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x11U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0xfU] 
            >> 0x15U) | (0xfffff800U & (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x12U] 
                                        << 0xaU)));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x12U] 
        = (((0x7e0U & (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x10U] 
                       << 5U)) | (0x1fU & (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x12U] 
                                           >> 0x16U))) 
           | (0xfffff800U & (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x10U] 
                             << 5U)));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x13U] 
        = (((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x10U] 
             >> 0x1bU) | (0x7e0U & (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x11U] 
                                    << 5U))) | (0xfffff800U 
                                                & (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x11U] 
                                                   << 5U)));
    vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U] 
        = ((mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x11U] 
            >> 0x1bU) | (0x20U & (mem_arb__DOT__req_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in[0x12U] 
                                  << 5U)));
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((((0U != (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)) 
             & (~ (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_going_full))) 
            & (~ (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x11U] 
                  >> 0xbU))) & (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push 
        = ((((0U != (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)) 
             & (~ ((IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_going_full) 
                   >> 1U))) & (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x11U] 
                               >> 0xbU)) & (IData)(vlSelf->__PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r));
    vlSelf->__PVT__avs_adapter__DOT__req_queue_push 
        = ((2U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push)) 
           | ((((0U != (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)) 
                & (~ (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U] 
                      >> 5U))) & (IData)(vlSelf->__PVT__avs_adapter__DOT__bank_req_ready)) 
              & (~ (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x11U] 
                    >> 0xbU))));
    vlSelf->__PVT__avs_adapter__DOT__req_queue_push 
        = ((1U & (IData)(vlSelf->__PVT__avs_adapter__DOT__req_queue_push)) 
           | (0x3ffffeU & (((((0U != (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)) 
                              & (~ (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x14U] 
                                    >> 5U))) << 1U) 
                            & (IData)(vlSelf->__PVT__avs_adapter__DOT__bank_req_ready)) 
                           & (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x11U] 
                              >> 0xaU))));
    __Vcellout__avs_adapter__mem_req_ready = (1U & 
                                              ((IData)(vlSelf->__PVT__avs_adapter__DOT__bank_req_ready) 
                                               >> (1U 
                                                   & (vlSymsp->TOP__vortex_afu_shim__afu__mem_bus_if__BRA__0__KET__.__PVT__req_data[0x11U] 
                                                      >> 0xbU))));
    __PVT__mem_arb__DOT__req_ready_in = ((- (IData)((IData)(__Vcellout__avs_adapter__mem_req_ready))) 
                                         & ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in)) 
                                                   << 1U)) 
                                            | (1U & (IData)(vlSelf->__PVT__mem_arb__DOT__req_valid_in))));
    vlSelf->__PVT__cci_mem_rd_req_fire = ((IData)(vlSelf->__PVT__cci_mem_rd_req_valid) 
                                          & ((IData)(__PVT__mem_arb__DOT__req_ready_in) 
                                             >> 1U));
    vlSelf->__PVT__cci_mem_wr_req_fire = ((~ (IData)(vlSelf->__PVT__cci_rd_req_queue__DOT__genblk6__DOT__empty_r)) 
                                          & ((IData)(__PVT__mem_arb__DOT__req_ready_in) 
                                             >> 1U));
    vlSelf->__PVT__vx_mem_req_ready = (1U & ((0x3fc0100U 
                                              == (0x3ffffffU 
                                                  & ((vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x11U] 
                                                      << 0x16U) 
                                                     | (vlSymsp->TOP__vortex_afu_shim__afu__vortex.l3cache__DOT____Vcellinp__mem_req_buf__data_in[0x10U] 
                                                        >> 0xaU))))
                                              ? (~ (IData)(vlSelf->__PVT__cout_queue__DOT__genblk6__DOT__full_r))
                                              : (IData)(__PVT__mem_arb__DOT__req_ready_in)));
}
