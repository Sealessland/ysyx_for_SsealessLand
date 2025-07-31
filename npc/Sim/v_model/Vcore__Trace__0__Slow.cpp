// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcore__Syms.h"


VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__0(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"io_debugPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"io_debugInst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"io_debugin1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"io_debugin2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"io_debugout1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"io_debugmemaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"io_debugmemdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+301,0,"io_inst_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"io_debugPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"io_debugInst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"io_debugin1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"io_debugin2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"io_debugout1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"io_debugmemaddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"io_debugmemdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+301,0,"io_inst_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"validReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"dataReg_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"readyForProducer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"producerFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"validReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"dataReg_1_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"dataReg_1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"readyForProducer_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"producerFire_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"validReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"dataReg_5_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"readyForProducer_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"producerFire_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"validReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"dataReg_6_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+16,0,"dataReg_6_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"readyForProducer_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"producerFire_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"validReg_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"dataReg_7_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"readyForProducer_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"producerFire_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"validReg_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"readyForProducer_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"producerFire_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"validReg_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"dataReg_9_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"dataReg_9_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+29,0,"readyForProducer_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"producerFire_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"validReg_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"dataReg_10_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"dataReg_10_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+34,0,"readyForProducer_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"producerFire_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"validReg_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"dataReg_11_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"dataReg_11_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"dataReg_11_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"dataReg_11_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"dataReg_11_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+42,0,"dataReg_11_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+44,0,"dataReg_11_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"dataReg_11_rs2_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"dataReg_11_unsign_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"dataReg_11_csr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"dataReg_11_lsu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"dataReg_11_mw_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"dataReg_11_mlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+51,0,"dataReg_11_branch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"dataReg_11_jump_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"dataReg_11_jalr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"dataReg_11_auipc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"readyForProducer_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"producerFire_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"validReg_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"dataReg_12_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"dataReg_12_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"dataReg_12_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"dataReg_12_mem_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"dataReg_12_mem_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"dataReg_12_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"dataReg_12_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"dataReg_12_mem_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+66,0,"dataReg_12_unsign_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"readyForProducer_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"producerFire_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"validReg_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"dataReg_13_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"dataReg_13_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"dataReg_13_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"consumerFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"consumerFire_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"consumerFire_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"consumerFire_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"consumerFire_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"consumerFire_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"consumerFire_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"consumerFire_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"consumerFire_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"consumerFire_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("EXU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+67,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_out_bits_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"io_out_bits_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+298,0,"io_out_bits_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,0,"io_out_bits_mem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"io_out_bits_mem_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"io_out_bits_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"io_out_bits_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"io_out_bits_mem_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+89,0,"io_out_bits_unsign_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"io_pcCtrl_pcSel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_pcCtrl_dnpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"io_in_bits_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"io_in_bits_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_in_bits_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+82,0,"io_in_bits_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"io_in_bits_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+93,0,"io_in_bits_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+95,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+96,0,"io_in_bits_rs2_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"io_in_bits_unsign_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"io_in_bits_lsu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"io_in_bits_mw_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"io_in_bits_mlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+98,0,"io_in_bits_branch_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"io_in_bits_jump_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"io_in_bits_jalr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"io_in_bits_auipc_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"io_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"io_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"io_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+89,0,"io_unsign_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+104,0,"sll_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("Fsram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"io_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"io_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"io_ar_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"io_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"io_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"io_r_bits_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"io_r_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"io_aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"io_aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"io_aw_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"io_w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"io_w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"io_w_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"io_w_bits_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+306,0,"io_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"io_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"io_b_bits_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+115,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"write_backend_io_en_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"r_valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"r_bits_reg_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"r_bits_reg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"w_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"write_backend_io_aw_addr_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"write_backend_io_w_data_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"write_backend_io_w_strb_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+113,0,"b_valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"b_bits_reg_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("read_backend", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"r_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+122,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"r_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"r_data_comb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("write_backend", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"aw_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"w_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+307,0,"b_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+124,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("IDU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+55,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"io_in_bits_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"io_in_bits_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"io_out_bits_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"io_out_bits_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"io_out_bits_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+129,0,"io_out_bits_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"io_out_bits_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+131,0,"io_out_bits_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+127,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"io_out_bits_rs2_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"io_out_bits_unsign_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"io_out_bits_csr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"io_out_bits_lsu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"io_out_bits_mw_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"io_out_bits_mlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+138,0,"io_out_bits_branch_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"io_out_bits_jump_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"io_out_bits_jalr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"io_out_bits_auipc_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"io_d2r_rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"io_d2r_rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+144,0,"io_r2d_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+146,0,"io_r2d_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+148,0,"decodedBundle_invInputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declQuad(c+131,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("IFU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"io_out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+295,0,"io_out_bits_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"io_out_bits_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"io_axi_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"io_axi_ar_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"io_axi_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"io_axi_r_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+90,0,"io_e2f_pcSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+91,0,"io_e2f_dnpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+155,0,"axi_r_decoupled_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"pc_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+157,0,"ar_request_in_flight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"validReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"dataReg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"dataReg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,0,"readyForProducer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"io_out_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"io_axi_ar_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"consumerFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"producerFire",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("LSU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"io_in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"io_in_bits_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+165,0,"io_in_bits_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+166,0,"io_in_bits_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"io_in_bits_mem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"io_in_bits_mem_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"io_in_bits_mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"io_in_bits_mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"io_in_bits_mem_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+172,0,"io_in_bits_unsign_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"io_out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"io_out_bits_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"io_out_bits_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+176,0,"io_out_bits_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"io_axi_ar_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"io_axi_ar_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"io_axi_ar_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+179,0,"io_axi_r_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"io_axi_r_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"io_axi_r_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"io_axi_aw_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"io_axi_aw_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+178,0,"io_axi_aw_bits_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"io_axi_w_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"io_axi_w_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"io_axi_w_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"io_axi_w_bits_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+184,0,"io_axi_b_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"io_axi_b_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+187,0,"e2l_reg_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"e2l_reg_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+189,0,"e2l_reg_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"e2l_reg_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"e2l_reg_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"e2l_reg_mem_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+192,0,"e2l_reg_unsign_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"is_passthrough",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"io_in_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"io_axi_ar_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"io_axi_r_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"io_axi_w_valid_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"io_axi_b_ready_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("Lsram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"io_ar_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"io_ar_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"io_ar_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"io_r_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"io_r_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"io_r_bits_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+199,0,"io_r_bits_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+200,0,"io_aw_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"io_aw_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"io_aw_bits_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+200,0,"io_w_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"io_w_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"io_w_bits_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"io_w_bits_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+24,0,"io_b_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"io_b_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"io_b_bits_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+208,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"write_backend_io_en_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"r_valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"r_bits_reg_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+199,0,"r_bits_reg_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+210,0,"w_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"write_backend_io_aw_addr_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"write_backend_io_w_data_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"write_backend_io_w_strb_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+206,0,"b_valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+207,0,"b_bits_reg_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("read_backend", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"ar_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"r_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"r_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+215,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"r_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"r_data_comb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"delay",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("write_backend", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"aw_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"w_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"w_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+307,0,"b_resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+217,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RF", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+292,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"io_d2r_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+143,0,"io_d2r_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+218,0,"io_w2r_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+219,0,"io_w2r_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+221,0,"io_w2r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+144,0,"io_r2e_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+146,0,"io_r2e_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+222,0,"rf_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+224,0,"rf_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+226,0,"rf_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+228,0,"rf_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+230,0,"rf_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+232,0,"rf_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+234,0,"rf_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+236,0,"rf_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+238,0,"rf_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+240,0,"rf_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+242,0,"rf_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+244,0,"rf_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+246,0,"rf_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+248,0,"rf_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+250,0,"rf_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+252,0,"rf_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+254,0,"rf_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+256,0,"rf_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+258,0,"rf_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+260,0,"rf_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+262,0,"rf_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+264,0,"rf_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+266,0,"rf_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+268,0,"rf_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+270,0,"rf_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+272,0,"rf_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+274,0,"rf_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+276,0,"rf_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+278,0,"rf_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+280,0,"rf_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+282,0,"rf_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+284,0,"rf_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+286,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+288,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("WBU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+221,0,"io_in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"io_in_bits_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+218,0,"io_in_bits_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+291,0,"io_in_bits_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"io_out_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+219,0,"io_out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+221,0,"io_out_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"io_w2f_inst_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcore___024root__trace_init_top(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_top\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcore___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcore___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcore___024root__trace_register(Vcore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_register\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcore___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcore___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcore___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcore___024root__trace_const_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcore___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_const_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcore___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcore___024root__trace_const_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_const_0_sub_0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+303,(0U));
    bufp->fullIData(oldp+304,(0U),32);
    bufp->fullCData(oldp+305,(0U),4);
    bufp->fullBit(oldp+306,(1U));
    bufp->fullCData(oldp+307,(0U),2);
    bufp->fullCData(oldp+308,(vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__delay),3);
    bufp->fullCData(oldp+309,(vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__delay),3);
}

VL_ATTR_COLD void Vcore___024root__trace_full_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcore___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_full_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcore___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcore___024root__trace_full_0_sub_0(Vcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_full_0_sub_0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.core__DOT__validReg));
    bufp->fullIData(oldp+2,(vlSelfRef.core__DOT__dataReg_addr),32);
    bufp->fullBit(oldp+3,((1U & ((~ (IData)(vlSelfRef.core__DOT__validReg)) 
                                 | (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state))))));
    bufp->fullBit(oldp+4,(vlSelfRef.core__DOT__producerFire));
    bufp->fullBit(oldp+5,(vlSelfRef.core__DOT__validReg_1));
    bufp->fullCData(oldp+6,(vlSelfRef.core__DOT__dataReg_1_resp),2);
    bufp->fullIData(oldp+7,(vlSelfRef.core__DOT__dataReg_1_data),32);
    bufp->fullBit(oldp+8,((1U & ((~ (IData)(vlSelfRef.core__DOT__validReg_1)) 
                                 | (IData)(vlSelfRef.core__DOT__IFU__DOT__readyForProducer)))));
    bufp->fullBit(oldp+9,(vlSelfRef.core__DOT__Fsram__DOT___GEN));
    bufp->fullBit(oldp+10,(vlSelfRef.core__DOT__validReg_5));
    bufp->fullIData(oldp+11,(vlSelfRef.core__DOT__dataReg_5_addr),32);
    bufp->fullBit(oldp+12,(vlSelfRef.core__DOT__readyForProducer_5));
    bufp->fullBit(oldp+13,(vlSelfRef.core__DOT__producerFire_5));
    bufp->fullBit(oldp+14,(vlSelfRef.core__DOT__validReg_6));
    bufp->fullCData(oldp+15,(vlSelfRef.core__DOT__dataReg_6_resp),2);
    bufp->fullIData(oldp+16,(vlSelfRef.core__DOT__dataReg_6_data),32);
    bufp->fullBit(oldp+17,((1U & ((~ (IData)(vlSelfRef.core__DOT__validReg_6)) 
                                  | (IData)(vlSelfRef.core__DOT___LSU_io_axi_r_ready)))));
    bufp->fullBit(oldp+18,(vlSelfRef.core__DOT__Lsram__DOT___GEN));
    bufp->fullBit(oldp+19,(vlSelfRef.core__DOT__validReg_7));
    bufp->fullIData(oldp+20,(vlSelfRef.core__DOT__dataReg_7_addr),32);
    bufp->fullBit(oldp+21,(vlSelfRef.core__DOT__readyForProducer_7));
    bufp->fullBit(oldp+22,(vlSelfRef.core__DOT__producerFire_7));
    bufp->fullBit(oldp+23,(vlSelfRef.core__DOT__validReg_8));
    bufp->fullBit(oldp+24,(vlSelfRef.core__DOT__readyForProducer_8));
    bufp->fullBit(oldp+25,(vlSelfRef.core__DOT__producerFire_8));
    bufp->fullBit(oldp+26,(vlSelfRef.core__DOT__validReg_9));
    bufp->fullIData(oldp+27,(vlSelfRef.core__DOT__dataReg_9_data),32);
    bufp->fullCData(oldp+28,(vlSelfRef.core__DOT__dataReg_9_strb),4);
    bufp->fullBit(oldp+29,(vlSelfRef.core__DOT__readyForProducer_9));
    bufp->fullBit(oldp+30,(vlSelfRef.core__DOT__producerFire_9));
    bufp->fullBit(oldp+31,(vlSelfRef.core__DOT__validReg_10));
    bufp->fullIData(oldp+32,(vlSelfRef.core__DOT__dataReg_10_inst),32);
    bufp->fullIData(oldp+33,(vlSelfRef.core__DOT__dataReg_10_pc),32);
    bufp->fullBit(oldp+34,(vlSelfRef.core__DOT__readyForProducer_10));
    bufp->fullBit(oldp+35,(vlSelfRef.core__DOT__IFU__DOT__consumerFire));
    bufp->fullBit(oldp+36,(vlSelfRef.core__DOT__validReg_11));
    bufp->fullIData(oldp+37,(vlSelfRef.core__DOT__dataReg_11_rs1_data),32);
    bufp->fullIData(oldp+38,(vlSelfRef.core__DOT__dataReg_11_rs2_data),32);
    bufp->fullCData(oldp+39,(vlSelfRef.core__DOT__dataReg_11_rd_addr),5);
    bufp->fullBit(oldp+40,(vlSelfRef.core__DOT__dataReg_11_rd_en));
    bufp->fullCData(oldp+41,(vlSelfRef.core__DOT__dataReg_11_opcode),5);
    bufp->fullQData(oldp+42,(vlSelfRef.core__DOT__dataReg_11_imm),64);
    bufp->fullIData(oldp+44,(vlSelfRef.core__DOT__dataReg_11_pc),32);
    bufp->fullBit(oldp+45,(vlSelfRef.core__DOT__dataReg_11_rs2_en));
    bufp->fullBit(oldp+46,(vlSelfRef.core__DOT__dataReg_11_unsign_en));
    bufp->fullBit(oldp+47,(vlSelfRef.core__DOT__dataReg_11_csr_en));
    bufp->fullBit(oldp+48,(vlSelfRef.core__DOT__dataReg_11_lsu_en));
    bufp->fullBit(oldp+49,(vlSelfRef.core__DOT__dataReg_11_mw_en));
    bufp->fullCData(oldp+50,(vlSelfRef.core__DOT__dataReg_11_mlen),4);
    bufp->fullBit(oldp+51,(vlSelfRef.core__DOT__dataReg_11_branch_en));
    bufp->fullBit(oldp+52,(vlSelfRef.core__DOT__dataReg_11_jump_en));
    bufp->fullBit(oldp+53,(vlSelfRef.core__DOT__dataReg_11_jalr_en));
    bufp->fullBit(oldp+54,(vlSelfRef.core__DOT__dataReg_11_auipc_en));
    bufp->fullBit(oldp+55,(vlSelfRef.core__DOT___IDU_io_in_ready));
    bufp->fullBit(oldp+56,(vlSelfRef.core__DOT__producerFire_11));
    bufp->fullBit(oldp+57,(vlSelfRef.core__DOT__validReg_12));
    bufp->fullBit(oldp+58,(vlSelfRef.core__DOT__dataReg_12_rd_en));
    bufp->fullCData(oldp+59,(vlSelfRef.core__DOT__dataReg_12_rd_addr),5);
    bufp->fullIData(oldp+60,(vlSelfRef.core__DOT__dataReg_12_rd_data),32);
    bufp->fullBit(oldp+61,(vlSelfRef.core__DOT__dataReg_12_mem_wen));
    bufp->fullBit(oldp+62,(vlSelfRef.core__DOT__dataReg_12_mem_ren));
    bufp->fullIData(oldp+63,(vlSelfRef.core__DOT__dataReg_12_mem_addr),32);
    bufp->fullIData(oldp+64,(vlSelfRef.core__DOT__dataReg_12_mem_wdata),32);
    bufp->fullCData(oldp+65,(vlSelfRef.core__DOT__dataReg_12_mem_len),4);
    bufp->fullBit(oldp+66,(vlSelfRef.core__DOT__dataReg_12_unsign_en));
    bufp->fullBit(oldp+67,(vlSelfRef.core__DOT___EXU_io_in_ready));
    bufp->fullBit(oldp+68,(vlSelfRef.core__DOT__producerFire_12));
    bufp->fullBit(oldp+69,(vlSelfRef.core__DOT__validReg_13));
    bufp->fullBit(oldp+70,(vlSelfRef.core__DOT__dataReg_13_rd_en));
    bufp->fullCData(oldp+71,(vlSelfRef.core__DOT__dataReg_13_rd_addr),5);
    bufp->fullIData(oldp+72,(vlSelfRef.core__DOT__dataReg_13_rd_data),32);
    bufp->fullBit(oldp+73,(vlSelfRef.core__DOT__Fsram__DOT___read_backend_io_en_T));
    bufp->fullBit(oldp+74,(vlSelfRef.core__DOT__consumerFire_1));
    bufp->fullBit(oldp+75,(vlSelfRef.core__DOT__Lsram__DOT___read_backend_io_en_T));
    bufp->fullBit(oldp+76,(vlSelfRef.core__DOT__LSU__DOT___GEN_3));
    bufp->fullBit(oldp+77,(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T));
    bufp->fullBit(oldp+78,(vlSelfRef.core__DOT__LSU__DOT___GEN_6));
    bufp->fullBit(oldp+79,(vlSelfRef.core__DOT__Lsram__DOT___write_backend_io_en_T_1));
    bufp->fullBit(oldp+80,(vlSelfRef.core__DOT__LSU__DOT___GEN_7));
    bufp->fullBit(oldp+81,(vlSelfRef.core__DOT___EXU_io_out_valid));
    bufp->fullBit(oldp+82,(vlSelfRef.core__DOT___EXU_io_out_bits_rd_en));
    bufp->fullCData(oldp+83,(vlSelfRef.core__DOT___EXU_io_out_bits_rd_addr),5);
    bufp->fullBit(oldp+84,(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wen));
    bufp->fullBit(oldp+85,(vlSelfRef.core__DOT___EXU_io_out_bits_mem_ren));
    bufp->fullIData(oldp+86,(vlSelfRef.core__DOT__EXU__DOT___alu_io_out),32);
    bufp->fullIData(oldp+87,(vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata),32);
    bufp->fullCData(oldp+88,(vlSelfRef.core__DOT___EXU_io_out_bits_mem_len),4);
    bufp->fullBit(oldp+89,(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en));
    bufp->fullBit(oldp+90,(vlSelfRef.core__DOT___EXU_io_pcCtrl_pcSel));
    bufp->fullIData(oldp+91,(((IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jalr_en)
                               ? vlSelfRef.core__DOT__EXU__DOT___alu_io_out
                               : (vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc 
                                  + (IData)(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm)))),32);
    bufp->fullCData(oldp+92,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_opcode),5);
    bufp->fullQData(oldp+93,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_imm),64);
    bufp->fullIData(oldp+95,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_pc),32);
    bufp->fullBit(oldp+96,(((IData)(vlSelfRef.core__DOT__validReg_11)
                             ? (IData)(vlSelfRef.core__DOT__dataReg_11_rs2_en)
                             : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_rs2_en))));
    bufp->fullBit(oldp+97,(((IData)(vlSelfRef.core__DOT__validReg_11)
                             ? (IData)(vlSelfRef.core__DOT__dataReg_11_lsu_en)
                             : (IData)(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en))));
    bufp->fullBit(oldp+98,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_branch_en));
    bufp->fullBit(oldp+99,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jump_en));
    bufp->fullBit(oldp+100,(vlSelfRef.core__DOT____Vcellinp__EXU__io_in_bits_jalr_en));
    bufp->fullBit(oldp+101,(((IData)(vlSelfRef.core__DOT__validReg_11)
                              ? (IData)(vlSelfRef.core__DOT__dataReg_11_auipc_en)
                              : (0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7)))));
    bufp->fullIData(oldp+102,(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1),32);
    bufp->fullIData(oldp+103,(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2),32);
    bufp->fullQData(oldp+104,((0x7fffffffffffffffULL 
                               & ((QData)((IData)(vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in1)) 
                                  << (0x1fU & vlSelfRef.core__DOT__EXU__DOT____Vcellinp__alu__io_in2)))),63);
    bufp->fullBit(oldp+106,((1U & (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__r_state)))));
    bufp->fullBit(oldp+107,(((IData)(vlSelfRef.core__DOT___IFU_io_axi_ar_valid) 
                             | (IData)(vlSelfRef.core__DOT__validReg))));
    bufp->fullIData(oldp+108,(((IData)(vlSelfRef.core__DOT__validReg)
                                ? vlSelfRef.core__DOT__dataReg_addr
                                : vlSelfRef.core__DOT__IFU__DOT__pc)),32);
    bufp->fullBit(oldp+109,(vlSelfRef.core__DOT__Fsram__DOT__r_valid_reg));
    bufp->fullCData(oldp+110,(vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_resp),2);
    bufp->fullIData(oldp+111,(vlSelfRef.core__DOT__Fsram__DOT__r_bits_reg_data),32);
    bufp->fullBit(oldp+112,((1U & (~ (IData)(vlSelfRef.core__DOT__Fsram__DOT__w_state)))));
    bufp->fullBit(oldp+113,(vlSelfRef.core__DOT__Fsram__DOT__b_valid_reg));
    bufp->fullCData(oldp+114,(vlSelfRef.core__DOT__Fsram__DOT__b_bits_reg_resp),2);
    bufp->fullBit(oldp+115,(vlSelfRef.core__DOT__Fsram__DOT__r_state));
    bufp->fullBit(oldp+116,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_en_REG));
    bufp->fullBit(oldp+117,(vlSelfRef.core__DOT__Fsram__DOT__w_state));
    bufp->fullIData(oldp+118,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_aw_addr_REG),32);
    bufp->fullIData(oldp+119,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_data_REG),32);
    bufp->fullCData(oldp+120,(vlSelfRef.core__DOT__Fsram__DOT__write_backend_io_w_strb_REG),4);
    bufp->fullIData(oldp+121,(vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg),32);
    bufp->fullBit(oldp+122,(vlSelfRef.core__DOT__Fsram__DOT___read_backend_done));
    bufp->fullIData(oldp+123,(vlSelfRef.core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb),32);
    bufp->fullBit(oldp+124,(vlSelfRef.core__DOT__Fsram__DOT___write_backend_done));
    bufp->fullBit(oldp+125,(vlSelfRef.core__DOT___IDU_io_out_valid));
    bufp->fullIData(oldp+126,(vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst),32);
    bufp->fullIData(oldp+127,(vlSelfRef.core__DOT___IDU_io_out_bits_pc),32);
    bufp->fullCData(oldp+128,((0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+129,(vlSelfRef.core__DOT___IDU_io_out_bits_rd_en));
    bufp->fullCData(oldp+130,(vlSelfRef.core__DOT___IDU_io_out_bits_opcode),5);
    bufp->fullQData(oldp+131,(vlSelfRef.core__DOT__IDU__DOT__casez_tmp),64);
    bufp->fullBit(oldp+133,(vlSelfRef.core__DOT___IDU_io_out_bits_rs2_en));
    bufp->fullBit(oldp+134,(vlSelfRef.core__DOT___IDU_io_out_bits_unsign_en));
    bufp->fullBit(oldp+135,(vlSelfRef.core__DOT___IDU_io_out_bits_lsu_en));
    bufp->fullBit(oldp+136,(vlSelfRef.core__DOT___IDU_io_out_bits_mw_en));
    bufp->fullCData(oldp+137,(vlSelfRef.core__DOT___IDU_io_out_bits_mlen),4);
    bufp->fullBit(oldp+138,(vlSelfRef.core__DOT___IDU_io_out_bits_branch_en));
    bufp->fullBit(oldp+139,((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18))));
    bufp->fullBit(oldp+140,((0x3ffU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17))));
    bufp->fullBit(oldp+141,((0x7fU == (IData)(vlSelfRef.core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7))));
    bufp->fullCData(oldp+142,((0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+143,((0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                        >> 0x14U))),5);
    bufp->fullQData(oldp+144,(((0U != (0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                >> 0xfU)))
                                ? vlSelfRef.core__DOT__RF__DOT__casez_tmp
                                : 0ULL)),64);
    bufp->fullQData(oldp+146,(((0U != (0x1fU & (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                >> 0x14U)))
                                ? vlSelfRef.core__DOT__RF__DOT__casez_tmp_0
                                : 0ULL)),64);
    bufp->fullIData(oldp+148,((0x3fffffffU & (~ (vlSelfRef.core__DOT____Vcellinp__IDU__io_in_bits_inst 
                                                 >> 2U)))),30);
    bufp->fullBit(oldp+149,(vlSelfRef.core__DOT___IFU_io_out_valid));
    bufp->fullBit(oldp+150,(vlSelfRef.core__DOT___IFU_io_axi_ar_valid));
    bufp->fullIData(oldp+151,(vlSelfRef.core__DOT__IFU__DOT__pc),32);
    bufp->fullBit(oldp+152,(vlSelfRef.core__DOT__IFU__DOT__readyForProducer));
    bufp->fullBit(oldp+153,(vlSelfRef.core__DOT___IFU_io_axi_r_valid_T));
    bufp->fullIData(oldp+154,(vlSelfRef.core__DOT____Vcellinp__IFU__io_axi_r_bits_data),32);
    bufp->fullBit(oldp+155,(vlSelfRef.core__DOT__IFU__DOT__axi_r_decoupled_valid));
    bufp->fullIData(oldp+156,(vlSelfRef.core__DOT__IFU__DOT__pc_in_flight),32);
    bufp->fullBit(oldp+157,(vlSelfRef.core__DOT__IFU__DOT__ar_request_in_flight));
    bufp->fullBit(oldp+158,(vlSelfRef.core__DOT__IFU__DOT__validReg));
    bufp->fullIData(oldp+159,(vlSelfRef.core__DOT__IFU__DOT__dataReg_inst),32);
    bufp->fullIData(oldp+160,(vlSelfRef.core__DOT__IFU__DOT__dataReg_pc),32);
    bufp->fullBit(oldp+161,(vlSelfRef.core__DOT__IFU__DOT__producerFire));
    bufp->fullBit(oldp+162,((0U == (IData)(vlSelfRef.core__DOT__LSU__DOT__state))));
    bufp->fullBit(oldp+163,(vlSelfRef.core__DOT___LSU_io_in_valid_T));
    bufp->fullBit(oldp+164,(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_en));
    bufp->fullCData(oldp+165,(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_addr),5);
    bufp->fullIData(oldp+166,(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_rd_data),32);
    bufp->fullBit(oldp+167,(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_wen));
    bufp->fullBit(oldp+168,(vlSelfRef.core__DOT____Vcellinp__LSU__io_in_bits_mem_ren));
    bufp->fullIData(oldp+169,(((IData)(vlSelfRef.core__DOT__validReg_12)
                                ? vlSelfRef.core__DOT__dataReg_12_mem_addr
                                : vlSelfRef.core__DOT__EXU__DOT___alu_io_out)),32);
    bufp->fullIData(oldp+170,(((IData)(vlSelfRef.core__DOT__validReg_12)
                                ? vlSelfRef.core__DOT__dataReg_12_mem_wdata
                                : vlSelfRef.core__DOT___EXU_io_out_bits_mem_wdata)),32);
    bufp->fullCData(oldp+171,(((IData)(vlSelfRef.core__DOT__validReg_12)
                                ? (IData)(vlSelfRef.core__DOT__dataReg_12_mem_len)
                                : (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_mem_len))),4);
    bufp->fullBit(oldp+172,(((IData)(vlSelfRef.core__DOT__validReg_12)
                              ? (IData)(vlSelfRef.core__DOT__dataReg_12_unsign_en)
                              : (IData)(vlSelfRef.core__DOT___EXU_io_out_bits_unsign_en))));
    bufp->fullBit(oldp+173,(vlSelfRef.core__DOT___LSU_io_out_valid));
    bufp->fullBit(oldp+174,(vlSelfRef.core__DOT___LSU_io_out_bits_rd_en));
    bufp->fullCData(oldp+175,(vlSelfRef.core__DOT___LSU_io_out_bits_rd_addr),5);
    bufp->fullIData(oldp+176,(vlSelfRef.core__DOT___LSU_io_out_bits_rd_data),32);
    bufp->fullBit(oldp+177,(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0));
    bufp->fullIData(oldp+178,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr),32);
    bufp->fullBit(oldp+179,(vlSelfRef.core__DOT___LSU_io_axi_r_ready));
    bufp->fullBit(oldp+180,(((IData)(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg) 
                             | (IData)(vlSelfRef.core__DOT__validReg_6))));
    bufp->fullBit(oldp+181,(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0));
    bufp->fullIData(oldp+182,(vlSelfRef.core__DOT___LSU_io_axi_w_bits_data),32);
    bufp->fullCData(oldp+183,(vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb),4);
    bufp->fullBit(oldp+184,(vlSelfRef.core__DOT___LSU_io_axi_b_ready));
    bufp->fullBit(oldp+185,(((IData)(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg) 
                             | (IData)(vlSelfRef.core__DOT__validReg_8))));
    bufp->fullCData(oldp+186,(vlSelfRef.core__DOT__LSU__DOT__state),3);
    bufp->fullBit(oldp+187,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_en));
    bufp->fullCData(oldp+188,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_addr),5);
    bufp->fullIData(oldp+189,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_rd_data),32);
    bufp->fullIData(oldp+190,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_wdata),32);
    bufp->fullCData(oldp+191,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_len),4);
    bufp->fullBit(oldp+192,(vlSelfRef.core__DOT__LSU__DOT__e2l_reg_unsign_en));
    bufp->fullBit(oldp+193,(vlSelfRef.core__DOT__LSU__DOT__is_passthrough));
    bufp->fullBit(oldp+194,((1U & (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__r_state)))));
    bufp->fullBit(oldp+195,(((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_ar_valid_0) 
                             | (IData)(vlSelfRef.core__DOT__validReg_5))));
    bufp->fullIData(oldp+196,(((IData)(vlSelfRef.core__DOT__validReg_5)
                                ? vlSelfRef.core__DOT__dataReg_5_addr
                                : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr)),32);
    bufp->fullBit(oldp+197,(vlSelfRef.core__DOT__Lsram__DOT__r_valid_reg));
    bufp->fullCData(oldp+198,(vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_resp),2);
    bufp->fullIData(oldp+199,(vlSelfRef.core__DOT__Lsram__DOT__r_bits_reg_data),32);
    bufp->fullBit(oldp+200,((1U & (~ (IData)(vlSelfRef.core__DOT__Lsram__DOT__w_state)))));
    bufp->fullBit(oldp+201,(((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0) 
                             | (IData)(vlSelfRef.core__DOT__validReg_7))));
    bufp->fullIData(oldp+202,(((IData)(vlSelfRef.core__DOT__validReg_7)
                                ? vlSelfRef.core__DOT__dataReg_7_addr
                                : vlSelfRef.core__DOT__LSU__DOT__e2l_reg_mem_addr)),32);
    bufp->fullBit(oldp+203,(((IData)(vlSelfRef.core__DOT__LSU__DOT__io_axi_w_valid_0) 
                             | (IData)(vlSelfRef.core__DOT__validReg_9))));
    bufp->fullIData(oldp+204,(((IData)(vlSelfRef.core__DOT__validReg_9)
                                ? vlSelfRef.core__DOT__dataReg_9_data
                                : vlSelfRef.core__DOT___LSU_io_axi_w_bits_data)),32);
    bufp->fullCData(oldp+205,(((IData)(vlSelfRef.core__DOT__validReg_9)
                                ? (IData)(vlSelfRef.core__DOT__dataReg_9_strb)
                                : (IData)(vlSelfRef.core__DOT___LSU_io_axi_w_bits_strb))),4);
    bufp->fullBit(oldp+206,(vlSelfRef.core__DOT__Lsram__DOT__b_valid_reg));
    bufp->fullCData(oldp+207,(vlSelfRef.core__DOT__Lsram__DOT__b_bits_reg_resp),2);
    bufp->fullBit(oldp+208,(vlSelfRef.core__DOT__Lsram__DOT__r_state));
    bufp->fullBit(oldp+209,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_en_REG));
    bufp->fullBit(oldp+210,(vlSelfRef.core__DOT__Lsram__DOT__w_state));
    bufp->fullIData(oldp+211,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_aw_addr_REG),32);
    bufp->fullIData(oldp+212,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_data_REG),32);
    bufp->fullCData(oldp+213,(vlSelfRef.core__DOT__Lsram__DOT__write_backend_io_w_strb_REG),4);
    bufp->fullIData(oldp+214,(vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg),32);
    bufp->fullBit(oldp+215,(vlSelfRef.core__DOT__Lsram__DOT___read_backend_done));
    bufp->fullIData(oldp+216,(vlSelfRef.core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb),32);
    bufp->fullBit(oldp+217,(vlSelfRef.core__DOT__Lsram__DOT___write_backend_done));
    bufp->fullCData(oldp+218,(vlSelfRef.core__DOT___WBU_io_out_addr),5);
    bufp->fullQData(oldp+219,((QData)((IData)(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data))),64);
    bufp->fullBit(oldp+221,(vlSelfRef.core__DOT___WBU_io_out_en));
    bufp->fullQData(oldp+222,(vlSelfRef.core__DOT__RF__DOT__rf_0),64);
    bufp->fullQData(oldp+224,(vlSelfRef.core__DOT__RF__DOT__rf_1),64);
    bufp->fullQData(oldp+226,(vlSelfRef.core__DOT__RF__DOT__rf_2),64);
    bufp->fullQData(oldp+228,(vlSelfRef.core__DOT__RF__DOT__rf_3),64);
    bufp->fullQData(oldp+230,(vlSelfRef.core__DOT__RF__DOT__rf_4),64);
    bufp->fullQData(oldp+232,(vlSelfRef.core__DOT__RF__DOT__rf_5),64);
    bufp->fullQData(oldp+234,(vlSelfRef.core__DOT__RF__DOT__rf_6),64);
    bufp->fullQData(oldp+236,(vlSelfRef.core__DOT__RF__DOT__rf_7),64);
    bufp->fullQData(oldp+238,(vlSelfRef.core__DOT__RF__DOT__rf_8),64);
    bufp->fullQData(oldp+240,(vlSelfRef.core__DOT__RF__DOT__rf_9),64);
    bufp->fullQData(oldp+242,(vlSelfRef.core__DOT__RF__DOT__rf_10),64);
    bufp->fullQData(oldp+244,(vlSelfRef.core__DOT__RF__DOT__rf_11),64);
    bufp->fullQData(oldp+246,(vlSelfRef.core__DOT__RF__DOT__rf_12),64);
    bufp->fullQData(oldp+248,(vlSelfRef.core__DOT__RF__DOT__rf_13),64);
    bufp->fullQData(oldp+250,(vlSelfRef.core__DOT__RF__DOT__rf_14),64);
    bufp->fullQData(oldp+252,(vlSelfRef.core__DOT__RF__DOT__rf_15),64);
    bufp->fullQData(oldp+254,(vlSelfRef.core__DOT__RF__DOT__rf_16),64);
    bufp->fullQData(oldp+256,(vlSelfRef.core__DOT__RF__DOT__rf_17),64);
    bufp->fullQData(oldp+258,(vlSelfRef.core__DOT__RF__DOT__rf_18),64);
    bufp->fullQData(oldp+260,(vlSelfRef.core__DOT__RF__DOT__rf_19),64);
    bufp->fullQData(oldp+262,(vlSelfRef.core__DOT__RF__DOT__rf_20),64);
    bufp->fullQData(oldp+264,(vlSelfRef.core__DOT__RF__DOT__rf_21),64);
    bufp->fullQData(oldp+266,(vlSelfRef.core__DOT__RF__DOT__rf_22),64);
    bufp->fullQData(oldp+268,(vlSelfRef.core__DOT__RF__DOT__rf_23),64);
    bufp->fullQData(oldp+270,(vlSelfRef.core__DOT__RF__DOT__rf_24),64);
    bufp->fullQData(oldp+272,(vlSelfRef.core__DOT__RF__DOT__rf_25),64);
    bufp->fullQData(oldp+274,(vlSelfRef.core__DOT__RF__DOT__rf_26),64);
    bufp->fullQData(oldp+276,(vlSelfRef.core__DOT__RF__DOT__rf_27),64);
    bufp->fullQData(oldp+278,(vlSelfRef.core__DOT__RF__DOT__rf_28),64);
    bufp->fullQData(oldp+280,(vlSelfRef.core__DOT__RF__DOT__rf_29),64);
    bufp->fullQData(oldp+282,(vlSelfRef.core__DOT__RF__DOT__rf_30),64);
    bufp->fullQData(oldp+284,(vlSelfRef.core__DOT__RF__DOT__rf_31),64);
    bufp->fullQData(oldp+286,(vlSelfRef.core__DOT__RF__DOT__casez_tmp),64);
    bufp->fullQData(oldp+288,(vlSelfRef.core__DOT__RF__DOT__casez_tmp_0),64);
    bufp->fullBit(oldp+290,(((IData)(vlSelfRef.core__DOT__validReg_13)
                              ? (IData)(vlSelfRef.core__DOT__dataReg_13_rd_en)
                              : (IData)(vlSelfRef.core__DOT___LSU_io_out_bits_rd_en))));
    bufp->fullIData(oldp+291,(vlSelfRef.core__DOT____Vcellinp__WBU__io_in_bits_rd_data),32);
    bufp->fullBit(oldp+292,(vlSelfRef.clock));
    bufp->fullBit(oldp+293,(vlSelfRef.reset));
    bufp->fullIData(oldp+294,(vlSelfRef.io_debugPC),32);
    bufp->fullIData(oldp+295,(vlSelfRef.io_debugInst),32);
    bufp->fullIData(oldp+296,(vlSelfRef.io_debugin1),32);
    bufp->fullIData(oldp+297,(vlSelfRef.io_debugin2),32);
    bufp->fullIData(oldp+298,(vlSelfRef.io_debugout1),32);
    bufp->fullIData(oldp+299,(vlSelfRef.io_debugmemaddr),32);
    bufp->fullIData(oldp+300,(vlSelfRef.io_debugmemdata),32);
    bufp->fullBit(oldp+301,(vlSelfRef.io_inst_done));
    bufp->fullIData(oldp+302,(((IData)(vlSelfRef.core__DOT__validReg_11)
                                ? vlSelfRef.core__DOT__dataReg_11_rs1_data
                                : vlSelfRef.io_debugin1)),32);
}
