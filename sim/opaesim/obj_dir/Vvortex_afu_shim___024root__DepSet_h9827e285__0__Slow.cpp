// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim__Syms.h"
#include "Vvortex_afu_shim___024root.h"

VL_ATTR_COLD void Vvortex_afu_shim___024root___settle__TOP__0(Vvortex_afu_shim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvortex_afu_shim___024root___settle__TOP__0\n"); );
    // Body
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][0U] 
        = vlSelf->avs_readdata[0U][0U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][1U] 
        = vlSelf->avs_readdata[0U][1U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][2U] 
        = vlSelf->avs_readdata[0U][2U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][3U] 
        = vlSelf->avs_readdata[0U][3U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][4U] 
        = vlSelf->avs_readdata[0U][4U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][5U] 
        = vlSelf->avs_readdata[0U][5U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][6U] 
        = vlSelf->avs_readdata[0U][6U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][7U] 
        = vlSelf->avs_readdata[0U][7U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][8U] 
        = vlSelf->avs_readdata[0U][8U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][9U] 
        = vlSelf->avs_readdata[0U][9U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][0xaU] 
        = vlSelf->avs_readdata[0U][0xaU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][0xbU] 
        = vlSelf->avs_readdata[0U][0xbU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][0xcU] 
        = vlSelf->avs_readdata[0U][0xcU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][0xdU] 
        = vlSelf->avs_readdata[0U][0xdU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][0xeU] 
        = vlSelf->avs_readdata[0U][0xeU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[0U][0xfU] 
        = vlSelf->avs_readdata[0U][0xfU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][0U] 
        = vlSelf->avs_readdata[1U][0U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][1U] 
        = vlSelf->avs_readdata[1U][1U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][2U] 
        = vlSelf->avs_readdata[1U][2U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][3U] 
        = vlSelf->avs_readdata[1U][3U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][4U] 
        = vlSelf->avs_readdata[1U][4U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][5U] 
        = vlSelf->avs_readdata[1U][5U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][6U] 
        = vlSelf->avs_readdata[1U][6U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][7U] 
        = vlSelf->avs_readdata[1U][7U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][8U] 
        = vlSelf->avs_readdata[1U][8U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][9U] 
        = vlSelf->avs_readdata[1U][9U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][0xaU] 
        = vlSelf->avs_readdata[1U][0xaU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][0xbU] 
        = vlSelf->avs_readdata[1U][0xbU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][0xcU] 
        = vlSelf->avs_readdata[1U][0xcU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][0xdU] 
        = vlSelf->avs_readdata[1U][0xdU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][0xeU] 
        = vlSelf->avs_readdata[1U][0xeU];
    vlSymsp->TOP__vortex_afu_shim.avs_readdata[1U][0xfU] 
        = vlSelf->avs_readdata[1U][0xfU];
    vlSymsp->TOP__vortex_afu_shim.avs_waitrequest[0U] 
        = vlSelf->avs_waitrequest[0U];
    vlSymsp->TOP__vortex_afu_shim.avs_waitrequest[1U] 
        = vlSelf->avs_waitrequest[1U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdatavalid[0U] 
        = vlSelf->avs_readdatavalid[0U];
    vlSymsp->TOP__vortex_afu_shim.avs_readdatavalid[1U] 
        = vlSelf->avs_readdatavalid[1U];
    vlSelf->af2cp_sTxPort_c2_data = (((QData)((IData)(
                                                      vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0U])));
    vlSelf->af2cp_sTxPort_c2_mmioRdValid = (1U & vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[2U]);
    vlSelf->af2cp_sTxPort_c2_hdr_tid = (0x1ffU & (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[2U] 
                                                  >> 1U));
    vlSelf->af2cp_sTxPort_c1_valid = (1U & (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[2U] 
                                            >> 0xaU));
    vlSelf->af2cp_sTxPort_c1_data[0U] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[3U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[2U] 
                                            >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[1U] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[4U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[3U] 
                                            >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[2U] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[5U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[4U] 
                                            >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[3U] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[6U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[5U] 
                                            >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[4U] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[7U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[6U] 
                                            >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[5U] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[8U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[7U] 
                                            >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[6U] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[9U] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[8U] 
                                            >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[7U] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xaU] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[9U] 
                                            >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[8U] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xbU] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xaU] 
                                            >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[9U] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xcU] 
                                          << 0x15U) 
                                         | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xbU] 
                                            >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[0xaU] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xdU] 
                                            << 0x15U) 
                                           | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xcU] 
                                              >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[0xbU] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xeU] 
                                            << 0x15U) 
                                           | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xdU] 
                                              >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[0xcU] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xfU] 
                                            << 0x15U) 
                                           | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xeU] 
                                              >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[0xdU] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x10U] 
                                            << 0x15U) 
                                           | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0xfU] 
                                              >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[0xeU] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x11U] 
                                            << 0x15U) 
                                           | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x10U] 
                                              >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_data[0xfU] = ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x12U] 
                                            << 0x15U) 
                                           | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x11U] 
                                              >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_hdr_mdata = (0xffffU & 
                                          (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x12U] 
                                           >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_hdr_address = (0x3ffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x14U])) 
                                                << 0x25U) 
                                               | (((QData)((IData)(
                                                                   vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x13U])) 
                                                   << 5U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x12U])) 
                                                     >> 0x1bU))));
    vlSelf->af2cp_sTxPort_c1_hdr_rsvd0 = (0x3fU & (
                                                   vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x14U] 
                                                   >> 5U));
    vlSelf->af2cp_sTxPort_c1_hdr_req_type = (0xfU & 
                                             (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x14U] 
                                              >> 0xbU));
    vlSelf->af2cp_sTxPort_c1_hdr_cl_len = (3U & (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x14U] 
                                                 >> 0xfU));
    vlSelf->af2cp_sTxPort_c1_hdr_rsvd1 = (1U & (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x14U] 
                                                >> 0x11U));
    vlSelf->af2cp_sTxPort_c1_hdr_sop = (1U & (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x14U] 
                                              >> 0x12U));
    vlSelf->af2cp_sTxPort_c1_hdr_vc_sel = (3U & (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x14U] 
                                                 >> 0x13U));
    vlSelf->af2cp_sTxPort_c1_hdr_rsvd2 = (0x3fU & (
                                                   vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x14U] 
                                                   >> 0x15U));
    vlSelf->af2cp_sTxPort_c0_valid = (1U & (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x14U] 
                                            >> 0x1bU));
    vlSelf->af2cp_sTxPort_c0_hdr_mdata = (0xffffU & 
                                          ((vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x15U] 
                                            << 4U) 
                                           | (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x14U] 
                                              >> 0x1cU)));
    vlSelf->af2cp_sTxPort_c0_hdr_address = (0x3ffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x16U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x15U])) 
                                                  >> 0xcU)));
    vlSelf->af2cp_sTxPort_c0_hdr_rsvd0 = (0x3fU & (
                                                   vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x16U] 
                                                   >> 0x16U));
    vlSelf->af2cp_sTxPort_c0_hdr_req_type = (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x16U] 
                                             >> 0x1cU);
    vlSelf->af2cp_sTxPort_c0_hdr_cl_len = (3U & vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x17U]);
    vlSelf->af2cp_sTxPort_c0_hdr_rsvd1 = (3U & (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x17U] 
                                                >> 2U));
    vlSelf->af2cp_sTxPort_c0_hdr_vc_sel = (3U & (vlSymsp->TOP__vortex_afu_shim__afu.__PVT__af2cp_sTxPort[0x17U] 
                                                 >> 4U));
}

