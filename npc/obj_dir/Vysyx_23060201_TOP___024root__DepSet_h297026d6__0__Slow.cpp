// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060201_TOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060201_TOP___024root.h"

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___eval_static(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___eval_initial__TOP(Vysyx_23060201_TOP___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___eval_initial(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_initial\n"); );
    // Body
    Vysyx_23060201_TOP___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___eval_initial__TOP(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[0U] = 0x67U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[2U] = 0x17U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[3U] = 0x37U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[4U] = 0x63U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[5U] = 0x23U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[6U] = 3U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[7U] = 0x13U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[0U] = 0x67U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[2U] = 0x17U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[3U] = 0x37U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[5U] = 0x13U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[6U] = 0x33U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list[0U] = 0x17U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list[1U] = 0x13U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list[2U] = 0x33U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__key_list[0U] = 0x23U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list[0U] = 0x67U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__key_list[0U] = 0x17U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__pair_list[0U] = 0xb8U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[0U] = 0x67U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[2U] = 0x17U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[3U] = 0x37U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[4U] = 0x63U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[5U] = 0x23U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[6U] = 3U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[7U] = 0x13U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[8U] = 0x33U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[4U] = 3U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[6U] = 3U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[7U] = 1U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[8U] = 3U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[0U] = 0x19cU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[1U] = 0x1bcU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[2U] = 0x5cU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[3U] = 0xdcU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[4U] = 0x18fU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[5U] = 0x8dU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[6U] = 0xfU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[7U] = 0x4dU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[8U] = 0xcfU;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[1U] = 7U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[2U] = 6U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[0U] = 6U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[1U] = 7U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[0U] = 7U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[1U] = 6U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[2U] = 4U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[0U] = 0x67U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[1U] = 0x76U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[2U] = 0x44U;
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[3U] = 0U;
}

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___eval_final(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___eval_triggers__stl(Vysyx_23060201_TOP___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060201_TOP___024root___dump_triggers__stl(Vysyx_23060201_TOP___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_23060201_TOP___024root___eval_stl(Vysyx_23060201_TOP___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___eval_settle(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_23060201_TOP___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060201_TOP___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060201_TOP.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_23060201_TOP___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060201_TOP___024root___dump_triggers__stl(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_23060201_TOP___024root____Vdpiimwrap_ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__npc_trap_TOP();

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___stl_sequent__TOP__0(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___stl_sequent__TOP__0\n"); );
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
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[0U] 
        = (0x6700000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)(((IData)(4U) 
                                              + vlSelf->pc))));
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->pc)));
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
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[0U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[2U] 
        = vlSelf->pc;
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

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___eval_stl(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_23060201_TOP___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060201_TOP___024root___dump_triggers__ico(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060201_TOP___024root___dump_triggers__act(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060201_TOP___024root___dump_triggers__nba(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___ctor_var_reset(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__wire_npc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__wire_func3 = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060201_TOP__DOT__wire_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__wire_waddr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_23060201_TOP__DOT__wire_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__wire_ren = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_J = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(3);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(36);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
