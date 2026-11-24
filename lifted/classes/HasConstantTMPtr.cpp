// Lifted C++ translation unit: lifted/classes/HasConstantTMPtr.cpp
#include "lift_compat.h"

// [0x005321E0] HasConstantTMPtr::vfunc_10 (20 bytes)
namespace lift_005321E0 {
// @name HasConstantTMPtr::vfunc_10
// @class HasConstantTMPtr
// @summary Tail-forwards this->field_0x04 to vtable slot 4 of the other object; returns its result.
// @field HasConstantTMPtr +0x04 const float* field_0x04

typedef uint32_t (__thiscall *VFuncSlot4)(void* self, const float* arg);

uint32_t __thiscall fn_005321E0(void* self, void* other) {
    const float* arg = lift_field<const float*>(self, 0x04);
    void** vtbl = lift_field<void**>(other, 0);
    VFuncSlot4 target = reinterpret_cast<VFuncSlot4>(vtbl[4]);
    return target(other, arg);
}
} // namespace lift_005321E0

// [0x0053A6A0]
namespace lift_0053A6A0 {
// @name HasConstantTMPtr::vfunc_1
// @class HasConstantTMPtr
// @summary Forwards the constant transform pointer at +0x4 with the output buffer to copyVec3WithZeroW and returns the output buffer.
// @field HasConstantTMPtr +0x04 const float* field_0x04

void ext_004F9950(void* self, float* out);

float* fn_0053A6A0(void* self, float* out) {
    const float* tm = *reinterpret_cast<const float* const*>(reinterpret_cast<const char*>(self) + 0x4);
    ext_004F9950(const_cast<float*>(tm), out);
    return out;
}
} // namespace lift_0053A6A0

// [0x00532200] HasConstantTMPtr::vfunc_12 (23 bytes)
namespace lift_00532200 {
// @name HasConstantTMPtr::vfunc_12
// @class HasConstantTMPtr
// @summary Tail-calls other->vfunc_7 passing (this->field_0x04 + 0x30) as its argument.
// @field HasConstantTMPtr +0x04 const float* field_0x04
void fn_00532200(void* self, void* other) {
    // Load this->field_0x04 and offset it by 0x30 bytes (12 floats = 3 floats, i.e. the Vec3 at +0x30).
    const auto* base = *reinterpret_cast<const unsigned char* const*>(
        static_cast<unsigned char*>(self) + 0x04);
    const void* arg = base + 0x30;

    // other->vtable[7] (vtable slot at +0x1C), invoked with `other` as this and `arg` as the sole stack argument.
    void* const* vtbl = *reinterpret_cast<void* const* const*>(other);
    using Slot7Fn = void (*)(void* self, const void* arg);
    auto fn = reinterpret_cast<Slot7Fn>(vtbl[7]);
    fn(other, arg);
}
} // namespace lift_00532200
