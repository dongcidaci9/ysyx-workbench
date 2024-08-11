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
    VlWide<4>/*127:0*/ __Vtemp_h9a2d4471__0;
    VlWide<6>/*191:0*/ __Vtemp_hc3c426de__0;
    VlWide<9>/*287:0*/ __Vtemp_h8360e938__0;
    VlWide<3>/*95:0*/ __Vtemp_habfd3ff5__0;
    VlWide<10>/*319:0*/ __Vtemp_h4bdd44af__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[2]),7);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[3]),7);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+27,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+28,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+29,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[4]),4);
        bufp->chgSData(oldp+30,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+31,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__data_list[1]),3);
        bufp->chgSData(oldp+36,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+37,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+38,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+39,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+40,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+41,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[5]),9);
        bufp->chgSData(oldp+42,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[6]),9);
        bufp->chgSData(oldp+43,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[7]),9);
        bufp->chgSData(oldp+44,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[8]),9);
        bufp->chgCData(oldp+45,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+46,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+47,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+48,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+49,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+50,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+51,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+52,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+53,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+54,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+55,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+56,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+57,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+58,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[4]),2);
        bufp->chgCData(oldp+59,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[5]),2);
        bufp->chgCData(oldp+60,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[6]),2);
        bufp->chgCData(oldp+61,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[7]),2);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[8]),2);
        bufp->chgCData(oldp+63,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+64,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+65,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+66,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+67,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+68,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+69,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+70,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[7]),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+71,(vlSelf->ysyx_23060201_TOP__DOT__wire_func3),3);
        bufp->chgIData(oldp+72,(vlSelf->ysyx_23060201_TOP__DOT__wire_imm),32);
        bufp->chgCData(oldp+73,(vlSelf->ysyx_23060201_TOP__DOT__wire_waddr),5);
        bufp->chgCData(oldp+74,(vlSelf->ysyx_23060201_TOP__DOT__wire_ren),2);
        bufp->chgCData(oldp+75,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl),4);
        bufp->chgCData(oldp+76,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+77,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+78,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__pair_list[0]),12);
        bufp->chgCData(oldp+79,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__data_list[0]),5);
        bufp->chgCData(oldp+80,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__lut_out),5);
        bufp->chgBit(oldp+81,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+82,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+83,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I),32);
        bufp->chgCData(oldp+84,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+85,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+86,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+87,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+88,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+90,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+92,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+94,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+96,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+98,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+100,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+102,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+113,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+114,(vlSelf->ysyx_23060201_TOP__DOT__wire_npc),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_23060201_TOP__DOT__wire_wdata),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b),32);
        bufp->chgQData(oldp+120,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+122,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+124,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+126,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+128,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+130,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+132,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+142,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit));
        __Vtemp_h9a2d4471__0[0U] = (IData)((0x1700000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_imm))));
        __Vtemp_h9a2d4471__0[1U] = ((vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                                     << 7U) | (IData)(
                                                      ((0x1700000000ULL 
                                                        | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_imm))) 
                                                       >> 0x20U)));
        __Vtemp_h9a2d4471__0[2U] = (0x980U | ((vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2 
                                               << 0xeU) 
                                              | (vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                                                 >> 0x19U)));
        __Vtemp_h9a2d4471__0[3U] = (0xcc000U | (vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2 
                                                >> 0x12U));
        bufp->chgWData(oldp+143,(__Vtemp_h9a2d4471__0),117);
        bufp->chgQData(oldp+147,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+149,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+151,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+157,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+158,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+160,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+165,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+166,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2),32);
        bufp->chgIData(oldp+167,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                  + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                                     + (1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl))))),32);
        bufp->chgIData(oldp+168,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                  ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)),32);
        bufp->chgIData(oldp+169,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                  & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)),32);
        bufp->chgIData(oldp+170,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                  | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)),32);
        bufp->chgIData(oldp+171,(((0x1fU >= vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
                                   ? (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                      >> vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
                                   : 0U)),32);
        __Vtemp_hc3c426de__0[0U] = (IData)((0x800000000ULL 
                                            | (QData)((IData)(
                                                              ((0x1fU 
                                                                >= vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
                                                                ? 
                                                               (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                                                >> vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
                                                                : 0U)))));
        __Vtemp_hc3c426de__0[1U] = (((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                      | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b) 
                                     << 4U) | (IData)(
                                                      ((0x800000000ULL 
                                                        | (QData)((IData)(
                                                                          ((0x1fU 
                                                                            >= vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
                                                                            ? 
                                                                           (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                                                            >> vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
                                                                            : 0U)))) 
                                                       >> 0x20U)));
        __Vtemp_hc3c426de__0[2U] = (0x70U | (((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                               & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b) 
                                              << 8U) 
                                             | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                                 | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b) 
                                                >> 0x1cU)));
        __Vtemp_hc3c426de__0[3U] = (0x600U | (((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                                ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b) 
                                               << 0xcU) 
                                              | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                                  & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b) 
                                                 >> 0x18U)));
        __Vtemp_hc3c426de__0[4U] = (0x4000U | (((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                                 + 
                                                 (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                                                  + 
                                                  (1U 
                                                   & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl)))) 
                                                << 0x10U) 
                                               | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                                   ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b) 
                                                  >> 0x14U)));
        __Vtemp_hc3c426de__0[5U] = ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                     + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                                        + (1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl)))) 
                                    >> 0x10U);
        bufp->chgWData(oldp+172,(__Vtemp_hc3c426de__0),180);
        bufp->chgQData(oldp+178,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+180,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+182,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+184,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+186,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+194,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+209,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+210,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+212,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+214,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+215,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+216,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+217,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+218,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+221,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+224,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+225,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[31]),32);
    }
    bufp->chgBit(oldp+226,(vlSelf->clk));
    bufp->chgBit(oldp+227,(vlSelf->rst));
    bufp->chgIData(oldp+228,(vlSelf->inst),32);
    bufp->chgIData(oldp+229,(vlSelf->pc),32);
    bufp->chgCData(oldp+230,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+231,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->chgCData(oldp+232,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+233,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgIData(oldp+234,(((IData)(4U) + vlSelf->pc)),32);
    __Vtemp_h8360e938__0[0U] = (IData)((0x6700000000ULL 
                                        | (QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelf->pc)))));
    __Vtemp_h8360e938__0[1U] = ((((IData)(4U) + vlSelf->pc) 
                                 << 7U) | (IData)((
                                                   (0x6700000000ULL 
                                                    | (QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelf->pc)))) 
                                                   >> 0x20U)));
    __Vtemp_h8360e938__0[2U] = (0x3780U | ((vlSelf->pc 
                                            << 0xeU) 
                                           | (((IData)(4U) 
                                               + vlSelf->pc) 
                                              >> 0x19U)));
    __Vtemp_h8360e938__0[3U] = (0x5c000U | ((vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                                             << 0x15U) 
                                            | (vlSelf->pc 
                                               >> 0x12U)));
    __Vtemp_h8360e938__0[4U] = (0x6e00000U | ((vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 
                                               << 0x1cU) 
                                              | (vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                                                 >> 0xbU)));
    __Vtemp_h8360e938__0[5U] = (0x30000000U | (vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 
                                               >> 4U));
    __Vtemp_h8360e938__0[6U] = (2U | (vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 
                                      << 3U));
    __Vtemp_h8360e938__0[7U] = (0x98U | ((vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 
                                          << 0xaU) 
                                         | (vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 
                                            >> 0x1dU)));
    __Vtemp_h8360e938__0[8U] = (0xcc00U | (vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1 
                                           >> 0x16U));
    bufp->chgWData(oldp+235,(__Vtemp_h8360e938__0),273);
    __Vtemp_habfd3ff5__0[0U] = (IData)((0x6700000000ULL 
                                        | (QData)((IData)(
                                                          (0xfffffffeU 
                                                           & (vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                                                              + vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1))))));
    __Vtemp_habfd3ff5__0[1U] = (((vlSelf->pc + vlSelf->ysyx_23060201_TOP__DOT__wire_imm) 
                                 << 7U) | (IData)((
                                                   (0x6700000000ULL 
                                                    | (QData)((IData)(
                                                                      (0xfffffffeU 
                                                                       & (vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                                                                          + vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1))))) 
                                                   >> 0x20U)));
    __Vtemp_habfd3ff5__0[2U] = (0x3780U | ((vlSelf->pc 
                                            + vlSelf->ysyx_23060201_TOP__DOT__wire_imm) 
                                           >> 0x19U));
    bufp->chgWData(oldp+244,(__Vtemp_habfd3ff5__0),78);
    bufp->chgSData(oldp+247,((0x460U | (0x1fU & ((vlSelf->inst 
                                                  >> 0xfU) 
                                                 + vlSelf->ysyx_23060201_TOP__DOT__wire_imm)))),12);
    bufp->chgIData(oldp+248,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    bufp->chgIData(oldp+249,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->inst 
                                                    >> 7U)))))),32);
    bufp->chgIData(oldp+250,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+251,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
    bufp->chgCData(oldp+252,((7U & (vlSelf->inst >> 0xcU))),3);
    __Vtemp_h4bdd44af__0[0U] = (IData)((0x6700000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I))));
    __Vtemp_h4bdd44af__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 << 0x1bU) 
                                                | ((0x7f80000U 
                                                    & (vlSelf->inst 
                                                       << 7U)) 
                                                   | ((0x40000U 
                                                       & (vlSelf->inst 
                                                          >> 2U)) 
                                                      | (0x3ff00U 
                                                         & (vlSelf->inst 
                                                            >> 0xdU)))))) 
                                | (IData)(((0x6700000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I))) 
                                           >> 0x20U)));
    __Vtemp_h4bdd44af__0[2U] = (0x3780U | ((0xfc000000U 
                                            & (vlSelf->inst 
                                               << 0xeU)) 
                                           | (0x7fU 
                                              & ((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 >> 5U))));
    __Vtemp_h4bdd44af__0[3U] = (0x5c000U | (vlSelf->inst 
                                            >> 0x12U));
    __Vtemp_h4bdd44af__0[4U] = (0x6e00000U | ((0xe0000000U 
                                               & (vlSelf->inst 
                                                  << 0x15U)) 
                                              | (0x1ffffeU 
                                                 & (vlSelf->inst 
                                                    >> 0xbU))));
    __Vtemp_h4bdd44af__0[5U] = (0x30000000U | (0xfffffffU 
                                               & ((0xfffff00U 
                                                   & ((- (IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU))) 
                                                      << 8U)) 
                                                  | ((0x80U 
                                                      & vlSelf->inst) 
                                                     | ((0x7eU 
                                                         & (vlSelf->inst 
                                                            >> 0x18U)) 
                                                        | (1U 
                                                           & (vlSelf->inst 
                                                              >> 0xbU)))))));
    __Vtemp_h4bdd44af__0[6U] = (6U | (0xfffffff8U & 
                                      (((- (IData)(
                                                   (vlSelf->inst 
                                                    >> 0x1fU))) 
                                        << 0xfU) | 
                                       ((0x7f00U & 
                                         (vlSelf->inst 
                                          >> 0x11U)) 
                                        | (0xf8U & 
                                           (vlSelf->inst 
                                            >> 4U))))));
    __Vtemp_h4bdd44af__0[7U] = (0x118U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I 
                                           << 0xaU) 
                                          | (7U & (
                                                   (- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   >> 0x11U))));
    __Vtemp_h4bdd44af__0[8U] = (0xc00U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I 
                                           << 0x11U) 
                                          | (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I 
                                             >> 0x16U)));
    __Vtemp_h4bdd44af__0[9U] = (0x260000U | (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I 
                                             >> 0xfU));
    bufp->chgWData(oldp+253,(__Vtemp_h4bdd44af__0),312);
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
