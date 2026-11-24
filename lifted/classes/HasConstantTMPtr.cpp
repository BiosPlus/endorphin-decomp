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
