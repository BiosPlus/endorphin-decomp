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
