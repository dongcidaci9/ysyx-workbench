// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMuxKeyInternal__Syms.h"


VL_ATTR_COLD void VMuxKeyInternal___024root__trace_init_sub__TOP__0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBit(c+27,"inst_rd_val_in", false,-1);
    tracep->declBus(c+28,"inst_in", false,-1, 31,0);
    tracep->declBus(c+29,"inst_out", false,-1, 31,0);
    tracep->declBit(c+30,"inst_rd_val_out", false,-1);
    tracep->declBit(c+31,"pc", false,-1);
    tracep->pushNamePrefix("ysyx_23060201_TOP ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBit(c+27,"inst_rd_val_in", false,-1);
    tracep->declBus(c+28,"inst_in", false,-1, 31,0);
    tracep->declBus(c+29,"inst_out", false,-1, 31,0);
    tracep->declBit(c+30,"inst_rd_val_out", false,-1);
    tracep->declBit(c+31,"pc", false,-1);
    tracep->declBus(c+32,"inst_type", false,-1, 9,0);
    tracep->declBus(c+33,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+50,"inst_rs2", false,-1, 4,0);
    tracep->declBus(c+34,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+5,"inst_imm", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_EXU ");
    tracep->declBus(c+32,"inst_type", false,-1, 9,0);
    tracep->declBus(c+33,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+50,"inst_rs2", false,-1, 4,0);
    tracep->declBus(c+34,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+5,"inst_imm", false,-1, 31,0);
    tracep->declBus(c+35,"inst_rd_val_in", false,-1, 31,0);
    tracep->declBus(c+6,"inst_rd_val_out", false,-1, 31,0);
    tracep->declBus(c+36,"ctrl", false,-1, 2,0);
    tracep->pushNamePrefix("ysyx_23060201_ALU ");
    tracep->declBus(c+35,"a", false,-1, 31,0);
    tracep->declBus(c+5,"b", false,-1, 31,0);
    tracep->declBus(c+36,"ctrl", false,-1, 2,0);
    tracep->declBus(c+6,"res", false,-1, 31,0);
    tracep->declBit(c+7,"nf", false,-1);
    tracep->declBit(c+8,"zf", false,-1);
    tracep->declBit(c+37,"cf", false,-1);
    tracep->declBit(c+38,"vf", false,-1);
    tracep->declBus(c+9,"res_addsub", false,-1, 31,0);
    tracep->declBus(c+39,"res_and", false,-1, 31,0);
    tracep->declBus(c+40,"res_or", false,-1, 31,0);
    tracep->declBus(c+10,"b2", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+51,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+52,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+53,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+6,"out", false,-1, 31,0);
    tracep->declBus(c+36,"key", false,-1, 2,0);
    tracep->declArray(c+41,"lut", false,-1, 139,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+51,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+52,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+53,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+54,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+6,"out", false,-1, 31,0);
    tracep->declBus(c+36,"key", false,-1, 2,0);
    tracep->declBus(c+55,"default_out", false,-1, 31,0);
    tracep->declArray(c+41,"lut", false,-1, 139,0);
    tracep->declBus(c+56,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+11+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+19+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+23,"lut_out", false,-1, 31,0);
    tracep->declBit(c+24,"hit", false,-1);
    tracep->declBus(c+57,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ysyx_23060201_IDU ");
    tracep->declBus(c+29,"inst", false,-1, 31,0);
    tracep->declBus(c+32,"inst_type", false,-1, 9,0);
    tracep->declBus(c+33,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+50,"inst_rs2", false,-1, 4,0);
    tracep->declBus(c+34,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+5,"inst_imm", false,-1, 31,0);
    tracep->declBus(c+46,"op", false,-1, 6,0);
    tracep->declBus(c+36,"func3", false,-1, 2,0);
    tracep->declBus(c+33,"rs1", false,-1, 4,0);
    tracep->declBus(c+50,"rs2", false,-1, 4,0);
    tracep->declBus(c+34,"rd", false,-1, 4,0);
    tracep->declBus(c+47,"imm", false,-1, 11,0);
    tracep->declBus(c+5,"imm_ext", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060201_PC ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+48,"pc", false,-1, 31,0);
    tracep->declBit(c+31,"add_in", false,-1);
    tracep->declBit(c+31,"npc", false,-1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+53,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+49,"din", false,-1, 31,0);
    tracep->declBus(c+48,"dout", false,-1, 31,0);
    tracep->declBit(c+59,"wen", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VMuxKeyInternal___024root__trace_init_top(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root__trace_init_top\n"); );
    // Body
    VMuxKeyInternal___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMuxKeyInternal___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMuxKeyInternal___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMuxKeyInternal___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMuxKeyInternal___024root__trace_register(VMuxKeyInternal___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VMuxKeyInternal___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VMuxKeyInternal___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VMuxKeyInternal___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMuxKeyInternal___024root__trace_full_sub_0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMuxKeyInternal___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root__trace_full_top_0\n"); );
    // Init
    VMuxKeyInternal___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMuxKeyInternal___024root*>(voidSelf);
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMuxKeyInternal___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMuxKeyInternal___024root__trace_full_sub_0(VMuxKeyInternal___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_hd07bb393__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[3]),3);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060201_TOP__DOT____Vcellout__ysyx_23060201_EXU__inst_rd_val_out),32);
    bufp->fullBit(oldp+7,((vlSelf->ysyx_23060201_TOP__DOT____Vcellout__ysyx_23060201_EXU__inst_rd_val_out 
                           >> 0x1fU)));
    bufp->fullBit(oldp+8,((1U & (~ (IData)((0U != vlSelf->ysyx_23060201_TOP__DOT____Vcellout__ysyx_23060201_EXU__inst_rd_val_out))))));
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2),32);
    bufp->fullQData(oldp+11,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+13,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+15,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+17,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+24,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+25,(vlSelf->clk));
    bufp->fullBit(oldp+26,(vlSelf->rst));
    bufp->fullBit(oldp+27,(vlSelf->inst_rd_val_in));
    bufp->fullIData(oldp+28,(vlSelf->inst_in),32);
    bufp->fullIData(oldp+29,(vlSelf->inst_out),32);
    bufp->fullBit(oldp+30,(vlSelf->inst_rd_val_out));
    bufp->fullBit(oldp+31,(vlSelf->pc));
    bufp->fullSData(oldp+32,(((0x380U & (vlSelf->inst_in 
                                         >> 7U)) | 
                              (0x7fU & vlSelf->inst_in))),10);
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->inst_in 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelf->inst_in 
                                       >> 7U))),5);
    bufp->fullIData(oldp+35,(vlSelf->inst_rd_val_in),32);
    bufp->fullCData(oldp+36,((7U & (vlSelf->inst_in 
                                    >> 0xeU))),3);
    bufp->fullBit(oldp+37,((1U & (IData)((1ULL & (((QData)((IData)(vlSelf->inst_rd_val_in)) 
                                                   + 
                                                   ((QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2)) 
                                                    + (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->inst_in 
                                                                          >> 0xeU)))))) 
                                                  >> 0x20U))))));
    bufp->fullBit(oldp+38,((((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                              >> 0x1fU) & (vlSelf->inst_in 
                                           >> 0xfU)) 
                            & (~ ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                                   >> 0x1fU) ^ (vlSelf->inst_in 
                                                >> 0xeU))))));
    bufp->fullIData(oldp+39,(((IData)(vlSelf->inst_rd_val_in) 
                              & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
    bufp->fullIData(oldp+40,(((IData)(vlSelf->inst_rd_val_in) 
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
    bufp->fullWData(oldp+41,(__Vtemp_hd07bb393__0),140);
    bufp->fullCData(oldp+46,((0x7fU & vlSelf->inst_in)),7);
    bufp->fullSData(oldp+47,((vlSelf->inst_in >> 0x14U)),12);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060201_TOP__DOT____Vcellout__ysyx_23060201_PC__pc),32);
    bufp->fullIData(oldp+49,(vlSelf->pc),32);
    bufp->fullCData(oldp+50,(0U),5);
    bufp->fullIData(oldp+51,(4U),32);
    bufp->fullIData(oldp+52,(3U),32);
    bufp->fullIData(oldp+53,(0x20U),32);
    bufp->fullIData(oldp+54,(0U),32);
    bufp->fullIData(oldp+55,(0U),32);
    bufp->fullIData(oldp+56,(0x23U),32);
    bufp->fullIData(oldp+57,(4U),32);
    bufp->fullIData(oldp+58,(0x80000000U),32);
    bufp->fullBit(oldp+59,(1U));
}
