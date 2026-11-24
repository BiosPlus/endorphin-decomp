// Lifted C++ translation unit: lifted/ExprParser/Operators/CopyValuePtr.cpp
#include "lift_compat.h"

// [0x006A07B0] ExprParser::Operators::CopyValuePtr::vfunc_3 (28 bytes)
namespace lift_006A07B0 {
// Known callee 0x00672040: sub_00672040 (Auto-lifted identical-shape clone of 0x0052EF20 (CompoundRenderable::vfunc_7).)
extern void ext_00672040(void* self);
// Known callee 0x006721D0: sub_006721D0 (Auto-lifted identical-shape clone of 0x006722B0 (sub_0067AEE8).)
extern int ext_006721D0(void* self, int arg);

// @name ExprParser::Operators::CopyValuePtr::vfunc_3
// @class ExprParser::Operators::CopyValuePtr
// @summary Forwards to two subobject helpers: first with self, then with self and the second stack argument; returns the second helper's result.
// (no direct field accesses; self is only forwarded, so no @field lines)
int __stdcall fn_006A07B0(void* self, int arg) {
    // Original ecx is overwritten by the first stack argument, so `self` comes from the stack.
    ext_00672040(self);
    return ext_006721D0(self, arg);
}
} // namespace lift_006A07B0
