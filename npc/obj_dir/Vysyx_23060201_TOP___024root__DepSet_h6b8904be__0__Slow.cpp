// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060201_TOP.h for the primary calling header

#include "verilated.h"

#include "Vysyx_23060201_TOP__Syms.h"
#include "Vysyx_23060201_TOP___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060201_TOP___024root___dump_triggers__stl(Vysyx_23060201_TOP___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060201_TOP___024root___eval_triggers__stl(Vysyx_23060201_TOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                      != vlSelf->__Vtrigrprev__TOP__ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in);
    vlSelf->__Vtrigrprev__TOP__ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
        = vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060201_TOP___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
