// Lifted C++ translation unit: lifted/leaf/decompiled_550000.cpp
#include "lift_compat.h"

// [0x005528E0] sub_005528E0 (14 bytes)
namespace lift_005528E0 {
// Known callee 0x005528D0: HandleGraphic::vfunc_1 (Sets the floats at +0x04 and +0x08 to 1.0f, then tail-calls SubObject::resetScaleAndIndex on the same object.)
extern void __fastcall fn_005528D0(void* self);

// @name SetVtableAndInitGraphic
// @summary Stores constant vtable-like word at +0x00 of self, calls fn_005528D0(self), returns self.
// @field self +0x00 uint32_t field_0x00 (constant 0x00957534 stored here)
void* fn_005528E0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x00957534u;
    fn_005528D0(self);
    return self;
}
} // namespace lift_005528E0
