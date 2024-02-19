// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim_vortex_afu_shim.h"

VL_ATTR_COLD void Vvortex_afu_shim_vortex_afu_shim___initial__TOP__vortex_afu_shim__0(Vvortex_afu_shim_vortex_afu_shim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vvortex_afu_shim_vortex_afu_shim___initial__TOP__vortex_afu_shim__0\n"); );
    // Body
    vlSelf->__Vxrand_h27581abb__0 = (0xfffffffU & VL_RAND_RESET_I(28));
}

VL_ATTR_COLD void Vvortex_afu_shim_vortex_afu_shim___ctor_var_reset(Vvortex_afu_shim_vortex_afu_shim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vvortex_afu_shim_vortex_afu_shim___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vxrand_h27581abb__0 = VL_RAND_RESET_I(28);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c0_TxAlmFull = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c1_TxAlmFull = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c0_hdr_vc_used = VL_RAND_RESET_I(2);
    vlSelf->vcp2af_sRxPort_c0_hdr_rsvd1 = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c0_hdr_hit_miss = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c0_hdr_rsvd0 = VL_RAND_RESET_I(2);
    vlSelf->vcp2af_sRxPort_c0_hdr_cl_num = VL_RAND_RESET_I(2);
    vlSelf->vcp2af_sRxPort_c0_hdr_resp_type = VL_RAND_RESET_I(4);
    vlSelf->vcp2af_sRxPort_c0_hdr_mdata = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(512, vlSelf->vcp2af_sRxPort_c0_data);
    vlSelf->vcp2af_sRxPort_c0_rspValid = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c0_mmioRdValid = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c0_mmioWrValid = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c0_ReqMmioHdr_address = VL_RAND_RESET_I(16);
    vlSelf->vcp2af_sRxPort_c0_ReqMmioHdr_length = VL_RAND_RESET_I(2);
    vlSelf->vcp2af_sRxPort_c0_ReqMmioHdr_rsvd = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c0_ReqMmioHdr_tid = VL_RAND_RESET_I(9);
    vlSelf->vcp2af_sRxPort_c1_hdr_vc_used = VL_RAND_RESET_I(2);
    vlSelf->vcp2af_sRxPort_c1_hdr_rsvd1 = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c1_hdr_hit_miss = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c1_hdr_format = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c1_hdr_rsvd0 = VL_RAND_RESET_I(1);
    vlSelf->vcp2af_sRxPort_c1_hdr_cl_num = VL_RAND_RESET_I(2);
    vlSelf->vcp2af_sRxPort_c1_hdr_resp_type = VL_RAND_RESET_I(4);
    vlSelf->vcp2af_sRxPort_c1_hdr_mdata = VL_RAND_RESET_I(16);
    vlSelf->vcp2af_sRxPort_c1_rspValid = VL_RAND_RESET_I(1);
    vlSelf->af2cp_sTxPort_c0_hdr_vc_sel = VL_RAND_RESET_I(2);
    vlSelf->af2cp_sTxPort_c0_hdr_rsvd1 = VL_RAND_RESET_I(2);
    vlSelf->af2cp_sTxPort_c0_hdr_cl_len = VL_RAND_RESET_I(2);
    vlSelf->af2cp_sTxPort_c0_hdr_req_type = VL_RAND_RESET_I(4);
    vlSelf->af2cp_sTxPort_c0_hdr_rsvd0 = VL_RAND_RESET_I(6);
    vlSelf->af2cp_sTxPort_c0_hdr_address = VL_RAND_RESET_Q(42);
    vlSelf->af2cp_sTxPort_c0_hdr_mdata = VL_RAND_RESET_I(16);
    vlSelf->af2cp_sTxPort_c0_valid = VL_RAND_RESET_I(1);
    vlSelf->af2cp_sTxPort_c1_hdr_rsvd2 = VL_RAND_RESET_I(6);
    vlSelf->af2cp_sTxPort_c1_hdr_vc_sel = VL_RAND_RESET_I(2);
    vlSelf->af2cp_sTxPort_c1_hdr_sop = VL_RAND_RESET_I(1);
    vlSelf->af2cp_sTxPort_c1_hdr_rsvd1 = VL_RAND_RESET_I(1);
    vlSelf->af2cp_sTxPort_c1_hdr_cl_len = VL_RAND_RESET_I(2);
    vlSelf->af2cp_sTxPort_c1_hdr_req_type = VL_RAND_RESET_I(4);
    vlSelf->af2cp_sTxPort_c1_hdr_rsvd0 = VL_RAND_RESET_I(6);
    vlSelf->af2cp_sTxPort_c1_hdr_address = VL_RAND_RESET_Q(42);
    vlSelf->af2cp_sTxPort_c1_hdr_mdata = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(512, vlSelf->af2cp_sTxPort_c1_data);
    vlSelf->af2cp_sTxPort_c1_valid = VL_RAND_RESET_I(1);
    vlSelf->af2cp_sTxPort_c2_hdr_tid = VL_RAND_RESET_I(9);
    vlSelf->af2cp_sTxPort_c2_mmioRdValid = VL_RAND_RESET_I(1);
    vlSelf->af2cp_sTxPort_c2_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->avs_writedata[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->avs_readdata[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->avs_address[__Vi0] = VL_RAND_RESET_I(26);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->avs_waitrequest[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->avs_write[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->avs_read[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->avs_byteenable[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->avs_burstcount[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->avs_readdatavalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(574, vlSelf->__PVT__cp2af_sRxPort);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellinp__afu__avs_readdatavalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellout__afu__avs_burstcount[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellout__afu__avs_byteenable[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellout__afu__avs_read[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellout__afu__avs_write[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellinp__afu__avs_waitrequest[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vcellout__afu__avs_address[__Vi0] = VL_RAND_RESET_I(26);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__Vcellinp__afu__avs_readdata[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->__Vcellout__afu__avs_writedata[__Vi0]);
    }
}
