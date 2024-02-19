// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVortex.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VVortex_VX_muldiv_unit__pi27.h"
#include "VVortex__Syms.h"

void VVortex_VX_muldiv_unit__pi27___ctor_var_reset(VVortex_VX_muldiv_unit__pi27* vlSelf);

VVortex_VX_muldiv_unit__pi27::VVortex_VX_muldiv_unit__pi27(VVortex__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VVortex_VX_muldiv_unit__pi27___ctor_var_reset(this);
}

void VVortex_VX_muldiv_unit__pi27::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VVortex_VX_muldiv_unit__pi27::~VVortex_VX_muldiv_unit__pi27() {
}
