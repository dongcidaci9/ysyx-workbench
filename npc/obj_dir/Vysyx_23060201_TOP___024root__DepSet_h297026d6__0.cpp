// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060201_TOP.h for the primary calling header

#include "verilated.h"

#include "Vysyx_23060201_TOP___024root.h"

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___ico_sequent__TOP__0(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->inst)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                             | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                             & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
           | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
           & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit 
        = (((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
             ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit) 
           | (((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit) 
           | (((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit) 
           | (((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext 
           ^ (- (IData)((1U & (~ (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi))))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
           + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
              + (1U & (~ (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
           + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
              + (1U & (~ (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
           + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
              + (1U & (~ (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = ((- (IData)((((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                         ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)((((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                            ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)((((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                            ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)((((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                            ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out;
    vlSelf->inst_rd_val_res = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[(0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out;
}

void Vysyx_23060201_TOP___024root___eval_ico(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_23060201_TOP___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_23060201_TOP___024root___eval_act(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__0(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_PC__DOT__npc);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_PC__DOT__npc 
        = ((IData)(4U) + vlSelf->pc);
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__1(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x3____pinNumber4 = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x2____pinNumber4 = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x1____pinNumber4 = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x0____pinNumber4 = 0U;
    } else {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x3____pinNumber4 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
            [3U];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x2____pinNumber4 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
            [2U];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x1____pinNumber4 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
            [1U];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x0____pinNumber4 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
            [0U];
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[3U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x3____pinNumber4;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[2U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x2____pinNumber4;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[1U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x1____pinNumber4;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x0____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__2(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x4____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [4U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[4U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x4____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__3(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x5____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [5U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[5U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x5____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__4(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x6____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [6U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[6U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x6____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__5(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x7____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [7U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[7U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x7____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__6(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x8____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [8U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[8U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x8____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__7(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x9____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [9U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[9U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x9____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__8(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x10____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0xaU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0xaU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x10____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__9(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x11____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0xbU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0xbU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x11____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__10(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x12____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0xcU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0xcU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x12____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__11(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x13____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0xdU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0xdU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x13____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__12(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x14____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0xeU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0xeU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x14____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__13(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__13\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x15____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0xfU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0xfU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x15____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__14(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__14\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x16____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x10U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x10U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x16____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__15(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__15\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x17____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x11U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x11U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x17____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__16(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__16\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x18____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x12U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x12U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x18____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__17(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__17\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x19____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x13U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x13U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x19____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__18(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__18\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x20____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x14U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x14U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x20____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__19(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__19\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x21____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x15U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x15U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x21____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__20(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__20\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x22____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x16U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x16U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x22____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__21(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__21\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x23____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x17U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x17U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x23____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__22(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__22\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x24____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x18U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x18U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x24____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__23(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__23\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x25____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x19U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x19U] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x25____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__24(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__24\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x26____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x1aU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x1aU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x26____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__25(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__25\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x27____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x1bU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x1bU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x27____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__26(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__26\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x28____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x1cU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x1cU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x28____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__27(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__27\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x29____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x1dU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x1dU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x29____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__28(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__28\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x30____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x1eU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x1eU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x30____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__29(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__29\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x31____pinNumber4 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
           [0x1fU]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0x1fU] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x31____pinNumber4;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_comb__TOP__0(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                             | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                             & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
           + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
              + (1U & (~ (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
           | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
           & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
           + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
              + (1U & (~ (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
           + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
              + (1U & (~ (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = ((- (IData)((((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                         ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)((((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                            ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)((((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                            ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)((((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                            ? 0U : 7U) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out;
    vlSelf->inst_rd_val_res = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[(0x1fU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))] 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out;
}

void Vysyx_23060201_TOP___024root___eval_nba(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__7(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__8(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__9(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__10(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0xbU)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__11(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0xcU)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__12(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0xdU)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__13(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0xeU)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__14(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0xfU)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__15(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x10U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__16(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x11U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__17(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x12U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__18(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x13U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__19(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x14U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__20(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x15U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__21(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x16U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__22(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x17U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__23(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x18U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__24(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x19U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__25(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x1aU)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__26(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x1bU)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__27(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x1cU)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__28(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0x1dU)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__29(vlSelf);
    }
    if (((((((((((((((((((((((((((((vlSelf->__VnbaTriggered.at(1U) 
                                    | vlSelf->__VnbaTriggered.at(2U)) 
                                   | vlSelf->__VnbaTriggered.at(3U)) 
                                  | vlSelf->__VnbaTriggered.at(4U)) 
                                 | vlSelf->__VnbaTriggered.at(5U)) 
                                | vlSelf->__VnbaTriggered.at(6U)) 
                               | vlSelf->__VnbaTriggered.at(7U)) 
                              | vlSelf->__VnbaTriggered.at(8U)) 
                             | vlSelf->__VnbaTriggered.at(9U)) 
                            | vlSelf->__VnbaTriggered.at(0xaU)) 
                           | vlSelf->__VnbaTriggered.at(0xbU)) 
                          | vlSelf->__VnbaTriggered.at(0xcU)) 
                         | vlSelf->__VnbaTriggered.at(0xdU)) 
                        | vlSelf->__VnbaTriggered.at(0xeU)) 
                       | vlSelf->__VnbaTriggered.at(0xfU)) 
                      | vlSelf->__VnbaTriggered.at(0x10U)) 
                     | vlSelf->__VnbaTriggered.at(0x11U)) 
                    | vlSelf->__VnbaTriggered.at(0x12U)) 
                   | vlSelf->__VnbaTriggered.at(0x13U)) 
                  | vlSelf->__VnbaTriggered.at(0x14U)) 
                 | vlSelf->__VnbaTriggered.at(0x15U)) 
                | vlSelf->__VnbaTriggered.at(0x16U)) 
               | vlSelf->__VnbaTriggered.at(0x17U)) 
              | vlSelf->__VnbaTriggered.at(0x18U)) 
             | vlSelf->__VnbaTriggered.at(0x19U)) | vlSelf->__VnbaTriggered.at(0x1aU)) 
           | vlSelf->__VnbaTriggered.at(0x1bU)) | vlSelf->__VnbaTriggered.at(0x1cU)) 
         | vlSelf->__VnbaTriggered.at(0x1dU))) {
        Vysyx_23060201_TOP___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vysyx_23060201_TOP___024root___eval_triggers__ico(Vysyx_23060201_TOP___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060201_TOP___024root___dump_triggers__ico(Vysyx_23060201_TOP___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_23060201_TOP___024root___eval_triggers__act(Vysyx_23060201_TOP___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060201_TOP___024root___dump_triggers__act(Vysyx_23060201_TOP___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060201_TOP___024root___dump_triggers__nba(Vysyx_23060201_TOP___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060201_TOP___024root___eval(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<30> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_23060201_TOP___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060201_TOP___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060201_TOP.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_23060201_TOP___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_23060201_TOP___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060201_TOP___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_23060201_TOP.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_23060201_TOP___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060201_TOP___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060201_TOP.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_23060201_TOP___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_23060201_TOP___024root___eval_debug_assertions(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
