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
