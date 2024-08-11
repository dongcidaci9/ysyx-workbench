// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060201_TOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060201_TOP___024root.h"

void Vysyx_23060201_TOP___024root____Vdpiimwrap_ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__npc_trap_TOP();

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___ico_sequent__TOP__0(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->inst))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[3U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->inst))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[4U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->inst 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->inst 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->inst 
                                                          >> 7U))))))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[5U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 7U)))))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_J 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x14U) 
           | ((0xff000U & vlSelf->inst) | ((0x800U 
                                            & (vlSelf->inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->inst 
                                                 >> 0x14U)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__wire_func3 = (7U 
                                                  & ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__hit)
                                                      ? (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__lut_out)
                                                      : 
                                                     (vlSelf->inst 
                                                      >> 0xcU)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x14U) 
           | ((0xff000U & vlSelf->inst) | ((0x800U 
                                            & (vlSelf->inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->inst 
                                                 >> 0x14U)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x14U) 
           | ((0xff000U & vlSelf->inst) | ((0x800U 
                                            & (vlSelf->inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->inst 
                                                 >> 0x14U)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[2U] 
        = (0xfffff000U & vlSelf->inst);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[3U] 
        = (0xfffff000U & vlSelf->inst);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | ((0x800U & (vlSelf->inst << 4U)) | ((0x7e0U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->inst 
                                                       >> 7U)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | ((0xfe0U & (vlSelf->inst >> 0x14U)) | 
              (0x1fU & (vlSelf->inst >> 7U))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[6U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[7U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060201_TOP__DOT__wire_ren = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[6U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[7U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[0U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_J)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_J)));
    if (((0x73U == (0x7fU & vlSelf->inst)) & (0U == (IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_func3)))) {
        Vysyx_23060201_TOP___024root____Vdpiimwrap_ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__npc_trap_TOP();
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_func3) 
           == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_func3) 
              == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_func3) 
              == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_func3) 
              == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_func3) 
                       == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_func3) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_func3) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_func3) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060201_TOP__DOT__wire_imm = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out;
    if ((2U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_ren))) {
        vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0x14U))];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[2U] 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0x14U))];
    } else {
        vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2 = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[2U] = 0U;
    }
    if ((1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_ren))) {
        vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[4U] 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[5U] 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[6U] 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0xfU))];
    } else {
        vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[4U] = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[5U] = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[6U] = 0U;
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
           == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
              == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
              == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
              == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
              == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__pair_list[0U] 
        = (0x460U | (0x1fU & ((vlSelf->inst >> 0xfU) 
                              + vlSelf->ysyx_23060201_TOP__DOT__wire_imm)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[0U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_imm)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[1U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_imm)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((vlSelf->pc 
                                              + vlSelf->ysyx_23060201_TOP__DOT__wire_imm))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[3U] 
        = (0x3700000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_imm)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__data_list[0U] 
        = (0x1fU & ((vlSelf->inst >> 0xfU) + vlSelf->ysyx_23060201_TOP__DOT__wire_imm));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->pc + vlSelf->ysyx_23060201_TOP__DOT__wire_imm);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[3U] 
        = vlSelf->ysyx_23060201_TOP__DOT__wire_imm;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_23060201_TOP__DOT__wire_imm;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_23060201_TOP__DOT__wire_imm;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[2U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[0U] 
        = (0x6700000000ULL | (QData)((IData)((0xfffffffeU 
                                              & (vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                                                 + vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[4U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[5U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[6U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[0U] 
        = (0xfffffffeU & (vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                          + vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__wire_waddr = (0x1fU 
                                                  & ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__hit)
                                                      ? (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__lut_out)
                                                      : 
                                                     (vlSelf->inst 
                                                      >> 7U)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out
            : 0U);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out
            : 0U);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__wire_npc = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit)
                                                 ? vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->pc));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0U] 
        = (0x800000000ULL | (QData)((IData)(((0x1fU 
                                              >= vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
                                              ? (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                                 >> vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
                                              : 0U))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1U] 
        = (0x700000000ULL | (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                             | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2U] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                             & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3U] 
        = (0x400000000ULL | (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                             ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0U] 
        = ((0x1fU >= vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
            ? (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
               >> vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
            : 0U);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
           | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
           & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
           ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b 
           ^ (- (IData)((1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                           + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                              + (1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl))))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[4U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
           + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
              + (1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
                       == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__wire_wdata = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out;
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
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file__v0;
    __Vdlyvdim0__ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file__v0;
    __Vdlyvval__ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file__v0 = 0;
    // Body
    __Vdlyvval__ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file__v0 
        = vlSelf->ysyx_23060201_TOP__DOT__wire_wdata;
    __Vdlyvdim0__ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file__v0 
        = vlSelf->ysyx_23060201_TOP__DOT__wire_waddr;
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : vlSelf->ysyx_23060201_TOP__DOT__wire_npc);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[__Vdlyvdim0__ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file__v0] 
        = __Vdlyvval__ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file__v0;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[0U] 
        = (0x6700000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[0U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[2U] 
        = vlSelf->pc;
}

VL_INLINE_OPT void Vysyx_23060201_TOP___024root___nba_sequent__TOP__1(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((2U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_ren))) {
        vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0x14U))];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[2U] 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0x14U))];
    } else {
        vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2 = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[2U] = 0U;
    }
    if ((1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_ren))) {
        vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[4U] 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[5U] 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0xfU))];
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[6U] 
            = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
            [(0x1fU & (vlSelf->inst >> 0xfU))];
    } else {
        vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[4U] = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[5U] = 0U;
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[6U] = 0U;
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((vlSelf->pc 
                                              + vlSelf->ysyx_23060201_TOP__DOT__wire_imm))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->pc + vlSelf->ysyx_23060201_TOP__DOT__wire_imm);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[2U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[0U] 
        = (0x6700000000ULL | (QData)((IData)((0xfffffffeU 
                                              & (vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                                                 + vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[4U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[5U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[6U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1)));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[0U] 
        = (0xfffffffeU & (vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                          + vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out
            : 0U);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out
            : 0U);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__wire_npc = ((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit)
                                                 ? vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->pc));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b 
           ^ (- (IData)((1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl)))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0U] 
        = (0x800000000ULL | (QData)((IData)(((0x1fU 
                                              >= vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
                                              ? (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                                 >> vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
                                              : 0U))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1U] 
        = (0x700000000ULL | (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                             | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2U] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                             & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3U] 
        = (0x400000000ULL | (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                             ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0U] 
        = ((0x1fU >= vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
            ? (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
               >> vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
            : 0U);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
           | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
           & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
           ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                           + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                              + (1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl))))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[4U] 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
           + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
              + (1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
                       == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl) 
                          == vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060201_TOP__DOT__wire_wdata = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out;
}

void Vysyx_23060201_TOP___024root___eval_nba(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vysyx_23060201_TOP___024root___nba_sequent__TOP__1(vlSelf);
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
    VlTriggerVec<1> __VpreTriggered;
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
