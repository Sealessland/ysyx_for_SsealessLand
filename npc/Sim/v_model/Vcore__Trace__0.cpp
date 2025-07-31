// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0_sub_0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.core__DOT__validReg));
        bufp->chgIData(oldp+1,(vlSelfRef.core__DOT__dataReg_addr),32);
        bufp->chgBit(oldp+2,((1U & ((~ (IData)(vlSelfRef.core__DOT__validReg)) 
                                    | (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state))))));
        bufp->chgBit(oldp+3,(vlSelfRef.core__DOT__producerFire));
        bufp->chgBit(oldp+4,(vlSelfRef.core__DOT__validReg_1));
        bufp->chgCData(oldp+5,(vlSelfRef.core__DOT__dataReg_1_resp),2);
        bufp->chgIData(oldp+6,(vlSelfRef.core__DOT__dataReg_1_data),32);
        bufp->chgBit(oldp+7,((1U & ((~ (IData)(vlSelfRef.core__DOT__validReg_1)) 
                                    | (IData)(vlSelfRef.core__DOT__IFU__DOT__readyForProducer)))));
        bufp->chgBit(oldp+8,(vlSelfRef.core__DOT__Fsram__DOT___GEN));
        bufp->chgBit(oldp+9,(vlSelfRef.core__DOT__validReg_5));
        bufp->chgIData(oldp+10,(vlSelfRef.core__DOT__dataReg_5_addr),32);
        bufp->chgBit(oldp+11,(vlSelfRef.core__DOT__readyForProducer_5));
        bufp->chgBit(oldp+12,(vlSelfRef.core__DOT__producerFire_5));
        bufp->chgBit(oldp+13,(vlSelfRef.core__DOT__validReg_6));
        bufp->chgCData(oldp+14,(vlSelfRef.core__DOT__dataReg_6_resp),2);
        bufp->chgIData(oldp+15,(vlSelfRef.core__DOT__dataReg_6_data),32);
        bufp->chgBit(oldp+16,((1U & ((~ (IData)(vlSelfRef.core__DOT__validReg_6)) 
                                     | (IData)(vlSelfRef.core__DOT___LSU_io_axi_r_ready)))));
        bufp->chgBit(oldp+17,(vlSelfRef.core__DOT__Lsram__DOT___GEN));
        bufp->chgBit(oldp+18,(vlSelfRef.core__DOT__validReg_7));
        bufp->chgIData(oldp+19,(vlSelfRef.core__DOT__dataReg_7_addr),32);
        bufp->chgBit(oldp+20,(vlSelfRef.core__DOT__readyForProducer_7));
        bufp->chgBit(oldp+21,(vlSelfRef.core__DOT__producerFire_7));
        bufp->chgBit(oldp+22,(vlSelfRef.core__DOT__validReg_8));
        bufp->chgBit(oldp+23,(vlSelfRef.core__DOT__readyForProducer_8));
        bufp->chgBit(oldp+24,(vlSelfRef.core__DOT__producerFire_8));
        bufp->chgBit(oldp+25,(vlSelfRef.core__DOT__validReg_9));
        bufp->chgIData(oldp+26,(vlSelfRef.core__DOT__dataReg_9_data),32);
        bufp->chgCData(oldp+27,(vlSelfRef.core__DOT__dataReg_9_strb),4);
        bufp->chgBit(oldp+28,(vlSelfRef.core__DOT__readyForProducer_9));
        bufp->chgBit(oldp+29,(vlSelfRef.core__DOT__producerFire_9));
        bufp->chgBit(oldp+30,(vlSelfRef.core__DOT__validReg_10));
        bufp->chgIData(oldp+31,(vlSelfRef.core__DOT__dataReg_10_inst),32);
        bufp->chgIData(oldp+32,(vlSelfRef.core__DOT__dataReg_10_pc),32);
        bufp->chgBit(oldp+33,(vlSelfRef.core__DOT__readyForProducer_10));
        bufp->chgBit(oldp+34,(vlSelfRef.core__DOT__IFU__DOT__consumerFire));
        bufp->chgBit(oldp+35,(vlSelfRef.core__DOT__validReg_11));
        bufp->chgIData(oldp+36,(vlSelfRef.core__DOT__dataReg_11_rs1_data),32);
        bufp->chgIData(oldp+37,(vlSelfRef.core__DOT__dataReg_11_rs2_data),32);
        bufp->chgCData(oldp+38,(vlSelfRef.core__DOT__dataReg_11_rd_addr),5);
        bufp->chgBit(oldp+39,(vlSelfRef.core__DOT__dataReg_11_rd_en));
        bufp->chgCData(oldp+40,(vlSelfRef.core__DOT__dataReg_11_opcode),5);
        bufp->chgQData(oldp+41,(vlSelfRef.core__DOT__dataReg_11_imm),64);
        bufp->chgIData(oldp+43,(vlSelfRef.core__DOT__dataReg_11_pc),32);
        bufp->chgBit(oldp+44,(vlSelfRef.core__DOT__dataReg_11_rs2_en));
        bufp->chgBit(oldp+45,(vlSelfRef.core__DOT__dataReg_11_unsign_en));
        bufp->chgBit(oldp+46,(vlSelfRef.core__DOT__dataReg_11_csr_en));
        bufp->chgBit(oldp+47,(vlSelfRef.core__DOT__dataReg_11_lsu_en));
        bufp->chgBit(oldp+48,(vlSelfRef.core__DOT__dataReg_11_mw_en));
        bufp->chgCData(oldp+49,(vlSelfRef.core__DOT__dataReg_11_mlen),4);
        bufp->chgBit(oldp+50,(vlSelfRef.core__DOT__dataReg_11_branch_en));
        bufp->chgBit(oldp+51,(vlSelfRef.core__DOT__dataReg_11_jump_en));
        bufp->chgBit(oldp+52,(vlSelfRef.core__DOT__dataReg_11_jalr_en));
        bufp->chgBit(oldp+53,(vlSelfRef.core__DOT__dataReg_11_auipc_en));
        bufp->chgBit(oldp+54,(vlSelfRef.core__DOT___IDU_io_in_ready));
        bufp->chgBit(oldp+55,(vlSelfRef.core__DOT__producerFire_11));
        bufp->chgBit(oldp+56,(vlSelfRef.core__DOT__validReg_12));
        bufp->chgBit(oldp+57,(vlSelfRef.core__DOT__dataReg_12_rd_en));
        bufp->chgCData(oldp+58,(vlSelfRef.core__DOT__dataReg_12_rd_addr),5);
        bufp->chgIData(oldp+59,(vlSelfRef.core__DOT__dataReg_12_rd_data),32);
        bufp->chgBit(oldp+60,(vlSelfRef.core__DOT__dataReg_12_mem_wen));
        bufp->chgBit(oldp+61,(vlSelfRef.core__DOT__dataReg_12_mem_ren));
        bufp->chgIData(oldp+62,(vlSelfRef.core__DOT__dataReg_12_mem_addr),32);
        bufp->chgIData(oldp+63,(vlSelfRef.core__DOT__dataReg_12_mem_wdata),32);
        bufp->chgCData(oldp+64,(vlSelfRef.core__DOT__dataReg_12_mem_len),4);
        bufp->chgBit(oldp+65,(vlSelfRef.core__DOT__dataReg_12_unsign_en));
        bufp->chgBit(oldp+66,(vlSelfRef.core__DOT___EXU_io_in_ready));
        bufp->chgBit(oldp+67,(vlSelfRef.core__DOT__producerFire_12));
        bufp->chgBit(oldp+68,(vlSelfRef.core__DOT__validReg_13));
        bufp->chgBit(oldp+69,(vlSelfRef.core__DOT__dataReg_13_rd_en));
        bufp->chgCData(oldp+70,(vlSelfRef.core__DOT__dataReg_13_rd_addr),5);
        bufp->chgIData(oldp+71,(vlSelfRef.core__DOT__dataReg_13_rd_data),32);
        bufp->chgBit(oldp+72,(vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T));
        bufp->chgBit(oldp+73,(vlSelfRef.core__DOT__consumerFire_1));
        bufp->chgBit(oldp+74,(vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T));
        bufp->chgBit(oldp+75,(vlSelfRef.core__DOT__LSU__DOT___GEN_3));
        bufp->chgBit(oldp+76,(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T));
        bufp->chgBit(oldp+77,(vlSelfRef.core__DOT__LSU__DOT___GEN_6));
        bufp->chgBit(oldp+78,(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T_1));
        bufp->chgBit(oldp+79,(vlSelfRef.core__DOT__LSU__DOT___GEN_7));
        bufp->chgBit(oldp+80,(vlSelfRef.core__DOT___EXU_io_out_valid));
        bufp->chgBit(oldp+81,(vlSelfRef.core__DOT___EXU_io_out_bits_rd_en));
        bufp->chgCData(oldp+82,(vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr),5);
        bufp->chgBit(oldp+83,(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen));
        bufp->chgBit(oldp+84,(vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren));
        bufp->chgIData(oldp+85,(vlSelfRef.core__DOT__EXU__DOT___alu_io_out),32);
        bufp->chgIData(oldp+86,(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata),32);
        bufp->chgCData(oldp+87,(vlSelfRef.core__DOT___EXU_io_out_bits_mem_len),4);
        bufp->chgBit(oldp+88,(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en));
        bufp->chgBit(oldp+89,(vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel));
        bufp->chgIData(oldp+90,(((IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jalr_en)
                                  ? vlSelfRef.core__DOT__EXU__DOT___alu_io_out
                                  : (vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc 
                                     + (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm)))),32);
        bufp->chgCData(oldp+91,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode),5);
        bufp->chgQData(oldp+92,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm),64);
        bufp->chgIData(oldp+94,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc),32);
        bufp->chgBit(oldp+95,(((IData)(vlSelfRef.core__DOT__validReg_11)
                                ? (IData)(vlSelfRef.core__DOT__dataReg_11_rs2_en)
                                : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_rs2_en))));
        bufp->chgBit(oldp+96,(((IData)(vlSelfRef.core__DOT__validReg_11)
                                ? (IData)(vlSelfRef.core__DOT__dataReg_11_lsu_en)
                                : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en))));
        bufp->chgBit(oldp+97,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_branch_en));
        bufp->chgBit(oldp+98,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jump_en));
        bufp->chgBit(oldp+99,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jalr_en));
        bufp->chgBit(oldp+100,(((IData)(vlSelfRef.core__DOT__validReg_11)
                                 ? (IData)(vlSelfRef.core__DOT__dataReg_11_auipc_en)
                                 : (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7)))));
        bufp->chgIData(oldp+101,(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1),32);
        bufp->chgIData(oldp+102,(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2),32);
        bufp->chgQData(oldp+103,((0x7fffffffffffffffULL 
                                  & ((QData)((IData)(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1)) 
                                     << (0x1fU & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)))),63);
        bufp->chgBit(oldp+105,((1U & (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state)))));
        bufp->chgBit(oldp+106,(((IData)(vlSelfRef.core__DOT___IFU_io_axi_ar_valid) 
                                | (IData)(vlSelfRef.core__DOT__validReg))));
        bufp->chgIData(oldp+107,(((IData)(vlSelfRef.core__DOT__validReg)
                                   ? vlSelfRef.core__DOT__dataReg_addr
                                   : vlSelfRef.core__DOT__IFU__DOT__pc)),32);
        bufp->chgBit(oldp+108,(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg));
        bufp->chgCData(oldp+109,(vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_resp),2);
        bufp->chgIData(oldp+110,(vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_data),32);
        bufp->chgBit(oldp+111,((1U & (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__w_state)))));
        bufp->chgBit(oldp+112,(vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg));
        bufp->chgCData(oldp+113,(vlSelfRef.core__DOT__Fsram__DOT__b_bits_reg_resp),2);
        bufp->chgBit(oldp+114,(vlSelfRef.core__DOT__Fsram__DOT__r_state));
        bufp->chgBit(oldp+115,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_en_REG));
        bufp->chgBit(oldp+116,(vlSelfRef.core__DOT__Fsram__DOT__w_state));
        bufp->chgIData(oldp+117,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_aw_addr_REG),32);
        bufp->chgIData(oldp+118,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_data_REG),32);
        bufp->chgCData(oldp+119,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_strb_REG),4);
        bufp->chgIData(oldp+120,(vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg),32);
        bufp->chgBit(oldp+121,(vlSelfRef.core__DOT__Fsram__DOT___read_backend_done));
        bufp->chgIData(oldp+122,(vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb),32);
        bufp->chgBit(oldp+123,(vlSelfRef.core__DOT__Fsram__DOT___write_backend_done));
        bufp->chgBit(oldp+124,(vlSelfRef.core__DOT___IDU_io_out_valid));
        bufp->chgIData(oldp+125,(vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst),32);
        bufp->chgIData(oldp+126,(vlSelfRef.core__DOT___IDU_io_out_bits_pc),32);
        bufp->chgCData(oldp+127,((0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+128,(vlSelfRef.core__DOT___IDU_io_out_bits_rd_en));
        bufp->chgCData(oldp+129,(vlSelfRef.core__DOT___IDU_io_out_bits_opcode),5);
        bufp->chgQData(oldp+130,(vlSelfRef.core__DOT__IDU__DOT__casez_tmp),64);
        bufp->chgBit(oldp+132,(vlSelfRef.core__DOT___IDU_io_out_bits_rs2_en));
        bufp->chgBit(oldp+133,(vlSelfRef.core__DOT___IDU_io_out_bits_unsign_en));
        bufp->chgBit(oldp+134,(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en));
        bufp->chgBit(oldp+135,(vlSelfRef.core__DOT___IDU_io_out_bits_mw_en));
        bufp->chgCData(oldp+136,(vlSelfRef.core__DOT___IDU_io_out_bits_mlen),4);
        bufp->chgBit(oldp+137,(vlSelfRef.core__DOT___IDU_io_out_bits_branch_en));
        bufp->chgBit(oldp+138,((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18))));
        bufp->chgBit(oldp+139,((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17))));
        bufp->chgBit(oldp+140,((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7))));
        bufp->chgCData(oldp+141,((0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+142,((0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                           >> 0x14U))),5);
        bufp->chgQData(oldp+143,(((0U != (0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 0xfU)))
                                   ? vlSelfRef.core__DOT__RF__DOT__casez_tmp
                                   : 0ULL)),64);
        bufp->chgQData(oldp+145,(((0U != (0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                   >> 0x14U)))
                                   ? vlSelfRef.core__DOT__RF__DOT__casez_tmp_0
                                   : 0ULL)),64);
        bufp->chgIData(oldp+147,((0x3fffffffU & (~ 
                                                 (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                  >> 2U)))),30);
        bufp->chgBit(oldp+148,(vlSelfRef.core__DOT___IFU_io_out_valid));
        bufp->chgBit(oldp+149,(vlSelfRef.core__DOT___IFU_io_axi_ar_valid));
        bufp->chgIData(oldp+150,(vlSelfRef.core__DOT__IFU__DOT__pc),32);
        bufp->chgBit(oldp+151,(vlSelfRef.core__DOT__IFU__DOT__readyForProducer));
        bufp->chgBit(oldp+152,(vlSelfRef.core__DOT___IFU_io_axi_r_valid_T));
        bufp->chgIData(oldp+153,(vlSelfRef.core__DOT____Vcellinp__IFU__io_axi_r_bits_data),32);
        bufp->chgBit(oldp+154,(vlSelfRef.core__DOT__IFU__DOT__axi_r_decoupled_valid));
        bufp->chgIData(oldp+155,(vlSelfRef.core__DOT__IFU__DOT__pc_in_flight),32);
        bufp->chgBit(oldp+156,(vlSelfRef.core__DOT__IFU__DOT__ar_request_in_flight));
        bufp->chgBit(oldp+157,(vlSelfRef.core__DOT__IFU__DOT__validReg));
        bufp->chgIData(oldp+158,(vlSelfRef.core__DOT__IFU__DOT__dataReg_inst),32);
        bufp->chgIData(oldp+159,(vlSelfRef.core__DOT__IFU__DOT__dataReg_pc),32);
        bufp->chgBit(oldp+160,(vlSelfRef.core__DOT__IFU__DOT__producerFire));
        bufp->chgBit(oldp+161,((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))));
        bufp->chgBit(oldp+162,(vlSelfRef.core__DOT___LSU_io_in_valid_T));
        bufp->chgBit(oldp+163,(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_en));
        bufp->chgCData(oldp+164,(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_addr),5);
        bufp->chgIData(oldp+165,(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_data),32);
        bufp->chgBit(oldp+166,(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_wen));
        bufp->chgBit(oldp+167,(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_ren));
        bufp->chgIData(oldp+168,(((IData)(vlSelfRef.core__DOT__validReg_12)
                                   ? vlSelfRef.core__DOT__dataReg_12_mem_addr
                                   : vlSelfRef.core__DOT__EXU__DOT___alu_io_out)),32);
        bufp->chgIData(oldp+169,(((IData)(vlSelfRef.core__DOT__validReg_12)
                                   ? vlSelfRef.core__DOT__dataReg_12_mem_wdata
                                   : vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata)),32);
        bufp->chgCData(oldp+170,(((IData)(vlSelfRef.core__DOT__validReg_12)
                                   ? (IData)(vlSelfRef.core__DOT__dataReg_12_mem_len)
                                   : (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_len))),4);
        bufp->chgBit(oldp+171,(((IData)(vlSelfRef.core__DOT__validReg_12)
                                 ? (IData)(vlSelfRef.core__DOT__dataReg_12_unsign_en)
                                 : (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en))));
        bufp->chgBit(oldp+172,(vlSelfRef.core__DOT___LSU_io_out_valid));
        bufp->chgBit(oldp+173,(vlSelfRef.core__DOT___LSU_io_out_bits_rd_en));
        bufp->chgCData(oldp+174,(vlSelfRef.core__DOT___LSU_io_out_bits_rd_addr),5);
        bufp->chgIData(oldp+175,(vlSelfRef.core__DOT___LSU_io_out_bits_rd_data),32);
        bufp->chgBit(oldp+176,(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0));
        bufp->chgIData(oldp+177,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr),32);
        bufp->chgBit(oldp+178,(vlSelfRef.core__DOT___LSU_io_axi_r_ready));
        bufp->chgBit(oldp+179,(((IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg) 
                                | (IData)(vlSelfRef.core__DOT__validReg_6))));
        bufp->chgBit(oldp+180,(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0));
        bufp->chgIData(oldp+181,(vlSelfRef.core__DOT___LSU_io_axi_w_bits_data),32);
        bufp->chgCData(oldp+182,(vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb),4);
        bufp->chgBit(oldp+183,(vlSelfRef.core__DOT___LSU_io_axi_b_ready));
        bufp->chgBit(oldp+184,(((IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg) 
                                | (IData)(vlSelfRef.core__DOT__validReg_8))));
        bufp->chgCData(oldp+185,(vlSelfRef.core__DOT__LSU__DOT__state),3);
        bufp->chgBit(oldp+186,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_en));
        bufp->chgCData(oldp+187,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_addr),5);
        bufp->chgIData(oldp+188,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_data),32);
        bufp->chgIData(oldp+189,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata),32);
        bufp->chgCData(oldp+190,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len),4);
        bufp->chgBit(oldp+191,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en));
        bufp->chgBit(oldp+192,(vlSelfRef.core__DOT__LSU__DOT__is_passthrough));
        bufp->chgBit(oldp+193,((1U & (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state)))));
        bufp->chgBit(oldp+194,(((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0) 
                                | (IData)(vlSelfRef.core__DOT__validReg_5))));
        bufp->chgIData(oldp+195,(((IData)(vlSelfRef.core__DOT__validReg_5)
                                   ? vlSelfRef.core__DOT__dataReg_5_addr
                                   : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr)),32);
        bufp->chgBit(oldp+196,(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg));
        bufp->chgCData(oldp+197,(vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_resp),2);
        bufp->chgIData(oldp+198,(vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data),32);
        bufp->chgBit(oldp+199,((1U & (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state)))));
        bufp->chgBit(oldp+200,(((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0) 
                                | (IData)(vlSelfRef.core__DOT__validReg_7))));
        bufp->chgIData(oldp+201,(((IData)(vlSelfRef.core__DOT__validReg_7)
                                   ? vlSelfRef.core__DOT__dataReg_7_addr
                                   : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr)),32);
        bufp->chgBit(oldp+202,(((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0) 
                                | (IData)(vlSelfRef.core__DOT__validReg_9))));
        bufp->chgIData(oldp+203,(((IData)(vlSelfRef.core__DOT__validReg_9)
                                   ? vlSelfRef.core__DOT__dataReg_9_data
                                   : vlSelfRef.core__DOT___LSU_io_axi_w_bits_data)),32);
        bufp->chgCData(oldp+204,(((IData)(vlSelfRef.core__DOT__validReg_9)
                                   ? (IData)(vlSelfRef.core__DOT__dataReg_9_strb)
                                   : (IData)(vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb))),4);
        bufp->chgBit(oldp+205,(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg));
        bufp->chgCData(oldp+206,(vlSelfRef.core__DOT__Lsram__DOT__b_bits_reg_resp),2);
        bufp->chgBit(oldp+207,(vlSelfRef.core__DOT__Lsram__DOT__r_state));
        bufp->chgBit(oldp+208,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_en_REG));
        bufp->chgBit(oldp+209,(vlSelfRef.core__DOT__Lsram__DOT__w_state));
        bufp->chgIData(oldp+210,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_aw_addr_REG),32);
        bufp->chgIData(oldp+211,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_data_REG),32);
        bufp->chgCData(oldp+212,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_strb_REG),4);
        bufp->chgIData(oldp+213,(vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg),32);
        bufp->chgBit(oldp+214,(vlSelfRef.core__DOT__Lsram__DOT___read_backend_done));
        bufp->chgIData(oldp+215,(vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb),32);
        bufp->chgBit(oldp+216,(vlSelfRef.core__DOT__Lsram__DOT___write_backend_done));
        bufp->chgCData(oldp+217,(vlSelfRef.core__DOT___WBU_io_out_addr),5);
        bufp->chgQData(oldp+218,((QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data))),64);
        bufp->chgBit(oldp+220,(vlSelfRef.core__DOT___WBU_io_out_en));
        bufp->chgQData(oldp+221,(vlSelfRef.core__DOT__RF__DOT__rf_0),64);
        bufp->chgQData(oldp+223,(vlSelfRef.core__DOT__RF__DOT__rf_1),64);
        bufp->chgQData(oldp+225,(vlSelfRef.core__DOT__RF__DOT__rf_2),64);
        bufp->chgQData(oldp+227,(vlSelfRef.core__DOT__RF__DOT__rf_3),64);
        bufp->chgQData(oldp+229,(vlSelfRef.core__DOT__RF__DOT__rf_4),64);
        bufp->chgQData(oldp+231,(vlSelfRef.core__DOT__RF__DOT__rf_5),64);
        bufp->chgQData(oldp+233,(vlSelfRef.core__DOT__RF__DOT__rf_6),64);
        bufp->chgQData(oldp+235,(vlSelfRef.core__DOT__RF__DOT__rf_7),64);
        bufp->chgQData(oldp+237,(vlSelfRef.core__DOT__RF__DOT__rf_8),64);
        bufp->chgQData(oldp+239,(vlSelfRef.core__DOT__RF__DOT__rf_9),64);
        bufp->chgQData(oldp+241,(vlSelfRef.core__DOT__RF__DOT__rf_10),64);
        bufp->chgQData(oldp+243,(vlSelfRef.core__DOT__RF__DOT__rf_11),64);
        bufp->chgQData(oldp+245,(vlSelfRef.core__DOT__RF__DOT__rf_12),64);
        bufp->chgQData(oldp+247,(vlSelfRef.core__DOT__RF__DOT__rf_13),64);
        bufp->chgQData(oldp+249,(vlSelfRef.core__DOT__RF__DOT__rf_14),64);
        bufp->chgQData(oldp+251,(vlSelfRef.core__DOT__RF__DOT__rf_15),64);
        bufp->chgQData(oldp+253,(vlSelfRef.core__DOT__RF__DOT__rf_16),64);
        bufp->chgQData(oldp+255,(vlSelfRef.core__DOT__RF__DOT__rf_17),64);
        bufp->chgQData(oldp+257,(vlSelfRef.core__DOT__RF__DOT__rf_18),64);
        bufp->chgQData(oldp+259,(vlSelfRef.core__DOT__RF__DOT__rf_19),64);
        bufp->chgQData(oldp+261,(vlSelfRef.core__DOT__RF__DOT__rf_20),64);
        bufp->chgQData(oldp+263,(vlSelfRef.core__DOT__RF__DOT__rf_21),64);
        bufp->chgQData(oldp+265,(vlSelfRef.core__DOT__RF__DOT__rf_22),64);
        bufp->chgQData(oldp+267,(vlSelfRef.core__DOT__RF__DOT__rf_23),64);
        bufp->chgQData(oldp+269,(vlSelfRef.core__DOT__RF__DOT__rf_24),64);
        bufp->chgQData(oldp+271,(vlSelfRef.core__DOT__RF__DOT__rf_25),64);
        bufp->chgQData(oldp+273,(vlSelfRef.core__DOT__RF__DOT__rf_26),64);
        bufp->chgQData(oldp+275,(vlSelfRef.core__DOT__RF__DOT__rf_27),64);
        bufp->chgQData(oldp+277,(vlSelfRef.core__DOT__RF__DOT__rf_28),64);
        bufp->chgQData(oldp+279,(vlSelfRef.core__DOT__RF__DOT__rf_29),64);
        bufp->chgQData(oldp+281,(vlSelfRef.core__DOT__RF__DOT__rf_30),64);
        bufp->chgQData(oldp+283,(vlSelfRef.core__DOT__RF__DOT__rf_31),64);
        bufp->chgQData(oldp+285,(vlSelfRef.core__DOT__RF__DOT__casez_tmp),64);
        bufp->chgQData(oldp+287,(vlSelfRef.core__DOT__RF__DOT__casez_tmp_0),64);
        bufp->chgBit(oldp+289,(((IData)(vlSelfRef.core__DOT__validReg_13)
                                 ? (IData)(vlSelfRef.core__DOT__dataReg_13_rd_en)
                                 : (IData)(vlSelfRef.core__DOT___LSU_io_out_bits_rd_en))));
        bufp->chgIData(oldp+290,(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data),32);
    }
    bufp->chgBit(oldp+291,(vlSelfRef.clock));
    bufp->chgBit(oldp+292,(vlSelfRef.reset));
    bufp->chgIData(oldp+293,(vlSelfRef.io_debugPC),32);
    bufp->chgIData(oldp+294,(vlSelfRef.io_debugInst),32);
    bufp->chgIData(oldp+295,(vlSelfRef.io_debugin1),32);
    bufp->chgIData(oldp+296,(vlSelfRef.io_debugin2),32);
    bufp->chgIData(oldp+297,(vlSelfRef.io_debugout1),32);
    bufp->chgIData(oldp+298,(vlSelfRef.io_debugmemaddr),32);
    bufp->chgIData(oldp+299,(vlSelfRef.io_debugmemdata),32);
    bufp->chgBit(oldp+300,(vlSelfRef.io_inst_done));
    bufp->chgIData(oldp+301,(((IData)(vlSelfRef.core__DOT__validReg_11)
                               ? vlSelfRef.core__DOT__dataReg_11_rs1_data
                               : vlSelfRef.io_debugin1)),32);
}

void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_cleanup\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
