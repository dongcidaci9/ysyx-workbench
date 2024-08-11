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
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+229,"inst", false,-1, 31,0);
    tracep->declBus(c+230,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_TOP ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+229,"inst", false,-1, 31,0);
    tracep->declBus(c+230,"pc", false,-1, 31,0);
    tracep->declBus(c+115,"wire_npc", false,-1, 31,0);
    tracep->declBus(c+231,"wire_op", false,-1, 6,0);
    tracep->declBus(c+72,"wire_func3", false,-1, 2,0);
    tracep->declBus(c+232,"wire_rd", false,-1, 4,0);
    tracep->declBus(c+73,"wire_imm", false,-1, 31,0);
    tracep->declBit(c+227,"gpr_clk", false,-1);
    tracep->declBit(c+264,"wire_wen", false,-1);
    tracep->declBus(c+74,"wire_waddr", false,-1, 4,0);
    tracep->declBus(c+116,"wire_wdata", false,-1, 31,0);
    tracep->declBus(c+75,"wire_ren", false,-1, 1,0);
    tracep->declBus(c+233,"wire_raddr1", false,-1, 4,0);
    tracep->declBus(c+234,"wire_raddr2", false,-1, 4,0);
    tracep->declBus(c+117,"wire_rdata1", false,-1, 31,0);
    tracep->declBus(c+118,"wire_rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_EXU ");
    tracep->declBit(c+227,"clk_a", false,-1);
    tracep->declBus(c+230,"pc", false,-1, 31,0);
    tracep->declBus(c+73,"imm", false,-1, 31,0);
    tracep->declBus(c+231,"op", false,-1, 6,0);
    tracep->declBus(c+232,"rd", false,-1, 4,0);
    tracep->declBus(c+72,"func3", false,-1, 2,0);
    tracep->declBus(c+233,"raddr1", false,-1, 4,0);
    tracep->declBus(c+117,"rdata1", false,-1, 31,0);
    tracep->declBus(c+118,"rdata2", false,-1, 31,0);
    tracep->declBit(c+227,"clk_b", false,-1);
    tracep->declBit(c+264,"wen", false,-1);
    tracep->declBus(c+74,"waddr", false,-1, 4,0);
    tracep->declBus(c+116,"wdata", false,-1, 31,0);
    tracep->declBus(c+115,"npc", false,-1, 31,0);
    tracep->declBus(c+235,"snpc", false,-1, 31,0);
    tracep->declBus(c+119,"alu_a", false,-1, 31,0);
    tracep->declBus(c+120,"alu_b", false,-1, 31,0);
    tracep->declBus(c+76,"alu_ctl", false,-1, 3,0);
    tracep->pushNamePrefix("alu_a_sel ");
    tracep->declBus(c+265,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 31,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+267,"default_out", false,-1, 31,0);
    tracep->declArray(c+236,"lut", false,-1, 272,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+265,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+268,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+119,"out", false,-1, 31,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+267,"default_out", false,-1, 31,0);
    tracep->declArray(c+236,"lut", false,-1, 272,0);
    tracep->declBus(c+269,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+121+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+135+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+142,"lut_out", false,-1, 31,0);
    tracep->declBit(c+143,"hit", false,-1);
    tracep->declBus(c+270,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu_b_sel ");
    tracep->declBus(c+271,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+120,"out", false,-1, 31,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+267,"default_out", false,-1, 31,0);
    tracep->declArray(c+144,"lut", false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+271,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+268,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+120,"out", false,-1, 31,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+267,"default_out", false,-1, 31,0);
    tracep->declArray(c+144,"lut", false,-1, 116,0);
    tracep->declBus(c+269,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+148+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+8+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+154+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+157,"lut_out", false,-1, 31,0);
    tracep->declBit(c+158,"hit", false,-1);
    tracep->declBus(c+272,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu_ctl_sel ");
    tracep->declBus(c+273,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+271,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+76,"out", false,-1, 3,0);
    tracep->declBus(c+72,"key", false,-1, 2,0);
    tracep->declBus(c+274,"lut", false,-1, 27,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+273,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+271,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+76,"out", false,-1, 3,0);
    tracep->declBus(c+72,"key", false,-1, 2,0);
    tracep->declBus(c+276,"default_out", false,-1, 3,0);
    tracep->declBus(c+274,"lut", false,-1, 27,0);
    tracep->declBus(c+265,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+15+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+19+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+77,"lut_out", false,-1, 3,0);
    tracep->declBit(c+78,"hit", false,-1);
    tracep->declBus(c+277,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("npc_sel ");
    tracep->declBus(c+278,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+115,"out", false,-1, 31,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+235,"default_out", false,-1, 31,0);
    tracep->declArray(c+245,"lut", false,-1, 77,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+278,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+268,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+115,"out", false,-1, 31,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+235,"default_out", false,-1, 31,0);
    tracep->declArray(c+245,"lut", false,-1, 77,0);
    tracep->declBus(c+269,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+159+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+163+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+165,"lut_out", false,-1, 31,0);
    tracep->declBit(c+166,"hit", false,-1);
    tracep->declBus(c+279,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("waddr_sel ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+280,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+74,"out", false,-1, 4,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+232,"default_out", false,-1, 4,0);
    tracep->declBus(c+248,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+268,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+280,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+268,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+74,"out", false,-1, 4,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+232,"default_out", false,-1, 4,0);
    tracep->declBus(c+248,"lut", false,-1, 11,0);
    tracep->declBus(c+281,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+79+i*1,"pair_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+25+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+80+i*1,"data_list", true,(i+0), 4,0);
    }
    tracep->declBus(c+81,"lut_out", false,-1, 4,0);
    tracep->declBit(c+82,"hit", false,-1);
    tracep->declBus(c+282,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_23060201_ALU ");
    tracep->declBus(c+119,"a", false,-1, 31,0);
    tracep->declBus(c+120,"b", false,-1, 31,0);
    tracep->declBus(c+76,"ctl", false,-1, 3,0);
    tracep->declBus(c+116,"res", false,-1, 31,0);
    tracep->declBus(c+167,"b2", false,-1, 31,0);
    tracep->declBus(c+168,"alu_addsub", false,-1, 31,0);
    tracep->declBus(c+169,"alu_xor", false,-1, 31,0);
    tracep->declBus(c+170,"alu_and", false,-1, 31,0);
    tracep->declBus(c+171,"alu_or", false,-1, 31,0);
    tracep->declBus(c+172,"alu_lrs", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+280,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+273,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+116,"out", false,-1, 31,0);
    tracep->declBus(c+76,"key", false,-1, 3,0);
    tracep->declArray(c+173,"lut", false,-1, 179,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+280,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+273,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+116,"out", false,-1, 31,0);
    tracep->declBus(c+76,"key", false,-1, 3,0);
    tracep->declBus(c+267,"default_out", false,-1, 31,0);
    tracep->declArray(c+173,"lut", false,-1, 179,0);
    tracep->declBus(c+283,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+179+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+26+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+189+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+194,"lut_out", false,-1, 31,0);
    tracep->declBit(c+83,"hit", false,-1);
    tracep->declBus(c+284,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ysyx_23060201_GPR ");
    tracep->declBus(c+280,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBus(c+75,"ren", false,-1, 1,0);
    tracep->declBit(c+264,"wen", false,-1);
    tracep->declBus(c+233,"raddr1", false,-1, 4,0);
    tracep->declBus(c+234,"raddr2", false,-1, 4,0);
    tracep->declBus(c+74,"waddr", false,-1, 4,0);
    tracep->declBus(c+116,"wdata", false,-1, 31,0);
    tracep->declBus(c+117,"rdata1", false,-1, 31,0);
    tracep->declBus(c+118,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+195+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060201_IDU ");
    tracep->declBus(c+229,"inst", false,-1, 31,0);
    tracep->declBus(c+73,"inst_imm", false,-1, 31,0);
    tracep->declBus(c+231,"inst_op", false,-1, 6,0);
    tracep->declBus(c+232,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+72,"inst_func3", false,-1, 2,0);
    tracep->declBus(c+75,"ren", false,-1, 1,0);
    tracep->declBus(c+233,"raddr1", false,-1, 4,0);
    tracep->declBus(c+234,"raddr2", false,-1, 4,0);
    tracep->declBus(c+233,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+234,"inst_rs2", false,-1, 4,0);
    tracep->declBus(c+84,"imm_I", false,-1, 31,0);
    tracep->declBus(c+249,"imm_S", false,-1, 31,0);
    tracep->declBus(c+250,"imm_B", false,-1, 31,0);
    tracep->declBus(c+251,"imm_U", false,-1, 31,0);
    tracep->declBus(c+252,"imm_J", false,-1, 31,0);
    tracep->pushNamePrefix("func3_aupic ");
    tracep->declBus(c+278,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+271,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 2,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+253,"default_out", false,-1, 2,0);
    tracep->declBus(c+285,"lut", false,-1, 19,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+278,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+271,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+268,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 2,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+253,"default_out", false,-1, 2,0);
    tracep->declBus(c+285,"lut", false,-1, 19,0);
    tracep->declBus(c+286,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+31+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+33+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+35+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+85,"lut_out", false,-1, 2,0);
    tracep->declBit(c+86,"hit", false,-1);
    tracep->declBus(c+279,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpr_ren ");
    tracep->declBus(c+287,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+278,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+75,"out", false,-1, 1,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declArray(c+288,"lut", false,-1, 80,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+287,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+278,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+75,"out", false,-1, 1,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+291,"default_out", false,-1, 1,0);
    tracep->declArray(c+288,"lut", false,-1, 80,0);
    tracep->declBus(c+287,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+37+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+46+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+55+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+87,"lut_out", false,-1, 1,0);
    tracep->declBit(c+88,"hit", false,-1);
    tracep->declBus(c+292,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imm_sel ");
    tracep->declBus(c+293,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+73,"out", false,-1, 31,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declArray(c+254,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+293,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+265,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+266,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+275,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+73,"out", false,-1, 31,0);
    tracep->declBus(c+231,"key", false,-1, 6,0);
    tracep->declBus(c+267,"default_out", false,-1, 31,0);
    tracep->declArray(c+254,"lut", false,-1, 311,0);
    tracep->declBus(c+269,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+89+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+64+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+105+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+113,"lut_out", false,-1, 31,0);
    tracep->declBit(c+114,"hit", false,-1);
    tracep->declBus(c+294,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060201_PC ");
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+115,"npc", false,-1, 31,0);
    tracep->declBus(c+230,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+266,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+295,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+227,"clk", false,-1);
    tracep->declBit(c+228,"rst", false,-1);
    tracep->declBus(c+115,"din", false,-1, 31,0);
    tracep->declBus(c+230,"dout", false,-1, 31,0);
    tracep->declBit(c+264,"wen", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp_h9a2d4471__0;
    VlWide<6>/*191:0*/ __Vtemp_hc3c426de__0;
    VlWide<9>/*287:0*/ __Vtemp_h8360e938__0;
    VlWide<3>/*95:0*/ __Vtemp_habfd3ff5__0;
    VlWide<10>/*319:0*/ __Vtemp_h4bdd44af__0;
    VlWide<3>/*95:0*/ __Vtemp_h16f6a129__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[4]),4);
    bufp->fullSData(oldp+31,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+32,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__data_list[1]),3);
    bufp->fullSData(oldp+37,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+38,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+39,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+40,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+41,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+42,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[5]),9);
    bufp->fullSData(oldp+43,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[6]),9);
    bufp->fullSData(oldp+44,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[7]),9);
    bufp->fullSData(oldp+45,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[8]),9);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+48,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+49,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+57,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+58,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+59,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[4]),2);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[5]),2);
    bufp->fullCData(oldp+61,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[6]),2);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[7]),2);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[8]),2);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+67,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+70,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+71,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+72,(vlSelf->ysyx_23060201_TOP__DOT__wire_func3),3);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_23060201_TOP__DOT__wire_imm),32);
    bufp->fullCData(oldp+74,(vlSelf->ysyx_23060201_TOP__DOT__wire_waddr),5);
    bufp->fullCData(oldp+75,(vlSelf->ysyx_23060201_TOP__DOT__wire_ren),2);
    bufp->fullCData(oldp+76,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl),4);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+78,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+79,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__pair_list[0]),12);
    bufp->fullCData(oldp+80,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__data_list[0]),5);
    bufp->fullCData(oldp+81,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__lut_out),5);
    bufp->fullBit(oldp+82,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+84,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I),32);
    bufp->fullCData(oldp+85,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+86,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+87,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+88,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+89,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+91,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+93,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+95,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+97,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+99,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+101,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+103,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+114,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060201_TOP__DOT__wire_npc),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060201_TOP__DOT__wire_wdata),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b),32);
    bufp->fullQData(oldp+121,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+123,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+125,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+127,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+129,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+131,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+133,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+143,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit));
    __Vtemp_h9a2d4471__0[0U] = (IData)((0x1700000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_imm))));
    __Vtemp_h9a2d4471__0[1U] = ((vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                                 << 7U) | (IData)((
                                                   (0x1700000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__wire_imm))) 
                                                   >> 0x20U)));
    __Vtemp_h9a2d4471__0[2U] = (0x980U | ((vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2 
                                           << 0xeU) 
                                          | (vlSelf->ysyx_23060201_TOP__DOT__wire_imm 
                                             >> 0x19U)));
    __Vtemp_h9a2d4471__0[3U] = (0xcc000U | (vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2 
                                            >> 0x12U));
    bufp->fullWData(oldp+144,(__Vtemp_h9a2d4471__0),117);
    bufp->fullQData(oldp+148,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+150,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+152,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+158,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+159,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+161,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+166,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+167,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2),32);
    bufp->fullIData(oldp+168,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                               + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                                  + (1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl))))),32);
    bufp->fullIData(oldp+169,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                               ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)),32);
    bufp->fullIData(oldp+170,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                               & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)),32);
    bufp->fullIData(oldp+171,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                               | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)),32);
    bufp->fullIData(oldp+172,(((0x1fU >= vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
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
                                 << 4U) | (IData)((
                                                   (0x800000000ULL 
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
                                          << 8U) | 
                                         ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                           | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b) 
                                          >> 0x1cU)));
    __Vtemp_hc3c426de__0[3U] = (0x600U | (((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                            ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b) 
                                           << 0xcU) 
                                          | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                              & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b) 
                                             >> 0x18U)));
    __Vtemp_hc3c426de__0[4U] = (0x4000U | (((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                             + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                                                + (1U 
                                                   & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl)))) 
                                            << 0x10U) 
                                           | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                               ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b) 
                                              >> 0x14U)));
    __Vtemp_hc3c426de__0[5U] = ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                                 + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                                    + (1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl)))) 
                                >> 0x10U);
    bufp->fullWData(oldp+173,(__Vtemp_hc3c426de__0),180);
    bufp->fullQData(oldp+179,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+181,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+183,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+185,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+187,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[31]),32);
    bufp->fullBit(oldp+227,(vlSelf->clk));
    bufp->fullBit(oldp+228,(vlSelf->rst));
    bufp->fullIData(oldp+229,(vlSelf->inst),32);
    bufp->fullIData(oldp+230,(vlSelf->pc),32);
    bufp->fullCData(oldp+231,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+232,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+233,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+234,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+235,(((IData)(4U) + vlSelf->pc)),32);
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
    bufp->fullWData(oldp+236,(__Vtemp_h8360e938__0),273);
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
    bufp->fullWData(oldp+245,(__Vtemp_habfd3ff5__0),78);
    bufp->fullSData(oldp+248,((0x460U | (0x1fU & ((vlSelf->inst 
                                                   >> 0xfU) 
                                                  + vlSelf->ysyx_23060201_TOP__DOT__wire_imm)))),12);
    bufp->fullIData(oldp+249,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+250,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+251,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+252,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+253,((7U & (vlSelf->inst >> 0xcU))),3);
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
    bufp->fullWData(oldp+254,(__Vtemp_h4bdd44af__0),312);
    bufp->fullBit(oldp+264,(1U));
    bufp->fullIData(oldp+265,(7U),32);
    bufp->fullIData(oldp+266,(0x20U),32);
    bufp->fullIData(oldp+267,(0U),32);
    bufp->fullIData(oldp+268,(1U),32);
    bufp->fullIData(oldp+269,(0x27U),32);
    bufp->fullIData(oldp+270,(7U),32);
    bufp->fullIData(oldp+271,(3U),32);
    bufp->fullIData(oldp+272,(3U),32);
    bufp->fullIData(oldp+273,(4U),32);
    bufp->fullIData(oldp+274,(0x113b67U),28);
    bufp->fullIData(oldp+275,(0U),32);
    bufp->fullCData(oldp+276,(0U),4);
    bufp->fullIData(oldp+277,(4U),32);
    bufp->fullIData(oldp+278,(2U),32);
    bufp->fullIData(oldp+279,(2U),32);
    bufp->fullIData(oldp+280,(5U),32);
    bufp->fullIData(oldp+281,(0xcU),32);
    bufp->fullIData(oldp+282,(1U),32);
    bufp->fullIData(oldp+283,(0x24U),32);
    bufp->fullIData(oldp+284,(5U),32);
    bufp->fullIData(oldp+285,(0x2e378U),20);
    bufp->fullIData(oldp+286,(0xaU),32);
    bufp->fullIData(oldp+287,(9U),32);
    __Vtemp_h16f6a129__0[0U] = 0xe173799cU;
    __Vtemp_h16f6a129__0[1U] = 0x83d1b8f6U;
    __Vtemp_h16f6a129__0[2U] = 0xcf26U;
    bufp->fullWData(oldp+288,(__Vtemp_h16f6a129__0),81);
    bufp->fullCData(oldp+291,(0U),2);
    bufp->fullIData(oldp+292,(9U),32);
    bufp->fullIData(oldp+293,(8U),32);
    bufp->fullIData(oldp+294,(8U),32);
    bufp->fullIData(oldp+295,(0x80000000U),32);
}
