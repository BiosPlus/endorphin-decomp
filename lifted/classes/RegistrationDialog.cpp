// Lifted C++ translation unit: lifted/classes/RegistrationDialog.cpp
#include "lift_compat.h"

// [0x004499B0] RegistrationDialog::vfunc_87 (25 bytes)
namespace lift_004499B0 {
// @name RegistrationDialog::vfunc_87
// @class RegistrationDialog
// @summary Auto-lifted identical-shape clone of 0x0040FDA0 (CColorCheck::vfunc_22).
namespace lift_0040FDA0 {
// Known callee 0x006A5EA2: thunk_MFC80_ord_4115 (IAT jump thunk forwarding to MFC80!ord_4115.)
// Called thiscall-style with `this` in ecx and three stack arguments (0x1f, 0x0b, 0x20).
extern void ext_006A5E60(void* self, int32_t arg0, int32_t arg1, int32_t arg2);
// Known callee 0x006A5CE0: thunk_MFC80_ord_5200 (IAT jump thunk forwarding to MFC80!ord_5200.)
// Tail-called with `this` in ecx and no stack arguments.
extern void ext_006A5FB6(void* self);

// @name CColorCheck::vfunc_22
// @class CColorCheck
// @summary Forwards to MFC80 ord_4115 with fixed arguments (0x1f, 0x0b, 0x20), then tail-calls MFC80 ord_5200 on the same object.
void fn_004499B0(void* self) {
    ext_006A5E60(self, 0x93380C, 0x0, 0x0);
    ext_006A5FB6(self);
}
} // namespace lift_0040FDA0
} // namespace lift_004499B0
