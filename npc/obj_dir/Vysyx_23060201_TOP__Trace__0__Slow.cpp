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
    tracep->declBus(c+33,"inst_imm", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060201_EXU ");
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+134,"inst_op", false,-1, 6,0);
    tracep->declBus(c+135,"inst_func3", false,-1, 2,0);
    tracep->declBus(c+136,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+137,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+33,"inst_imm", false,-1, 31,0);
    tracep->declBus(c+132,"inst_rd_val_res", false,-1, 31,0);
    tracep->declBus(c+38,"inst_rs1_val_alu_in", false,-1, 31,0);
    tracep->declBus(c+39,"inst_rd_val_alu_out", false,-1, 31,0);
    tracep->declBit(c+34,"inst_addi", false,-1);
    tracep->declBus(c+35,"ctrl", false,-1, 2,0);
    tracep->pushNamePrefix("ysyx_23060201_ALU ");
    tracep->declBus(c+38,"a", false,-1, 31,0);
    tracep->declBus(c+33,"b", false,-1, 31,0);
    tracep->declBus(c+35,"ctrl", false,-1, 2,0);
    tracep->declBus(c+39,"res", false,-1, 31,0);
    tracep->declBus(c+40,"res_addsub", false,-1, 31,0);
    tracep->declBus(c+41,"res_and", false,-1, 31,0);
    tracep->declBus(c+42,"res_or", false,-1, 31,0);
    tracep->declBus(c+36,"b2", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+200,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->declBus(c+35,"key", false,-1, 2,0);
    tracep->declArray(c+43,"lut", false,-1, 139,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+200,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+203,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->declBus(c+35,"key", false,-1, 2,0);
    tracep->declBus(c+204,"default_out", false,-1, 31,0);
    tracep->declArray(c+43,"lut", false,-1, 139,0);
    tracep->declBus(c+205,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+48+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+56+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+60,"lut_out", false,-1, 31,0);
    tracep->declBit(c+37,"hit", false,-1);
    tracep->declBus(c+206,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060201_GPR ");
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+136,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+137,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+38,"inst_rs1_val_out", false,-1, 31,0);
    tracep->declBus(c+39,"inst_rd_val_in", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+61+i*1,"inst_reg_val_in", true,(i+0), 31,0);
    }
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+138+i*1,"inst_reg_val_out", true,(i+0), 31,0);
    }
    tracep->declBus(c+207,"sel", false,-1, 31,0);
    tracep->declBit(c+208,"clk", false,-1);
    tracep->pushNamePrefix("x0 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+208,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+93,"din", false,-1, 31,0);
    tracep->declBus(c+125,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x1 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+208,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+94,"din", false,-1, 31,0);
    tracep->declBus(c+126,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x10 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+95,"din", false,-1, 31,0);
    tracep->declBus(c+170,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x11 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+6,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+96,"din", false,-1, 31,0);
    tracep->declBus(c+171,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x12 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+7,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+97,"din", false,-1, 31,0);
    tracep->declBus(c+172,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x13 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+98,"din", false,-1, 31,0);
    tracep->declBus(c+173,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x14 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+99,"din", false,-1, 31,0);
    tracep->declBus(c+174,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x15 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+10,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+100,"din", false,-1, 31,0);
    tracep->declBus(c+175,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x16 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+101,"din", false,-1, 31,0);
    tracep->declBus(c+176,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x17 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+102,"din", false,-1, 31,0);
    tracep->declBus(c+177,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x18 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+13,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+103,"din", false,-1, 31,0);
    tracep->declBus(c+178,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x19 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+14,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+104,"din", false,-1, 31,0);
    tracep->declBus(c+179,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x2 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+208,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+105,"din", false,-1, 31,0);
    tracep->declBus(c+127,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x20 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+15,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+106,"din", false,-1, 31,0);
    tracep->declBus(c+180,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x21 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+16,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+107,"din", false,-1, 31,0);
    tracep->declBus(c+181,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x22 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+17,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+108,"din", false,-1, 31,0);
    tracep->declBus(c+182,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x23 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+18,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+109,"din", false,-1, 31,0);
    tracep->declBus(c+183,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x24 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+19,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+110,"din", false,-1, 31,0);
    tracep->declBus(c+184,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x25 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+20,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+111,"din", false,-1, 31,0);
    tracep->declBus(c+185,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x26 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+21,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+112,"din", false,-1, 31,0);
    tracep->declBus(c+186,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x27 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+22,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+113,"din", false,-1, 31,0);
    tracep->declBus(c+187,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x28 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+114,"din", false,-1, 31,0);
    tracep->declBus(c+188,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x29 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+24,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+115,"din", false,-1, 31,0);
    tracep->declBus(c+189,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x3 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+208,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+116,"din", false,-1, 31,0);
    tracep->declBus(c+128,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x30 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+117,"din", false,-1, 31,0);
    tracep->declBus(c+190,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x31 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+26,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+118,"din", false,-1, 31,0);
    tracep->declBus(c+191,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x4 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+27,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+119,"din", false,-1, 31,0);
    tracep->declBus(c+192,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x5 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+28,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+120,"din", false,-1, 31,0);
    tracep->declBus(c+193,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x6 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+121,"din", false,-1, 31,0);
    tracep->declBus(c+194,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x7 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+122,"din", false,-1, 31,0);
    tracep->declBus(c+195,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x8 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+31,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+123,"din", false,-1, 31,0);
    tracep->declBus(c+196,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("x9 ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+32,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+124,"din", false,-1, 31,0);
    tracep->declBus(c+197,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ysyx_23060201_IDU ");
    tracep->declBus(c+131,"inst", false,-1, 31,0);
    tracep->declBus(c+134,"inst_op", false,-1, 6,0);
    tracep->declBus(c+135,"inst_func3", false,-1, 2,0);
    tracep->declBus(c+136,"inst_rs1", false,-1, 4,0);
    tracep->declBus(c+137,"inst_rd", false,-1, 4,0);
    tracep->declBus(c+33,"inst_imm", false,-1, 31,0);
    tracep->declBus(c+198,"imm", false,-1, 11,0);
    tracep->declBus(c+33,"imm_ext", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_23060201_PC ");
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+133,"pc", false,-1, 31,0);
    tracep->declBus(c+133,"add_in", false,-1, 31,0);
    tracep->declBus(c+199,"npc", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+202,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+210,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBit(c+130,"rst", false,-1);
    tracep->declBus(c+199,"din", false,-1, 31,0);
    tracep->declBus(c+133,"dout", false,-1, 31,0);
    tracep->declBit(c+209,"wen", false,-1);
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
    VlWide<5>/*159:0*/ __Vtemp_h9b629cca__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__key_list[3]),3);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x10____pinNumber1));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x11____pinNumber1));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x12____pinNumber1));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x13____pinNumber1));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x14____pinNumber1));
    bufp->fullBit(oldp+10,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x15____pinNumber1));
    bufp->fullBit(oldp+11,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x16____pinNumber1));
    bufp->fullBit(oldp+12,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x17____pinNumber1));
    bufp->fullBit(oldp+13,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x18____pinNumber1));
    bufp->fullBit(oldp+14,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x19____pinNumber1));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x20____pinNumber1));
    bufp->fullBit(oldp+16,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x21____pinNumber1));
    bufp->fullBit(oldp+17,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x22____pinNumber1));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x23____pinNumber1));
    bufp->fullBit(oldp+19,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x24____pinNumber1));
    bufp->fullBit(oldp+20,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x25____pinNumber1));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x26____pinNumber1));
    bufp->fullBit(oldp+22,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x27____pinNumber1));
    bufp->fullBit(oldp+23,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x28____pinNumber1));
    bufp->fullBit(oldp+24,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x29____pinNumber1));
    bufp->fullBit(oldp+25,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x30____pinNumber1));
    bufp->fullBit(oldp+26,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x31____pinNumber1));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x4____pinNumber1));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x5____pinNumber1));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x6____pinNumber1));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x7____pinNumber1));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x8____pinNumber1));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellinp__x9____pinNumber1));
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext),32);
    bufp->fullBit(oldp+34,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi));
    bufp->fullCData(oldp+35,(((IData)(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_addi)
                               ? 0U : 7U)),3);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__b2),32);
    bufp->fullBit(oldp+37,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rd_val_alu_out),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__res_addsub),32);
    bufp->fullIData(oldp+41,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                              & vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
    bufp->fullIData(oldp+42,((vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__inst_rs1_val_alu_in 
                              | vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_IDU__DOT__imm_ext)),32);
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
    bufp->fullWData(oldp+43,(__Vtemp_h9b629cca__0),140);
    bufp->fullQData(oldp+48,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+50,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+52,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+54,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_ALU__DOT__alu__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[0]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[1]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[2]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[3]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[4]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[5]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[6]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[7]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[8]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[9]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[10]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[11]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[12]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[13]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[14]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[15]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[16]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[17]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[18]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[19]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[20]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[21]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[22]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[23]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[24]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[25]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[26]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[27]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[28]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[29]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[30]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in[31]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                             [0U]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                             [1U]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                             [0xaU]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                             [0xbU]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                             [0xcU]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                             [0xdU]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                             [0xeU]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0xfU]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x10U]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x11U]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x12U]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x13U]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [2U]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x14U]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x15U]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x16U]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x17U]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x18U]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x19U]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x1aU]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x1bU]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x1cU]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x1dU]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [3U]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x1eU]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [0x1fU]),32);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [4U]),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [5U]),32);
    bufp->fullIData(oldp+121,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [6U]),32);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [7U]),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [8U]),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_in
                              [9U]),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x0____pinNumber4),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x1____pinNumber4),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x2____pinNumber4),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x3____pinNumber4),32);
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
    bufp->fullIData(oldp+138,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[0]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[1]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[2]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[3]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[4]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[5]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[6]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[7]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[8]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[9]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[10]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[11]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[12]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[13]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[14]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[15]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[16]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[17]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[18]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[19]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[20]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[21]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[22]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[23]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[24]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[25]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[26]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[27]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[28]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[29]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[30]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__inst_reg_val_out[31]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x10____pinNumber4),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x11____pinNumber4),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x12____pinNumber4),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x13____pinNumber4),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x14____pinNumber4),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x15____pinNumber4),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x16____pinNumber4),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x17____pinNumber4),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x18____pinNumber4),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x19____pinNumber4),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x20____pinNumber4),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x21____pinNumber4),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x22____pinNumber4),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x23____pinNumber4),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x24____pinNumber4),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x25____pinNumber4),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x26____pinNumber4),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x27____pinNumber4),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x28____pinNumber4),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x29____pinNumber4),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x30____pinNumber4),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x31____pinNumber4),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x4____pinNumber4),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x5____pinNumber4),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x6____pinNumber4),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x7____pinNumber4),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x8____pinNumber4),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT____Vcellout__x9____pinNumber4),32);
    bufp->fullSData(oldp+198,((vlSelf->inst >> 0x14U)),12);
    bufp->fullIData(oldp+199,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+200,(4U),32);
    bufp->fullIData(oldp+201,(3U),32);
    bufp->fullIData(oldp+202,(0x20U),32);
    bufp->fullIData(oldp+203,(0U),32);
    bufp->fullIData(oldp+204,(0U),32);
    bufp->fullIData(oldp+205,(0x23U),32);
    bufp->fullIData(oldp+206,(4U),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__sel),32);
    bufp->fullBit(oldp+208,(vlSelf->ysyx_23060201_TOP__DOT__ysyx_23060201_EXU__DOT__ysyx_23060201_GPR__DOT__clk));
    bufp->fullBit(oldp+209,(1U));
    bufp->fullIData(oldp+210,(0x80000000U),32);
}
