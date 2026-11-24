// Lifted C++ translation unit: lifted/classes/HandleGraphic.cpp
#include "lift_compat.h"

// [0x005528D0] HandleGraphic::vfunc_1 (16 bytes)
namespace lift_005528D0 {
// Known callee 0x005528A0: SubObject::resetScaleAndIndex (Sets the float at +0x0C to 1.0f and the int32 at +0x10 to -1 on the object passed in ecx.)
extern void __fastcall ext_005528A0(void* self);

// @name HandleGraphic::vfunc_1
// @class HandleGraphic
// @summary Sets the floats at +0x04 and +0x08 to 1.0f, then tail-calls SubObject::resetScaleAndIndex on the same object.
// @field HandleGraphic +0x04 float field_0x04
// @field HandleGraphic +0x08 float field_0x08
// @field HandleGraphic +0x0C float field_0x0c
extern void __fastcall fn_005528D0(void* self) {
    lift_field<float>(self, 0x04) = 1.0f;
    lift_field<float>(self, 0x08) = 1.0f;
    lift_field<float>(self, 0x0C) = 1.0f;
    ext_005528A0(self);
}
} // namespace lift_005528D0
