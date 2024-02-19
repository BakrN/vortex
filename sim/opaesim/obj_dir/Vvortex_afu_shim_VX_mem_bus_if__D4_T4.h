// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvortex_afu_shim.h for the primary calling header

#ifndef VERILATED_VVORTEX_AFU_SHIM_VX_MEM_BUS_IF__D4_T4_H_
#define VERILATED_VVORTEX_AFU_SHIM_VX_MEM_BUS_IF__D4_T4_H_  // guard

#include "verilated.h"

class Vvortex_afu_shim__Syms;

class Vvortex_afu_shim_VX_mem_bus_if__D4_T4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<3>/*70:0*/ __PVT__req_data;
    QData/*35:0*/ __PVT__rsp_data;

    // INTERNAL VARIABLES
    Vvortex_afu_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvortex_afu_shim_VX_mem_bus_if__D4_T4(Vvortex_afu_shim__Syms* symsp, const char* name);
    ~Vvortex_afu_shim_VX_mem_bus_if__D4_T4();
    VL_UNCOPYABLE(Vvortex_afu_shim_VX_mem_bus_if__D4_T4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
