// Lifted C++ translation unit: lifted/classes/CColorCheck.cpp
#include "lift_compat.h"

// [0x0040FDA0] CColorCheck::vfunc_22 (22 bytes)
namespace lift_0040FDA0 {
// Known callee 0x006A5EA2: thunk_MFC80_ord_4115 (IAT jump thunk forwarding to MFC80!ord_4115.)
// Called thiscall-style with `this` in ecx and three stack arguments (0x1f, 0x0b, 0x20).
extern void ext_006A5EA2(void* self, int32_t arg0, int32_t arg1, int32_t arg2);
// Known callee 0x006A5CE0: thunk_MFC80_ord_5200 (IAT jump thunk forwarding to MFC80!ord_5200.)
// Tail-called with `this` in ecx and no stack arguments.
extern void ext_006A5CE0(void* self);

// @name CColorCheck::vfunc_22
// @class CColorCheck
// @summary Forwards to MFC80 ord_4115 with fixed arguments (0x1f, 0x0b, 0x20), then tail-calls MFC80 ord_5200 on the same object.
void fn_0040FDA0(void* self) {
    ext_006A5EA2(self, 0x1f, 0x0b, 0x20);
    ext_006A5CE0(self);
}
} // namespace lift_0040FDA0
