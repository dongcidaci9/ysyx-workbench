// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMuxKeyInternal.h for the primary calling header

#ifndef VERILATED_VMUXKEYINTERNAL___024ROOT_H_
#define VERILATED_VMUXKEYINTERNAL___024ROOT_H_  // guard

#include "verilated.h"

class VMuxKeyInternal__Syms;

class VMuxKeyInternal___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(inst_rd_val_in,0,0);
    VL_OUT8(inst_rd_val_out,0,0);
    VL_OUT8(pc,0,0);
    CData/*0:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst_in,31,0);
    VL_OUT(inst_out,31,0);
    IData/*31:0*/ ysyx_23060201_TOP__DOT____Vcellout__ysyx_23060201_PC__pc;
    IData/*31:0*/ ysyx_23060201_TOP__DOT____Vcellout__ysyx_23060201_EXU__inst_rd_val_out;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2;
    IData/*31:0*/ ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*34:0*/, 4> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 4> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 4> ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMuxKeyInternal__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMuxKeyInternal___024root(VMuxKeyInternal__Syms* symsp, const char* v__name);
    ~VMuxKeyInternal___024root();
    VL_UNCOPYABLE(VMuxKeyInternal___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
