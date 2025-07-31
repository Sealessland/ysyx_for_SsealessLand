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

void Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__write_backend__DOT__mem_write_TOP(IData/*31:0*/ aw_addr, IData/*31:0*/ w_data);
void Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__mem_read_TOP(IData/*31:0*/ ar_addr, IData/*31:0*/ &r_data);

VL_INLINE_OPT void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__core__DOT__validReg_12;
    __Vdly__core__DOT__validReg_12 = 0;
    CData/*0:0*/ __Vdly__core__DOT__validReg_9;
    __Vdly__core__DOT__validReg_9 = 0;
    CData/*0:0*/ __Vdly__core__DOT__validReg_7;
    __Vdly__core__DOT__validReg_7 = 0;
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
    // Body
    __Vdly__core__DOT__validReg_7 = vlSelfRef.core__DOT__validReg_7;
    __Vdly__core__DOT__validReg_9 = vlSelfRef.core__DOT__validReg_9;
    __Vdly__core__DOT__Fsram__DOT__w_state = vlSelfRef.core__DOT__Fsram__DOT__w_state;
    __Vdly__core__DOT__Fsram__DOT__b_valid_reg = vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg;
    __Vdly__core__DOT__Lsram__DOT__r_state = vlSelfRef.core__DOT__Lsram__DOT__r_state;
    __Vdly__core__DOT__Lsram__DOT__r_valid_reg = vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg;
    __Vdly__core__DOT__validReg_12 = vlSelfRef.core__DOT__validReg_12;
    __Vdly__core__DOT__IFU__DOT__pc = vlSelfRef.core__DOT__IFU__DOT__pc;
    __Vdly__core__DOT__Lsram__DOT__w_state = vlSelfRef.core__DOT__Lsram__DOT__w_state;
    __Vdly__core__DOT__Lsram__DOT__b_valid_reg = vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg;
    __Vdly__core__DOT__Fsram__DOT__r_state = vlSelfRef.core__DOT__Fsram__DOT__r_state;
    __Vdly__core__DOT__Fsram__DOT__r_valid_reg = vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg;
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__producerFire) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : ARport(addr -> %10#)\n",0,
                      32,vlSelfRef.core__DOT__IFU__DOT__pc);
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : Rport(resp -> %1#, data -> %10#)\n",0,
                      2,vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_resp,
                      32,vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_data);
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : Bport(resp -> %1#)\n",0,
                      2,vlSelfRef.core__DOT__Fsram__DOT__b_bits_reg_resp);
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__producerFire_5) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : ARport(addr -> %10#)\n",0,
                      32,vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr);
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__Lsram__DOT___GEN) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : Rport(resp -> %1#, data -> %10#)\n",0,
                      2,vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_resp,
                      32,vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data);
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__producerFire_7) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : AWport(addr -> %10#)\n",0,
                      32,vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr);
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__producerFire_8) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : Bport(resp -> %1#)\n",0,
                      2,vlSelfRef.core__DOT__Lsram__DOT__b_bits_reg_resp);
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__producerFire_9) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : Wport(data -> %10#, strb -> %2#)\n",0,
                      32,vlSelfRef.core__DOT___LSU_io_axi_w_bits_data,
                      4,(IData)(vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb));
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__IFU__DOT__consumerFire) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : F2D(inst -> %10#, pc -> %10#)\n",0,
                      32,vlSelfRef.io_debugInst,32,
                      vlSelfRef.io_debugPC);
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__producerFire_11) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : D2E(rs1_data -> %10#, rs2_data -> %10#, rd_addr -> %2#, rd_en -> %1#, opcode -> %2#, imm -> %20#, pc -> %10#, rs2_en -> %1#, unsign_en -> %1#, csr_en -> 0, lsu_en -> %1#, mw_en -> %1#, mlen -> %2#, branch_en -> %1#, jump_en -> %1#, jalr_en -> %1#, auipc_en -> %1#)\n",0,
                      32,vlSelfRef.io_debugin1,32,vlSelfRef.io_debugin2,
                      5,(0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                  >> 7U)),1,(IData)(vlSelfRef.core__DOT___IDU_io_out_bits_rd_en),
                      5,vlSelfRef.core__DOT___IDU_io_out_bits_opcode,
                      64,vlSelfRef.core__DOT__IDU__DOT__casez_tmp,
                      32,vlSelfRef.core__DOT___IDU_io_out_bits_pc,
                      1,(IData)(vlSelfRef.core__DOT___IDU_io_out_bits_rs2_en),
                      1,vlSelfRef.core__DOT___IDU_io_out_bits_unsign_en,
                      1,(IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en),
                      1,vlSelfRef.core__DOT___IDU_io_out_bits_mw_en,
                      4,(IData)(vlSelfRef.core__DOT___IDU_io_out_bits_mlen),
                      1,vlSelfRef.core__DOT___IDU_io_out_bits_branch_en,
                      1,(0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)),
                      1,(0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)),
                      1,(0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7)));
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT__producerFire_12) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : E2L(rd_en -> %1#, rd_addr -> %2#, rd_data -> %10#, mem_wen -> %1#, mem_ren -> %1#, mem_addr -> %10#, mem_wdata -> %10#, mem_len -> %2#, unsign_en -> %1#)\n",0,
                      1,vlSelfRef.core__DOT___EXU_io_out_bits_rd_en,
                      5,(IData)(vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr),
                      32,vlSelfRef.io_debugout1,1,(IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen),
                      1,vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren,
                      32,vlSelfRef.core__DOT__EXU__DOT___alu_io_out,
                      32,vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata,
                      4,(IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_len),
                      1,vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en);
    }
    if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.core__DOT___LSU_io_out_valid) 
                            & (~ (IData)(vlSelfRef.reset))))))) {
        VL_FWRITEF_NX(0x80000002U,"[conn Fire] data : L2W(rd_en -> %1#, rd_addr -> %2#, rd_data -> %10#)\n",0,
                      1,vlSelfRef.core__DOT___LSU_io_out_bits_rd_en,
                      5,(IData)(vlSelfRef.core__DOT___LSU_io_out_bits_rd_addr),
                      32,vlSelfRef.core__DOT___LSU_io_out_bits_rd_data);
    }
    __Vdly__core__DOT__validReg_7 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                     && ((IData)(vlSelfRef.core__DOT__validReg_7)
                                          ? ((~ ((IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T) 
                                                 & (~ (IData)(vlSelfRef.core__DOT__producerFire_7)))) 
                                             & (IData)(vlSelfRef.core__DOT__validReg_7))
                                          : (((IData)(vlSelfRef.core__DOT__producerFire_7) 
                                              & (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T))) 
                                             | (IData)(vlSelfRef.core__DOT__validReg_7))));
    __Vdly__core__DOT__validReg_9 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                     && ((IData)(vlSelfRef.core__DOT__validReg_9)
                                          ? ((~ ((IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T_1) 
                                                 & (~ (IData)(vlSelfRef.core__DOT__producerFire_9)))) 
                                             & (IData)(vlSelfRef.core__DOT__validReg_9))
                                          : (((IData)(vlSelfRef.core__DOT__producerFire_9) 
                                              & (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T_1))) 
                                             | (IData)(vlSelfRef.core__DOT__validReg_9))));
    vlSelfRef.core__DOT__validReg_5 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                       && ((IData)(vlSelfRef.core__DOT__validReg_5)
                                            ? ((~ ((IData)(vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T) 
                                                   & (~ (IData)(vlSelfRef.core__DOT__producerFire_5)))) 
                                               & (IData)(vlSelfRef.core__DOT__validReg_5))
                                            : (((IData)(vlSelfRef.core__DOT__producerFire_5) 
                                                & (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T))) 
                                               | (IData)(vlSelfRef.core__DOT__validReg_5))));
    vlSelfRef.core__DOT__validReg = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                     && ((IData)(vlSelfRef.core__DOT__validReg)
                                          ? ((~ ((IData)(vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T) 
                                                 & (~ (IData)(vlSelfRef.core__DOT__producerFire)))) 
                                             & (IData)(vlSelfRef.core__DOT__validReg))
                                          : (((IData)(vlSelfRef.core__DOT__producerFire) 
                                              & (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T))) 
                                             | (IData)(vlSelfRef.core__DOT__validReg))));
    vlSelfRef.core__DOT__validReg_13 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                        && ((IData)(vlSelfRef.core__DOT__validReg_13)
                                             ? ((~ 
                                                 ((IData)(vlSelfRef.core__DOT___WBU_io_out_en) 
                                                  & (~ (IData)(vlSelfRef.core__DOT___LSU_io_out_valid)))) 
                                                & (IData)(vlSelfRef.core__DOT__validReg_13))
                                             : (((IData)(vlSelfRef.core__DOT___LSU_io_out_valid) 
                                                 & (~ (IData)(vlSelfRef.core__DOT___WBU_io_out_en))) 
                                                | (IData)(vlSelfRef.core__DOT__validReg_13))));
    vlSelfRef.core__DOT__validReg_8 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                       && ((IData)(vlSelfRef.core__DOT__validReg_8)
                                            ? ((~ ((IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_6) 
                                                   & (~ (IData)(vlSelfRef.core__DOT__producerFire_8)))) 
                                               & (IData)(vlSelfRef.core__DOT__validReg_8))
                                            : (((IData)(vlSelfRef.core__DOT__producerFire_8) 
                                                & (~ (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_6))) 
                                               | (IData)(vlSelfRef.core__DOT__validReg_8))));
    vlSelfRef.core__DOT__validReg_6 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                       && ((IData)(vlSelfRef.core__DOT__validReg_6)
                                            ? ((~ ((IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_3) 
                                                   & (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT___GEN)))) 
                                               & (IData)(vlSelfRef.core__DOT__validReg_6))
                                            : (((IData)(vlSelfRef.core__DOT__Lsram__DOT___GEN) 
                                                & (~ (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_3))) 
                                               | (IData)(vlSelfRef.core__DOT__validReg_6))));
    vlSelfRef.core__DOT__IFU__DOT__ar_request_in_flight 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (
                                                   (~ 
                                                    ((IData)(vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel) 
                                                     | ((IData)(vlSelfRef.core__DOT__IFU__DOT__readyForProducer) 
                                                        & (IData)(vlSelfRef.core__DOT___IFU_io_axi_r_valid_T)))) 
                                                   & ((IData)(vlSelfRef.core__DOT__IFU__DOT___GEN) 
                                                      | (IData)(vlSelfRef.core__DOT__IFU__DOT__ar_request_in_flight))));
    __Vdly__core__DOT__validReg_12 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                      && ((IData)(vlSelfRef.core__DOT__validReg_12)
                                           ? ((~ ((IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_7) 
                                                  & (~ (IData)(vlSelfRef.core__DOT__producerFire_12)))) 
                                              & (IData)(vlSelfRef.core__DOT__validReg_12))
                                           : (((IData)(vlSelfRef.core__DOT__producerFire_12) 
                                               & (~ (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_7))) 
                                              | (IData)(vlSelfRef.core__DOT__validReg_12))));
    vlSelfRef.core__DOT__validReg_11 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                        && ((IData)(vlSelfRef.core__DOT__validReg_11)
                                             ? ((~ 
                                                 ((IData)(vlSelfRef.core__DOT__producerFire_12) 
                                                  & (~ (IData)(vlSelfRef.core__DOT__producerFire_11)))) 
                                                & (IData)(vlSelfRef.core__DOT__validReg_11))
                                             : (((IData)(vlSelfRef.core__DOT__producerFire_11) 
                                                 & (~ (IData)(vlSelfRef.core__DOT__producerFire_12))) 
                                                | (IData)(vlSelfRef.core__DOT__validReg_11))));
    vlSelfRef.core__DOT__validReg_1 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                       && ((IData)(vlSelfRef.core__DOT__validReg_1)
                                            ? ((~ ((IData)(vlSelfRef.core__DOT__consumerFire_1) 
                                                   & (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN)))) 
                                               & (IData)(vlSelfRef.core__DOT__validReg_1))
                                            : (((IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN) 
                                                & (~ (IData)(vlSelfRef.core__DOT__consumerFire_1))) 
                                               | (IData)(vlSelfRef.core__DOT__validReg_1))));
    vlSelfRef.core__DOT__IFU__DOT__validReg = ((1U 
                                                & (~ (IData)(vlSelfRef.reset))) 
                                               && ((IData)(vlSelfRef.core__DOT__IFU__DOT__validReg)
                                                    ? 
                                                   ((~ 
                                                     ((IData)(vlSelfRef.core__DOT__IFU__DOT__consumerFire) 
                                                      & (~ (IData)(vlSelfRef.core__DOT__IFU__DOT__producerFire)))) 
                                                    & (IData)(vlSelfRef.core__DOT__IFU__DOT__validReg))
                                                    : 
                                                   (((IData)(vlSelfRef.core__DOT__IFU__DOT__producerFire) 
                                                     & (~ (IData)(vlSelfRef.core__DOT__IFU__DOT__consumerFire))) 
                                                    | (IData)(vlSelfRef.core__DOT__IFU__DOT__validReg))));
    vlSelfRef.core__DOT__validReg_10 = ((1U & (~ (IData)(vlSelfRef.reset))) 
                                        && ((IData)(vlSelfRef.core__DOT__validReg_10)
                                             ? ((~ 
                                                 ((IData)(vlSelfRef.core__DOT__producerFire_11) 
                                                  & (~ (IData)(vlSelfRef.core__DOT__IFU__DOT__consumerFire)))) 
                                                & (IData)(vlSelfRef.core__DOT__validReg_10))
                                             : (((IData)(vlSelfRef.core__DOT__IFU__DOT__consumerFire) 
                                                 & (~ (IData)(vlSelfRef.core__DOT__producerFire_11))) 
                                                | (IData)(vlSelfRef.core__DOT__validReg_10))));
    vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_strb_REG = 0U;
    if (vlSelfRef.core__DOT__producerFire_11) {
        vlSelfRef.core__DOT__dataReg_11_csr_en = 0U;
        vlSelfRef.core__DOT__dataReg_11_mlen = vlSelfRef.core__DOT___IDU_io_out_bits_mlen;
        vlSelfRef.core__DOT__dataReg_11_rd_en = vlSelfRef.core__DOT___IDU_io_out_bits_rd_en;
        vlSelfRef.core__DOT__dataReg_11_lsu_en = vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en;
        vlSelfRef.core__DOT__dataReg_11_mw_en = vlSelfRef.core__DOT___IDU_io_out_bits_mw_en;
        vlSelfRef.core__DOT__dataReg_11_unsign_en = vlSelfRef.core__DOT___IDU_io_out_bits_unsign_en;
        vlSelfRef.core__DOT__dataReg_11_rs2_en = vlSelfRef.core__DOT___IDU_io_out_bits_rs2_en;
        vlSelfRef.core__DOT__dataReg_11_rs1_data = vlSelfRef.io_debugin1;
        vlSelfRef.core__DOT__dataReg_11_opcode = vlSelfRef.core__DOT___IDU_io_out_bits_opcode;
        vlSelfRef.core__DOT__dataReg_11_rs2_data = vlSelfRef.io_debugin2;
        vlSelfRef.core__DOT__dataReg_11_imm = vlSelfRef.core__DOT__IDU__DOT__casez_tmp;
        vlSelfRef.core__DOT__dataReg_11_pc = vlSelfRef.core__DOT___IDU_io_out_bits_pc;
        vlSelfRef.core__DOT__dataReg_11_auipc_en = 
            (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7));
        vlSelfRef.core__DOT__dataReg_11_jalr_en = (0x3ffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17));
        vlSelfRef.core__DOT__dataReg_11_branch_en = vlSelfRef.core__DOT___IDU_io_out_bits_branch_en;
        vlSelfRef.core__DOT__dataReg_11_jump_en = (0x7fU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18));
        vlSelfRef.core__DOT__dataReg_11_rd_addr = (0x1fU 
                                                   & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                      >> 7U));
    }
    if (vlSelfRef.core__DOT__producerFire) {
        vlSelfRef.core__DOT__dataReg_addr = vlSelfRef.core__DOT__IFU__DOT__pc;
    }
    if (vlSelfRef.core__DOT___LSU_io_out_valid) {
        vlSelfRef.core__DOT__dataReg_13_rd_en = vlSelfRef.core__DOT___LSU_io_out_bits_rd_en;
        vlSelfRef.core__DOT__dataReg_13_rd_data = vlSelfRef.core__DOT___LSU_io_out_bits_rd_data;
        vlSelfRef.core__DOT__dataReg_13_rd_addr = vlSelfRef.core__DOT___LSU_io_out_bits_rd_addr;
    }
    if (vlSelfRef.core__DOT__IFU__DOT__consumerFire) {
        vlSelfRef.core__DOT__dataReg_10_pc = vlSelfRef.io_debugPC;
        vlSelfRef.core__DOT__dataReg_10_inst = vlSelfRef.io_debugInst;
    }
    if (vlSelfRef.core__DOT__Lsram__DOT___GEN) {
        vlSelfRef.core__DOT__dataReg_6_resp = vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_resp;
        vlSelfRef.core__DOT__dataReg_6_data = vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data;
    }
    if ((1U & (~ (((0U != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                   | (IData)(vlSelfRef.core__DOT__LSU__DOT__is_passthrough)) 
                  | (~ (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_7)))))) {
        vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_en 
            = vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_en;
        vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_data 
            = vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_data;
        vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_addr 
            = vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_addr;
        if (vlSelfRef.core__DOT__validReg_12) {
            vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len 
                = vlSelfRef.core__DOT__dataReg_12_mem_len;
            vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata 
                = vlSelfRef.core__DOT__dataReg_12_mem_wdata;
            vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en 
                = vlSelfRef.core__DOT__dataReg_12_unsign_en;
        } else {
            vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len 
                = vlSelfRef.core__DOT___EXU_io_out_bits_mem_len;
            vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata 
                = vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata;
            vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en 
                = vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en;
        }
    }
    if (vlSelfRef.core__DOT__IFU__DOT__producerFire) {
        vlSelfRef.core__DOT__IFU__DOT__dataReg_pc = vlSelfRef.core__DOT__IFU__DOT__pc_in_flight;
        vlSelfRef.core__DOT__IFU__DOT__dataReg_inst 
            = vlSelfRef.core__DOT____Vcellinp__IFU__io_axi_r_bits_data;
    }
    if (vlSelfRef.core__DOT__producerFire_5) {
        vlSelfRef.core__DOT__dataReg_5_addr = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr;
    }
    if (vlSelfRef.core__DOT__Fsram__DOT___GEN) {
        vlSelfRef.core__DOT__dataReg_1_resp = vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_resp;
        vlSelfRef.core__DOT__dataReg_1_data = vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_data;
    }
    if (((IData)(vlSelfRef.core__DOT__Fsram__DOT__w_state) 
         & (IData)(vlSelfRef.core__DOT__Fsram__DOT___write_backend_done))) {
        vlSelfRef.core__DOT__Fsram__DOT__b_bits_reg_resp = 0U;
    }
    if (((IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state) 
         & (IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_done))) {
        vlSelfRef.core__DOT__Lsram__DOT__b_bits_reg_resp = 0U;
    }
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__RF__DOT__rf_31 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_30 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_29 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_28 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_11 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_10 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_6 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_9 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_4 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_7 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_2 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_5 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_0 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_3 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_1 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_8 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_12 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_13 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_14 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_15 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_16 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_17 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_18 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_19 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_20 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_21 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_22 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_23 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_24 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_25 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_26 = 0ULL;
        vlSelfRef.core__DOT__RF__DOT__rf_27 = 0ULL;
        __Vdly__core__DOT__Fsram__DOT__w_state = 0U;
        __Vdly__core__DOT__Fsram__DOT__b_valid_reg = 0U;
        vlSelfRef.core__DOT__Fsram__DOT__w_state = __Vdly__core__DOT__Fsram__DOT__w_state;
        vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg 
            = __Vdly__core__DOT__Fsram__DOT__b_valid_reg;
        __Vdly__core__DOT__Lsram__DOT__w_state = 0U;
        __Vdly__core__DOT__Lsram__DOT__b_valid_reg = 0U;
    } else {
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x1fU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_31 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x1eU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_30 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x1dU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_29 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x1cU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_28 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0xbU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_11 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0xaU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_10 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (6U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_6 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (9U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_9 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (4U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_4 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (7U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_7 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (2U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_2 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (5U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_5 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (~ (IData)((0U != (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))))) {
            vlSelfRef.core__DOT__RF__DOT__rf_0 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (3U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_3 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (1U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_1 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (8U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_8 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0xcU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_12 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0xdU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_13 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0xeU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_14 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0xfU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_15 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x10U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_16 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x11U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_17 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x12U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_18 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x13U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_19 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x14U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_20 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x15U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_21 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x16U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_22 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x17U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_23 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x18U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_24 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x19U == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_25 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x1aU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_26 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (((IData)(vlSelfRef.core__DOT__RF__DOT___GEN) 
             & (0x1bU == (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)))) {
            vlSelfRef.core__DOT__RF__DOT__rf_27 = (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data));
        }
        if (vlSelfRef.core__DOT__Fsram__DOT__w_state) {
            __Vdly__core__DOT__Fsram__DOT__w_state 
                = ((~ ((IData)(vlSelfRef.core__DOT__Fsram__DOT__w_state) 
                       & (IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN_0))) 
                   & (IData)(vlSelfRef.core__DOT__Fsram__DOT__w_state));
            __Vdly__core__DOT__Fsram__DOT__b_valid_reg 
                = ((~ (IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN_0)) 
                   & ((IData)(vlSelfRef.core__DOT__Fsram__DOT___write_backend_done) 
                      | (IData)(vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg)));
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
                = (((IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T) 
                    & (IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T_1)) 
                   | (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state));
        }
    }
    vlSelfRef.core__DOT__Lsram__DOT__w_state = __Vdly__core__DOT__Lsram__DOT__w_state;
    vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg = __Vdly__core__DOT__Lsram__DOT__b_valid_reg;
    vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_strb_REG 
        = ((IData)(vlSelfRef.core__DOT__validReg_9)
            ? (IData)(vlSelfRef.core__DOT__dataReg_9_strb)
            : (IData)(vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb));
    if (((IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state) 
         & (IData)(vlSelfRef.core__DOT__Lsram__DOT___read_backend_done))) {
        vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_resp = 0U;
        vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data 
            = vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg;
    }
    if (vlSelfRef.core__DOT__IFU__DOT___GEN) {
        vlSelfRef.core__DOT__IFU__DOT__pc_in_flight 
            = vlSelfRef.core__DOT__IFU__DOT__pc;
    }
    if (((IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state) 
         & (IData)(vlSelfRef.core__DOT__Fsram__DOT___read_backend_done))) {
        vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_resp = 0U;
        vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_data 
            = vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg;
    }
    vlSelfRef.core__DOT__Fsram__DOT___GEN_0 = vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg;
    if (vlSelfRef.core__DOT__producerFire_9) {
        vlSelfRef.core__DOT__dataReg_9_strb = vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb;
    }
    if (vlSelfRef.core__DOT__producerFire_12) {
        vlSelfRef.core__DOT__dataReg_12_rd_en = vlSelfRef.core__DOT___EXU_io_out_bits_rd_en;
        vlSelfRef.core__DOT__dataReg_12_rd_addr = vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr;
        vlSelfRef.core__DOT__dataReg_12_rd_data = vlSelfRef.io_debugout1;
        vlSelfRef.core__DOT__dataReg_12_mem_ren = vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren;
        vlSelfRef.core__DOT__dataReg_12_mem_wen = vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen;
        vlSelfRef.core__DOT__dataReg_12_mem_len = vlSelfRef.core__DOT___EXU_io_out_bits_mem_len;
        vlSelfRef.core__DOT__dataReg_12_mem_wdata = vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata;
        vlSelfRef.core__DOT__dataReg_12_unsign_en = vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en;
    }
    if (vlSelfRef.reset) {
        __Vdly__core__DOT__Lsram__DOT__r_state = 0U;
        __Vdly__core__DOT__Lsram__DOT__r_valid_reg = 0U;
        __Vdly__core__DOT__IFU__DOT__pc = 0x80000000U;
        __Vdly__core__DOT__Fsram__DOT__r_state = 0U;
        __Vdly__core__DOT__Fsram__DOT__r_valid_reg = 0U;
    } else {
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
        if (vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel) {
            __Vdly__core__DOT__IFU__DOT__pc = ((IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jalr_en)
                                                ? vlSelfRef.core__DOT__EXU__DOT___alu_io_out
                                                : (vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc 
                                                   + (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm)));
        } else if (vlSelfRef.core__DOT__IFU__DOT___GEN) {
            __Vdly__core__DOT__IFU__DOT__pc = ((IData)(4U) 
                                               + vlSelfRef.core__DOT__IFU__DOT__pc);
        }
        if (vlSelfRef.core__DOT__Fsram__DOT__r_state) {
            __Vdly__core__DOT__Fsram__DOT__r_state 
                = ((~ ((IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state) 
                       & (IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN))) 
                   & (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state));
            __Vdly__core__DOT__Fsram__DOT__r_valid_reg 
                = ((~ (IData)(vlSelfRef.core__DOT__Fsram__DOT___GEN)) 
                   & ((IData)(vlSelfRef.core__DOT__Fsram__DOT___read_backend_done) 
                      | (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg)));
        } else {
            __Vdly__core__DOT__Fsram__DOT__r_state 
                = ((IData)(vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T) 
                   | (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state));
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__Fsram__DOT___write_backend_done = 0U;
    } else {
        vlSelfRef.core__DOT__Fsram__DOT___write_backend_done 
            = vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_en_REG;
        if (vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_en_REG) {
            Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__write_backend__DOT__mem_write_TOP(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_aw_addr_REG, vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_data_REG);
            vlSelfRef.core__DOT__Fsram__DOT___write_backend_done = 1U;
        }
    }
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__Lsram__DOT___write_backend_done = 0U;
    } else {
        vlSelfRef.core__DOT__Lsram__DOT___write_backend_done 
            = vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_en_REG;
        if (vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_en_REG) {
            Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__write_backend__DOT__mem_write_TOP(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_aw_addr_REG, vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_data_REG);
            vlSelfRef.core__DOT__Lsram__DOT___write_backend_done = 1U;
        }
    }
    vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_data_REG 
        = ((IData)(vlSelfRef.core__DOT__validReg_9)
            ? vlSelfRef.core__DOT__dataReg_9_data : vlSelfRef.core__DOT___LSU_io_axi_w_bits_data);
    if (vlSelfRef.core__DOT__producerFire_9) {
        vlSelfRef.core__DOT__dataReg_9_data = vlSelfRef.core__DOT___LSU_io_axi_w_bits_data;
    }
    vlSelfRef.core__DOT__Lsram__DOT__r_state = __Vdly__core__DOT__Lsram__DOT__r_state;
    vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg = __Vdly__core__DOT__Lsram__DOT__r_valid_reg;
    vlSelfRef.core__DOT__IFU__DOT__pc = __Vdly__core__DOT__IFU__DOT__pc;
    vlSelfRef.core__DOT__Fsram__DOT__r_state = __Vdly__core__DOT__Fsram__DOT__r_state;
    vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg = __Vdly__core__DOT__Fsram__DOT__r_valid_reg;
    vlSelfRef.io_debugmemdata = ((IData)(vlSelfRef.core__DOT__validReg_6)
                                  ? vlSelfRef.core__DOT__dataReg_6_data
                                  : vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data);
    vlSelfRef.core__DOT__Lsram__DOT___read_backend_done 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T));
    vlSelfRef.core__DOT___IFU_io_axi_r_valid_T = ((IData)(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg) 
                                                  | (IData)(vlSelfRef.core__DOT__validReg_1));
    vlSelfRef.core__DOT__Fsram__DOT___read_backend_done 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && (IData)(vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T));
    vlSelfRef.core__DOT____Vcellinp__IFU__io_axi_r_bits_data 
        = ((IData)(vlSelfRef.core__DOT__validReg_1)
            ? vlSelfRef.core__DOT__dataReg_1_data : vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_data);
    if (vlSelfRef.core__DOT__IFU__DOT__validReg) {
        vlSelfRef.io_debugPC = vlSelfRef.core__DOT__IFU__DOT__dataReg_pc;
        vlSelfRef.io_debugInst = vlSelfRef.core__DOT__IFU__DOT__dataReg_inst;
    } else {
        vlSelfRef.io_debugPC = vlSelfRef.core__DOT__IFU__DOT__pc_in_flight;
        vlSelfRef.io_debugInst = vlSelfRef.core__DOT____Vcellinp__IFU__io_axi_r_bits_data;
    }
    vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_en_REG = 0U;
    vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_aw_addr_REG = 0U;
    vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_data_REG = 0U;
    vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_en_REG 
        = ((1U & (~ (IData)(vlSelfRef.reset))) && ((IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T) 
                                                   & (IData)(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T_1)));
    vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_aw_addr_REG 
        = ((IData)(vlSelfRef.core__DOT__validReg_7)
            ? vlSelfRef.core__DOT__dataReg_7_addr : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr);
    if (vlSelfRef.core__DOT__validReg_10) {
        vlSelfRef.core__DOT___IDU_io_out_bits_pc = vlSelfRef.core__DOT__dataReg_10_pc;
        vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
            = vlSelfRef.core__DOT__dataReg_10_inst;
    } else {
        vlSelfRef.core__DOT___IDU_io_out_bits_pc = vlSelfRef.io_debugPC;
        vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
            = vlSelfRef.io_debugInst;
    }
    vlSelfRef.core__DOT__validReg_9 = __Vdly__core__DOT__validReg_9;
    vlSelfRef.core__DOT__validReg_7 = __Vdly__core__DOT__validReg_7;
    if (vlSelfRef.core__DOT__producerFire_7) {
        vlSelfRef.core__DOT__dataReg_7_addr = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr;
    }
    if ((1U & (~ (((0U != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                   | (IData)(vlSelfRef.core__DOT__LSU__DOT__is_passthrough)) 
                  | (~ (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_7)))))) {
        vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr 
            = ((IData)(vlSelfRef.core__DOT__validReg_12)
                ? vlSelfRef.core__DOT__dataReg_12_mem_addr
                : vlSelfRef.core__DOT__EXU__DOT___alu_io_out);
    }
    if (vlSelfRef.reset) {
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg = 0U;
        vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg = 0U;
        vlSelfRef.core__DOT__LSU__DOT__state = 0U;
    } else {
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg 
            = vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb;
        vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg 
            = vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb;
        if (vlSelfRef.core__DOT__LSU__DOT__io_in_ready_0) {
            if (vlSelfRef.core__DOT__LSU__DOT__is_passthrough) {
                vlSelfRef.core__DOT__LSU__DOT__state = 0U;
            } else if (vlSelfRef.core__DOT__LSU__DOT___GEN_7) {
                if (vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_ren) {
                    vlSelfRef.core__DOT__LSU__DOT__state = 1U;
                } else if (vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_wen) {
                    vlSelfRef.core__DOT__LSU__DOT__state = 3U;
                }
            }
        } else if (vlSelfRef.core__DOT__LSU__DOT___GEN_1) {
            if (((IData)(vlSelfRef.core__DOT__readyForProducer_5) 
                 & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0))) {
                vlSelfRef.core__DOT__LSU__DOT__state = 2U;
            }
        } else if (vlSelfRef.core__DOT__LSU__DOT___GEN_2) {
            if (vlSelfRef.core__DOT__LSU__DOT___GEN_3) {
                vlSelfRef.core__DOT__LSU__DOT__state = 0U;
            }
        } else if (vlSelfRef.core__DOT__LSU__DOT___GEN_4) {
            if ((((IData)(vlSelfRef.core__DOT__readyForProducer_7) 
                  & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0)) 
                 & (IData)(vlSelfRef.core__DOT__readyForProducer_9))) {
                vlSelfRef.core__DOT__LSU__DOT__state = 4U;
            }
        } else if (((IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_5) 
                    & (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_6))) {
            vlSelfRef.core__DOT__LSU__DOT__state = 0U;
        }
    }
    if (vlSelfRef.core__DOT__producerFire_12) {
        vlSelfRef.core__DOT__dataReg_12_mem_addr = vlSelfRef.core__DOT__EXU__DOT___alu_io_out;
    }
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42 
        = (IData)((0x40000000U == (0xfe000000U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52 
        = ((2U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                  >> 0xcU)) | (1U & (~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                        >> 0xeU))));
    vlSelfRef.core__DOT__RF__DOT__casez_tmp = ((0x80000U 
                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                ? (
                                                   (0x40000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_31
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_30)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_29
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_28))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_27
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_26)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_25
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_24)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_23
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_22)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_21
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_20))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_19
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_18)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_17
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_16))))
                                                : (
                                                   (0x40000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_15
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_14)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_13
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_12))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_11
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_10)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_9
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_8)))
                                                    : 
                                                   ((0x20000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_7
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_6)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_5
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_4))
                                                     : 
                                                    ((0x10000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_3
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_2)
                                                      : 
                                                     ((0x8000U 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                       ? vlSelfRef.core__DOT__RF__DOT__rf_1
                                                       : vlSelfRef.core__DOT__RF__DOT__rf_0)))));
    vlSelfRef.core__DOT__RF__DOT__casez_tmp_0 = ((0x1000000U 
                                                  & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                  ? 
                                                 ((0x800000U 
                                                   & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_31
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_30)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_29
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_28))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_27
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_26)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_25
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_24)))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_23
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_22)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_21
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_20))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_19
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_18)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_17
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_16))))
                                                  : 
                                                 ((0x800000U 
                                                   & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                   ? 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_15
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_14)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_13
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_12))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_11
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_10)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_9
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_8)))
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_7
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_6)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_5
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_4))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_3
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_2)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)
                                                      ? vlSelfRef.core__DOT__RF__DOT__rf_1
                                                      : vlSelfRef.core__DOT__RF__DOT__rf_0)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12 
        = (((((0x1000U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          << 0xcU)) | (0x800U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                 << 0xaU))) 
             | ((0x400U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                               >> 2U)) << 0xaU)) | 
                (0x200U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                               >> 3U)) << 9U)))) | 
            ((0x100U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        << 4U)) | ((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                             << 2U)) 
                                   | (0x40U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 6U)) 
                                               << 6U))))) 
           | (((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 0x1aU)) << 5U)) | (
                                                   (0x10U 
                                                    & ((~ 
                                                        (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 0x1bU)) 
                                                       << 4U)) 
                                                   | (8U 
                                                      & ((~ 
                                                          (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                           >> 0x1cU)) 
                                                         << 3U)))) 
              | ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                            >> 0x1dU)) << 2U)) | ((2U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                        >> 0x1eU)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 0x1fU)))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_6 
        = (((0x20U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                      << 5U)) | ((0x10U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 3U)) 
                                 | (8U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                          << 1U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 3U)) << 2U)) | ((2U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 3U)) 
                                            | (1U & 
                                               (~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 6U))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          >> 5U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 6U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                            >> 0xcU)) << 1U)) | (1U 
                                                 & (~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 0xdU))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7 
        = ((((0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 6U)) | (0x20U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 4U))) 
            | ((0x10U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         << 2U)) | (8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                              >> 3U)) 
                                          << 3U)))) 
           | ((4U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                     >> 2U)) | ((2U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           >> 5U)) 
                                       << 1U)) | (1U 
                                                  & (~ 
                                                     (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                      >> 6U))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_35 
        = (IData)((0x6000U == (0x6000U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_38 
        = (IData)((0x4000U == (0x6000U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                      >> 1U)) | (4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           >> 5U)) 
                                       << 2U))) | (
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 6U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 0xdU)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          >> 4U)) << 3U)) | (4U & (
                                                   (~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 5U)) 
                                                   << 2U))) 
              | ((2U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                            >> 6U)) << 1U)) | (1U & 
                                               (~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 0xdU))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        >> 5U)) | (1U & (~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                            >> 0xdU))))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_39 
        = ((((0x100U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        << 8U)) | ((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                             << 6U)) 
                                   | (0x40U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 2U)) 
                                               << 6U)))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 3U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 4U)) 
                                                   << 4U)))) 
           | (((8U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                      >> 2U)) | (4U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                       >> 4U))) | (
                                                   (2U 
                                                    & ((~ 
                                                        (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 0xcU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                         >> 0xeU)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27 
        = (IData)((0U == (0x6000U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | (((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          >> 4U)) << 3U)) | (4U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 3U))) 
              | ((2U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        >> 5U)) | (1U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                         >> 0xeU)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18 
        = ((((0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 6U)) | (0x20U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 4U))) 
            | ((0x10U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         << 2U)) | (8U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
           | ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 4U)) << 2U)) | ((2U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                >> 6U)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50 
        = ((2U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                      >> 0xdU)) << 1U)) | (1U & (~ 
                                                 (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  >> 0xeU))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51 
        = (((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          >> 0x19U)) << 5U)) | ((0x10U 
                                                 & ((~ 
                                                     (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                      >> 0x1aU)) 
                                                    << 4U)) 
                                                | (8U 
                                                   & ((~ 
                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                        >> 0x1bU)) 
                                                      << 3U)))) 
           | ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 0x1cU)) << 2U)) | ((2U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 0x1dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                      >> 0x1fU))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49 
        = ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                      >> 6U)) << 2U)) | ((2U & ((~ 
                                                 (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  >> 0xcU)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 0xeU)))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32 
        = (IData)((0U == (0xfc000000U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)));
    vlSelfRef.io_debugin1 = ((0U != (0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                              >> 0xfU)))
                              ? (IData)(vlSelfRef.core__DOT__RF__DOT__casez_tmp)
                              : 0U);
    vlSelfRef.io_debugin2 = ((0U != (0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                              >> 0x14U)))
                              ? (IData)(vlSelfRef.core__DOT__RF__DOT__casez_tmp_0)
                              : 0U);
    vlSelfRef.core__DOT___IDU_io_out_bits_branch_en 
        = ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
           | (0x1ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_39)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_44 
        = ((vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
            >> 0xcU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 4U)) << 3U)) | ((4U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 3U)) 
                                            | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17 
        = ((((0x200U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        << 9U)) | ((0x100U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                              << 7U)) 
                                   | (0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                               << 5U)))) 
            | ((0x40U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 3U)) << 6U)) | (0x20U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 4U)) 
                                                   << 5U)))) 
           | ((0x10U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        >> 1U)) | ((8U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                          >> 3U)) | 
                                   ((4U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                               >> 0xcU)) 
                                           << 2U)) 
                                    | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50)))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11 
        = (((((0x8000U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          << 0xfU)) | (0x4000U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  << 0xdU))) 
             | ((0x2000U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                >> 2U)) << 0xdU)) | 
                (0x1000U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                >> 3U)) << 0xcU)))) 
            | (((0x800U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                           << 7U)) | (0x400U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                << 5U))) 
               | ((0x200U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                 >> 6U)) << 9U)) | 
                  (0x100U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                 >> 0xcU)) << 8U))))) 
           | ((0x80U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                            >> 0xdU)) << 7U)) | ((0x40U 
                                                  & ((~ 
                                                      (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                       >> 0xeU)) 
                                                     << 6U)) 
                                                 | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40 
        = (((((0x8000U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                          << 0xfU)) | (0x4000U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  << 0xdU))) 
             | ((0x2000U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                >> 2U)) << 0xdU)) | 
                (0x1000U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                >> 3U)) << 0xcU)))) 
            | (((0x800U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                           << 7U)) | (0x400U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                << 5U))) 
               | ((0x200U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                 >> 6U)) << 9U)) | 
                  (0x100U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 4U))))) | ((0x80U & 
                                            ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                 >> 0xdU)) 
                                             << 7U)) 
                                           | ((0x40U 
                                               & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  >> 8U)) 
                                              | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51))));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_2 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 4U)) << 3U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3 
        = ((((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                       << 7U)) | (0x40U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           << 5U))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 2U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 3U)) 
                                                   << 4U)))) 
           | ((8U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                         >> 5U)) << 3U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49)));
    vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8 
        = ((((0x100U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        << 8U)) | ((0x80U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                             << 6U)) 
                                   | (0x40U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 2U)) 
                                               << 6U)))) 
            | ((0x20U & ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                             >> 3U)) << 5U)) | (0x10U 
                                                & ((~ 
                                                    (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                     >> 4U)) 
                                                   << 4U)))) 
           | ((8U & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                     >> 2U)) | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49)));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47 
        = ((vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
            >> 0x19U) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33 
        = ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
               >> 0x19U)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40 
        = ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38)) 
           | (0xffffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40)));
    vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en = 
        ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
         | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_2)) 
            | (IData)(((3U == (0x5fU & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                       & (3U == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50))))));
    vlSelfRef.core__DOT___IDU_io_out_bits_rd_en = (
                                                   (0xffU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                   | ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                         | ((IData)(
                                                                    ((0xfU 
                                                                      == 
                                                                      (0x107fU 
                                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                     & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27))) 
                                                            | ((0x3fU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_6)) 
                                                               | ((0xffffU 
                                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11)) 
                                                                  | ((0x1fffU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                                                     | ((0x3ffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)) 
                                                                        | ((0x7fU 
                                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                           | ((0xffU 
                                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                              | (0xffffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40))))))))))));
    vlSelfRef.core__DOT___IDU_io_out_bits_mw_en = (
                                                   (0x1ffU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                                   | (IData)(
                                                             ((0x23U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27))));
    vlSelfRef.core__DOT__IDU__DOT__casez_tmp = (((0x3fU 
                                                  == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_6)) 
                                                 | (0x7fU 
                                                    == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)))
                                                 ? 
                                                (((0x1ffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                                  | ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                     | (0xffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))
                                                  ? 
                                                 ((1U 
                                                   & ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                               | ((IData)(
                                                                          (0x63U 
                                                                           == 
                                                                           (0x707bU 
                                                                            & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                                  | ((0x7fU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                     | ((0xffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | (0xffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))))))))
                                                   ? (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                         >> 0x14U))))
                                                   : (QData)((IData)(
                                                                     (0x3fU 
                                                                      & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                         >> 0x14U)))))
                                                  : 
                                                 ((1U 
                                                   & ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                               | ((IData)(
                                                                          (0x63U 
                                                                           == 
                                                                           (0x707bU 
                                                                            & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                                  | ((0x7fU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                     | ((0xffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | (0xffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))))))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     (((0xff000U 
                                                                        & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst) 
                                                                       | (0x800U 
                                                                          & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                             >> 9U))) 
                                                                      | (0x7feU 
                                                                         & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                            >> 0x14U))))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))))))
                                                 : 
                                                (((0x1ffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
                                                  | ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                                     | (0xffU 
                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))
                                                  ? 
                                                 ((1U 
                                                   & ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                               | ((IData)(
                                                                          (0x63U 
                                                                           == 
                                                                           (0x707bU 
                                                                            & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                                  | ((0x7fU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                     | ((0xffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | (0xffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))))))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                               >> 7U)))))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                            >> 7U)))))))
                                                  : 
                                                 ((1U 
                                                   & ((0xffU 
                                                       == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                      | ((0xffU 
                                                          == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                                                         | ((0xffU 
                                                             == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                            | ((0xffU 
                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14)) 
                                                               | ((IData)(
                                                                          (0x63U 
                                                                           == 
                                                                           (0x707bU 
                                                                            & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                                  | ((0x7fU 
                                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                     | ((0xffU 
                                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                                                        | (0xffU 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38))))))))))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                                      >> 0x14U))))
                                                   : 0ULL)));
    vlSelfRef.core__DOT___IDU_io_out_bits_unsign_en 
        = (1U & (IData)(((3U == (0xfU & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                         & ((IData)((0x3010U == (0x7070U 
                                                 & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                            | ((IData)(((0x3030U == 
                                         (0x7070U & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                        & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32))) 
                               | ((IData)(((0U == (0x70U 
                                                   & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_38))) 
                                  | ((IData)(((0x60U 
                                               == (0x70U 
                                                   & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_35))) 
                                     | (IData)(((0x30U 
                                                 == 
                                                 (0x70U 
                                                  & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                & ((IData)(
                                                           ((0x2000U 
                                                             == 
                                                             (0x6000U 
                                                              & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                            & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47))) 
                                                   | (IData)(
                                                             ((0x5000U 
                                                               == 
                                                               (0x5000U 
                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47)))))))))))));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34 
        = ((vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
            >> 0xeU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_36 
        = ((~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
               >> 0xeU)) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33));
    vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_41 
        = ((vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
            >> 0xdU) & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33));
    vlSelfRef.core__DOT__validReg_12 = __Vdly__core__DOT__validReg_12;
    if (vlSelfRef.core__DOT__validReg_11) {
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc 
            = vlSelfRef.core__DOT__dataReg_11_pc;
        vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr 
            = (0x1fU & (IData)(vlSelfRef.core__DOT__dataReg_11_rd_addr));
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jump_en 
            = vlSelfRef.core__DOT__dataReg_11_jump_en;
        vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata 
            = vlSelfRef.core__DOT__dataReg_11_rs2_data;
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_branch_en 
            = vlSelfRef.core__DOT__dataReg_11_branch_en;
    } else {
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc 
            = vlSelfRef.core__DOT___IDU_io_out_bits_pc;
        vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr 
            = (0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                        >> 7U));
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jump_en 
            = (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18));
        vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata 
            = vlSelfRef.io_debugin2;
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_branch_en 
            = vlSelfRef.core__DOT___IDU_io_out_bits_branch_en;
    }
    vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
        = (((IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jump_en) 
            | (((IData)(vlSelfRef.core__DOT__validReg_11)
                 ? (IData)(vlSelfRef.core__DOT__dataReg_11_auipc_en)
                 : (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7))) 
               | (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_branch_en)))
            ? vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc
            : ((IData)(vlSelfRef.core__DOT__validReg_11)
                ? vlSelfRef.core__DOT__dataReg_11_rs1_data
                : vlSelfRef.io_debugin1));
    vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jalr_en 
        = ((IData)(vlSelfRef.core__DOT__validReg_11)
            ? (IData)(vlSelfRef.core__DOT__dataReg_11_jalr_en)
            : (0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)));
    vlSelfRef.core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_0_1 
        = ((IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jalr_en) 
           | (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jump_en));
    vlSelfRef.core__DOT___IDU_io_out_bits_rs2_en = 
        ((0x1ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8)) 
         | ((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9)) 
            | ((0xffffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11)) 
               | ((0x1fffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                  | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40)))));
    vlSelfRef.core__DOT___IDU_io_out_bits_mlen = (((IData)(
                                                           ((3U 
                                                             == 
                                                             (0x105fU 
                                                              & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                            & (3U 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52)))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      & (((IData)(
                                                                  (0x1003U 
                                                                   == 
                                                                   (0x307fU 
                                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                          | ((IData)(
                                                                     ((3U 
                                                                       == 
                                                                       (0x5fU 
                                                                        & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                      & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_44))) 
                                                             | (IData)(
                                                                       ((3U 
                                                                         == 
                                                                         (0x105fU 
                                                                          & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                        & (3U 
                                                                           == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52)))))) 
                                                         << 2U)) 
                                                     | (3U 
                                                        & (- (IData)((IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en))))));
    vlSelfRef.core__DOT___IDU_io_out_bits_opcode = 
        (((8U & (((IData)(((0x63U == (0x7fU & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                           & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27))) 
                  | ((IData)(((0x1033U == (0x307fU 
                                           & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                              & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33))) 
                     | ((IData)((0x4013U == (0x507fU 
                                             & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                        | ((IData)(((0x33U == (0x7fU 
                                               & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                    & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34))) 
                           | ((0xffffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                              | (IData)(((0x13U == 
                                          (0x7fU & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                         & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_35)))))))) 
                 << 3U)) | (((IData)(((0x1033U == (0x107fU 
                                                   & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                      & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_36))) 
                             | ((IData)(((0x13U == 
                                          (0x7fU & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                         & (3U == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52)))) 
                                | ((IData)(((0x2033U 
                                             == (0x207fU 
                                                 & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                            & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_36))) 
                                   | ((IData)(((0x13U 
                                                == 
                                                (0x107fU 
                                                 & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                               & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_38))) 
                                      | ((IData)(((0x33U 
                                                   == 
                                                   (0x207fU 
                                                    & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                  & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34))) 
                                         | (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40)))))) 
                            << 2U)) | ((((0xffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                                         | ((IData)(
                                                    ((0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                     & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_41))) 
                                            | ((0xffU 
                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_38)) 
                                               | ((0xffffU 
                                                   == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_40)) 
                                                  | (IData)(
                                                            ((0x33U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                             & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42))))))) 
                                        << 1U) | (1U 
                                                  & ((0xffU 
                                                      == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T)) 
                                                     | ((0xffU 
                                                         == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_2)) 
                                                        | ((0xffU 
                                                            == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3)) 
                                                           | ((0x7fU 
                                                               == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7)) 
                                                              | ((IData)(
                                                                         ((0x33U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                          & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_36))) 
                                                                 | ((0x3ffU 
                                                                     == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17)) 
                                                                    | ((0x7fU 
                                                                        == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                                                                       | ((IData)(
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_44))) 
                                                                          | ((IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x307fU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst))) 
                                                                             | ((IData)(
                                                                                ((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                                & (3U 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52)))) 
                                                                                | ((IData)(
                                                                                ((0x33U 
                                                                                == 
                                                                                (0x107fU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_41))) 
                                                                                | ((0x1ffU 
                                                                                == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_39)) 
                                                                                | (IData)(
                                                                                ((0x5033U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst)) 
                                                                                & (IData)(vlSelfRef.core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42))))))))))))))))));
    if (vlSelfRef.core__DOT__validReg_11) {
        vlSelfRef.core__DOT___EXU_io_out_bits_rd_en 
            = vlSelfRef.core__DOT__dataReg_11_rd_en;
        vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen 
            = vlSelfRef.core__DOT__dataReg_11_mw_en;
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm 
            = vlSelfRef.core__DOT__dataReg_11_imm;
        vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en 
            = vlSelfRef.core__DOT__dataReg_11_unsign_en;
        vlSelfRef.core__DOT___EXU_io_out_bits_mem_len 
            = vlSelfRef.core__DOT__dataReg_11_mlen;
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode 
            = vlSelfRef.core__DOT__dataReg_11_opcode;
    } else {
        vlSelfRef.core__DOT___EXU_io_out_bits_rd_en 
            = vlSelfRef.core__DOT___IDU_io_out_bits_rd_en;
        vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen 
            = vlSelfRef.core__DOT___IDU_io_out_bits_mw_en;
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm 
            = vlSelfRef.core__DOT__IDU__DOT__casez_tmp;
        vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en 
            = vlSelfRef.core__DOT___IDU_io_out_bits_unsign_en;
        vlSelfRef.core__DOT___EXU_io_out_bits_mem_len 
            = vlSelfRef.core__DOT___IDU_io_out_bits_mlen;
        vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode 
            = vlSelfRef.core__DOT___IDU_io_out_bits_opcode;
    }
    vlSelfRef.io_debugmemaddr = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr;
    if ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))) {
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb 
            = (0xfU & ((IData)(1U) << (3U & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr)));
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_data 
            = ((0xffU & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata) 
               << (0x18U & (vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr 
                            << 3U)));
    } else if ((1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))) {
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb 
            = (0xfU & ((IData)(3U) << (3U & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr)));
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_data 
            = ((0xffffU & vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata) 
               << (0x18U & (vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr 
                            << 3U)));
    } else {
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb 
            = (0xfU & (- (IData)((2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len)))));
        vlSelfRef.core__DOT___LSU_io_axi_w_bits_data 
            = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata;
    }
    vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren = 
        (((IData)(vlSelfRef.core__DOT__validReg_11)
           ? (IData)(vlSelfRef.core__DOT__dataReg_11_lsu_en)
           : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en)) 
         ^ (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen));
    vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2 
        = (((IData)(vlSelfRef.core__DOT__validReg_11)
             ? (IData)(vlSelfRef.core__DOT__dataReg_11_rs2_en)
             : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_rs2_en))
            ? vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata
            : (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm));
    vlSelfRef.core__DOT__readyForProducer_5 = (1U & 
                                               ((~ (IData)(vlSelfRef.core__DOT__validReg_5)) 
                                                | (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state))));
    vlSelfRef.core__DOT__readyForProducer_7 = (1U & 
                                               ((~ (IData)(vlSelfRef.core__DOT__validReg_7)) 
                                                | (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state))));
    vlSelfRef.core__DOT__readyForProducer_9 = (1U & 
                                               ((~ (IData)(vlSelfRef.core__DOT__validReg_9)) 
                                                | (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state))));
    vlSelfRef.core__DOT__EXU__DOT___alu_io_out = ((5U 
                                                   == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                   ? 
                                                  VL_MODDIV_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
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
                                                     == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                     ? 
                                                    (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                     * vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, 
                                                                    (0x1fU 
                                                                     & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                      : 
                                                     ((0xeU 
                                                       == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                       ? 
                                                      (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                       : 
                                                      ((0xdU 
                                                        == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                        ? 
                                                       (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                         ? 
                                                        (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                         ^ vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                          ? 
                                                         (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                          | vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                          : 
                                                         ((0xaU 
                                                           == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                           ? 
                                                          (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                           & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                           : 
                                                          ((9U 
                                                            == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                            ? 
                                                           (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                            != vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                             ? 
                                                            (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                             == vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                              ? 
                                                             ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en)
                                                               ? 
                                                              (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                               >= vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                               : 
                                                              VL_GTES_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                              : 
                                                             ((7U 
                                                               == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                               ? 
                                                              ((IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en)
                                                                ? 
                                                               (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                < vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                : 
                                                               VL_LTS_III(32, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1, vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2))
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                                ? 
                                                               (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                - vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode))
                                                                 ? 
                                                                (vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1 
                                                                 + vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)
                                                                 : 0U)))))))))))))));
    vlSelfRef.core__DOT__LSU__DOT__io_in_ready_0 = 
        (0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_1 = (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_2 = (2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_4 = (3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    vlSelfRef.core__DOT__LSU__DOT___GEN_5 = (4U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state));
    if (vlSelfRef.core__DOT__validReg_12) {
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_addr 
            = vlSelfRef.core__DOT__dataReg_12_rd_addr;
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_en 
            = vlSelfRef.core__DOT__dataReg_12_rd_en;
    } else {
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_addr 
            = vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr;
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_en 
            = vlSelfRef.core__DOT___EXU_io_out_bits_rd_en;
    }
    vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0 
        = ((0U != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
           & (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT___EXU_io_in_ready = (1U & (
                                                   (~ (IData)(vlSelfRef.core__DOT__validReg_12)) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))));
    vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_3 
        = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
           | (1U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.io_debugout1 = ((IData)(vlSelfRef.core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_0_1)
                               ? ((IData)(4U) + vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc)
                               : vlSelfRef.core__DOT__EXU__DOT___alu_io_out);
    if (vlSelfRef.core__DOT__validReg_12) {
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_wen 
            = vlSelfRef.core__DOT__dataReg_12_mem_wen;
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_ren 
            = vlSelfRef.core__DOT__dataReg_12_mem_ren;
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_data 
            = vlSelfRef.core__DOT__dataReg_12_rd_data;
    } else {
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_wen 
            = vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen;
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_ren 
            = vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren;
        vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_data 
            = vlSelfRef.io_debugout1;
    }
    vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel = (((IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_branch_en) 
                                                  & (0U 
                                                     != vlSelfRef.core__DOT__EXU__DOT___alu_io_out)) 
                                                 | (IData)(vlSelfRef.core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_0_1));
    vlSelfRef.core__DOT__producerFire_5 = ((IData)(vlSelfRef.core__DOT__readyForProducer_5) 
                                           & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0));
    vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state)) 
           & ((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0) 
              | (IData)(vlSelfRef.core__DOT__validReg_5)));
    vlSelfRef.core__DOT___IDU_io_in_ready = (1U & (
                                                   (~ (IData)(vlSelfRef.core__DOT__validReg_11)) 
                                                   | (IData)(vlSelfRef.core__DOT___EXU_io_in_ready)));
    vlSelfRef.core__DOT___LSU_io_axi_r_ready = ((~ (IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_3)) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_4 
        = ((IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_3) 
           | (2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT___IFU_io_axi_ar_valid = (1U 
                                                 & ((~ (IData)(vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel)) 
                                                    & (~ (IData)(vlSelfRef.core__DOT__IFU__DOT__ar_request_in_flight))));
    vlSelfRef.core__DOT__IFU__DOT__axi_r_decoupled_valid 
        = ((~ (IData)(vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel)) 
           & (IData)(vlSelfRef.core__DOT___IFU_io_axi_r_valid_T));
    if ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))) {
        vlSelfRef.core__DOT___LSU_io_out_bits_rd_en 
            = vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_en;
        vlSelfRef.core__DOT___LSU_io_out_bits_rd_addr 
            = vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_addr;
    } else {
        vlSelfRef.core__DOT___LSU_io_out_bits_rd_en 
            = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_en;
        vlSelfRef.core__DOT___LSU_io_out_bits_rd_addr 
            = vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_addr;
    }
    vlSelfRef.core__DOT___WBU_io_out_addr = ((IData)(vlSelfRef.core__DOT__validReg_13)
                                              ? (IData)(vlSelfRef.core__DOT__dataReg_13_rd_addr)
                                              : (IData)(vlSelfRef.core__DOT___LSU_io_out_bits_rd_addr));
    if (vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__mem_read_TOP(
                                                                                ((IData)(vlSelfRef.core__DOT__validReg_5)
                                                                                 ? vlSelfRef.core__DOT__dataReg_5_addr
                                                                                 : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr), vlSelfRef.__Vtask_core__DOT__Lsram__DOT__read_backend__DOT__mem_read__2__r_data);
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__Lsram__DOT__read_backend__DOT__mem_read__2__r_data;
    } else {
        vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT___LSU_io_out_bits_rd_data = 
        ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
          ? vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_data
          : ((2U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
              ? VL_SHIFTRS_III(32,32,5, ((0xfU == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                          ? vlSelfRef.io_debugmemdata
                                          : ((3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                              ? ((((IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en)
                                                    ? 0U
                                                    : 
                                                   (0xffffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (vlSelfRef.io_debugmemdata 
                                                                     >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelfRef.io_debugmemdata))
                                              : ((1U 
                                                  == (IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len))
                                                  ? 
                                                 ((((IData)(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en)
                                                     ? 0U
                                                     : 
                                                    (0xffffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.io_debugmemdata 
                                                                      >> 7U)))))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelfRef.io_debugmemdata))
                                                  : 0U))), 
                               (0x18U & (vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr 
                                         << 3U))) : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_data));
    vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data 
        = ((IData)(vlSelfRef.core__DOT__validReg_13)
            ? vlSelfRef.core__DOT__dataReg_13_rd_data
            : vlSelfRef.core__DOT___LSU_io_out_bits_rd_data);
    vlSelfRef.core__DOT__readyForProducer_10 = (1U 
                                                & ((~ (IData)(vlSelfRef.core__DOT__validReg_10)) 
                                                   | (IData)(vlSelfRef.core__DOT___IDU_io_in_ready)));
    vlSelfRef.core__DOT__Lsram__DOT___GEN = (((~ (IData)(vlSelfRef.core__DOT__validReg_6)) 
                                              | (IData)(vlSelfRef.core__DOT___LSU_io_axi_r_ready)) 
                                             & (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__LSU__DOT___GEN_3 = ((IData)(vlSelfRef.core__DOT___LSU_io_axi_r_ready) 
                                             & ((IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg) 
                                                | (IData)(vlSelfRef.core__DOT__validReg_6)));
    vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0 
        = ((~ (IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_4)) 
           & (3U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT___LSU_io_axi_b_ready = ((~ 
                                                 ((IData)(vlSelfRef.core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_4) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)))) 
                                                & (4U 
                                                   == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)));
    vlSelfRef.core__DOT__producerFire = (((~ (IData)(vlSelfRef.core__DOT__validReg)) 
                                          | (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state))) 
                                         & (IData)(vlSelfRef.core__DOT___IFU_io_axi_ar_valid));
    vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state)) 
           & ((IData)(vlSelfRef.core__DOT___IFU_io_axi_ar_valid) 
              | (IData)(vlSelfRef.core__DOT__validReg)));
    vlSelfRef.core__DOT___IFU_io_out_valid = ((IData)(vlSelfRef.core__DOT__IFU__DOT__axi_r_decoupled_valid) 
                                              | (IData)(vlSelfRef.core__DOT__IFU__DOT__validReg));
    vlSelfRef.core__DOT__IFU__DOT__readyForProducer 
        = (1U & ((~ (IData)(vlSelfRef.core__DOT__IFU__DOT__validReg)) 
                 | (IData)(vlSelfRef.core__DOT__readyForProducer_10)));
    vlSelfRef.core__DOT__producerFire_7 = ((IData)(vlSelfRef.core__DOT__readyForProducer_7) 
                                           & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0));
    vlSelfRef.core__DOT__producerFire_9 = ((IData)(vlSelfRef.core__DOT__readyForProducer_9) 
                                           & (IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0));
    vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T 
        = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state)) 
           & ((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0) 
              | (IData)(vlSelfRef.core__DOT__validReg_7)));
    vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T_1 
        = ((~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state)) 
           & ((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0) 
              | (IData)(vlSelfRef.core__DOT__validReg_9)));
    vlSelfRef.core__DOT__readyForProducer_8 = (1U & 
                                               ((~ (IData)(vlSelfRef.core__DOT__validReg_8)) 
                                                | (IData)(vlSelfRef.core__DOT___LSU_io_axi_b_ready)));
    vlSelfRef.core__DOT__LSU__DOT___GEN_6 = ((IData)(vlSelfRef.core__DOT___LSU_io_axi_b_ready) 
                                             & ((IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg) 
                                                | (IData)(vlSelfRef.core__DOT__validReg_8)));
    vlSelfRef.core__DOT__IFU__DOT___GEN = ((~ (IData)(vlSelfRef.core__DOT__IFU__DOT__ar_request_in_flight)) 
                                           & (IData)(vlSelfRef.core__DOT__producerFire));
    if (vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T) {
        Vcore___024root____Vdpiimwrap_core__DOT__Fsram__DOT__read_backend__DOT__mem_read_TOP(
                                                                                ((IData)(vlSelfRef.core__DOT__validReg)
                                                                                 ? vlSelfRef.core__DOT__dataReg_addr
                                                                                 : vlSelfRef.core__DOT__IFU__DOT__pc), vlSelfRef.__Vtask_core__DOT__Fsram__DOT__read_backend__DOT__mem_read__0__r_data);
        vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb 
            = vlSelfRef.__Vtask_core__DOT__Fsram__DOT__read_backend__DOT__mem_read__0__r_data;
    } else {
        vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb = 0U;
    }
    vlSelfRef.core__DOT__IFU__DOT__consumerFire = ((IData)(vlSelfRef.core__DOT__readyForProducer_10) 
                                                   & (IData)(vlSelfRef.core__DOT___IFU_io_out_valid));
    vlSelfRef.core__DOT___IDU_io_out_valid = ((IData)(vlSelfRef.core__DOT___IFU_io_out_valid) 
                                              | (IData)(vlSelfRef.core__DOT__validReg_10));
    vlSelfRef.core__DOT__consumerFire_1 = ((IData)(vlSelfRef.core__DOT__IFU__DOT__readyForProducer) 
                                           & (IData)(vlSelfRef.core__DOT___IFU_io_axi_r_valid_T));
    vlSelfRef.core__DOT__IFU__DOT__producerFire = ((IData)(vlSelfRef.core__DOT__IFU__DOT__readyForProducer) 
                                                   & (IData)(vlSelfRef.core__DOT__IFU__DOT__axi_r_decoupled_valid));
    vlSelfRef.core__DOT__Fsram__DOT___GEN = (((~ (IData)(vlSelfRef.core__DOT__validReg_1)) 
                                              | (IData)(vlSelfRef.core__DOT__IFU__DOT__readyForProducer)) 
                                             & (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg));
    vlSelfRef.core__DOT__producerFire_8 = ((IData)(vlSelfRef.core__DOT__readyForProducer_8) 
                                           & (IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg));
    vlSelfRef.core__DOT__Lsram__DOT___GEN_0 = ((IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg) 
                                               & (IData)(vlSelfRef.core__DOT__readyForProducer_8));
    vlSelfRef.core__DOT__producerFire_11 = ((IData)(vlSelfRef.core__DOT___IDU_io_in_ready) 
                                            & (IData)(vlSelfRef.core__DOT___IDU_io_out_valid));
    vlSelfRef.core__DOT___EXU_io_out_valid = ((IData)(vlSelfRef.core__DOT___IDU_io_out_valid) 
                                              | (IData)(vlSelfRef.core__DOT__validReg_11));
    vlSelfRef.core__DOT__producerFire_12 = ((IData)(vlSelfRef.core__DOT___EXU_io_in_ready) 
                                            & (IData)(vlSelfRef.core__DOT___EXU_io_out_valid));
    vlSelfRef.core__DOT___LSU_io_in_valid_T = ((IData)(vlSelfRef.core__DOT___EXU_io_out_valid) 
                                               | (IData)(vlSelfRef.core__DOT__validReg_12));
    vlSelfRef.core__DOT__LSU__DOT___GEN_7 = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                             & (IData)(vlSelfRef.core__DOT___LSU_io_in_valid_T));
    vlSelfRef.core__DOT__LSU__DOT__is_passthrough = 
        ((~ ((IData)(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_ren) 
             | (IData)(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_wen))) 
         & (IData)(vlSelfRef.core__DOT___LSU_io_in_valid_T));
    vlSelfRef.core__DOT___LSU_io_out_valid = ((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
                                               ? ((IData)(vlSelfRef.core__DOT__LSU__DOT__is_passthrough) 
                                                  & (IData)(vlSelfRef.core__DOT___LSU_io_in_valid_T))
                                               : ((1U 
                                                   != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                                  & ((2U 
                                                      == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))
                                                      ? (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_3)
                                                      : 
                                                     ((3U 
                                                       != (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                                      & ((4U 
                                                          == (IData)(vlSelfRef.core__DOT__LSU__DOT__state)) 
                                                         & (IData)(vlSelfRef.core__DOT__LSU__DOT___GEN_6))))));
    vlSelfRef.core__DOT___WBU_io_out_en = ((IData)(vlSelfRef.core__DOT___LSU_io_out_valid) 
                                           | (IData)(vlSelfRef.core__DOT__validReg_13));
    vlSelfRef.core__DOT__RF__DOT___GEN = ((IData)(vlSelfRef.core__DOT___WBU_io_out_en) 
                                          & (0U != (IData)(vlSelfRef.core__DOT___WBU_io_out_addr)));
    vlSelfRef.io_inst_done = (((IData)(vlSelfRef.core__DOT__validReg_13)
                                ? (IData)(vlSelfRef.core__DOT__dataReg_13_rd_en)
                                : (IData)(vlSelfRef.core__DOT___LSU_io_out_bits_rd_en)) 
                              & (IData)(vlSelfRef.core__DOT___WBU_io_out_en));
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
            VL_FATAL_MT("build/core.sv", 1615, "", "NBA region did not converge.");
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
                VL_FATAL_MT("build/core.sv", 1615, "", "Active region did not converge.");
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
