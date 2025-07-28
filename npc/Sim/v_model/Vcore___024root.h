// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_inst_done,0,0);
        VL_OUT8(io_log_ready1,0,0);
        VL_OUT8(io_log_ready2,0,0);
        VL_OUT8(io_log_ready3,0,0);
        VL_OUT8(io_log_ready4,0,0);
        VL_OUT8(io_log_ready5,0,0);
        VL_OUT8(io_Log_valid1,0,0);
        VL_OUT8(io_Log_valid2,0,0);
        VL_OUT8(io_Log_valid3,0,0);
        VL_OUT8(io_Log_valid4,0,0);
        VL_OUT8(io_Log_valid5,0,0);
        CData/*0:0*/ core__DOT__validReg_8;
        CData/*0:0*/ core__DOT__validReg_7;
        CData/*0:0*/ core__DOT__validReg_6;
        CData/*0:0*/ core__DOT__validReg_4;
        CData/*0:0*/ core__DOT__validReg_3;
        CData/*0:0*/ core__DOT__validReg_2;
        CData/*0:0*/ core__DOT__validReg_1;
        CData/*0:0*/ core__DOT__validReg;
        CData/*0:0*/ core__DOT___IDU_io_out_bits_rd_en;
        CData/*4:0*/ core__DOT___IDU_io_out_bits_opcode;
        CData/*0:0*/ core__DOT___IDU_io_out_bits_unsign_en;
        CData/*2:0*/ core__DOT___IDU_io_out_bits_mlen;
        CData/*0:0*/ core__DOT__producerFire_2;
        CData/*4:0*/ core__DOT__dataReg_3_rd_addr;
        CData/*0:0*/ core__DOT__dataReg_3_rd_en;
        CData/*4:0*/ core__DOT__dataReg_3_opcode;
        CData/*0:0*/ core__DOT__dataReg_3_rs2_en;
        CData/*0:0*/ core__DOT__dataReg_3_unsign_en;
        CData/*0:0*/ core__DOT__dataReg_3_csr_en;
        CData/*0:0*/ core__DOT__dataReg_3_lsu_en;
        CData/*0:0*/ core__DOT__dataReg_3_mw_en;
        CData/*2:0*/ core__DOT__dataReg_3_mlen;
        CData/*0:0*/ core__DOT__dataReg_3_branch_en;
        CData/*0:0*/ core__DOT__dataReg_3_jump_en;
        CData/*0:0*/ core__DOT__dataReg_3_jalr_en;
        CData/*0:0*/ core__DOT__producerFire_3;
        CData/*0:0*/ core__DOT__dataReg_4_rd_en;
        CData/*4:0*/ core__DOT__dataReg_4_rd_addr;
        CData/*0:0*/ core__DOT__dataReg_4_mem_wen;
        CData/*2:0*/ core__DOT__dataReg_4_mem_len;
        CData/*0:0*/ core__DOT__producerFire_4;
        CData/*0:0*/ core__DOT__validReg_5;
        CData/*0:0*/ core__DOT__dataReg_5_rd_en;
        CData/*4:0*/ core__DOT__dataReg_5_rd_addr;
        CData/*0:0*/ core__DOT__producerFire_5;
        CData/*0:0*/ core__DOT__dataReg_6_wen;
        CData/*2:0*/ core__DOT__dataReg_6_len;
        CData/*0:0*/ core__DOT__producerFire_6;
        CData/*0:0*/ core__DOT__producerFire_7;
        CData/*0:0*/ core__DOT__producerFire_8;
        CData/*0:0*/ core__DOT__consumerFire_8;
        CData/*0:0*/ core__DOT___GEN;
        CData/*0:0*/ core__DOT___GEN_0;
        CData/*0:0*/ core__DOT__consumerFire_2;
        CData/*0:0*/ core__DOT___GEN_1;
        CData/*0:0*/ core__DOT___GEN_2;
        CData/*0:0*/ core__DOT___GEN_3;
        CData/*0:0*/ core__DOT___GEN_4;
        CData/*0:0*/ core__DOT___GEN_5;
        CData/*0:0*/ core__DOT__consumerFire_7;
        CData/*0:0*/ core__DOT___GEN_6;
    };
    struct {
        CData/*0:0*/ core__DOT__Fsram__DOT___rdata_reg_T;
        CData/*0:0*/ core__DOT__Fsram__DOT__resp_valid_reg;
        CData/*0:0*/ core__DOT__Lsram__DOT___rdata_reg_T;
        CData/*0:0*/ core__DOT__Lsram__DOT__resp_valid_reg;
        CData/*1:0*/ core__DOT__IFU__DOT__state;
        CData/*0:0*/ core__DOT__IFU__DOT__is_first_inst;
        CData/*0:0*/ core__DOT__IFU__DOT___GEN_1;
        CData/*0:0*/ core__DOT__IFU__DOT___GEN_3;
        CData/*0:0*/ core__DOT__IFU__DOT___GEN_4;
        CData/*0:0*/ core__DOT__IFU__DOT___GEN_5;
        CData/*1:0*/ core__DOT__IFU__DOT__casez_tmp;
        CData/*6:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_5;
        CData/*5:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_12;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_14;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_21;
        CData/*6:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_25;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_37;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_51;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_27;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_28;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_33;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_34;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_37;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_39;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_40;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_42;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_43;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_45;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_47;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_48;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_51;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_53;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_55;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_56;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_57;
        CData/*1:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_58;
        CData/*1:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_59;
        CData/*2:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60;
        CData/*4:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61;
        CData/*5:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62;
        CData/*5:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_63;
        CData/*0:0*/ core__DOT__RF__DOT___GEN;
        CData/*0:0*/ core__DOT__LSU__DOT__state;
        CData/*0:0*/ core__DOT__LSU__DOT__l2w_reg_rd_en;
        CData/*4:0*/ core__DOT__LSU__DOT__l2w_reg_rd_addr;
        CData/*0:0*/ core__DOT__LSU__DOT___GEN;
        CData/*0:0*/ core__DOT__LSU__DOT___GEN_0;
        CData/*0:0*/ core__DOT__LSU__DOT__is_load;
        CData/*0:0*/ core__DOT__LSU__DOT___GEN_2;
        CData/*6:0*/ __Vtableidx1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_10;
        SData/*14:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16;
        SData/*12:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17;
        SData/*14:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_18;
    };
    struct {
        SData/*9:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24;
        SData/*14:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_29;
        SData/*8:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52;
        SData/*14:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_53;
        SData/*15:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_32;
        SData/*15:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55;
        SData/*9:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_64;
        SData/*11:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65;
        VL_OUT(io_debugPC,31,0);
        VL_OUT(io_debugInst,31,0);
        VL_OUT(io_debugin1,31,0);
        VL_OUT(io_debugin2,31,0);
        VL_OUT(io_debugout1,31,0);
        VL_OUT(io_debugmemaddr,31,0);
        VL_OUT(io_debugmemdata,31,0);
        IData/*31:0*/ core__DOT__dataReg_inst;
        IData/*31:0*/ core__DOT__dataReg_pc;
        IData/*31:0*/ core__DOT__dataReg_1_addr;
        IData/*31:0*/ core__DOT__dataReg_2_rdata;
        IData/*31:0*/ core__DOT__dataReg_3_rs1_data;
        IData/*31:0*/ core__DOT__dataReg_3_rs2_data;
        IData/*31:0*/ core__DOT__dataReg_3_pc;
        IData/*31:0*/ core__DOT__dataReg_4_rd_data;
        IData/*31:0*/ core__DOT__dataReg_4_mem_addr;
        IData/*31:0*/ core__DOT__dataReg_4_mem_wdata;
        IData/*31:0*/ core__DOT__dataReg_5_rd_data;
        IData/*31:0*/ core__DOT__dataReg_6_addr;
        IData/*31:0*/ core__DOT__dataReg_6_wdata;
        IData/*31:0*/ core__DOT__dataReg_7_rdata;
        IData/*31:0*/ core__DOT__Fsram__DOT__writeDPI__DOT__unnamedblk1__DOT__temp_data;
        IData/*31:0*/ core__DOT__Fsram__DOT__writeDPI__DOT__unnamedblk2__DOT__temp_data;
        IData/*31:0*/ core__DOT__Lsram__DOT__writeDPI__DOT__unnamedblk1__DOT__temp_data;
        IData/*31:0*/ core__DOT__Lsram__DOT__writeDPI__DOT__unnamedblk2__DOT__temp_data;
        IData/*31:0*/ core__DOT__IFU__DOT__pc;
        IData/*31:0*/ core__DOT__IFU__DOT__result_reg_inst;
        IData/*31:0*/ core__DOT__IFU__DOT__result_reg_pc;
        IData/*31:0*/ core__DOT__IFU__DOT___pc_T;
        IData/*31:0*/ core__DOT__EXU__DOT___alu_io_out;
        IData/*31:0*/ core__DOT__EXU__DOT____Vcellinp__alu__io_in2;
        IData/*31:0*/ core__DOT__EXU__DOT____Vcellinp__alu__io_in1;
        IData/*31:0*/ core__DOT__LSU__DOT__l2w_reg_rd_data;
        IData/*31:0*/ __Vfunc_core__DOT__Fsram__DOT__readDPI__DOT__mem_read__0__Vfuncout;
        IData/*31:0*/ __Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__1__Vfuncout;
        IData/*31:0*/ __Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__2__Vfuncout;
        IData/*31:0*/ __Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__3__Vfuncout;
        IData/*31:0*/ __Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__4__Vfuncout;
        IData/*31:0*/ __Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__5__Vfuncout;
        IData/*31:0*/ __Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__6__Vfuncout;
        IData/*31:0*/ __Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__7__Vfuncout;
        IData/*31:0*/ __Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__8__Vfuncout;
        IData/*31:0*/ __Vfunc_core__DOT__Lsram__DOT__readDPI__DOT__mem_read__9__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ core__DOT__dataReg_3_imm;
        QData/*63:0*/ core__DOT__Fsram__DOT__rdata_reg;
        QData/*63:0*/ core__DOT__Fsram__DOT__readDPI__DOT__rdata_reg;
        QData/*63:0*/ core__DOT__Lsram__DOT__rdata_reg;
        QData/*63:0*/ core__DOT__Lsram__DOT__readDPI__DOT__rdata_reg;
        QData/*63:0*/ core__DOT__IDU__DOT__casez_tmp;
        QData/*63:0*/ core__DOT__RF__DOT__rf_0;
        QData/*63:0*/ core__DOT__RF__DOT__rf_1;
        QData/*63:0*/ core__DOT__RF__DOT__rf_2;
        QData/*63:0*/ core__DOT__RF__DOT__rf_3;
        QData/*63:0*/ core__DOT__RF__DOT__rf_4;
        QData/*63:0*/ core__DOT__RF__DOT__rf_5;
    };
    struct {
        QData/*63:0*/ core__DOT__RF__DOT__rf_6;
        QData/*63:0*/ core__DOT__RF__DOT__rf_7;
        QData/*63:0*/ core__DOT__RF__DOT__rf_8;
        QData/*63:0*/ core__DOT__RF__DOT__rf_9;
        QData/*63:0*/ core__DOT__RF__DOT__rf_10;
        QData/*63:0*/ core__DOT__RF__DOT__rf_11;
        QData/*63:0*/ core__DOT__RF__DOT__rf_12;
        QData/*63:0*/ core__DOT__RF__DOT__rf_13;
        QData/*63:0*/ core__DOT__RF__DOT__rf_14;
        QData/*63:0*/ core__DOT__RF__DOT__rf_15;
        QData/*63:0*/ core__DOT__RF__DOT__rf_16;
        QData/*63:0*/ core__DOT__RF__DOT__rf_17;
        QData/*63:0*/ core__DOT__RF__DOT__rf_18;
        QData/*63:0*/ core__DOT__RF__DOT__rf_19;
        QData/*63:0*/ core__DOT__RF__DOT__rf_20;
        QData/*63:0*/ core__DOT__RF__DOT__rf_21;
        QData/*63:0*/ core__DOT__RF__DOT__rf_22;
        QData/*63:0*/ core__DOT__RF__DOT__rf_23;
        QData/*63:0*/ core__DOT__RF__DOT__rf_24;
        QData/*63:0*/ core__DOT__RF__DOT__rf_25;
        QData/*63:0*/ core__DOT__RF__DOT__rf_26;
        QData/*63:0*/ core__DOT__RF__DOT__rf_27;
        QData/*63:0*/ core__DOT__RF__DOT__rf_28;
        QData/*63:0*/ core__DOT__RF__DOT__rf_29;
        QData/*63:0*/ core__DOT__RF__DOT__rf_30;
        QData/*63:0*/ core__DOT__RF__DOT__rf_31;
        QData/*63:0*/ core__DOT__RF__DOT__casez_tmp;
        QData/*63:0*/ core__DOT__RF__DOT__casez_tmp_0;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore___024root(Vcore__Syms* symsp, const char* v__name);
    ~Vcore___024root();
    VL_UNCOPYABLE(Vcore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
