// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060321.h for the primary calling header

#include "Vysyx_23060321__pch.h"
#include "Vysyx_23060321__Syms.h"
#include "Vysyx_23060321___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060321___024root___dump_triggers__act(Vysyx_23060321___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060321___024root___eval_triggers__act(Vysyx_23060321___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060321___024root___eval_triggers__act\n"); );
    Vysyx_23060321__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060321___024root___dump_triggers__act(vlSelf);
    }
#endif
}
