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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi;
    CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst,31,0);
    VL_OUT(inst_rd_val,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_PC__DOT__npc;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x0____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x1____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x2____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x3____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x4____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x5____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x6____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x7____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x8____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x9____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x10____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x11____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x12____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x13____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x14____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x15____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x16____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x17____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x18____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x19____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x20____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x21____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x22____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x23____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x24____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x25____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x26____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x27____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x28____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x29____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x30____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT____Vcellout__x31____pinNumber4;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_reg_val;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_reg_val_out;
    VlUnpacked<QData/*34:0*/, 4> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 4> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 4> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
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
