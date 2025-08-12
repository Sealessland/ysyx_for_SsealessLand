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
        CData/*0:0*/ core__DOT___lsu_io_in_ready;
        CData/*0:0*/ core__DOT___lsu_io_axi_b_ready;
        CData/*0:0*/ core__DOT___exu_io_pcCtrl_pc_en;
        CData/*0:0*/ core__DOT___exu_io_csr_w_en;
        CData/*2:0*/ core__DOT___idu_io_out_bits_alusel;
        CData/*4:0*/ core__DOT___idu_io_out_bits_opcode;
        CData/*0:0*/ core__DOT___idu_io_out_bits_rd_en;
        CData/*3:0*/ core__DOT___idu_io_out_bits_system;
        CData/*0:0*/ core__DOT__LS_reg;
        CData/*0:0*/ core__DOT__ifu__DOT__state;
        CData/*0:0*/ core__DOT__ifu__DOT__pc_en_delay;
        CData/*0:0*/ core__DOT__ifu__DOT__pc_en_posedge;
        CData/*0:0*/ core__DOT__ifu__DOT___GEN_0;
        CData/*0:0*/ core__DOT__ifu__DOT___GEN_1;
        CData/*0:0*/ core__DOT__ifu__DOT____VdfgRegularize_h572ee481_0_1;
        CData/*6:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T;
        CData/*7:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_1;
        CData/*7:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_3;
        CData/*7:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_4;
        CData/*5:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_10;
        CData/*7:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_22;
        CData/*6:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_26;
        CData/*7:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_39;
        CData/*7:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_41;
        CData/*7:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_47;
        CData/*7:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_58;
        CData/*1:0*/ core__DOT__idu__DOT___decodedBundle_orMatrixOutputs_T_36;
        CData/*3:0*/ core__DOT__idu__DOT___decodedBundle_T_1;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_42;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_43;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_51;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_52;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_66;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_67;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_69;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_70;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_71;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_72;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_73;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_75;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_76;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_79;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_80;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_84;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_85;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_87;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_88;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_89;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_90;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_91;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_92;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_93;
        CData/*0:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_94;
        CData/*2:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_95;
        CData/*4:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_96;
        CData/*1:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_97;
        CData/*2:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_98;
        CData/*5:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_99;
        CData/*6:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_100;
        CData/*4:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_102;
        CData/*0:0*/ core__DOT__exu__DOT___GEN;
    };
    struct {
        CData/*0:0*/ core__DOT__exu__DOT___GEN_2;
        CData/*2:0*/ core__DOT__exu__DOT__csrUnit__DOT____VdfgRegularize_hc5739c28_0_0;
        CData/*2:0*/ core__DOT__lsu__DOT__state;
        CData/*0:0*/ core__DOT__lsu__DOT__e2l_reg_rd_en;
        CData/*4:0*/ core__DOT__lsu__DOT__e2l_reg_rd_addr;
        CData/*2:0*/ core__DOT__lsu__DOT__e2l_reg_mlen;
        CData/*0:0*/ core__DOT__lsu__DOT__isPassthrough;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_0;
        CData/*4:0*/ core__DOT__lsu__DOT___GEN_1;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_3;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_4;
        CData/*0:0*/ core__DOT__lsu__DOT__io_axi_ar_valid_0;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_5;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_6;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_9;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_10;
        CData/*0:0*/ core__DOT__lsu__DOT__io_axi_w_valid_0;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_11;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_14;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_15;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_16;
        CData/*0:0*/ core__DOT__lsu__DOT___GEN_17;
        CData/*0:0*/ core__DOT__wbu__DOT__io_w2f_inst_done_REG;
        CData/*0:0*/ core__DOT__rf__DOT___GEN;
        CData/*0:0*/ core__DOT__queue__DOT__full;
        CData/*0:0*/ core__DOT__queue__DOT__do_enq;
        CData/*0:0*/ core__DOT__queue_1__DOT__full;
        CData/*0:0*/ core__DOT__queue_1__DOT__do_enq;
        CData/*0:0*/ core__DOT__queue_2__DOT__full;
        CData/*0:0*/ core__DOT__queue_2__DOT__do_enq;
        CData/*0:0*/ core__DOT__queue_3__DOT__full;
        CData/*0:0*/ core__DOT__queue_3__DOT__do_enq;
        CData/*0:0*/ core__DOT__if_sram__DOT__r_state;
        CData/*0:0*/ core__DOT__if_sram__DOT___write_backend_done;
        CData/*0:0*/ core__DOT__if_sram__DOT___read_backend_done;
        CData/*0:0*/ core__DOT__if_sram__DOT__write_backend_io_en_REG;
        CData/*0:0*/ core__DOT__if_sram__DOT__r_valid_reg;
        CData/*0:0*/ core__DOT__if_sram__DOT__w_state;
        CData/*3:0*/ core__DOT__if_sram__DOT__write_backend_io_w_strb_REG;
        CData/*0:0*/ core__DOT__if_sram__DOT__b_valid_reg;
        CData/*0:0*/ core__DOT__if_sram__DOT___GEN;
        CData/*2:0*/ core__DOT__if_sram__DOT__read_backend__DOT__delay;
        CData/*0:0*/ core__DOT__ls_sram__DOT__r_state;
        CData/*0:0*/ core__DOT__ls_sram__DOT___write_backend_done;
        CData/*0:0*/ core__DOT__ls_sram__DOT___read_backend_done;
        CData/*0:0*/ core__DOT__ls_sram__DOT___read_backend_io_en_T;
        CData/*0:0*/ core__DOT__ls_sram__DOT__write_backend_io_en_REG;
        CData/*0:0*/ core__DOT__ls_sram__DOT__r_valid_reg;
        CData/*0:0*/ core__DOT__ls_sram__DOT__w_state;
        CData/*3:0*/ core__DOT__ls_sram__DOT__write_backend_io_w_strb_REG;
        CData/*0:0*/ core__DOT__ls_sram__DOT__b_valid_reg;
        CData/*0:0*/ core__DOT__ls_sram__DOT___GEN_0;
        CData/*0:0*/ core__DOT__ls_sram__DOT___write_backend_io_en_T;
        CData/*2:0*/ core__DOT__ls_sram__DOT__read_backend__DOT__delay;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ core__DOT___exu_io_csr_w_addr;
        SData/*9:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_8;
        SData/*8:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_9;
        SData/*9:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_25;
        SData/*14:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_32;
        SData/*15:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_35;
    };
    struct {
        SData/*14:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_61;
        SData/*15:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_63;
        SData/*9:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_101;
        SData/*9:0*/ core__DOT__idu__DOT____VdfgRegularize_hdcfcc17d_0_103;
        VL_OUT(io_debugPC,31,0);
        VL_OUT(io_debugInst,31,0);
        IData/*31:0*/ core__DOT___csr_io_r_data;
        IData/*31:0*/ core__DOT___exu_io_csr_w_data;
        IData/*31:0*/ core__DOT___idu_io_out_bits_imm;
        IData/*31:0*/ core__DOT__ifu__DOT__pc;
        IData/*31:0*/ core__DOT__ifu__DOT__pc_reg;
        IData/*27:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_28;
        IData/*27:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_76;
        IData/*27:0*/ core__DOT__idu__DOT___decodedBundle_andMatrixOutputs_T_77;
        IData/*31:0*/ core__DOT__exu__DOT____Vcellinp__alu__io_in2;
        IData/*31:0*/ core__DOT__exu__DOT____Vcellinp__alu__io_in1;
        IData/*31:0*/ core__DOT__exu__DOT____Vcellinp__csrUnit__io_csr_old_value;
        IData/*31:0*/ core__DOT__exu__DOT__alu__DOT__casez_tmp;
        IData/*31:0*/ core__DOT__exu__DOT__csrUnit__DOT__write_source;
        IData/*31:0*/ core__DOT__lsu__DOT__e2l_reg_rd_data;
        IData/*31:0*/ core__DOT__lsu__DOT__e2l_reg_wdata;
        IData/*31:0*/ core__DOT__lsu__DOT__e2l_reg_maddr;
        IData/*31:0*/ core__DOT__lsu__DOT___GEN_2;
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
        IData/*31:0*/ core__DOT__rf__DOT__casez_tmp_0;
        IData/*31:0*/ core__DOT__csr__DOT__mstatus;
        IData/*31:0*/ core__DOT__csr__DOT__mtvec;
        IData/*31:0*/ core__DOT__csr__DOT__mepc;
        IData/*31:0*/ core__DOT__csr__DOT__mcause;
        IData/*31:0*/ core__DOT__csr__DOT__mip;
        IData/*31:0*/ core__DOT__csr__DOT__mie;
        VlWide<6>/*171:0*/ core__DOT__queue_1__DOT__ram;
    };
    struct {
        VlWide<4>/*108:0*/ core__DOT__queue_2__DOT__ram;
        IData/*31:0*/ core__DOT__if_sram__DOT__r_bits_reg_data;
        IData/*31:0*/ core__DOT__if_sram__DOT__write_backend_io_aw_addr_REG;
        IData/*31:0*/ core__DOT__if_sram__DOT__write_backend_io_w_data_REG;
        IData/*31:0*/ core__DOT__if_sram__DOT__read_backend__DOT__r_data_reg;
        IData/*31:0*/ core__DOT__if_sram__DOT__read_backend__DOT__r_data_comb;
        IData/*31:0*/ core__DOT__ls_sram__DOT__r_bits_reg_data;
        IData/*31:0*/ core__DOT__ls_sram__DOT__write_backend_io_aw_addr_REG;
        IData/*31:0*/ core__DOT__ls_sram__DOT__write_backend_io_w_data_REG;
        IData/*31:0*/ core__DOT__ls_sram__DOT__read_backend__DOT__r_data_reg;
        IData/*31:0*/ core__DOT__ls_sram__DOT__read_backend__DOT__r_data_comb;
        IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_0;
        IData/*31:0*/ __Vtask_core__DOT__if_sram__DOT__read_backend__DOT__memory_read__1__r_data;
        IData/*31:0*/ __Vtask_core__DOT__ls_sram__DOT__read_backend__DOT__memory_read__3__r_data;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ core__DOT__exu__DOT__alu__DOT___mulu_res_T;
        QData/*63:0*/ core__DOT__queue__DOT__ram;
        QData/*38:0*/ core__DOT__queue_3__DOT__ram;
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
