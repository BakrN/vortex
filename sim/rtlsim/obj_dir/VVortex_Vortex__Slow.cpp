// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_Vortex.h"
#include "VVortex__Syms.h"

void VVortex_Vortex___ctor_var_reset(VVortex_Vortex* vlSelf);

VVortex_Vortex::VVortex_Vortex(VVortex__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVortex_Vortex___ctor_var_reset(this);
}

void VVortex_Vortex::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVortex_Vortex::~VVortex_Vortex() {
}
