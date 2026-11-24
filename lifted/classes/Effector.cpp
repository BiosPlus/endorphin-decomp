// Lifted C++ translation unit: lifted/classes/Effector.cpp
#include "lift_compat.h"

// [0x006033B0]
namespace lift_006033B0 {
// @name Effector::vfunc_30
// @class Effector
// @summary Clamps field_0x54 to non-negative or updates it to the maximum of itself and the argument.
// @field Effector +0x54 float field_0x54


void __thiscall fn_006033B0(void* self, float val) {
    auto* field = reinterpret_cast<float*>(static_cast<uint8_t*>(self) + 0x54);
    float cur = *field;
    if (cur < 0.0f) {
        *field = 0.0f;
        return;
    }
    if (!(val < cur)) {
        *field = val;
    }
}
} // namespace lift_006033B0

// [0x00603370] Effector::vfunc_28 (56 bytes)
namespace lift_00603370 {
// @name Effector::vfunc_28
// @class Effector
// @summary Forwards one float argument to virtual slots 25, 26 and 27 of the same object, in that order.
// @field Effector +0x00 void** vtable

namespace lift_00603370 {

// Virtual slot signature: thiscall-style method taking one float, callee pops it.
// Modeled portably as a plain function taking the object pointer first.
using VSlotFloatFn = void (*)(void* self, float value);

static inline void call_vslot(void* self, std::size_t index, float value) {
    void** vtable = *reinterpret_cast<void***>(self);
    auto fn = reinterpret_cast<VSlotFloatFn>(vtable[index]);
    fn(self, value);
}

void __thiscall fn_00603370(void* self, float value) {
    call_vslot(self, 25, value);
    call_vslot(self, 26, value);
    call_vslot(self, 27, value);
}

} // namespace lift_00603370
} // namespace lift_00603370
