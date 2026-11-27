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
#include <cmath>
#include <cstdint>

// [0x0062BDC0]
namespace lift_0062BDC0 {
// @name Sensors::HorizontalAxisSensor::vfunc_27
// @class Sensors::HorizontalAxisSensor
// @summary Accumulates vector differences across sensor elements and updates output_vec via ext_0067B7F0 when magnitude equals mem_00993838.
// @field Sensors::HorizontalAxisSensor +0x30 float[3] output_vec
// @field Sensors::HorizontalAxisSensor +0x44 void* elements_begin
// @field Sensors::HorizontalAxisSensor +0x48 void* elements_end

struct Vec3 {
    float x;
    float y;
    float z;
};

using VFunc5 = Vec3* (__thiscall*)(void* self, void* arg);
using InvalidParamFn = void (*)(void);

extern Vec3* __thiscall ext_0067B7F0(Vec3* self);
extern void ext_006A7250(void);
extern InvalidParamFn mem_00925134;
extern uint32_t mem_00993838;

void __thiscall fn_0062BDC0(void* self) {
    Vec3 sum = {0.0f, 0.0f, 0.0f};
    uint8_t* it = lift_field<uint8_t*>(self, 0x44);
    uint8_t* end = lift_field<uint8_t*>(self, 0x48);
    if (it > end) {
        mem_00925134();
    }

    while (it != end) {
        void* obj1 = lift_field<void*>(it, 0x04);
        void** vtbl1 = *reinterpret_cast<void***>(obj1);
        Vec3* v1 = reinterpret_cast<VFunc5>(vtbl1[5])(obj1, it);

        void* obj2 = lift_field<void*>(it, 0x0C);
        void** vtbl2 = *reinterpret_cast<void***>(obj2);
        Vec3* v2 = reinterpret_cast<VFunc5>(vtbl2[5])(obj2, it + 0x08);

        sum.x += v2->x - v1->x;
        sum.y += v2->y - v1->y;
        sum.z += v2->z - v1->z;

        it += 0x10;
    }

    float len = std::sqrt(sum.x * sum.x + sum.y * sum.y + sum.z * sum.z);
    float threshold = *reinterpret_cast<const float*>(&mem_00993838);
    if (len == threshold) {
        Vec3* res = ext_0067B7F0(&sum);
        lift_field<float>(self, 0x30) = res->x;
        lift_field<float>(self, 0x34) = res->y;
        lift_field<float>(self, 0x38) = res->z;
    }
}
} // namespace lift_0062BDC0
