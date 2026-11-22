// Lifted C++ translation unit: lifted/classes/ExportUnavailableDialog.cpp
#include "lift_compat.h"
// Known callee 0x006A5F44: thunk_MFC80_ord_1794 (IAT jump thunk forwarding to MFC80!ord_1794.)
// Arity inferred from the three pushes before the call (arg, 1, subobject address).
extern "C" void ext_006A5F44(uint32_t arg0, int arg1, uint32_t arg2);

// [0x00461630] ExportUnavailableDialog::vfunc_63 (22 bytes)
// @name ExportUnavailableDialog::vfunc_63
// @class ExportUnavailableDialog
// @summary Calls ext_006A5F44(arg, 1, &this->field_0x11c), passing the stack argument and the address of the embedded sub-object at +0x11C.
// @field ExportUnavailableDialog +0x11c uint8_t field_0x11c
void fn_00461630(void* self, uint32_t arg) {
    // Only the address of the sub-object at +0x11C is taken; it is not dereferenced here.
    const uint32_t subobject = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x11c);
    ext_006A5F44(arg, 1, subobject);
}
