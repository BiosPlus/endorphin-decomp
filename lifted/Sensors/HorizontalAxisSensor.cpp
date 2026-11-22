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

// [0x0062BDC0]
void __thiscall fn_0062BDC0(void* self) {
    auto* s = reinterpret_cast<char*>(self);
    auto begin = *reinterpret_cast<uint32_t*>(s + 0x44);
    auto end   = *reinterpret_cast<uint32_t*>(s + 0x48);

    float acc[3] = {0.0f, 0.0f, 0.0f};

    for (uint32_t ea = begin; ea != end; ea += 0x10) {
        auto* e = reinterpret_cast<HorizontalAxisElem*>(as_ptr(ea));

        // A = objA->vfunc_5(e)
        void* objA = as_ptr(e->objA);
        void** vtA = *reinterpret_cast<void***>(objA);
        float* a = reinterpret_cast<Vec3GetterFn>(vtA[5])(objA, e);
        float a0 = a[0], a1 = a[1], a2 = a[2];

        // B = objB->vfunc_5(&e->field_0x08)
        void* objB = as_ptr(e->objB);
        void** vtB = *reinterpret_cast<void***>(objB);
        float* b = reinterpret_cast<Vec3GetterFn>(vtB[5])(objB, &e->field_0x08);
        float b0 = b[0], b1 = b[1], b2 = b[2];

        acc[0] += b0 - a0;
        acc[1] += b1 - a1;
        acc[2] += b2 - a2;
    }

    float len = std::sqrt(acc[0] * acc[0] + acc[1] * acc[1] + acc[2] * acc[2]);
    if (!(len > 0.0f)) {
        // zero or NaN magnitude: nothing to store
        return;
    }

    // Original passes &stack slot at esp+8 (never written by this function);
    // zero-initialised here so the callee receives defined memory.
    float scratch[3] = {0.0f, 0.0f, 0.0f};
    float* r = ext_0067B7F0(scratch);

    float* out = reinterpret_cast<float*>(s + 0x30);
    out[0] = r[0];
    out[1] = r[1];
    out[2] = r[2];
}
