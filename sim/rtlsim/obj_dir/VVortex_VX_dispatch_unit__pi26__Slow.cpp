// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_dispatch_unit__pi26.h"
#include "VVortex__Syms.h"

void VVortex_VX_dispatch_unit__pi26___ctor_var_reset(VVortex_VX_dispatch_unit__pi26* vlSelf);

VVortex_VX_dispatch_unit__pi26::VVortex_VX_dispatch_unit__pi26(VVortex__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVortex_VX_dispatch_unit__pi26___ctor_var_reset(this);
}

void VVortex_VX_dispatch_unit__pi26::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVortex_VX_dispatch_unit__pi26::~VVortex_VX_dispatch_unit__pi26() {
}
