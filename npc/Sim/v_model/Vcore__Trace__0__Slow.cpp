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
    tracep->declBit(c+80,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"io_debugPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_debugInst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"io_debugDNPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+80,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"io_debugPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_debugInst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"io_debugDNPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+82,0,"io_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"io_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"io_rf_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_rf_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_branchCond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"io_dnpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+83,0,"io_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"io_rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+2,0,"io_rs1_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"io_rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+7,0,"io_rs2_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"io_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+9,0,"io_rd_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+11,0,"io_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+13,0,"io_jumpEn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"decodedBundle_invInputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declQuad(c+11,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("executer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+80,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"io_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"io_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"io_dmem_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+19,0,"io_dmem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"io_dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"io_dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"io_dmem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+27,0,"io_dmem_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"io_branchCond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ebreakInst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+80,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("instfetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+80,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+29,0,"io_imem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+31,0,"io_imem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+82,0,"io_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"io_dnpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_pcSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"pc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ram2r1w", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+80,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+29,0,"io_imem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+31,0,"io_imem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+18,0,"io_dmem_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+19,0,"io_dmem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"io_dmem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"io_dmem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"io_dmem_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+27,0,"io_dmem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+80,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"imem_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+29,0,"imem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+35,0,"imem_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+18,0,"dmem_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+19,0,"dmem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"dmem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"dmem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"dmem_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+27,0,"dmem_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+21,0,"mem_rdata_64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+36,0,"addr_offset_imem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"addr_offset_dmem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"lower_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"upper_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+80,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"io_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+40,0,"io_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+42,0,"io_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+8,0,"io_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+44,0,"io_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+9,0,"io_rd_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"rf_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"rf_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"rf_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"rf_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"rf_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"rf_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"rf_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"rf_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"rf_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"rf_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"rf_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"rf_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"rf_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"rf_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"rf_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"rf_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"rf_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"rf_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"rf_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"rf_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"rf_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"rf_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"rf_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"rf_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"rf_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"rf_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"rf_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"rf_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"rf_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"rf_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"rf_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"rf_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"casez_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"casez_tmp_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
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
    bufp->fullBit(oldp+85,(1U));
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
    bufp->fullIData(oldp+1,((IData)(vlSelfRef.core__DOT__decode__DOT__casez_tmp)),32);
    bufp->fullBit(oldp+2,(vlSelfRef.core__DOT___decode_io_rs1_en));
    bufp->fullIData(oldp+3,(vlSelfRef.core__DOT____Vcellinp__control__io_rf_data),32);
    bufp->fullBit(oldp+4,(vlSelfRef.core__DOT___executer_io_branchCond));
    bufp->fullCData(oldp+5,(vlSelfRef.core__DOT___decode_io_rs1_addr),5);
    bufp->fullCData(oldp+6,(vlSelfRef.core__DOT___decode_io_rs2_addr),5);
    bufp->fullBit(oldp+7,(((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_16)) 
                           | ((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_18)) 
                              | ((0x7fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_19)) 
                                 | ((0x1fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_20)) 
                                    | ((0x7fffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_21)) 
                                       | (((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_0) 
                                           & ((IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_1) 
                                              & (vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs 
                                                 & (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_58)))) 
                                          | ((0xffU 
                                              == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)) 
                                             | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_53))))))))));
    bufp->fullCData(oldp+8,(vlSelfRef.core__DOT___decode_io_rd_addr),5);
    bufp->fullBit(oldp+9,(((0x7fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T)) 
                           | ((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_1)) 
                              | ((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_4)) 
                                 | ((0x3ffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_9)) 
                                    | ((0x1ffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_12)) 
                                       | ((0x3fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_14)) 
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
                                                                  | (IData)(vlSelfRef.core__DOT__decode__DOT____VdfgRegularize_h94ddb430_0_54)))))))))))))))));
    bufp->fullCData(oldp+10,(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2),8);
    bufp->fullQData(oldp+11,(vlSelfRef.core__DOT__decode__DOT__casez_tmp),64);
    bufp->fullBit(oldp+13,(((0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_24)) 
                            | ((0x1ffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_25)) 
                               | ((0x7fU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_27)) 
                                  | (0xffU == (IData)(vlSelfRef.core__DOT__decode__DOT___decodedBundle_andMatrixOutputs_T_48)))))));
    bufp->fullIData(oldp+14,(vlSelfRef.core__DOT__decode__DOT__decodedBundle_invInputs),30);
    bufp->fullIData(oldp+15,(vlSelfRef.core__DOT____Vcellinp__executer__io_in1),32);
    bufp->fullIData(oldp+16,(vlSelfRef.core__DOT____Vcellinp__executer__io_in2),32);
    bufp->fullIData(oldp+17,(vlSelfRef.core__DOT___executer_io_out),32);
    bufp->fullBit(oldp+18,(((~ (IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28)) 
                            & ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                               | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                  | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                     | ((0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                        | (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11))))))));
    bufp->fullQData(oldp+19,(((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28)
                               ? 0ULL : ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                          ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                          : ((0x15U 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                              ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                              : ((0x16U 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                  ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                  : 
                                                 ((0x17U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                   ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                    ? (QData)((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_1))
                                                    : 
                                                   ((0x19U 
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
                                                       : 0ULL)))))))))),64);
    bufp->fullQData(oldp+21,(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata_64),64);
    bufp->fullQData(oldp+23,((((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                               | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                  | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                     | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                        | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))
                               ? 0ULL : ((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                          ? (QData)((IData)(
                                                            (0xffU 
                                                             & vlSelfRef.core__DOT____Vcellinp__executer__io_in2)))
                                          : ((0x1aU 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                              ? (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSelfRef.core__DOT____Vcellinp__executer__io_in2)))
                                              : ((0x1bU 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                  ? (QData)((IData)(vlSelfRef.core__DOT____Vcellinp__executer__io_in2))
                                                  : 0ULL))))),64);
    bufp->fullQData(oldp+25,((((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                               | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                  | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                     | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                        | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))
                               ? 0ULL : ((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                          ? 0xffULL
                                          : ((0x1aU 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                              ? 0xffffULL
                                              : ((0x1bU 
                                                  == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))
                                                  ? 0xffffffffULL
                                                  : 0ULL))))),64);
    bufp->fullBit(oldp+27,(((~ ((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                                | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                   | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                      | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                         | (0x18U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))))) 
                            & (IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_11))));
    bufp->fullBit(oldp+28,(((~ ((((IData)(vlSelfRef.core__DOT__executer__DOT___GEN_28) 
                                  | ((0x14U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                     | ((IData)(vlSelfRef.core__DOT__executer__DOT____VdfgRegularize_h3006ad77_0_14) 
                                        | ((0x17U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                           | (0x18U 
                                              == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))))) 
                                 | ((0x19U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                    | ((0x1aU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                       | (0x1bU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2))))) 
                                | ((0x1cU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                   | ((0x1dU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                      | ((0x1eU == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                         | ((0x1fU 
                                             == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                            | ((0x20U 
                                                == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                               | ((0x21U 
                                                   == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                  | ((0x22U 
                                                      == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                     | ((0x23U 
                                                         == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                        | ((0x24U 
                                                            == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                           | ((0x25U 
                                                               == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)) 
                                                              | (0x26U 
                                                                 == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))))))))))))) 
                            & (0x27U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_2)))));
    bufp->fullQData(oldp+29,((QData)((IData)(vlSelfRef.core__DOT__instfetch__DOT__pc))),64);
    bufp->fullQData(oldp+31,((QData)((IData)(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata))),64);
    bufp->fullBit(oldp+33,(vlSelfRef.core__DOT__instfetch__DOT__pc_en));
    bufp->fullIData(oldp+34,(vlSelfRef.core__DOT__instfetch__DOT__pc),32);
    bufp->fullIData(oldp+35,(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__mem_rdata),32);
    bufp->fullIData(oldp+36,((vlSelfRef.core__DOT__instfetch__DOT__pc 
                              - (IData)(0x80000000U))),32);
    bufp->fullIData(oldp+37,(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__addr_offset_dmem),32);
    bufp->fullIData(oldp+38,(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__lower_data),32);
    bufp->fullIData(oldp+39,(vlSelfRef.core__DOT__ram2r1w__DOT__mem__DOT__upper_data),32);
    bufp->fullQData(oldp+40,((QData)((IData)(vlSelfRef.core__DOT____Vcellinp__control__io_rf_data))),64);
    bufp->fullQData(oldp+42,((QData)((IData)(((0U != (IData)(vlSelfRef.core__DOT___decode_io_rs2_addr))
                                               ? vlSelfRef.core__DOT__rf__DOT__casez_tmp_0
                                               : 0U)))),64);
    bufp->fullQData(oldp+44,((QData)((IData)(vlSelfRef.core__DOT___executer_io_out))),64);
    bufp->fullIData(oldp+46,(vlSelfRef.core__DOT__rf__DOT__rf_0),32);
    bufp->fullIData(oldp+47,(vlSelfRef.core__DOT__rf__DOT__rf_1),32);
    bufp->fullIData(oldp+48,(vlSelfRef.core__DOT__rf__DOT__rf_2),32);
    bufp->fullIData(oldp+49,(vlSelfRef.core__DOT__rf__DOT__rf_3),32);
    bufp->fullIData(oldp+50,(vlSelfRef.core__DOT__rf__DOT__rf_4),32);
    bufp->fullIData(oldp+51,(vlSelfRef.core__DOT__rf__DOT__rf_5),32);
    bufp->fullIData(oldp+52,(vlSelfRef.core__DOT__rf__DOT__rf_6),32);
    bufp->fullIData(oldp+53,(vlSelfRef.core__DOT__rf__DOT__rf_7),32);
    bufp->fullIData(oldp+54,(vlSelfRef.core__DOT__rf__DOT__rf_8),32);
    bufp->fullIData(oldp+55,(vlSelfRef.core__DOT__rf__DOT__rf_9),32);
    bufp->fullIData(oldp+56,(vlSelfRef.core__DOT__rf__DOT__rf_10),32);
    bufp->fullIData(oldp+57,(vlSelfRef.core__DOT__rf__DOT__rf_11),32);
    bufp->fullIData(oldp+58,(vlSelfRef.core__DOT__rf__DOT__rf_12),32);
    bufp->fullIData(oldp+59,(vlSelfRef.core__DOT__rf__DOT__rf_13),32);
    bufp->fullIData(oldp+60,(vlSelfRef.core__DOT__rf__DOT__rf_14),32);
    bufp->fullIData(oldp+61,(vlSelfRef.core__DOT__rf__DOT__rf_15),32);
    bufp->fullIData(oldp+62,(vlSelfRef.core__DOT__rf__DOT__rf_16),32);
    bufp->fullIData(oldp+63,(vlSelfRef.core__DOT__rf__DOT__rf_17),32);
    bufp->fullIData(oldp+64,(vlSelfRef.core__DOT__rf__DOT__rf_18),32);
    bufp->fullIData(oldp+65,(vlSelfRef.core__DOT__rf__DOT__rf_19),32);
    bufp->fullIData(oldp+66,(vlSelfRef.core__DOT__rf__DOT__rf_20),32);
    bufp->fullIData(oldp+67,(vlSelfRef.core__DOT__rf__DOT__rf_21),32);
    bufp->fullIData(oldp+68,(vlSelfRef.core__DOT__rf__DOT__rf_22),32);
    bufp->fullIData(oldp+69,(vlSelfRef.core__DOT__rf__DOT__rf_23),32);
    bufp->fullIData(oldp+70,(vlSelfRef.core__DOT__rf__DOT__rf_24),32);
    bufp->fullIData(oldp+71,(vlSelfRef.core__DOT__rf__DOT__rf_25),32);
    bufp->fullIData(oldp+72,(vlSelfRef.core__DOT__rf__DOT__rf_26),32);
    bufp->fullIData(oldp+73,(vlSelfRef.core__DOT__rf__DOT__rf_27),32);
    bufp->fullIData(oldp+74,(vlSelfRef.core__DOT__rf__DOT__rf_28),32);
    bufp->fullIData(oldp+75,(vlSelfRef.core__DOT__rf__DOT__rf_29),32);
    bufp->fullIData(oldp+76,(vlSelfRef.core__DOT__rf__DOT__rf_30),32);
    bufp->fullIData(oldp+77,(vlSelfRef.core__DOT__rf__DOT__rf_31),32);
    bufp->fullIData(oldp+78,(vlSelfRef.core__DOT__rf__DOT__casez_tmp),32);
    bufp->fullIData(oldp+79,(vlSelfRef.core__DOT__rf__DOT__casez_tmp_0),32);
    bufp->fullBit(oldp+80,(vlSelfRef.clock));
    bufp->fullBit(oldp+81,(vlSelfRef.reset));
    bufp->fullIData(oldp+82,(vlSelfRef.io_debugPC),32);
    bufp->fullIData(oldp+83,(vlSelfRef.io_debugInst),32);
    bufp->fullIData(oldp+84,(vlSelfRef.io_debugDNPC),32);
}
