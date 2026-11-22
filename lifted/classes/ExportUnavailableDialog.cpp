// Lifted C++ translation unit: lifted/classes/ExportUnavailableDialog.cpp
#include "lift_compat.h"
// Known callee 0x006A5F44: thunk_MFC80_ord_1794 (IAT jump thunk forwarding to MFC80!ord_1794.)
// Arity inferred from the three pushes before the call (arg, 1, subobject address).
extern "C" void ext_006A5F44(uint32_t arg0, int arg1, uint32_t arg2);
extern "C" uint32_t mem_00ACB004;   // guard word; bit 0 = initialized
extern "C" uint8_t mem_00A2ECD0[];  // static block at 0x00A2ECD0 (dwords at +0xC and +0x10)

extern "C" uint8_t mem_00A2ECD0[];  // static block at 0x00A2ECD0 (dwords at +0xC and +0x10)
// @name ExportUnavailableDialog::vfunc_63
// @class ExportUnavailableDialog
// @summary Calls ext_006A5F44(arg, 1, &this->field_0x11c), passing the stack argument and the address of the embedded sub-object at +0x11C.
// @field ExportUnavailableDialog +0x11c uint8_t field_0x11c
void fn_00461630(void* self, uint32_t arg) {
    // Only the address of the sub-object at +0x11C is taken; it is not dereferenced here.
    const uint32_t subobject = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x11c);
    ext_006A5F44(arg, 1, subobject);
}

// [0x00419770] ExportUnavailableDialog::vfunc_7_off_74 (40 bytes)
// @name ExportUnavailableDialog::vfunc_7_off_74
// @class ExportUnavailableDialog
// @summary One-time init guard: on first call sets guard bit 0 and zeroes the dwords at block+0xC and block+0x10; returns the block.
void* fn_00419770(void* self) {
    (void)self;
    if ((mem_00ACB004 & 1u) == 0) {
        mem_00ACB004 |= 1u;
        lift_field<uint32_t>(mem_00A2ECD0, 0x0C) = 0;
        lift_field<uint32_t>(mem_00A2ECD0, 0x10) = 0;
    }
    return mem_00A2ECD0;
}
