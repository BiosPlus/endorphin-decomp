// Lifted C++ translation unit: lifted/NMData/HingeConstraint.cpp
#include "lift_compat.h"

// [0x006116B0] NMData::HingeConstraint::vfunc_60 (47 bytes)
// @name NMData::HingeConstraint::setFirstComponentVector
// @class NMData::HingeConstraint
// @summary When index < 1, forwards the vector (value, 0, 0) to virtual slot 61 (offset 0xF4) on self.
// @field NMData::HingeConstraint +0x00 void** vtable
void fn_006116B0(void* self, int32_t index, float value) {
    if (index < 1) {
        float vec[3] = {value, 0.0f, 0.0f};
        void** vtbl = *reinterpret_cast<void***>(self);
        reinterpret_cast<void (*)(void*, const float*)>(vtbl[0xF4 / 4])(self, vec);
    }
}
