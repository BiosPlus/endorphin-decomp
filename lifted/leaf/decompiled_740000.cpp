// Lifted C++ translation unit: lifted/leaf/decompiled_740000.cpp
#include "lift_compat.h"
#include <cstring>

// [0x0074F820] sub_0074F820 (48 bytes)
namespace lift_0074F820 {
// @name sub_0074F820
// @summary Auto-lifted identical-shape clone of 0x006D2AA0 (ForwardIndexedElementToCallee).
namespace lift_006D2AA0 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* __thiscall ext_0077FAC0(void* self, uint32_t arg1);

// @name ForwardIndexedElementToCallee
// @class Unknown
// @summary Computes the address of element `index` (32-byte stride) in the table at self+0x10, forwards it to ext_006D2390 on obj, and returns obj.
// @field Unknown +0x10 uint32_t field_0x10
void* __thiscall fn_0074F820(void* self, void* obj, uint32_t index) {
    const uint32_t table = *reinterpret_cast<const uint32_t*>(static_cast<const char*>(self) + 0x10);
    const uint32_t element = table + (index << 4);

    ext_0077FAC0(obj, element);
    return obj;
}
} // namespace lift_006D2AA0
} // namespace lift_0074F820
