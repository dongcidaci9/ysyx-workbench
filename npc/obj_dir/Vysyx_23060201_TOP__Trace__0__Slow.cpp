// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060201_TOP__Syms.h"


VL_ATTR_COLD void Vysyx_23060201_TOP___024root__trace_init_sub__TOP__0(Vysyx_23060201_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+66,"inst", false,-1, 31,0);
    tracep->declBus(c+67,"inst_rd_val", false,-1, 31,0);
    tracep->declBus(c+68,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_TOP ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+66,"inst", false,-1, 31,0);
    tracep->declBus(c+67,"inst_rd_val", false,-1, 31,0);
    tracep->declBus(c+68,"pc", false,-1, 31,0);
    tracep->declBus(c+69,"inst_op", false,-1, 6,0);
    tracep->declBus(c+70,"inst_func3", false,-1, 2,0);
    tracep->declBus(c+71,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+72,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+5,"inst_imm", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_EXU ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+69,"inst_op", false,-1, 6,0);
    tracep->declBus(c+70,"inst_func3", false,-1, 2,0);
    tracep->declBus(c+71,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+72,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+5,"inst_imm", false,-1, 31,0);
    tracep->declBus(c+67,"inst_rd_val", false,-1, 31,0);
    tracep->declBus(c+10,"inst_rs1_val", false,-1, 31,0);
    tracep->declBit(c+6,"inst_addi", false,-1);
    tracep->declBus(c+7,"ctrl", false,-1, 2,0);
    tracep->pushNamePrefix("ysyx_23060201_ALU ");
    tracep->declBus(c+10,"a", false,-1, 31,0);
    tracep->declBus(c+5,"b", false,-1, 31,0);
    tracep->declBus(c+7,"ctrl", false,-1, 2,0);
    tracep->declBus(c+67,"res", false,-1, 31,0);
    tracep->declBus(c+11,"res_addsub", false,-1, 31,0);
    tracep->declBus(c+12,"res_and", false,-1, 31,0);
    tracep->declBus(c+13,"res_or", false,-1, 31,0);
    tracep->declBus(c+8,"b2", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+76,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+77,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+78,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+67,"out", false,-1, 31,0);
    tracep->declBus(c+7,"key", false,-1, 2,0);
    tracep->declArray(c+14,"lut", false,-1, 139,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+76,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+77,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+78,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+79,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+67,"out", false,-1, 31,0);
    tracep->declBus(c+7,"key", false,-1, 2,0);
    tracep->declBus(c+80,"default_out", false,-1, 31,0);
    tracep->declArray(c+14,"lut", false,-1, 139,0);
    tracep->declBus(c+81,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+19+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+27+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+31,"lut_out", false,-1, 31,0);
    tracep->declBit(c+9,"hit", false,-1);
    tracep->declBus(c+82,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060201_GPR ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+71,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+72,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+67,"inst_rd_val", false,-1, 31,0);
    tracep->declBus(c+10,"inst_rs1_val", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+32+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("rs1_saved ");
    tracep->declBus(c+78,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+80,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+67,"din", false,-1, 31,0);
    tracep->declBus(c+73,"dout", false,-1, 31,0);
    tracep->declBit(c+83,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060201_IDU ");
    tracep->declBus(c+66,"inst", false,-1, 31,0);
    tracep->declBus(c+69,"inst_op", false,-1, 6,0);
    tracep->declBus(c+70,"inst_func3", false,-1, 2,0);
    tracep->declBus(c+71,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+72,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+5,"inst_imm", false,-1, 31,0);
    tracep->declBus(c+74,"imm", false,-1, 11,0);
    tracep->declBus(c+5,"imm_ext", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060201_PC ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+68,"pc", false,-1, 31,0);
    tracep->declBus(c+68,"add_in", false,-1, 31,0);
    tracep->declBus(c+75,"npc", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+78,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+75,"din", false,-1, 31,0);
    tracep->declBus(c+68,"dout", false,-1, 31,0);
    tracep->declBit(c+83,"wen", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vysyx_23060201_TOP___024root__trace_init_top(Vysyx_23060201_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060201_TOP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060201_TOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060201_TOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060201_TOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060201_TOP___024root__trace_register(Vysyx_23060201_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060201_TOP___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060201_TOP___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060201_TOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060201_TOP___024root__trace_full_sub_0(Vysyx_23060201_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060201_TOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060201_TOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060201_TOP___024root*>(voidSelf);
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060201_TOP___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060201_TOP___024root__trace_full_sub_0(Vysyx_23060201_TOP___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060201_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060201_TOP___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_hac136f72__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[3]),3);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext),32);
    bufp->fullBit(oldp+6,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi));
    bufp->fullCData(oldp+7,(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                              ? 0U : 7U)),3);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2),32);
    bufp->fullBit(oldp+9,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub),32);
    bufp->fullIData(oldp+12,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val 
                              & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
    bufp->fullIData(oldp+13,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val 
                              | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
    __Vtemp_hac136f72__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val 
                                                           | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)))));
    __Vtemp_hac136f72__0[1U] = (((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val 
                                  & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext) 
                                 << 3U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val 
                                                                       | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)))) 
                                                   >> 0x20U)));
    __Vtemp_hac136f72__0[2U] = (0x10U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                          << 6U) | 
                                         ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val 
                                           & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext) 
                                          >> 0x1dU)));
    __Vtemp_hac136f72__0[3U] = (0x40U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                          << 9U) | 
                                         (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                          >> 0x1aU)));
    __Vtemp_hac136f72__0[4U] = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                >> 0x17U);
    bufp->fullWData(oldp+14,(__Vtemp_hac136f72__0),140);
    bufp->fullQData(oldp+19,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+21,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+23,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+25,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__reg_file[31]),32);
    bufp->fullBit(oldp+64,(vlSelf->clk));
    bufp->fullBit(oldp+65,(vlSelf->rst));
    bufp->fullIData(oldp+66,(vlSelf->inst),32);
    bufp->fullIData(oldp+67,(vlSelf->inst_rd_val),32);
    bufp->fullIData(oldp+68,(vlSelf->pc),32);
    bufp->fullCData(oldp+69,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+70,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+71,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+72,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__rs1_saved____pinNumber4),32);
    bufp->fullSData(oldp+74,((vlSelf->inst >> 0x14U)),12);
    bufp->fullIData(oldp+75,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+76,(4U),32);
    bufp->fullIData(oldp+77,(3U),32);
    bufp->fullIData(oldp+78,(0x20U),32);
    bufp->fullIData(oldp+79,(0U),32);
    bufp->fullIData(oldp+80,(0U),32);
    bufp->fullIData(oldp+81,(0x23U),32);
    bufp->fullIData(oldp+82,(4U),32);
    bufp->fullBit(oldp+83,(1U));
    bufp->fullIData(oldp+84,(0x80000000U),32);
}
