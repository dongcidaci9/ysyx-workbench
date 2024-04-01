// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060201_TOP__Syms.h"


void Vysyx_23060201_TOP___024root__trace_chg_sub_0(Vysyx_23060201_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060201_TOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060201_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060201_TOP___024root*>(voidSelf);
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060201_TOP___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060201_TOP___024root__trace_chg_sub_0(Vysyx_23060201_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_h9b629cca__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[3]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+4,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext),32);
        bufp->chgBit(oldp+5,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi));
        bufp->chgCData(oldp+6,(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                                 ? 0U : 7U)),3);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2),32);
        bufp->chgBit(oldp+8,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+9,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub),32);
        bufp->chgIData(oldp+12,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                 & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
        bufp->chgIData(oldp+13,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                 | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
        __Vtemp_h9b629cca__0[0U] = (IData)((0x300000000ULL 
                                            | (QData)((IData)(
                                                              (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                                               | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)))));
        __Vtemp_h9b629cca__0[1U] = (((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                      & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext) 
                                     << 3U) | (IData)(
                                                      ((0x300000000ULL 
                                                        | (QData)((IData)(
                                                                          (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                                                           | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)))) 
                                                       >> 0x20U)));
        __Vtemp_h9b629cca__0[2U] = (0x10U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                              << 6U) 
                                             | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                                 & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext) 
                                                >> 0x1dU)));
        __Vtemp_h9b629cca__0[3U] = (0x40U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                              << 9U) 
                                             | (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                                >> 0x1aU)));
        __Vtemp_h9b629cca__0[4U] = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                    >> 0x17U);
        bufp->chgWData(oldp+14,(__Vtemp_h9b629cca__0),140);
        bufp->chgQData(oldp+19,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+21,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+23,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+25,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[0]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[1]),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[2]),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[3]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[4]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[5]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[6]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[7]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[8]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[9]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[10]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[11]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[12]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[13]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[14]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[15]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[16]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[17]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[18]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[19]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[20]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[21]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[22]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[23]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[24]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[25]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[26]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[27]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[28]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[29]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[30]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[31]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0U]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [1U]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0xaU]),32);
        bufp->chgIData(oldp+67,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0xbU]),32);
        bufp->chgIData(oldp+68,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0xcU]),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0xdU]),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0xeU]),32);
        bufp->chgIData(oldp+71,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0xfU]),32);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x10U]),32);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x11U]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x12U]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x13U]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [2U]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x14U]),32);
        bufp->chgIData(oldp+78,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x15U]),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x16U]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x17U]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x18U]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x19U]),32);
        bufp->chgIData(oldp+83,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x1aU]),32);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x1bU]),32);
        bufp->chgIData(oldp+85,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x1cU]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x1dU]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [3U]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x1eU]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [0x1fU]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [4U]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [5U]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [6U]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [7U]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [8U]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                                [9U]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+96,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[1]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[2]),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[3]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[4]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[5]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[6]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[7]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[8]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[9]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[10]),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[11]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[12]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[13]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[14]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[15]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[16]),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[17]),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[18]),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[19]),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[20]),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[21]),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[22]),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[23]),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[24]),32);
        bufp->chgIData(oldp+121,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[25]),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[26]),32);
        bufp->chgIData(oldp+123,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[27]),32);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[28]),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[29]),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[30]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[31]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x0____pinNumber4),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x1____pinNumber4),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x10____pinNumber4),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x11____pinNumber4),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x12____pinNumber4),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x13____pinNumber4),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x14____pinNumber4),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x15____pinNumber4),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x16____pinNumber4),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x17____pinNumber4),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x18____pinNumber4),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x19____pinNumber4),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x2____pinNumber4),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x20____pinNumber4),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x21____pinNumber4),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x22____pinNumber4),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x23____pinNumber4),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x24____pinNumber4),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x25____pinNumber4),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x26____pinNumber4),32);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x27____pinNumber4),32);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x28____pinNumber4),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x29____pinNumber4),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x3____pinNumber4),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x30____pinNumber4),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x31____pinNumber4),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x4____pinNumber4),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x5____pinNumber4),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x6____pinNumber4),32);
        bufp->chgIData(oldp+157,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x7____pinNumber4),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x8____pinNumber4),32);
        bufp->chgIData(oldp+159,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x9____pinNumber4),32);
    }
    bufp->chgBit(oldp+160,(vlSelf->clk));
    bufp->chgBit(oldp+161,(vlSelf->rst));
    bufp->chgIData(oldp+162,(vlSelf->inst),32);
    bufp->chgIData(oldp+163,(vlSelf->inst_rd_val_res),32);
    bufp->chgIData(oldp+164,(vlSelf->pc),32);
    bufp->chgCData(oldp+165,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+166,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+167,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+168,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgSData(oldp+169,((vlSelf->inst >> 0x14U)),12);
    bufp->chgIData(oldp+170,(((IData)(4U) + vlSelf->pc)),32);
}

void Vysyx_23060201_TOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060201_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060201_TOP___024root*>(voidSelf);
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
