// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU__pch.h"
#include "VCPU___024root.h"

void VCPU___024root___ico_sequent__TOP__0(VCPU___024root* vlSelf);

void VCPU___024root___eval_ico(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_ico\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VCPU___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VCPU___024root___ico_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ico_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_debug_pc = vlSelfRef.io_pc;
    vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_10 
        = ((IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp) 
           + vlSelfRef.io_pc);
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
}

void VCPU___024root___eval_triggers__ico(VCPU___024root* vlSelf);

bool VCPU___024root___eval_phase__ico(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__ico\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VCPU___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VCPU___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VCPU___024root___eval_act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf);

void VCPU___024root___eval_nba(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_nba\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void VCPU___024root____Vdpiimwrap_CPU__DOT__execute__DOT__write__DOT__mem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ size);
void VCPU___024root____Vdpiimwrap_CPU__DOT__fetchUnit__DOT__dpiMem__DOT__mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ size, IData/*31:0*/ &mem_read__Vfuncrtn);

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__0\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vfunc_CPU__DOT__fetchUnit__DOT__dpiMem__DOT__mem_read__0__Vfuncout;
    __Vfunc_CPU__DOT__fetchUnit__DOT__dpiMem__DOT__mem_read__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_CPU__DOT__execute__DOT__read__DOT__mem_read__1__Vfuncout;
    __Vfunc_CPU__DOT__execute__DOT__read__DOT__mem_read__1__Vfuncout = 0;
    // Body
    if (((~ (IData)(vlSelfRef.reset)) & ((~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)) 
                                         & (3U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))))) {
        VCPU___024root____Vdpiimwrap_CPU__DOT__execute__DOT__write__DOT__mem_write_TOP(
                                                                                ((1U 
                                                                                & ((~ (IData)(
                                                                                (3U 
                                                                                == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))) 
                                                                                | (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg), 
                                                                                ((1U 
                                                                                & ((~ (IData)(
                                                                                (3U 
                                                                                == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))) 
                                                                                | (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.CPU__DOT__execute__DOT__mem_data_reg), 
                                                                                ((1U 
                                                                                & ((~ (IData)(
                                                                                (3U 
                                                                                == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))) 
                                                                                | (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_43)))
                                                                                 ? 0U
                                                                                 : (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg)));
    }
    if (vlSelfRef.reset) {
        vlSelfRef.CPU__DOT__execute__DOT__mem_op_reg = 0U;
    } else if ((1U & (~ ((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_25) 
                         | (~ (((((((((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                                      | (0x15U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                     | (0x16U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                    | (0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                   | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                  | (0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                 | (0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                                | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) 
                               & (0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))))))) {
        vlSelfRef.CPU__DOT__execute__DOT__mem_op_reg 
            = vlSelfRef.__VdfgRegularize_hd87f99a1_0_1;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data = 0U;
    } else if (((~ (IData)(vlSelfRef.reset)) & ((0U 
                                                 != (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)) 
                                                & (1U 
                                                   == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))))) {
        VCPU___024root____Vdpiimwrap_CPU__DOT__fetchUnit__DOT__dpiMem__DOT__mem_read_TOP(
                                                                                ((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_41)
                                                                                 ? 0U
                                                                                 : vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg), 
                                                                                ((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_41)
                                                                                 ? 0U
                                                                                 : (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg)), __Vfunc_CPU__DOT__execute__DOT__read__DOT__mem_read__1__Vfuncout);
        vlSelfRef.CPU__DOT__execute__DOT__read__DOT__read_data 
            = __Vfunc_CPU__DOT__execute__DOT__read__DOT__mem_read__1__Vfuncout;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.CPU__DOT__regFile__DOT__rf_31 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_30 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_29 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_28 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_11 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_10 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_6 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_9 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_4 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_7 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_2 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_5 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_0 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_3 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_1 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_8 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_12 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_13 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_14 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_15 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_16 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_17 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_18 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_19 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_20 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_21 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_22 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_23 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_24 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_25 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_26 = 0U;
        vlSelfRef.CPU__DOT__regFile__DOT__rf_27 = 0U;
        vlSelfRef.CPU__DOT__execute__DOT__mem_data_reg = 0U;
        vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg = 0U;
        vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg = 0U;
    } else {
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xf80U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_31 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xf00U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_30 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xe80U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_29 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xe00U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_28 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x580U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_11 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x500U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_10 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x300U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_6 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x480U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_9 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x200U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_4 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x380U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_7 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x100U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_2 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x280U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_5 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (~ (IData)((0U != (0x1fU & (vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
                                           >> 7U))))))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_0 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x180U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_3 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x80U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_1 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x400U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_8 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x600U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_12 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x680U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_13 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x700U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_14 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x780U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_15 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x800U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_16 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x880U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_17 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x900U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_18 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0x980U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_19 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xa00U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_20 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xa80U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_21 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xb00U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_22 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xb80U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_23 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xc00U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_24 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xc80U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_25 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xd00U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_26 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if (((IData)(vlSelfRef.CPU__DOT__regFile__DOT___GEN) 
             & (0xd80U == (0xf80U & vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data)))) {
            vlSelfRef.CPU__DOT__regFile__DOT__rf_27 
                = vlSelfRef.CPU__DOT___execute_io_rd_data;
        }
        if ((1U & (~ ((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_30) 
                      | (~ ((IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_29) 
                            & (0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))))))) {
            vlSelfRef.CPU__DOT__execute__DOT__mem_data_reg 
                = vlSelfRef.CPU__DOT___regFile_io_rs2_data;
        }
        if ((1U & (~ (IData)(vlSelfRef.CPU__DOT__execute__DOT___GEN_25)))) {
            if ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) {
                if ((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))) {
                    vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg = 0U;
                    vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg 
                        = (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                           + (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp));
                }
            } else if ((0x15U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) {
                if ((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))) {
                    vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg = 1U;
                    vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg 
                        = (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                           + (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp));
                }
            } else if ((0x16U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) {
                if ((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))) {
                    vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg = 2U;
                    vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg 
                        = (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                           + (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp));
                }
            } else if ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) {
                if ((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))) {
                    vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg = 0U;
                    vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg 
                        = (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                           + (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp));
                }
            } else if ((0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) {
                if ((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))) {
                    vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg = 1U;
                    vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg 
                        = (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                           + (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp));
                }
            } else if ((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) {
                if ((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))) {
                    vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg = 0U;
                    vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg 
                        = (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                           + (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp));
                }
            } else if ((0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1))) {
                if ((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state))) {
                    vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg = 1U;
                    vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg 
                        = (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                           + (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp));
                }
            } else if (((0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_1)) 
                        & (0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)))) {
                vlSelfRef.CPU__DOT__execute__DOT__mem_size_reg = 2U;
                vlSelfRef.CPU__DOT__execute__DOT__mem_addr_reg 
                    = (vlSelfRef.CPU__DOT___regFile_io_rs1_data 
                       + (IData)(vlSelfRef.CPU__DOT__decode__DOT__casez_tmp));
            }
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        VCPU___024root____Vdpiimwrap_CPU__DOT__fetchUnit__DOT__dpiMem__DOT__mem_read_TOP(vlSelfRef.io_pc, 2U, __Vfunc_CPU__DOT__fetchUnit__DOT__dpiMem__DOT__mem_read__0__Vfuncout);
        vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data 
            = __Vfunc_CPU__DOT__fetchUnit__DOT__dpiMem__DOT__mem_read__0__Vfuncout;
    }
    vlSelfRef.CPU__DOT__execute__DOT__mem_state = ((IData)(vlSelfRef.reset)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.CPU__DOT__execute__DOT__casez_tmp));
    vlSelfRef.io_debug_inst = vlSelfRef.CPU__DOT__fetchUnit__DOT__dpiMem__DOT__read_data;
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
    vlSelfRef.CPU__DOT__execute__DOT___GEN_41 = ((1U 
                                                  != (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)) 
                                                 | (0U 
                                                    == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)));
    vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_4 
        = ((0U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)) 
           | (1U == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)));
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
    vlSelfRef.CPU__DOT__execute__DOT___GEN_43 = ((IData)(vlSelfRef.CPU__DOT__execute__DOT____VdfgRegularize_hbe579afe_0_4) 
                                                 | (2U 
                                                    == (IData)(vlSelfRef.CPU__DOT__execute__DOT__mem_state)));
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

void VCPU___024root___eval_triggers__act(VCPU___024root* vlSelf);

bool VCPU___024root___eval_phase__act(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__act\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VCPU___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VCPU___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VCPU___024root___eval_phase__nba(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_phase__nba\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VCPU___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__ico(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__nba(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VCPU___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("build/CPU.sv", 1622, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VCPU___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VCPU___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("build/CPU.sv", 1622, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VCPU___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("build/CPU.sv", 1622, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VCPU___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VCPU___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VCPU___024root___eval_debug_assertions(VCPU___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_debug_assertions\n"); );
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
