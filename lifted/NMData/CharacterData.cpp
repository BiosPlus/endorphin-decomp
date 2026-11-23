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
