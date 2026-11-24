// Lifted C++ translation unit: lifted/classes/JointTool.cpp
#include "lift_compat.h"

// [0x005470F0]
namespace lift_005470F0 {
// @name JointTool::vfunc_23
// @class JointTool
// @summary Calls vslot +0x38 on the object held at +0x88 with arg 1, then tail-calls vslot +0x68 on this.
// @field JointTool +0x88 void* field_0x88

namespace {

using SlotFnWithInt = void (*)(void* self, int arg);
using SlotFnNoArgs = void (*)(void* self);

// Returns the function pointer stored at byteOffset in obj's vtable.
inline void* vtable_slot(void* obj, ptrdiff_t byteOffset) {
    void* vptr = lift_field<void*>(obj, 0);
    return lift_field<void*>(vptr, byteOffset);
}

} // namespace

void JointTool_vfunc_23(void* self) {
    void* sub = lift_field<void*>(self, 0x88);
    reinterpret_cast<SlotFnWithInt>(vtable_slot(sub, 0x38))(sub, 1);
    reinterpret_cast<SlotFnNoArgs>(vtable_slot(self, 0x68))(self);
}
} // namespace lift_005470F0
