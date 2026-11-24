// Lifted C++ translation unit: lifted/classes/AnimatableTransform.cpp
#include "lift_compat.h"
#include <string>
#include <new>

// [0x00593870] AnimatableTransform::vfunc_17_off_C (99 bytes)
namespace lift_00593870 {
extern void* ext_006A5C62(size_t size);
extern void* ext_005935A0(void* self, void* owner);

// @name AnimatableTransform::vfunc_17_off_C
// @class AnimatableTransform
// @summary Auto-lifted identical-shape clone of 0x004D3070 (NMData::TransitionEventData::vfunc_17_off_C).
void* fn_00593870(void* self) {
    void* mem = ext_006A5C62(0xF0);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005935A0(mem, owner);
}
} // namespace lift_00593870

// [0x005DF1F0] AnimatableTransform::vfunc_15 (30 bytes)
namespace lift_005DF1F0 {
extern void ext_00671F30(uint32_t);

// @name AnimatableTransform::vfunc_15
// @class AnimatableTransform
// @summary Passes its first argument to ext_00671F30 (zero first dword, store global into second) and returns the argument.

uint32_t __stdcall fn_005DF1F0(uint32_t self, uint32_t arg2) {
    (void)arg2;
    ext_00671F30(self);
    return self;
}
} // namespace lift_005DF1F0

// [0x00593680]
namespace lift_00593680 {
// @name AnimatableTransform::vfunc_9_off_4
// @class AnimatableTransform
// @summary Calls virtual slot 7 on self; if it returns true, forwards field +0xE4 to ext_00661A60 using global mem_00B40640, otherwise returns field +0xE0.
// @field AnimatableTransform +0x0 uint32_t vtable
// @field AnimatableTransform +0xE0 uint32_t field_0xE0
// @field AnimatableTransform +0xE4 uint32_t field_0xE4

extern void __fastcall ext_00661A60(void* self, uint32_t arg);

extern uint32_t mem_00B40640;

extern uint32_t __thiscall fn_00593680(void* self) {
    void* vtable = lift_field<void*>(self, 0x0);
    auto slot = reinterpret_cast<uint8_t (__thiscall*)(void*)>(
        reinterpret_cast<void* const*>(vtable)[0x1c / sizeof(void*)]);

    if (slot(self) != 0) {
        uint32_t arg = lift_field<uint32_t>(self, 0xE4);
        ext_00661A60(reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00B40640)), arg);
        return 0;
    }
    return lift_field<uint32_t>(self, 0xE0);
}
} // namespace lift_00593680

// [0x0058A550] AnimatableTransform::vfunc_1_off_8 (45 bytes)
namespace lift_0058A550 {
// @name AnimatableTransform::vfunc_1_off_8
// @class AnimatableTransform
// @summary Calls virtual slot 0 on self four times (indices 3..6), passing (arg1, index, arg2) each time.
// @field AnimatableTransform +0x0 void* vtable

void __thiscall fn_0058A550(void* self, uint32_t arg1, uint32_t arg2) {
    void* vtable = lift_field<void*>(self, 0x0);
    auto slot0 = reinterpret_cast<void (__thiscall*)(void*, uint32_t, uint32_t, uint32_t)>(
        reinterpret_cast<void* const*>(vtable)[0]);

    for (uint32_t i = 3; i < 7; ++i) {
        slot0(self, arg1, i, arg2);
    }
}
} // namespace lift_0058A550
