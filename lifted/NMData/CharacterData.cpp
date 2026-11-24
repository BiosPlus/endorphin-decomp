// Lifted C++ translation unit: lifted/NMData/CharacterData.cpp
#include "lift_compat.h"

// [0x005A98B0]
namespace lift_005A98B0 {
// @name NMData::CharacterData::vfunc_11
// @class NMData::CharacterData
// @summary Returns true if vfunc_10() or ext_00410390(this) returns non-zero.


extern uint8_t __thiscall ext_00410390(void* self);

uint8_t __thiscall fn_005A98B0(void* self) {
    using Vfunc10Fn = uint8_t(__thiscall*)(void*);
    uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(self);
    auto vfunc_10 = reinterpret_cast<Vfunc10Fn>(vtable[0x28 / sizeof(uintptr_t)]);
    if (vfunc_10(self) != 0) {
        return 1;
    }
    return ext_00410390(self) != 0 ? 1 : 0;
}
} // namespace lift_005A98B0

// [0x0059F370]
namespace lift_0059F370 {
// @name NMData::CharacterData::vfunc_34_off_4
// @class NMData::CharacterData
// @summary Looks up a handle via the object at this+0x04, stores this+0x4F4 into the result's +0x20, links the result back to this+0x0C, and returns the result.
// @field NMData::CharacterData +0x04 void* field_0x04
// @field NMData::CharacterData +0x0C void* field_0x0c
// @field NMData::CharacterData +0x4F4 void* field_0x4f4

extern uint32_t mem_00B40640;

uintptr_t ext_00493E40(void* self, uintptr_t extra);
void ext_00528B90(void* self, void* peer);

using LookupFn = uintptr_t (*)(void* self, uint32_t global, void* adjusted, uintptr_t zero);

uintptr_t NMData_CharacterData_vfunc_34_off_4(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    uintptr_t base_val = reinterpret_cast<uintptr_t>(base);

    // eax = (self - 4) != 0 ? self + 0x0C : nullptr
    void* adjusted = (base_val - 4) != 0 ? static_cast<void*>(base + 0x0C) : nullptr;

    // edx = *(*(self + 0x04) + 0x0C)
    auto* p = *reinterpret_cast<uint8_t**>(base + 0x04);
    auto fn = reinterpret_cast<LookupFn>(*reinterpret_cast<uintptr_t*>(p + 0x0C));

    // thiscall(self + 0x04, global, adjusted, 0)
    uintptr_t tmp = fn(base + 0x04, mem_00B40640, adjusted, 0);

    // ebx = self + 0x4F4
    auto* ebx = base + 0x4F4;

    uintptr_t esi = ext_00493E40(ebx, tmp);

    if (esi != 0) {
        auto* peer = reinterpret_cast<uint8_t*>(esi);
        *reinterpret_cast<void**>(peer + 0x20) = ebx;
        ext_00528B90(base + 0x0C, reinterpret_cast<void*>(esi));
    }

    return esi;
}
} // namespace lift_0059F370
