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
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+260,"inst", false,-1, 31,0);
    tracep->declBus(c+261,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_TOP ");
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+260,"inst", false,-1, 31,0);
    tracep->declBus(c+261,"pc", false,-1, 31,0);
    tracep->declBus(c+113,"wire_npc", false,-1, 31,0);
    tracep->declBus(c+262,"wire_op", false,-1, 6,0);
    tracep->declBus(c+69,"wire_func3", false,-1, 2,0);
    tracep->declBus(c+263,"wire_rd", false,-1, 4,0);
    tracep->declBus(c+70,"wire_imm", false,-1, 31,0);
    tracep->declBit(c+258,"gpr_clk", false,-1);
    tracep->declBit(c+294,"wire_wen", false,-1);
    tracep->declBus(c+71,"wire_waddr", false,-1, 4,0);
    tracep->declBus(c+114,"wire_wdata", false,-1, 31,0);
    tracep->declBus(c+72,"wire_ren", false,-1, 1,0);
    tracep->declBus(c+264,"wire_raddr1", false,-1, 4,0);
    tracep->declBus(c+265,"wire_raddr2", false,-1, 4,0);
    tracep->declBus(c+115,"wire_rdata1", false,-1, 31,0);
    tracep->declBus(c+116,"wire_rdata2", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_EXU ");
    tracep->declBit(c+258,"clk_a", false,-1);
    tracep->declBus(c+261,"pc", false,-1, 31,0);
    tracep->declBus(c+70,"imm", false,-1, 31,0);
    tracep->declBus(c+262,"op", false,-1, 6,0);
    tracep->declBus(c+263,"rd", false,-1, 4,0);
    tracep->declBus(c+69,"func3", false,-1, 2,0);
    tracep->declBus(c+264,"raddr1", false,-1, 4,0);
    tracep->declBus(c+115,"rdata1", false,-1, 31,0);
    tracep->declBus(c+116,"rdata2", false,-1, 31,0);
    tracep->declBit(c+258,"clk_b", false,-1);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->declBus(c+71,"waddr", false,-1, 4,0);
    tracep->declBus(c+114,"wdata", false,-1, 31,0);
    tracep->declBus(c+113,"npc", false,-1, 31,0);
    tracep->declBus(c+266,"snpc", false,-1, 31,0);
    tracep->declBus(c+117,"alu_a", false,-1, 31,0);
    tracep->declBus(c+118,"alu_b", false,-1, 31,0);
    tracep->declBus(c+73,"alu_ctl", false,-1, 3,0);
    tracep->pushNamePrefix("alu_a_sel ");
    tracep->declBus(c+295,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+117,"out", false,-1, 31,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+297,"default_out", false,-1, 31,0);
    tracep->declArray(c+267,"lut", false,-1, 272,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+295,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+298,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+117,"out", false,-1, 31,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+297,"default_out", false,-1, 31,0);
    tracep->declArray(c+267,"lut", false,-1, 272,0);
    tracep->declBus(c+299,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+119+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+133+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+140,"lut_out", false,-1, 31,0);
    tracep->declBit(c+141,"hit", false,-1);
    tracep->declBus(c+300,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu_b_sel ");
    tracep->declBus(c+301,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+297,"default_out", false,-1, 31,0);
    tracep->declArray(c+142,"lut", false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+301,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+298,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+118,"out", false,-1, 31,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+297,"default_out", false,-1, 31,0);
    tracep->declArray(c+142,"lut", false,-1, 116,0);
    tracep->declBus(c+299,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+146+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+8+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+152+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+155,"lut_out", false,-1, 31,0);
    tracep->declBit(c+156,"hit", false,-1);
    tracep->declBus(c+302,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu_ctl_sel ");
    tracep->declBus(c+303,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+301,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+303,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+73,"out", false,-1, 3,0);
    tracep->declBus(c+69,"key", false,-1, 2,0);
    tracep->declBus(c+304,"lut", false,-1, 27,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+303,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+301,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+303,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+73,"out", false,-1, 3,0);
    tracep->declBus(c+69,"key", false,-1, 2,0);
    tracep->declBus(c+306,"default_out", false,-1, 3,0);
    tracep->declBus(c+304,"lut", false,-1, 27,0);
    tracep->declBus(c+295,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+11+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+15+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+19+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+74,"lut_out", false,-1, 3,0);
    tracep->declBit(c+75,"hit", false,-1);
    tracep->declBus(c+307,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("npc_sel ");
    tracep->declBus(c+308,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+113,"out", false,-1, 31,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+266,"default_out", false,-1, 31,0);
    tracep->declArray(c+276,"lut", false,-1, 77,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+308,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+298,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+113,"out", false,-1, 31,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+266,"default_out", false,-1, 31,0);
    tracep->declArray(c+276,"lut", false,-1, 77,0);
    tracep->declBus(c+299,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+157+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+161+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+163,"lut_out", false,-1, 31,0);
    tracep->declBit(c+164,"hit", false,-1);
    tracep->declBus(c+309,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("waddr_sel ");
    tracep->declBus(c+298,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+310,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 4,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+263,"default_out", false,-1, 4,0);
    tracep->declBus(c+279,"lut", false,-1, 11,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+298,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+310,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+298,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 4,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+263,"default_out", false,-1, 4,0);
    tracep->declBus(c+279,"lut", false,-1, 11,0);
    tracep->declBus(c+311,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+76+i*1,"pair_list", true,(i+0), 11,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+25+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+77+i*1,"data_list", true,(i+0), 4,0);
    }
    tracep->declBus(c+78,"lut_out", false,-1, 4,0);
    tracep->declBit(c+79,"hit", false,-1);
    tracep->declBus(c+312,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_23060201_ALU ");
    tracep->declBus(c+117,"a", false,-1, 31,0);
    tracep->declBus(c+118,"b", false,-1, 31,0);
    tracep->declBus(c+73,"ctl", false,-1, 3,0);
    tracep->declBus(c+114,"res", false,-1, 31,0);
    tracep->declBus(c+165,"b2", false,-1, 31,0);
    tracep->declBus(c+166,"alu_addsub", false,-1, 31,0);
    tracep->declBus(c+167,"alu_xor", false,-1, 31,0);
    tracep->declBus(c+168,"alu_and", false,-1, 31,0);
    tracep->declBus(c+169,"alu_or", false,-1, 31,0);
    tracep->declBus(c+170,"alu_lrs", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+310,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+303,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+114,"out", false,-1, 31,0);
    tracep->declBus(c+73,"key", false,-1, 3,0);
    tracep->declArray(c+171,"lut", false,-1, 179,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+310,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+303,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+114,"out", false,-1, 31,0);
    tracep->declBus(c+73,"key", false,-1, 3,0);
    tracep->declBus(c+297,"default_out", false,-1, 31,0);
    tracep->declArray(c+171,"lut", false,-1, 179,0);
    tracep->declBus(c+313,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+177+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+26+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+187+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+192,"lut_out", false,-1, 31,0);
    tracep->declBit(c+80,"hit", false,-1);
    tracep->declBus(c+314,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("ysyx_23060201_GPR ");
    tracep->declBus(c+310,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+72,"ren", false,-1, 1,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->declBus(c+264,"raddr1", false,-1, 4,0);
    tracep->declBus(c+265,"raddr2", false,-1, 4,0);
    tracep->declBus(c+71,"waddr", false,-1, 4,0);
    tracep->declBus(c+114,"wdata", false,-1, 31,0);
    tracep->declBus(c+115,"rdata1", false,-1, 31,0);
    tracep->declBus(c+116,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+193+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("rst0 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+225,"din", false,-1, 31,0);
    tracep->declBus(c+225,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst1 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+226,"din", false,-1, 31,0);
    tracep->declBus(c+226,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst10 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+227,"din", false,-1, 31,0);
    tracep->declBus(c+227,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst11 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+228,"din", false,-1, 31,0);
    tracep->declBus(c+228,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst12 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+229,"din", false,-1, 31,0);
    tracep->declBus(c+229,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst13 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+230,"din", false,-1, 31,0);
    tracep->declBus(c+230,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst14 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+231,"din", false,-1, 31,0);
    tracep->declBus(c+231,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst15 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+232,"din", false,-1, 31,0);
    tracep->declBus(c+232,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst16 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+233,"din", false,-1, 31,0);
    tracep->declBus(c+233,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst17 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+234,"din", false,-1, 31,0);
    tracep->declBus(c+234,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst18 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+235,"din", false,-1, 31,0);
    tracep->declBus(c+235,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst19 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+236,"din", false,-1, 31,0);
    tracep->declBus(c+236,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst2 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+237,"din", false,-1, 31,0);
    tracep->declBus(c+237,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst20 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+238,"din", false,-1, 31,0);
    tracep->declBus(c+238,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst21 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+239,"din", false,-1, 31,0);
    tracep->declBus(c+239,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst22 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+240,"din", false,-1, 31,0);
    tracep->declBus(c+240,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst23 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+241,"din", false,-1, 31,0);
    tracep->declBus(c+241,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst24 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+242,"din", false,-1, 31,0);
    tracep->declBus(c+242,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst25 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+243,"din", false,-1, 31,0);
    tracep->declBus(c+243,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst26 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+244,"din", false,-1, 31,0);
    tracep->declBus(c+244,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst27 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+245,"din", false,-1, 31,0);
    tracep->declBus(c+245,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst28 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+246,"din", false,-1, 31,0);
    tracep->declBus(c+246,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst29 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 31,0);
    tracep->declBus(c+247,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst3 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+248,"din", false,-1, 31,0);
    tracep->declBus(c+248,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst30 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+249,"din", false,-1, 31,0);
    tracep->declBus(c+249,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst31 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+250,"din", false,-1, 31,0);
    tracep->declBus(c+250,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst4 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+251,"din", false,-1, 31,0);
    tracep->declBus(c+251,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst5 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+252,"din", false,-1, 31,0);
    tracep->declBus(c+252,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst6 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+253,"din", false,-1, 31,0);
    tracep->declBus(c+254,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst7 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+255,"din", false,-1, 31,0);
    tracep->declBus(c+255,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst8 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+256,"din", false,-1, 31,0);
    tracep->declBus(c+256,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rst9 ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+257,"din", false,-1, 31,0);
    tracep->declBus(c+257,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_23060201_IDU ");
    tracep->declBus(c+260,"inst", false,-1, 31,0);
    tracep->declBus(c+70,"inst_imm", false,-1, 31,0);
    tracep->declBus(c+262,"inst_op", false,-1, 6,0);
    tracep->declBus(c+263,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+69,"inst_func3", false,-1, 2,0);
    tracep->declBus(c+72,"ren", false,-1, 1,0);
    tracep->declBus(c+264,"raddr1", false,-1, 4,0);
    tracep->declBus(c+265,"raddr2", false,-1, 4,0);
    tracep->declBus(c+264,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+265,"inst_rs2", false,-1, 4,0);
    tracep->declBus(c+81,"imm_I", false,-1, 31,0);
    tracep->declBus(c+280,"imm_S", false,-1, 31,0);
    tracep->declBus(c+281,"imm_B", false,-1, 31,0);
    tracep->declBus(c+282,"imm_U", false,-1, 31,0);
    tracep->declBus(c+82,"imm_J", false,-1, 31,0);
    tracep->pushNamePrefix("func3_aupic ");
    tracep->declBus(c+298,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+69,"out", false,-1, 2,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+283,"default_out", false,-1, 2,0);
    tracep->declBus(c+315,"lut", false,-1, 9,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+298,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+301,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+298,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+69,"out", false,-1, 2,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+283,"default_out", false,-1, 2,0);
    tracep->declBus(c+315,"lut", false,-1, 9,0);
    tracep->declBus(c+316,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+31+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+32+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+33+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+83,"lut_out", false,-1, 2,0);
    tracep->declBit(c+84,"hit", false,-1);
    tracep->declBus(c+312,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gpr_ren ");
    tracep->declBus(c+317,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+308,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 1,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declArray(c+318,"lut", false,-1, 80,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+317,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+308,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+72,"out", false,-1, 1,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+321,"default_out", false,-1, 1,0);
    tracep->declArray(c+318,"lut", false,-1, 80,0);
    tracep->declBus(c+317,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+43+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+52+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+85,"lut_out", false,-1, 1,0);
    tracep->declBit(c+86,"hit", false,-1);
    tracep->declBus(c+322,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imm_sel ");
    tracep->declBus(c+323,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+70,"out", false,-1, 31,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declArray(c+284,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+323,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+295,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+296,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+70,"out", false,-1, 31,0);
    tracep->declBus(c+262,"key", false,-1, 6,0);
    tracep->declBus(c+297,"default_out", false,-1, 31,0);
    tracep->declArray(c+284,"lut", false,-1, 311,0);
    tracep->declBus(c+299,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+87+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+103+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+111,"lut_out", false,-1, 31,0);
    tracep->declBit(c+112,"hit", false,-1);
    tracep->declBus(c+324,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060201_PC ");
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+113,"npc", false,-1, 31,0);
    tracep->declBus(c+261,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+296,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+325,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+258,"clk", false,-1);
    tracep->declBit(c+259,"rst", false,-1);
    tracep->declBus(c+113,"din", false,-1, 31,0);
    tracep->declBus(c+261,"dout", false,-1, 31,0);
    tracep->declBit(c+294,"wen", false,-1);
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
    VlWide<10>/*319:0*/ __Vtemp_h5f3ef283__0;
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
    bufp->fullCData(oldp+32,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__data_list[0]),3);
    bufp->fullSData(oldp+34,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+35,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+36,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+37,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+38,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+39,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[5]),9);
    bufp->fullSData(oldp+40,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[6]),9);
    bufp->fullSData(oldp+41,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[7]),9);
    bufp->fullSData(oldp+42,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__pair_list[8]),9);
    bufp->fullCData(oldp+43,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+48,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+49,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+50,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+51,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+54,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+56,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[4]),2);
    bufp->fullCData(oldp+57,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[5]),2);
    bufp->fullCData(oldp+58,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[6]),2);
    bufp->fullCData(oldp+59,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[7]),2);
    bufp->fullCData(oldp+60,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__data_list[8]),2);
    bufp->fullCData(oldp+61,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+62,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+63,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+66,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+67,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+68,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_23060201_TOP__DOT__wire_func3),3);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_23060201_TOP__DOT__wire_imm),32);
    bufp->fullCData(oldp+71,(vlSelf->ysyx_23060201_TOP__DOT__wire_waddr),5);
    bufp->fullCData(oldp+72,(vlSelf->ysyx_23060201_TOP__DOT__wire_ren),2);
    bufp->fullCData(oldp+73,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl),4);
    bufp->fullCData(oldp+74,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl_sel__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+76,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__pair_list[0]),12);
    bufp->fullCData(oldp+77,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__data_list[0]),5);
    bufp->fullCData(oldp+78,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__lut_out),5);
    bufp->fullBit(oldp+79,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__waddr_sel__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+81,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_J),32);
    bufp->fullCData(oldp+83,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+84,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__func3_aupic__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+85,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+86,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__gpr_ren__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+87,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+89,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+91,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+93,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+95,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+97,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+99,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+101,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+112,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060201_TOP__DOT__wire_npc),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_23060201_TOP__DOT__wire_wdata),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata1),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060201_TOP__DOT__wire_rdata2),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b),32);
    bufp->fullQData(oldp+119,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+121,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+123,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+125,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+127,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+129,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+131,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+141,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a_sel__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+142,(__Vtemp_h9a2d4471__0),117);
    bufp->fullQData(oldp+146,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+148,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+150,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+156,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b_sel__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+157,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+159,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+164,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__npc_sel__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+165,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2),32);
    bufp->fullIData(oldp+166,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                               + (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                                  + (1U & (IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_ctl))))),32);
    bufp->fullIData(oldp+167,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                               ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)),32);
    bufp->fullIData(oldp+168,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                               & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)),32);
    bufp->fullIData(oldp+169,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_a 
                               | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)),32);
    bufp->fullIData(oldp+170,(((0x1fU >= vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__alu_b)
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
    bufp->fullWData(oldp+171,(__Vtemp_hc3c426de__0),180);
    bufp->fullQData(oldp+177,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+179,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+181,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+183,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+185,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst0____pinNumber4),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst1____pinNumber4),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst10____pinNumber4),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst11____pinNumber4),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst12____pinNumber4),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst13____pinNumber4),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst14____pinNumber4),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst15____pinNumber4),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst16____pinNumber4),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst17____pinNumber4),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst18____pinNumber4),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst19____pinNumber4),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst2____pinNumber4),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst20____pinNumber4),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst21____pinNumber4),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst22____pinNumber4),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst23____pinNumber4),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst24____pinNumber4),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst25____pinNumber4),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst26____pinNumber4),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst27____pinNumber4),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst28____pinNumber4),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst29____pinNumber4),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst3____pinNumber4),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst30____pinNumber4),32);
    bufp->fullIData(oldp+250,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst31____pinNumber4),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst4____pinNumber4),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst5____pinNumber4),32);
    bufp->fullIData(oldp+253,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT__reg_file
                              [6U]),32);
    bufp->fullIData(oldp+254,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst6____pinNumber4),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst7____pinNumber4),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst8____pinNumber4),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_GPR__DOT____Vcellout__rst9____pinNumber4),32);
    bufp->fullBit(oldp+258,(vlSelf->clk));
    bufp->fullBit(oldp+259,(vlSelf->rst));
    bufp->fullIData(oldp+260,(vlSelf->inst),32);
    bufp->fullIData(oldp+261,(vlSelf->pc),32);
    bufp->fullCData(oldp+262,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+263,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+264,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+265,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+266,(((IData)(4U) + vlSelf->pc)),32);
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
    bufp->fullWData(oldp+267,(__Vtemp_h8360e938__0),273);
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
    bufp->fullWData(oldp+276,(__Vtemp_habfd3ff5__0),78);
    bufp->fullSData(oldp+279,((0x460U | (0x1fU & ((vlSelf->inst 
                                                   >> 0xfU) 
                                                  + vlSelf->ysyx_23060201_TOP__DOT__wire_imm)))),12);
    bufp->fullIData(oldp+280,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+281,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+282,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullCData(oldp+283,((7U & (vlSelf->inst >> 0xcU))),3);
    __Vtemp_h5f3ef283__0[0U] = (IData)((0x6700000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_J))));
    __Vtemp_h5f3ef283__0[1U] = ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_J 
                                 << 7U) | (IData)((
                                                   (0x6700000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_J))) 
                                                   >> 0x20U)));
    __Vtemp_h5f3ef283__0[2U] = (0x3780U | ((0xfc000000U 
                                            & (vlSelf->inst 
                                               << 0xeU)) 
                                           | (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_J 
                                              >> 0x19U)));
    __Vtemp_h5f3ef283__0[3U] = (0x5c000U | (vlSelf->inst 
                                            >> 0x12U));
    __Vtemp_h5f3ef283__0[4U] = (0x6e00000U | ((0xe0000000U 
                                               & (vlSelf->inst 
                                                  << 0x15U)) 
                                              | (0x1ffffeU 
                                                 & (vlSelf->inst 
                                                    >> 0xbU))));
    __Vtemp_h5f3ef283__0[5U] = (0x30000000U | (0xfffffffU 
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
    __Vtemp_h5f3ef283__0[6U] = (6U | (0xfffffff8U & 
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
    __Vtemp_h5f3ef283__0[7U] = (0x118U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I 
                                           << 0xaU) 
                                          | (7U & (
                                                   (- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   >> 0x11U))));
    __Vtemp_h5f3ef283__0[8U] = (0xc00U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I 
                                           << 0x11U) 
                                          | (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I 
                                             >> 0x16U)));
    __Vtemp_h5f3ef283__0[9U] = (0x260000U | (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_I 
                                             >> 0xfU));
    bufp->fullWData(oldp+284,(__Vtemp_h5f3ef283__0),312);
    bufp->fullBit(oldp+294,(1U));
    bufp->fullIData(oldp+295,(7U),32);
    bufp->fullIData(oldp+296,(0x20U),32);
    bufp->fullIData(oldp+297,(0U),32);
    bufp->fullIData(oldp+298,(1U),32);
    bufp->fullIData(oldp+299,(0x27U),32);
    bufp->fullIData(oldp+300,(7U),32);
    bufp->fullIData(oldp+301,(3U),32);
    bufp->fullIData(oldp+302,(3U),32);
    bufp->fullIData(oldp+303,(4U),32);
    bufp->fullIData(oldp+304,(0x113b67U),28);
    bufp->fullIData(oldp+305,(0U),32);
    bufp->fullCData(oldp+306,(0U),4);
    bufp->fullIData(oldp+307,(4U),32);
    bufp->fullIData(oldp+308,(2U),32);
    bufp->fullIData(oldp+309,(2U),32);
    bufp->fullIData(oldp+310,(5U),32);
    bufp->fullIData(oldp+311,(0xcU),32);
    bufp->fullIData(oldp+312,(1U),32);
    bufp->fullIData(oldp+313,(0x24U),32);
    bufp->fullIData(oldp+314,(5U),32);
    bufp->fullSData(oldp+315,(0xb8U),10);
    bufp->fullIData(oldp+316,(0xaU),32);
    bufp->fullIData(oldp+317,(9U),32);
    __Vtemp_h16f6a129__0[0U] = 0xe173799cU;
    __Vtemp_h16f6a129__0[1U] = 0x83d1b8f6U;
    __Vtemp_h16f6a129__0[2U] = 0xcf26U;
    bufp->fullWData(oldp+318,(__Vtemp_h16f6a129__0),81);
    bufp->fullCData(oldp+321,(0U),2);
    bufp->fullIData(oldp+322,(9U),32);
    bufp->fullIData(oldp+323,(8U),32);
    bufp->fullIData(oldp+324,(8U),32);
    bufp->fullIData(oldp+325,(0x80000000U),32);
}
