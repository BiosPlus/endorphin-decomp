// Lifted C++ translation unit: lifted/Primitives/HingeLimit.cpp
#include "lift_compat.h"

// [0x0052FD30] Primitives::HingeLimit::vfunc_0 (96 bytes)
namespace lift_0052FD30 {
// Known callees (thiscall: `this` passed in ecx in the original binary).
extern void ext_00537EC0(void* self);   // member destructor for embedded object at this+0x44
extern void ext_0053A810(void* self);   // base-class destructor chain
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// cdecl, single pointer argument (deletes the object storage).
extern void ext_006A5C5C(void* p);

// @name Primitives::HingeLimit::vfunc_0
// @class Primitives::HingeLimit
// @summary Scalar deleting destructor: destroys embedded object at +0x44, runs base destructor chain, frees storage when flags bit 0 is set, returns this.
// @field HingeLimit +0x44 uint8_t field_0x44
void* fn_0052FD30(void* self, uint32_t flags) {
    uint8_t* base = static_cast<uint8_t*>(self);

    ext_00537EC0(base + 0x44);
    ext_0053A810(self);

    if (flags & 1u) {
        ext_006A5C5C(self);
    }

    return self;
}
} // namespace lift_0052FD30
