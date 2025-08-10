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

void Vcore___024root____Vdpiimwrap_core__DOT__exu__DOT__ebreak_inst__DOT__ebreak_handler_TOP();
void Vcore___024root____Vdpiimwrap_core__DOT__if_sram__DOT__write_backend__DOT__memory_write_TOP(IData/*31:0*/ aw_addr, IData/*31:0*/ w_data, IData/*31:0*/ w_strb);
void Vcore___024root____Vdpiimwrap_core__DOT__if_sram__DOT__read_backend__DOT__memory_read_TOP(IData/*31:0*/ ar_addr, IData/*31:0*/ &r_data);

VL_INLINE_OPT void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__core__DOT__ifu__DOT__pc;
    __Vdly__core__DOT__ifu__DOT__pc = 0;
    IData/*31:0*/ __Vdly__core__DOT__ifu__DOT__inst_buf_bits_pc;
    __Vdly__core__DOT__ifu__DOT__inst_buf_bits_pc = 0;
    CData/*0:0*/ __Vdly__core__DOT__ifu__DOT__inst_buf_valid;
    __Vdly__core__DOT__ifu__DOT__inst_buf_valid = 0;
    CData/*0:0*/ __Vdly__core__DOT__queue__DOT__full;
    __Vdly__core__DOT__queue__DOT__full = 0;
    CData/*0:0*/ __Vdly__core__DOT__queue_1__DOT__full;
    __Vdly__core__DOT__queue_1__DOT__full = 0;
    CData/*0:0*/ __Vdly__core__DOT__queue_2__DOT__full;
    __Vdly__core__DOT__queue_2__DOT__full = 0;
    CData/*0:0*/ __Vdly__core__DOT__queue_3__DOT__full;
    __Vdly__core__DOT__queue_3__DOT__full = 0;
    CData/*0:0*/ __Vdly__core__DOT__if_sram__DOT__r_state;
    __Vdly__core__DOT__if_sram__DOT__r_state = 0;
    CData/*0:0*/ __Vdly__core__DOT__if_sram__DOT__r_valid_reg;
    __Vdly__core__DOT__if_sram__DOT__r_valid_reg = 0;
    CData/*0:0*/ __Vdly__core__DOT__if_sram__DOT__w_state;
    __Vdly__core__DOT__if_sram__DOT__w_state = 0;
    CData/*0:0*/ __Vdly__core__DOT__if_sram__DOT__b_valid_reg;
    __Vdly__core__DOT__if_sram__DOT__b_valid_reg = 0;
    CData/*0:0*/ __Vdly__core__DOT__ls_sram__DOT__r_state;
    __Vdly__core__DOT__ls_sram__DOT__r_state = 0;
    CData/*0:0*/ __Vdly__core__DOT__ls_sram__DOT__r_valid_reg;
    __Vdly__core__DOT__ls_sram__DOT__r_valid_reg = 0;
    CData/*0:0*/ __Vdly__core__DOT__ls_sram__DOT__w_state;
    __Vdly__core__DOT__ls_sram__DOT__w_state = 0;
    CData/*0:0*/ __Vdly__core__DOT__ls_sram__DOT__b_valid_reg;
    __Vdly__core__DOT__ls_sram__DOT__b_valid_reg = 0;
    // Body
    Vcore___024root____Vdpiimwrap_core__DOT__exu__DOT__ebreak_inst__DOT__ebreak_handler_TOP();
    __Vdly__core__DOT__queue__DOT__full = vlSelfRef.core__DOT__queue__DOT__full;
    __Vdly__core__DOT__queue_1__DOT__full = vlSelfRef.core__DOT__queue_1__DOT__full;
    __Vdly__core__DOT__queue_3__DOT__full = vlSelfRef.core__DOT__queue_3__DOT__full;
    __Vdly__core__DOT__queue_2__DOT__full = vlSelfRef.core__DOT__queue_2__DOT__full;
    __Vdly__core__DOT__ifu__DOT__inst_buf_valid = vlSelfRef.core__DOT__ifu__DOT__inst_buf_valid;
    __Vdly__core__DOT__if_sram__DOT__w_state = vlSelfRef.core__DOT__if_sram__DOT__w_state;
    __Vdly__core__DOT__if_sram__DOT__b_valid_reg = vlSelfRef.core__DOT__if_sram__DOT__b_valid_reg;
    __Vdly__core__DOT__if_sram__DOT__r_state = vlSelfRef.core__DOT__if_sram__DOT__r_state;
    __Vdly__core__DOT__if_sram__DOT__r_valid_reg = vlSelfRef.core__DOT__if_sram__DOT__r_valid_reg;
    __Vdly__core__DOT__ls_sram__DOT__r_state = vlSelfRef.core__DOT__ls_sram__DOT__r_state;
    __Vdly__core__DOT__ls_sram__DOT__r_valid_reg = vlSelfRef.core__DOT__ls_sram__DOT__r_valid_reg;
    __Vdly__core__DOT__ifu__DOT__inst_buf_bits_pc = vlSelfRef.core__DOT__ifu__DOT__inst_buf_bits_pc;
    __Vdly__core__DOT__ifu__DOT__pc = vlSelfRef.core__DOT__ifu__DOT__pc;
    __Vdly__core__DOT__ls_sram__DOT__w_state = vlSelfRef.core__DOT__ls_sram__DOT__w_state;
    __Vdly__core__DOT__ls_sram__DOT__b_valid_reg = vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg;
    vlSelfRef.core__DOT__LS_reg = ((~ (IData)(vlSelfRef.reset)) 
                                   & ((IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_valid_reg) 
                                      | (IData)(vlSelfRef.core__DOT__lsu__DOT__io_axi_w_valid_0)));
    vlSelfRef.core__DOT__wbu__DOT__io_w2f_inst_done_REG 
        = ((~ (IData)(vlSelfRef.reset)) & ((IData)(vlSelfRef.core__DOT__queue_3__DOT__full) 
                                           & (IData)(
                                                     (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                      >> 0x26U))));
    if (vlSelfRef.reset) {
        __Vdly__core__DOT__queue__DOT__full = 0U;
        __Vdly__core__DOT__queue_1__DOT__full = 0U;
        vlSelfRef.core__DOT__queue_1__DOT__full = __Vdly__core__DOT__queue_1__DOT__full;
        __Vdly__core__DOT__queue_3__DOT__full = 0U;
        __Vdly__core__DOT__queue_2__DOT__full = 0U;
        vlSelfRef.core__DOT__queue_2__DOT__full = __Vdly__core__DOT__queue_2__DOT__full;
        __Vdly__core__DOT__if_sram__DOT__w_state = 0U;
        __Vdly__core__DOT__if_sram__DOT__b_valid_reg = 0U;
    } else {
        if (((IData)(vlSelfRef.core__DOT__queue__DOT__do_enq) 
             != ((~ (IData)(vlSelfRef.core__DOT__queue_1__DOT__full)) 
                 & (IData)(vlSelfRef.core__DOT__queue__DOT__full)))) {
            __Vdly__core__DOT__queue__DOT__full = vlSelfRef.core__DOT__queue__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.core__DOT__queue_1__DOT__do_enq) 
             != ((~ (IData)(vlSelfRef.core__DOT__queue_2__DOT__full)) 
                 & (IData)(vlSelfRef.core__DOT__queue_1__DOT__full)))) {
            __Vdly__core__DOT__queue_1__DOT__full = vlSelfRef.core__DOT__queue_1__DOT__do_enq;
        }
        vlSelfRef.core__DOT__queue_1__DOT__full = __Vdly__core__DOT__queue_1__DOT__full;
        if (((IData)(vlSelfRef.core__DOT__queue_3__DOT__do_enq) 
             != (IData)(vlSelfRef.core__DOT__queue_3__DOT__full))) {
            __Vdly__core__DOT__queue_3__DOT__full = vlSelfRef.core__DOT__queue_3__DOT__do_enq;
        }
        if (((IData)(vlSelfRef.core__DOT__queue_2__DOT__do_enq) 
             != ((IData)(vlSelfRef.core__DOT___lsu_io_in_ready) 
                 & (IData)(vlSelfRef.core__DOT__queue_2__DOT__full)))) {
            __Vdly__core__DOT__queue_2__DOT__full = vlSelfRef.core__DOT__queue_2__DOT__do_enq;
        }
        vlSelfRef.core__DOT__queue_2__DOT__full = __Vdly__core__DOT__queue_2__DOT__full;
        if (vlSelfRef.core__DOT__if_sram__DOT__w_state) {
            __Vdly__core__DOT__if_sram__DOT__w_state 
                = vlSelfRef.core__DOT__if_sram__DOT__w_state;
            __Vdly__core__DOT__if_sram__DOT__b_valid_reg 
                = ((IData)(vlSelfRef.core__DOT__if_sram__DOT___write_backend_done) 
                   | (IData)(vlSelfRef.core__DOT__if_sram__DOT__b_valid_reg));
        } else {
            __Vdly__core__DOT__if_sram__DOT__w_state 
                = vlSelfRef.core__DOT__if_sram__DOT__w_state;
        }
    }
    vlSelfRef.core__DOT__if_sram__DOT__w_state = __Vdly__core__DOT__if_sram__DOT__w_state;
    vlSelfRef.core__DOT__if_sram__DOT__b_valid_reg 
        = __Vdly__core__DOT__if_sram__DOT__b_valid_reg;
    if (vlSelfRef.core__DOT___exu_io_pcCtrl_pc_en) {
        __Vdly__core__DOT__ifu__DOT__inst_buf_bits_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__ifu__DOT___GEN_4)))) {
        __Vdly__core__DOT__ifu__DOT__inst_buf_bits_pc 
            = vlSelfRef.core__DOT__ifu__DOT__pc;
    }
    if (vlSelfRef.reset) {
        __Vdly__core__DOT__ifu__DOT__pc = 0x80000000U;
        vlSelfRef.core__DOT__ifu__DOT__pc = __Vdly__core__DOT__ifu__DOT__pc;
        __Vdly__core__DOT__ls_sram__DOT__w_state = 0U;
        __Vdly__core__DOT__ls_sram__DOT__b_valid_reg = 0U;
        vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg 
            = __Vdly__core__DOT__ls_sram__DOT__b_valid_reg;
        vlSelfRef.core__DOT__csr__DOT__mstatus = 0U;
        vlSelfRef.core__DOT__csr__DOT__mtvec = 0U;
        vlSelfRef.core__DOT__csr__DOT__mepc = 0U;
        __Vdly__core__DOT__ifu__DOT__inst_buf_valid = 0U;
        vlSelfRef.core__DOT__ifu__DOT__state = 0U;
        vlSelfRef.core__DOT__ifu__DOT__inst_buf_valid 
            = __Vdly__core__DOT__ifu__DOT__inst_buf_valid;
        vlSelfRef.core__DOT__queue__DOT__full = __Vdly__core__DOT__queue__DOT__full;
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
    } else {
        if (vlSelfRef.core__DOT___exu_io_pcCtrl_pc_en) {
            __Vdly__core__DOT__ifu__DOT__pc = ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_3)
                                                ? (
                                                   (0x800000U 
                                                    & vlSelfRef.core__DOT__queue_1__DOT__ram[4U])
                                                    ? vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp
                                                    : 
                                                   ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_0)
                                                     ? 
                                                    (vlSelfRef.core__DOT__queue_1__DOT__ram[0U] 
                                                     + 
                                                     ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                                       << 0xdU) 
                                                      | (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                         >> 0x13U)))
                                                     : 0U))
                                                : vlSelfRef.core__DOT___csr_io_r_data);
            vlSelfRef.core__DOT__ifu__DOT__state = 0U;
        } else {
            if ((1U & (~ (IData)(vlSelfRef.core__DOT__ifu__DOT___GEN_4)))) {
                __Vdly__core__DOT__ifu__DOT__pc = ((IData)(4U) 
                                                   + vlSelfRef.core__DOT__ifu__DOT__pc);
            }
            if (vlSelfRef.core__DOT__ifu__DOT___GEN) {
                if ((1U & (~ (IData)(vlSelfRef.core__DOT__ifu__DOT__inst_buf_valid)))) {
                    vlSelfRef.core__DOT__ifu__DOT__state = 1U;
                }
            } else if (vlSelfRef.core__DOT__ifu__DOT___GEN_0) {
                if (((~ (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_state)) 
                     & (IData)(vlSelfRef.core__DOT__ifu__DOT__io_axi_ar_valid_0))) {
                    vlSelfRef.core__DOT__ifu__DOT__state = 2U;
                }
            } else if (vlSelfRef.core__DOT__ifu__DOT___GEN_3) {
                vlSelfRef.core__DOT__ifu__DOT__state = 0U;
            }
        }
        vlSelfRef.core__DOT__ifu__DOT__pc = __Vdly__core__DOT__ifu__DOT__pc;
        if (vlSelfRef.core__DOT__ls_sram__DOT__w_state) {
            __Vdly__core__DOT__ls_sram__DOT__w_state 
                = ((~ ((IData)(vlSelfRef.core__DOT__ls_sram__DOT__w_state) 
                       & (IData)(vlSelfRef.core__DOT__ls_sram__DOT___GEN_0))) 
                   & (IData)(vlSelfRef.core__DOT__ls_sram__DOT__w_state));
            __Vdly__core__DOT__ls_sram__DOT__b_valid_reg 
                = ((~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT___GEN_0)) 
                   & ((IData)(vlSelfRef.core__DOT__ls_sram__DOT___write_backend_done) 
                      | (IData)(vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg)));
        } else {
            __Vdly__core__DOT__ls_sram__DOT__w_state 
                = ((IData)(vlSelfRef.core__DOT__ls_sram__DOT___write_backend_io_en_T) 
                   | (IData)(vlSelfRef.core__DOT__ls_sram__DOT__w_state));
        }
        vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg 
            = __Vdly__core__DOT__ls_sram__DOT__b_valid_reg;
        if (((IData)(vlSelfRef.core__DOT___exu_io_csr_w_en) 
             & (0x300U == (IData)(vlSelfRef.core__DOT___exu_io_csr_w_addr)))) {
            vlSelfRef.core__DOT__csr__DOT__mstatus 
                = vlSelfRef.core__DOT___exu_io_csr_w_data;
        }
        if ((1U & (~ (((~ (IData)(vlSelfRef.core__DOT___exu_io_csr_w_en)) 
                       | (0x300U == (IData)(vlSelfRef.core__DOT___exu_io_csr_w_addr))) 
                      | (0x305U != (IData)(vlSelfRef.core__DOT___exu_io_csr_w_addr)))))) {
            vlSelfRef.core__DOT__csr__DOT__mtvec = vlSelfRef.core__DOT___exu_io_csr_w_data;
        }
        if ((1U & (~ ((((~ (IData)(vlSelfRef.core__DOT___exu_io_csr_w_en)) 
                        | (0x300U == (IData)(vlSelfRef.core__DOT___exu_io_csr_w_addr))) 
                       | (0x305U == (IData)(vlSelfRef.core__DOT___exu_io_csr_w_addr))) 
                      | (0x341U != (IData)(vlSelfRef.core__DOT___exu_io_csr_w_addr)))))) {
            vlSelfRef.core__DOT__csr__DOT__mepc = vlSelfRef.core__DOT___exu_io_csr_w_data;
        }
        __Vdly__core__DOT__ifu__DOT__inst_buf_valid 
            = ((~ (IData)(vlSelfRef.core__DOT___exu_io_pcCtrl_pc_en)) 
               & (((~ (IData)(vlSelfRef.core__DOT__ifu__DOT___GEN_2)) 
                   & (IData)(vlSelfRef.core__DOT__ifu__DOT___GEN_3)) 
                  | ((~ ((~ (IData)(vlSelfRef.core__DOT__queue__DOT__full)) 
                         & (IData)(vlSelfRef.core__DOT__ifu__DOT__inst_buf_valid))) 
                     & (IData)(vlSelfRef.core__DOT__ifu__DOT__inst_buf_valid))));
        vlSelfRef.core__DOT__ifu__DOT__inst_buf_valid 
            = __Vdly__core__DOT__ifu__DOT__inst_buf_valid;
        vlSelfRef.core__DOT__queue__DOT__full = __Vdly__core__DOT__queue__DOT__full;
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x3eULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_31 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x3cULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_30 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x3aULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_29 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x38ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_28 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x16ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_11 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xeULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_7 = (IData)(
                                                         (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                          >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x14ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_10 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x12ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_9 = (IData)(
                                                         (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                          >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (6ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_3 = (IData)(
                                                         (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                          >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xcULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_6 = (IData)(
                                                         (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                          >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0xaULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_5 = (IData)(
                                                         (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                          >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (2ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_1 = (IData)(
                                                         (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                          >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (8ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_4 = (IData)(
                                                         (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                          >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (4ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_2 = (IData)(
                                                         (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                          >> 6U));
        }
        vlSelfRef.core__DOT__rf__DOT__rf_0 = (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                                         >> 1U)))))))
                                               ? (IData)(
                                                         (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                          >> 6U))
                                               : 0U);
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x10ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_8 = (IData)(
                                                         (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                          >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x18ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_12 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1aULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_13 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1cULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_14 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x1eULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_15 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x20ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_16 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x22ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_17 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x24ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_18 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x26ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_19 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x28ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_20 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x2aULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_21 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x2cULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_22 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x2eULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_23 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x30ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_24 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x32ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_25 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x34ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_26 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
        if (((IData)(vlSelfRef.core__DOT__rf__DOT___GEN) 
             & (0x36ULL == (0x3eULL & vlSelfRef.core__DOT__queue_3__DOT__ram)))) {
            vlSelfRef.core__DOT__rf__DOT__rf_27 = (IData)(
                                                          (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                           >> 6U));
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__if_sram__DOT___write_backend_done = 0U;
    } else {
        vlSelfRef.core__DOT__if_sram__DOT___write_backend_done 
            = vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_en_REG;
        if (vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_en_REG) {
            Vcore___024root____Vdpiimwrap_core__DOT__if_sram__DOT__write_backend__DOT__memory_write_TOP(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_aw_addr_REG, vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_w_data_REG, (IData)(vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_w_strb_REG));
            vlSelfRef.core__DOT__if_sram__DOT___write_backend_done = 1U;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__ls_sram__DOT___write_backend_done = 0U;
    } else {
        vlSelfRef.core__DOT__ls_sram__DOT___write_backend_done 
            = vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_en_REG;
        if (vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_en_REG) {
            Vcore___024root____Vdpiimwrap_core__DOT__if_sram__DOT__write_backend__DOT__memory_write_TOP(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_aw_addr_REG, vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_data_REG, (IData)(vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG));
            vlSelfRef.core__DOT__ls_sram__DOT___write_backend_done = 1U;
        }
    }
    vlSelfRef.core__DOT__ifu__DOT___GEN = (0U == (IData)(vlSelfRef.core__DOT__ifu__DOT__state));
    vlSelfRef.core__DOT__ifu__DOT___GEN_0 = (1U == (IData)(vlSelfRef.core__DOT__ifu__DOT__state));
    vlSelfRef.core__DOT__ifu__DOT__io_axi_ar_valid_0 
        = ((0U != (IData)(vlSelfRef.core__DOT__ifu__DOT__state)) 
           & (1U == (IData)(vlSelfRef.core__DOT__ifu__DOT__state)));
    vlSelfRef.core__DOT__ifu__DOT___GEN_2 = ((0U == (IData)(vlSelfRef.core__DOT__ifu__DOT__state)) 
                                             | (1U 
                                                == (IData)(vlSelfRef.core__DOT__ifu__DOT__state)));
    vlSelfRef.io_inst_done = ((IData)(vlSelfRef.core__DOT__LS_reg) 
                              | (IData)(vlSelfRef.core__DOT__wbu__DOT__io_w2f_inst_done_REG));
    if (vlSelfRef.core__DOT__queue_3__DOT__do_enq) {
        vlSelfRef.core__DOT__queue_3__DOT__ram = (((QData)((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough)) 
                                                   << 0x26U) 
                                                  | (((QData)((IData)(
                                                                      ((0U 
                                                                        == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                                        ? 
                                                                       ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough)
                                                                         ? 
                                                                        ((vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                                                          << 0x1aU) 
                                                                         | (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                                                                            >> 6U))
                                                                         : 0U)
                                                                        : 
                                                                       ((1U 
                                                                         == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                                         ? 0U
                                                                         : 
                                                                        ((2U 
                                                                          == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                                          ? 
                                                                         ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2)
                                                                           ? 
                                                                          ((0U 
                                                                            == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                                            ? 
                                                                           (((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                                                                >> 0xcU))))) 
                                                                             << 8U) 
                                                                            | (0xffU 
                                                                               & (vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data 
                                                                                >> 
                                                                                (0x18U 
                                                                                & (vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr 
                                                                                << 3U)))))
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                                                                             ? 
                                                                            (((- (IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                                                                >> 0xcU))))) 
                                                                              << 0x10U) 
                                                                             | (0xffffU 
                                                                                & ((2U 
                                                                                & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)
                                                                                 ? 
                                                                                (vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data 
                                                                                >> 0x10U)
                                                                                 : vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data)))
                                                                             : vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data))
                                                                           : 0U)
                                                                          : 
                                                                         ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_12)
                                                                           ? 0U
                                                                           : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_data)))))) 
                                                      << 6U) 
                                                     | (QData)((IData)(
                                                                       ((0x3eU 
                                                                         & (((0U 
                                                                              == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                                              ? 
                                                                             ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough)
                                                                               ? 
                                                                              ((vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                                                                                << 0x1fU) 
                                                                               | (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                                                                                >> 1U))
                                                                               : 0U)
                                                                              : 
                                                                             ((1U 
                                                                               == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                                               ? 0U
                                                                               : 
                                                                              ((2U 
                                                                                == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                                                ? 
                                                                               ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2)
                                                                                 ? (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr)
                                                                                 : 0U)
                                                                                : 
                                                                               ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_12)
                                                                                 ? 0U
                                                                                 : (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr))))) 
                                                                            << 1U)) 
                                                                        | ((0U 
                                                                            == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                                            ? 
                                                                           ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough) 
                                                                            & vlSelfRef.core__DOT__queue_2__DOT__ram[0U])
                                                                            : 
                                                                           ((1U 
                                                                             != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                                                            & ((2U 
                                                                                == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                                                ? 
                                                                               ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2) 
                                                                                & (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en))
                                                                                : 
                                                                               ((3U 
                                                                                != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                                                                & ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_11) 
                                                                                & (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en)))))))))));
    }
    vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_en_REG = 0U;
    vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_aw_addr_REG = 0U;
    vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_w_data_REG = 0U;
    vlSelfRef.core__DOT__if_sram__DOT__write_backend_io_w_strb_REG = 0U;
    vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_en_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.core__DOT__ls_sram__DOT___write_backend_io_en_T));
    if (vlSelfRef.core__DOT__lsu__DOT___GEN_7) {
        vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_aw_addr_REG = 0U;
        vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG = 0U;
        vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_data_REG = 0U;
    } else {
        vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_aw_addr_REG 
            = vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr;
        if ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))) {
            vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG 
                = (0xfU & ((IData)(1U) << (3U & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)));
            vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_data_REG 
                = ((0xffU & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata) 
                   << (0x18U & (vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr 
                                << 3U)));
        } else if ((1U == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))) {
            if ((2U & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr)) {
                vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG 
                    = (0xfU & 0xcU);
                vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_data_REG 
                    = VL_SHIFTL_III(32,32,32, vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata, 0x10U);
            } else {
                vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG 
                    = (0xfU & 3U);
                vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_data_REG 
                    = (0xffffU & vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata);
            }
        } else {
            vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG 
                = (0xfU & (- (IData)((2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen)))));
            vlSelfRef.core__DOT__ls_sram__DOT__write_backend_io_w_data_REG 
                = ((2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen))
                    ? vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata
                    : 0U);
        }
    }
    if (((IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_state) 
         & (IData)(vlSelfRef.core__DOT__ls_sram__DOT___read_backend_done))) {
        vlSelfRef.core__DOT__ls_sram__DOT__r_bits_reg_data 
            = vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_reg;
    }
    if ((1U & (~ (((0U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                   | (IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough)) 
                  | (~ (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_13)))))) {
        vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_data 
            = ((vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                << 0x1aU) | (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                             >> 6U));
        vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_addr 
            = (0x1fU & (vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
                        >> 1U));
        vlSelfRef.core__DOT__lsu__DOT__e2l_reg_rd_en 
            = (1U & vlSelfRef.core__DOT__queue_2__DOT__ram[0U]);
        vlSelfRef.core__DOT__lsu__DOT__e2l_reg_wdata 
            = ((vlSelfRef.core__DOT__queue_2__DOT__ram[2U] 
                << 0x13U) | (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                             >> 0xdU));
        vlSelfRef.core__DOT__lsu__DOT__e2l_reg_mlen 
            = (7U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                     >> 9U));
        vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr 
            = ((vlSelfRef.core__DOT__queue_2__DOT__ram[3U] 
                << 0x13U) | (vlSelfRef.core__DOT__queue_2__DOT__ram[2U] 
                             >> 0xdU));
    }
    if (vlSelfRef.reset) {
        __Vdly__core__DOT__ls_sram__DOT__r_state = 0U;
        __Vdly__core__DOT__ls_sram__DOT__r_valid_reg = 0U;
    } else if (vlSelfRef.core__DOT__ls_sram__DOT__r_state) {
        __Vdly__core__DOT__ls_sram__DOT__r_state = 
            ((~ ((IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_state) 
                 & (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2))) 
             & (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_state));
        __Vdly__core__DOT__ls_sram__DOT__r_valid_reg 
            = ((~ (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2)) 
               & ((IData)(vlSelfRef.core__DOT__ls_sram__DOT___read_backend_done) 
                  | (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_valid_reg)));
    } else {
        __Vdly__core__DOT__ls_sram__DOT__r_state = 
            ((IData)(vlSelfRef.core__DOT__ls_sram__DOT___read_backend_io_en_T) 
             | (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_state));
    }
    vlSelfRef.core__DOT__ls_sram__DOT__r_valid_reg 
        = __Vdly__core__DOT__ls_sram__DOT__r_valid_reg;
    vlSelfRef.core__DOT__ls_sram__DOT___read_backend_done 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.core__DOT__ls_sram__DOT___read_backend_io_en_T));
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_reg = 0U;
        vlSelfRef.core__DOT__lsu__DOT__state = 0U;
    } else {
        vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_reg 
            = vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_comb;
        if (vlSelfRef.core__DOT__lsu__DOT___GEN) {
            if ((1U & (~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough) 
                          | (~ ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_13) 
                                & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                   >> 6U))))))) {
                if ((1U == (3U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                  >> 7U)))) {
                    vlSelfRef.core__DOT__lsu__DOT__state = 1U;
                } else if ((2U == (3U & (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
                                         >> 7U)))) {
                    vlSelfRef.core__DOT__lsu__DOT__state = 3U;
                }
            }
        } else if (vlSelfRef.core__DOT__lsu__DOT___GEN_0) {
            if (((~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_state)) 
                 & (IData)(vlSelfRef.core__DOT__lsu__DOT__io_axi_ar_valid_0))) {
                vlSelfRef.core__DOT__lsu__DOT__state = 2U;
            }
        } else if (vlSelfRef.core__DOT__lsu__DOT___GEN_1) {
            if (((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2) 
                 & (~ (IData)(vlSelfRef.core__DOT__queue_3__DOT__full)))) {
                vlSelfRef.core__DOT__lsu__DOT__state = 0U;
            }
        } else if (vlSelfRef.core__DOT__lsu__DOT___GEN_5) {
            if (((~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__w_state)) 
                 & (IData)(vlSelfRef.core__DOT__lsu__DOT__io_axi_w_valid_0))) {
                vlSelfRef.core__DOT__lsu__DOT__state = 4U;
            }
        } else if ((((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_9) 
                     & (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_10)) 
                    & (~ (IData)(vlSelfRef.core__DOT__queue_3__DOT__full)))) {
            vlSelfRef.core__DOT__lsu__DOT__state = 0U;
        }
    }
    vlSelfRef.core__DOT__ls_sram__DOT__w_state = __Vdly__core__DOT__ls_sram__DOT__w_state;
    vlSelfRef.core__DOT__ls_sram__DOT__r_state = __Vdly__core__DOT__ls_sram__DOT__r_state;
    vlSelfRef.core__DOT__queue_3__DOT__full = __Vdly__core__DOT__queue_3__DOT__full;
    vlSelfRef.core__DOT__rf__DOT___GEN = ((IData)(vlSelfRef.core__DOT__queue_3__DOT__full) 
                                          & (0U != 
                                             (0x1fU 
                                              & (IData)(
                                                        (vlSelfRef.core__DOT__queue_3__DOT__ram 
                                                         >> 1U)))));
    vlSelfRef.core__DOT__lsu__DOT___GEN = (0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state));
    vlSelfRef.core__DOT__lsu__DOT___GEN_0 = (1U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state));
    vlSelfRef.core__DOT__lsu__DOT___GEN_1 = (2U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state));
    vlSelfRef.core__DOT__lsu__DOT___GEN_5 = (3U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state));
    vlSelfRef.core__DOT__lsu__DOT___GEN_9 = (4U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state));
    vlSelfRef.core__DOT__lsu__DOT__io_axi_ar_valid_0 
        = ((0U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
           & (1U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)));
    vlSelfRef.core__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_0 
        = ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
           | (1U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)));
    if (vlSelfRef.core__DOT__queue_2__DOT__do_enq) {
        vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
            = ((0xffffffc0U & vlSelfRef.core__DOT__queue_2__DOT__ram[0U]) 
               | (0x3fU & (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                           >> 0xdU)));
        vlSelfRef.core__DOT__queue_2__DOT__ram[0U] 
            = ((0x3fU & vlSelfRef.core__DOT__queue_2__DOT__ram[0U]) 
               | (((0x800000U & vlSelfRef.core__DOT__queue_1__DOT__ram[4U])
                    ? ((IData)(4U) + ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                       << 0xdU) | (
                                                   vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                   >> 0x13U)))
                    : vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp) 
                  << 6U));
        vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
            = ((0xffffffc0U & vlSelfRef.core__DOT__queue_2__DOT__ram[1U]) 
               | (((0x800000U & vlSelfRef.core__DOT__queue_1__DOT__ram[4U])
                    ? ((IData)(4U) + ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                       << 0xdU) | (
                                                   vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                   >> 0x13U)))
                    : vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp) 
                  >> 0x1aU));
        vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
            = ((0xffffe03fU & vlSelfRef.core__DOT__queue_2__DOT__ram[1U]) 
               | (0xffffffc0U & ((0x1000U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                             << 1U)) 
                                 | ((0xe00U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                               << 4U)) 
                                    | (0x1c0U & (vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                                 >> 2U))))));
        vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
            = ((0x1fffU & vlSelfRef.core__DOT__queue_2__DOT__ram[1U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp)) 
                            << 0x20U) | (QData)((IData)(
                                                        ((vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                          << 0x13U) 
                                                         | (vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                                            >> 0xdU)))))) 
                  << 0xdU));
        vlSelfRef.core__DOT__queue_2__DOT__ram[2U] 
            = (((IData)((((QData)((IData)(vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp)) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                        << 0x13U) 
                                                       | (vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                                          >> 0xdU)))))) 
                >> 0x13U) | ((IData)(((((QData)((IData)(vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                                      << 0x13U) 
                                                                     | (vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                                                        >> 0xdU))))) 
                                      >> 0x20U)) << 0xdU));
        vlSelfRef.core__DOT__queue_2__DOT__ram[3U] 
            = ((IData)(((((QData)((IData)(vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp)) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                        << 0x13U) 
                                                       | (vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                                          >> 0xdU))))) 
                        >> 0x20U)) >> 0x13U);
    }
    vlSelfRef.core__DOT__ls_sram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_state)) 
           & (IData)(vlSelfRef.core__DOT__lsu__DOT__io_axi_ar_valid_0));
    vlSelfRef.core__DOT__lsu__DOT___GEN_2 = (((~ (IData)(vlSelfRef.core__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_0)) 
                                              & (2U 
                                                 == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))) 
                                             & (IData)(vlSelfRef.core__DOT__ls_sram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__lsu__DOT___GEN_6 = ((IData)(vlSelfRef.core__DOT__lsu__DOT____VdfgRegularize_hbcd0008a_0_0) 
                                             | (2U 
                                                == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)));
    vlSelfRef.core__DOT__queue_2__DOT__do_enq = ((~ (IData)(vlSelfRef.core__DOT__queue_2__DOT__full)) 
                                                 & (IData)(vlSelfRef.core__DOT__queue_1__DOT__full));
    if (vlSelfRef.core__DOT__ls_sram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__if_sram__DOT__read_backend__DOT__memory_read_TOP(
                                                                                (((1U 
                                                                                != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                                                                | (0U 
                                                                                == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.core__DOT__lsu__DOT__e2l_reg_maddr), vlSelfRef.__Vtask_core__DOT__ls_sram__DOT__read_backend__DOT__memory_read__3__r_data);
        vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__ls_sram__DOT__read_backend__DOT__memory_read__3__r_data;
    } else {
        vlSelfRef.core__DOT__ls_sram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT__lsu__DOT___GEN_7 = ((3U != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                             | (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_6));
    vlSelfRef.core__DOT__lsu__DOT__io_axi_w_valid_0 
        = ((~ (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_6)) 
           & (3U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)));
    vlSelfRef.core__DOT___lsu_io_axi_b_ready = ((~ 
                                                 ((IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_6) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)))) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)));
    vlSelfRef.core__DOT__lsu__DOT__isPassthrough = 
        ((~ (vlSelfRef.core__DOT__queue_2__DOT__ram[1U] 
             >> 6U)) & (IData)(vlSelfRef.core__DOT__queue_2__DOT__full));
    if (vlSelfRef.core__DOT__queue_1__DOT__do_enq) {
        vlSelfRef.core__DOT__queue_1__DOT__ram[0U] 
            = vlSelfRef.core__DOT___idu_io_out_bits_imm;
        vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
            = ((0xffffe000U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U]) 
               | (((((IData)(vlSelfRef.core__DOT___idu_io_out_bits_opcode) 
                     << 1U) | (0U != (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36))) 
                   << 7U) | (((((IData)((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47))) 
                                << 1U) | (0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))) 
                              << 4U) | (((IData)((0xffU 
                                                  == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39))) 
                                         << 3U) | (IData)(vlSelfRef.core__DOT___idu_io_out_bits_alusel)))));
        vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
            = ((0x1fffU & vlSelfRef.core__DOT__queue_1__DOT__ram[1U]) 
               | (((0U != (0x1fU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                            >> 0xfU))))
                    ? vlSelfRef.core__DOT__rf__DOT__casez_tmp
                    : 0U) << 0xdU));
        vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
            = ((0xffffe000U & vlSelfRef.core__DOT__queue_1__DOT__ram[2U]) 
               | (((0U != (0x1fU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                            >> 0xfU))))
                    ? vlSelfRef.core__DOT__rf__DOT__casez_tmp
                    : 0U) >> 0x13U));
        vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
            = ((0x1fffU & vlSelfRef.core__DOT__queue_1__DOT__ram[2U]) 
               | (((0U != (0x1fU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                            >> 0x14U))))
                    ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                    : 0U) << 0xdU));
        vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
            = ((0xffffe000U & vlSelfRef.core__DOT__queue_1__DOT__ram[3U]) 
               | (((0U != (0x1fU & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                            >> 0x14U))))
                    ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                    : 0U) >> 0x13U));
        vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
            = ((0x1fffU & vlSelfRef.core__DOT__queue_1__DOT__ram[3U]) 
               | ((IData)((((QData)((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                             >> 0x20U))) 
                            << 6U) | (QData)((IData)(
                                                     ((0x3eU 
                                                       & ((IData)(
                                                                  (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                   >> 7U)) 
                                                          << 1U)) 
                                                      | (IData)(vlSelfRef.core__DOT___idu_io_out_bits_rd_en)))))) 
                  << 0xdU));
        vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
            = ((0xfff80000U & vlSelfRef.core__DOT__queue_1__DOT__ram[4U]) 
               | (((IData)((((QData)((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                              >> 0x20U))) 
                             << 6U) | (QData)((IData)(
                                                      ((0x3eU 
                                                        & ((IData)(
                                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                    >> 7U)) 
                                                           << 1U)) 
                                                       | (IData)(vlSelfRef.core__DOT___idu_io_out_bits_rd_en)))))) 
                   >> 0x13U) | ((IData)(((((QData)((IData)(
                                                           (vlSelfRef.core__DOT__queue__DOT__ram 
                                                            >> 0x20U))) 
                                           << 6U) | (QData)((IData)(
                                                                    ((0x3eU 
                                                                      & ((IData)(
                                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                                >> 7U)) 
                                                                         << 1U)) 
                                                                     | (IData)(vlSelfRef.core__DOT___idu_io_out_bits_rd_en))))) 
                                         >> 0x20U)) 
                                << 0xdU)));
        vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
            = ((0xfe07ffffU & vlSelfRef.core__DOT__queue_1__DOT__ram[4U]) 
               | (0xfff80000U & ((((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_22)) 
                                   | (0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58))) 
                                  << 0x18U) | ((((0x3ffU 
                                                  == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                 | (0x7fU 
                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26))) 
                                                << 0x17U) 
                                               | ((IData)(vlSelfRef.core__DOT___idu_io_out_bits_system) 
                                                  << 0x13U)))));
        vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
            = ((0x1ffffffU & vlSelfRef.core__DOT__queue_1__DOT__ram[4U]) 
               | ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                           >> 0x14U)) << 0x19U));
        vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
            = ((0xfe0U & vlSelfRef.core__DOT__queue_1__DOT__ram[5U]) 
               | (0x1fU & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 0x14U)) >> 7U)));
        vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
            = ((0x1fU & vlSelfRef.core__DOT__queue_1__DOT__ram[5U]) 
               | (0xfe0U & ((((IData)(((3ULL == (0x7fULL 
                                                 & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                       & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80))) 
                              << 0xbU) | ((IData)((
                                                   (0x23ULL 
                                                    == 
                                                    (0x3fULL 
                                                     & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                   & ((IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_87) 
                                                      | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94)))) 
                                          << 0xaU)) 
                            | ((((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                 | (IData)(((3ULL == 
                                             (0x1fULL 
                                              & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                            & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_88)))) 
                                << 9U) | ((((0xffU 
                                             == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                            | ((0xffU 
                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                               | (IData)(
                                                         ((3ULL 
                                                           == 
                                                           (0x1fULL 
                                                            & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                          & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94))))) 
                                           << 8U) | 
                                          (((IData)(
                                                    ((3ULL 
                                                      == 
                                                      (0x1fULL 
                                                       & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                     & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_79))) 
                                            << 6U) 
                                           | (0x20U 
                                              & ((IData)(
                                                         ((3ULL 
                                                           == 
                                                           (0x1fULL 
                                                            & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                          & ((IData)(
                                                                     (0x1000ULL 
                                                                      == 
                                                                      (0x3060ULL 
                                                                       & vlSelfRef.core__DOT__queue__DOT__ram))) 
                                                             | ((~ (IData)(
                                                                           (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                            >> 6U))) 
                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_90))))) 
                                                 << 5U))))))));
    }
    vlSelfRef.core__DOT__ls_sram__DOT___write_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__ls_sram__DOT__w_state)) 
           & (IData)(vlSelfRef.core__DOT__lsu__DOT__io_axi_w_valid_0));
    vlSelfRef.core__DOT__ls_sram__DOT___GEN_0 = ((IData)(vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg) 
                                                 & (IData)(vlSelfRef.core__DOT___lsu_io_axi_b_ready));
    vlSelfRef.core__DOT__lsu__DOT___GEN_10 = ((IData)(vlSelfRef.core__DOT___lsu_io_axi_b_ready) 
                                              & (IData)(vlSelfRef.core__DOT__ls_sram__DOT__b_valid_reg));
    vlSelfRef.core__DOT___lsu_io_in_ready = ((0U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                             & ((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough)) 
                                                | (~ (IData)(vlSelfRef.core__DOT__queue_3__DOT__full))));
    vlSelfRef.core__DOT__queue_1__DOT__do_enq = ((~ (IData)(vlSelfRef.core__DOT__queue_1__DOT__full)) 
                                                 & (IData)(vlSelfRef.core__DOT__queue__DOT__full));
    vlSelfRef.core__DOT__lsu__DOT___GEN_11 = ((4U == (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                              & (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_10));
    vlSelfRef.core__DOT__lsu__DOT___GEN_13 = ((IData)(vlSelfRef.core__DOT___lsu_io_in_ready) 
                                              & (IData)(vlSelfRef.core__DOT__queue_2__DOT__full));
    vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source 
        = ((IData)((0x88U == (0x88U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])))
            ? ((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                ? vlSelfRef.core__DOT__queue_1__DOT__ram[0U]
                : 0U) : ((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                          ? ((vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                              << 0x13U) | (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                           >> 0xdU))
                          : 0U));
    vlSelfRef.core__DOT__exu__DOT___GEN_3 = (IData)(
                                                    ((0x100000U 
                                                      != 
                                                      (0x780000U 
                                                       & vlSelfRef.core__DOT__queue_1__DOT__ram[4U])) 
                                                     | (1U 
                                                        == 
                                                        (0xfU 
                                                         & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                                            >> 0x13U)))));
    vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2 
        = (((5U == (7U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])) 
            | ((3U == (7U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])) 
               | (1U == (7U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U]))))
            ? vlSelfRef.core__DOT__queue_1__DOT__ram[0U]
            : ((0U == (7U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U]))
                ? ((vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                    << 0x13U) | (vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                 >> 0xdU)) : 0U));
    vlSelfRef.__VdfgRegularize_hd87f99a1_5_0 = ((3U 
                                                 == 
                                                 (7U 
                                                  & vlSelfRef.core__DOT__queue_1__DOT__ram[1U]))
                                                 ? 
                                                ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                                  << 0xdU) 
                                                 | (vlSelfRef.core__DOT__queue_1__DOT__ram[3U] 
                                                    >> 0x13U))
                                                 : 
                                                (((1U 
                                                   == 
                                                   (7U 
                                                    & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])))
                                                  ? 
                                                 ((vlSelfRef.core__DOT__queue_1__DOT__ram[2U] 
                                                   << 0x13U) 
                                                  | (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                                     >> 0xdU))
                                                  : 0U));
    if (vlSelfRef.core__DOT__queue__DOT__do_enq) {
        vlSelfRef.core__DOT__queue__DOT__ram = (((QData)((IData)(vlSelfRef.core__DOT__ifu__DOT__inst_buf_bits_pc)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.core__DOT__ifu__DOT__inst_buf_bits_inst)));
    }
    if (vlSelfRef.core__DOT___exu_io_pcCtrl_pc_en) {
        vlSelfRef.core__DOT__ifu__DOT__inst_buf_bits_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__ifu__DOT___GEN_4)))) {
        vlSelfRef.core__DOT__ifu__DOT__inst_buf_bits_inst 
            = vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data;
    }
    vlSelfRef.core__DOT__lsu__DOT___GEN_12 = (1U & 
                                              ((~ (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_11)) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))));
    vlSelfRef.core__DOT__queue_3__DOT__do_enq = ((~ (IData)(vlSelfRef.core__DOT__queue_3__DOT__full)) 
                                                 & ((0U 
                                                     == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelfRef.core__DOT__lsu__DOT__isPassthrough) 
                                                     & (IData)(vlSelfRef.core__DOT__queue_2__DOT__full))
                                                     : 
                                                    ((1U 
                                                      != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                                     & ((2U 
                                                         == (IData)(vlSelfRef.core__DOT__lsu__DOT__state))
                                                         ? (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_2)
                                                         : 
                                                        ((3U 
                                                          != (IData)(vlSelfRef.core__DOT__lsu__DOT__state)) 
                                                         & (IData)(vlSelfRef.core__DOT__lsu__DOT___GEN_11))))));
    if ((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])) {
        vlSelfRef.core__DOT___exu_io_csr_w_addr = (0xfffU 
                                                   & ((vlSelfRef.core__DOT__queue_1__DOT__ram[5U] 
                                                       << 7U) 
                                                      | (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                                         >> 0x19U)));
        vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0 
            = (7U & (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                     >> 4U));
    } else {
        vlSelfRef.core__DOT___exu_io_csr_w_addr = 0U;
        vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0 = 0U;
    }
    vlSelfRef.core__DOT___exu_io_csr_w_en = ((vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                              >> 3U) 
                                             & ((~ 
                                                 (((2U 
                                                    == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0)) 
                                                   | (3U 
                                                      == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))) 
                                                  & (0U 
                                                     == vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source))) 
                                                & (0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelfRef.core__DOT__queue_1__DOT__ram[1U] 
                                                       >> 4U)))));
    vlSelfRef.core__DOT___csr_io_r_data = ((IData)(
                                                   ((0x100000U 
                                                     == 
                                                     (0x780000U 
                                                      & vlSelfRef.core__DOT__queue_1__DOT__ram[4U])) 
                                                    & (1U 
                                                       != 
                                                       (0xfU 
                                                        & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                                           >> 0x13U)))))
                                            ? ((0x300U 
                                                == 
                                                ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_3)
                                                  ? 0U
                                                  : 0x341U))
                                                ? vlSelfRef.core__DOT__csr__DOT__mstatus
                                                : (
                                                   (0x305U 
                                                    == 
                                                    ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_3)
                                                      ? 0U
                                                      : 0x341U))
                                                    ? vlSelfRef.core__DOT__csr__DOT__mtvec
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     ((IData)(vlSelfRef.core__DOT__exu__DOT___GEN_3)
                                                       ? 0U
                                                       : 0x341U))
                                                     ? vlSelfRef.core__DOT__csr__DOT__mepc
                                                     : 0U)))
                                            : 0U);
    if ((8U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])) {
        vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value 
            = vlSelfRef.core__DOT___csr_io_r_data;
        vlSelfRef.core__DOT___exu_io_csr_w_data = (
                                                   (1U 
                                                    == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                                    ? vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                                     ? 
                                                    (vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value 
                                                     | vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                                      ? 
                                                     ((~ vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT__write_source) 
                                                      & vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value)
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelfRef.core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0))
                                                       ? vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value
                                                       : 0U))));
    } else {
        vlSelfRef.core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value = 0U;
        vlSelfRef.core__DOT___exu_io_csr_w_data = 0U;
    }
    vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
        = ((5U == (7U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U]))
            ? 0U : vlSelfRef.__VdfgRegularize_hd87f99a1_5_0);
    vlSelfRef.core__DOT__queue__DOT__do_enq = ((~ (IData)(vlSelfRef.core__DOT__queue__DOT__full)) 
                                               & (IData)(vlSelfRef.core__DOT__ifu__DOT__inst_buf_valid));
    vlSelfRef.core__DOT__ifu__DOT__inst_buf_bits_pc 
        = __Vdly__core__DOT__ifu__DOT__inst_buf_bits_pc;
    vlSelfRef.core__DOT__exu__DOT__alu__DOT___mulu_res_T 
        = ((QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1)) 
           * (QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)));
    vlSelfRef.io_debugPC = vlSelfRef.core__DOT__ifu__DOT__inst_buf_bits_pc;
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_22 
        = ((((0x80U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 7U)) | (0x40U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 6U))) 
            | ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 2U))) << 5U)) 
               | (0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 3U))) << 4U)))) 
           | (((8U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 4U))) << 3U)) 
               | (4U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 5U)) << 2U))) | 
              ((2U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 6U)) << 1U)) | (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0xdU)))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58 
        = ((((0x80U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 7U)) | (0x40U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 6U))) 
            | ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 2U))) << 5U)) 
               | (0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 3U))) << 4U)))) 
           | (((8U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 4U))) << 3U)) 
               | (4U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 5U)) << 2U))) | 
              ((2U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 6U)) << 1U)) | (1U 
                                                  & (IData)(
                                                            (vlSelfRef.core__DOT__queue__DOT__ram 
                                                             >> 0xeU))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_75 
        = (IData)((0x4000ULL == (0x5000ULL & vlSelfRef.core__DOT__queue__DOT__ram)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80 
        = (IData)((0x4000ULL == (0x6000ULL & vlSelfRef.core__DOT__queue__DOT__ram)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_4 
        = ((((0x80U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 7U)) | (0x40U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 6U))) 
            | ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 2U))) << 5U)) 
               | (0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 3U))) << 4U)))) 
           | (((8U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 4U))) << 3U)) 
               | (4U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 6U))) << 2U))) 
              | ((2U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 0xcU))) << 1U)) 
                 | (1U & (~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 0xeU)))))));
    vlSelfRef.core__DOT__rf__DOT__casez_tmp = ((1U 
                                                & (IData)(
                                                          (vlSelfRef.core__DOT__queue__DOT__ram 
                                                           >> 0x13U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 0x12U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x11U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x10U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_31
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_30)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_29
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_28))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x10U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_27
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_26)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_25
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_24)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x11U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x10U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_23
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_22)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_21
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_20))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x10U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_19
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_18)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_17
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_16))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 0x12U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x11U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x10U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_15
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_14)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_13
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_12))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x10U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_11
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_10)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_9
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_8)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x11U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x10U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_7
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_6)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_5
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_4))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x10U)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_3
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_2)
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0xfU)))
                                                       ? vlSelfRef.core__DOT__rf__DOT__rf_1
                                                       : vlSelfRef.core__DOT__rf__DOT__rf_0)))));
    vlSelfRef.core__DOT__rf__DOT__casez_tmp_0 = ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.core__DOT__queue__DOT__ram 
                                                             >> 0x18U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__queue__DOT__ram 
                                                              >> 0x17U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 0x16U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_31
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_30)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_29
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_28))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_27
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_26)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_25
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_24)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 0x16U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_23
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_22)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_21
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_20))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_19
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_18)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_17
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_16))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__queue__DOT__ram 
                                                              >> 0x17U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 0x16U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_15
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_14)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_13
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_12))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_11
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_10)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_9
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_8)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 0x16U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_7
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_6)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_5
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_4))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 0x15U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_3
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_2)
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 0x14U)))
                                                      ? vlSelfRef.core__DOT__rf__DOT__rf_1
                                                      : vlSelfRef.core__DOT__rf__DOT__rf_0)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_87 
        = (IData)((0ULL == (0x5040ULL & vlSelfRef.core__DOT__queue__DOT__ram)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_91 
        = (IData)((0ULL == (0xbe000000ULL & vlSelfRef.core__DOT__queue__DOT__ram)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_43 
        = (IData)((0x6060ULL == (0x6060ULL & vlSelfRef.core__DOT__queue__DOT__ram)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_42 
        = (IData)((0x5060ULL == (0x5060ULL & vlSelfRef.core__DOT__queue__DOT__ram)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_69 
        = (IData)((0x2000ULL == (0x6000ULL & vlSelfRef.core__DOT__queue__DOT__ram)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_84 
        = (IData)((0x40000000ULL == (0xfc000000ULL 
                                     & vlSelfRef.core__DOT__queue__DOT__ram)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T 
        = ((((0x40U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 6U)) | (0x20U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 5U))) 
            | ((0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 2U))) << 4U)) 
               | (8U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 3U))) << 3U)))) 
           | ((4U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 5U))) << 2U)) | 
              ((2U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 6U))) << 1U)) 
               | (1U & (~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                   >> 0xcU)))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_3 
        = ((((0x80U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 7U)) | (0x40U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 6U))) 
            | ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 2U))) << 5U)) 
               | (0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 3U))) << 4U)))) 
           | (((8U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 4U))) << 3U)) 
               | (4U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 5U))) << 2U))) 
              | ((2U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 6U))) << 1U)) 
                 | (1U & (~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 0xeU)))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_41 
        = ((((0x80U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 7U)) | (0x40U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 6U))) 
            | ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 2U))) << 5U)) 
               | (0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 3U))) << 4U)))) 
           | (((8U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 4U)) << 3U)) | (4U 
                                                  & ((~ (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 5U))) 
                                                     << 2U))) 
              | ((2U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 6U))) << 1U)) 
                 | (1U & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 0xdU))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39 
        = ((((0x80U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 7U)) | (0x40U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 6U))) 
            | ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 2U))) << 5U)) 
               | (0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 3U))) << 4U)))) 
           | (((8U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 4U)) << 3U)) | (4U 
                                                  & ((IData)(
                                                             (vlSelfRef.core__DOT__queue__DOT__ram 
                                                              >> 5U)) 
                                                     << 2U))) 
              | ((2U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 6U)) << 1U)) | 
                 (1U & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                >> 0xcU))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47 
        = ((((0x80U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 7U)) | (0x40U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 6U))) 
            | ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 2U))) << 5U)) 
               | (0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 3U))) << 4U)))) 
           | (((8U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 4U)) << 3U)) | (4U 
                                                  & ((IData)(
                                                             (vlSelfRef.core__DOT__queue__DOT__ram 
                                                              >> 5U)) 
                                                     << 2U))) 
              | ((2U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 6U)) << 1U)) | 
                 (1U & (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                >> 0xdU))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52 
        = (IData)((0ULL == (0x6000ULL & vlSelfRef.core__DOT__queue__DOT__ram)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1 
        = ((((0x80U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 7U)) | (0x40U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 6U))) 
            | ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 2U))) << 5U)) 
               | (0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 3U))) << 4U)))) 
           | (((8U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 4U))) << 3U)) 
               | (4U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 5U))) << 2U))) 
              | ((2U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 6U))) << 1U)) 
                 | (1U & (~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 0xdU)))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10 
        = (((0x20U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                      << 5U)) | ((0x10U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 4U)) 
                                 | (8U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                                   >> 2U)) 
                                          << 3U)))) 
           | ((4U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 3U))) << 2U)) | 
              ((2U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 4U)) << 1U)) | (1U 
                                                  & (~ (IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 6U)))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26 
        = ((((0x40U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 6U)) | (0x20U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 5U))) 
            | ((0x10U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 2U)) << 4U)) | 
               (8U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 3U)) << 3U)))) | 
           ((4U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 4U))) << 2U)) | (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                >> 5U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                 >> 6U))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_95 
        = ((4U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                              >> 0xcU))) << 2U)) | 
           ((2U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 0xdU))) << 1U)) | 
            (1U & (~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                              >> 0xeU))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70 
        = (IData)((0ULL == (0xfc000000ULL & vlSelfRef.core__DOT__queue__DOT__ram)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_102 
        = (((0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 0x1aU))) << 4U)) 
            | ((8U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 0x1bU))) << 3U)) 
               | (4U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 0x1cU))) << 2U)))) 
           | ((2U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 0x1dU))) << 1U)) 
              | (1U & (~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 0x1fU))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_97 
        = ((2U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                              >> 0x1eU))) << 1U)) | 
           (1U & (~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                             >> 0x1fU)))));
    vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp 
        = ((0x1000U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
            ? ((0x800U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                ? 0U : ((0x400U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                         ? ((0x200U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                             ? 0U : ((0x100U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                      ? (IData)((vlSelfRef.core__DOT__exu__DOT__alu__DOT___mulu_res_T 
                                                 >> 0x20U))
                                      : VL_MODDIV_III(32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)))
                         : ((0x200U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                             ? ((0x100U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                 ? VL_DIV_III(32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                 : (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                    >= vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                             : ((0x100U & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                 ? (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                    < vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                 : 0U)))) : ((0x800U 
                                              & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                              ? ((0x400U 
                                                  & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                  ? 
                                                 ((0x200U 
                                                   & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                   ? 
                                                  ((0x100U 
                                                    & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, 
                                                                  (0x1fU 
                                                                   & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                                                    : 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, 
                                                                 (0x1fU 
                                                                  & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                    ? 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                                                    : 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    ^ vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                   ? 
                                                  ((0x100U 
                                                    & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                    ? 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    | vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                                    : 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    & vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                    ? 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    != vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                                    : 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    == vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))))
                                              : ((0x400U 
                                                  & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                  ? 
                                                 ((0x200U 
                                                   & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                   ? 
                                                  ((0x100U 
                                                    & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                    ? 
                                                   VL_LTS_III(32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                                    : 
                                                   VL_GTES_III(32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                    ? 
                                                   VL_MODDIVS_III(32, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                                    : (IData)(
                                                              (0x1ffffffffULL 
                                                               & VL_DIVS_QQQ(33, 
                                                                             (((QData)((IData)(
                                                                                ((5U 
                                                                                != 
                                                                                (7U 
                                                                                & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])) 
                                                                                & (vlSelfRef.__VdfgRegularize_hd87f99a1_5_0 
                                                                                >> 0x1fU)))) 
                                                                               << 0x20U) 
                                                                              | (QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1))), 
                                                                             (((QData)((IData)(
                                                                                (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2 
                                                                                >> 0x1fU))) 
                                                                               << 0x20U) 
                                                                              | (QData)((IData)(vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))))))))
                                                  : 
                                                 ((0x200U 
                                                   & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                   ? 
                                                  ((0x100U 
                                                    & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                    ? (IData)(vlSelfRef.core__DOT__exu__DOT__alu__DOT___mulu_res_T)
                                                    : 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    - vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2))
                                                   : 
                                                  ((0x100U 
                                                    & vlSelfRef.core__DOT__queue_1__DOT__ram[1U])
                                                    ? 
                                                   (vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1 
                                                    + vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in2)
                                                    : vlSelfRef.core__DOT__exu__DOT____Vcellinp__alu__io_in1)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_88 
        = ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                       >> 5U))) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_87));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_92 
        = (IData)(((0x5000ULL == (0x7040ULL & vlSelfRef.core__DOT__queue__DOT__ram)) 
                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_91)));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36 
        = (((IData)(((0x13ULL == (0x1fULL & vlSelfRef.core__DOT__queue__DOT__ram)) 
                     & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_42))) 
            << 1U) | (IData)(((0x13ULL == (0x1fULL 
                                           & vlSelfRef.core__DOT__queue__DOT__ram)) 
                              & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_43))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_79 
        = (IData)(((0ULL == (0x1040ULL & vlSelfRef.core__DOT__queue__DOT__ram)) 
                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_69)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_85 
        = ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                       >> 0x19U))) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_84));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94 
        = ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                       >> 6U))) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_90 
        = ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                    >> 0xcU)) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25 
        = ((((0x200U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                        << 9U)) | ((0x100U & ((IData)(
                                                      (vlSelfRef.core__DOT__queue__DOT__ram 
                                                       >> 1U)) 
                                              << 8U)) 
                                   | (0x80U & ((IData)(
                                                       (vlSelfRef.core__DOT__queue__DOT__ram 
                                                        >> 2U)) 
                                               << 7U)))) 
            | ((0x40U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 3U))) << 6U)) 
               | (0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 4U))) << 5U)))) 
           | ((0x10U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 5U)) << 4U)) | 
              ((8U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 6U)) << 3U)) | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_95))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_96 
        = ((0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 5U))) << 4U)) | 
           ((8U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                               >> 6U))) << 3U)) | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_95)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_89 
        = (IData)(((0ULL == (0x6000ULL & vlSelfRef.core__DOT__queue__DOT__ram)) 
                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71 
        = ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                       >> 0x19U))) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61 
        = (((((0x4000U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                          << 0xeU)) | (0x2000U & ((IData)(
                                                          (vlSelfRef.core__DOT__queue__DOT__ram 
                                                           >> 1U)) 
                                                  << 0xdU))) 
             | ((0x1000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                        >> 2U))) << 0xcU)) 
                | (0x800U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 3U))) << 0xbU)))) 
            | (((0x400U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 4U)) << 0xaU)) 
                | (0x200U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 5U))) << 9U))) 
               | ((0x100U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 6U))) << 8U)) 
                  | (0x80U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 0xcU)) << 7U))))) 
           | ((0x40U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 0xdU))) << 6U)) 
              | ((0x20U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 0xeU)) << 5U)) 
                 | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_102))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103 
        = (((0x200U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                   >> 6U))) << 9U)) 
            | ((0x100U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                   >> 0xcU)) << 8U)) 
               | (0x80U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 0xdU))) << 7U)))) 
           | ((0x40U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 0xeU)) << 6U)) 
              | ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 0x19U))) 
                           << 5U)) | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_102))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_77 
        = ((((((0x8000000U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 4U)) << 0x1bU)) 
               | (0x4000000U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 5U)) << 0x1aU))) 
              | ((0x2000000U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 6U)) << 0x19U)) 
                 | (0x1000000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                              >> 7U))) 
                                  << 0x18U)))) | ((0x800000U 
                                                   & ((~ (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 8U))) 
                                                      << 0x17U)) 
                                                  | ((0x400000U 
                                                      & ((~ (IData)(
                                                                    (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                     >> 9U))) 
                                                         << 0x16U)) 
                                                     | (0x200000U 
                                                        & ((~ (IData)(
                                                                      (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                       >> 0xaU))) 
                                                           << 0x15U))))) 
            | ((((0x100000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                           >> 0xbU))) 
                               << 0x14U)) | (0x80000U 
                                             & ((~ (IData)(
                                                           (vlSelfRef.core__DOT__queue__DOT__ram 
                                                            >> 0xcU))) 
                                                << 0x13U))) 
                | ((0x40000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                            >> 0xdU))) 
                                << 0x12U)) | (0x20000U 
                                              & ((~ (IData)(
                                                            (vlSelfRef.core__DOT__queue__DOT__ram 
                                                             >> 0xeU))) 
                                                 << 0x11U)))) 
               | ((0x10000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                           >> 0xfU))) 
                               << 0x10U)) | ((0x8000U 
                                              & ((~ (IData)(
                                                            (vlSelfRef.core__DOT__queue__DOT__ram 
                                                             >> 0x10U))) 
                                                 << 0xfU)) 
                                             | (0x4000U 
                                                & ((~ (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 0x11U))) 
                                                   << 0xeU)))))) 
           | (((((0x2000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 0x12U))) 
                             << 0xdU)) | (0x1000U & 
                                          ((~ (IData)(
                                                      (vlSelfRef.core__DOT__queue__DOT__ram 
                                                       >> 0x13U))) 
                                           << 0xcU))) 
                | ((0x800U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                          >> 0x14U))) 
                              << 0xbU)) | (0x400U & 
                                           ((IData)(
                                                    (vlSelfRef.core__DOT__queue__DOT__ram 
                                                     >> 0x15U)) 
                                            << 0xaU)))) 
               | ((0x200U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 0x16U))) 
                             << 9U)) | ((0x100U & (
                                                   (~ (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 0x17U))) 
                                                   << 8U)) 
                                        | (0x80U & 
                                           ((~ (IData)(
                                                       (vlSelfRef.core__DOT__queue__DOT__ram 
                                                        >> 0x18U))) 
                                            << 7U))))) 
              | ((((0x40U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 0x19U))) 
                             << 6U)) | (0x20U & ((~ (IData)(
                                                            (vlSelfRef.core__DOT__queue__DOT__ram 
                                                             >> 0x1aU))) 
                                                 << 5U))) 
                  | ((0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                           >> 0x1bU))) 
                               << 4U)) | (8U & ((IData)(
                                                        (vlSelfRef.core__DOT__queue__DOT__ram 
                                                         >> 0x1cU)) 
                                                << 3U)))) 
                 | ((4U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 0x1dU)) << 2U)) 
                    | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_97)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_98 
        = ((4U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                              >> 0x1dU))) << 2U)) | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_97));
    vlSelfRef.core__DOT__exu__DOT___GEN_0 = ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                              >> 0x18U) 
                                             & (1U 
                                                == vlSelfRef.core__DOT__exu__DOT__alu__DOT__casez_tmp));
    vlSelfRef.io_debugInst = vlSelfRef.core__DOT__ifu__DOT__inst_buf_bits_inst;
    if (((IData)(vlSelfRef.core__DOT__if_sram__DOT__r_state) 
         & (IData)(vlSelfRef.core__DOT__if_sram__DOT___read_backend_done))) {
        vlSelfRef.core__DOT__if_sram__DOT__r_bits_reg_data 
            = vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_reg;
    }
    if (vlSelfRef.reset) {
        __Vdly__core__DOT__if_sram__DOT__r_state = 0U;
        __Vdly__core__DOT__if_sram__DOT__r_valid_reg = 0U;
        vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_reg = 0U;
    } else {
        if (vlSelfRef.core__DOT__if_sram__DOT__r_state) {
            __Vdly__core__DOT__if_sram__DOT__r_state 
                = ((~ ((IData)(vlSelfRef.core__DOT__if_sram__DOT__r_state) 
                       & (IData)(vlSelfRef.core__DOT__if_sram__DOT___GEN))) 
                   & (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_state));
            __Vdly__core__DOT__if_sram__DOT__r_valid_reg 
                = ((~ (IData)(vlSelfRef.core__DOT__if_sram__DOT___GEN)) 
                   & ((IData)(vlSelfRef.core__DOT__if_sram__DOT___read_backend_done) 
                      | (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_valid_reg)));
        } else {
            __Vdly__core__DOT__if_sram__DOT__r_state 
                = ((IData)(vlSelfRef.core__DOT__if_sram__DOT___read_backend_io_en_T) 
                   | (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_state));
        }
        vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_reg 
            = vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_comb;
    }
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8 
        = (((0x200U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 9U)) | ((0x100U & ((IData)(
                                                     (vlSelfRef.core__DOT__queue__DOT__ram 
                                                      >> 1U)) 
                                             << 8U)) 
                                  | (0x80U & ((IData)(
                                                      (vlSelfRef.core__DOT__queue__DOT__ram 
                                                       >> 2U)) 
                                              << 7U)))) 
           | ((0x40U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 3U)) << 6U)) | 
              ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 4U))) << 5U)) 
               | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_96))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_9 
        = (((0x100U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                       << 8U)) | (0x80U & ((IData)(
                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                    >> 1U)) 
                                           << 7U))) 
           | ((0x40U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 2U))) << 6U)) 
              | ((0x20U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 4U)) << 5U)) 
                 | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_96))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_93 
        = (IData)(((0ULL == (0x1e00000ULL & vlSelfRef.core__DOT__queue__DOT__ram)) 
                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_76 
        = ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                    >> 0xeU)) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_72 
        = ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                       >> 0xeU))) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_63 
        = (((0x8000U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                        << 0xfU)) | ((0x4000U & ((IData)(
                                                         (vlSelfRef.core__DOT__queue__DOT__ram 
                                                          >> 1U)) 
                                                 << 0xeU)) 
                                     | (0x2000U & (
                                                   (~ (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 2U))) 
                                                   << 0xdU)))) 
           | ((0x1000U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                   >> 3U)) << 0xcU)) 
              | ((0x800U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 4U)) << 0xbU)) 
                 | ((0x400U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                           >> 5U))) 
                               << 0xaU)) | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103)))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_76 
        = ((((((0x8000000U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 4U)) << 0x1bU)) 
               | (0x4000000U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 5U)) << 0x1aU))) 
              | ((0x2000000U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 6U)) << 0x19U)) 
                 | (0x1000000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                              >> 7U))) 
                                  << 0x18U)))) | ((0x800000U 
                                                   & ((~ (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 8U))) 
                                                      << 0x17U)) 
                                                  | ((0x400000U 
                                                      & ((~ (IData)(
                                                                    (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                     >> 9U))) 
                                                         << 0x16U)) 
                                                     | (0x200000U 
                                                        & ((~ (IData)(
                                                                      (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                       >> 0xaU))) 
                                                           << 0x15U))))) 
            | ((((0x100000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                           >> 0xbU))) 
                               << 0x14U)) | (0x80000U 
                                             & ((~ (IData)(
                                                           (vlSelfRef.core__DOT__queue__DOT__ram 
                                                            >> 0xcU))) 
                                                << 0x13U))) 
                | ((0x40000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                            >> 0xdU))) 
                                << 0x12U)) | (0x20000U 
                                              & ((~ (IData)(
                                                            (vlSelfRef.core__DOT__queue__DOT__ram 
                                                             >> 0xeU))) 
                                                 << 0x11U)))) 
               | ((0x10000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                           >> 0xfU))) 
                               << 0x10U)) | ((0x8000U 
                                              & ((~ (IData)(
                                                            (vlSelfRef.core__DOT__queue__DOT__ram 
                                                             >> 0x10U))) 
                                                 << 0xfU)) 
                                             | (0x4000U 
                                                & ((~ (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 0x11U))) 
                                                   << 0xeU)))))) 
           | (((((0x2000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 0x12U))) 
                             << 0xdU)) | (0x1000U & 
                                          ((~ (IData)(
                                                      (vlSelfRef.core__DOT__queue__DOT__ram 
                                                       >> 0x13U))) 
                                           << 0xcU))) 
                | ((0x800U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 0x14U)) << 0xbU)) 
                   | (0x400U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                            >> 0x15U))) 
                                << 0xaU)))) | ((0x200U 
                                                & ((IData)(
                                                           (vlSelfRef.core__DOT__queue__DOT__ram 
                                                            >> 0x16U)) 
                                                   << 9U)) 
                                               | ((0x100U 
                                                   & ((~ (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 0x17U))) 
                                                      << 8U)) 
                                                  | (0x80U 
                                                     & ((~ (IData)(
                                                                   (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                    >> 0x18U))) 
                                                        << 7U))))) 
              | (((0x40U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                        >> 0x19U))) 
                            << 6U)) | (0x20U & ((~ (IData)(
                                                           (vlSelfRef.core__DOT__queue__DOT__ram 
                                                            >> 0x1aU))) 
                                                << 5U))) 
                 | ((0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                          >> 0x1bU))) 
                              << 4U)) | ((8U & ((IData)(
                                                        (vlSelfRef.core__DOT__queue__DOT__ram 
                                                         >> 0x1cU)) 
                                                << 3U)) 
                                         | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_98))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_99 
        = ((0x20U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 0x1aU))) << 5U)) 
           | ((0x10U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 0x1bU))) << 4U)) 
              | ((8U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 0x1cU))) << 3U)) 
                 | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_98))));
    vlSelfRef.core__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0 
        = (1U & ((vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                  >> 0x17U) | (IData)(vlSelfRef.core__DOT__exu__DOT___GEN_0)));
    vlSelfRef.core__DOT__if_sram__DOT__r_state = __Vdly__core__DOT__if_sram__DOT__r_state;
    vlSelfRef.core__DOT__if_sram__DOT__r_valid_reg 
        = __Vdly__core__DOT__if_sram__DOT__r_valid_reg;
    vlSelfRef.core__DOT___idu_io_out_bits_rd_en = (
                                                   (0x7fU 
                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                   | ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                         | ((0x3ffU 
                                                             == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                                            | ((0x1ffU 
                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                               | ((0x3fU 
                                                                   == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                                                  | ((IData)(
                                                                             ((0x33ULL 
                                                                               == 
                                                                               (0x7077ULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                              & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_91))) 
                                                                     | ((IData)(
                                                                                ((0x33ULL 
                                                                                == 
                                                                                (0x7fULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70))) 
                                                                        | ((IData)(
                                                                                ((0x33ULL 
                                                                                == 
                                                                                (0x1077ULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_89))) 
                                                                           | ((0x3ffU 
                                                                               == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                              | ((0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                                                | ((IData)(
                                                                                ((0x1013ULL 
                                                                                == 
                                                                                (0x305fULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70))) 
                                                                                | ((IData)(
                                                                                ((0x101bULL 
                                                                                == 
                                                                                (0x305fULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71))) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39)) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_41)) 
                                                                                | ((0xffU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47)) 
                                                                                | ((0x7fffU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
                                                                                | (IData)(
                                                                                ((3ULL 
                                                                                == 
                                                                                (7ULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & ((IData)(
                                                                                ((0x18ULL 
                                                                                == 
                                                                                (0x18ULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_92))) 
                                                                                | (IData)(
                                                                                ((0x30ULL 
                                                                                == 
                                                                                (0x30ULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & ((IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_92) 
                                                                                | (IData)(
                                                                                ((0x2004000ULL 
                                                                                == 
                                                                                (0x2004040ULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70))))))))))))))))))))))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_73 
        = ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                    >> 0xdU)) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_72));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_51 
        = ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
           | (0xffffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_63)));
    vlSelfRef.core__DOT___idu_io_out_bits_system = 
        ((((IData)(((0x70ULL == (0x1ffff0ULL & vlSelfRef.core__DOT__queue__DOT__ram)) 
                    & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_93))) 
           << 3U) | (((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                      | (0xfffffffU == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_76)) 
                     << 2U)) | ((((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                  | (0xfffffffU == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_77)) 
                                 << 1U) | (IData)((
                                                   (0x100070ULL 
                                                    == 
                                                    (0x1ffff0ULL 
                                                     & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_93)))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_66 
        = ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47)) 
           | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
              | ((0xffffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_63)) 
                 | ((0xfffffffU == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_76) 
                    | (0xfffffffU == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_77)))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32 
        = (((((0x4000U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                          << 0xeU)) | (0x2000U & ((IData)(
                                                          (vlSelfRef.core__DOT__queue__DOT__ram 
                                                           >> 1U)) 
                                                  << 0xdU))) 
             | ((0x1000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                        >> 2U))) << 0xcU)) 
                | (0x800U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 3U))) << 0xbU)))) 
            | (((0x400U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 4U)) << 0xaU)) 
                | (0x200U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 5U))) << 9U))) 
               | ((0x100U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 6U))) << 8U)) 
                  | (0x80U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 0xcU)) << 7U))))) 
           | ((0x40U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                    >> 0xdU))) << 6U)) 
              | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_99)));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100 
        = ((0x40U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                 >> 0x19U))) << 6U)) 
           | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_99));
    vlSelfRef.core__DOT___exu_io_pcCtrl_pc_en = ((1U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                                      >> 0x13U)))
                                                  ? (IData)(vlSelfRef.core__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (0xfU 
                                                    & (vlSelfRef.core__DOT__queue_1__DOT__ram[4U] 
                                                       >> 0x13U))) 
                                                  | (IData)(vlSelfRef.core__DOT__exu__DOT____VdfgRegularize_h1784965b_0_0)));
    vlSelfRef.core__DOT__if_sram__DOT___GEN = (((~ (IData)(vlSelfRef.core__DOT__ifu__DOT___GEN_2)) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.core__DOT__ifu__DOT__state))) 
                                               & (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__if_sram__DOT___read_backend_done 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.core__DOT__if_sram__DOT___read_backend_io_en_T));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_28 
        = ((((((0x8000000U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                              << 0x1bU)) | (0x4000000U 
                                            & ((IData)(
                                                       (vlSelfRef.core__DOT__queue__DOT__ram 
                                                        >> 4U)) 
                                               << 0x1aU))) 
              | ((0x2000000U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 5U)) << 0x19U)) 
                 | (0x1000000U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                           >> 6U)) 
                                  << 0x18U)))) | ((0x800000U 
                                                   & ((~ (IData)(
                                                                 (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                  >> 7U))) 
                                                      << 0x17U)) 
                                                  | ((0x400000U 
                                                      & ((~ (IData)(
                                                                    (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                     >> 8U))) 
                                                         << 0x16U)) 
                                                     | (0x200000U 
                                                        & ((~ (IData)(
                                                                      (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                       >> 9U))) 
                                                           << 0x15U))))) 
            | ((((0x100000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                           >> 0xaU))) 
                               << 0x14U)) | (0x80000U 
                                             & ((~ (IData)(
                                                           (vlSelfRef.core__DOT__queue__DOT__ram 
                                                            >> 0xbU))) 
                                                << 0x13U))) 
                | ((0x40000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                            >> 0xcU))) 
                                << 0x12U)) | (0x20000U 
                                              & ((~ (IData)(
                                                            (vlSelfRef.core__DOT__queue__DOT__ram 
                                                             >> 0xdU))) 
                                                 << 0x11U)))) 
               | ((0x10000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                           >> 0xeU))) 
                               << 0x10U)) | ((0x8000U 
                                              & ((~ (IData)(
                                                            (vlSelfRef.core__DOT__queue__DOT__ram 
                                                             >> 0xfU))) 
                                                 << 0xfU)) 
                                             | (0x4000U 
                                                & ((~ (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 0x10U))) 
                                                   << 0xeU)))))) 
           | ((((0x2000U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                        >> 0x11U))) 
                            << 0xdU)) | (0x1000U & 
                                         ((~ (IData)(
                                                     (vlSelfRef.core__DOT__queue__DOT__ram 
                                                      >> 0x12U))) 
                                          << 0xcU))) 
               | ((0x800U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 0x13U))) 
                             << 0xbU)) | (0x400U & 
                                          ((~ (IData)(
                                                      (vlSelfRef.core__DOT__queue__DOT__ram 
                                                       >> 0x15U))) 
                                           << 0xaU)))) 
              | ((0x200U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                        >> 0x16U))) 
                            << 9U)) | ((0x100U & ((~ (IData)(
                                                             (vlSelfRef.core__DOT__queue__DOT__ram 
                                                              >> 0x17U))) 
                                                  << 8U)) 
                                       | ((0x80U & 
                                           ((~ (IData)(
                                                       (vlSelfRef.core__DOT__queue__DOT__ram 
                                                        >> 0x18U))) 
                                            << 7U)) 
                                          | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_101 
        = ((0x200U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 6U))) << 9U)) 
           | ((0x100U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                  >> 0xcU)) << 8U)) 
              | ((0x80U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                       >> 0xdU))) << 7U)) 
                 | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100))));
    vlSelfRef.core__DOT__ifu__DOT___GEN_3 = ((2U == (IData)(vlSelfRef.core__DOT__ifu__DOT__state)) 
                                             & (IData)(vlSelfRef.core__DOT__if_sram__DOT___GEN));
    vlSelfRef.core__DOT__if_sram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__if_sram__DOT__r_state)) 
           & (IData)(vlSelfRef.core__DOT__ifu__DOT__io_axi_ar_valid_0));
    vlSelfRef.core__DOT___idu_io_out_bits_opcode = 
        ((((IData)(((3ULL == (0xfULL & vlSelfRef.core__DOT__queue__DOT__ram)) 
                    & ((IData)(((0x1010ULL == (0x1070ULL 
                                               & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_69))) 
                       | ((IData)(((0x1030ULL == (0x1070ULL 
                                                  & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_73))) 
                          | ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                         >> 4U))) & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_43)))))) 
           << 4U) | ((8U & (((IData)(((0x63ULL == (0x7fULL 
                                                   & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                      & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52))) 
                             | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                | ((IData)(((0x33ULL 
                                             == (0x3fULL 
                                                 & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                            & (0x3ffU 
                                               == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_101)))) 
                                   | ((IData)(((0x13ULL 
                                                == 
                                                (0x7fULL 
                                                 & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                               & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_75))) 
                                      | ((IData)(((0x33ULL 
                                                   == 
                                                   (0x7fULL 
                                                    & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                  & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_76))) 
                                         | ((0x7fffU 
                                             == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
                                            | ((IData)(
                                                       ((0x33ULL 
                                                         == 
                                                         (0x3fULL 
                                                          & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                        & (0x3ffU 
                                                           == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103)))) 
                                               | (IData)(
                                                         (0x6013ULL 
                                                          == 
                                                          (0x607fULL 
                                                           & vlSelfRef.core__DOT__queue__DOT__ram)))))))))) 
                            << 3U)) | (4U & (((0x7fffU 
                                               == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                              | ((IData)(
                                                         ((0x33ULL 
                                                           == 
                                                           (0x3fULL 
                                                            & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                          & (0x3ffU 
                                                             == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_101)))) 
                                                 | ((IData)(
                                                            ((0x13ULL 
                                                              == 
                                                              (0x3fULL 
                                                               & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                             & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_79))) 
                                                    | ((IData)(
                                                               ((0x33ULL 
                                                                 == 
                                                                 (0x107fULL 
                                                                  & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_73))) 
                                                       | ((IData)(
                                                                  ((0x13ULL 
                                                                    == 
                                                                    (0x107fULL 
                                                                     & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80))) 
                                                          | ((IData)(
                                                                     ((0x33ULL 
                                                                       == 
                                                                       (0x207fULL 
                                                                        & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                      & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_76))) 
                                                             | ((IData)(
                                                                        (0x4063ULL 
                                                                         == 
                                                                         (0x607fULL 
                                                                          & vlSelfRef.core__DOT__queue__DOT__ram))) 
                                                                | ((0x7fffU 
                                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
                                                                   | (IData)(
                                                                             ((0x33ULL 
                                                                               == 
                                                                               (0x3fULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                              & (0x3ffU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103)))))))))))) 
                                             << 2U)))) 
         | ((2U & (((IData)((0x2013ULL == (0x307fULL 
                                           & vlSelfRef.core__DOT__queue__DOT__ram))) 
                    | ((IData)(((0x2033ULL == (0x307fULL 
                                               & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                & (0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100)))) 
                       | ((IData)((0x4063ULL == (0x607fULL 
                                                 & vlSelfRef.core__DOT__queue__DOT__ram))) 
                          | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61)) 
                             | ((IData)(((0x33ULL == 
                                          (0x3fULL 
                                           & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                         & (0x3ffU 
                                            == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103)))) 
                                | ((IData)(((0x1033ULL 
                                             == (0x107fULL 
                                                 & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                            & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_76))) 
                                   | ((IData)(((3ULL 
                                                == 
                                                (0x1fULL 
                                                 & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                               & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_42))) 
                                      | ((IData)((0x6013ULL 
                                                  == 
                                                  (0x607fULL 
                                                   & vlSelfRef.core__DOT__queue__DOT__ram))) 
                                         | (IData)(
                                                   ((0x33ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                    & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_85))))))))))) 
                   << 1U)) | (1U & ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                    | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                       | ((IData)((
                                                   (3ULL 
                                                    == 
                                                    (0xfULL 
                                                     & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                   & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_88))) 
                                          | ((0x3fU 
                                              == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                             | ((IData)(
                                                        ((0x33ULL 
                                                          == 
                                                          (0x7fULL 
                                                           & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                         & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_72))) 
                                                | ((0x3ffU 
                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                   | ((0x7fU 
                                                       == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                      | ((IData)(
                                                                 ((0x1013ULL 
                                                                   == 
                                                                   (0x107fULL 
                                                                    & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                  & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_89))) 
                                                         | ((IData)(
                                                                    ((0x23ULL 
                                                                      == 
                                                                      (0x3fULL 
                                                                       & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                     & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_90))) 
                                                            | ((IData)(
                                                                       (0x2013ULL 
                                                                        == 
                                                                        (0x307fULL 
                                                                         & vlSelfRef.core__DOT__queue__DOT__ram))) 
                                                               | ((IData)(
                                                                          ((0x13ULL 
                                                                            == 
                                                                            (0x7fULL 
                                                                             & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                           & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_69))) 
                                                                  | ((IData)(
                                                                             ((0x2033ULL 
                                                                               == 
                                                                               (0x307fULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                              & (0x7fU 
                                                                                == (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100)))) 
                                                                     | (IData)(
                                                                               ((3ULL 
                                                                                == 
                                                                                (0xfULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & ((IData)(
                                                                                ((0x60ULL 
                                                                                == 
                                                                                (0x70ULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_75))) 
                                                                                | ((IData)(
                                                                                (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                                >> 4U)) 
                                                                                & ((IData)(
                                                                                ((0x5000ULL 
                                                                                == 
                                                                                (0x7060ULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_84))) 
                                                                                | (IData)(
                                                                                ((0x5020ULL 
                                                                                == 
                                                                                (0x7060ULL 
                                                                                & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_85)))))))))))))))))))))));
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35 
        = (((0x8000U & ((IData)(vlSelfRef.core__DOT__queue__DOT__ram) 
                        << 0xfU)) | ((0x4000U & ((IData)(
                                                         (vlSelfRef.core__DOT__queue__DOT__ram 
                                                          >> 1U)) 
                                                 << 0xeU)) 
                                     | (0x2000U & (
                                                   (~ (IData)(
                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                               >> 2U))) 
                                                   << 0xdU)))) 
           | ((0x1000U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                   >> 3U)) << 0xcU)) 
              | ((0x800U & ((IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                     >> 4U)) << 0xbU)) 
                 | ((0x400U & ((~ (IData)((vlSelfRef.core__DOT__queue__DOT__ram 
                                           >> 5U))) 
                               << 0xaU)) | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_101)))));
    vlSelfRef.core__DOT__ifu__DOT___GEN_4 = (1U & (
                                                   (~ (IData)(vlSelfRef.core__DOT__ifu__DOT___GEN_3)) 
                                                   | (IData)(vlSelfRef.core__DOT__ifu__DOT___GEN_2)));
    if (vlSelfRef.core__DOT__if_sram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__if_sram__DOT__read_backend__DOT__memory_read_TOP(vlSelfRef.core__DOT__ifu__DOT__pc, vlSelfRef.__Vtask_core__DOT__if_sram__DOT__read_backend__DOT__memory_read__1__r_data);
        vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__if_sram__DOT__read_backend__DOT__memory_read__1__r_data;
    } else {
        vlSelfRef.core__DOT__if_sram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1 
        = (((((IData)((0U != (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36))) 
              << 1U) | ((0x3fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                        | ((0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                           | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                              | ((0xffffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35)) 
                                 | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_51)))))) 
            << 2U) | ((2U & (((IData)((0x23ULL == (0x407fULL 
                                                   & vlSelfRef.core__DOT__queue__DOT__ram))) 
                              | ((IData)(((0x23ULL 
                                           == (0x3fULL 
                                               & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                          & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52))) 
                                 | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                    | ((0xffffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35)) 
                                       | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58)) 
                                          | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_51)))))) 
                             << 1U)) | ((0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T)) 
                                        | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                           | ((0xffU 
                                               == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                              | ((0x1ffU 
                                                  == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                 | ((0xffU 
                                                     == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_22)) 
                                                    | ((IData)(
                                                               ((0x63ULL 
                                                                 == 
                                                                 (0x107bULL 
                                                                  & vlSelfRef.core__DOT__queue__DOT__ram)) 
                                                                & (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52))) 
                                                       | ((0x7fU 
                                                           == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                          | ((0xffffU 
                                                              == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35)) 
                                                             | ((0xffU 
                                                                 == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_41)) 
                                                                | ((0xffU 
                                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58)) 
                                                                   | (0xffffU 
                                                                      == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_63))))))))))))));
    vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_67 
        = ((0xfffffffU == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_28) 
           | ((0x7fffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
              | ((0xffffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35)) 
                 | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39)) 
                    | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_66)))));
    vlSelfRef.core__DOT___idu_io_out_bits_imm = ((7U 
                                                  == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                  ? 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelfRef.core__DOT__queue__DOT__ram 
                                                             >> 0x14U)))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                   ? 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__queue__DOT__ram 
                                                              >> 0x14U)))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                            >> 0x1fU))))) 
                                                     << 0x14U) 
                                                    | (((0xff000U 
                                                         & ((IData)(
                                                                    (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                     >> 0xcU)) 
                                                            << 0xcU)) 
                                                        | (0x800U 
                                                           & ((IData)(
                                                                      (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                       >> 0x14U)) 
                                                              << 0xbU))) 
                                                       | (0x7feU 
                                                          & ((IData)(
                                                                     (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                      >> 0x15U)) 
                                                             << 1U))))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                     ? 
                                                    ((IData)(
                                                             (vlSelfRef.core__DOT__queue__DOT__ram 
                                                              >> 0xcU)) 
                                                     << 0xcU)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                              >> 0x1fU))))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & ((IData)(
                                                                     (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                      >> 7U)) 
                                                             << 0xbU)) 
                                                         | ((0x7e0U 
                                                             & ((IData)(
                                                                        (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                         >> 0x19U)) 
                                                                << 5U)) 
                                                            | (0x1eU 
                                                               & ((IData)(
                                                                          (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                           >> 8U)) 
                                                                  << 1U)))))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                               >> 0x1fU))))) 
                                                        << 0xcU) 
                                                       | ((0xfe0U 
                                                           & ((IData)(
                                                                      (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                       >> 0x19U)) 
                                                              << 5U)) 
                                                          | (0x1fU 
                                                             & (IData)(
                                                                       (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                        >> 7U)))))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_T_1))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                                >> 0x1fU))))) 
                                                         << 0xcU) 
                                                        | (0xfffU 
                                                           & (IData)(
                                                                     (vlSelfRef.core__DOT__queue__DOT__ram 
                                                                      >> 0x14U))))
                                                        : 0U)))))));
    vlSelfRef.core__DOT___idu_io_out_bits_alusel = 
        ((((IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_67) 
           | ((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
              | (0x37ULL == (0x7fULL & vlSelfRef.core__DOT__queue__DOT__ram)))) 
          << 2U) | ((((IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_67) 
                      | (((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                          | (0x17ULL == (0x7fULL & vlSelfRef.core__DOT__queue__DOT__ram))) 
                         | (0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)))) 
                     << 1U) | ((0x7fU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T)) 
                               | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                  | ((0xffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                     | ((0x3ffU == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                        | ((0x1ffU 
                                            == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                           | ((0x3fU 
                                               == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10)) 
                                              | ((0x3ffU 
                                                  == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                 | ((0x7fU 
                                                     == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26)) 
                                                    | ((0xfffffffU 
                                                        == vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_28) 
                                                       | ((0x7fffU 
                                                           == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32)) 
                                                          | ((0xffffU 
                                                              == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35)) 
                                                             | ((0xffU 
                                                                 == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39)) 
                                                                | ((0xffU 
                                                                    == (IData)(vlSelfRef.core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_41)) 
                                                                   | (IData)(vlSelfRef.core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_66))))))))))))))));
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
            VL_FATAL_MT("build/core.sv", 2568, "", "NBA region did not converge.");
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
                VL_FATAL_MT("build/core.sv", 2568, "", "Active region did not converge.");
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
