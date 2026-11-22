// Lifted C++ translation unit: lifted/Primitives/Animation.cpp
#include "lift_compat.h"
// Known callee 0x0053D2B0: Primitives::Cuboid::vfunc_25 (thiscall on self with three stack args, callee-cleans).
extern "C" void ext_0053D2B0(void* self, void* arg1, uint32_t arg2, uint32_t arg3);

extern "C" void ext_0053D2B0(void* self, void* arg1, uint32_t arg2, uint32_t arg3);
// Original (ret 8): allSet = ((flags & mask) == mask); if (allSet != (uint8)set) flags ^= mask.
// @name Primitives::Animation::vfunc_11
// @class Primitives::Animation
// @summary Toggles the mask bits in the flags word at +0x1C when "all mask bits set" disagrees with the low byte of set.
// @field Primitives::Animation +0x1C uint32_t field_0x1C
void fn_0053AE20(void* self, uint32_t mask, uint8_t set) {
    uint32_t flags = lift_field<uint32_t>(self, 0x1C);
    uint8_t allSet = ((flags & mask) == mask) ? 1 : 0;
    if (allSet != set) {
        flags ^= mask;
        lift_field<uint32_t>(self, 0x1C) = flags;
    }
}

// [0x0053E240] Primitives::Animation::vfunc_25 (65 bytes)
// @name Primitives::Animation::vfunc_25
// @class Primitives::Animation
// @summary Forwards its three arguments to Cuboid::vfunc_25, stores the result of virtual slot +0x2C on arg1's +0x0C object into +0x9C, and sets flag bit 0x02000000 in +0x1C.
// @field Primitives::Animation +0x1C uint32_t field_0x1C
// @field Primitives::Animation +0x9C uint32_t field_0x9C
// @field ArgObject +0x0C void* field_0x0C
// The vtable call at slot +0x2C is made portably as a function pointer taking the object as its first argument.
void fn_0053E240(void* self, void* arg1, uint32_t arg2, uint32_t arg3) {
    ext_0053D2B0(self, arg1, arg2, arg3);

    void* obj = lift_field<void*>(arg1, 0x0C);
    void** vtable = *reinterpret_cast<void***>(obj);
    // Slot +0x2C on the original 32-bit vtable is entry index 11 (0x2C / 4).
    auto slot = reinterpret_cast<uint32_t (*)(void*)>(vtable[11]);
    uint32_t result = slot(obj);
    lift_field<uint32_t>(self, 0x9C) = result;

    uint32_t flags = lift_field<uint32_t>(self, 0x1C);
    if ((flags & 0x02000000u) == 0) {
        lift_field<uint32_t>(self, 0x1C) = flags | 0x02000000u;
    }
}
