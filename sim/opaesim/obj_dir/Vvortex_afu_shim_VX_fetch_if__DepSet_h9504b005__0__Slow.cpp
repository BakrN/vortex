// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvortex_afu_shim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vvortex_afu_shim_VX_fetch_if.h"

VL_ATTR_COLD void Vvortex_afu_shim_VX_fetch_if___ctor_var_reset(Vvortex_afu_shim_VX_fetch_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvortex_afu_shim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vvortex_afu_shim_VX_fetch_if___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(71, vlSelf->__PVT__data);
}
