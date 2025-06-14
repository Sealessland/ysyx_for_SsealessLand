// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore__Syms.h"
#include "Vcore___024root.h"

extern "C" void inst_mem_read(int addr, int len, int* data);

VL_INLINE_OPT void Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__inst_mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__inst_mem_read_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    int data__Vcvt;
    inst_mem_read(addr__Vcvt, len__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void data_mem_read(int addr, int len, int* data);

VL_INLINE_OPT void Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_read_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    int data__Vcvt;
    data_mem_read(addr__Vcvt, len__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void data_mem_write(int addr, int len, int data);

VL_INLINE_OPT void Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__data_mem_write_TOP\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    data_mem_write(addr__Vcvt, len__Vcvt, data__Vcvt);
}

extern "C" void ebreak_handler();

VL_INLINE_OPT void Vcore___024root____Vdpiimwrap_core__DOT__executer__DOT__ebreakInst__DOT__ebreak_handler_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root____Vdpiimwrap_core__DOT__executer__DOT__ebreakInst__DOT__ebreak_handler_TOP\n"); );
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
