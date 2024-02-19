// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvortex_afu_shim.h for the primary calling header

#ifndef VERILATED_VVORTEX_AFU_SHIM_VX_EXECUTE_IF__N2_H_
#define VERILATED_VVORTEX_AFU_SHIM_VX_EXECUTE_IF__N2_H_  // guard

#include "verilated.h"

class Vvortex_afu_shim__Syms;

class Vvortex_afu_shim_VX_execute_if__N2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__valid;
    CData/*0:0*/ __PVT__ready;

    // INTERNAL VARIABLES
    Vvortex_afu_shim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvortex_afu_shim_VX_execute_if__N2(Vvortex_afu_shim__Syms* symsp, const char* name);
    ~Vvortex_afu_shim_VX_execute_if__N2();
    VL_UNCOPYABLE(Vvortex_afu_shim_VX_execute_if__N2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
