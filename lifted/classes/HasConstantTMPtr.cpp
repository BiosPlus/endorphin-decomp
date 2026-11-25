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

// [0x0053A6C0] HasConstantTMPtr::vfunc_3
namespace lift_0053A6C0 {
// Known callee 0x0067DAD0: sub_0067DAD0 (59B), called with ecx=this->field_0x04, arg=out matrix.
extern void ext_0067DAD0(void* obj, float* out);

// @name HasConstantTMPtr::vfunc_3
// @class HasConstantTMPtr
// @summary Writes an identity 3x3 float matrix to the output, calls sub_0067DAD0 on the object at this+0x04 with it, and returns the output.
// @field HasConstantTMPtr +0x04 const float* field_0x04
float* HasConstantTMPtr_vfunc_3(void* self, float* out) {
    void* inner = *reinterpret_cast<void**>(static_cast<unsigned char*>(self) + 0x04);
    for (int i = 0; i < 9; ++i) out[i] = 0.0f;
    out[0] = 1.0f;
    out[4] = 1.0f;
    out[8] = 1.0f;
    ext_0067DAD0(inner, out);
    return out;
}
} // namespace lift_0053A6C0
