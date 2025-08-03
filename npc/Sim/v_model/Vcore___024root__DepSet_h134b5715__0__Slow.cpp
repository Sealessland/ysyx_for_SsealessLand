// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

VL_ATTR_COLD void Vcore___024root___eval_static(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_static\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcore___024root___eval_initial(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
}

VL_ATTR_COLD void Vcore___024root___eval_final(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_final\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_settle(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_settle\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcore___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("build/core.sv", 2192, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcore___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf);
VL_ATTR_COLD void Vcore___024root____Vm_traceActivitySetAll(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcore___024root___stl_sequent__TOP__0(vlSelf);
        Vcore___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

void Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__memory_read_TOP(IData/*31:0*/ ar_addr, IData/*31:0*/ &r_data);

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debugPC = vlSelfRef.core__DOT__IFU__DOT__pc;
    vlSelfRef.io_debugInst = vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst;
    vlSelfRef.io_debugmemdata = vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data;
    vlSelfRef.core__DOT__LSU__DOT__io_in_ready_0 = 
        (0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_0 = (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_1 = (2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_3 = (3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_4 = (4U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.io_debugmemaddr = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr;
    vlSelfRef.io_debugwaddr = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr;
    vlSelfRef.core__DOT__IFU__DOT___GEN = (0U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state));
    vlSelfRef.core__DOT__IFU__DOT___GEN_0 = (1U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state));
    vlSelfRef.io_debugwdata = ((1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                ? (0xffU & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata)
                                : ((3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                    ? (0xffffU & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata)
                                    : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata));
    vlSelfRef.core__DOT__LSU__DOT___GEN_6 = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                             & (IData)(vlSelfRef.core__DOT__IFU__DOT__inst_buf_valid));
    vlSelfRef.io_inst_done = ((IData)(vlSelfRef.core__DOT__LS_reg) 
                              | (IData)(vlSelfRef.core__DOT__WBU__DOT__io_w2f_inst_done_REG));
    vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0 
        = ((0U != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
           & (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT__IFU__DOT__io_axi_ar_valid_0 
        = ((0U != (IData)(vlSelfRef.core__DOT__IFU__DOT__state)) 
           & (1U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)));
    vlSelfRef.core__DOT__IFU__DOT___GEN_2 = ((0U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)) 
                                             | (1U 
                                                == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)));
    vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_0 
        = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
           | (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_106 
        = ((2U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                  >> 0xcU)) | (1U & (~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                        >> 0xeU))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_81 
        = (IData)((0x4000U == (0x6000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_83 
        = (IData)((0x40000000U == (0xfc000000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4 
        = ((((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 6U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                            >> 0xcU)) << 1U)) | (1U 
                                                 & (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 0xeU))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_76 
        = (IData)((0x4000U == (0x5000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_86 
        = (IData)((0U == (0x5040U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_20 
        = ((((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        >> 5U)) | (1U & (~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                            >> 0xdU))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36 
        = ((((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 1U)) | (4U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                       >> 3U))) | (
                                                   (2U 
                                                    & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                         >> 0xcU)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_44 
        = ((((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 1U)) | (4U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                       >> 3U))) | (
                                                   (2U 
                                                    & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                         >> 0xdU)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9 
        = (((0x20U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      << 5U)) | ((0x10U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 3U)) 
                                 | (8U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                          << 1U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 3U)) << 2U)) | ((2U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 3U)) 
                                            | (1U & 
                                               (~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 6U))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52 
        = (IData)((0x2000U == (0x6000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24 
        = ((((0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 6U)) | (0x20U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 4U))) 
            | ((0x10U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         << 2U)) | (8U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 4U)) << 2U)) | ((2U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                >> 6U)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T 
        = ((((0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 6U)) | (0x20U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 4U))) 
            | ((0x10U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 4U)) | (8U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 3U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 5U)) << 2U)) | ((2U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 6U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 0xcU))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49 
        = (IData)((0U == (0x6000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38 
        = ((((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 1U)) | (4U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           >> 5U)) 
                                       << 2U))) | (
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                         >> 6U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                         >> 0xdU)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1 
        = ((((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 5U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                            >> 6U)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 0xdU))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60 
        = (IData)((0U == (0xfc000000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_95 
        = ((2U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 6U)) << 1U)) | (1U & (~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  >> 0xeU))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_56 
        = ((((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        >> 5U)) | (1U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                         >> 0xeU)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_96 
        = ((2U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  >> 0xeU))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_99 
        = (((0x10U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          >> 0x1aU)) << 4U)) | ((8U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                      >> 0x1bU)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                        >> 0x1cU)) 
                                                      << 2U)))) 
           | ((2U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 0x1dU)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 0x1fU)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_101 
        = ((2U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 0x1eU)) << 1U)) | (1U & (~ 
                                                  (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 0x1fU))));
    vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state)) 
           & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0));
    vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state)) 
           & (IData)(vlSelfRef.core__DOT__IFU__DOT__io_axi_ar_valid_0));
    vlSelfRef.core__DOT__Fsram__DOT___GEN = (((~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_2)) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.core__DOT__IFU__DOT__state))) 
                                             & (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__Lsram__DOT___GEN = (((~ (IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_0)) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))) 
                                             & (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_1 
        = ((IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_0) 
           | (2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37 
        = ((((0x100U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        << 8U)) | ((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                             << 6U)) 
                                   | (0x40U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 2U)) 
                                               << 6U)))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 3U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 4U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 6U)) << 3U)) | ((4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 0xcU)) 
                                                   << 2U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_106))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_84 
        = ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
               >> 0x19U)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_83));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_77 
        = (IData)(((0U == (0x60U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                   & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_76)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_24 
        = (((IData)((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36))) 
            << 1U) | (0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_44)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_66 
        = (IData)(((0x60U == (0x60U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                   & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65)));
    vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen = (IData)(
                                                            ((0x23U 
                                                              == 
                                                              (0x3fU 
                                                               & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                             & ((IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_86) 
                                                                | ((~ 
                                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                     >> 6U)) 
                                                                   & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50 
        = ((vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
            >> 0xcU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_93 
        = ((vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
            >> 0x19U) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_87 
        = ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
               >> 0xeU)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61 
        = ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
               >> 0x19U)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3 
        = ((((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 4U)) << 3U)) | ((4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 5U)) 
                                                   << 2U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_95))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11 
        = ((((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 4U)) << 3U)) | ((4U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_95))));
    vlSelfRef.core__DOT___IDU_io_out_bits_branch_en 
        = ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_20)) 
           | (0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_56)));
    vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en = 
        ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
         | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4)) 
            | (IData)(((3U == (0x5fU & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                       & (3U == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_96))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_13 
        = ((((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 4U)) << 3U)) | ((4U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_96))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_97 
        = ((4U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 0xcU)) << 2U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_96));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_58 
        = (((((0x4000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          << 0xeU)) | (0x2000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                >> 2U)) << 0xcU)) | 
                (0x800U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                               >> 3U)) << 0xbU)))) 
            | (((0x400U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                           << 6U)) | (0x200U & ((~ 
                                                 (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  >> 5U)) 
                                                << 9U))) 
               | ((0x100U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                 >> 6U)) << 8U)) | 
                  (0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                            >> 5U))))) | ((0x40U & 
                                           ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                >> 0xdU)) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 9U)) 
                                             | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_99))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_100 
        = ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 0x19U)) << 5U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_99));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_71 
        = ((((((0x8000000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                              << 0x17U)) | (0x4000000U 
                                            & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                               << 0x15U))) 
              | ((0x2000000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                << 0x13U)) | (0x1000000U 
                                              & ((~ 
                                                  (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 7U)) 
                                                 << 0x18U)))) 
             | ((0x800000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                  >> 8U)) << 0x17U)) 
                | ((0x400000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                     >> 9U)) << 0x16U)) 
                   | (0x200000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                       >> 0xaU)) << 0x15U))))) 
            | ((((0x100000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                   >> 0xbU)) << 0x14U)) 
                 | (0x80000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                    >> 0xcU)) << 0x13U))) 
                | ((0x40000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                    >> 0xdU)) << 0x12U)) 
                   | (0x20000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                      >> 0xeU)) << 0x11U)))) 
               | ((0x10000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                   >> 0xfU)) << 0x10U)) 
                  | ((0x8000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                     >> 0x10U)) << 0xfU)) 
                     | (0x4000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                       >> 0x11U)) << 0xeU)))))) 
           | (((((0x2000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                 >> 0x12U)) << 0xdU)) 
                 | (0x1000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                   >> 0x13U)) << 0xcU))) 
                | ((0x800U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                  >> 0x14U)) << 0xbU)) 
                   | (0x400U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                >> 0xbU)))) | ((0x200U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 0x16U)) 
                                                   << 9U)) 
                                               | ((0x100U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                        >> 0x17U)) 
                                                      << 8U)) 
                                                  | (0x80U 
                                                     & ((~ 
                                                         (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                          >> 0x18U)) 
                                                        << 7U))))) 
              | ((((0x40U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                 >> 0x19U)) << 6U)) 
                   | (0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                   >> 0x1aU)) << 5U))) 
                  | ((0x10U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                   >> 0x1bU)) << 4U)) 
                     | (8U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                              >> 0x19U)))) | ((4U & 
                                               (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                >> 0x1bU)) 
                                              | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_101)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_102 
        = (((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          >> 0x1aU)) << 5U)) | ((0x10U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                      >> 0x1bU)) 
                                                    << 4U)) 
                                                | (8U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                        >> 0x1cU)) 
                                                      << 3U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 0x1dU)) << 2U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_101)));
    if (vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__memory_read_TOP(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr, vlSelfRef.__Vtask_core__DOT__Lsram__DOT__read_backend__DOT__memory_read__2__r_data);
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__Lsram__DOT__read_backend__DOT__memory_read__2__r_data;
    } else {
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    if (vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__memory_read_TOP(vlSelfRef.core__DOT__IFU__DOT__pc, vlSelfRef.__Vtask_core__DOT__Fsram__DOT__read_backend__DOT__memory_read__0__r_data);
        vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__Fsram__DOT__read_backend__DOT__memory_read__0__r_data;
    } else {
        vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT__IFU__DOT___GEN_3 = ((2U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)) 
                                             & (IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN));
    vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0 
        = ((~ (IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_1)) 
           & (3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT___LSU_io_axi_b_ready = ((~ 
                                                 ((IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_1) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)))) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en 
        = (IData)(((3U == (0xfU & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                   & ((IData)(((0x1010U == (0x1070U 
                                            & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                               & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52))) 
                      | ((IData)(((0x3030U == (0x3070U 
                                               & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                  & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_87))) 
                         | (((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                 >> 4U)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_77)) 
                            | ((IData)(((0U == (0x70U 
                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_81))) 
                               | (((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                       >> 4U)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_66)) 
                                  | (IData)(((0x30U 
                                              == (0x70U 
                                                  & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                             & ((IData)(
                                                        ((0x2000U 
                                                          == 
                                                          (0x6000U 
                                                           & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                         & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_93))) 
                                                | (IData)(
                                                          ((0x5000U 
                                                            == 
                                                            (0x5000U 
                                                             & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_93)))))))))))));
    vlSelfRef.core__DOT___IDU_io_ebreakhandler = (IData)(
                                                         ((0x100070U 
                                                           == 
                                                           (0x1fffff0U 
                                                            & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                          & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_78 
        = ((vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
            >> 0xeU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_82 
        = ((vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
            >> 0xdU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62 
        = ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
               >> 0xeU)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61));
    vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren = 
        ((IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en) 
         ^ (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_103 
        = (((0x40U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          >> 3U)) << 6U)) | (0x20U 
                                             & ((~ 
                                                 (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  >> 4U)) 
                                                << 5U))) 
           | ((0x10U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        >> 1U)) | ((8U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                          >> 3U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_97))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_98 
        = ((0x10U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 5U)) << 4U)) | ((8U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 6U)) 
                                                   << 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_97)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_15 
        = (((((0x4000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          << 0xeU)) | (0x2000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                >> 2U)) << 0xcU)) | 
                (0x800U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                           << 7U)))) | (((0x400U & 
                                          (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U)) 
                                         | (0x200U 
                                            & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 6U)) 
                                               << 9U))) 
                                        | ((0x100U 
                                            & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 0xcU)) 
                                               << 8U)) 
                                           | (0x80U 
                                              & ((~ 
                                                  (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 0xdU)) 
                                                 << 7U))))) 
           | ((0x40U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                            >> 0xeU)) << 6U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_100)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_107 
        = (((0x200U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                           >> 6U)) << 9U)) | (0x100U 
                                              & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 4U))) 
           | ((0x80U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                            >> 0xdU)) << 7U)) | ((0x40U 
                                                  & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 8U)) 
                                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_100))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_105 
        = (((0x200U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                           >> 6U)) << 9U)) | (0x100U 
                                              & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 4U))) 
           | ((0x80U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                            >> 0xdU)) << 7U)) | ((0x40U 
                                                  & ((~ 
                                                      (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                       >> 0x19U)) 
                                                     << 6U)) 
                                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_102))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_104 
        = ((0x100U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          >> 6U)) << 8U)) | ((0x80U 
                                              & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 5U)) 
                                             | ((0x40U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                      >> 0xdU)) 
                                                    << 6U)) 
                                                | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_102))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16 
        = ((((0x1000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         << 0xcU)) | (0x800U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                << 0xaU))) 
            | ((0x400U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                              >> 2U)) << 0xaU)) | (0x200U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                        >> 3U)) 
                                                      << 9U)))) 
           | ((0x100U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         << 4U)) | ((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                              << 2U)) 
                                    | ((0x40U & ((~ 
                                                  (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 6U)) 
                                                 << 6U)) 
                                       | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_102)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17 
        = (((((0x4000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          << 0xeU)) | (0x2000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                >> 2U)) << 0xcU)) | 
                (0x800U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                           << 7U)))) | (((0x400U & 
                                          (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 5U)) 
                                         | (0x200U 
                                            & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 6U)) 
                                               << 9U))) 
                                        | ((0x100U 
                                            & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 0xcU)) 
                                               << 8U)) 
                                           | (0x80U 
                                              & ((~ 
                                                  (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 0xdU)) 
                                                 << 7U))))) 
           | ((0x40U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                            >> 0xeU)) << 6U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_102)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_69 
        = (((((0x2000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          << 0xdU)) | (0x1000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  << 0xbU))) 
             | ((0x800U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                               >> 2U)) << 0xbU)) | 
                (0x400U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                           << 6U)))) | ((0x200U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   << 4U)) 
                                        | ((0x100U 
                                            & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   >> 6U)) 
                                               << 8U)) 
                                           | (0x80U 
                                              & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 7U))))) 
           | ((0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        >> 0x13U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_102)));
    vlSelfRef.core__DOT__IFU__DOT___GEN_4 = (1U & (
                                                   (~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_3)) 
                                                   | (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_2)));
    vlSelfRef.io_ls_done = ((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0) 
                            | (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state)) 
           & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0));
    vlSelfRef.core__DOT__Lsram__DOT___GEN_0 = ((IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg) 
                                               & (IData)(vlSelfRef.core__DOT___LSU_io_axi_b_ready));
    vlSelfRef.core__DOT__LSU__DOT___GEN_5 = ((IData)(vlSelfRef.core__DOT___LSU_io_axi_b_ready) 
                                             & (IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg));
    vlSelfRef.core__DOT___IDU_io_csr_csrAddr = ((0U 
                                                 != (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_24))
                                                 ? 
                                                (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 0x14U)
                                                 : 0U);
    vlSelfRef.core__DOT___csr_io_read_csrData = ((0x342U 
                                                  == (IData)(vlSelfRef.core__DOT___IDU_io_csr_csrAddr))
                                                  ? vlSelfRef.core__DOT__csr__DOT__mcause
                                                  : 
                                                 ((0x341U 
                                                   == (IData)(vlSelfRef.core__DOT___IDU_io_csr_csrAddr))
                                                   ? vlSelfRef.core__DOT__csr__DOT__mepc
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelfRef.core__DOT___IDU_io_csr_csrAddr))
                                                    ? vlSelfRef.core__DOT__csr__DOT__mtvec
                                                    : 
                                                   ((0x300U 
                                                     == (IData)(vlSelfRef.core__DOT___IDU_io_csr_csrAddr))
                                                     ? vlSelfRef.core__DOT__csr__DOT__mstatus
                                                     : 0U))));
    vlSelfRef.core__DOT__LSU__DOT__is_passthrough = 
        ((~ ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren) 
             | (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen))) 
         & (IData)(vlSelfRef.core__DOT__IFU__DOT__inst_buf_valid));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23 
        = ((0x200U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      << 9U)) | ((0x100U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                            << 7U)) 
                                 | ((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                              << 5U)) 
                                    | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_103))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_22 
        = ((0x100U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      << 8U)) | ((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 6U)) 
                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_103)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7 
        = (((0x200U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 9U)) | ((0x100U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                             << 7U)) 
                                  | (0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                              << 5U)))) 
           | ((0x40U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        << 3U)) | ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 4U)) 
                                             << 5U)) 
                                   | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_98))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8 
        = (((0x100U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 8U)) | (0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 6U))) 
           | ((0x40U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                            >> 2U)) << 6U)) | ((0x20U 
                                                & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   << 1U)) 
                                               | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_98))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_59 
        = (((0x4000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        << 0xeU)) | ((0x2000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 << 0xcU)) 
                                     | (0x1000U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)))) 
           | ((0x800U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         << 8U)) | ((0x400U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                               << 6U)) 
                                    | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_107))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_60 
        = (((0x8000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        << 0xfU)) | ((0x4000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 << 0xdU)) 
                                     | (0x2000U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 2U)) 
                                                   << 0xdU)))) 
           | ((0x1000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          << 9U)) | ((0x800U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                << 7U)) 
                                     | ((0x400U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 5U)) 
                                                   << 0xaU)) 
                                        | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_107)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_108 
        = ((0x800U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      << 7U)) | ((0x400U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                            << 5U)) 
                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_107)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_30 
        = (((0x4000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        << 0xeU)) | ((0x2000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 << 0xcU)) 
                                     | (0x1000U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)))) 
           | ((0x800U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         << 8U)) | ((0x400U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                               << 6U)) 
                                    | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_105))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28 
        = (((0x4000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        << 0xeU)) | ((0x2000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 << 0xcU)) 
                                     | (0x1000U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)))) 
           | ((0x800U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 3U)) << 0xbU)) | ((0x400U 
                                                   & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                      << 6U)) 
                                                  | ((0x200U 
                                                      & ((~ 
                                                          (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                           >> 5U)) 
                                                         << 9U)) 
                                                     | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_104)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_27 
        = (((0x2000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        << 0xdU)) | ((0x1000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 << 0xbU)) 
                                     | (0x800U & ((~ 
                                                   (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                    >> 2U)) 
                                                  << 0xbU)))) 
           | ((0x400U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                             >> 3U)) << 0xaU)) | ((0x200U 
                                                   & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                      << 5U)) 
                                                  | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_104))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_71 
        = ((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_58)) 
           | (0xffffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_60)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_61 
        = ((0x4000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_108))));
    vlSelfRef.core__DOT___IDU_io_out_bits_opcode = 
        ((((IData)((0x3073U == (0x307fU & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
           << 4U) | ((8U & (((IData)(((0x63U == (0x7fU 
                                                 & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                      & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49))) 
                             | ((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28)) 
                                | ((IData)(((0x1033U 
                                             == (0x307fU 
                                                 & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                            & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61))) 
                                   | ((IData)((0x2073U 
                                               == (0x307fU 
                                                   & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                                      | ((IData)(((0x13U 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                  & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_77))) 
                                         | ((IData)(
                                                    ((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                     & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_78))) 
                                            | ((0x7fffU 
                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_58)) 
                                               | ((IData)(
                                                          ((3U 
                                                            == 
                                                            (0xfU 
                                                             & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                           & (0xfffU 
                                                              == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_108)))) 
                                                  | (IData)(
                                                            ((0x13U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                             & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65))))))))))) 
                            << 3U)) | (((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28)) 
                                        | ((IData)(
                                                   ((0x1033U 
                                                     == 
                                                     (0x107fU 
                                                      & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                    & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62))) 
                                           | ((IData)(
                                                      ((0x13U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                       & (3U 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_106)))) 
                                              | ((IData)(
                                                         ((0x2033U 
                                                           == 
                                                           (0x207fU 
                                                            & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                          & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62))) 
                                                 | ((IData)(
                                                            ((0x13U 
                                                              == 
                                                              (0x107fU 
                                                               & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                             & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_81))) 
                                                    | ((IData)(
                                                               ((0x33U 
                                                                 == 
                                                                 (0x207fU 
                                                                  & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_78))) 
                                                       | ((0xffU 
                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_56)) 
                                                          | ((0x7fffU 
                                                              == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_58)) 
                                                             | (IData)(
                                                                       ((3U 
                                                                         == 
                                                                         (0xfU 
                                                                          & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                        & (0xfffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_108)))))))))))) 
                                       << 2U))) | (
                                                   (2U 
                                                    & (((0xffU 
                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38)) 
                                                        | ((IData)(
                                                                   ((0x33U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                    & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_82))) 
                                                           | ((IData)(
                                                                      (0x2073U 
                                                                       == 
                                                                       (0x307fU 
                                                                        & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                                                              | ((0xffU 
                                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_56)) 
                                                                 | ((0x7fffU 
                                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_58)) 
                                                                    | ((IData)(
                                                                               ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (0xfffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_108)))) 
                                                                       | (IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_84))))))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((IData)(
                                                                       ((3U 
                                                                         == 
                                                                         (0x2fU 
                                                                          & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_86))) 
                                                               | ((0x3fU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                                  | ((IData)(
                                                                             ((0x33U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62))) 
                                                                     | ((0x3ffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23)) 
                                                                        | ((0x7fU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                           | ((IData)(
                                                                                ((0x1013U 
                                                                                == 
                                                                                (0x307fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_87))) 
                                                                              | ((IData)(
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50))) 
                                                                                | ((IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x307fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                                                                                | ((IData)(
                                                                                ((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (3U 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_106)))) 
                                                                                | ((IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_82))) 
                                                                                | ((IData)(
                                                                                (0x2073U 
                                                                                == 
                                                                                (0x307fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                                                                                | (IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & ((IData)(
                                                                                ((0x60U 
                                                                                == 
                                                                                (0x70U 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_76))) 
                                                                                | ((vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                                >> 4U) 
                                                                                & ((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7060U 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_83))) 
                                                                                | (IData)(
                                                                                ((0x5020U 
                                                                                == 
                                                                                (0x7060U 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_84))))))))))))))))))))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_T_1 
        = (((8U & ((IData)(((0x13U == (0x1fU & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                            & ((IData)((0x5060U == 
                                        (0x5060U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                               | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_66)))) 
                   << 3U)) | (((0x3fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                               | ((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                  | ((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28)) 
                                     | ((IData)(((0x1bU 
                                                  == 
                                                  (0x3fU 
                                                   & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                 & (0x3ffU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_105)))) 
                                        | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_71))))) 
                              << 2U)) | ((((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11)) 
                                           | ((0xffU 
                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_13)) 
                                              | ((0x7fffU 
                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28)) 
                                                 | ((IData)(
                                                            ((0x1bU 
                                                              == 
                                                              (0x3fU 
                                                               & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                             & (0x3ffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_105)))) 
                                                    | ((0xffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_56)) 
                                                       | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_71)))))) 
                                          << 1U) | 
                                         ((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                          | ((0xffU 
                                              == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                             | ((0xffU 
                                                 == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                | ((0x1ffU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                                   | ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_20)) 
                                                      | ((0x1ffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_22)) 
                                                         | ((0x7fU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                            | ((IData)(
                                                                       ((0x1bU 
                                                                         == 
                                                                         (0x3fU 
                                                                          & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                        & (0x3ffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_105)))) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38)) 
                                                                  | ((0xffU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_56)) 
                                                                     | (0xffffU 
                                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_60))))))))))))));
    vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr = 
        (((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
          | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
             | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                | ((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7)) 
                   | ((0x1ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                      | ((0x3fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                         | ((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_15)) 
                            | ((0x1fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                               | ((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)) 
                                  | ((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23)) 
                                     | ((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                        | ((0x3fffU 
                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                           | ((0x7fffU 
                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_30)) 
                                              | ((0xffU 
                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36)) 
                                                 | ((0xffU 
                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38)) 
                                                    | ((0xffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_44)) 
                                                       | ((0x7fffU 
                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_58)) 
                                                          | ((0x7fffU 
                                                              == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_59)) 
                                                             | ((0x7fffU 
                                                                 == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_61)) 
                                                                | (0x3fffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_69)))))))))))))))))))))
          ? (0x1fU & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 7U)) : 0U);
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_109 
        = (((IData)((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_61))) 
            << 1U) | (0x3fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_69)));
    vlSelfRef.core__DOT___IDU_io_out_bits_imm = ((8U 
                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_T_1))
                                                  ? (QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                        >> 0xfU))))
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_T_1))
                                                   ? (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                         >> 0x14U))))
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_T_1))
                                                    ? (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                          >> 0x14U))))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_T_1))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                          >> 0x1fU)))) 
                                                      << 0x14U) 
                                                     | (QData)((IData)(
                                                                       (((0xff000U 
                                                                          & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst) 
                                                                         | (0x800U 
                                                                            & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                               >> 9U))) 
                                                                        | (0x7feU 
                                                                           & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                              >> 0x14U))))))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_T_1))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_T_1))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0x800U 
                                                                           & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                                >> 7U)))))))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_T_1))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0xfe0U 
                                                                            & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                               >> 0x14U)) 
                                                                           | (0x1fU 
                                                                              & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                                >> 7U))))))
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_T_1))
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                            >> 0x14U))))
                                                         : 0ULL))))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_19 
        = ((((((IData)((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11))) 
               << 2U) | (((IData)((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_13))) 
                          << 1U) | (0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_15)))) 
             << 6U) | ((((IData)((0x1fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16))) 
                         << 1U) | (0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17))) 
                       << 4U)) | (((IData)(((0x33U 
                                             == (0x2077U 
                                                 & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                            & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62))) 
                                   << 3U) | (((IData)(
                                                      (0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_56))) 
                                              << 2U) 
                                             | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_109))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_17 
        = (((((((IData)((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T))) 
                << 2U) | (((IData)((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1))) 
                           << 1U) | (IData)((3U == 
                                             (0x405fU 
                                              & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))))) 
              << 0x10U) | ((((IData)((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7))) 
                             << 1U) | (0x1ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8))) 
                           << 0xeU)) | (((((IData)(
                                                   (0x7fffU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_15))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0x1fffU 
                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16))) 
                                            << 1U) 
                                           | (0x7fffU 
                                              == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)))) 
                                         << 0xbU) | 
                                        ((((IData)(
                                                   (0x1ffU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_22))) 
                                           << 1U) | 
                                          (0x3fffU 
                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_27))) 
                                         << 9U))) | 
           ((((((IData)((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_30))) 
                << 2U) | (((IData)(((0x63U == (0x6fU 
                                               & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                    & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50))) 
                           << 1U) | (0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38)))) 
              << 6U) | ((((IData)(((0x73U == (0x7fU 
                                              & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                   & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52))) 
                          << 1U) | (0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_56))) 
                        << 4U)) | (((IData)((0x7fffU 
                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_58))) 
                                    << 3U) | (((IData)(
                                                       (0x7fffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_59))) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_109)))));
    if ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))) {
        vlSelfRef.core__DOT___WBU_io_out_en = ((IData)(vlSelfRef.core__DOT__LSU__DOT__is_passthrough) 
                                               & (IData)(vlSelfRef.core__DOT__IFU__DOT__inst_buf_valid));
        vlSelfRef.core__DOT___WBU_io_out_addr = vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr;
    } else {
        vlSelfRef.core__DOT___WBU_io_out_en = ((1U 
                                                != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                               & ((2U 
                                                   == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
                                                   ? (IData)(vlSelfRef.core__DOT__Lsram__DOT___GEN)
                                                   : 
                                                  ((3U 
                                                    != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                                   & ((4U 
                                                       == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                                      & (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_5)))));
        vlSelfRef.core__DOT___WBU_io_out_addr = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_addr;
    }
    vlSelfRef.core__DOT__rf__DOT___GEN = ((IData)(vlSelfRef.core__DOT___WBU_io_out_en) 
                                          & (0U != (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)));
    vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr = ((0U 
                                                  != (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_19))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 0x14U))
                                                  : 0U);
    vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr = ((0U 
                                                  != vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_17)
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 0xfU))
                                                  : 0U);
    vlSelfRef.core__DOT__rf__DOT__casez_tmp_0 = ((0x10U 
                                                  & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_31
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_30)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_29
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_28))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_27
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_26)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_25
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_24)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_23
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_22)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_21
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_20))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_19
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_18)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_17
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_16))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_15
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_14)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_13
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_12))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_11
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_10)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_9
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_8)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_7
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_6)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_5
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_4))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_3
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_2)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_1
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_0)))));
    vlSelfRef.core__DOT__rf__DOT__casez_tmp = ((0x10U 
                                                & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_31
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_30)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_29
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_28))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_27
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_26)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_25
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_24)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_23
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_22)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_21
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_20))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_19
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_18)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_17
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_16))))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_15
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_14)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_13
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_12))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_11
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_10)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_9
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_8)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_7
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_6)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_5
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_4))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_3
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_2)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_1
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_0)))));
    vlSelfRef.io_debugin2 = (((0U != (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_19)) 
                              & (0U != (0x1fU & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 0x14U))))
                              ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                              : 0U);
    vlSelfRef.io_debugin1 = (((0U != vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_17) 
                              & (0U != (0x1fU & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 0xfU))))
                              ? vlSelfRef.core__DOT__rf__DOT__casez_tmp
                              : 0U);
    if ((0U != (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_24))) {
        vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2 
            = vlSelfRef.core__DOT__EXU__DOT__csr_temp;
        vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
            = ((0U != vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_17)
                ? vlSelfRef.io_debugin1 : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_imm));
    } else {
        vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2 
            = ((1U & ((~ (IData)((0U != (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_19)))) 
                      | ((IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en) 
                         & (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen))))
                ? (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_imm)
                : vlSelfRef.io_debugin2);
        vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
            = ((1U & ((IData)((0x17U == (0x7fU & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                      | (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24))))
                ? vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_pc
                : vlSelfRef.io_debugin1);
    }
    vlSelfRef.core__DOT__EXU__DOT__alu__DOT___logic_res_T_4 
        = ((~ vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2) 
           & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1);
    vlSelfRef.core__DOT__EXU__DOT___alu_io_out = ((0U 
                                                   == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                   ? vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                    ? 
                                                   VL_MODDIV_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                     ? 
                                                    ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en)
                                                      ? 
                                                     VL_DIV_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                      : (IData)(
                                                                (0x1ffffffffULL 
                                                                 & VL_DIVS_QQQ(33, 
                                                                               (((QData)((IData)(
                                                                                (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                                >> 0x1fU))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1))), 
                                                                               (((QData)((IData)(
                                                                                (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2 
                                                                                >> 0x1fU))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)))))))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                      ? 
                                                     (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                      * vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                       ? 
                                                      VL_SHIFTRS_III(32,32,5, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, 
                                                                     (0x1fU 
                                                                      & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                       : 
                                                      ((0xeU 
                                                        == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                        ? 
                                                       (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                        : 
                                                       ((0xdU 
                                                         == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                         ? 
                                                        (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                         << 
                                                         (0x1fU 
                                                          & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                         : 
                                                        ((0xcU 
                                                          == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                          ? 
                                                         ((0x10U 
                                                           == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                           ? vlSelfRef.core__DOT__EXU__DOT__alu__DOT___logic_res_T_4
                                                           : 
                                                          (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                           ^ vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                           ? 
                                                          ((0x10U 
                                                            == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                            ? vlSelfRef.core__DOT__EXU__DOT__alu__DOT___logic_res_T_4
                                                            : 
                                                           (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                            | vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                           : 
                                                          ((0xaU 
                                                            == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                            ? 
                                                           ((0x10U 
                                                             == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                             ? vlSelfRef.core__DOT__EXU__DOT__alu__DOT___logic_res_T_4
                                                             : 
                                                            (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                             & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                            : 
                                                           ((9U 
                                                             == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                             ? 
                                                            (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                             != vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                             : 
                                                            ((8U 
                                                              == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                              ? 
                                                             (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                              == vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                               ? 
                                                              ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en)
                                                                ? 
                                                               (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                >= vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                : 
                                                               VL_GTES_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                               : 
                                                              ((7U 
                                                                == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                                ? 
                                                               ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en)
                                                                 ? 
                                                                (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                 < vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                 : 
                                                                VL_LTS_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                                 ? 
                                                                (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                 - vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_opcode))
                                                                  ? 
                                                                 (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                  + vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                  : 0U))))))))))))))));
    vlSelfRef.io_debugout1 = ((0U != (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_24))
                               ? vlSelfRef.core__DOT___csr_io_read_csrData
                               : (((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23)) 
                                   | (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)))
                                   ? ((IData)(4U) + vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_pc)
                                   : vlSelfRef.core__DOT__EXU__DOT___alu_io_out));
    vlSelfRef.core__DOT___WBU_io_out_data = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
                                              ? vlSelfRef.io_debugout1
                                              : ((2U 
                                                  == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
                                                  ? 
                                                 ((0xfU 
                                                   == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                                   ? vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                                    ? 
                                                   ((((IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en)
                                                       ? 0U
                                                       : 
                                                      (0xffffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data 
                                                                        >> 0xfU)))))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                                     ? 
                                                    ((((IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en)
                                                        ? 0U
                                                        : 
                                                       (0xffffffU 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data 
                                                                         >> 7U)))))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data))
                                                     : 0U)))
                                                  : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_data));
    if ((0xfffffffU == vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_71)) {
        vlSelfRef.core__DOT___EXU_io_csr_addr = 0x341U;
        vlSelfRef.core__DOT___EXU_io_pcCtrl_dnpc = vlSelfRef.core__DOT__EXU__DOT__csr_temp;
    } else {
        vlSelfRef.core__DOT___EXU_io_csr_addr = vlSelfRef.core__DOT___IDU_io_csr_csrAddr;
        vlSelfRef.core__DOT___EXU_io_pcCtrl_dnpc = 
            ((1U & ((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                    | ((~ (IData)((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23)))) 
                       | (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_branch_en))))
              ? (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_pc 
                 + (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_imm))
              : vlSelfRef.core__DOT__EXU__DOT___alu_io_out);
    }
    vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel = (((IData)(vlSelfRef.core__DOT___IDU_io_out_bits_branch_en) 
                                                  & vlSelfRef.core__DOT__EXU__DOT___alu_io_out) 
                                                 | ((0x7fU 
                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                    | ((0x3ffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23)) 
                                                       | (0xfffffffU 
                                                          == vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_71))));
}

VL_ATTR_COLD void Vcore___024root___eval_triggers__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcore___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vcore___024root___dump_triggers__nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcore___024root____Vm_traceActivitySetAll(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root____Vm_traceActivitySetAll\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___ctor_var_reset\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_debugPC = VL_RAND_RESET_I(32);
    vlSelf->io_debugInst = VL_RAND_RESET_I(32);
    vlSelf->io_debugin1 = VL_RAND_RESET_I(32);
    vlSelf->io_debugin2 = VL_RAND_RESET_I(32);
    vlSelf->io_debugout1 = VL_RAND_RESET_I(32);
    vlSelf->io_debugmemaddr = VL_RAND_RESET_I(32);
    vlSelf->io_debugmemdata = VL_RAND_RESET_I(32);
    vlSelf->io_debugwaddr = VL_RAND_RESET_I(32);
    vlSelf->io_debugwdata = VL_RAND_RESET_I(32);
    vlSelf->io_inst_done = VL_RAND_RESET_I(1);
    vlSelf->io_ls_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___csr_io_read_csrData = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___WBU_io_out_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___WBU_io_out_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___WBU_io_out_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___LSU_io_axi_b_ready = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_out_bits_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___EXU_io_out_bits_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_out_bits_mem_ren = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_out_bits_unsign_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_pcCtrl_pcSel = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___EXU_io_pcCtrl_dnpc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT___EXU_io_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->core__DOT___IDU_io_out_bits_opcode = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___IDU_io_out_bits_imm = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT___IDU_io_out_bits_lsu_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_bits_branch_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_csr_csrAddr = VL_RAND_RESET_I(12);
    vlSelf->core__DOT___IDU_io_d2r_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___IDU_io_d2r_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___IDU_io_ebreakhandler = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LS_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__r_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT___write_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT___read_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT___read_backend_io_en_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__write_backend_io_en_REG = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__r_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__r_bits_reg_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__w_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__write_backend_io_aw_addr_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__write_backend_io_w_data_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__write_backend_io_w_strb_REG = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__Fsram__DOT__b_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__read_backend__DOT__delay = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__Lsram__DOT__r_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___write_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___read_backend_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___read_backend_io_en_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__write_backend_io_en_REG = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__r_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__r_bits_reg_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__w_state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__write_backend_io_aw_addr_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__write_backend_io_w_data_REG = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__write_backend_io_w_strb_REG = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__Lsram__DOT__b_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT___write_backend_io_en_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__read_backend__DOT__delay = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__IFU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT__inst_buf_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT__inst_buf_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT__inst_buf_bits_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IFU__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT__io_axi_ar_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_13 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_15 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16 = VL_RAND_RESET_I(13);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_20 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_22 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_27 = VL_RAND_RESET_I(14);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_30 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_44 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_56 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_58 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_59 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_60 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_61 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_69 = VL_RAND_RESET_I(14);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_71 = VL_RAND_RESET_I(28);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_17 = VL_RAND_RESET_I(19);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_19 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_24 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_T_1 = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_66 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_71 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_76 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_77 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_78 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_81 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_82 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_83 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_84 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_86 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_87 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_93 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_95 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_96 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_97 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_98 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_99 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_100 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_101 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_102 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_103 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_104 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_105 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_106 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_107 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_108 = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_109 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__EXU__DOT___alu_io_out = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__EXU__DOT__csr_temp = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__EXU__DOT____Vcellinp__alu__io_in2 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__EXU__DOT____Vcellinp__alu__io_in1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__EXU__DOT__alu__DOT___logic_res_T_4 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_0 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_2 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_3 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_4 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_5 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_6 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_7 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_8 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_9 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_10 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_11 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_12 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_13 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_14 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_15 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_16 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_17 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_18 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_19 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_20 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_21 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_22 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_23 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_24 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_25 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_26 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_27 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_28 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_29 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_30 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__rf_31 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT__casez_tmp_0 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__rf__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_mem_len = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__LSU__DOT__e2l_reg_unsign_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__is_passthrough = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__io_in_ready_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__io_axi_ar_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__io_axi_w_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__WBU__DOT__io_w2f_inst_done_REG = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_core__DOT__Fsram__DOT__read_backend__DOT__memory_read__0__r_data = 0;
    vlSelf->__Vtask_core__DOT__Lsram__DOT__read_backend__DOT__memory_read__2__r_data = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
