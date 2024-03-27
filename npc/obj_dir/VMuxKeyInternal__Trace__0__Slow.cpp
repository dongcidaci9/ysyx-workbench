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
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+131,"inst", false,-1, 31,0);
    tracep->declBus(c+132,"inst_rd_val_res", false,-1, 31,0);
    tracep->declBus(c+133,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_TOP ");
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+131,"inst", false,-1, 31,0);
    tracep->declBus(c+132,"inst_rd_val_res", false,-1, 31,0);
    tracep->declBus(c+133,"pc", false,-1, 31,0);
    tracep->declBus(c+134,"inst_op", false,-1, 6,0);
    tracep->declBus(c+135,"inst_func3", false,-1, 2,0);
    tracep->declBus(c+136,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+137,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+37,"inst_imm", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_EXU ");
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+134,"inst_op", false,-1, 6,0);
    tracep->declBus(c+135,"inst_func3", false,-1, 2,0);
    tracep->declBus(c+136,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+137,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+37,"inst_imm", false,-1, 31,0);
    tracep->declBus(c+132,"inst_rd_val_res", false,-1, 31,0);
    tracep->declBus(c+38,"inst_rs1_val_alu_in", false,-1, 31,0);
    tracep->declBus(c+39,"inst_rd_val_alu_out", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_ALU ");
    tracep->declBus(c+38,"a", false,-1, 31,0);
    tracep->declBus(c+37,"b", false,-1, 31,0);
    tracep->declBus(c+135,"ctrl", false,-1, 2,0);
    tracep->declBus(c+39,"res", false,-1, 31,0);
    tracep->declBit(c+40,"nf", false,-1);
    tracep->declBit(c+41,"zf", false,-1);
    tracep->declBit(c+138,"cf", false,-1);
    tracep->declBit(c+139,"vf", false,-1);
    tracep->declBus(c+42,"res_addsub", false,-1, 31,0);
    tracep->declBus(c+43,"res_and", false,-1, 31,0);
    tracep->declBus(c+44,"res_or", false,-1, 31,0);
    tracep->declBus(c+45,"b2", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+142,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+143,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+144,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->declBus(c+135,"key", false,-1, 2,0);
    tracep->declArray(c+46,"lut", false,-1, 139,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+142,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+143,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+144,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+145,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->declBus(c+135,"key", false,-1, 2,0);
    tracep->declBus(c+146,"default_out", false,-1, 31,0);
    tracep->declArray(c+46,"lut", false,-1, 139,0);
    tracep->declBus(c+147,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+51+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+59+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+63,"lut_out", false,-1, 31,0);
    tracep->declBit(c+64,"hit", false,-1);
    tracep->declBus(c+148,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060201_REG ");
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+136,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+137,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+38,"inst_rs1_val_out", false,-1, 31,0);
    tracep->declBus(c+39,"inst_rd_val_in", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+65+i*1,"inst_reg_val_in", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,"inst_reg_val_out", true,(i+0), 31,0);
    }
    tracep->declBus(c+146,"sel", false,-1, 31,0);
    tracep->pushNamePrefix("x0 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+97,"din", false,-1, 31,0);
    tracep->declBus(c+150,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x1 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+98,"din", false,-1, 31,0);
    tracep->declBus(c+152,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x10 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+99,"din", false,-1, 31,0);
    tracep->declBus(c+153,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x11 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+100,"din", false,-1, 31,0);
    tracep->declBus(c+154,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x12 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+101,"din", false,-1, 31,0);
    tracep->declBus(c+155,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x13 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+102,"din", false,-1, 31,0);
    tracep->declBus(c+156,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x14 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+103,"din", false,-1, 31,0);
    tracep->declBus(c+157,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x15 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+104,"din", false,-1, 31,0);
    tracep->declBus(c+158,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x16 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+105,"din", false,-1, 31,0);
    tracep->declBus(c+159,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x17 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+106,"din", false,-1, 31,0);
    tracep->declBus(c+160,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x18 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+107,"din", false,-1, 31,0);
    tracep->declBus(c+161,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x19 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+108,"din", false,-1, 31,0);
    tracep->declBus(c+162,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x2 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+109,"din", false,-1, 31,0);
    tracep->declBus(c+163,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x20 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+110,"din", false,-1, 31,0);
    tracep->declBus(c+164,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x21 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+111,"din", false,-1, 31,0);
    tracep->declBus(c+165,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x22 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+112,"din", false,-1, 31,0);
    tracep->declBus(c+166,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x23 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+113,"din", false,-1, 31,0);
    tracep->declBus(c+167,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x24 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+114,"din", false,-1, 31,0);
    tracep->declBus(c+168,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x25 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+115,"din", false,-1, 31,0);
    tracep->declBus(c+169,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x26 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+116,"din", false,-1, 31,0);
    tracep->declBus(c+170,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x27 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+117,"din", false,-1, 31,0);
    tracep->declBus(c+171,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x28 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+118,"din", false,-1, 31,0);
    tracep->declBus(c+172,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x29 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+119,"din", false,-1, 31,0);
    tracep->declBus(c+173,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x3 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+120,"din", false,-1, 31,0);
    tracep->declBus(c+174,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x30 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+121,"din", false,-1, 31,0);
    tracep->declBus(c+175,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x31 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+122,"din", false,-1, 31,0);
    tracep->declBus(c+176,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x4 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+123,"din", false,-1, 31,0);
    tracep->declBus(c+177,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x5 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+124,"din", false,-1, 31,0);
    tracep->declBus(c+178,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x6 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+125,"din", false,-1, 31,0);
    tracep->declBus(c+179,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x7 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+126,"din", false,-1, 31,0);
    tracep->declBus(c+180,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x8 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+127,"din", false,-1, 31,0);
    tracep->declBus(c+181,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x9 ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+146,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+128,"din", false,-1, 31,0);
    tracep->declBus(c+182,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060201_IDU ");
    tracep->declBus(c+131,"inst", false,-1, 31,0);
    tracep->declBus(c+134,"inst_op", false,-1, 6,0);
    tracep->declBus(c+135,"inst_func3", false,-1, 2,0);
    tracep->declBus(c+136,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+137,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+37,"inst_imm", false,-1, 31,0);
    tracep->declBus(c+183,"rs1", false,-1, 4,0);
    tracep->declBus(c+184,"rd", false,-1, 4,0);
    tracep->declBus(c+140,"imm", false,-1, 11,0);
    tracep->declBus(c+37,"imm_ext", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060201_PC ");
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+133,"pc", false,-1, 31,0);
    tracep->declBus(c+133,"add_in", false,-1, 31,0);
    tracep->declBus(c+141,"npc", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+144,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+185,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+141,"din", false,-1, 31,0);
    tracep->declBus(c+133,"dout", false,-1, 31,0);
    tracep->declBit(c+151,"wen", false,-1);
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
    VlWide<5>/*159:0*/ __Vtemp_h9b629cca__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[3]),3);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[21]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[22]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[23]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[24]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[25]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[26]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[27]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[28]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[29]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[30]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_out[31]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out),32);
    bufp->fullBit(oldp+40,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out 
                            >> 0x1fU)));
    bufp->fullBit(oldp+41,((1U & (~ (IData)((0U != vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out))))));
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub),32);
    bufp->fullIData(oldp+43,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                              & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
    bufp->fullIData(oldp+44,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                              | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2),32);
    __Vtemp_h9b629cca__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                                           | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)))));
    __Vtemp_h9b629cca__0[1U] = (((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                  & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext) 
                                 << 3U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                                                       | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)))) 
                                                   >> 0x20U)));
    __Vtemp_h9b629cca__0[2U] = (0x10U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                          << 6U) | 
                                         ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                           & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext) 
                                          >> 0x1dU)));
    __Vtemp_h9b629cca__0[3U] = (0x40U | ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                          << 9U) | 
                                         (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                          >> 0x1aU)));
    __Vtemp_h9b629cca__0[4U] = (vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub 
                                >> 0x17U);
    bufp->fullWData(oldp+46,(__Vtemp_h9b629cca__0),140);
    bufp->fullQData(oldp+51,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+53,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+55,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+57,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+64,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+65,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[0]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[1]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[2]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[3]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[4]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[5]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[6]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[7]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[8]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[9]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[10]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[11]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[12]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[13]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[14]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[15]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[16]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[17]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[18]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[19]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[20]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[21]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[22]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[23]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[24]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[25]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[26]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[27]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[28]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[29]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[30]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in[31]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                             [0U]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                             [1U]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                             [0xaU]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0xbU]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0xcU]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0xdU]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0xeU]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0xfU]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x10U]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x11U]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x12U]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x13U]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [2U]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x14U]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x15U]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x16U]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x17U]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x18U]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x19U]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x1aU]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x1bU]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x1cU]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x1dU]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [3U]),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x1eU]),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [0x1fU]),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [4U]),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [5U]),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [6U]),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [7U]),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [8U]),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT__inst_reg_val_in
                              [9U]),32);
    bufp->fullBit(oldp+129,(vlSelf->clk));
    bufp->fullBit(oldp+130,(vlSelf->rst));
    bufp->fullIData(oldp+131,(vlSelf->inst),32);
    bufp->fullIData(oldp+132,(vlSelf->inst_rd_val_res),32);
    bufp->fullIData(oldp+133,(vlSelf->pc),32);
    bufp->fullCData(oldp+134,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+135,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+136,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+137,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+138,((1U & (IData)((1ULL & (
                                                   ((QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in)) 
                                                    + 
                                                    ((QData)((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2)) 
                                                     + (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->inst 
                                                                           >> 0xcU)))))) 
                                                   >> 0x20U))))));
    bufp->fullBit(oldp+139,((1U & ((~ ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                        >> 0x1fU) ^ 
                                       ((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2 
                                         >> 0x1fU) 
                                        ^ (vlSelf->inst 
                                           >> 0xcU)))) 
                                   & (((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                                        ^ vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub) 
                                       >> 0x1fU) & 
                                      (vlSelf->inst 
                                       >> 0xdU))))));
    bufp->fullSData(oldp+140,((vlSelf->inst >> 0x14U)),12);
    bufp->fullIData(oldp+141,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+142,(4U),32);
    bufp->fullIData(oldp+143,(3U),32);
    bufp->fullIData(oldp+144,(0x20U),32);
    bufp->fullIData(oldp+145,(0U),32);
    bufp->fullIData(oldp+146,(0U),32);
    bufp->fullIData(oldp+147,(0x23U),32);
    bufp->fullIData(oldp+148,(4U),32);
    bufp->fullBit(oldp+149,(0U));
    bufp->fullIData(oldp+150,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x0____pinNumber4),32);
    bufp->fullBit(oldp+151,(1U));
    bufp->fullIData(oldp+152,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x1____pinNumber4),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x10____pinNumber4),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x11____pinNumber4),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x12____pinNumber4),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x13____pinNumber4),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x14____pinNumber4),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x15____pinNumber4),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x16____pinNumber4),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x17____pinNumber4),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x18____pinNumber4),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x19____pinNumber4),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x2____pinNumber4),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x20____pinNumber4),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x21____pinNumber4),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x22____pinNumber4),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x23____pinNumber4),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x24____pinNumber4),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x25____pinNumber4),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x26____pinNumber4),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x27____pinNumber4),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x28____pinNumber4),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x29____pinNumber4),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x3____pinNumber4),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x30____pinNumber4),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x31____pinNumber4),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x4____pinNumber4),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x5____pinNumber4),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x6____pinNumber4),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x7____pinNumber4),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x8____pinNumber4),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_REG__DOT____Vcellout__x9____pinNumber4),32);
    bufp->fullCData(oldp+183,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__rs1),5);
    bufp->fullCData(oldp+184,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__rd),5);
    bufp->fullIData(oldp+185,(0x80000000U),32);
}