VL_ATTR_COLD void Vvortex_afu_shim___024root___settle__TOP__1(Vvortex_afu_shim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvortex_afu_shim___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->avs_burstcount[0U] = vlSymsp->TOP__vortex_afu_shim.avs_burstcount
        [0U];
    vlSelf->avs_burstcount[1U] = vlSymsp->TOP__vortex_afu_shim.avs_burstcount
        [1U];
    vlSelf->avs_burstcount[0U] = vlSymsp->TOP__vortex_afu_shim.avs_burstcount
        [0U];
    vlSelf->avs_burstcount[1U] = vlSymsp->TOP__vortex_afu_shim.avs_burstcount
        [1U];
    vlSelf->avs_address[0U] = vlSymsp->TOP__vortex_afu_shim.avs_address
        [0U];
    vlSelf->avs_address[1U] = vlSymsp->TOP__vortex_afu_shim.avs_address
        [1U];
    vlSelf->avs_byteenable[0U] = vlSymsp->TOP__vortex_afu_shim.avs_byteenable
        [0U];
    vlSelf->avs_byteenable[1U] = vlSymsp->TOP__vortex_afu_shim.avs_byteenable
        [1U];
    vlSelf->avs_writedata[0U][0U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][0U];
    vlSelf->avs_writedata[0U][1U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][1U];
    vlSelf->avs_writedata[0U][2U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][2U];
    vlSelf->avs_writedata[0U][3U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][3U];
    vlSelf->avs_writedata[0U][4U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][4U];
    vlSelf->avs_writedata[0U][5U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][5U];
    vlSelf->avs_writedata[0U][6U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][6U];
    vlSelf->avs_writedata[0U][7U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][7U];
    vlSelf->avs_writedata[0U][8U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][8U];
    vlSelf->avs_writedata[0U][9U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][9U];
    vlSelf->avs_writedata[0U][0xaU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][0xaU];
    vlSelf->avs_writedata[0U][0xbU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][0xbU];
    vlSelf->avs_writedata[0U][0xcU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][0xcU];
    vlSelf->avs_writedata[0U][0xdU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][0xdU];
    vlSelf->avs_writedata[0U][0xeU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][0xeU];
    vlSelf->avs_writedata[0U][0xfU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [0U][0xfU];
    vlSelf->avs_writedata[1U][0U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][0U];
    vlSelf->avs_writedata[1U][1U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][1U];
    vlSelf->avs_writedata[1U][2U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][2U];
    vlSelf->avs_writedata[1U][3U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][3U];
    vlSelf->avs_writedata[1U][4U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][4U];
    vlSelf->avs_writedata[1U][5U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][5U];
    vlSelf->avs_writedata[1U][6U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][6U];
    vlSelf->avs_writedata[1U][7U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][7U];
    vlSelf->avs_writedata[1U][8U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][8U];
    vlSelf->avs_writedata[1U][9U] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][9U];
    vlSelf->avs_writedata[1U][0xaU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][0xaU];
    vlSelf->avs_writedata[1U][0xbU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][0xbU];
    vlSelf->avs_writedata[1U][0xcU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][0xcU];
    vlSelf->avs_writedata[1U][0xdU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][0xdU];
    vlSelf->avs_writedata[1U][0xeU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][0xeU];
    vlSelf->avs_writedata[1U][0xfU] = vlSymsp->TOP__vortex_afu_shim.avs_writedata
        [1U][0xfU];
    vlSelf->avs_read[0U] = vlSymsp->TOP__vortex_afu_shim.avs_read
        [0U];
    vlSelf->avs_read[1U] = vlSymsp->TOP__vortex_afu_shim.avs_read
        [1U];
    vlSelf->avs_write[0U] = vlSymsp->TOP__vortex_afu_shim.avs_write
        [0U];
    vlSelf->avs_write[1U] = vlSymsp->TOP__vortex_afu_shim.avs_write
        [1U];
}

