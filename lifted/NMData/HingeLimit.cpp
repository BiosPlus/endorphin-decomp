// Lifted C++ translation unit: lifted/NMData/HingeLimit.cpp
#include "lift_compat.h"

// [0x006120D0]
namespace lift_006120D0 {
// @name NMData::HingeLimit::scalarDeletingDestructor
// @class NMData::HingeLimit
// @summary Scalar deleting destructor for NMData::HingeLimit; destroys member at +0x20, resets base vtable, and optionally frees self.
// @field NMData::HingeLimit +0x20 uint8_t[1] field_0x20


extern void __thiscall ext_005B1870(void* self);
extern void __fastcall ext_0065F440(void* self);
extern void __cdecl ext_006A5C5C(void* ptr);

extern void* __thiscall fn_006120D0(void* self, uint32_t flags) {
    ext_005B1870(static_cast<uint8_t*>(self) + 0x20);
    ext_0065F440(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_006120D0
