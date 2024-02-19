// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvortex_afu_shim.h for the primary calling header

#ifndef VERILATED_VVORTEX_AFU_SHIM_VORTEX_AFU_SHIM_H_
#define VERILATED_VVORTEX_AFU_SHIM_VORTEX_AFU_SHIM_H_  // guard

#include "verilated.h"

class Vvortex_afu_shim__Syms;
class Vvortex_afu_shim_vortex_afu;


class Vvortex_afu_shim_vortex_afu_shim final : public VerilatedModule {
  public:
    // CELLS
    Vvortex_afu_shim_vortex_afu* afu;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(vcp2af_sRxPort_c0_TxAlmFull,0,0);
        VL_IN8(vcp2af_sRxPort_c1_TxAlmFull,0,0);
        VL_IN8(vcp2af_sRxPort_c0_hdr_vc_used,1,0);
        VL_IN8(vcp2af_sRxPort_c0_hdr_rsvd1,0,0);
        VL_IN8(vcp2af_sRxPort_c0_hdr_hit_miss,0,0);
        VL_IN8(vcp2af_sRxPort_c0_hdr_rsvd0,1,0);
        VL_IN8(vcp2af_sRxPort_c0_hdr_cl_num,1,0);
        VL_IN8(vcp2af_sRxPort_c0_hdr_resp_type,3,0);
        VL_IN8(vcp2af_sRxPort_c0_rspValid,0,0);
        VL_IN8(vcp2af_sRxPort_c0_mmioRdValid,0,0);
        VL_IN8(vcp2af_sRxPort_c0_mmioWrValid,0,0);
        VL_IN8(vcp2af_sRxPort_c0_ReqMmioHdr_length,1,0);
        VL_IN8(vcp2af_sRxPort_c0_ReqMmioHdr_rsvd,0,0);
        VL_IN8(vcp2af_sRxPort_c1_hdr_vc_used,1,0);
        VL_IN8(vcp2af_sRxPort_c1_hdr_rsvd1,0,0);
        VL_IN8(vcp2af_sRxPort_c1_hdr_hit_miss,0,0);
        VL_IN8(vcp2af_sRxPort_c1_hdr_format,0,0);
        VL_IN8(vcp2af_sRxPort_c1_hdr_rsvd0,0,0);
        VL_IN8(vcp2af_sRxPort_c1_hdr_cl_num,1,0);
        VL_IN8(vcp2af_sRxPort_c1_hdr_resp_type,3,0);
        VL_IN8(vcp2af_sRxPort_c1_rspValid,0,0);
        VL_OUT8(af2cp_sTxPort_c0_hdr_vc_sel,1,0);
        VL_OUT8(af2cp_sTxPort_c0_hdr_rsvd1,1,0);
        VL_OUT8(af2cp_sTxPort_c0_hdr_cl_len,1,0);
        VL_OUT8(af2cp_sTxPort_c0_hdr_req_type,3,0);
        VL_OUT8(af2cp_sTxPort_c0_hdr_rsvd0,5,0);
        VL_OUT8(af2cp_sTxPort_c0_valid,0,0);
        VL_OUT8(af2cp_sTxPort_c1_hdr_rsvd2,5,0);
        VL_OUT8(af2cp_sTxPort_c1_hdr_vc_sel,1,0);
        VL_OUT8(af2cp_sTxPort_c1_hdr_sop,0,0);
        VL_OUT8(af2cp_sTxPort_c1_hdr_rsvd1,0,0);
        VL_OUT8(af2cp_sTxPort_c1_hdr_cl_len,1,0);
        VL_OUT8(af2cp_sTxPort_c1_hdr_req_type,3,0);
        VL_OUT8(af2cp_sTxPort_c1_hdr_rsvd0,5,0);
        VL_OUT8(af2cp_sTxPort_c1_valid,0,0);
        VL_OUT8(af2cp_sTxPort_c2_mmioRdValid,0,0);
        VL_IN16(vcp2af_sRxPort_c0_hdr_mdata,15,0);
        VL_IN16(vcp2af_sRxPort_c0_ReqMmioHdr_address,15,0);
        VL_IN16(vcp2af_sRxPort_c0_ReqMmioHdr_tid,8,0);
        VL_IN16(vcp2af_sRxPort_c1_hdr_mdata,15,0);
        VL_OUT16(af2cp_sTxPort_c0_hdr_mdata,15,0);
        VL_OUT16(af2cp_sTxPort_c1_hdr_mdata,15,0);
        VL_OUT16(af2cp_sTxPort_c2_hdr_tid,8,0);
        IData/*27:0*/ __Vxrand_h27581abb__0;
        VL_INW(vcp2af_sRxPort_c0_data,511,0,16);
        VL_OUTW(af2cp_sTxPort_c1_data,511,0,16);
        VL_OUT64(af2cp_sTxPort_c0_hdr_address,41,0);
        VL_OUT64(af2cp_sTxPort_c1_hdr_address,41,0);
        VL_OUT64(af2cp_sTxPort_c2_data,63,0);
        VlWide<18>/*573:0*/ __PVT__cp2af_sRxPort;
        VL_OUTW(avs_writedata[2],511,0,16);
        VL_INW(avs_readdata[2],511,0,16);
        VL_OUT(avs_address[2],25,0);
        VL_IN8(avs_waitrequest[2],0,0);
        VL_OUT8(avs_write[2],0,0);
        VL_OUT8(avs_read[2],0,0);
        VL_OUT64(avs_byteenable[2],63,0);
        VL_OUT8(avs_burstcount[2],3,0);
        VL_IN8(avs_readdatavalid[2],0,0);
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__afu__avs_readdatavalid;
        VlUnpacked<CData/*3:0*/, 2> __Vcellout__afu__avs_burstcount;
        VlUnpacked<QData/*63:0*/, 2> __Vcellout__afu__avs_byteenable;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 2> __Vcellout__afu__avs_read;
        VlUnpacked<CData/*0:0*/, 2> __Vcellout__afu__avs_write;
        VlUnpacked<CData/*0:0*/, 2> __Vcellinp__afu__avs_waitrequest;
        VlUnpacked<IData/*25:0*/, 2> __Vcellout__afu__avs_address;
        VlUnpacked<VlWide<16>/*511:0*/, 2> __Vcellinp__afu__avs_readdata;
        VlUnpacked<VlWide<16>/*511:0*/, 2> __Vcellout__afu__avs_writedata;
    };

    // INTERNAL VARIABLES
    Vvortex_afu_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvortex_afu_shim_vortex_afu_shim(Vvortex_afu_shim__Syms* symsp, const char* name);
    ~Vvortex_afu_shim_vortex_afu_shim();
    VL_UNCOPYABLE(Vvortex_afu_shim_vortex_afu_shim);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
