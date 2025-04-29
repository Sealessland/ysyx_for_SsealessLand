// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU___024root.h"

VL_ATTR_COLD void VCPU___024root___eval_static(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_static\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void VCPU___024root___eval_final(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_final\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VCPU___024root___eval_phase__stl(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_settle(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_settle\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VCPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("build/CPU.sv", 1622, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VCPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU___024root___stl_sequent__TOP__0(VCPU___024root* vlSelf);
VL_ATTR_COLD void VCPU___024root____Vm_traceActivitySetAll(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VCPU___024root___stl_sequent__TOP__0(vlSelf);
        VCPU___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VCPU___024root___stl_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___stl_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debug_pc = vlSelfRef.io_pc;
    vlSelfRef.io_debug_inst = vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data;
    vlSelfRef.CPU__DOT__execute__DOT___GEN_41 = ((1U 
                                                  != (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)) 
                                                 | (0U 
                                                    == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)));
    vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_4 
        = ((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)) 
           | (1U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_42 
        = (IData)((0U == (0xbe000000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48 
        = ((((0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                       << 7U)) | (0x40U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                        >> 5U)) | (1U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                         >> 0xeU)))));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T 
        = ((((0x40U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                       << 6U)) | (0x20U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           << 4U))) 
            | ((0x10U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                             >> 2U)) << 4U)) | (8U 
                                                & ((~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 3U)) 
                                                   << 3U)))) 
           | ((4U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                         >> 5U)) << 2U)) | ((2U & (
                                                   (~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 6U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   >> 0xcU))))));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4 
        = ((((0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                       << 7U)) | (0x40U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 5U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                            >> 6U)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   >> 0xeU))))));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40 
        = ((((0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                       << 7U)) | (0x40U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                      >> 1U)) | (4U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           >> 5U)) 
                                       << 2U))) | (
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                         >> 6U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                         >> 0xdU)))));
    vlSelfRef.CPU__DOT__regFile__DOT__casez_tmp_0 = 
        ((0x1000000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
          ? ((0x800000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
              ? ((0x400000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                  ? ((0x200000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                      ? ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_31
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_30)
                      : ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_29
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_28))
                  : ((0x200000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                      ? ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_27
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_26)
                      : ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_25
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_24)))
              : ((0x400000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                  ? ((0x200000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                      ? ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_23
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_22)
                      : ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_21
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_20))
                  : ((0x200000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                      ? ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_19
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_18)
                      : ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_17
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_16))))
          : ((0x800000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
              ? ((0x400000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                  ? ((0x200000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                      ? ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_15
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_14)
                      : ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_13
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_12))
                  : ((0x200000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                      ? ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_11
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_10)
                      : ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_9
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_8)))
              : ((0x400000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                  ? ((0x200000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                      ? ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_7
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_6)
                      : ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_5
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_4))
                  : ((0x200000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                      ? ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_3
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_2)
                      : ((0x100000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                          ? vlSelfRef.CPU__DOT__regFile__DOT__rf_1
                          : vlSelfRef.CPU__DOT__regFile__DOT__rf_0)))));
    vlSelfRef.CPU__DOT__regFile__DOT__casez_tmp = (
                                                   (0x80000U 
                                                    & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                    ? 
                                                   ((0x40000U 
                                                     & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                     ? 
                                                    ((0x20000U 
                                                      & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                       ? 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_31
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_30)
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_29
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_28))
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                       ? 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_27
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_26)
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_25
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_24)))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                       ? 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_23
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_22)
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_21
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_20))
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                       ? 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_19
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_18)
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_17
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_16))))
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                     ? 
                                                    ((0x20000U 
                                                      & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                       ? 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_15
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_14)
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_13
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_12))
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                       ? 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_11
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_10)
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_9
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_8)))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                      ? 
                                                     ((0x10000U 
                                                       & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                       ? 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_7
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_6)
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_5
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_4))
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                       ? 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_3
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_2)
                                                       : 
                                                      ((0x8000U 
                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)
                                                        ? vlSelfRef.CPU__DOT__regFile__DOT__rf_1
                                                        : vlSelfRef.CPU__DOT__regFile__DOT__rf_0)))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_51 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_52 
        = (IData)((0U == (0x5040U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63 
        = (IData)((0U == (0x3060U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_69 
        = (IData)((0x2000U == (0x6000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24 
        = ((((0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                       << 7U)) | (0x40U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                        >> 5U)) | (1U & (~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                            >> 0xdU))))));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14 
        = (((0x20U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                      << 5U)) | ((0x10U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           << 3U)) 
                                 | (8U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                          << 1U)))) 
           | ((4U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                         >> 3U)) << 2U)) | ((2U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   >> 3U)) 
                                            | (1U & 
                                               (~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   >> 6U))))));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27 
        = ((((0x40U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                       << 6U)) | (0x20U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           << 4U))) 
            | ((0x10U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                         << 2U)) | (8U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
           | ((4U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                         >> 4U)) << 2U)) | ((2U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                >> 6U)))));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1 
        = ((((0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                       << 7U)) | (0x40U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 5U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                            >> 6U)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   >> 0xdU))))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58 
        = (IData)((0x4000U == (0x6000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61 
        = (IData)((0x40000000U == (0xfc000000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_77 
        = (((0x10U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          >> 0x1aU)) << 4U)) | ((8U 
                                                 & ((~ 
                                                     (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                      >> 0x1bU)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((~ 
                                                       (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                        >> 0x1cU)) 
                                                      << 2U)))) 
           | ((2U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                         >> 0x1dU)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   >> 0x1fU)))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53 
        = (IData)((0U == (0x6000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71 
        = ((2U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                  >> 0xeU))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_74 
        = (((0x20U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          >> 0x1aU)) << 5U)) | ((0x10U 
                                                 & ((~ 
                                                     (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                      >> 0x1bU)) 
                                                    << 4U)) 
                                                | (8U 
                                                   & ((~ 
                                                       (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                        >> 0x1cU)) 
                                                      << 3U)))) 
           | ((4U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                         >> 0x1dU)) << 2U)) | ((2U 
                                                & ((~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 0x1eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                      >> 0x1fU))))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_43 
        = (IData)((0U == (0xfc000000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)));
    vlSelfRef.CPU__DOT__execute__DOT___GEN_43 = ((IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_4) 
                                                 | (2U 
                                                    == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_49 
        = (IData)(((0x5000U == (0x7040U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                   & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_42)));
    if ((0U != (0x1fU & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                         >> 0x14U)))) {
        vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_0 
            = (0x1fU & vlSelfRef.CPU__DOT__regFile__DOT__casez_tmp_0);
        vlSelfRef.CPU__DOT___regFile_io_rs2_data = vlSelfRef.CPU__DOT__regFile__DOT__casez_tmp_0;
    } else {
        vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_0 = 0U;
        vlSelfRef.CPU__DOT___regFile_io_rs2_data = 0U;
    }
    vlSelfRef.CPU__DOT___regFile_io_rs1_data = ((0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 0xfU)))
                                                 ? vlSelfRef.CPU__DOT__regFile__DOT__casez_tmp
                                                 : 0U);
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70 
        = (IData)(((0U == (0x1060U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                   & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_62 
        = ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
               >> 0x19U)) & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53 
        = (((((0x8000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          << 0xfU)) | (0x4000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                  << 0xdU))) 
             | ((0x2000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                >> 2U)) << 0xdU)) | 
                (0x1000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                            << 9U)))) | (((0x800U & 
                                           (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                            << 7U)) 
                                          | (0x400U 
                                             & ((~ 
                                                 (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                  >> 5U)) 
                                                << 0xaU))) 
                                         | ((0x200U 
                                             & ((~ 
                                                 (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                  >> 6U)) 
                                                << 9U)) 
                                            | (0x100U 
                                               & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                  >> 4U))))) 
           | ((0x80U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                            >> 0xdU)) << 7U)) | ((0x40U 
                                                  & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 8U)) 
                                                 | ((0x20U 
                                                     & ((~ 
                                                         (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                          >> 0x19U)) 
                                                        << 5U)) 
                                                    | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_77)))));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51 
        = (((((0x4000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          << 0xeU)) | (0x2000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                >> 2U)) << 0xcU)) | 
                (0x800U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                               >> 3U)) << 0xbU)))) 
            | (((0x400U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                           << 6U)) | (0x200U & ((~ 
                                                 (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                  >> 5U)) 
                                                << 9U))) 
               | ((0x100U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                 >> 6U)) << 8U)) | 
                  (0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                            >> 5U))))) | ((0x40U & 
                                           ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                >> 0xdU)) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                 >> 9U)) 
                                             | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_77))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54 
        = ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
               >> 6U)) & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_67 
        = (IData)(((0x1000U == (0x1040U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                   & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53)));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18 
        = ((((0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                       << 7U)) | (0x40U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                         >> 4U)) << 3U)) | ((4U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   >> 3U)) 
                                            | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72 
        = ((4U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                      >> 0xcU)) << 2U)) | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31 
        = (((((0x4000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          << 0xeU)) | (0x2000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                >> 2U)) << 0xcU)) | 
                (0x800U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                               >> 3U)) << 0xbU)))) 
            | (((0x400U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                           << 6U)) | (0x200U & ((~ 
                                                 (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                  >> 5U)) 
                                                << 9U))) 
               | ((0x100U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                 >> 6U)) << 8U)) | 
                  (0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                            >> 5U))))) | ((0x40U & 
                                           ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                >> 0xdU)) 
                                            << 6U)) 
                                          | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_74)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_75 
        = ((0x40U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                         >> 0x19U)) << 6U)) | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_74));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_44 
        = (IData)(((0U == (0x6000U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                   & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_43)));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_47 
        = ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
               >> 0x19U)) & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_43));
    vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_8 
        = (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
           == vlSelfRef.CPU__DOT___regFile_io_rs2_data);
    vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_2 
        = VL_LTS_III(32, vlSelfRef.CPU__DOT___regFile_io_rs1_data, vlSelfRef.CPU__DOT___regFile_io_rs2_data);
    vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_3 
        = (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
           < vlSelfRef.CPU__DOT___regFile_io_rs2_data);
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26 
        = ((((0x200U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                        << 9U)) | ((0x100U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                              << 7U)) 
                                   | (0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                               << 5U)))) 
            | ((0x40U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                             >> 3U)) << 6U)) | (0x20U 
                                                & ((~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 4U)) 
                                                   << 5U)))) 
           | ((0x10U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                        >> 1U)) | ((8U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                          >> 3U)) | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73 
        = ((0x10U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                         >> 5U)) << 4U)) | ((8U & (
                                                   (~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 6U)) 
                                                   << 3U)) 
                                            | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72)));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_28 
        = ((((((0x8000000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                              << 0x1bU)) | (0x4000000U 
                                            & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                               << 0x16U))) 
              | ((0x2000000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                << 0x14U)) | (0x1000000U 
                                              & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                 << 0x12U)))) 
             | ((0x800000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                  >> 7U)) << 0x17U)) 
                | ((0x400000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                     >> 8U)) << 0x16U)) 
                   | (0x200000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                       >> 9U)) << 0x15U))))) 
            | ((((0x100000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                   >> 0xaU)) << 0x14U)) 
                 | (0x80000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                    >> 0xbU)) << 0x13U))) 
                | ((0x40000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                    >> 0xcU)) << 0x12U)) 
                   | (0x20000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                      >> 0xdU)) << 0x11U)))) 
               | ((0x10000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                   >> 0xeU)) << 0x10U)) 
                  | ((0x8000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                     >> 0xfU)) << 0xfU)) 
                     | (0x4000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                       >> 0x10U)) << 0xeU)))))) 
           | ((((0x2000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                >> 0x11U)) << 0xdU)) 
                | (0x1000U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                  >> 0x12U)) << 0xcU))) 
               | ((0x800U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                 >> 0x13U)) << 0xbU)) 
                  | (0x400U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                   >> 0x15U)) << 0xaU)))) 
              | ((0x200U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                >> 0x16U)) << 9U)) 
                 | ((0x100U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                   >> 0x17U)) << 8U)) 
                    | ((0x80U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                     >> 0x18U)) << 7U)) 
                       | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_75))))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76 
        = ((0x200U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          >> 6U)) << 9U)) | ((0x100U 
                                              & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                 >> 4U)) 
                                             | ((0x80U 
                                                 & ((~ 
                                                     (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                      >> 0xdU)) 
                                                    << 7U)) 
                                                | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_75))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64 
        = ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
               >> 0xeU)) & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_47));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_59 
        = ((vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
            >> 0xeU) & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_47));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12 
        = (((0x100U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                       << 8U)) | (0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           << 6U))) 
           | ((0x40U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                            >> 2U)) << 6U)) | ((0x20U 
                                                & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                   << 1U)) 
                                               | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73))));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9 
        = (((0x200U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                       << 9U)) | ((0x100U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                             << 7U)) 
                                  | (0x80U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                              << 5U)))) 
           | ((0x40U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                        << 3U)) | ((0x20U & ((~ (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                 >> 4U)) 
                                             << 5U)) 
                                   | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73))));
    vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34 
        = (((0x8000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                        << 0xfU)) | ((0x4000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                 << 0xdU)) 
                                     | (0x2000U & (
                                                   (~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 2U)) 
                                                   << 0xdU)))) 
           | ((0x1000U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                          << 9U)) | ((0x800U & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                << 7U)) 
                                     | ((0x400U & (
                                                   (~ 
                                                    (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 5U)) 
                                                   << 0xaU)) 
                                        | (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76)))));
    vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_60 
        = ((vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
            >> 0xdU) & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_59));
    vlSelfRef.CPU__DOT___decode_io_rd_en = ((0x7fU 
                                             == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                            | ((0xffU 
                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                               | ((0xffU 
                                                   == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                  | ((0x3ffU 
                                                      == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                     | ((0x1ffU 
                                                         == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                        | ((0x3fU 
                                                            == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                           | ((IData)(
                                                                      ((0x33U 
                                                                        == 
                                                                        (0x7077U 
                                                                         & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                       & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_42))) 
                                                              | ((IData)(
                                                                         ((0x33U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                          & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_43))) 
                                                                 | ((IData)(
                                                                            ((0x33U 
                                                                              == 
                                                                              (0x1077U 
                                                                               & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                             & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_44))) 
                                                                    | ((0x3ffU 
                                                                        == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                                       | ((0x7fU 
                                                                           == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                          | ((IData)(
                                                                                ((0x1013U 
                                                                                == 
                                                                                (0x305fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_43))) 
                                                                             | ((IData)(
                                                                                ((0x101bU 
                                                                                == 
                                                                                (0x305fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_47))) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                                | ((0x7fffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                                | (IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & ((IData)(
                                                                                ((0x18U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_49))) 
                                                                                | (IData)(
                                                                                ((0x30U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & ((IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_49) 
                                                                                | (IData)(
                                                                                ((0x2004000U 
                                                                                == 
                                                                                (0x2004040U 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_43))))))))))))))))))))))));
    vlSelfRef.CPU__DOT__decode__DOT__casez_tmp = ((
                                                   (0x3fU 
                                                    == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                   | ((0x7fU 
                                                       == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                      | ((0x7fffU 
                                                          == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                         | ((0xffffU 
                                                             == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                            | ((0x7fffU 
                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                               | (0xffffU 
                                                                  == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53)))))))
                                                   ? 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x23U 
                                                                == 
                                                                (0x407fU 
                                                                 & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                       | ((0xffU 
                                                           == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                          | ((0x7fffU 
                                                              == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                             | ((0xffffU 
                                                                 == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                | ((0xffU 
                                                                    == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                   | ((0x7fffU 
                                                                       == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                      | (0xffffU 
                                                                         == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53)))))))))
                                                    ? 
                                                   ((1U 
                                                     & ((0x7fU 
                                                         == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                        | ((0xffU 
                                                            == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                           | ((0xffU 
                                                               == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                              | ((0x1ffU 
                                                                  == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                                 | ((0xffU 
                                                                     == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                    | ((IData)(
                                                                               (0x63U 
                                                                                == 
                                                                                (0x707bU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                       | ((0x7fU 
                                                                           == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                          | ((0xffffU 
                                                                              == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                             | ((0xffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53)))))))))))))
                                                     ? (QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                           >> 0x14U))))
                                                     : (QData)((IData)(
                                                                       (0x3fU 
                                                                        & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                           >> 0x14U)))))
                                                    : 
                                                   ((1U 
                                                     & ((0x7fU 
                                                         == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                        | ((0xffU 
                                                            == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                           | ((0xffU 
                                                               == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                              | ((0x1ffU 
                                                                  == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                                 | ((0xffU 
                                                                     == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                    | ((IData)(
                                                                               (0x63U 
                                                                                == 
                                                                                (0x707bU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                       | ((0x7fU 
                                                                           == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                          | ((0xffffU 
                                                                              == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                             | ((0xffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53)))))))))))))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                          >> 0x1fU)))) 
                                                      << 0x14U) 
                                                     | (QData)((IData)(
                                                                       (((0xff000U 
                                                                          & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data) 
                                                                         | (0x800U 
                                                                            & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                               >> 9U))) 
                                                                        | (0x7feU 
                                                                           & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                              >> 0x14U))))))
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (0xfffff000U 
                                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))))))
                                                   : 
                                                  ((1U 
                                                    & ((IData)(
                                                               (0x23U 
                                                                == 
                                                                (0x407fU 
                                                                 & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                       | ((0xffU 
                                                           == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                          | ((0x7fffU 
                                                              == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                             | ((0xffffU 
                                                                 == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                | ((0xffU 
                                                                    == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                   | ((0x7fffU 
                                                                       == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                      | (0xffffU 
                                                                         == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53)))))))))
                                                    ? 
                                                   ((1U 
                                                     & ((0x7fU 
                                                         == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                        | ((0xffU 
                                                            == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                           | ((0xffU 
                                                               == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                              | ((0x1ffU 
                                                                  == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                                 | ((0xffU 
                                                                     == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                    | ((IData)(
                                                                               (0x63U 
                                                                                == 
                                                                                (0x707bU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                       | ((0x7fU 
                                                                           == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                          | ((0xffffU 
                                                                              == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                             | ((0xffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53)))))))))))))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       ((0x800U 
                                                                         & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                                >> 7U)))))))
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       ((0xfe0U 
                                                                         & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                            >> 0x14U)) 
                                                                        | (0x1fU 
                                                                           & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                              >> 7U)))))))
                                                    : 
                                                   ((1U 
                                                     & ((0x7fU 
                                                         == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                        | ((0xffU 
                                                            == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                           | ((0xffU 
                                                               == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                              | ((0x1ffU 
                                                                  == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                                 | ((0xffU 
                                                                     == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                    | ((IData)(
                                                                               (0x63U 
                                                                                == 
                                                                                (0x707bU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                       | ((0x7fU 
                                                                           == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                          | ((0xffffU 
                                                                              == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                             | ((0xffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53)))))))))))))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                        >> 0x14U))))
                                                     : 0ULL)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_1 = ((((
                                                   (0x3ffU 
                                                    == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                   | ((0x3fU 
                                                       == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                      | ((0x3ffU 
                                                          == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                         | ((0x7fU 
                                                             == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                            | ((0xfffffffU 
                                                                == vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_28) 
                                                               | (IData)(
                                                                         ((0x63U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                          & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_51)))))))) 
                                                  << 5U) 
                                                 | ((((0xffU 
                                                       == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                      | ((IData)(
                                                                 ((3U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                  & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_52))) 
                                                         | ((IData)(
                                                                    ((3U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                     & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54))) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                               | ((0x7fffU 
                                                                   == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                                  | ((0x7fffU 
                                                                      == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                     | (IData)(
                                                                               ((0x1013U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_51))))))))) 
                                                     << 4U) 
                                                    | (8U 
                                                       & (((0x3ffU 
                                                            == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                           | ((IData)(
                                                                      (0x13U 
                                                                       == 
                                                                       (0x107fU 
                                                                        & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                              | ((IData)(
                                                                         (0x23U 
                                                                          == 
                                                                          (0x507fU 
                                                                           & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                 | ((0xffU 
                                                                     == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                    | ((0xffU 
                                                                        == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                       | ((IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x607fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                          | (IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & ((IData)(
                                                                                ((0x1000U 
                                                                                == 
                                                                                (0x1070U 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58))) 
                                                                                | (IData)(
                                                                                ((0x30U 
                                                                                == 
                                                                                (0x70U 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & ((IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_60) 
                                                                                | (IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_62))))))))))))))) 
                                                          << 3U)))) 
                                                | ((4U 
                                                    & (((IData)(
                                                                ((3U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                 & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63))) 
                                                        | ((IData)(
                                                                   ((3U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                    & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_52))) 
                                                           | ((IData)(
                                                                      ((3U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                       & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54))) 
                                                              | ((0x3fU 
                                                                  == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                                 | ((0xffU 
                                                                     == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                    | ((0xfffffffU 
                                                                        == vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_28) 
                                                                       | ((IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x607fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                          | ((IData)(
                                                                                ((0x2033U 
                                                                                == 
                                                                                (0x207fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64))) 
                                                                             | ((IData)(
                                                                                (0x4013U 
                                                                                == 
                                                                                (0x507fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                                | (IData)(
                                                                                ((0x4033U 
                                                                                == 
                                                                                (0x607fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_75))))))))))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((IData)(
                                                                   ((0x13U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                    & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63))) 
                                                           | ((0x3ffU 
                                                               == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                              | ((0x7fU 
                                                                  == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                 | ((0xfffffffU 
                                                                     == vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_28) 
                                                                    | ((IData)(
                                                                               ((0x23U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_67))) 
                                                                       | ((IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (0x3ffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76)))) 
                                                                          | ((IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0x105fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_69))) 
                                                                             | ((IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70))) 
                                                                                | ((IData)(
                                                                                (0x4013U 
                                                                                == 
                                                                                (0x507fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                                | ((IData)(
                                                                                ((0x4033U 
                                                                                == 
                                                                                (0x607fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_75)))) 
                                                                                | ((IData)(
                                                                                ((0x63U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58))) 
                                                                                | ((0x7fffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                                | (IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (((vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                                                >> 0xcU) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_59)) 
                                                                                | (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_62)))))))))))))))))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(
                                                                    ((0x13U 
                                                                      == 
                                                                      (0x107fU 
                                                                       & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                     & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53))) 
                                                            | ((IData)(
                                                                       (0x17U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                               | ((IData)(
                                                                          (0x23U 
                                                                           == 
                                                                           (0x507fU 
                                                                            & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                  | ((IData)(
                                                                             ((0x33U 
                                                                               == 
                                                                               (0x207fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                              & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64))) 
                                                                     | ((0x3ffU 
                                                                         == (IData)(vlSelfRef.CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                                        | ((IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_67))) 
                                                                           | ((IData)(
                                                                                ((0x1013U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_44))) 
                                                                              | ((IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (0x3ffU 
                                                                                == (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76)))) 
                                                                                | ((IData)(
                                                                                ((0x1033U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64))) 
                                                                                | ((IData)(
                                                                                (0x1063U 
                                                                                == 
                                                                                (0x307fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                                | ((IData)(
                                                                                ((0x1013U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_69))) 
                                                                                | ((IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70))) 
                                                                                | ((IData)(
                                                                                (0x5063U 
                                                                                == 
                                                                                (0x507fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data))) 
                                                                                | ((IData)(
                                                                                ((0x13U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_51))) 
                                                                                | ((IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_60))) 
                                                                                | ((IData)(
                                                                                ((0x100070U 
                                                                                == 
                                                                                (0x1fffff0U 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_47))) 
                                                                                | (IData)(
                                                                                ((0x5013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)) 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61)))))))))))))))))))))));
    vlSelfRef.CPU__DOT__regFile__DOT___GEN = ((IData)(vlSelfRef.CPU__DOT___decode_io_rd_en) 
                                              & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                                     >> 7U))));
    vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10 
        = ((IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp) 
           + vlSelfRef.io_pc);
    vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_11 
        = ((IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp) 
           + vlSelfRef.CPU__DOT___regFile_io_rs1_data);
    vlSelfRef.CPU__DOT__execute__DOT___GEN_25 = ((1U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                 | ((2U 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                    | ((3U 
                                                        == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                       | ((4U 
                                                           == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                          | ((5U 
                                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                             | ((6U 
                                                                 == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                | ((7U 
                                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                   | ((8U 
                                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                      | ((9U 
                                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                         | ((0xaU 
                                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                            | ((0xbU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                               | ((0xcU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0xdU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0xeU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0xfU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0x10U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0x12U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | (0x13U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))))))))))))))))))));
    vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_9 
        = ((0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
           | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)));
    vlSelfRef.CPU__DOT__execute__DOT___GEN_30 = ((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_25) 
                                                 | ((0x14U 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                    | ((0x15U 
                                                        == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                       | ((0x16U 
                                                           == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                          | ((0x17U 
                                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                             | (0x18U 
                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)))))));
    vlSelfRef.CPU__DOT__execute__DOT___GEN_39 = ((1U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                  ? 
                                                 (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                  + vlSelfRef.CPU__DOT___regFile_io_rs2_data)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                   ? 
                                                  (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                   - vlSelfRef.CPU__DOT___regFile_io_rs2_data)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                    ? 
                                                   (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                    << (IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_0))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                     ? (IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_2)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                      ? (IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_3)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                       ? 
                                                      (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                       ^ vlSelfRef.CPU__DOT___regFile_io_rs2_data)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                        ? 
                                                       (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                        >> (IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_0))
                                                        : 
                                                       ((8U 
                                                         == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                         ? 
                                                        VL_SHIFTRS_III(32,32,5, vlSelfRef.CPU__DOT___regFile_io_rs1_data, (IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_0))
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                          ? 
                                                         (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                          | vlSelfRef.CPU__DOT___regFile_io_rs2_data)
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                           ? 
                                                          (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                           & vlSelfRef.CPU__DOT___regFile_io_rs2_data)
                                                           : 
                                                          ((0xbU 
                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                            ? vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_11
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                             ? 
                                                            VL_LTS_III(32, vlSelfRef.CPU__DOT___regFile_io_rs1_data, (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp))
                                                             : 
                                                            ((0xdU 
                                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                              ? 
                                                             (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                              < (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp))
                                                              : 
                                                             ((0xeU 
                                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                               ? 
                                                              ((IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp) 
                                                               ^ vlSelfRef.CPU__DOT___regFile_io_rs1_data)
                                                               : 
                                                              ((0xfU 
                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                                ? 
                                                               ((IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp) 
                                                                | vlSelfRef.CPU__DOT___regFile_io_rs1_data)
                                                                : 
                                                               ((0x10U 
                                                                 == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                                 ? 
                                                                ((IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp) 
                                                                 & vlSelfRef.CPU__DOT___regFile_io_rs1_data)
                                                                 : 
                                                                ((0x11U 
                                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                                  ? 
                                                                 (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                                  << 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp)))
                                                                  : 
                                                                 ((0x12U 
                                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                                   ? 
                                                                  (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp)))
                                                                   : 
                                                                  ((0x13U 
                                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                                    ? 
                                                                   VL_SHIFTRS_III(32,32,5, vlSelfRef.CPU__DOT___regFile_io_rs1_data, 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp)))
                                                                    : 
                                                                   (((0x14U 
                                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                     | ((0x15U 
                                                                         == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                        | ((0x16U 
                                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                           | ((0x17U 
                                                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                              | ((0x18U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0x19U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_9) 
                                                                                | ((0x1cU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0x1dU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0x1eU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                                | (0x21U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))))))))))))))
                                                                     ? 0U
                                                                     : 
                                                                    (((0x22U 
                                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                                      | (0x23U 
                                                                         == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)))
                                                                      ? 
                                                                     ((IData)(4U) 
                                                                      + vlSelfRef.io_pc)
                                                                      : 
                                                                     ((0x24U 
                                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                                       ? (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp)
                                                                       : 
                                                                      ((0x25U 
                                                                        == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                                        ? vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10
                                                                        : 0U)))))))))))))))))))))));
    vlSelfRef.CPU__DOT__execute__DOT___GEN_29 = ((0x19U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                 | (IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_9));
    vlSelfRef.CPU__DOT___execute_io_rd_data = ((IData)(vlSelfRef.CPU__DOT___decode_io_rd_en)
                                                ? (
                                                   ((2U 
                                                     != (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)) 
                                                    | (IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_4))
                                                    ? vlSelfRef.CPU__DOT__execute__DOT___GEN_39
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_op_reg))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data))
                                                     : 
                                                    ((0x15U 
                                                      == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_op_reg))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data 
                                                                      >> 0xfU)))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data))
                                                      : 
                                                     ((0x16U 
                                                       == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_op_reg))
                                                       ? vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_op_reg))
                                                        ? 
                                                       (0xffU 
                                                        & vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data)
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_op_reg))
                                                         ? 
                                                        (0xffffU 
                                                         & vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data)
                                                         : vlSelfRef.CPU__DOT__execute__DOT___GEN_39))))))
                                                : 0U);
    vlSelfRef.CPU__DOT__execute__DOT__casez_tmp = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))
                                                    ? 
                                                   (((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_25)) 
                                                     & (((((0x14U 
                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                                           | (0x15U 
                                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                                          | (0x16U 
                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                                         | (0x17U 
                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                                        | (0x18U 
                                                           == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))))
                                                     ? 1U
                                                     : 
                                                    (((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_30)) 
                                                      & (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_29))
                                                      ? 3U
                                                      : (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))
                                                     ? 2U
                                                     : 0U));
    vlSelfRef.io_dnpc = (((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_30) 
                          | (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_29))
                          ? ((IData)(4U) + vlSelfRef.io_pc)
                          : ((0x1cU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                              ? ((IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_8)
                                  ? vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10
                                  : ((IData)(4U) + vlSelfRef.io_pc))
                              : ((0x1dU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                  ? ((IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_8)
                                      ? ((IData)(4U) 
                                         + vlSelfRef.io_pc)
                                      : vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10)
                                  : ((0x1eU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                      ? ((IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_2)
                                          ? vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10
                                          : ((IData)(4U) 
                                             + vlSelfRef.io_pc))
                                      : ((0x1fU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                          ? (VL_GTES_III(32, vlSelfRef.CPU__DOT___regFile_io_rs1_data, vlSelfRef.CPU__DOT___regFile_io_rs2_data)
                                              ? vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10
                                              : ((IData)(4U) 
                                                 + vlSelfRef.io_pc))
                                          : ((0x20U 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                              ? ((IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_3)
                                                  ? vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.io_pc))
                                              : ((0x21U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                  ? 
                                                 ((vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                                                   >= vlSelfRef.CPU__DOT___regFile_io_rs2_data)
                                                   ? vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.io_pc))
                                                  : 
                                                 ((0x22U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                   ? vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10
                                                   : 
                                                  ((0x23U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))
                                                    ? 
                                                   (0xfffffffeU 
                                                    & vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_11)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.io_pc))))))))));
}

VL_ATTR_COLD void VCPU___024root___eval_triggers__stl(VCPU___024root* vlSelf);

VL_ATTR_COLD bool VCPU___024root___eval_phase__stl(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__stl\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__ico(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__ico\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__nba(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__nba\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU___024root____Vm_traceActivitySetAll(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root____Vm_traceActivitySetAll\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ctor_var_reset\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc = VL_RAND_RESET_I(32);
    vlSelf->io_debug_pc = VL_RAND_RESET_I(32);
    vlSelf->io_debug_inst = VL_RAND_RESET_I(32);
    vlSelf->io_dnpc = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT___regFile_io_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT___regFile_io_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT___execute_io_rd_data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT___decode_io_rd_en = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T = VL_RAND_RESET_I(7);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1 = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4 = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9 = VL_RAND_RESET_I(10);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12 = VL_RAND_RESET_I(9);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14 = VL_RAND_RESET_I(6);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18 = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24 = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26 = VL_RAND_RESET_I(10);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27 = VL_RAND_RESET_I(7);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_28 = VL_RAND_RESET_I(28);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31 = VL_RAND_RESET_I(15);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40 = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51 = VL_RAND_RESET_I(15);
    vlSelf->CPU__DOT__decode__DOT__casez_tmp = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34 = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48 = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53 = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_42 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_43 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_44 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_47 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_49 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_51 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_52 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_59 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_60 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_61 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_62 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_67 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_69 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71 = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72 = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73 = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_74 = VL_RAND_RESET_I(6);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_75 = VL_RAND_RESET_I(7);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_76 = VL_RAND_RESET_I(10);
    vlSelf->CPU__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_77 = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__execute__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__execute__DOT__mem_addr_reg = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__execute__DOT__mem_data_reg = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__execute__DOT__mem_size_reg = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__execute__DOT__mem_op_reg = VL_RAND_RESET_I(8);
    vlSelf->CPU__DOT__execute__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute__DOT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute__DOT___GEN_39 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__execute__DOT___GEN_41 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute__DOT___GEN_43 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute__DOT__casez_tmp = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_0 = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_2 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_3 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_4 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_8 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_9 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_11 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__execute__DOT__read__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_0 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_1 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_2 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_3 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_4 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_5 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_6 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_7 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_8 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_9 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_10 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_11 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_12 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_13 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_14 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_15 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_16 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_17 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_18 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_19 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_20 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_21 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_22 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_23 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_24 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_25 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_26 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_27 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_28 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_29 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_30 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__rf_31 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT__casez_tmp_0 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__regFile__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_1 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