VL_ATTR_COLD void Vvortex_afu_shim_Vortex___initial__TOP__vortex_afu_shim__afu__vortex__0(Vvortex_afu_shim_Vortex* vlSelf);
VL_ATTR_COLD void Vvortex_afu_shim_vortex_afu___initial__TOP__vortex_afu_shim__afu__0(Vvortex_afu_shim_vortex_afu* vlSelf);
VL_ATTR_COLD void Vvortex_afu_shim_vortex_afu_shim___initial__TOP__vortex_afu_shim__0(Vvortex_afu_shim_vortex_afu_shim* vlSelf);

VL_ATTR_COLD void Vvortex_afu_shim___024root___eval_initial(Vvortex_afu_shim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvortex_afu_shim___024root___eval_initial\n"); );
    // Body
    Vvortex_afu_shim_Vortex___initial__TOP__vortex_afu_shim__afu__vortex__0((&vlSymsp->TOP__vortex_afu_shim__afu__vortex));
    Vvortex_afu_shim_vortex_afu___initial__TOP__vortex_afu_shim__afu__0((&vlSymsp->TOP__vortex_afu_shim__afu));
    Vvortex_afu_shim_vortex_afu_shim___initial__TOP__vortex_afu_shim__0((&vlSymsp->TOP__vortex_afu_shim));
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__0(Vvortex_afu_shim_Vortex* vlSelf);
VL_ATTR_COLD void Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__1(Vvortex_afu_shim_Vortex* vlSelf);
VL_ATTR_COLD void Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__2(Vvortex_afu_shim_Vortex* vlSelf);
VL_ATTR_COLD void Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__3(Vvortex_afu_shim_Vortex* vlSelf);
VL_ATTR_COLD void Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__4(Vvortex_afu_shim_Vortex* vlSelf);
VL_ATTR_COLD void Vvortex_afu_shim_vortex_afu___settle__TOP__vortex_afu_shim__afu__0(Vvortex_afu_shim_vortex_afu* vlSelf);
VL_ATTR_COLD void Vvortex_afu_shim_vortex_afu_shim___settle__TOP__vortex_afu_shim__0(Vvortex_afu_shim_vortex_afu_shim* vlSelf);
VL_ATTR_COLD void Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__5(Vvortex_afu_shim_Vortex* vlSelf);
VL_ATTR_COLD void Vvortex_afu_shim_vortex_afu___settle__TOP__vortex_afu_shim__afu__1(Vvortex_afu_shim_vortex_afu* vlSelf);

VL_ATTR_COLD void Vvortex_afu_shim___024root___eval_settle(Vvortex_afu_shim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvortex_afu_shim___024root___eval_settle\n"); );
    // Body
    Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__0((&vlSymsp->TOP__vortex_afu_shim__afu__vortex));
    Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__1((&vlSymsp->TOP__vortex_afu_shim__afu__vortex));
    Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__2((&vlSymsp->TOP__vortex_afu_shim__afu__vortex));
    Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__3((&vlSymsp->TOP__vortex_afu_shim__afu__vortex));
    Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__4((&vlSymsp->TOP__vortex_afu_shim__afu__vortex));
    Vvortex_afu_shim_vortex_afu___settle__TOP__vortex_afu_shim__afu__0((&vlSymsp->TOP__vortex_afu_shim__afu));
    Vvortex_afu_shim___024root___settle__TOP__0(vlSelf);
    Vvortex_afu_shim_vortex_afu_shim___settle__TOP__vortex_afu_shim__0((&vlSymsp->TOP__vortex_afu_shim));
    Vvortex_afu_shim_Vortex___settle__TOP__vortex_afu_shim__afu__vortex__5((&vlSymsp->TOP__vortex_afu_shim__afu__vortex));
    Vvortex_afu_shim_vortex_afu___settle__TOP__vortex_afu_shim__afu__1((&vlSymsp->TOP__vortex_afu_shim__afu));
    Vvortex_afu_shim___024root___settle__TOP__1(vlSelf);
}
