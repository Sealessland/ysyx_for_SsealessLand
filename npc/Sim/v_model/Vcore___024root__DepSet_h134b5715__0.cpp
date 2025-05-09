// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

void Vcore___024root___eval_act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf);

void Vcore___024root___eval_nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vcore___024root____Vdpiimwrap_core__DOT__executer__DOT__ebreakInst__DOT__ebreak_handler_TOP();
void Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__mem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);
void Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__mem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &data);

VL_INLINE_OPT void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ ((((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
               | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                  | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                     | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                        | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))))) 
              | ((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                 | ((0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                    | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))) 
             | ((0x1cU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                | ((0x1dU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                   | ((0x1eU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                      | ((0x1fU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                         | ((0x20U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                            | ((0x21U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                               | ((0x22U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                  | ((0x23U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                     | ((0x24U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                        | ((0x25U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                           | (0x26U 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))))))))))))) 
         & (0x27U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))) {
        Vcore___024root____Vdpiimwrap_core__DOT__executer__DOT__ebreakInst__DOT__ebreak_handler_TOP();
    }
    if ((((~ (IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28)) 
          & ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
             | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                   | ((0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                      | (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11)))))) 
         & ((~ ((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                   | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                      | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                         | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))) 
            & (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11)))) {
        if ((0U != (IData)((((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                             | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                   | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                      | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))
                             ? 0ULL : ((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                        ? 0xffULL : 
                                       ((0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                         ? 0xffffULL
                                         : ((0x1bU 
                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                             ? 0xffffffffULL
                                             : 0ULL))))))) {
            Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__mem_write_TOP(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__addr_offset_dmem, 4U, (IData)(
                                                                                (((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                                                                                | ((0x14U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                                                                | ((0x17U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | (0x18U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                ((0x19U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                                 ? (QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__executer__io_in2)))
                                                                                 : 
                                                                                ((0x1aU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                                 ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__executer__io_in2)))
                                                                                 : 
                                                                                ((0x1bU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                                 ? (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__executer__io_in2))
                                                                                 : 0ULL))))));
        }
        if ((0U != (IData)(((((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                              | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                 | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                    | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                       | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))
                              ? 0ULL : ((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                         ? 0xffULL : 
                                        ((0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                          ? 0xffffULL
                                          : ((0x1bU 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                              ? 0xffffffffULL
                                              : 0ULL)))) 
                            >> 0x20U)))) {
            Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__mem_write_TOP(
                                                                                ((IData)(4U) 
                                                                                + vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__addr_offset_dmem), 4U, (IData)(
                                                                                ((((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                                                                                | ((0x14U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                                                                | ((0x17U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | (0x18U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))
                                                                                 ? 0ULL
                                                                                 : 
                                                                                ((0x19U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                                 ? (QData)((IData)(
                                                                                (0xffU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__executer__io_in2)))
                                                                                 : 
                                                                                ((0x1aU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                                 ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__executer__io_in2)))
                                                                                 : 
                                                                                ((0x1bU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                                 ? (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__executer__io_in2))
                                                                                 : 0ULL)))) 
                                                                                >> 0x20U)));
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__instfetch__DOT__pc = 0x7ffffffcU;
        vlSelfRef.core__DOT__rf__DOT__rf_31 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_30 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_29 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_28 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_11 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_10 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_6 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_9 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_4 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_7 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_2 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_5 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_0 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_3 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_1 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_8 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_12 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_13 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_14 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_15 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_16 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_17 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_18 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_19 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_20 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_21 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_22 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_23 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_24 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_25 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_26 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_27 = 0U;
    } else {
        vlSelfRef.core__DOT__instfetch__DOT__pc = ((IData)(vlSelfRef.core__DOT___executer_io_branchCond)
                                                    ? vlSelfRef.io_debugDNPC
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelfRef.core__DOT__instfetch__DOT__pc));
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1fU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_31 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1eU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_30 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1dU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_29 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1cU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_28 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xbU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_11 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xaU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_10 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (6U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_6 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (9U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_9 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (4U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_4 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (7U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_7 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (2U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_2 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (5U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_5 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (~ (IData)((0U != (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))))) {
            vlSelfRef.core__DOT__rf__DOT__rf_0 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (3U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_3 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (1U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_1 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (8U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_8 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xcU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_12 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xdU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_13 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xeU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_14 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xfU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_15 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x10U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_16 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x11U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_17 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x12U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_18 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x13U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_19 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x14U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_20 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x15U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_21 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x16U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_22 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x17U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_23 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x18U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_24 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x19U == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_25 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1aU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_26 = vlSelfRef.core__DOT___executer_io_out;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1bU == (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_27 = vlSelfRef.core__DOT___executer_io_out;
        }
    }
    vlSelfRef.core__DOT__instfetch__DOT__pc_en = (1U 
                                                  & (~ (IData)(vlSelfRef.reset)));
    Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__mem_read_TOP(
                                                                                (vlSelfRef.core__DOT__instfetch__DOT__pc 
                                                                                - (IData)(0x80000000U)), 4U, vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__mem_read__0__data);
    vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
        = vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__mem_read__0__data;
    if (vlSelfRef.core__DOT__instfetch__DOT__pc_en) {
        vlSelfRef.io_debugPC = vlSelfRef.core__DOT__instfetch__DOT__pc;
        vlSelfRef.core__DOT___decode_io_rd_addr = (0x1fU 
                                                   & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                                                      >> 7U));
        vlSelfRef.io_debugInst = vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata;
        vlSelfRef.core__DOT___decode_io_rs2_addr = 
            (0x1fU & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                      >> 0x14U));
        vlSelfRef.core__DOT___decode_io_rs1_addr = 
            (0x1fU & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                      >> 0xfU));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                     >> 0xdU));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                     >> 3U));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                     >> 2U));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                     >> 6U));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                     >> 0xcU));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                     >> 0xeU));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                     >> 4U));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                     >> 5U));
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0 
            = (1U & vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata);
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1 
            = (1U & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                     >> 1U));
    } else {
        vlSelfRef.io_debugPC = 0U;
        vlSelfRef.core__DOT___decode_io_rd_addr = 0U;
        vlSelfRef.io_debugInst = 0U;
        vlSelfRef.core__DOT___decode_io_rs2_addr = 0U;
        vlSelfRef.core__DOT___decode_io_rs1_addr = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0 = 0U;
        vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1 = 0U;
    }
    vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
        = (0x3fffffffU & (~ ((IData)(vlSelfRef.core__DOT__instfetch__DOT__pc_en)
                              ? (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                                 >> 2U) : 0U)));
    vlSelfRef.core__DOT__rf__DOT__casez_tmp_0 = ((0x10U 
                                                  & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_31
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_30)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_29
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_28))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_27
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_26)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_25
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_24)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_23
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_22)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_21
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_20))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_19
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_18)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_17
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_16))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_15
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_14)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_13
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_12))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_11
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_10)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_9
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_8)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_7
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_6)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_5
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_4))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_3
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_2)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_1
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_0)))));
    vlSelfRef.core__DOT__rf__DOT__casez_tmp = ((0x10U 
                                                & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                ? (
                                                   (8U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_31
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_30)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_29
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_28))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_27
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_26)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_25
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_24)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_23
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_22)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_21
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_20))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_19
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_18)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_17
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_16))))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_15
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_14)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_13
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_12))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_11
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_10)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_9
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_8)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_7
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_6)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_5
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_4))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_3
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_2)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_1
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_0)))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37) 
           & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64 
        = (IData)((0x1410U == (0x1410U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_75 
        = (IData)((0xc18U == (0xc18U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_80 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37) 
           & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
              >> 0xcU));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 6U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 5U)) | ((0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 4U)) 
                                   | (8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                            << 2U)))) 
           | ((4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     >> 1U)) | ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       >> 3U)) | (1U 
                                                  & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                     >> 0xaU)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                << 3U) | (4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                >> 1U))) | ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                   >> 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 0xbU) & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73 
        = (IData)((((0x2f000000U == (0x2f000000U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                    & (IData)(vlSelfRef.core__DOT__instfetch__DOT__pc_en)) 
                   & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                      >> 0x1eU)));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 5U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 4U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10) 
                                  << 3U))) | ((4U & 
                                               (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                << 1U)) 
                                              | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       >> 4U)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | (((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 1U)) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                 << 2U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                             << 1U) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                >> 0xbU)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 6U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 5U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10) 
                                    << 4U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
                                              << 3U))) 
           | ((4U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs) 
              | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                  << 1U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_82 
        = ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                  >> 3U)) | (1U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                   >> 0xcU)));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | (((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 1U)) | (4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       >> 1U))) | (
                                                   (2U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                         >> 0xbU)))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_65 
        = (IData)((0x1800U == (0x1800U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | (((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 1U)) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                 << 2U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_55 
        = (IData)((0x3f000000U == (0x3f000000U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86 
        = (((0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      >> 0x14U)) | ((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                           >> 0x16U)) 
                                    | (4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             >> 0x18U)))) 
           | ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     >> 0x1aU)) | (1U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                         >> 0x1dU))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_83 
        = ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                  >> 0xaU)) | (1U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                     >> 0xcU)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88 
        = (((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      >> 0x13U)) | ((0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                              >> 0x15U)) 
                                    | (8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             >> 0x17U)))) 
           | ((4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     >> 0x19U)) | ((2U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                          >> 0x1bU)) 
                                   | (1U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                            >> 0x1dU)))));
    vlSelfRef.core__DOT____Vcellinp__control__io_rf_data 
        = ((0U != (IData)(vlSelfRef.core__DOT___decode_io_rs1_addr))
            ? vlSelfRef.core__DOT__rf__DOT__casez_tmp
            : 0U);
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_81 
        = (IData)(((0x418U == (0x418U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                   & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_74 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 0x17U) & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | ((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     << 1U)) | ((4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       >> 1U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_82))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | ((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     << 1U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                 << 2U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_82))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_66 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 4U) & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_65));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_78 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 4U) & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                      & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_65)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_56 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 0x17U) & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_55));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51 
        = ((((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
               << 0xeU) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                           << 0xdU)) | ((0x1000U & 
                                         (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                          << 0xcU)) 
                                        | (0x800U & 
                                           (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                            << 0xaU)))) 
            | ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                 << 0xaU) | (0x200U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       << 6U))) | (
                                                   (0x100U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       << 4U)) 
                                                   | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                                      << 7U)))) 
           | ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                        >> 5U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38) 
                                    << 5U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_87 
        = ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     >> 0x12U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_86));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 7U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 6U)) | ((0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                             << 5U)) 
                                   | (0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                               << 3U)))) 
           | ((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     << 1U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                 << 2U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_83))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_84 
        = ((4U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                  >> 8U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_83));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20 
        = (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
              << 0xcU) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xbU)) | ((0x400U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                  << 0xaU)) 
                                       | (0x200U & 
                                          (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                           << 8U)))) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
               << 8U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                          << 7U) | ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                              << 2U)) 
                                    | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21 
        = ((((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
               << 0xeU) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                           << 0xdU)) | ((0x1000U & 
                                         (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                          << 0xcU)) 
                                        | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                           << 0xbU))) 
            | ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                 << 0xaU) | (0x200U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       << 5U))) | (
                                                   (0x100U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       >> 2U)) 
                                                   | (0x80U 
                                                      & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                         >> 4U))))) 
           | ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                        >> 6U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_91 
        = ((0x100U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 4U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                  << 7U) | ((0x40U 
                                             & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                >> 5U)) 
                                            | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90 
        = ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     >> 0x11U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38) 
           & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_56));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_57 
        = ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
            >> 0xcU) & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_56));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19 
        = ((((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
               << 0xeU) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                           << 0xdU)) | ((0x1000U & 
                                         (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                          << 0xcU)) 
                                        | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                           << 0xbU))) 
            | ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                 << 0xaU) | (0x200U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       << 5U))) | (
                                                   (0x100U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       >> 2U)) 
                                                   | (0x80U 
                                                      & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                         >> 4U))))) 
           | ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                        >> 6U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_87)));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_93 
        = (((0x200U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                       << 5U)) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                  << 8U)) | ((0x80U 
                                              & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 >> 4U)) 
                                             | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38) 
                                                 << 6U) 
                                                | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_87))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_89 
        = (((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 5U)) | (0x20U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                          << 3U))) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
               << 4U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                          << 3U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_84))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_85 
        = ((0x10U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     << 1U)) | ((8U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                       >> 1U)) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_84)));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_30 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 0xdU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xcU) | (0x800U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                << 0xbU)))) 
           | ((0x400U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                         << 9U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                     << 9U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_91))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 0xeU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xdU) | (0x1000U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 << 0xcU)))) 
           | ((0x800U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                         << 0xaU)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                       << 0xaU) | (
                                                   (0x200U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                       << 6U)) 
                                                   | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_91)))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_92 
        = ((0x200U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                      << 5U)) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                  << 8U) | ((0x80U 
                                             & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                >> 4U)) 
                                            | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37) 
           & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
           & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
              & (IData)(((0x810U == (0x810U & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                         & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_57)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 0xfU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xeU) | (0x2000U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 << 0xdU)))) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
               << 0xcU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                            << 0xbU) | ((0x400U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                   << 7U)) 
                                        | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_93)))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53 
        = ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
           & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
              & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                 & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                    & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                       & ((0x3ffU == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_93)) 
                          | ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                              >> 4U) & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38) 
                                        & (((IData)(vlSelfRef.core__DOT__instfetch__DOT__pc_en) 
                                            & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                                               >> 0x19U)) 
                                           & (0x3fU 
                                              == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_88)))))))))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26 
        = (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
            << 9U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                       << 8U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10) 
                                  << 7U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_89))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25 
        = (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
            << 8U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                       << 7U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_89)));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 8U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                       << 7U)) | ((0x40U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                            << 6U)) 
                                  | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                      << 5U) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_85))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 9U) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                        << 8U) | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10) 
                                  << 7U))) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
                                               << 6U) 
                                              | ((0x20U 
                                                  & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                     << 3U)) 
                                                 | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_85))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 0xfU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xeU) | (0x2000U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 << 0xdU)))) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
               << 0xcU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                            << 0xbU) | ((0x400U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                   << 7U)) 
                                        | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_92)))));
    vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_33 
        = ((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
             << 0xeU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                          << 0xdU) | (0x1000U & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 << 0xcU)))) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
               << 0xbU) | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                            << 0xaU) | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_92))));
    vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54 
        = ((0x7fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
               & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                  & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                     & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_11) 
                        & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                           & (0x3ffU == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_93))))))) 
              | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_2 = ((((
                                                   (0x3ffU 
                                                    == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                   | ((0x3fU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                      | ((0x3ffU 
                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                         | ((0x7fU 
                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                            | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                               & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                   & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                      & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                                                         & (IData)(
                                                                                ((0x7bffe0U 
                                                                                == 
                                                                                (0x7bffe0U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90))))))) 
                                                                  | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                     & (IData)(
                                                                               ((((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63)))))))))) 
                                                  << 5U) 
                                                 | ((((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                      | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                          & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                             & (IData)(
                                                                       ((7U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                        & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64))))) 
                                                         | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                             & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                & (IData)(
                                                                          ((7U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                           & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_66))))) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                               | ((0x7fffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                                  | ((0x7fffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                     | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                        & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                           & (IData)(
                                                                                ((((0x1bU 
                                                                                == 
                                                                                (0x1bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63))))))))))) 
                                                     << 4U) 
                                                    | (((0x3ffU 
                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                        | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                            & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                               & (IData)(
                                                                         ((0x41bU 
                                                                           == 
                                                                           (0x41bU 
                                                                            & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                          & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12))))) 
                                                           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                               & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                  & (IData)(
                                                                            ((0x1417U 
                                                                              == 
                                                                              (0x1417U 
                                                                               & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                             & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13))))) 
                                                              | ((0xffU 
                                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                 | ((0xffU 
                                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                    | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                       & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                          & ((IData)(
                                                                                (((0x101bU 
                                                                                == 
                                                                                (0x101bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37))) 
                                                                             | (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 1U) 
                                                                                & ((IData)(
                                                                                (((0x1cU 
                                                                                == 
                                                                                (0x1cU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70))) 
                                                                                | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                                & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 4U) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72) 
                                                                                | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                                                                & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 0xbU) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_74))))))))))))))))))) 
                                                       << 3U))) 
                                                | (((((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                      & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                         & (IData)(
                                                                   ((7U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                    & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_75))))) 
                                                     | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                         & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                            & (IData)(
                                                                      ((0xfU 
                                                                        == 
                                                                        (0xfU 
                                                                         & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                       & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_64))))) 
                                                        | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                            & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                               & (IData)(
                                                                         ((0xfU 
                                                                           == 
                                                                           (0xfU 
                                                                            & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                          & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_66))))) 
                                                           | ((0x3fU 
                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                              | ((0xffU 
                                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                 | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                    & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                        & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                           & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                                                              & (IData)(
                                                                                ((0x7bffe0U 
                                                                                == 
                                                                                (0x7bffe0U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90))))))) 
                                                                       | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                          & ((IData)(
                                                                                (((0x101bU 
                                                                                == 
                                                                                (0x101bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37))) 
                                                                             | ((IData)(
                                                                                (((((0x13U 
                                                                                == 
                                                                                (0x13U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_37)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_57))) 
                                                                                | ((IData)(
                                                                                (((0x41bU 
                                                                                == 
                                                                                (0x41bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38))) 
                                                                                | (IData)(
                                                                                (((((0x813U 
                                                                                == 
                                                                                (0x813U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90))))))))))))))) 
                                                    << 2U) 
                                                   | (((0xfffffffeU 
                                                        & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                            << 1U) 
                                                           & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                               << 1U) 
                                                              & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                  << 1U) 
                                                                 & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                    & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                        & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_75)) 
                                                                       << 1U)))))) 
                                                       | (((0x3ffU 
                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                           | ((0x7fU 
                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                              | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                  & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                     & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                        & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                                                           & (IData)(
                                                                                ((0x7bffe0U 
                                                                                == 
                                                                                (0x7bffe0U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90)))))))) 
                                                                 | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                     & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                        & (IData)(
                                                                                (((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_78))))) 
                                                                    | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                        & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                           & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                              & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                                & (0x3ffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_92)))))))) 
                                                                       | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                           & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                              & (IData)(
                                                                                ((0x417U 
                                                                                == 
                                                                                (0x417U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_80))))) 
                                                                          | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                              & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 1U) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_81))))) 
                                                                             | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((0x41bU 
                                                                                == 
                                                                                (0x41bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((((0x813U 
                                                                                == 
                                                                                (0x813U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38)) 
                                                                                & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_90)))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_70))))) 
                                                                                | ((0x7fffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                                | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((((0x13U 
                                                                                == 
                                                                                (0x13U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_71)) 
                                                                                | (IData)(
                                                                                ((0x1c00U 
                                                                                == 
                                                                                (0x1c00U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_74))))))))))))))))))) 
                                                          << 1U)) 
                                                      | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                          & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                             & (IData)(
                                                                       (((0x41bU 
                                                                          == 
                                                                          (0x41bU 
                                                                           & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                         & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                        & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_65))))) 
                                                         | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                             & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_10) 
                                                                   & (IData)(
                                                                             ((0x1aU 
                                                                               == 
                                                                               (0x1aU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                              & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)))))) 
                                                            | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                   & (IData)(
                                                                             ((0x1417U 
                                                                               == 
                                                                               (0x1417U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                              & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13))))) 
                                                               | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                   & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                      & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                         & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                             >> 1U) 
                                                                            & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58))))) 
                                                                  | ((0x3ffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                                     | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                         & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                            & (IData)(
                                                                                ((0xfU 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_78))))) 
                                                                        | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                            & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                               & (IData)(
                                                                                ((((0x181bU 
                                                                                == 
                                                                                (0x181bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_55))))) 
                                                                           | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                               & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                & ((vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                                                >> 1U) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                                & (0x3ffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_92)))))))) 
                                                                              | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((((0x13U 
                                                                                == 
                                                                                (0x13U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_57))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((((0x807U 
                                                                                == 
                                                                                (0x807U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((((0x1bU 
                                                                                == 
                                                                                (0x1bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_80))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_81))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((((7U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((0x41bU 
                                                                                == 
                                                                                (0x41bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_63))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                ((((0x413U 
                                                                                == 
                                                                                (0x413U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_72))))) 
                                                                                | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_13) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_21) 
                                                                                & (IData)(
                                                                                ((((0x7bffe0U 
                                                                                == 
                                                                                (0x7bffe0U 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__instfetch__DOT__pc_en)) 
                                                                                & (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata 
                                                                                >> 0x14U)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_56)))))) 
                                                                                | ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                                                & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                                                & (IData)(
                                                                                (((((0x81bU 
                                                                                == 
                                                                                (0x81bU 
                                                                                & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_12)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_36)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_38)) 
                                                                                & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_73))))))))))))))))))))))));
    vlSelfRef.core__DOT__decode__DOT__casez_tmp = (
                                                   ((0x3fU 
                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                    | ((0x7fU 
                                                        == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                       | ((0x7fffU 
                                                           == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                          | ((0xffffU 
                                                              == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                             | ((0x7fffU 
                                                                 == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                | (0xffffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53)))))))
                                                    ? 
                                                   (((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                                                     | ((0xffU 
                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                        | ((0x7fffU 
                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                           | ((0xffffU 
                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                              | ((0xffU 
                                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                 | ((0x7fffU 
                                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                    | (0xffffU 
                                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))
                                                     ? 
                                                    (((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                  | ((0x1ffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))))))
                                                      ? (QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelfRef.io_debugInst 
                                                                            >> 0x14U))))
                                                      : (QData)((IData)(
                                                                        (0x3fU 
                                                                         & (vlSelfRef.io_debugInst 
                                                                            >> 0x14U)))))
                                                     : 
                                                    (((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                  | ((0x1ffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))))))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelfRef.io_debugInst 
                                                                           >> 0x1fU)))) 
                                                       << 0x14U) 
                                                      | (QData)((IData)(
                                                                        (((0xff000U 
                                                                           & vlSelfRef.io_debugInst) 
                                                                          | (0x800U 
                                                                             & (vlSelfRef.io_debugInst 
                                                                                >> 9U))) 
                                                                         | (0x7feU 
                                                                            & (vlSelfRef.io_debugInst 
                                                                               >> 0x14U))))))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelfRef.io_debugInst 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelfRef.io_debugInst))))))
                                                    : 
                                                   (((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                                                     | ((0xffU 
                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                        | ((0x7fffU 
                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                           | ((0xffffU 
                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                              | ((0xffU 
                                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                 | ((0x7fffU 
                                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_51)) 
                                                                    | (0xffffU 
                                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))
                                                     ? 
                                                    (((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                  | ((0x1ffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))))))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelfRef.io_debugInst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & (vlSelfRef.io_debugInst 
                                                                             << 4U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlSelfRef.io_debugInst 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlSelfRef.io_debugInst 
                                                                                >> 7U)))))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          (vlSelfRef.io_debugInst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelfRef.io_debugInst 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelfRef.io_debugInst 
                                                                               >> 7U)))))))
                                                     : 
                                                    (((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                               | ((0xffU 
                                                                   == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                  | ((0x1ffU 
                                                                      == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                     | ((0x7fU 
                                                                         == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                        | ((0xffffU 
                                                                            == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_34)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                              | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_53))))))))))))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelfRef.io_debugInst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (vlSelfRef.io_debugInst 
                                                                         >> 0x14U))))
                                                      : 0ULL)));
    vlSelfRef.core__DOT__rf__DOT___GEN = (((0x7fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                           | ((0xffU 
                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                              | ((0xffU 
                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                                 | ((0x3ffU 
                                                     == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                    | ((0x1ffU 
                                                        == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                       | ((0x3fU 
                                                           == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                          | ((0x7fffU 
                                                              == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19)) 
                                                             | ((0x1fffU 
                                                                 == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20)) 
                                                                | ((0x7fffU 
                                                                    == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                                                   | ((0x3ffU 
                                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                                      | ((0x7fU 
                                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                                                         | ((0x3fffU 
                                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_30)) 
                                                                            | ((0x7fffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_33)) 
                                                                               | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                                | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54))))))))))))))) 
                                          & (0U != (IData)(vlSelfRef.core__DOT___decode_io_rd_addr)));
    vlSelfRef.core__DOT___decode_io_rs1_en = ((0x7fU 
                                               == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                                              | ((0xffU 
                                                  == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                 | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                                     & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                                        & (IData)(
                                                                  (0x1017U 
                                                                   == 
                                                                   (0x1017U 
                                                                    & vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs))))) 
                                                    | ((0x3ffU 
                                                        == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                       | ((0x1ffU 
                                                           == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                          | ((0xffU 
                                                              == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                             | ((0x7fffU 
                                                                 == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19)) 
                                                                | ((0x1fffU 
                                                                    == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20)) 
                                                                   | ((0x7fffU 
                                                                       == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                                                      | ((0x1ffU 
                                                                          == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                         | ((0x3fffU 
                                                                             == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_30)) 
                                                                            | ((0x7fffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_33)) 
                                                                               | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                                                                | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54)))))))))))))));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11 
        = (((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
            | (0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))) 
           | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14 
        = ((0x15U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
           | (0x16U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)));
    vlSelfRef.core__DOT__executer__DOT___GEN_28 = (
                                                   (1U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                   | ((2U 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                      | ((3U 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                         | ((4U 
                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                            | ((5U 
                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                               | ((6U 
                                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                  | ((7U 
                                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                     | ((8U 
                                                                         == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                        | ((9U 
                                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                           | ((0xaU 
                                                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                              | ((0xbU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0xcU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0xdU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0xeU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0xfU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x10U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x12U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | (0x13U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))))))))))))))));
    vlSelfRef.core__DOT____Vcellinp__executer__io_in2 
        = (((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16)) 
            | ((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
               | ((0x7fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19)) 
                  | ((0x1fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20)) 
                     | ((0x7fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                        | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                            & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                               & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                  & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58)))) 
                           | ((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                              | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53))))))))
            ? ((0U != (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                : 0U) : (IData)(vlSelfRef.core__DOT__decode__DOT__casez_tmp));
    vlSelfRef.core__DOT____Vcellinp__executer__io_in1 
        = (((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
            | ((0x1ffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
               | ((0x7fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                  | (0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)))))
            ? vlSelfRef.io_debugPC : ((IData)(vlSelfRef.core__DOT___decode_io_rs1_en)
                                       ? vlSelfRef.core__DOT____Vcellinp__control__io_rf_data
                                       : 0U));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_17 
        = VL_SHIFTL_III(32,32,6, vlSelfRef.core__DOT____Vcellinp__executer__io_in1, 
                        (0x3fU & vlSelfRef.core__DOT____Vcellinp__executer__io_in2));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_4 
        = (vlSelfRef.core__DOT____Vcellinp__executer__io_in1 
           ^ vlSelfRef.core__DOT____Vcellinp__executer__io_in2);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_5 
        = VL_SHIFTR_III(32,32,6, vlSelfRef.core__DOT____Vcellinp__executer__io_in1, 
                        (0x3fU & vlSelfRef.core__DOT____Vcellinp__executer__io_in2));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_6 
        = VL_SHIFTRS_III(32,32,6, vlSelfRef.core__DOT____Vcellinp__executer__io_in1, 
                         (0x3fU & vlSelfRef.core__DOT____Vcellinp__executer__io_in2));
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_7 
        = (vlSelfRef.core__DOT____Vcellinp__executer__io_in1 
           | vlSelfRef.core__DOT____Vcellinp__executer__io_in2);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_8 
        = (vlSelfRef.core__DOT____Vcellinp__executer__io_in1 
           & vlSelfRef.core__DOT____Vcellinp__executer__io_in2);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_2 
        = VL_LTS_III(32, vlSelfRef.core__DOT____Vcellinp__executer__io_in1, vlSelfRef.core__DOT____Vcellinp__executer__io_in2);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_3 
        = (vlSelfRef.core__DOT____Vcellinp__executer__io_in1 
           < vlSelfRef.core__DOT____Vcellinp__executer__io_in2);
    vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1 
        = (vlSelfRef.core__DOT____Vcellinp__executer__io_in1 
           + vlSelfRef.core__DOT____Vcellinp__executer__io_in2);
    vlSelfRef.core__DOT___executer_io_branchCond = 
        ((~ (((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
              | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                 | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                    | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                       | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))))) 
             | ((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                | ((0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                   | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))))) 
         & ((0x1cU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
             ? (vlSelfRef.core__DOT____Vcellinp__executer__io_in1 
                == vlSelfRef.core__DOT____Vcellinp__executer__io_in2)
             : ((0x1dU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                 ? (vlSelfRef.core__DOT____Vcellinp__executer__io_in1 
                    != vlSelfRef.core__DOT____Vcellinp__executer__io_in2)
                 : ((0x1eU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                     ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_2)
                     : ((0x1fU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                         ? VL_GTES_III(32, vlSelfRef.core__DOT____Vcellinp__executer__io_in1, vlSelfRef.core__DOT____Vcellinp__executer__io_in2)
                         : ((0x20U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                             ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_3)
                             : ((0x21U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                 ? (vlSelfRef.core__DOT____Vcellinp__executer__io_in1 
                                    >= vlSelfRef.core__DOT____Vcellinp__executer__io_in2)
                                 : ((0x22U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                    | (0x23U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))))));
    vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__addr_offset_dmem 
        = (((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28)
             ? 0U : (IData)(((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                              ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                              : ((0x15U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                  ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                  : ((0x16U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                      ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                      : ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                          ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                          : ((0x18U 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                              ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                              : ((0x19U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                  ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                  : 
                                                 ((0x1aU 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                   ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                    ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                    : 0ULL)))))))))) 
           - (IData)(0x80000000U));
    vlSelfRef.io_debugDNPC = ((IData)(vlSelfRef.core__DOT___executer_io_branchCond)
                               ? ((IData)(vlSelfRef.core__DOT___decode_io_rs1_en)
                                   ? ((IData)(vlSelfRef.core__DOT__decode__DOT__casez_tmp) 
                                      + vlSelfRef.core__DOT____Vcellinp__control__io_rf_data)
                                   : ((IData)(vlSelfRef.core__DOT__decode__DOT__casez_tmp) 
                                      + vlSelfRef.io_debugPC))
                               : ((IData)(4U) + vlSelfRef.io_debugPC));
    if (((~ (IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28)) 
         & ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
            | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
               | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                  | ((0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                     | (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11))))))) {
        Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__mem_read_TOP(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__addr_offset_dmem, 4U, vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__mem_read__1__data);
        vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__lower_data 
            = vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__mem_read__1__data;
        Vcore___024root____Vdpiimwrap_core__DOT__ram2r1w__DOT__mem__DOT__mem_read_TOP(
                                                                                ((IData)(4U) 
                                                                                + vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__addr_offset_dmem), 4U, vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__mem_read__2__data);
        vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__upper_data 
            = vlSelfRef.__Vtask_core__DOT__ram2r1w__DOT__mem__DOT__mem_read__2__data;
        vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata_64 
            = (((QData)((IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__upper_data)) 
                << 0x20U) | (QData)((IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__lower_data)));
    }
    vlSelfRef.core__DOT___executer_io_out = ((1U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                              ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                  ? 
                                                 (vlSelfRef.core__DOT____Vcellinp__executer__io_in1 
                                                  - vlSelfRef.core__DOT____Vcellinp__executer__io_in2)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                   ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_17
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                    ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_2)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                     ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_3)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                      ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_4
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                       ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_5
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                        ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_6
                                                        : 
                                                       ((9U 
                                                         == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                         ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_7
                                                         : 
                                                        ((0xaU 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                          ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_8
                                                          : 
                                                         ((0xbU 
                                                           == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                           ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1
                                                           : 
                                                          ((0xcU 
                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                            ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_2)
                                                            : 
                                                           ((0xdU 
                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                             ? (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_3)
                                                             : 
                                                            ((0xeU 
                                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                              ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_4
                                                              : 
                                                             ((0xfU 
                                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                               ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_7
                                                               : 
                                                              ((0x10U 
                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_8
                                                                : 
                                                               ((0x11U 
                                                                 == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                 ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_17
                                                                 : 
                                                                ((0x12U 
                                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                  ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_5
                                                                  : 
                                                                 ((0x13U 
                                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                   ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_6
                                                                   : 
                                                                  ((0x14U 
                                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                    ? 
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata_64 
                                                                                >> 7U))))) 
                                                                     << 8U) 
                                                                    | (0xffU 
                                                                       & (IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata_64)))
                                                                    : 
                                                                   ((0x15U 
                                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                     ? 
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata_64 
                                                                                >> 0xfU))))) 
                                                                      << 0x10U) 
                                                                     | (0xffffU 
                                                                        & (IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata_64)))
                                                                     : 
                                                                    ((0x16U 
                                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                      ? (IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata_64)
                                                                      : 
                                                                     ((0x17U 
                                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                       ? 
                                                                      (0xffU 
                                                                       & (IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata_64))
                                                                       : 
                                                                      ((0x18U 
                                                                        == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                        ? 
                                                                       (0xffffU 
                                                                        & (IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata_64))
                                                                        : 
                                                                       (((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11) 
                                                                         | ((0x1cU 
                                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                            | ((0x1dU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                               | ((0x1eU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x1fU 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                                                | (0x21U 
                                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))))
                                                                         ? 0U
                                                                         : 
                                                                        ((0x22U 
                                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                          ? 
                                                                         ((IData)(4U) 
                                                                          + vlSelfRef.core__DOT____Vcellinp__executer__io_in1)
                                                                          : 
                                                                         ((0x23U 
                                                                           == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                           ? 
                                                                          ((IData)(4U) 
                                                                           + vlSelfRef.core__DOT____Vcellinp__executer__io_in1)
                                                                           : 
                                                                          ((0x24U 
                                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                            ? vlSelfRef.core__DOT____Vcellinp__executer__io_in2
                                                                            : 
                                                                           ((0x25U 
                                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                                             ? vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1
                                                                             : 0U)))))))))))))))))))))))))))));
}

void Vcore___024root___eval_triggers__act(Vcore___024root* vlSelf);

bool Vcore___024root___eval_phase__act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcore___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcore___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcore___024root___eval_phase__nba(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__nba\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcore___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__nba(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vcore___024root___eval(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("build/core.sv", 1664, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcore___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("build/core.sv", 1664, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcore___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcore___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_debug_assertions\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
