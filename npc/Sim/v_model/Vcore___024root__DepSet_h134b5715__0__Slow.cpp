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
            VL_FATAL_MT("build/core.sv", 1730, "", "Settle region did not converge.");
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

void Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &mem_read__Vfuncrtn);
extern const VlUnpacked<CData/*1:0*/, 128> Vcore__ConstPool__TABLE_h82da166c_0;

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debugPC = vlSelfRef.core__DOT__IFU__DOT__result_reg_pc;
    vlSelfRef.io_debugInst = vlSelfRef.core__DOT__IFU__DOT__result_reg_inst;
    vlSelfRef.io_debugmemaddr = vlSelfRef.core__DOT__dataReg_4_mem_addr;
    vlSelfRef.io_debugmemdata = vlSelfRef.core__DOT__dataReg_7_rdata;
    vlSelfRef.io_Log_valid2 = vlSelfRef.core__DOT__validReg;
    vlSelfRef.io_Log_valid3 = vlSelfRef.core__DOT__validReg_3;
    vlSelfRef.io_Log_valid5 = vlSelfRef.core__DOT__validReg_5;
    vlSelfRef.core__DOT__IFU__DOT___pc_T = ((IData)(4U) 
                                            + vlSelfRef.core__DOT__IFU__DOT__pc);
    vlSelfRef.core__DOT__Fsram__DOT__readDPI__DOT__rdata_reg = 0ULL;
    vlSelfRef.core__DOT__Fsram__DOT__readDPI__DOT__rdata_reg 
        = VL_EXTEND_QI(64,32, ([&]() {
                Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(vlSelfRef.core__DOT__dataReg_1_addr, vlSelfRef.__Vfunc_core__DOT__Fsram__DOT__readDPI__DOT__mem_read__0__Vfuncout);
            }(), vlSelfRef.__Vfunc_core__DOT__Fsram__DOT__readDPI__DOT__mem_read__0__Vfuncout));
    vlSelfRef.io_inst_done = ((IData)(vlSelfRef.core__DOT__dataReg_5_rd_en) 
                              & (IData)(vlSelfRef.core__DOT__validReg_5));
    vlSelfRef.io_log_ready5 = ((~ (IData)(vlSelfRef.core__DOT__IFU__DOT__is_first_inst)) 
                               & (0U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)));
    vlSelfRef.core__DOT__producerFire_2 = ((~ (IData)(vlSelfRef.core__DOT__validReg_2)) 
                                           & (IData)(vlSelfRef.core__DOT__Fsram__DOT__resp_valid_reg));
    vlSelfRef.core__DOT__producerFire_7 = ((~ (IData)(vlSelfRef.core__DOT__validReg_7)) 
                                           & (IData)(vlSelfRef.core__DOT__Lsram__DOT__resp_valid_reg));
    vlSelfRef.core__DOT__Fsram__DOT___rdata_reg_T = 
        (((~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__resp_valid_reg)) 
          | (~ (IData)(vlSelfRef.core__DOT__validReg_2))) 
         & (IData)(vlSelfRef.core__DOT__validReg_1));
    vlSelfRef.core__DOT__Lsram__DOT___rdata_reg_T = 
        (((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__resp_valid_reg)) 
          | (~ (IData)(vlSelfRef.core__DOT__validReg_7))) 
         & (IData)(vlSelfRef.core__DOT__validReg_6));
    vlSelfRef.io_log_ready4 = (1U & (~ (IData)(vlSelfRef.core__DOT__validReg_8)));
    vlSelfRef.io_log_ready1 = (1U & (~ (IData)(vlSelfRef.core__DOT__validReg_3)));
    vlSelfRef.io_log_ready2 = (1U & (~ (IData)(vlSelfRef.core__DOT__validReg_4)));
    vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2 
        = ((IData)(vlSelfRef.core__DOT__dataReg_3_rs2_en)
            ? vlSelfRef.core__DOT__dataReg_3_rs2_data
            : (IData)(vlSelfRef.core__DOT__dataReg_3_imm));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_55 
        = (IData)((0x2000U == (0x6000U & vlSelfRef.core__DOT__dataReg_inst)));
    vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
        = (((IData)(vlSelfRef.core__DOT__dataReg_3_branch_en) 
            | (IData)(vlSelfRef.core__DOT__dataReg_3_jump_en))
            ? vlSelfRef.core__DOT__dataReg_3_pc : vlSelfRef.core__DOT__dataReg_3_rs1_data);
    vlSelfRef.core__DOT__IFU__DOT___GEN_1 = ((~ (IData)(vlSelfRef.core__DOT__validReg_1)) 
                                             & ((0U 
                                                 != (IData)(vlSelfRef.core__DOT__IFU__DOT__state)) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.core__DOT__IFU__DOT__state))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_21 
        = ((((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.core__DOT__dataReg_inst 
                        >> 5U)) | (1U & (~ (vlSelfRef.core__DOT__dataReg_inst 
                                            >> 0xdU))))));
    vlSelfRef.core__DOT__Lsram__DOT__readDPI__DOT__rdata_reg = 0ULL;
    if ((1U & (IData)(vlSelfRef.core__DOT__dataReg_6_len))) {
        vlSelfRef.core__DOT__Lsram__DOT__readDPI__DOT__rdata_reg 
            = ((2U & vlSelfRef.core__DOT__dataReg_6_addr)
                ? ((1U & vlSelfRef.core__DOT__dataReg_6_addr)
                    ? VL_EXTEND_QI(64,8, (([&]() {
                                Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(
                                                                                (vlSelfRef.core__DOT__dataReg_6_addr 
                                                                                - (IData)(3U)), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__1__Vfuncout);
                            }(), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__1__Vfuncout) 
                                          >> 0x18U))
                    : VL_EXTEND_QI(64,8, (0xffU & (
                                                   ([&]() {
                                    Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(
                                                                                (vlSelfRef.core__DOT__dataReg_6_addr 
                                                                                - (IData)(2U)), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__2__Vfuncout);
                                }(), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__2__Vfuncout) 
                                                   >> 0x10U))))
                : ((1U & vlSelfRef.core__DOT__dataReg_6_addr)
                    ? VL_EXTEND_QI(64,8, (0xffU & (
                                                   ([&]() {
                                    Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(
                                                                                (vlSelfRef.core__DOT__dataReg_6_addr 
                                                                                - (IData)(1U)), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__3__Vfuncout);
                                }(), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__3__Vfuncout) 
                                                   >> 8U)))
                    : VL_EXTEND_QI(64,8, (0xffU & ([&]() {
                                Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(vlSelfRef.core__DOT__dataReg_6_addr, vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__4__Vfuncout);
                            }(), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__4__Vfuncout)))));
    } else if ((2U & (IData)(vlSelfRef.core__DOT__dataReg_6_len))) {
        if ((2U & vlSelfRef.core__DOT__dataReg_6_addr)) {
            if ((2U & vlSelfRef.core__DOT__dataReg_6_addr)) {
                vlSelfRef.core__DOT__Lsram__DOT__readDPI__DOT__rdata_reg 
                    = VL_EXTEND_QI(64,16, (([&]() {
                                Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(
                                                                                (vlSelfRef.core__DOT__dataReg_6_addr 
                                                                                - (IData)(2U)), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__6__Vfuncout);
                            }(), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__6__Vfuncout) 
                                           >> 0x10U));
            }
        } else {
            vlSelfRef.core__DOT__Lsram__DOT__readDPI__DOT__rdata_reg 
                = VL_EXTEND_QI(64,16, (0xffffU & ([&]() {
                            Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(vlSelfRef.core__DOT__dataReg_6_addr, vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__5__Vfuncout);
                        }(), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__5__Vfuncout)));
        }
    } else if ((4U & (IData)(vlSelfRef.core__DOT__dataReg_6_len))) {
        vlSelfRef.core__DOT__Lsram__DOT__readDPI__DOT__rdata_reg 
            = VL_EXTEND_QI(64,32, ([&]() {
                    Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(vlSelfRef.core__DOT__dataReg_6_addr, vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__7__Vfuncout);
                }(), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__7__Vfuncout));
    } else if ((8U & (IData)(vlSelfRef.core__DOT__dataReg_6_len))) {
        vlSelfRef.core__DOT__Lsram__DOT__readDPI__DOT__rdata_reg 
            = (((QData)((IData)(([&]() {
                                Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(
                                                                                ((IData)(4U) 
                                                                                + vlSelfRef.core__DOT__dataReg_6_addr), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__8__Vfuncout);
                            }(), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__8__Vfuncout))) 
                << 0x20U) | (QData)((IData)(([&]() {
                            Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__readDPI__DOT__mem_read_TOP(vlSelfRef.core__DOT__dataReg_6_addr, vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__9__Vfuncout);
                        }(), vlSelfRef.__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__9__Vfuncout))));
    }
    vlSelfRef.core__DOT__consumerFire_7 = ((IData)(vlSelfRef.core__DOT__LSU__DOT__state) 
                                           & (IData)(vlSelfRef.core__DOT__validReg_7));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51 
        = (IData)((0U == (0x5040U & vlSelfRef.core__DOT__dataReg_inst)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_5 
        = ((((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 6U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                            >> 0xcU)) << 1U)) | (1U 
                                                 & (~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 0xeU))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52 
        = ((((0x100U & (vlSelfRef.core__DOT__dataReg_inst 
                        << 8U)) | ((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                                             << 6U)) 
                                   | (0x40U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 2U)) 
                                               << 6U)))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 3U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 4U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT__dataReg_inst 
                      >> 2U)) | (4U & (vlSelfRef.core__DOT__dataReg_inst 
                                       >> 4U))) | (
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.core__DOT__dataReg_inst 
                                                         >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT__dataReg_inst 
                                                         >> 0xeU)))));
    vlSelfRef.core__DOT__LSU__DOT__is_load = ((~ (IData)(vlSelfRef.core__DOT__dataReg_4_mem_wen)) 
                                              & (IData)(vlSelfRef.core__DOT__dataReg_4_rd_en));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_39 
        = (IData)((0x4000U == (0x5060U & vlSelfRef.core__DOT__dataReg_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.core__DOT__dataReg_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_45 
        = (IData)((0x4000U == (0x6000U & vlSelfRef.core__DOT__dataReg_inst)));
    vlSelfRef.core__DOT__RF__DOT__casez_tmp = ((0x80000U 
                                                & vlSelfRef.core__DOT__dataReg_inst)
                                                ? (
                                                   (0x40000U 
                                                    & vlSelfRef.core__DOT__dataReg_inst)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_31
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_30)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_29
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_28))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_27
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_26)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_25
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_24)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_23
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_22)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_21
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_20))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_19
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_18)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_17
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_16))))
                                                : (
                                                   (0x40000U 
                                                    & vlSelfRef.core__DOT__dataReg_inst)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_15
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_14)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_13
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_12))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_11
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_10)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_9
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_8)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_7
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_6)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_5
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_4))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_3
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_2)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT__dataReg_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_1
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_0)))));
    vlSelfRef.core__DOT__RF__DOT__casez_tmp_0 = ((0x1000000U 
                                                  & vlSelfRef.core__DOT__dataReg_inst)
                                                  ? 
                                                 ((0x800000U 
                                                   & vlSelfRef.core__DOT__dataReg_inst)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT__dataReg_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_31
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_30)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_29
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_28))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_27
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_26)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_25
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_24)))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT__dataReg_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_23
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_22)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_21
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_20))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_19
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_18)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_17
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_16))))
                                                  : 
                                                 ((0x800000U 
                                                   & vlSelfRef.core__DOT__dataReg_inst)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT__dataReg_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_15
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_14)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_13
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_12))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_11
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_10)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_9
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_8)))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT__dataReg_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_7
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_6)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_5
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_4))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT__dataReg_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_3
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_2)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT__dataReg_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_1
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_0)))));
    vlSelfRef.core__DOT__IFU__DOT___GEN_3 = ((0U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)) 
                                             | (1U 
                                                == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11 
        = (((0x20U & (vlSelfRef.core__DOT__dataReg_inst 
                      << 5U)) | ((0x10U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 3U)) 
                                 | (8U & (vlSelfRef.core__DOT__dataReg_inst 
                                          << 1U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                         >> 3U)) << 2U)) | ((2U & (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 3U)) 
                                            | (1U & 
                                               (~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 6U))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T 
        = ((((0x40U & (vlSelfRef.core__DOT__dataReg_inst 
                       << 6U)) | (0x20U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 4U))) 
            | ((0x10U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 2U)) << 4U)) | (8U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 3U)) 
                                                   << 3U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                         >> 5U)) << 2U)) | ((2U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 6U)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 0xcU))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51 
        = ((((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.core__DOT__dataReg_inst 
                        >> 5U)) | (1U & (vlSelfRef.core__DOT__dataReg_inst 
                                         >> 0xeU)))));
    vlSelfRef.io_log_ready3 = (1U & (~ (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_48 
        = (IData)((0x40000000U == (0xfc000000U & vlSelfRef.core__DOT__dataReg_inst)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25 
        = ((((0x40U & (vlSelfRef.core__DOT__dataReg_inst 
                       << 6U)) | (0x20U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 4U))) 
            | ((0x10U & (vlSelfRef.core__DOT__dataReg_inst 
                         << 2U)) | (8U & vlSelfRef.core__DOT__dataReg_inst))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                         >> 4U)) << 2U)) | ((2U & (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT__dataReg_inst 
                                                >> 6U)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1 
        = ((((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 5U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                            >> 6U)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 0xdU))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37 
        = ((((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT__dataReg_inst 
                      >> 1U)) | (4U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                           >> 5U)) 
                                       << 2U))) | (
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.core__DOT__dataReg_inst 
                                                         >> 6U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT__dataReg_inst 
                                                         >> 0xdU)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_58 
        = ((2U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                      >> 6U)) << 1U)) | (1U & (~ (vlSelfRef.core__DOT__dataReg_inst 
                                                  >> 0xeU))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27 
        = (IData)((0U == (0x6000U & vlSelfRef.core__DOT__dataReg_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_59 
        = ((2U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelfRef.core__DOT__dataReg_inst 
                                                  >> 0xeU))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_63 
        = (((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                          >> 0x1aU)) << 5U)) | ((0x10U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT__dataReg_inst 
                                                      >> 0x1bU)) 
                                                    << 4U)) 
                                                | (8U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT__dataReg_inst 
                                                        >> 0x1cU)) 
                                                      << 3U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                         >> 0x1dU)) << 2U)) | ((2U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 0x1eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.core__DOT__dataReg_inst 
                                                      >> 0x1fU))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61 
        = (((0x10U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                          >> 0x1aU)) << 4U)) | ((8U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT__dataReg_inst 
                                                      >> 0x1bU)) 
                                                    << 3U)) 
                                                | (4U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT__dataReg_inst 
                                                        >> 0x1cU)) 
                                                      << 2U)))) 
           | ((2U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                         >> 0x1dU)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 0x1fU)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32 
        = (IData)((0U == (0xfc000000U & vlSelfRef.core__DOT__dataReg_inst)));
    vlSelfRef.core__DOT__RF__DOT___GEN = ((IData)(vlSelfRef.io_inst_done) 
                                          & (0U != (IData)(vlSelfRef.core__DOT__dataReg_5_rd_addr)));
    vlSelfRef.core__DOT__consumerFire_8 = ((IData)(vlSelfRef.io_log_ready5) 
                                           & (IData)(vlSelfRef.core__DOT__validReg_8));
    vlSelfRef.core__DOT__producerFire_8 = ((IData)(vlSelfRef.io_log_ready4) 
                                           & (IData)(vlSelfRef.core__DOT__validReg_5));
    vlSelfRef.core__DOT__producerFire_3 = ((IData)(vlSelfRef.io_log_ready1) 
                                           & (IData)(vlSelfRef.core__DOT__validReg));
    vlSelfRef.core__DOT__producerFire_4 = ((IData)(vlSelfRef.io_log_ready2) 
                                           & (IData)(vlSelfRef.core__DOT__validReg_3));
    vlSelfRef.core__DOT__EXU__DOT___alu_io_out = ((5U 
                                                   == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                   ? 
                                                  VL_MODDIV_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                    ? 
                                                   ((IData)(vlSelfRef.core__DOT__dataReg_3_unsign_en)
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
                                                     == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                     ? 
                                                    (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                     * vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, 
                                                                    (0x1fU 
                                                                     & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                       ? 
                                                      (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                        ? 
                                                       (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                         ? 
                                                        (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                         ^ vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                          ? 
                                                         (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                          | vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                           ? 
                                                          (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                           & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                            ? 
                                                           (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                            != vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                             ? 
                                                            (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                             == vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                              ? 
                                                             ((IData)(vlSelfRef.core__DOT__dataReg_3_unsign_en)
                                                               ? 
                                                              (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                               >= vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                               : 
                                                              VL_GTES_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                              : 
                                                             ((7U 
                                                               == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                               ? 
                                                              ((IData)(vlSelfRef.core__DOT__dataReg_3_unsign_en)
                                                                ? 
                                                               (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                < vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                : 
                                                               VL_LTS_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                                ? 
                                                               (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                - vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelfRef.core__DOT__dataReg_3_opcode))
                                                                 ? 
                                                                (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                 + vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                 : 0U)))))))))))))));
    vlSelfRef.core__DOT___GEN_0 = ((IData)(vlSelfRef.core__DOT__Fsram__DOT___rdata_reg_T) 
                                   & (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_1));
    vlSelfRef.core__DOT___GEN_6 = ((IData)(vlSelfRef.core__DOT__consumerFire_7) 
                                   & (IData)(vlSelfRef.core__DOT__producerFire_7));
    vlSelfRef.core__DOT__LSU__DOT___GEN_2 = ((IData)(vlSelfRef.core__DOT__LSU__DOT__state) 
                                             & (IData)(vlSelfRef.core__DOT__consumerFire_7));
    vlSelfRef.io_debugin1 = ((0U != (0x1fU & (vlSelfRef.core__DOT__dataReg_inst 
                                              >> 0xfU)))
                              ? (IData)(vlSelfRef.core__DOT__RF__DOT__casez_tmp)
                              : 0U);
    vlSelfRef.io_debugin2 = ((0U != (0x1fU & (vlSelfRef.core__DOT__dataReg_inst 
                                              >> 0x14U)))
                              ? (IData)(vlSelfRef.core__DOT__RF__DOT__casez_tmp_0)
                              : 0U);
    vlSelfRef.core__DOT__consumerFire_2 = (((~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_3)) 
                                            & (2U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state))) 
                                           & (IData)(vlSelfRef.core__DOT__validReg_2));
    vlSelfRef.core__DOT__IFU__DOT___GEN_4 = ((IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_3) 
                                             | (2U 
                                                == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)));
    vlSelfRef.core__DOT__LSU__DOT___GEN = ((IData)(vlSelfRef.io_log_ready3) 
                                           & (IData)(vlSelfRef.core__DOT__validReg_4));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49 
        = ((~ (vlSelfRef.core__DOT__dataReg_inst >> 0x19U)) 
           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_48));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12 
        = ((((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                         >> 4U)) << 3U)) | ((4U & (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_58))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4 
        = ((((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                         >> 4U)) << 3U)) | ((4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 5U)) 
                                                   << 2U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_58))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_57 
        = ((~ (vlSelfRef.core__DOT__dataReg_inst >> 6U)) 
           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_28 
        = (IData)(((0U == (0x1040U & vlSelfRef.core__DOT__dataReg_inst)) 
                   & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_53 
        = ((vlSelfRef.core__DOT__dataReg_inst >> 0xcU) 
           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14 
        = ((((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT__dataReg_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                         >> 4U)) << 3U)) | ((4U & (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_59))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60 
        = ((4U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                      >> 0xcU)) << 2U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_59));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_32 
        = (((((0x8000U & (vlSelfRef.core__DOT__dataReg_inst 
                          << 0xfU)) | (0x4000U & (vlSelfRef.core__DOT__dataReg_inst 
                                                  << 0xdU))) 
             | ((0x2000U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                >> 2U)) << 0xdU)) | 
                (0x1000U & (vlSelfRef.core__DOT__dataReg_inst 
                            << 9U)))) | (((0x800U & 
                                           (vlSelfRef.core__DOT__dataReg_inst 
                                            << 7U)) 
                                          | (0x400U 
                                             & ((~ 
                                                 (vlSelfRef.core__DOT__dataReg_inst 
                                                  >> 5U)) 
                                                << 0xaU))) 
                                         | ((0x200U 
                                             & ((~ 
                                                 (vlSelfRef.core__DOT__dataReg_inst 
                                                  >> 6U)) 
                                                << 9U)) 
                                            | (0x100U 
                                               & (vlSelfRef.core__DOT__dataReg_inst 
                                                  >> 4U))))) 
           | ((0x80U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                            >> 0xdU)) << 7U)) | ((0x40U 
                                                  & ((~ 
                                                      (vlSelfRef.core__DOT__dataReg_inst 
                                                       >> 0x19U)) 
                                                     << 6U)) 
                                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_63))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17 
        = ((((0x1000U & (vlSelfRef.core__DOT__dataReg_inst 
                         << 0xcU)) | (0x800U & (vlSelfRef.core__DOT__dataReg_inst 
                                                << 0xaU))) 
            | ((0x400U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                              >> 2U)) << 0xaU)) | (0x200U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT__dataReg_inst 
                                                        >> 3U)) 
                                                      << 9U)))) 
           | ((0x100U & (vlSelfRef.core__DOT__dataReg_inst 
                         << 4U)) | ((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                                              << 2U)) 
                                    | ((0x40U & ((~ 
                                                  (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 6U)) 
                                                 << 6U)) 
                                       | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_63)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18 
        = (((((0x4000U & (vlSelfRef.core__DOT__dataReg_inst 
                          << 0xeU)) | (0x2000U & (vlSelfRef.core__DOT__dataReg_inst 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                >> 2U)) << 0xcU)) | 
                (0x800U & (vlSelfRef.core__DOT__dataReg_inst 
                           << 7U)))) | (((0x400U & 
                                          (vlSelfRef.core__DOT__dataReg_inst 
                                           << 5U)) 
                                         | (0x200U 
                                            & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 6U)) 
                                               << 9U))) 
                                        | ((0x100U 
                                            & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 0xcU)) 
                                               << 8U)) 
                                           | (0x80U 
                                              & ((~ 
                                                  (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 0xdU)) 
                                                 << 7U))))) 
           | ((0x40U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                            >> 0xeU)) << 6U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_63)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_29 
        = (((((0x4000U & (vlSelfRef.core__DOT__dataReg_inst 
                          << 0xeU)) | (0x2000U & (vlSelfRef.core__DOT__dataReg_inst 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                >> 2U)) << 0xcU)) | 
                (0x800U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                               >> 3U)) << 0xbU)))) 
            | (((0x400U & (vlSelfRef.core__DOT__dataReg_inst 
                           << 6U)) | (0x200U & ((~ 
                                                 (vlSelfRef.core__DOT__dataReg_inst 
                                                  >> 5U)) 
                                                << 9U))) 
               | ((0x100U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                 >> 6U)) << 8U)) | 
                  (0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                            >> 5U))))) | ((0x40U & 
                                           ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                                >> 0xdU)) 
                                            << 6U)) 
                                          | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_63)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_53 
        = (((((0x4000U & (vlSelfRef.core__DOT__dataReg_inst 
                          << 0xeU)) | (0x2000U & (vlSelfRef.core__DOT__dataReg_inst 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                >> 2U)) << 0xcU)) | 
                (0x800U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                               >> 3U)) << 0xbU)))) 
            | (((0x400U & (vlSelfRef.core__DOT__dataReg_inst 
                           << 6U)) | (0x200U & ((~ 
                                                 (vlSelfRef.core__DOT__dataReg_inst 
                                                  >> 5U)) 
                                                << 9U))) 
               | ((0x100U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                 >> 6U)) << 8U)) | 
                  (0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                            >> 5U))))) | ((0x40U & 
                                           ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                                >> 0xdU)) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & (vlSelfRef.core__DOT__dataReg_inst 
                                                 >> 9U)) 
                                             | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62 
        = ((0x20U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                         >> 0x19U)) << 5U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_56 
        = ((vlSelfRef.core__DOT__dataReg_inst >> 0x19U) 
           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52 
        = ((~ (vlSelfRef.core__DOT__dataReg_inst >> 0xeU)) 
           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33 
        = ((~ (vlSelfRef.core__DOT__dataReg_inst >> 0x19U)) 
           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32));
    vlSelfRef.core__DOT___GEN_2 = ((IData)(vlSelfRef.core__DOT__producerFire_4) 
                                   & (IData)(vlSelfRef.core__DOT__producerFire_3));
    vlSelfRef.io_debugout1 = (((IData)(vlSelfRef.core__DOT__dataReg_3_jalr_en) 
                               | (IData)(vlSelfRef.core__DOT__dataReg_3_jump_en))
                               ? ((IData)(4U) + vlSelfRef.core__DOT__dataReg_3_pc)
                               : vlSelfRef.core__DOT__EXU__DOT___alu_io_out);
    vlSelfRef.core__DOT___GEN_1 = ((IData)(vlSelfRef.core__DOT__consumerFire_2) 
                                   & (IData)(vlSelfRef.core__DOT__producerFire_2));
    vlSelfRef.io_Log_valid1 = ((~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_4)) 
                               & (3U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)));
    vlSelfRef.core__DOT___GEN_3 = ((IData)(vlSelfRef.core__DOT__LSU__DOT___GEN) 
                                   & (IData)(vlSelfRef.core__DOT__producerFire_4));
    vlSelfRef.core__DOT__LSU__DOT___GEN_0 = ((IData)(vlSelfRef.io_log_ready3) 
                                             & (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN));
    vlSelfRef.io_Log_valid4 = ((IData)(vlSelfRef.core__DOT__LSU__DOT__state)
                                ? (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_2)
                                : ((IData)(vlSelfRef.core__DOT__LSU__DOT___GEN) 
                                   & ((~ (IData)(vlSelfRef.core__DOT__LSU__DOT__is_load)) 
                                      & (~ (IData)(vlSelfRef.core__DOT__dataReg_4_mem_wen)))));
    vlSelfRef.core__DOT___IDU_io_out_bits_mlen = (((IData)(
                                                           ((3U 
                                                             == 
                                                             (0x105fU 
                                                              & vlSelfRef.core__DOT__dataReg_inst)) 
                                                            & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_55))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((IData)(
                                                                 ((3U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                  & ((IData)(
                                                                             (0x1000U 
                                                                              == 
                                                                              (0x3060U 
                                                                               & vlSelfRef.core__DOT__dataReg_inst))) 
                                                                     | ((~ 
                                                                         (vlSelfRef.core__DOT__dataReg_inst 
                                                                          >> 6U)) 
                                                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_53))))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  ((3U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                   & ((IData)(
                                                                              (0U 
                                                                               == 
                                                                               (0x3060U 
                                                                                & vlSelfRef.core__DOT__dataReg_inst))) 
                                                                      | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_28)))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_10 
        = ((((0x100U & (vlSelfRef.core__DOT__dataReg_inst 
                        << 8U)) | ((0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                                             << 6U)) 
                                   | (0x40U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 2U)) 
                                               << 6U)))) 
            | ((0x20U & (vlSelfRef.core__DOT__dataReg_inst 
                         << 1U)) | (0x10U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                                 >> 5U)) 
                                             << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                         >> 6U)) << 3U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24 
        = ((((0x200U & (vlSelfRef.core__DOT__dataReg_inst 
                        << 9U)) | ((0x100U & (vlSelfRef.core__DOT__dataReg_inst 
                                              << 7U)) 
                                   | (0x80U & (vlSelfRef.core__DOT__dataReg_inst 
                                               << 5U)))) 
            | ((0x40U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                             >> 3U)) << 6U)) | (0x20U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 4U)) 
                                                   << 5U)))) 
           | ((0x10U & (vlSelfRef.core__DOT__dataReg_inst 
                        >> 1U)) | ((8U & (vlSelfRef.core__DOT__dataReg_inst 
                                          >> 3U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16 
        = (((((0x4000U & (vlSelfRef.core__DOT__dataReg_inst 
                          << 0xeU)) | (0x2000U & (vlSelfRef.core__DOT__dataReg_inst 
                                                  << 0xcU))) 
             | ((0x1000U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                >> 2U)) << 0xcU)) | 
                (0x800U & (vlSelfRef.core__DOT__dataReg_inst 
                           << 7U)))) | (((0x400U & 
                                          (vlSelfRef.core__DOT__dataReg_inst 
                                           << 5U)) 
                                         | (0x200U 
                                            & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 6U)) 
                                               << 9U))) 
                                        | ((0x100U 
                                            & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 0xcU)) 
                                               << 8U)) 
                                           | (0x80U 
                                              & ((~ 
                                                  (vlSelfRef.core__DOT__dataReg_inst 
                                                   >> 0xdU)) 
                                                 << 7U))))) 
           | ((0x40U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                            >> 0xeU)) << 6U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_64 
        = (((0x200U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                           >> 6U)) << 9U)) | (0x100U 
                                              & (vlSelfRef.core__DOT__dataReg_inst 
                                                 >> 4U))) 
           | ((0x80U & ((~ (vlSelfRef.core__DOT__dataReg_inst 
                            >> 0xdU)) << 7U)) | ((0x40U 
                                                  & (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 8U)) 
                                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62))));
    vlSelfRef.core__DOT___IDU_io_out_bits_unsign_en 
        = (IData)(((3U == (0xfU & vlSelfRef.core__DOT__dataReg_inst)) 
                   & ((IData)(((0x1010U == (0x1070U 
                                            & vlSelfRef.core__DOT__dataReg_inst)) 
                               & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_55))) 
                      | ((IData)(((0x3030U == (0x3070U 
                                               & vlSelfRef.core__DOT__dataReg_inst)) 
                                  & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52))) 
                         | (((~ (vlSelfRef.core__DOT__dataReg_inst 
                                 >> 4U)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_39)) 
                            | ((IData)(((0U == (0x70U 
                                                & vlSelfRef.core__DOT__dataReg_inst)) 
                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_45))) 
                               | ((IData)(((0x60U == 
                                            (0x70U 
                                             & vlSelfRef.core__DOT__dataReg_inst)) 
                                           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42))) 
                                  | (IData)(((0x30U 
                                              == (0x70U 
                                                  & vlSelfRef.core__DOT__dataReg_inst)) 
                                             & ((IData)(
                                                        ((0x2000U 
                                                          == 
                                                          (0x6000U 
                                                           & vlSelfRef.core__DOT__dataReg_inst)) 
                                                         & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_56))) 
                                                | (IData)(
                                                          ((0x5000U 
                                                            == 
                                                            (0x5000U 
                                                             & vlSelfRef.core__DOT__dataReg_inst)) 
                                                           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_56)))))))))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40 
        = ((vlSelfRef.core__DOT__dataReg_inst >> 0xeU) 
           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_43 
        = ((~ (vlSelfRef.core__DOT__dataReg_inst >> 0xeU)) 
           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47 
        = ((vlSelfRef.core__DOT__dataReg_inst >> 0xdU) 
           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34 
        = (IData)(((0x1000U == (0x3040U & vlSelfRef.core__DOT__dataReg_inst)) 
                   & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33)));
    vlSelfRef.core__DOT__IFU__DOT___GEN_5 = ((~ (IData)(vlSelfRef.core__DOT__validReg)) 
                                             & (IData)(vlSelfRef.io_Log_valid1));
    vlSelfRef.core__DOT__producerFire_6 = ((~ (IData)(vlSelfRef.core__DOT__validReg_6)) 
                                           & ((IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_0) 
                                              & ((IData)(vlSelfRef.core__DOT__LSU__DOT__is_load) 
                                                 | (IData)(vlSelfRef.core__DOT__dataReg_4_mem_wen))));
    vlSelfRef.core__DOT__producerFire_5 = ((~ (IData)(vlSelfRef.core__DOT__validReg_5)) 
                                           & (IData)(vlSelfRef.io_Log_valid4));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55 
        = (((0x8000U & (vlSelfRef.core__DOT__dataReg_inst 
                        << 0xfU)) | ((0x4000U & (vlSelfRef.core__DOT__dataReg_inst 
                                                 << 0xdU)) 
                                     | (0x2000U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 2U)) 
                                                   << 0xdU)))) 
           | ((0x1000U & (vlSelfRef.core__DOT__dataReg_inst 
                          << 9U)) | ((0x800U & (vlSelfRef.core__DOT__dataReg_inst 
                                                << 7U)) 
                                     | ((0x400U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__dataReg_inst 
                                                     >> 5U)) 
                                                   << 0xaU)) 
                                        | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_64)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65 
        = ((0x800U & (vlSelfRef.core__DOT__dataReg_inst 
                      << 7U)) | ((0x400U & (vlSelfRef.core__DOT__dataReg_inst 
                                            << 5U)) 
                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_64)));
    vlSelfRef.core__DOT___GEN = ((IData)(vlSelfRef.core__DOT__producerFire_3) 
                                 & (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_5));
    vlSelfRef.__Vtableidx1 = (((((IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_5) 
                                 << 6U) | ((IData)(vlSelfRef.core__DOT__validReg_2) 
                                           << 5U)) 
                               | (((IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_1) 
                                   << 4U) | ((IData)(vlSelfRef.core__DOT__IFU__DOT__is_first_inst) 
                                             << 3U))) 
                              | (((IData)(vlSelfRef.core__DOT__validReg_8) 
                                  << 2U) | (IData)(vlSelfRef.core__DOT__IFU__DOT__state)));
    vlSelfRef.core__DOT__IFU__DOT__casez_tmp = Vcore__ConstPool__TABLE_h82da166c_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.core__DOT___GEN_5 = ((IData)(vlSelfRef.core__DOT__Lsram__DOT___rdata_reg_T) 
                                   & (IData)(vlSelfRef.core__DOT__producerFire_6));
    vlSelfRef.core__DOT___GEN_4 = ((IData)(vlSelfRef.core__DOT__producerFire_8) 
                                   & (IData)(vlSelfRef.core__DOT__producerFire_5));
    vlSelfRef.core__DOT__IDU__DOT__casez_tmp = (((0x3fU 
                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11)) 
                                                 | ((0x7fU 
                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                    | ((0x7fffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_29)) 
                                                       | ((0xffffU 
                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                                          | ((0x7fffU 
                                                              == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_53)) 
                                                             | (0xffffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55)))))))
                                                 ? 
                                                (((0xffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                  | ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                     | ((0x7fffU 
                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_29)) 
                                                        | ((0xffffU 
                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                                           | ((0xffU 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                              | ((0x7fffU 
                                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_53)) 
                                                                 | (0xffffU 
                                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55))))))))
                                                  ? 
                                                 ((1U 
                                                   & ((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                                                  | ((IData)(
                                                                             (0x63U 
                                                                              == 
                                                                              (0x707bU 
                                                                               & vlSelfRef.core__DOT__dataReg_inst))) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55)))))))))))))
                                                   ? (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelfRef.core__DOT__dataReg_inst 
                                                                         >> 0x14U))))
                                                   : (QData)((IData)(
                                                                     (0x3fU 
                                                                      & (vlSelfRef.core__DOT__dataReg_inst 
                                                                         >> 0x14U)))))
                                                  : 
                                                 ((1U 
                                                   & ((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                                                  | ((IData)(
                                                                             (0x63U 
                                                                              == 
                                                                              (0x707bU 
                                                                               & vlSelfRef.core__DOT__dataReg_inst))) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55)))))))))))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT__dataReg_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     (((0xff000U 
                                                                        & vlSelfRef.core__DOT__dataReg_inst) 
                                                                       | (0x800U 
                                                                          & (vlSelfRef.core__DOT__dataReg_inst 
                                                                             >> 9U))) 
                                                                      | (0x7feU 
                                                                         & (vlSelfRef.core__DOT__dataReg_inst 
                                                                            >> 0x14U))))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelfRef.core__DOT__dataReg_inst 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelfRef.core__DOT__dataReg_inst))))))
                                                 : 
                                                (((0xffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                  | ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                     | ((0x7fffU 
                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_29)) 
                                                        | ((0xffffU 
                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                                           | ((0xffU 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                              | ((0x7fffU 
                                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_53)) 
                                                                 | (0xffffU 
                                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55))))))))
                                                  ? 
                                                 ((1U 
                                                   & ((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                                                  | ((IData)(
                                                                             (0x63U 
                                                                              == 
                                                                              (0x707bU 
                                                                               & vlSelfRef.core__DOT__dataReg_inst))) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55)))))))))))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT__dataReg_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelfRef.core__DOT__dataReg_inst 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelfRef.core__DOT__dataReg_inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelfRef.core__DOT__dataReg_inst 
                                                                               >> 7U)))))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT__dataReg_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelfRef.core__DOT__dataReg_inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelfRef.core__DOT__dataReg_inst 
                                                                            >> 7U)))))))
                                                  : 
                                                 ((1U 
                                                   & ((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                                                  | ((IData)(
                                                                             (0x63U 
                                                                              == 
                                                                              (0x707bU 
                                                                               & vlSelfRef.core__DOT__dataReg_inst))) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55)))))))))))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT__dataReg_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelfRef.core__DOT__dataReg_inst 
                                                                      >> 0x14U))))
                                                   : 0ULL)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_37 
        = ((IData)(((3U == (7U & vlSelfRef.core__DOT__dataReg_inst)) 
                    & (0xfffU == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65)))) 
           | (IData)(((0x2004033U == (0x2004077U & vlSelfRef.core__DOT__dataReg_inst)) 
                      & (0x3fU == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_63)))));
    vlSelfRef.core__DOT___IDU_io_out_bits_opcode = 
        (((((IData)(((0x63U == (0x7fU & vlSelfRef.core__DOT__dataReg_inst)) 
                     & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27))) 
            | ((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_29)) 
               | ((IData)(((0x33U == (0x3fU & vlSelfRef.core__DOT__dataReg_inst)) 
                           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34))) 
                  | ((IData)(((0x13U == (0x1fU & vlSelfRef.core__DOT__dataReg_inst)) 
                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_39))) 
                     | ((IData)(((0x33U == (0x7fU & vlSelfRef.core__DOT__dataReg_inst)) 
                                 & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40))) 
                        | ((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_53)) 
                           | ((IData)(((3U == (0xfU 
                                               & vlSelfRef.core__DOT__dataReg_inst)) 
                                       & (0xfffU == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65)))) 
                              | (IData)(((0x13U == 
                                          (0x7fU & vlSelfRef.core__DOT__dataReg_inst)) 
                                         & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42)))))))))) 
           << 3U) | (4U & (((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_29)) 
                            | ((IData)(((0x1033U == 
                                         (0x107fU & vlSelfRef.core__DOT__dataReg_inst)) 
                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_43))) 
                               | ((IData)((0x2013U 
                                           == (0x607fU 
                                               & vlSelfRef.core__DOT__dataReg_inst))) 
                                  | ((IData)(((0x2033U 
                                               == (0x207fU 
                                                   & vlSelfRef.core__DOT__dataReg_inst)) 
                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_43))) 
                                     | ((IData)(((0x13U 
                                                  == 
                                                  (0x107fU 
                                                   & vlSelfRef.core__DOT__dataReg_inst)) 
                                                 & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_45))) 
                                        | ((IData)(
                                                   ((0x33U 
                                                     == 
                                                     (0x207fU 
                                                      & vlSelfRef.core__DOT__dataReg_inst)) 
                                                    & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40))) 
                                           | ((0xffU 
                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                              | ((0x7fffU 
                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_53)) 
                                                 | (IData)(
                                                           ((3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelfRef.core__DOT__dataReg_inst)) 
                                                            & (0xfffU 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65)))))))))))) 
                           << 2U))) | ((((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37)) 
                                         | ((IData)(
                                                    ((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.core__DOT__dataReg_inst)) 
                                                     & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47))) 
                                            | ((0xffU 
                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                               | ((0x7fffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_53)) 
                                                  | ((IData)(
                                                             ((3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelfRef.core__DOT__dataReg_inst)) 
                                                              & (0xfffU 
                                                                 == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65)))) 
                                                     | (IData)(
                                                               ((0x33U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49)))))))) 
                                        << 1U) | (1U 
                                                  & ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                     | ((0xffU 
                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_5)) 
                                                        | ((IData)(
                                                                   ((3U 
                                                                     == 
                                                                     (0x2fU 
                                                                      & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                    & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51))) 
                                                           | ((IData)(
                                                                      ((0x33U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                       & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_43))) 
                                                              | ((0x3ffU 
                                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                 | ((0x7fU 
                                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                    | ((IData)(
                                                                               ((0x1013U 
                                                                                == 
                                                                                (0x307fU 
                                                                                & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52))) 
                                                                       | ((IData)(
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_53))) 
                                                                          | ((IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x307fU 
                                                                                & vlSelfRef.core__DOT__dataReg_inst))) 
                                                                             | ((IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x607fU 
                                                                                & vlSelfRef.core__DOT__dataReg_inst))) 
                                                                                | ((IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47))) 
                                                                                | ((0x1ffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52)) 
                                                                                | (IData)(
                                                                                ((0x13U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                                & ((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7060U 
                                                                                & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_48))) 
                                                                                | (IData)(
                                                                                ((0x5020U 
                                                                                == 
                                                                                (0x7060U 
                                                                                & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49)))))))))))))))))))));
    vlSelfRef.core__DOT___IDU_io_out_bits_rd_en = (1U 
                                                   & ((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((IData)(
                                                                       ((0xfU 
                                                                         == 
                                                                         (0x3fU 
                                                                          & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_28))) 
                                                               | ((0x1ffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                                                  | ((0x3fU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11)) 
                                                                     | ((0x7fffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                                                                        | ((0x1fffU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)) 
                                                                           | ((0x7fffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                              | ((0x3ffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                                | ((0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                                | ((IData)(
                                                                                ((0x1013U 
                                                                                == 
                                                                                (0x305fU 
                                                                                & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32))) 
                                                                                | ((IData)(
                                                                                ((0x1bU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & vlSelfRef.core__DOT__dataReg_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34))) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37)) 
                                                                                | ((0x7fffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_53)) 
                                                                                | ((IData)(
                                                                                (0x501bU 
                                                                                == 
                                                                                (0xbe00705fU 
                                                                                & vlSelfRef.core__DOT__dataReg_inst))) 
                                                                                | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_37))))))))))))))))));
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
    vlSelf->io_inst_done = VL_RAND_RESET_I(1);
    vlSelf->io_log_ready1 = VL_RAND_RESET_I(1);
    vlSelf->io_log_ready2 = VL_RAND_RESET_I(1);
    vlSelf->io_log_ready3 = VL_RAND_RESET_I(1);
    vlSelf->io_log_ready4 = VL_RAND_RESET_I(1);
    vlSelf->io_log_ready5 = VL_RAND_RESET_I(1);
    vlSelf->io_Log_valid1 = VL_RAND_RESET_I(1);
    vlSelf->io_Log_valid2 = VL_RAND_RESET_I(1);
    vlSelf->io_Log_valid3 = VL_RAND_RESET_I(1);
    vlSelf->io_Log_valid4 = VL_RAND_RESET_I(1);
    vlSelf->io_Log_valid5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_8 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_7 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_6 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_4 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_3 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_bits_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_bits_opcode = VL_RAND_RESET_I(5);
    vlSelf->core__DOT___IDU_io_out_bits_unsign_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___IDU_io_out_bits_mlen = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__dataReg_inst = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_1_addr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_2_rdata = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__producerFire_2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_3_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_3_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_3_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__dataReg_3_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_3_opcode = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__dataReg_3_imm = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__dataReg_3_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_3_rs2_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_3_unsign_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_3_csr_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_3_lsu_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_3_mw_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_3_mlen = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__dataReg_3_branch_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_3_jump_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_3_jalr_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__producerFire_3 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_4_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_4_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__dataReg_4_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_4_mem_wen = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_4_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_4_mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_4_mem_len = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__producerFire_4 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__validReg_5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_5_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_5_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__dataReg_5_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__producerFire_5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_6_addr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_6_wdata = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dataReg_6_wen = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_6_len = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__producerFire_6 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dataReg_7_rdata = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__producerFire_7 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__producerFire_8 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__consumerFire_8 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__consumerFire_2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__consumerFire_7 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT___rdata_reg_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__resp_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Fsram__DOT__rdata_reg = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__Fsram__DOT__readDPI__DOT__rdata_reg = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__Fsram__DOT__writeDPI__DOT__unnamedblk1__DOT__temp_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Fsram__DOT__writeDPI__DOT__unnamedblk2__DOT__temp_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT___rdata_reg_T = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__resp_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__Lsram__DOT__rdata_reg = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__Lsram__DOT__readDPI__DOT__rdata_reg = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__Lsram__DOT__writeDPI__DOT__unnamedblk1__DOT__temp_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__Lsram__DOT__writeDPI__DOT__unnamedblk2__DOT__temp_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IFU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT__is_first_inst = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT__result_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT__result_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT___pc_T = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__IFU__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IFU__DOT__casez_tmp = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_5 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_10 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17 = VL_RAND_RESET_I(13);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_21 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_29 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51 = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52 = VL_RAND_RESET_I(9);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_53 = VL_RAND_RESET_I(15);
    vlSelf->core__DOT__IDU__DOT__casez_tmp = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_32 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55 = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_28 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_37 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_39 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_43 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_45 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_48 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_53 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_55 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_56 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_57 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_58 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_59 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61 = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_63 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_64 = VL_RAND_RESET_I(10);
    vlSelf->core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65 = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__EXU__DOT___alu_io_out = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__EXU__DOT____Vcellinp__alu__io_in2 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__EXU__DOT____Vcellinp__alu__io_in1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__RF__DOT__rf_0 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_1 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_2 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_3 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_4 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_5 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_6 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_7 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_8 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_9 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_10 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_11 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_12 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_13 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_14 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_15 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_16 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_17 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_18 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_19 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_20 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_21 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_22 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_23 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_24 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_25 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_26 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_27 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_28 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_29 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_30 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__rf_31 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__casez_tmp = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT__casez_tmp_0 = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__RF__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__l2w_reg_rd_en = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__l2w_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__LSU__DOT__l2w_reg_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__LSU__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__LSU__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_core__DOT__Fsram__DOT__readDPI__DOT__mem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__2__Vfuncout = 0;
    vlSelf->__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__3__Vfuncout = 0;
    vlSelf->__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__4__Vfuncout = 0;
    vlSelf->__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__5__Vfuncout = 0;
    vlSelf->__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__6__Vfuncout = 0;
    vlSelf->__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__7__Vfuncout = 0;
    vlSelf->__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__8__Vfuncout = 0;
    vlSelf->__Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__9__Vfuncout = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
