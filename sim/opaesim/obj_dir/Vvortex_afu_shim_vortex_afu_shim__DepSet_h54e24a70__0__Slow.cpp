// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim__Syms.h"
#include "Vvortex_afu_shim_vortex_afu_shim.h"

VL_ATTR_COLD void Vvortex_afu_shim_vortex_afu_shim___settle__TOP__vortex_afu_shim__0(Vvortex_afu_shim_vortex_afu_shim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vvortex_afu_shim_vortex_afu_shim___settle__TOP__vortex_afu_shim__0\n"); );
    // Init
    IData/*27:0*/ __PVT__c0_RxHdr;
    VlWide<18>/*575:0*/ __Vtemp_hf7151794__0;
    // Body
    __PVT__c0_RxHdr = vlSelf->__Vxrand_h27581abb__0;
    if (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_mmioWrValid) 
         | (IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_mmioRdValid))) {
        __PVT__c0_RxHdr = (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_ReqMmioHdr_address) 
                            << 0xcU) | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_ReqMmioHdr_length) 
                                         << 0xaU) | 
                                        (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_ReqMmioHdr_rsvd) 
                                          << 9U) | (IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_ReqMmioHdr_tid))));
    } else {
        __PVT__c0_RxHdr = ((0x3fffffU & __PVT__c0_RxHdr) 
                           | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_vc_used) 
                               << 0x1aU) | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_rsvd1) 
                                             << 0x19U) 
                                            | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_hit_miss) 
                                                << 0x18U) 
                                               | ((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_rsvd0) 
                                                  << 0x16U)))));
        __PVT__c0_RxHdr = ((0xfc00000U & __PVT__c0_RxHdr) 
                           | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_cl_num) 
                               << 0x14U) | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_resp_type) 
                                             << 0x10U) 
                                            | (IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_hdr_mdata))));
    }
    vlSelf->__Vcellout__afu__avs_burstcount[0U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_burstcount
        [0U];
    vlSelf->__Vcellout__afu__avs_burstcount[1U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_burstcount
        [1U];
    vlSelf->__Vcellout__afu__avs_burstcount[0U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_burstcount
        [0U];
    vlSelf->__Vcellout__afu__avs_burstcount[1U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_burstcount
        [1U];
    vlSelf->__Vcellout__afu__avs_address[0U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_address
        [0U];
    vlSelf->__Vcellout__afu__avs_address[1U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_address
        [1U];
    vlSelf->__Vcellout__afu__avs_byteenable[0U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_byteenable
        [0U];
    vlSelf->__Vcellout__afu__avs_byteenable[1U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_byteenable
        [1U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][0U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][0U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][1U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][1U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][2U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][2U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][3U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][3U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][4U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][4U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][5U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][5U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][6U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][6U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][7U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][7U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][8U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][8U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][9U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][9U];
    vlSelf->__Vcellout__afu__avs_writedata[0U][0xaU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][0xaU];
    vlSelf->__Vcellout__afu__avs_writedata[0U][0xbU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][0xbU];
    vlSelf->__Vcellout__afu__avs_writedata[0U][0xcU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][0xcU];
    vlSelf->__Vcellout__afu__avs_writedata[0U][0xdU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][0xdU];
    vlSelf->__Vcellout__afu__avs_writedata[0U][0xeU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][0xeU];
    vlSelf->__Vcellout__afu__avs_writedata[0U][0xfU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [0U][0xfU];
    vlSelf->__Vcellout__afu__avs_writedata[1U][0U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][0U];
    vlSelf->__Vcellout__afu__avs_writedata[1U][1U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][1U];
    vlSelf->__Vcellout__afu__avs_writedata[1U][2U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][2U];
    vlSelf->__Vcellout__afu__avs_writedata[1U][3U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][3U];
    vlSelf->__Vcellout__afu__avs_writedata[1U][4U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][4U];
    vlSelf->__Vcellout__afu__avs_writedata[1U][5U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][5U];
    vlSelf->__Vcellout__afu__avs_writedata[1U][6U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][6U];
    vlSelf->__Vcellout__afu__avs_writedata[1U][7U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][7U];
    vlSelf->__Vcellout__afu__avs_writedata[1U][8U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][8U];
    vlSelf->__Vcellout__afu__avs_writedata[1U][9U] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][9U];
    vlSelf->__Vcellout__afu__avs_writedata[1U][0xaU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][0xaU];
    vlSelf->__Vcellout__afu__avs_writedata[1U][0xbU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][0xbU];
    vlSelf->__Vcellout__afu__avs_writedata[1U][0xcU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][0xcU];
    vlSelf->__Vcellout__afu__avs_writedata[1U][0xdU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][0xdU];
    vlSelf->__Vcellout__afu__avs_writedata[1U][0xeU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][0xeU];
    vlSelf->__Vcellout__afu__avs_writedata[1U][0xfU] 
        = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_writedata
        [1U][0xfU];
    vlSelf->__Vcellout__afu__avs_read[0U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_read
        [0U];
    vlSelf->__Vcellout__afu__avs_read[1U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_read
        [1U];
    vlSelf->__Vcellout__afu__avs_write[0U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_write
        [0U];
    vlSelf->__Vcellout__afu__avs_write[1U] = vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_write
        [1U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][0U] = 
        vlSelf->avs_readdata[0U][0U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][1U] = 
        vlSelf->avs_readdata[0U][1U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][2U] = 
        vlSelf->avs_readdata[0U][2U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][3U] = 
        vlSelf->avs_readdata[0U][3U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][4U] = 
        vlSelf->avs_readdata[0U][4U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][5U] = 
        vlSelf->avs_readdata[0U][5U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][6U] = 
        vlSelf->avs_readdata[0U][6U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][7U] = 
        vlSelf->avs_readdata[0U][7U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][8U] = 
        vlSelf->avs_readdata[0U][8U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][9U] = 
        vlSelf->avs_readdata[0U][9U];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][0xaU] 
        = vlSelf->avs_readdata[0U][0xaU];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][0xbU] 
        = vlSelf->avs_readdata[0U][0xbU];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][0xcU] 
        = vlSelf->avs_readdata[0U][0xcU];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][0xdU] 
        = vlSelf->avs_readdata[0U][0xdU];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][0xeU] 
        = vlSelf->avs_readdata[0U][0xeU];
    vlSelf->__Vcellinp__afu__avs_readdata[0U][0xfU] 
        = vlSelf->avs_readdata[0U][0xfU];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][0U] = 
        vlSelf->avs_readdata[1U][0U];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][1U] = 
        vlSelf->avs_readdata[1U][1U];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][2U] = 
        vlSelf->avs_readdata[1U][2U];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][3U] = 
        vlSelf->avs_readdata[1U][3U];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][4U] = 
        vlSelf->avs_readdata[1U][4U];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][5U] = 
        vlSelf->avs_readdata[1U][5U];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][6U] = 
        vlSelf->avs_readdata[1U][6U];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][7U] = 
        vlSelf->avs_readdata[1U][7U];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][8U] = 
        vlSelf->avs_readdata[1U][8U];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][9U] = 
        vlSelf->avs_readdata[1U][9U];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][0xaU] 
        = vlSelf->avs_readdata[1U][0xaU];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][0xbU] 
        = vlSelf->avs_readdata[1U][0xbU];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][0xcU] 
        = vlSelf->avs_readdata[1U][0xcU];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][0xdU] 
        = vlSelf->avs_readdata[1U][0xdU];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][0xeU] 
        = vlSelf->avs_readdata[1U][0xeU];
    vlSelf->__Vcellinp__afu__avs_readdata[1U][0xfU] 
        = vlSelf->avs_readdata[1U][0xfU];
    vlSelf->__Vcellinp__afu__avs_waitrequest[0U] = 
        vlSelf->avs_waitrequest[0U];
    vlSelf->__Vcellinp__afu__avs_waitrequest[1U] = 
        vlSelf->avs_waitrequest[1U];
    vlSelf->__Vcellinp__afu__avs_readdatavalid[0U] 
        = vlSelf->avs_readdatavalid[0U];
    vlSelf->__Vcellinp__afu__avs_readdatavalid[1U] 
        = vlSelf->avs_readdatavalid[1U];
    __Vtemp_hf7151794__0[1U] = (((0x7fffffU & (vlSymsp->TOP.vcp2af_sRxPort_c0_data[0U] 
                                               | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_rspValid) 
                                                   >> 1U) 
                                                  | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_mmioRdValid) 
                                                      >> 2U) 
                                                     | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_mmioWrValid) 
                                                         >> 3U) 
                                                        | ((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_vc_used) 
                                                           >> 5U)))))) 
                                 | ((0x7fffffU & ((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_rsvd1) 
                                                  >> 6U)) 
                                    | ((0x7fffffU & 
                                        ((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_hit_miss) 
                                         >> 7U)) | 
                                       ((0x7fffffU 
                                         & ((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_format) 
                                            >> 8U)) 
                                        | ((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_rsvd0) 
                                           >> 9U))))) 
                                | ((0x7800000U & (vlSymsp->TOP.vcp2af_sRxPort_c0_data[0U] 
                                                  | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_rspValid) 
                                                      >> 1U) 
                                                     | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_mmioRdValid) 
                                                         >> 2U) 
                                                        | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_mmioWrValid) 
                                                            >> 3U) 
                                                           | ((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_vc_used) 
                                                              >> 5U)))))) 
                                   | (0xf8000000U & 
                                      vlSymsp->TOP.vcp2af_sRxPort_c0_data[0U])));
    __Vtemp_hf7151794__0[0x11U] = ((0x7fffffU & __PVT__c0_RxHdr) 
                                   | ((0x7800000U & __PVT__c0_RxHdr) 
                                      | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_TxAlmFull) 
                                          << 0x1dU) 
                                         | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_TxAlmFull) 
                                             << 0x1cU) 
                                            | (0xf8000000U 
                                               & __PVT__c0_RxHdr)))));
    vlSelf->__PVT__cp2af_sRxPort[0U] = (((((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_rspValid) 
                                           << 0x1fU) 
                                          | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_mmioRdValid) 
                                              << 0x1eU) 
                                             | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c0_mmioWrValid) 
                                                 << 0x1dU) 
                                                | ((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_vc_used) 
                                                   << 0x1bU)))) 
                                         | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_rsvd1) 
                                             << 0x1aU) 
                                            | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_hit_miss) 
                                                << 0x19U) 
                                               | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_format) 
                                                   << 0x18U) 
                                                  | ((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_rsvd0) 
                                                     << 0x17U))))) 
                                        | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_cl_num) 
                                            << 0x15U) 
                                           | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_resp_type) 
                                               << 0x11U) 
                                              | (((IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_hdr_mdata) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.vcp2af_sRxPort_c1_rspValid)))));
    vlSelf->__PVT__cp2af_sRxPort[1U] = __Vtemp_hf7151794__0[1U];
    vlSelf->__PVT__cp2af_sRxPort[2U] = ((0x7fffffU 
                                         & vlSymsp->TOP.vcp2af_sRxPort_c0_data[1U]) 
                                        | ((0x7800000U 
                                            & vlSymsp->TOP.vcp2af_sRxPort_c0_data[1U]) 
                                           | (0xf8000000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[1U])));
    vlSelf->__PVT__cp2af_sRxPort[3U] = ((0x7fffffU 
                                         & vlSymsp->TOP.vcp2af_sRxPort_c0_data[2U]) 
                                        | ((0x7800000U 
                                            & vlSymsp->TOP.vcp2af_sRxPort_c0_data[2U]) 
                                           | (0xf8000000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[2U])));
    vlSelf->__PVT__cp2af_sRxPort[4U] = ((0x7fffffU 
                                         & vlSymsp->TOP.vcp2af_sRxPort_c0_data[3U]) 
                                        | ((0x7800000U 
                                            & vlSymsp->TOP.vcp2af_sRxPort_c0_data[3U]) 
                                           | (0xf8000000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[3U])));
    vlSelf->__PVT__cp2af_sRxPort[5U] = ((0x7fffffU 
                                         & vlSymsp->TOP.vcp2af_sRxPort_c0_data[4U]) 
                                        | ((0x7800000U 
                                            & vlSymsp->TOP.vcp2af_sRxPort_c0_data[4U]) 
                                           | (0xf8000000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[4U])));
    vlSelf->__PVT__cp2af_sRxPort[6U] = ((0x7fffffU 
                                         & vlSymsp->TOP.vcp2af_sRxPort_c0_data[5U]) 
                                        | ((0x7800000U 
                                            & vlSymsp->TOP.vcp2af_sRxPort_c0_data[5U]) 
                                           | (0xf8000000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[5U])));
    vlSelf->__PVT__cp2af_sRxPort[7U] = ((0x7fffffU 
                                         & vlSymsp->TOP.vcp2af_sRxPort_c0_data[6U]) 
                                        | ((0x7800000U 
                                            & vlSymsp->TOP.vcp2af_sRxPort_c0_data[6U]) 
                                           | (0xf8000000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[6U])));
    vlSelf->__PVT__cp2af_sRxPort[8U] = ((0x7fffffU 
                                         & vlSymsp->TOP.vcp2af_sRxPort_c0_data[7U]) 
                                        | ((0x7800000U 
                                            & vlSymsp->TOP.vcp2af_sRxPort_c0_data[7U]) 
                                           | (0xf8000000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[7U])));
    vlSelf->__PVT__cp2af_sRxPort[9U] = ((0x7fffffU 
                                         & vlSymsp->TOP.vcp2af_sRxPort_c0_data[8U]) 
                                        | ((0x7800000U 
                                            & vlSymsp->TOP.vcp2af_sRxPort_c0_data[8U]) 
                                           | (0xf8000000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[8U])));
    vlSelf->__PVT__cp2af_sRxPort[0xaU] = ((0x7fffffU 
                                           & vlSymsp->TOP.vcp2af_sRxPort_c0_data[9U]) 
                                          | ((0x7800000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[9U]) 
                                             | (0xf8000000U 
                                                & vlSymsp->TOP.vcp2af_sRxPort_c0_data[9U])));
    vlSelf->__PVT__cp2af_sRxPort[0xbU] = ((0x7fffffU 
                                           & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xaU]) 
                                          | ((0x7800000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xaU]) 
                                             | (0xf8000000U 
                                                & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xaU])));
    vlSelf->__PVT__cp2af_sRxPort[0xcU] = ((0x7fffffU 
                                           & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xbU]) 
                                          | ((0x7800000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xbU]) 
                                             | (0xf8000000U 
                                                & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xbU])));
    vlSelf->__PVT__cp2af_sRxPort[0xdU] = ((0x7fffffU 
                                           & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xcU]) 
                                          | ((0x7800000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xcU]) 
                                             | (0xf8000000U 
                                                & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xcU])));
    vlSelf->__PVT__cp2af_sRxPort[0xeU] = ((0x7fffffU 
                                           & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xdU]) 
                                          | ((0x7800000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xdU]) 
                                             | (0xf8000000U 
                                                & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xdU])));
    vlSelf->__PVT__cp2af_sRxPort[0xfU] = ((0x7fffffU 
                                           & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xeU]) 
                                          | ((0x7800000U 
                                              & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xeU]) 
                                             | (0xf8000000U 
                                                & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xeU])));
    vlSelf->__PVT__cp2af_sRxPort[0x10U] = ((0x7fffffU 
                                            & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xfU]) 
                                           | ((0x7800000U 
                                               & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xfU]) 
                                              | (0xf8000000U 
                                                 & vlSymsp->TOP.vcp2af_sRxPort_c0_data[0xfU])));
    vlSelf->__PVT__cp2af_sRxPort[0x11U] = __Vtemp_hf7151794__0[0x11U];
    vlSelf->avs_burstcount[0U] = vlSelf->__Vcellout__afu__avs_burstcount
        [0U];
    vlSelf->avs_burstcount[1U] = vlSelf->__Vcellout__afu__avs_burstcount
        [1U];
    vlSelf->avs_burstcount[0U] = vlSelf->__Vcellout__afu__avs_burstcount
        [0U];
    vlSelf->avs_burstcount[1U] = vlSelf->__Vcellout__afu__avs_burstcount
        [1U];
    vlSelf->avs_address[0U] = vlSelf->__Vcellout__afu__avs_address
        [0U];
    vlSelf->avs_address[1U] = vlSelf->__Vcellout__afu__avs_address
        [1U];
    vlSelf->avs_byteenable[0U] = vlSelf->__Vcellout__afu__avs_byteenable
        [0U];
    vlSelf->avs_byteenable[1U] = vlSelf->__Vcellout__afu__avs_byteenable
        [1U];
    vlSelf->avs_writedata[0U][0U] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][0U];
    vlSelf->avs_writedata[0U][1U] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][1U];
    vlSelf->avs_writedata[0U][2U] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][2U];
    vlSelf->avs_writedata[0U][3U] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][3U];
    vlSelf->avs_writedata[0U][4U] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][4U];
    vlSelf->avs_writedata[0U][5U] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][5U];
    vlSelf->avs_writedata[0U][6U] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][6U];
    vlSelf->avs_writedata[0U][7U] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][7U];
    vlSelf->avs_writedata[0U][8U] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][8U];
    vlSelf->avs_writedata[0U][9U] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][9U];
    vlSelf->avs_writedata[0U][0xaU] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][0xaU];
    vlSelf->avs_writedata[0U][0xbU] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][0xbU];
    vlSelf->avs_writedata[0U][0xcU] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][0xcU];
    vlSelf->avs_writedata[0U][0xdU] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][0xdU];
    vlSelf->avs_writedata[0U][0xeU] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][0xeU];
    vlSelf->avs_writedata[0U][0xfU] = vlSelf->__Vcellout__afu__avs_writedata
        [0U][0xfU];
    vlSelf->avs_writedata[1U][0U] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][0U];
    vlSelf->avs_writedata[1U][1U] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][1U];
    vlSelf->avs_writedata[1U][2U] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][2U];
    vlSelf->avs_writedata[1U][3U] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][3U];
    vlSelf->avs_writedata[1U][4U] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][4U];
    vlSelf->avs_writedata[1U][5U] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][5U];
    vlSelf->avs_writedata[1U][6U] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][6U];
    vlSelf->avs_writedata[1U][7U] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][7U];
    vlSelf->avs_writedata[1U][8U] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][8U];
    vlSelf->avs_writedata[1U][9U] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][9U];
    vlSelf->avs_writedata[1U][0xaU] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][0xaU];
    vlSelf->avs_writedata[1U][0xbU] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][0xbU];
    vlSelf->avs_writedata[1U][0xcU] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][0xcU];
    vlSelf->avs_writedata[1U][0xdU] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][0xdU];
    vlSelf->avs_writedata[1U][0xeU] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][0xeU];
    vlSelf->avs_writedata[1U][0xfU] = vlSelf->__Vcellout__afu__avs_writedata
        [1U][0xfU];
    vlSelf->avs_read[0U] = vlSelf->__Vcellout__afu__avs_read
        [0U];
    vlSelf->avs_read[1U] = vlSelf->__Vcellout__afu__avs_read
        [1U];
    vlSelf->avs_write[0U] = vlSelf->__Vcellout__afu__avs_write
        [0U];
    vlSelf->avs_write[1U] = vlSelf->__Vcellout__afu__avs_write
        [1U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][0U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][0U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][1U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][1U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][2U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][2U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][3U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][3U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][4U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][4U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][5U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][5U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][6U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][6U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][7U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][7U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][8U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][8U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][9U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][9U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][0xaU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][0xaU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][0xbU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][0xbU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][0xcU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][0xcU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][0xdU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][0xdU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][0xeU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][0xeU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[0U][0xfU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[0U][0xfU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][0U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][0U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][1U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][1U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][2U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][2U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][3U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][3U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][4U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][4U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][5U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][5U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][6U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][6U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][7U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][7U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][8U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][8U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][9U] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][9U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][0xaU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][0xaU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][0xbU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][0xbU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][0xcU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][0xcU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][0xdU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][0xdU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][0xeU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][0xeU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdata[1U][0xfU] 
        = vlSelf->__Vcellinp__afu__avs_readdata[1U][0xfU];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_waitrequest[0U] 
        = vlSelf->__Vcellinp__afu__avs_waitrequest[0U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_waitrequest[1U] 
        = vlSelf->__Vcellinp__afu__avs_waitrequest[1U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdatavalid[0U] 
        = vlSelf->__Vcellinp__afu__avs_readdatavalid
        [0U];
    vlSymsp->TOP__vortex_afu_shim__afu.__PVT__avs_readdatavalid[1U] 
        = vlSelf->__Vcellinp__afu__avs_readdatavalid
        [1U];
}
