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
