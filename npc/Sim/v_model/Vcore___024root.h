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
        VL_OUT8(io_ls_done,0,0);
        CData/*4:0*/ core__DOT___WBU_io_out_addr;
        CData/*0:0*/ core__DOT___WBU_io_out_en;
        CData/*0:0*/ core__DOT___LSU_io_axi_b_ready;
        CData/*4:0*/ core__DOT___EXU_io_out_bits_rd_addr;
        CData/*0:0*/ core__DOT___EXU_io_out_bits_mem_wen;
        CData/*0:0*/ core__DOT___EXU_io_out_bits_mem_ren;
        CData/*0:0*/ core__DOT___EXU_io_out_bits_unsign_en;
        CData/*0:0*/ core__DOT___EXU_io_pcCtrl_pcSel;
        CData/*0:0*/ core__DOT___IDU_io_out_bits_lsu_en;
        CData/*0:0*/ core__DOT___IDU_io_out_bits_branch_en;
        CData/*4:0*/ core__DOT___IDU_io_d2r_rs1_addr;
        CData/*4:0*/ core__DOT___IDU_io_d2r_rs2_addr;
        CData/*0:0*/ core__DOT___IDU_io_ebreakhandler;
        CData/*0:0*/ core__DOT__LS_reg;
        CData/*0:0*/ core__DOT__Fsram__DOT__r_state;
        CData/*0:0*/ core__DOT__Fsram__DOT___write_backend_done;
        CData/*0:0*/ core__DOT__Fsram__DOT___read_backend_done;
        CData/*0:0*/ core__DOT__Fsram__DOT___read_backend_io_en_T;
        CData/*0:0*/ core__DOT__Fsram__DOT__write_backend_io_en_REG;
        CData/*0:0*/ core__DOT__Fsram__DOT__r_valid_reg;
        CData/*0:0*/ core__DOT__Fsram__DOT__w_state;
        CData/*3:0*/ core__DOT__Fsram__DOT__write_backend_io_w_strb_REG;
        CData/*0:0*/ core__DOT__Fsram__DOT__b_valid_reg;
        CData/*0:0*/ core__DOT__Fsram__DOT___GEN;
        CData/*2:0*/ core__DOT__Fsram__DOT__read_backend__DOT__delay;
        CData/*0:0*/ core__DOT__Lsram__DOT__r_state;
        CData/*0:0*/ core__DOT__Lsram__DOT___write_backend_done;
        CData/*0:0*/ core__DOT__Lsram__DOT___read_backend_done;
        CData/*0:0*/ core__DOT__Lsram__DOT___read_backend_io_en_T;
        CData/*0:0*/ core__DOT__Lsram__DOT__write_backend_io_en_REG;
        CData/*0:0*/ core__DOT__Lsram__DOT__r_valid_reg;
        CData/*0:0*/ core__DOT__Lsram__DOT__w_state;
        CData/*3:0*/ core__DOT__Lsram__DOT__write_backend_io_w_strb_REG;
        CData/*0:0*/ core__DOT__Lsram__DOT__b_valid_reg;
        CData/*0:0*/ core__DOT__Lsram__DOT___GEN;
        CData/*0:0*/ core__DOT__Lsram__DOT___GEN_0;
        CData/*0:0*/ core__DOT__Lsram__DOT___write_backend_io_en_T;
        CData/*2:0*/ core__DOT__Lsram__DOT__read_backend__DOT__delay;
        CData/*0:0*/ core__DOT__IFU__DOT__inst_buf_valid;
        CData/*1:0*/ core__DOT__IFU__DOT__state;
        CData/*0:0*/ core__DOT__IFU__DOT___GEN;
        CData/*0:0*/ core__DOT__IFU__DOT___GEN_0;
        CData/*0:0*/ core__DOT__IFU__DOT__io_axi_ar_valid_0;
        CData/*0:0*/ core__DOT__IFU__DOT___GEN_2;
        CData/*0:0*/ core__DOT__IFU__DOT___GEN_3;
        CData/*0:0*/ core__DOT__IFU__DOT___GEN_4;
        CData/*6:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_1;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_3;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_4;
        CData/*5:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_9;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_11;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_13;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_20;
        CData/*6:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_24;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_36;
        CData/*7:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_50;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_30;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_31;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_32;
    };
    struct {
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_45;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_46;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_48;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_49;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_50;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_52;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_54;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_55;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_56;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_57;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_59;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_60;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_61;
        CData/*0:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_62;
        CData/*1:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_64;
        CData/*1:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_65;
        CData/*2:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_66;
        CData/*4:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_67;
        CData/*4:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_68;
        CData/*5:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_69;
        CData/*5:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_70;
        CData/*6:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_71;
        CData/*1:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_74;
        CData/*0:0*/ core__DOT__EXU__DOT____VdfgRegularize_h9d365bda_1_1;
        CData/*0:0*/ core__DOT__rf__DOT___GEN;
        CData/*2:0*/ core__DOT__LSU__DOT__state;
        CData/*4:0*/ core__DOT__LSU__DOT__e2l_reg_rd_addr;
        CData/*3:0*/ core__DOT__LSU__DOT__e2l_reg_mem_len;
        CData/*0:0*/ core__DOT__LSU__DOT__e2l_reg_unsign_en;
        CData/*0:0*/ core__DOT__LSU__DOT__is_passthrough;
        CData/*0:0*/ core__DOT__LSU__DOT__io_in_ready_0;
        CData/*0:0*/ core__DOT__LSU__DOT___GEN_0;
        CData/*0:0*/ core__DOT__LSU__DOT__io_axi_ar_valid_0;
        CData/*0:0*/ core__DOT__LSU__DOT___GEN_1;
        CData/*0:0*/ core__DOT__LSU__DOT___GEN_3;
        CData/*0:0*/ core__DOT__LSU__DOT__io_axi_w_valid_0;
        CData/*0:0*/ core__DOT__LSU__DOT___GEN_4;
        CData/*0:0*/ core__DOT__LSU__DOT___GEN_5;
        CData/*0:0*/ core__DOT__LSU__DOT___GEN_6;
        CData/*0:0*/ core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_0;
        CData/*0:0*/ core__DOT__LSU__DOT____VdfgRegularize_ha7d0a824_0_1;
        CData/*0:0*/ core__DOT__WBU__DOT__io_w2f_inst_done_REG;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_1_0;
        CData/*3:0*/ __VdfgRegularize_hd87f99a1_1_3;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_7;
        SData/*8:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_8;
        SData/*14:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_15;
        SData/*12:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_16;
        SData/*14:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_17;
        SData/*8:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_22;
        SData/*9:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_23;
        SData/*13:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_27;
        SData/*14:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_28;
        SData/*14:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_30;
        SData/*8:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_35;
        SData/*14:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_52;
        SData/*14:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_55;
        SData/*13:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_61;
        SData/*8:0*/ core__DOT__IDU__DOT___decodedBundle_orMatrixOutputs_T_16;
        SData/*15:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_31;
        SData/*15:0*/ core__DOT__IDU__DOT___decodedBundle_andMatrixOutputs_T_54;
    };
    struct {
        SData/*8:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_72;
        SData/*9:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_73;
        SData/*9:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_75;
        SData/*11:0*/ core__DOT__IDU__DOT____VdfgRegularize_h94ddb430_0_76;
        VL_OUT(io_debugPC,31,0);
        VL_OUT(io_debugInst,31,0);
        VL_OUT(io_debugin1,31,0);
        VL_OUT(io_debugin2,31,0);
        VL_OUT(io_debugout1,31,0);
        VL_OUT(io_debugmemaddr,31,0);
        VL_OUT(io_debugmemdata,31,0);
        VL_OUT(io_debugwaddr,31,0);
        VL_OUT(io_debugwdata,31,0);
        IData/*31:0*/ core__DOT___WBU_io_out_data;
        IData/*31:0*/ core__DOT___EXU_io_pcCtrl_dnpc;
        IData/*31:0*/ core__DOT__Fsram__DOT__r_bits_reg_data;
        IData/*31:0*/ core__DOT__Fsram__DOT__write_backend_io_aw_addr_REG;
        IData/*31:0*/ core__DOT__Fsram__DOT__write_backend_io_w_data_REG;
        IData/*31:0*/ core__DOT__Fsram__DOT__read_backend__DOT__r_data_reg;
        IData/*31:0*/ core__DOT__Fsram__DOT__read_backend__DOT__r_data_comb;
        IData/*31:0*/ core__DOT__Lsram__DOT__r_bits_reg_data;
        IData/*31:0*/ core__DOT__Lsram__DOT__write_backend_io_aw_addr_REG;
        IData/*31:0*/ core__DOT__Lsram__DOT__write_backend_io_w_data_REG;
        IData/*31:0*/ core__DOT__Lsram__DOT__read_backend__DOT__r_data_reg;
        IData/*31:0*/ core__DOT__Lsram__DOT__read_backend__DOT__r_data_comb;
        IData/*31:0*/ core__DOT__IFU__DOT__pc;
        IData/*31:0*/ core__DOT__IFU__DOT__inst_buf_bits_inst;
        IData/*31:0*/ core__DOT__IFU__DOT__inst_buf_bits_pc;
        IData/*31:0*/ core__DOT__EXU__DOT___alu_io_out;
        IData/*31:0*/ core__DOT__EXU__DOT____Vcellinp__alu__io_in2;
        IData/*31:0*/ core__DOT__EXU__DOT____Vcellinp__alu__io_in1;
        IData/*31:0*/ core__DOT__rf__DOT__rf_0;
        IData/*31:0*/ core__DOT__rf__DOT__rf_1;
        IData/*31:0*/ core__DOT__rf__DOT__rf_2;
        IData/*31:0*/ core__DOT__rf__DOT__rf_3;
        IData/*31:0*/ core__DOT__rf__DOT__rf_4;
        IData/*31:0*/ core__DOT__rf__DOT__rf_5;
        IData/*31:0*/ core__DOT__rf__DOT__rf_6;
        IData/*31:0*/ core__DOT__rf__DOT__rf_7;
        IData/*31:0*/ core__DOT__rf__DOT__rf_8;
        IData/*31:0*/ core__DOT__rf__DOT__rf_9;
        IData/*31:0*/ core__DOT__rf__DOT__rf_10;
        IData/*31:0*/ core__DOT__rf__DOT__rf_11;
        IData/*31:0*/ core__DOT__rf__DOT__rf_12;
        IData/*31:0*/ core__DOT__rf__DOT__rf_13;
        IData/*31:0*/ core__DOT__rf__DOT__rf_14;
        IData/*31:0*/ core__DOT__rf__DOT__rf_15;
        IData/*31:0*/ core__DOT__rf__DOT__rf_16;
        IData/*31:0*/ core__DOT__rf__DOT__rf_17;
        IData/*31:0*/ core__DOT__rf__DOT__rf_18;
        IData/*31:0*/ core__DOT__rf__DOT__rf_19;
        IData/*31:0*/ core__DOT__rf__DOT__rf_20;
        IData/*31:0*/ core__DOT__rf__DOT__rf_21;
        IData/*31:0*/ core__DOT__rf__DOT__rf_22;
        IData/*31:0*/ core__DOT__rf__DOT__rf_23;
        IData/*31:0*/ core__DOT__rf__DOT__rf_24;
        IData/*31:0*/ core__DOT__rf__DOT__rf_25;
        IData/*31:0*/ core__DOT__rf__DOT__rf_26;
        IData/*31:0*/ core__DOT__rf__DOT__rf_27;
        IData/*31:0*/ core__DOT__rf__DOT__rf_28;
        IData/*31:0*/ core__DOT__rf__DOT__rf_29;
        IData/*31:0*/ core__DOT__rf__DOT__rf_30;
        IData/*31:0*/ core__DOT__rf__DOT__rf_31;
        IData/*31:0*/ core__DOT__rf__DOT__casez_tmp;
    };
    struct {
        IData/*31:0*/ core__DOT__rf__DOT__casez_tmp_0;
        IData/*31:0*/ core__DOT__LSU__DOT__e2l_reg_rd_data;
        IData/*31:0*/ core__DOT__LSU__DOT__e2l_reg_mem_addr;
        IData/*31:0*/ core__DOT__LSU__DOT__e2l_reg_mem_wdata;
        IData/*31:0*/ __Vtask_core__DOT__Fsram__DOT__read_backend__DOT__memory_read__0__r_data;
        IData/*31:0*/ __Vtask_core__DOT__Lsram__DOT__read_backend__DOT__memory_read__2__r_data;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ core__DOT__IDU__DOT__casez_tmp;
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
