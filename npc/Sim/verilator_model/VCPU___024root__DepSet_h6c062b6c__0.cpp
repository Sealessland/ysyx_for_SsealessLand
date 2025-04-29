// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU__Syms.h"
#include "VCPU___024root.h"

extern "C" int mem_read(int addr, int size);

VL_INLINE_OPT void VCPU___024root____Vdpiimwrap_CPU__DOT__fetchUnit__DOT__dpiMem__DOT__mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ size, IData/*31:0*/ &mem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root____Vdpiimwrap_CPU__DOT__fetchUnit__DOT__dpiMem__DOT__mem_read_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int size__Vcvt;
    for (size_t size__Vidx = 0; size__Vidx < 1; ++size__Vidx) size__Vcvt = size;
    int mem_read__Vfuncrtn__Vcvt;
    mem_read__Vfuncrtn__Vcvt = mem_read(addr__Vcvt, size__Vcvt);
    mem_read__Vfuncrtn = mem_read__Vfuncrtn__Vcvt;
}

extern "C" void mem_write(int addr, int data, int size);

VL_INLINE_OPT void VCPU___024root____Vdpiimwrap_CPU__DOT__execute__DOT__write__DOT__mem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ size) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root____Vdpiimwrap_CPU__DOT__execute__DOT__write__DOT__mem_write_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int size__Vcvt;
    for (size_t size__Vidx = 0; size__Vidx < 1; ++size__Vidx) size__Vcvt = size;
    mem_write(addr__Vcvt, data__Vcvt, size__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__ico(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval_triggers__ico(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_triggers__ico\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval_triggers__act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_triggers__act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clock) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
