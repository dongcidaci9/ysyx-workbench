// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMuxKeyInternal.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VMuxKeyInternal__Syms.h"
#include "VMuxKeyInternal___024root.h"

extern "C" void npc_trap();

VL_INLINE_OPT void VMuxKeyInternal___024root____Vdpiimwrap_ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__npc_trap_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root____Vdpiimwrap_ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__npc_trap_TOP\n"); );
    // Body
    npc_trap();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMuxKeyInternal___024root___dump_triggers__ico(VMuxKeyInternal___024root* vlSelf);
#endif  // VL_DEBUG

void VMuxKeyInternal___024root___eval_triggers__ico(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMuxKeyInternal___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMuxKeyInternal___024root___dump_triggers__act(VMuxKeyInternal___024root* vlSelf);
#endif  // VL_DEBUG

void VMuxKeyInternal___024root___eval_triggers__act(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMuxKeyInternal___024root___dump_triggers__act(vlSelf);
    }
#endif
}
