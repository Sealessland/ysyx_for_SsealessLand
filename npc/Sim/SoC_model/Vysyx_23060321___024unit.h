// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060321.h for the primary calling header

#ifndef VERILATED_VYSYX_23060321___024UNIT_H_
#define VERILATED_VYSYX_23060321___024UNIT_H_  // guard

#include "verilated.h"


class Vysyx_23060321__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_23060321___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vysyx_23060321__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060321___024unit(Vysyx_23060321__Syms* symsp, const char* v__name);
    ~Vysyx_23060321___024unit();
    VL_UNCOPYABLE(Vysyx_23060321___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
