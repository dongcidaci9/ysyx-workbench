// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_23060201_TOP__SYMS_H_
#define VERILATED_VYSYX_23060201_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vysyx_23060201_TOP.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_23060201_TOP___024root.h"

// SYMS CLASS (contains all model state)
class Vysyx_23060201_TOP__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_23060201_TOP* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_23060201_TOP___024root   TOP;

    // CONSTRUCTORS
    Vysyx_23060201_TOP__Syms(VerilatedContext* contextp, const char* namep, Vysyx_23060201_TOP* modelp);
    ~Vysyx_23060201_TOP__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
