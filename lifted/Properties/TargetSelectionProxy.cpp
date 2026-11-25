// Lifted C++ translation unit: lifted/Properties/TargetSelectionProxy.cpp
#include "lift_compat.h"

// [0x004EF460]
namespace lift_004EF460 {
// @name Properties::TargetSelectionProxy::vfunc_0
// @class Properties::TargetSelectionProxy
// @summary Forwards virtual slot 0 to the first source object in the proxy's vector (tail call); returns the vector begin value when the vector is empty, or 0 when it is unset.
// @field Properties::TargetSelectionProxy +0x10 uint32_t field_0x10
// @field Properties::TargetSelectionProxy +0x14 uint32_t field_0x14

using VFunc0 = uint32_t (__thiscall*)(void* self, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

uint32_t __thiscall Properties_TargetSelectionProxy_vfunc_0(void* self, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3) {
    // Vector of object pointers: begin at +0x10, end at +0x14 (32-bit pointers).
    const uint32_t begin = lift_field<uint32_t>(self, 0x10);
    const uint32_t end = lift_field<uint32_t>(self, 0x14);

    if (begin == 0) {
        return 0;
    }

    // Element count = byte span / 4 (arithmetic shift, as in the original sar).
    const int32_t count = static_cast<int32_t>(end - begin) >> 2;
    if (count == 0) {
        return begin;
    }

    // Tail-call element[0]->vtable[0] with the same arguments.
    uint8_t* obj = *reinterpret_cast<uint8_t**>(static_cast<uintptr_t>(begin));
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto fn = reinterpret_cast<VFunc0>(vtbl[0]);
    return fn(obj, a0, a1, a2, a3);
}
} // namespace lift_004EF460
