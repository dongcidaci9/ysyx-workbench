// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMuxKeyInternal__Syms.h"


void VMuxKeyInternal___024root__trace_chg_sub_0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMuxKeyInternal___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root__trace_chg_top_0\n"); );
    // Init
    VMuxKeyInternal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMuxKeyInternal___024root*>(voidSelf);
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMuxKeyInternal___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VMuxKeyInternal___024root__trace_chg_sub_0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_hd07bb393__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[3]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+4,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_23060201_TOP__DOT____Vcellout__ysyx_23060201_EXU__inst_rd_val_out),32);
        bufp->chgBit(oldp+6,((vlSelf->ysyx_23060201_TOP__DOT____Vcellout__ysyx_23060201_EXU__inst_rd_val_out 
                              >> 0x1fU)));
        bufp->chgBit(oldp+7,((1U & (~ (IData)((0U != vlSelf->ysyx_23060201_TOP__DOT____Vcellout__ysyx_23060201_EXU__inst_rd_val_out))))));
        bufp->chgIData(oldp+8,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2),32);
        bufp->chgQData(oldp+10,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+12,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+14,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+16,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+23,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+24,(vlSelf->clk));
    bufp->chgBit(oldp+25,(vlSelf->rst));
    bufp->chgBit(oldp+26,(vlSelf->inst_rd_val_in));
    bufp->chgIData(oldp+27,(vlSelf->inst_in),32);
    bufp->chgIData(oldp+28,(vlSelf->inst_out),32);
    bufp->chgBit(oldp+29,(vlSelf->inst_rd_val_out));
    bufp->chgBit(oldp+30,(vlSelf->pc));
    bufp->chgSData(oldp+31,(((0x380U & (vlSelf->inst_in 
                                        >> 7U)) | (0x7fU 
                                                   & vlSelf->inst_in))),10);
    bufp->chgCData(oldp+32,((0x1fU & (vlSelf->inst_in 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+33,((0x1fU & (vlSelf->inst_in 
                                      >> 7U))),5);
    bufp->chgIData(oldp+34,(vlSelf->inst_rd_val_in),32);
    bufp->chgCData(oldp+35,((7U & (vlSelf->inst_in 
                                   >> 0xeU))),3);
    bufp->chgBit(oldp+36,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->inst_rd_val_in)) 
                                                  + 
                                                  ((QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2)) 
                                                   + (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->inst_in 
                                                                         >> 0xeU)))))) 
                                                 >> 0x20U))))));
    bufp->chgBit(oldp+37,((((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                             >> 0x1fU) & (vlSelf->inst_in 
                                          >> 0xfU)) 
                           & (~ ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                                  >> 0x1fU) ^ (vlSelf->inst_in 
                                               >> 0xeU))))));
    bufp->chgIData(oldp+38,(((IData)(vlSelf->inst_rd_val_in) 
                             & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
    bufp->chgIData(oldp+39,(((IData)(vlSelf->inst_rd_val_in) 
                             | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
    __Vtemp_hd07bb393__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->inst_rd_val_in) 
                                                           | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)))));
    __Vtemp_hd07bb393__0[1U] = ((((IData)(vlSelf->inst_rd_val_in) 
                                  & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext) 
                                 << 3U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->inst_rd_val_in) 
                                                                       | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)))) 
                                                   >> 0x20U)));
    __Vtemp_hd07bb393__0[2U] = (0x10U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                          << 6U) | 
                                         (((IData)(vlSelf->inst_rd_val_in) 
                                           & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext) 
                                          >> 0x1dU)));
    __Vtemp_hd07bb393__0[3U] = (0x40U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                          << 9U) | 
                                         (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                          >> 0x1aU)));
    __Vtemp_hd07bb393__0[4U] = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                >> 0x17U);
    bufp->chgWData(oldp+40,(__Vtemp_hd07bb393__0),140);
    bufp->chgCData(oldp+45,((0x7fU & vlSelf->inst_in)),7);
    bufp->chgSData(oldp+46,((vlSelf->inst_in >> 0x14U)),12);
    bufp->chgIData(oldp+47,(vlSelf->ysyx_23060201_TOP__DOT____Vcellout__ysyx_23060201_PC__pc),32);
    bufp->chgIData(oldp+48,(vlSelf->pc),32);
}

void VMuxKeyInternal___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root__trace_cleanup\n"); );
    // Init
    VMuxKeyInternal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMuxKeyInternal___024root*>(voidSelf);
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
