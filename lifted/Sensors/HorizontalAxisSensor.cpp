// Lifted C++ translation unit: lifted/Sensors/HorizontalAxisSensor.cpp
#include "lift_compat.h"
// @name Sensors::HorizontalAxisSensor::vfunc_27
// @class Sensors::HorizontalAxisSensor
// @summary Sums (B - A) vector deltas over an element array (A via objA->vfunc_5(elem), B via objB->vfunc_5(&elem->field_0x08)), and if the sum's magnitude is > 0 stores sub_0067B7F0's returned float[3] into self+0x30.
// @field Sensors::HorizontalAxisSensor +0x30 float[3] output_vec
// @field Sensors::HorizontalAxisSensor +0x44 void* elements_begin
// @field Sensors::HorizontalAxisSensor +0x48 void* elements_end
extern "C" float* ext_0067B7F0(void* scratch);
// 32-bit target layout: pointer fields are stored as uint32_t so the
// element stride is 0x10 even when compiled on a 64-bit host.
struct HorizontalAxisElem {
    uint32_t field_0x00;
    uint32_t objA;          // +0x04 (object pointer)
    uint32_t field_0x08;    // +0x08 (address passed to objB->vfunc_5)
    uint32_t objB;          // +0x0C (object pointer)
};
static_assert(sizeof(HorizontalAxisElem) == 0x10, "element stride must be 0x10");
typedef float* (__thiscall* Vec3GetterFn)(void* self, void* arg);
static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}
