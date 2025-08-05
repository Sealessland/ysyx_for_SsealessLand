// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060321.h for the primary calling header

#include "Vysyx_23060321__pch.h"
#include "Vysyx_23060321__Syms.h"
#include "Vysyx_23060321___024unit.h"

void Vysyx_23060321___024unit___ctor_var_reset(Vysyx_23060321___024unit* vlSelf);

Vysyx_23060321___024unit::Vysyx_23060321___024unit(Vysyx_23060321__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vysyx_23060321___024unit___ctor_var_reset(this);
}

void Vysyx_23060321___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vysyx_23060321___024unit::~Vysyx_23060321___024unit() {
}
