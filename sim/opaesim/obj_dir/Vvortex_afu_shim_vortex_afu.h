// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvortex_afu_shim.h for the primary calling header

#ifndef VERILATED_VVORTEX_AFU_SHIM_VORTEX_AFU_H_
#define VERILATED_VVORTEX_AFU_SHIM_VORTEX_AFU_H_  // guard

#include "verilated.h"

class Vvortex_afu_shim__Syms;
class Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a;
class Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2b;
class Vvortex_afu_shim_Vortex;


class Vvortex_afu_shim_vortex_afu final : public VerilatedModule {
  public:
    // CELLS
    Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a* __PVT__cci_vx_mem_bus_if__BRA__1__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a* __PVT__cci_vx_mem_bus_if__BRA__0__KET__;
    Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2b* __PVT__mem_bus_if__BRA__0__KET__;
    Vvortex_afu_shim_Vortex* vortex;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        CData/*2:0*/ __PVT__state;
        CData/*0:0*/ __PVT__vx_mem_req_ready;
        CData/*0:0*/ __PVT__cout_q_full;
        CData/*0:0*/ __PVT__cout_q_empty;
        CData/*0:0*/ __PVT__cmd_mem_wr_done;
        CData/*0:0*/ __PVT__vx_busy_wait;
        CData/*0:0*/ __PVT__vx_running;
        CData/*3:0*/ __PVT__vx_reset_ctr;
        CData/*2:0*/ __PVT__cmd_type;
        CData/*0:0*/ __PVT__cci_mem_rd_req_valid;
        CData/*0:0*/ __PVT__cci_rd_req_fire;
        CData/*0:0*/ __PVT__cci_rd_req_valid;
        CData/*0:0*/ __PVT__cci_rd_req_wait;
        CData/*2:0*/ __PVT__cci_rd_rsp_ctr;
        CData/*0:0*/ __PVT__cci_rdq_empty;
        CData/*0:0*/ __PVT__cci_mem_wr_req_fire;
        CData/*0:0*/ __PVT__cci_rd_rsp_fire;
        CData/*0:0*/ __PVT__cci_pending_reads_full;
        CData/*0:0*/ __PVT__cci_mem_rd_req_done;
        CData/*0:0*/ __PVT__cci_wr_req_fire;
        CData/*0:0*/ __PVT__cci_wr_req_done;
        CData/*0:0*/ __PVT__cci_mem_rd_req_fire;
        CData/*0:0*/ __PVT__cci_mem_rd_rsp_fire;
        CData/*0:0*/ __PVT__cci_wr_rsp_fire;
        CData/*0:0*/ __PVT__cci_pending_writes_empty;
        CData/*0:0*/ __PVT__cci_pending_writes_full;
        CData/*0:0*/ __Vcellinp__vortex__reset;
        CData/*0:0*/ __PVT__cout_q_push;
        CData/*0:0*/ __PVT__cout_q_pop;
        CData/*0:0*/ __PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r;
        CData/*0:0*/ __PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r;
        CData/*0:0*/ __PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r;
        CData/*0:0*/ __PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push;
        CData/*0:0*/ __PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop;
        CData/*1:0*/ __PVT__mem_arb__DOT__req_valid_in;
        CData/*1:0*/ __PVT__mem_arb__DOT__rsp_valid_out;
        CData/*1:0*/ __PVT__mem_arb__DOT__rsp_ready_out;
        CData/*0:0*/ __PVT__mem_arb__DOT__rsp_ready_in;
        CData/*0:0*/ __PVT_____05Favs_adapter_reset__DOT__genblk1__DOT__reset_r;
        CData/*1:0*/ __PVT__avs_adapter__DOT__req_queue_push;
        CData/*1:0*/ __PVT__avs_adapter__DOT__req_queue_pop;
        CData/*1:0*/ __PVT__avs_adapter__DOT__req_queue_going_full;
        CData/*1:0*/ __PVT__avs_adapter__DOT__bank_req_ready;
        CData/*1:0*/ __PVT__avs_adapter__DOT__rsp_arb_valid_in;
        CData/*1:0*/ __PVT__avs_adapter__DOT__rsp_queue_empty;
        CData/*0:0*/ avs_adapter__DOT____Vcellout__genblk3__BRA__0__KET____DOT__pending_size__full;
        CData/*0:0*/ avs_adapter__DOT____Vcellout__genblk3__BRA__1__KET____DOT__pending_size__full;
        CData/*0:0*/ avs_adapter__DOT____Vcellout__genblk6__BRA__0__KET____DOT__rd_rsp_queue__empty;
        CData/*0:0*/ avs_adapter__DOT____Vcellout__genblk6__BRA__1__KET____DOT__rd_rsp_queue__empty;
        CData/*0:0*/ __PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_index_r;
        CData/*1:0*/ __PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__grant_onehot_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__rsp_arb__DOT__genblk1__DOT__genblk1__DOT__arbiter__DOT__genblk1__DOT__rr_arbiter__DOT__genblk1__DOT__state;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__empty;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__empty_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__full_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__pending_size__DOT__genblk3__DOT__used_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__empty;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__full;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_n;
    };
    struct {
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__empty;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__empty_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__full_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__pending_size__DOT__genblk3__DOT__used_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__empty;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__full;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__empty_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__full_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__used_n;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__valid_out_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__ready_in_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__rd_ptr_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__push;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__pop;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__full;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_n;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__full;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__empty_r;
        CData/*0:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__full_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__used_n;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r;
        CData/*4:0*/ __PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
        CData/*0:0*/ __PVT__cci_rd_pending_size__DOT__empty;
        CData/*0:0*/ __PVT__cci_rd_pending_size__DOT__empty_r;
        CData/*0:0*/ __PVT__cci_rd_pending_size__DOT__full_r;
        CData/*3:0*/ __PVT__cci_rd_pending_size__DOT__genblk3__DOT__used_r;
        CData/*0:0*/ __PVT_____05Fcci_rdq_reset__DOT__genblk1__DOT__reset_r;
        CData/*0:0*/ __PVT__cci_rd_req_queue__DOT__full;
        CData/*0:0*/ __PVT__cci_rd_req_queue__DOT__genblk6__DOT__empty_r;
        CData/*0:0*/ __PVT__cci_rd_req_queue__DOT__genblk6__DOT__full_r;
        CData/*3:0*/ __PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_r;
        CData/*3:0*/ __PVT__cci_rd_req_queue__DOT__genblk6__DOT__used_n;
        CData/*3:0*/ __PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r;
        CData/*3:0*/ __PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
        CData/*0:0*/ __PVT__cci_wr_pending_size__DOT__empty_r;
        CData/*0:0*/ __PVT__cci_wr_pending_size__DOT__full_r;
        CData/*7:0*/ __PVT__cci_wr_pending_size__DOT__genblk3__DOT__used_r;
        CData/*0:0*/ __PVT__cout_queue__DOT__genblk6__DOT__empty_r;
        CData/*0:0*/ __PVT__cout_queue__DOT__genblk6__DOT__full_r;
        CData/*5:0*/ __PVT__cout_queue__DOT__genblk6__DOT__used_r;
        CData/*5:0*/ __PVT__cout_queue__DOT__genblk6__DOT__used_n;
        CData/*5:0*/ __PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__rd_ptr_r;
        CData/*5:0*/ __PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__wr_ptr_r;
        VlWide<16>/*511:0*/ __PVT__cci_wr_req_data;
        VlWide<17>/*521:0*/ vx_mem_adapter__DOT____Vcellout__rsp_in_buf__data_out;
        VlWide<17>/*521:0*/ vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h67b4ff2f__0;
        VlWide<33>/*1043:0*/ __PVT__vx_mem_adapter__DOT__rsp_in_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg;
        VlWide<41>/*1289:0*/ __PVT__mem_arb__DOT__req_data_in;
    };
    struct {
        VlWide<21>/*644:0*/ mem_arb__DOT__req_arb__DOT____Vxrand_hc80de9c2__0;
        VlWide<18>/*554:0*/ avs_adapter__DOT__rsp_arb__DOT____Vxrand_h4ac1898a__0;
        VlWide<18>/*555:0*/ avs_adapter__DOT__rsp_arb__DOT____Vcellinp__genblk1__DOT__genblk1__DOT__out_buf__data_in;
        VlWide<19>/*601:0*/ avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0;
        VlWide<38>/*1203:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__0__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg;
        VlWide<19>/*601:0*/ avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT____Vxrand_h50be8b14__0;
        VlWide<38>/*1203:0*/ __PVT__avs_adapter__DOT__genblk4__BRA__1__KET____DOT__req_out_buf__DOT__genblk1__DOT__skid_buffer__DOT__genblk2__DOT__shift_reg;
        VL_INW(__PVT__cp2af_sRxPort,573,0,18);
        VL_OUTW(__PVT__af2cp_sTxPort,741,0,24);
        VlWide<6>/*191:0*/ __PVT__cmd_args;
        VlWide<3>/*73:0*/ __PVT__mmio_tx;
        QData/*41:0*/ __PVT__cci_mem_wr_req_ctr;
        QData/*41:0*/ __PVT__cci_mem_wr_req_addr_base;
        QData/*41:0*/ __PVT__cci_rd_req_addr;
        QData/*41:0*/ __PVT__cci_rd_req_ctr;
        QData/*41:0*/ __PVT__cci_mem_rd_req_ctr;
        QData/*41:0*/ __PVT__cci_mem_rd_req_addr;
        QData/*41:0*/ __PVT__cci_wr_req_ctr;
        QData/*41:0*/ __PVT__cci_wr_req_addr;
        VlWide<12>/*383:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__addr;
        VlWide<14>/*447:0*/ __PVT__cout_tid_enc__DOT__genblk1__DOT__v;
        VL_OUTW(__PVT__avs_writedata[2],511,0,16);
        VL_INW(__PVT__avs_readdata[2],511,0,16);
        VL_OUT(__PVT__avs_address[2],25,0);
        VL_IN8(__PVT__avs_waitrequest[2],0,0);
        VL_OUT8(__PVT__avs_write[2],0,0);
        VL_OUT8(__PVT__avs_read[2],0,0);
        VL_OUT64(__PVT__avs_byteenable[2],63,0);
        VL_OUT8(__PVT__avs_burstcount[2],3,0);
        VL_IN8(__PVT__avs_readdatavalid[2],0,0);
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__avs_adapter__avs_readdatavalid;
        VlUnpacked<CData/*3:0*/, 2> __Vcellout__avs_adapter__avs_burstcount;
        VlUnpacked<QData/*63:0*/, 2> __Vcellout__avs_adapter__avs_byteenable;
        VlUnpacked<CData/*0:0*/, 2> __Vcellout__avs_adapter__avs_read;
        VlUnpacked<CData/*0:0*/, 2> __Vcellout__avs_adapter__avs_write;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__avs_adapter__avs_waitrequest;
        VlUnpacked<IData/*25:0*/, 2> __Vcellout__avs_adapter__avs_address;
        VlUnpacked<VlWide<16>/*511:0*/, 2> __Vcellinp__avs_adapter__avs_readdata;
        VlUnpacked<VlWide<16>/*511:0*/, 2> __Vcellout__avs_adapter__avs_writedata;
        VlUnpacked<QData/*42:0*/, 32> __PVT__avs_adapter__DOT__genblk3__BRA__0__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram;
        VlUnpacked<QData/*42:0*/, 32> __PVT__avs_adapter__DOT__genblk3__BRA__1__KET____DOT__rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram;
        VlUnpacked<VlWide<16>/*511:0*/, 32> __PVT__avs_adapter__DOT__genblk6__BRA__0__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram;
        VlUnpacked<VlWide<16>/*511:0*/, 32> __PVT__avs_adapter__DOT__genblk6__BRA__1__KET____DOT__rd_rsp_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram;
        VlUnpacked<VlWide<18>/*553:0*/, 16> __PVT__cci_rd_req_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram;
        VlUnpacked<SData/*13:0*/, 64> __PVT__cout_queue__DOT__genblk6__DOT__genblk1__DOT__genblk1__DOT__dp_ram__DOT__ram;
    };

    // INTERNAL VARIABLES
    Vvortex_afu_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvortex_afu_shim_vortex_afu(Vvortex_afu_shim__Syms* symsp, const char* name);
    ~Vvortex_afu_shim_vortex_afu();
    VL_UNCOPYABLE(Vvortex_afu_shim_vortex_afu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
