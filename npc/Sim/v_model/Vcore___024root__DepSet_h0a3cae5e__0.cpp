// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore__Syms.h"
#include "Vcore___024root.h"

extern "C" void memory_read(int ar_addr, int* r_data);

VL_INLINE_OPT void Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__memory_read_TOP(IData/*31:0*/ ar_addr, IData/*31:0*/ &r_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__memory_read_TOP\n"); );
    // Body
    int ar_addr__Vcvt;
    for (size_t ar_addr__Vidx = 0; ar_addr__Vidx < 1; ++ar_addr__Vidx) ar_addr__Vcvt = ar_addr;
    int r_data__Vcvt;
    memory_read(ar_addr__Vcvt, &r_data__Vcvt);
    r_data = r_data__Vcvt;
}

extern "C" void memory_write(int aw_addr, int w_data, int w_strb);

VL_INLINE_OPT void Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__write_backend__DOT__memory_write_TOP(IData/*31:0*/ aw_addr, IData/*31:0*/ w_data, IData/*31:0*/ w_strb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__write_backend__DOT__memory_write_TOP\n"); );
    // Body
    int aw_addr__Vcvt;
    for (size_t aw_addr__Vidx = 0; aw_addr__Vidx < 1; ++aw_addr__Vidx) aw_addr__Vcvt = aw_addr;
    int w_data__Vcvt;
    for (size_t w_data__Vidx = 0; w_data__Vidx < 1; ++w_data__Vidx) w_data__Vcvt = w_data;
    int w_strb__Vcvt;
    for (size_t w_strb__Vidx = 0; w_strb__Vidx < 1; ++w_strb__Vidx) w_strb__Vcvt = w_strb;
    memory_write(aw_addr__Vcvt, w_data__Vcvt, w_strb__Vcvt);
}

extern "C" void ebreak_handler();

VL_INLINE_OPT void Vcore___024root____Vdpiimwrap_core__DOT__ebreak__DOT__ebreak_handler_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root____Vdpiimwrap_core__DOT__ebreak__DOT__ebreak_handler_TOP\n"); );
    // Body
    ebreak_handler();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vcore___024root___eval_triggers__act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_triggers__act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clock) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcore___024root___dump_triggers__act(vlSelf);
    }
#endif
}
