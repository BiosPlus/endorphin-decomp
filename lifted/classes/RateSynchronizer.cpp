// Lifted C++ translation unit: lifted/classes/RateSynchronizer.cpp
#include "lift_compat.h"

// [0x0067B330] RateSynchronizer::vfunc_0 (81 bytes)
namespace lift_0067B330 {
// Rodata constant at 0x00AA2050: IEEE double 9.999999999999999e-06 (epsilon used for the comparison slack).
extern const double mem_00AA2050;

// @name RateSynchronizer::vfunc_0
// @class RateSynchronizer
// @summary Advances the accumulator at +0x18 by the value at +0x08, then repeatedly subtracts the period at +0x10 and calls the object at +0x20 (vtable slot 0) while the accumulator plus epsilon remains at or above the period. Returns false if that call fails.
// @field RateSynchronizer +0x08 double field_0x08
// @field RateSynchronizer +0x10 double field_0x10
// @field RateSynchronizer +0x18 double field_0x18
// @field RateSynchronizer +0x20 void* field_0x20
bool fn_0067B330(void* self) {
    double a = lift_field<double>(self, 0x08);
    double b = lift_field<double>(self, 0x18) + a;
    lift_field<double>(self, 0x18) = b;

    const double period = lift_field<double>(self, 0x10);
    if (b + mem_00AA2050 < period) {
        return true;
    }

    do {
        b = lift_field<double>(self, 0x18) - period;
        lift_field<double>(self, 0x18) = b;

        void* obj = lift_field<void*>(self, 0x20);
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot0 = reinterpret_cast<bool (*)(void*)>(vtbl[0]);
        if (!slot0(obj)) {
            return false;
        }
    } while (lift_field<double>(self, 0x18) + mem_00AA2050 >= period);

    return true;
}
} // namespace lift_0067B330
