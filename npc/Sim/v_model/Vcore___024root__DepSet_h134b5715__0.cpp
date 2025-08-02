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

void Vcore___024root____Vdpiimwrap_core__DOT__ebreak__DOT__ebreak_handler_TOP();
void Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__write_backend__DOT__memory_write_TOP(IData/*31:0*/ aw_addr, IData/*31:0*/ w_data, IData/*31:0*/ w_strb);
void Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__memory_read_TOP(IData/*31:0*/ ar_addr, IData/*31:0*/ &r_data);

VL_INLINE_OPT void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__core__DOT__Fsram__DOT__r_state;
    __Vdly__core__DOT__Fsram__DOT__r_state = 0;
    CData/*0:0*/ __Vdly__core__DOT__Fsram__DOT__r_valid_reg;
    __Vdly__core__DOT__Fsram__DOT__r_valid_reg = 0;
    CData/*0:0*/ __Vdly__core__DOT__Fsram__DOT__w_state;
    __Vdly__core__DOT__Fsram__DOT__w_state = 0;
    CData/*0:0*/ __Vdly__core__DOT__Fsram__DOT__b_valid_reg;
    __Vdly__core__DOT__Fsram__DOT__b_valid_reg = 0;
    CData/*0:0*/ __Vdly__core__DOT__Lsram__DOT__r_state;
    __Vdly__core__DOT__Lsram__DOT__r_state = 0;
    CData/*0:0*/ __Vdly__core__DOT__Lsram__DOT__r_valid_reg;
    __Vdly__core__DOT__Lsram__DOT__r_valid_reg = 0;
    CData/*0:0*/ __Vdly__core__DOT__Lsram__DOT__w_state;
    __Vdly__core__DOT__Lsram__DOT__w_state = 0;
    CData/*0:0*/ __Vdly__core__DOT__Lsram__DOT__b_valid_reg;
    __Vdly__core__DOT__Lsram__DOT__b_valid_reg = 0;
    IData/*31:0*/ __Vdly__core__DOT__IFU__DOT__pc;
    __Vdly__core__DOT__IFU__DOT__pc = 0;
    CData/*0:0*/ __Vdly__core__DOT__IFU__DOT__inst_buf_valid;
    __Vdly__core__DOT__IFU__DOT__inst_buf_valid = 0;
    // Body
    if (vlSelfRef.core__DOT___IDU_io_ebreakhandler) {
        Vcore___024root____Vdpiimwrap_core__DOT__ebreak__DOT__ebreak_handler_TOP();
    }
    __Vdly__core__DOT__IFU__DOT__pc = vlSelfRef.core__DOT__IFU__DOT__pc;
    __Vdly__core__DOT__Fsram__DOT__w_state = vlSelfRef.core__DOT__Fsram__DOT__w_state;
    __Vdly__core__DOT__Fsram__DOT__b_valid_reg = vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg;
    __Vdly__core__DOT__Fsram__DOT__r_state = vlSelfRef.core__DOT__Fsram__DOT__r_state;
    __Vdly__core__DOT__Fsram__DOT__r_valid_reg = vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg;
    __Vdly__core__DOT__Lsram__DOT__r_state = vlSelfRef.core__DOT__Lsram__DOT__r_state;
    __Vdly__core__DOT__Lsram__DOT__r_valid_reg = vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg;
    __Vdly__core__DOT__IFU__DOT__inst_buf_valid = vlSelfRef.core__DOT__IFU__DOT__inst_buf_valid;
    __Vdly__core__DOT__Lsram__DOT__w_state = vlSelfRef.core__DOT__Lsram__DOT__w_state;
    __Vdly__core__DOT__Lsram__DOT__b_valid_reg = vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg;
    vlSelfRef.core__DOT__LS_reg = ((~ (IData)(vlSelfRef.reset)) 
                                   & ((IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg) 
                                      | (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0)));
    vlSelfRef.core__DOT__WBU__DOT__io_w2f_inst_done_REG 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.core__DOT___WBU_io_out_en) 
                                           & (IData)(vlSelfRef.core__DOT__LSU__DOT__is_passthrough)));
    if (((IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state) 
         & (IData)(vlSelfRef.core__DOT__Lsram__DOT___read_backend_done))) {
        vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data 
            = vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg;
    }
    if (vlSelfRef.reset) {
        __Vdly__core__DOT__Fsram__DOT__w_state = 0U;
        __Vdly__core__DOT__Fsram__DOT__b_valid_reg = 0U;
        vlSelfRef.core__DOT__Fsram__DOT__w_state = __Vdly__core__DOT__Fsram__DOT__w_state;
        vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg 
            = __Vdly__core__DOT__Fsram__DOT__b_valid_reg;
        __Vdly__core__DOT__Lsram__DOT__w_state = 0U;
        __Vdly__core__DOT__Lsram__DOT__b_valid_reg = 0U;
    } else {
        if (vlSelfRef.core__DOT__Fsram__DOT__w_state) {
            __Vdly__core__DOT__Fsram__DOT__w_state 
                = vlSelfRef.core__DOT__Fsram__DOT__w_state;
            __Vdly__core__DOT__Fsram__DOT__b_valid_reg 
                = ((IData)(vlSelfRef.core__DOT__Fsram__DOT___write_backend_done) 
                   | (IData)(vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg));
        } else {
            __Vdly__core__DOT__Fsram__DOT__w_state 
                = vlSelfRef.core__DOT__Fsram__DOT__w_state;
        }
        vlSelfRef.core__DOT__Fsram__DOT__w_state = __Vdly__core__DOT__Fsram__DOT__w_state;
        vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg 
            = __Vdly__core__DOT__Fsram__DOT__b_valid_reg;
        if (vlSelfRef.core__DOT__Lsram__DOT__w_state) {
            __Vdly__core__DOT__Lsram__DOT__w_state 
                = ((~ ((IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state) 
                       & (IData)(vlSelfRef.core__DOT__Lsram__DOT___GEN_0))) 
                   & (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state));
            __Vdly__core__DOT__Lsram__DOT__b_valid_reg 
                = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT___GEN_0)) 
                   & ((IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_done) 
                      | (IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg)));
        } else {
            __Vdly__core__DOT__Lsram__DOT__w_state 
                = ((IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T) 
                   | (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state));
        }
    }
    vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg = __Vdly__core__DOT__Lsram__DOT__b_valid_reg;
    if (vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel) {
        vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_4)))) {
        vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_pc 
            = vlSelfRef.core__DOT__IFU__DOT__pc;
    }
    if (vlSelfRef.reset) {
        __Vdly__core__DOT__IFU__DOT__pc = 0x80000000U;
        vlSelfRef.core__DOT__IFU__DOT__pc = __Vdly__core__DOT__IFU__DOT__pc;
        __Vdly__core__DOT__Lsram__DOT__r_state = 0U;
        __Vdly__core__DOT__Lsram__DOT__r_valid_reg = 0U;
        vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg 
            = __Vdly__core__DOT__Lsram__DOT__r_valid_reg;
        vlSelfRef.core__DOT__rf__DOT__rf_31 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_30 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_29 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_28 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_11 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_7 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_10 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_9 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_3 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_6 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_5 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_1 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_4 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_2 = 0U;
        vlSelfRef.core__DOT__rf__DOT__rf_0 = 0U;
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
        __Vdly__core__DOT__IFU__DOT__inst_buf_valid = 0U;
        vlSelfRef.core__DOT__IFU__DOT__state = 0U;
    } else {
        if (vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel) {
            __Vdly__core__DOT__IFU__DOT__pc = vlSelfRef.core__DOT___EXU_io_pcCtrl_dnpc;
            vlSelfRef.core__DOT__IFU__DOT__state = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_4)))) {
                __Vdly__core__DOT__IFU__DOT__pc = ((IData)(4U) 
                                                   + vlSelfRef.core__DOT__IFU__DOT__pc);
            }
            if (vlSelfRef.core__DOT__IFU__DOT___GEN) {
                if ((1U & (~ (IData)(vlSelfRef.core__DOT__IFU__DOT__inst_buf_valid)))) {
                    vlSelfRef.core__DOT__IFU__DOT__state = 1U;
                }
            } else if (vlSelfRef.core__DOT__IFU__DOT___GEN_0) {
                if (((~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state)) 
                     & (IData)(vlSelfRef.core__DOT__IFU__DOT__io_axi_ar_valid_0))) {
                    vlSelfRef.core__DOT__IFU__DOT__state = 2U;
                }
            } else if (vlSelfRef.core__DOT__IFU__DOT___GEN_3) {
                vlSelfRef.core__DOT__IFU__DOT__state = 0U;
            }
        }
        vlSelfRef.core__DOT__IFU__DOT__pc = __Vdly__core__DOT__IFU__DOT__pc;
        if (vlSelfRef.core__DOT__Lsram__DOT__r_state) {
            __Vdly__core__DOT__Lsram__DOT__r_state 
                = ((~ ((IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state) 
                       & (IData)(vlSelfRef.core__DOT__Lsram__DOT___GEN))) 
                   & (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state));
            __Vdly__core__DOT__Lsram__DOT__r_valid_reg 
                = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT___GEN)) 
                   & ((IData)(vlSelfRef.core__DOT__Lsram__DOT___read_backend_done) 
                      | (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg)));
        } else {
            __Vdly__core__DOT__Lsram__DOT__r_state 
                = ((IData)(vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T) 
                   | (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state));
        }
        vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg 
            = __Vdly__core__DOT__Lsram__DOT__r_valid_reg;
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1fU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_31 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1eU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_30 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1dU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_29 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1cU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_28 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xbU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_11 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (7U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_7 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xaU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_10 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (9U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_9 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (3U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_3 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (6U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_6 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (5U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_5 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (1U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_1 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (4U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_4 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (2U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_2 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        vlSelfRef.core__DOT__rf__DOT__rf_0 = (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))))
                                               ? vlSelfRef.core__DOT___WBU_io_out_data
                                               : 0U);
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (8U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_8 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xcU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_12 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xdU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_13 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xeU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_14 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xfU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_15 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x10U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_16 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x11U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_17 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x12U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_18 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x13U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_19 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x14U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_20 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x15U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_21 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x16U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_22 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x17U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_23 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x18U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_24 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x19U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_25 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1aU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_26 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1bU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_27 = vlSelfRef.core__DOT___WBU_io_out_data;
        }
        __Vdly__core__DOT__IFU__DOT__inst_buf_valid 
            = ((~ (IData)(vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel)) 
               & (((~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_2)) 
                   & (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_3)) 
                  | ((~ ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                         & (IData)(vlSelfRef.core__DOT__IFU__DOT__inst_buf_valid))) 
                     & (IData)(vlSelfRef.core__DOT__IFU__DOT__inst_buf_valid))));
    }
    vlSelfRef.core__DOT__IFU__DOT__inst_buf_valid = __Vdly__core__DOT__IFU__DOT__inst_buf_valid;
    if ((1U & (~ (((0U != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                   | (IData)(vlSelfRef.core__DOT__LSU__DOT__is_passthrough)) 
                  | (~ (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_6)))))) {
        vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_data 
            = vlSelfRef.io_debugout1;
        vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_addr 
            = vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr;
        vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata 
            = vlSelfRef.io_debugin2;
        vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en 
            = vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__Fsram__DOT___write_backend_done = 0U;
    } else {
        vlSelfRef.core__DOT__Fsram__DOT___write_backend_done 
            = vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_en_REG;
        if (vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_en_REG) {
            Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__write_backend__DOT__memory_write_TOP(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_aw_addr_REG, vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_data_REG, (IData)(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_strb_REG));
            vlSelfRef.core__DOT__Fsram__DOT___write_backend_done = 1U;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__Lsram__DOT___write_backend_done = 0U;
    } else {
        vlSelfRef.core__DOT__Lsram__DOT___write_backend_done 
            = vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_en_REG;
        if (vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_en_REG) {
            Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__write_backend__DOT__memory_write_TOP(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_aw_addr_REG, vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_data_REG, (IData)(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_strb_REG));
            vlSelfRef.core__DOT__Lsram__DOT___write_backend_done = 1U;
        }
    }
    vlSelfRef.io_inst_done = ((IData)(vlSelfRef.core__DOT__LS_reg) 
                              | (IData)(vlSelfRef.core__DOT__WBU__DOT__io_w2f_inst_done_REG));
    vlSelfRef.io_debugPC = vlSelfRef.core__DOT__IFU__DOT__pc;
    vlSelfRef.io_debugmemdata = vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data;
    vlSelfRef.core__DOT__Lsram__DOT___read_backend_done 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T));
    vlSelfRef.core__DOT__IFU__DOT___GEN = (0U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state));
    vlSelfRef.core__DOT__IFU__DOT___GEN_0 = (1U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state));
    vlSelfRef.core__DOT__IFU__DOT__io_axi_ar_valid_0 
        = ((0U != (IData)(vlSelfRef.core__DOT__IFU__DOT__state)) 
           & (1U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)));
    vlSelfRef.core__DOT__IFU__DOT___GEN_2 = ((0U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)) 
                                             | (1U 
                                                == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)));
    vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_en_REG = 0U;
    vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_aw_addr_REG = 0U;
    vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_data_REG = 0U;
    vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_strb_REG = 0U;
    vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_data_REG 
        = vlSelfRef.io_debugwdata;
    vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_en_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T));
    vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_aw_addr_REG 
        = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr;
    if ((1U & (~ (((0U != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                   | (IData)(vlSelfRef.core__DOT__LSU__DOT__is_passthrough)) 
                  | (~ (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_6)))))) {
        vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr 
            = vlSelfRef.core__DOT__EXU__DOT___alu_io_out;
    }
    vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_strb_REG 
        = ((1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
            ? 1U : ((3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                     ? 2U : ((IData)((0xfU == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))) 
                             << 2U)));
    if ((1U & (~ (((0U != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                   | (IData)(vlSelfRef.core__DOT__LSU__DOT__is_passthrough)) 
                  | (~ (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_6)))))) {
        vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len 
            = ((0xcU & ((- (IData)((0x1ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_35)))) 
                        << 2U)) | ((2U & (((IData)(
                                                   (0x1003U 
                                                    == 
                                                    (0x307fU 
                                                     & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                                           | ((IData)(
                                                      ((3U 
                                                        == 
                                                        (0x5fU 
                                                         & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                       & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61))) 
                                              | (0x1ffU 
                                                 == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_35)))) 
                                          << 1U)) | (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en)));
    }
    if (vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel) {
        vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_4)))) {
        vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
            = vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_data;
    }
    vlSelfRef.io_debugwdata = ((1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                ? (0xffU & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata)
                                : ((3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                    ? (0xffffU & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata)
                                    : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata));
    vlSelfRef.io_debugmemaddr = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr;
    vlSelfRef.io_debugwaddr = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr;
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg = 0U;
        vlSelfRef.core__DOT__LSU__DOT__state = 0U;
    } else {
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg 
            = vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb;
        if (vlSelfRef.core__DOT__LSU__DOT__io_in_ready_0) {
            if (vlSelfRef.core__DOT__LSU__DOT__is_passthrough) {
                vlSelfRef.core__DOT__LSU__DOT__state = 0U;
            } else if (vlSelfRef.core__DOT__LSU__DOT___GEN_6) {
                if (vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren) {
                    vlSelfRef.core__DOT__LSU__DOT__state = 1U;
                } else if (vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen) {
                    vlSelfRef.core__DOT__LSU__DOT__state = 3U;
                }
            }
        } else if (vlSelfRef.core__DOT__LSU__DOT___GEN_0) {
            if (((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state)) 
                 & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0))) {
                vlSelfRef.core__DOT__LSU__DOT__state = 2U;
            }
        } else if (vlSelfRef.core__DOT__LSU__DOT___GEN_1) {
            if (vlSelfRef.core__DOT__Lsram__DOT___GEN) {
                vlSelfRef.core__DOT__LSU__DOT__state = 0U;
            }
        } else if (vlSelfRef.core__DOT__LSU__DOT___GEN_3) {
            if (((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state)) 
                 & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0))) {
                vlSelfRef.core__DOT__LSU__DOT__state = 4U;
            }
        } else if (((IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_4) 
                    & (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_5))) {
            vlSelfRef.core__DOT__LSU__DOT__state = 0U;
        }
    }
    vlSelfRef.core__DOT__Lsram__DOT__w_state = __Vdly__core__DOT__Lsram__DOT__w_state;
    vlSelfRef.core__DOT__Lsram__DOT__r_state = __Vdly__core__DOT__Lsram__DOT__r_state;
    vlSelfRef.core__DOT__LSU__DOT__io_in_ready_0 = 
        (0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_0 = (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_1 = (2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_3 = (3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_4 = (4U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_6 = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                             & (IData)(vlSelfRef.core__DOT__IFU__DOT__inst_buf_valid));
    vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0 
        = ((0U != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
           & (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_0 
        = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
           | (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    if (((IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state) 
         & (IData)(vlSelfRef.core__DOT__Fsram__DOT___read_backend_done))) {
        vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_data 
            = vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg;
    }
    vlSelfRef.io_debugInst = vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst;
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_74 
        = ((2U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                  >> 0xcU)) | (1U & (~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                        >> 0xeU))));
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
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_54 
        = (IData)((0x4000U == (0x6000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_56 
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
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_59 
        = (IData)((0U == (0x5040U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
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
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_48 
        = (IData)((0x4000U == (0x5000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_46 
        = (IData)((0U == (0x6000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
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
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_64 
        = ((2U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 6U)) << 1U)) | (1U & (~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  >> 0xeU))));
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
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50 
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
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_30 
        = (IData)((0U == (0xfc000000U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65 
        = ((2U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  >> 0xeU))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_68 
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
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_70 
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
                         >> 0x1dU)) << 2U)) | ((2U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 0x1eU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                      >> 0x1fU))))));
    vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state)) 
           & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0));
    vlSelfRef.core__DOT__Lsram__DOT___GEN = (((~ (IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_0)) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))) 
                                             & (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_1 
        = ((IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_0) 
           | (2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    if (vlSelfRef.reset) {
        __Vdly__core__DOT__Fsram__DOT__r_state = 0U;
        __Vdly__core__DOT__Fsram__DOT__r_valid_reg = 0U;
    } else if (vlSelfRef.core__DOT__Fsram__DOT__r_state) {
        __Vdly__core__DOT__Fsram__DOT__r_state = ((~ 
                                                   ((IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state) 
                                                    & (IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN))) 
                                                  & (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state));
        __Vdly__core__DOT__Fsram__DOT__r_valid_reg 
            = ((~ (IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN)) 
               & ((IData)(vlSelfRef.core__DOT__Fsram__DOT___read_backend_done) 
                  | (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg)));
    } else {
        __Vdly__core__DOT__Fsram__DOT__r_state = ((IData)(vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T) 
                                                  | (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state));
    }
    vlSelfRef.core__DOT__Fsram__DOT__r_state = __Vdly__core__DOT__Fsram__DOT__r_state;
    vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg = __Vdly__core__DOT__Fsram__DOT__r_valid_reg;
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_35 
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
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_74))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_57 
        = ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
               >> 0x19U)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_56));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49 
        = (IData)(((0U == (0x60U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                   & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_48)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61 
        = ((vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
            >> 0xcU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_46));
    vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen = (IData)(
                                                            ((0x23U 
                                                              == 
                                                              (0x3fU 
                                                               & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                             & ((IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_59) 
                                                                | ((~ 
                                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                     >> 6U)) 
                                                                   & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_46)))));
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
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_64))));
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
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_64))));
    vlSelfRef.core__DOT___IDU_io_out_bits_branch_en 
        = ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_20)) 
           | (0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62 
        = ((vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
            >> 0x19U) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_30));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60 
        = ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
               >> 0xeU)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_30));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_31 
        = ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
               >> 0x19U)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_30));
    vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en = 
        ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
         | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4)) 
            | (IData)(((3U == (0x5fU & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                       & (3U == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65))))));
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
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_66 
        = ((4U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 0xcU)) << 2U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52 
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
                                             | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_68))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_69 
        = ((0x20U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 0x19U)) << 5U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_68));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_73 
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
                                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_70))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_72 
        = ((0x100U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          >> 6U)) << 8U)) | ((0x80U 
                                              & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 5U)) 
                                             | ((0x40U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                      >> 0xdU)) 
                                                    << 6U)) 
                                                | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_70))));
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
                                       | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_70)))));
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
                            >> 0xeU)) << 6U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_70)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_61 
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
                        >> 0x13U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_70)));
    if (vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__memory_read_TOP(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr, vlSelfRef.__Vtask_core__DOT__Lsram__DOT__read_backend__DOT__memory_read__2__r_data);
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__Lsram__DOT__read_backend__DOT__memory_read__2__r_data;
    } else {
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg 
        = ((IData)(vlSelfRef.reset) ? 0U : vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb);
    vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0 
        = ((~ (IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_1)) 
           & (3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT___LSU_io_axi_b_ready = ((~ 
                                                 ((IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_1) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)))) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT__Fsram__DOT___GEN = (((~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_2)) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.core__DOT__IFU__DOT__state))) 
                                             & (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__Fsram__DOT___read_backend_done 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T));
    vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en 
        = (1U & (IData)(((3U == (0xfU & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                         & ((IData)((0x3010U == (0x7070U 
                                                 & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                            | ((IData)(((0x3030U == 
                                         (0x3070U & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60))) 
                               | (((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                       >> 4U)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49)) 
                                  | ((IData)(((0U == 
                                               (0x70U 
                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_54))) 
                                     | ((IData)(((0x60U 
                                                  == 
                                                  (0x70U 
                                                   & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                 & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52))) 
                                        | (IData)((
                                                   (0x30U 
                                                    == 
                                                    (0x70U 
                                                     & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                   & ((IData)(
                                                              ((0x2000U 
                                                                == 
                                                                (0x6000U 
                                                                 & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                               & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62))) 
                                                      | (IData)(
                                                                ((0x5000U 
                                                                  == 
                                                                  (0x5000U 
                                                                   & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                 & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62))))))))))))));
    vlSelfRef.core__DOT___IDU_io_ebreakhandler = (IData)(
                                                         ((0x100070U 
                                                           == 
                                                           (0x1fffff0U 
                                                            & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                          & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_31)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50 
        = ((vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
            >> 0xeU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_31));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_55 
        = ((vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
            >> 0xdU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_31));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32 
        = ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
               >> 0xeU)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_31));
    vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren = 
        ((IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en) 
         ^ (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_71 
        = (((0x40U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                          >> 3U)) << 6U)) | (0x20U 
                                             & ((~ 
                                                 (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                  >> 4U)) 
                                                << 5U))) 
           | ((0x10U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                        >> 1U)) | ((8U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                          >> 3U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_66))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_67 
        = ((0x10U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                         >> 5U)) << 4U)) | ((8U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 6U)) 
                                                   << 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_66)));
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
                            >> 0xeU)) << 6U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_69)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_75 
        = (((0x200U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                           >> 6U)) << 9U)) | (0x100U 
                                              & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 4U))) 
           | ((0x80U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                            >> 0xdU)) << 7U)) | ((0x40U 
                                                  & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 8U)) 
                                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_69))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_31 
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
                                        | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_73)))));
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
                                    | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_73))));
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
                                                     | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_72)))));
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
                                                  | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_72))));
    vlSelfRef.io_ls_done = ((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0) 
                            | (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state)) 
           & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0));
    vlSelfRef.core__DOT__Lsram__DOT___GEN_0 = ((IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg) 
                                               & (IData)(vlSelfRef.core__DOT___LSU_io_axi_b_ready));
    vlSelfRef.core__DOT__LSU__DOT___GEN_5 = ((IData)(vlSelfRef.core__DOT___LSU_io_axi_b_ready) 
                                             & (IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg));
    vlSelfRef.core__DOT__IFU__DOT___GEN_3 = ((2U == (IData)(vlSelfRef.core__DOT__IFU__DOT__state)) 
                                             & (IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN));
    vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state)) 
           & (IData)(vlSelfRef.core__DOT__IFU__DOT__io_axi_ar_valid_0));
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
                                    | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_71))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_22 
        = ((0x100U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      << 8U)) | ((0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 6U)) 
                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_71)));
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
                                   | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_67))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8 
        = (((0x100U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 8U)) | (0x80U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                           << 6U))) 
           | ((0x40U & ((~ (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                            >> 2U)) << 6U)) | ((0x20U 
                                                & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                   << 1U)) 
                                               | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_67))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_54 
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
                                        | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_75)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_76 
        = ((0x800U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      << 7U)) | ((0x400U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                            << 5U)) 
                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_75)));
    vlSelfRef.core__DOT__IFU__DOT___GEN_4 = (1U & (
                                                   (~ (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_3)) 
                                                   | (IData)(vlSelfRef.core__DOT__IFU__DOT___GEN_2)));
    if (vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__memory_read_TOP(vlSelfRef.core__DOT__IFU__DOT__pc, vlSelfRef.__Vtask_core__DOT__Fsram__DOT__read_backend__DOT__memory_read__0__r_data);
        vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__Fsram__DOT__read_backend__DOT__memory_read__0__r_data;
    } else {
        vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_1_1 
        = ((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23)) 
           | (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)));
    vlSelfRef.core__DOT__IDU__DOT__casez_tmp = (((0x3fU 
                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                 | ((0x7fU 
                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                    | ((0x7fffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28)) 
                                                       | ((0xffffU 
                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                          | ((0x7fffU 
                                                              == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52)) 
                                                             | (0xffffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_54)))))))
                                                 ? 
                                                (((0xffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11)) 
                                                  | ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_13)) 
                                                     | ((0x7fffU 
                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28)) 
                                                        | ((0xffffU 
                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                           | ((0xffU 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50)) 
                                                              | ((0x7fffU 
                                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52)) 
                                                                 | (0xffffU 
                                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_54))))))))
                                                  ? 
                                                 (((0x7fU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
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
                                                                     | ((0xffffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                                        | ((0xffU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50)) 
                                                                              | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_54))))))))))))
                                                   ? (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                         >> 0x14U))))
                                                   : (QData)((IData)(
                                                                     (0x3fU 
                                                                      & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                         >> 0x14U)))))
                                                  : 
                                                 (((0x7fU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
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
                                                                     | ((0xffffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                                        | ((0xffU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50)) 
                                                                              | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_54))))))))))))
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
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))))))
                                                 : 
                                                (((0xffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11)) 
                                                  | ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_13)) 
                                                     | ((0x7fffU 
                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28)) 
                                                        | ((0xffffU 
                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                           | ((0xffU 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50)) 
                                                              | ((0x7fffU 
                                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52)) 
                                                                 | (0xffffU 
                                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_54))))))))
                                                  ? 
                                                 (((0x7fU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
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
                                                                     | ((0xffffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                                        | ((0xffU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50)) 
                                                                              | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_54))))))))))))
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
                                                                            >> 7U)))))))
                                                  : 
                                                 (((0x7fU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
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
                                                                     | ((0xffffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_31)) 
                                                                        | ((0xffU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50)) 
                                                                              | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_54))))))))))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                      >> 0x14U))))
                                                   : 0ULL)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_3 = (((((IData)(
                                                           ((0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                            & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_46))) 
                                                   | ((0x7fffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28)) 
                                                      | ((IData)(
                                                                 ((0x1033U 
                                                                   == 
                                                                   (0x307fU 
                                                                    & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                  & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_31))) 
                                                         | ((IData)(
                                                                    ((0x13U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                     & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49))) 
                                                            | ((IData)(
                                                                       ((0x33U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50))) 
                                                               | ((0x7fffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52)) 
                                                                  | ((IData)(
                                                                             ((3U 
                                                                               == 
                                                                               (0xfU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                              & (0xfffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_76)))) 
                                                                     | (IData)(
                                                                               ((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52)))))))))) 
                                                  << 3U) 
                                                 | (((0x7fffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28)) 
                                                     | ((IData)(
                                                                ((0x1033U 
                                                                  == 
                                                                  (0x107fU 
                                                                   & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                 & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32))) 
                                                        | ((IData)(
                                                                   ((0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                    & (3U 
                                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_74)))) 
                                                           | ((IData)(
                                                                      ((0x2033U 
                                                                        == 
                                                                        (0x207fU 
                                                                         & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                       & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32))) 
                                                              | ((IData)(
                                                                         ((0x13U 
                                                                           == 
                                                                           (0x107fU 
                                                                            & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                          & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_54))) 
                                                                 | ((IData)(
                                                                            ((0x33U 
                                                                              == 
                                                                              (0x207fU 
                                                                               & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                             & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50))) 
                                                                    | ((0xffU 
                                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50)) 
                                                                       | ((0x7fffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52)) 
                                                                          | (IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (0xfffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_76)))))))))))) 
                                                    << 2U)) 
                                                | ((((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36)) 
                                                     | ((IData)(
                                                                ((0x33U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                 & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_55))) 
                                                        | ((0xffU 
                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50)) 
                                                           | ((0x7fffU 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52)) 
                                                              | ((IData)(
                                                                         ((3U 
                                                                           == 
                                                                           (0xfU 
                                                                            & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                          & (0xfffU 
                                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_76)))) 
                                                                 | (IData)(
                                                                           ((0x33U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                            & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_57)))))))) 
                                                    << 1U) 
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
                                                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_59))) 
                                                               | ((0x3fU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                                  | ((IData)(
                                                                             ((0x33U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32))) 
                                                                     | ((0x3ffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23)) 
                                                                        | ((0x7fU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                                           | ((IData)(
                                                                                ((0x1013U 
                                                                                == 
                                                                                (0x307fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60))) 
                                                                              | ((IData)(
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61))) 
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
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_74)))) 
                                                                                | (IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (0xfU 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & ((IData)(
                                                                                ((0x30U 
                                                                                == 
                                                                                (0x1070U 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_55))) 
                                                                                | ((IData)(
                                                                                ((0x60U 
                                                                                == 
                                                                                (0x70U 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_48))) 
                                                                                | ((vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                                                >> 4U) 
                                                                                & ((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7060U 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_56))) 
                                                                                | (IData)(
                                                                                ((0x5020U 
                                                                                == 
                                                                                (0x7060U 
                                                                                & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_57)))))))))))))))))))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55 
        = ((0x4000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_76))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_45 
        = ((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52)) 
           | ((IData)(((0x1bU == (0x1fU & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                       & (0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_75)))) 
              | ((0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55)) 
                 | (0x3fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_61)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_16 
        = ((((((IData)((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11))) 
               << 2U) | (((IData)((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_13))) 
                          << 1U) | (0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_15)))) 
             << 6U) | ((((IData)((0x1fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16))) 
                         << 1U) | (0x7fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17))) 
                       << 4U)) | (((((IData)(((0x33U 
                                               == (0x2077U 
                                                   & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst)) 
                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32))) 
                                     << 1U) | (0xffU 
                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50))) 
                                   << 2U) | (((IData)(
                                                      (0x7fffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55))) 
                                              << 1U) 
                                             | (0x3fffU 
                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_61)))));
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
                                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_45)))))))))))))))
          ? (0x1fU & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                      >> 7U)) : 0U);
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 = ((IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_45) 
                                                | ((((((((((((((0x7fU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                               | (0xffU 
                                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1))) 
                                                              | (3U 
                                                                 == 
                                                                 (0x405fU 
                                                                  & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                                                             | (0x3ffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7))) 
                                                            | (0x1ffU 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8))) 
                                                           | (0xffU 
                                                              == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_13))) 
                                                          | (0x7fffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_15))) 
                                                         | (0x1fffU 
                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16))) 
                                                        | (0x7fffU 
                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17))) 
                                                       | (0x1ffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_22))) 
                                                      | (0x3fffU 
                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_27))) 
                                                     | (0x7fffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_30))) 
                                                    | (0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36))) 
                                                   | (0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50))));
    vlSelfRef.core__DOT___IDU_io_d2r_rs2_addr = ((0U 
                                                  != (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_16))
                                                  ? 
                                                 (0x1fU 
                                                  & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                     >> 0x14U))
                                                  : 0U);
    vlSelfRef.core__DOT___IDU_io_d2r_rs1_addr = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)
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
    vlSelfRef.io_debugin2 = (((0U != (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_16)) 
                              & (0U != (0x1fU & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 0x14U))))
                              ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                              : 0U);
    vlSelfRef.io_debugin1 = (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0) 
                              & (0U != (0x1fU & (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst 
                                                 >> 0xfU))))
                              ? vlSelfRef.core__DOT__rf__DOT__casez_tmp
                              : 0U);
    vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2 
        = ((1U & ((~ (IData)((0U != (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_16)))) 
                  | ((IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en) 
                     & (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen))))
            ? (IData)(vlSelfRef.core__DOT__IDU__DOT__casez_tmp)
            : vlSelfRef.io_debugin2);
    vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
        = ((1U & ((IData)((0x17U == (0x7fU & vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_inst))) 
                  | (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24))))
            ? vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_pc
            : vlSelfRef.io_debugin1);
    vlSelfRef.core__DOT__EXU__DOT___alu_io_out = ((5U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                   ? 
                                                  VL_MODDIV_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
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
                                                     == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                     ? 
                                                    (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                     * vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, 
                                                                    (0x1fU 
                                                                     & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                       ? 
                                                      (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                        ? 
                                                       (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                         ? 
                                                        (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                         ^ vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                          ? 
                                                         (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                          | vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                           ? 
                                                          (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                           & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                            ? 
                                                           (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                            != vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                             ? 
                                                            (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                             == vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                              ? 
                                                             ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en)
                                                               ? 
                                                              (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                               >= vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                               : 
                                                              VL_GTES_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                              : 
                                                             ((7U 
                                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                               ? 
                                                              ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en)
                                                                ? 
                                                               (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                < vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                : 
                                                               VL_LTS_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                                ? 
                                                               (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                - vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3))
                                                                 ? 
                                                                (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                 + vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                 : 0U)))))))))))))));
    vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel = (((IData)(vlSelfRef.core__DOT___IDU_io_out_bits_branch_en) 
                                                  & vlSelfRef.core__DOT__EXU__DOT___alu_io_out) 
                                                 | (IData)(vlSelfRef.core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_1_1));
    vlSelfRef.core__DOT___EXU_io_pcCtrl_dnpc = ((1U 
                                                 & ((0x7fU 
                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                                                    | ((~ (IData)(
                                                                  (0x3ffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23)))) 
                                                       | (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_branch_en))))
                                                 ? 
                                                (vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_pc 
                                                 + (IData)(vlSelfRef.core__DOT__IDU__DOT__casez_tmp))
                                                 : vlSelfRef.core__DOT__EXU__DOT___alu_io_out);
    vlSelfRef.io_debugout1 = ((IData)(vlSelfRef.core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_1_1)
                               ? ((IData)(4U) + vlSelfRef.core__DOT__IFU__DOT__inst_buf_bits_pc)
                               : vlSelfRef.core__DOT__EXU__DOT___alu_io_out);
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
            VL_FATAL_MT("build/core.sv", 1941, "", "NBA region did not converge.");
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
                VL_FATAL_MT("build/core.sv", 1941, "", "Active region did not converge.");
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
