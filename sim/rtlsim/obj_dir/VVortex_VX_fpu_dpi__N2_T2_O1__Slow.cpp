// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_fpu_dpi__N2_T2_O1.h"
#include "VVortex__Syms.h"

void VVortex_VX_fpu_dpi__N2_T2_O1___ctor_var_reset(VVortex_VX_fpu_dpi__N2_T2_O1* vlSelf);

VVortex_VX_fpu_dpi__N2_T2_O1::VVortex_VX_fpu_dpi__N2_T2_O1(VVortex__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVortex_VX_fpu_dpi__N2_T2_O1___ctor_var_reset(this);
}

void VVortex_VX_fpu_dpi__N2_T2_O1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVortex_VX_fpu_dpi__N2_T2_O1::~VVortex_VX_fpu_dpi__N2_T2_O1() {
}
