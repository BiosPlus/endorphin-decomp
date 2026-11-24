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

// [0x00553960] sub_00553960 (27 bytes)
namespace lift_00553960 {
// Known callee 0x00584C10: sub_00584C10 (takes the pointer in ecx, returns a bool in al)
extern uint8_t ext_00584C10(void* arg);

// @name descriptiveName_00553960
// @summary Returns 1 if the pointer argument is non-null and ext_00584C10 returns false for it; otherwise 0.
// @field none (no direct field accesses; the argument is only passed through to ext_00584C10)
uint8_t descriptiveName_00553960(void* arg) {
    if (arg == nullptr) {
        return 0;
    }
    if (ext_00584C10(arg) != 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_00553960

// [0x00554CE0] sub_00554CE0 (27 bytes)
namespace lift_00554CE0 {
extern float ext_005530B0(float x);

// @name descriptiveName_00554CE0
// @summary Returns the argument passed through ext_005530B0, scaled by the float at self+0x20.
// @field (unknown) +0x20 float field_0x20
float fn_00554CE0(void* self, float x) {
    const float scale = *reinterpret_cast<float*>(reinterpret_cast<uint8_t*>(self) + 0x20);
    return ext_005530B0(x) * scale;
}
} // namespace lift_00554CE0
