// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060201_TOP.h for the primary calling header

#ifndef VERILATED_VYSYX_23060201_TOP___024ROOT_H_
#define VERILATED_VYSYX_23060201_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060201_TOP__Syms;

class Vysyx_23060201_TOP___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*2:0*/ ysyx_23060201_TOP__DOT__wire_func3;
        CData/*4:0*/ ysyx_23060201_TOP__DOT__wire_waddr;
        CData/*1:0*/ ysyx_23060201_TOP__DOT__wire_ren;
        CData/*2:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit;
        CData/*1:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit;
        CData/*3:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl;
        CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit;
        CData/*3:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit;
        CData/*4:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        VL_IN(inst,31,0);
        VL_OUT(pc,31,0);
        IData/*31:0*/ ysyx_23060201_TOP__DOT__wire_npc;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__wire_imm;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__wire_wdata;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__wire_rdata1;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__wire_rdata2;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_J;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst0____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst1____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst2____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst3____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst4____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst5____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst6____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst7____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst8____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst9____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst10____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst11____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst12____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst13____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst14____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst15____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst16____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst17____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst18____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst19____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst20____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst21____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst22____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst23____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst24____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst25____pinNumber4;
    };
    struct {
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst26____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst27____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst28____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst29____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst30____pinNumber4;
        IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst31____pinNumber4;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*9:0*/, 1> ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 1> ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 1> ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*38:0*/, 8> ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 8> ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 9> ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 9> ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 9> ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*38:0*/, 7> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 7> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 7> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*38:0*/, 3> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 3> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*6:0*/, 4> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 4> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 4> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*35:0*/, 5> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 5> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 1> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 1> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 1> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*38:0*/, 2> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 2> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060201_TOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060201_TOP___024root(Vysyx_23060201_TOP__Syms* symsp, const char* v__name);
    ~Vysyx_23060201_TOP___024root();
    VL_UNCOPYABLE(Vysyx_23060201_TOP___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
