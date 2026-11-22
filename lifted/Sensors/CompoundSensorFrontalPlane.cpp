// Lifted C++ translation unit: lifted/Sensors/CompoundSensorFrontalPlane.cpp
#include "lift_compat.h"
extern "C" int mem_00925134;                                  // MSVCR80!_invalid_parameter_noinfo IAT slot
extern "C" const void* __thiscall ext_005B6930(void* self);   // sub_005B6930: returns const float[3]*

// [0x0062EEC0] Sensors::CompoundSensorFrontalPlane::vfunc_27 (561 bytes)
// @name Sensors::CompoundSensorFrontalPlane::vfunc_27
// @class Sensors::CompoundSensorFrontalPlane
// @summary Takes the first two vectors from the child-sensor array at +0x2c, caches them at +0x78..+0x8c, then derives four plane coefficients (doubles at +0x58..+0x70) from the normal of (a,b) and the vector from ext_005B6930(+0x38).
// @field Sensors::CompoundSensorFrontalPlane +0x2c void** field_0x2c
// @field Sensors::CompoundSensorFrontalPlane +0x30 void** field_0x30
// @field Sensors::CompoundSensorFrontalPlane +0x38 void* field_0x38
// @field Sensors::CompoundSensorFrontalPlane +0x58 double field_0x58
// @field Sensors::CompoundSensorFrontalPlane +0x60 double field_0x60
// @field Sensors::CompoundSensorFrontalPlane +0x68 double field_0x68
// @field Sensors::CompoundSensorFrontalPlane +0x70 double field_0x70
// @field Sensors::CompoundSensorFrontalPlane +0x78 float field_0x78
// @field Sensors::CompoundSensorFrontalPlane +0x7c float field_0x7c
// @field Sensors::CompoundSensorFrontalPlane +0x80 float field_0x80
// @field Sensors::CompoundSensorFrontalPlane +0x84 float field_0x84
// @field Sensors::CompoundSensorFrontalPlane +0x88 float field_0x88
// @field Sensors::CompoundSensorFrontalPlane +0x8c float field_0x8c

namespace {

// Original tail-called the CRT invalid-parameter handler through its IAT slot.
void invalid_parameter() {
#if defined(_MSC_VER) && defined(_M_IX86)
    reinterpret_cast<void (*)()>(mem_00925134)();
#else
    (void)mem_00925134;
#endif
}

// Calls virtual slot +0x38 (32-bit vtable layout) on obj; returns a const float[3]*.
const float* get_vec3(void* obj) {
    using GetVec3Fn = const float*(__thiscall*)(void* self);
    void** vtable = lift_field<void**>(obj, 0);
    auto fn = reinterpret_cast<GetVec3Fn>(vtable[0x38 / 4]);
    return fn(obj);
}

}  // namespace

void __thiscall fn_0062EEC0(void* self) {
    // Guard: list must be non-null and non-empty.
    void** begin = lift_field<void**>(self, 0x2c);
    void** end = lift_field<void**>(self, 0x30);
    if (begin == nullptr || end == begin) {
        invalid_parameter();
        return;
    }

    const float* pa = get_vec3(begin[0]);
    const float a[3] = {pa[0], pa[1], pa[2]};

    // Guard: re-read the list and require at least two entries.
    begin = lift_field<void**>(self, 0x2c);
    end = lift_field<void**>(self, 0x30);
    if (begin == nullptr || static_cast<std::uintptr_t>(end - begin) <= 1) {
        invalid_parameter();
        return;
    }

    const float* pb = get_vec3(begin[1]);
    const float b[3] = {pb[0], pb[1], pb[2]};

    lift_field<float>(self, 0x78) = a[0];
    lift_field<float>(self, 0x7c) = a[1];
    lift_field<float>(self, 0x80) = a[2];
    lift_field<float>(self, 0x84) = b[0];
    lift_field<float>(self, 0x88) = b[1];
    lift_field<float>(self, 0x8c) = b[2];

    // n = a x b
    const float n[3] = {
        a[1] * b[2] - a[2] * b[1],
        a[2] * b[0] - a[0] * b[2],
        a[0] * b[1] - a[1] * b[0],
    };

    // w = n x a
    const float w[3] = {
        n[1] * a[2] - n[2] * a[1],
        n[2] * a[0] - n[0] * a[2],
        n[0] * a[1] - n[1] * a[0],
    };

    const float* pd = static_cast<const float*>(ext_005B6930(lift_field<void*>(self, 0x38)));
    const float d[3] = {pd[0], pd[1], pd[2]};

    const float P[3] = {w[0] + d[0], w[1] + d[1], w[2] + d[2]};
    const float Q[3] = {d[0] + a[0], d[1] + a[1], d[2] + a[2]};

    const double P0 = P[0], P1 = P[1], P2 = P[2];
    const double Q0 = Q[0], Q1 = Q[1], Q2 = Q[2];
    const double d0 = d[0], d1 = d[1], d2 = d[2];

    lift_field<double>(self, 0x58) = (P2 - Q2) * d1 + (Q2 - d2) * P1 + (d2 - P2) * Q1;
    lift_field<double>(self, 0x60) = (Q0 - d0) * P2 + (P0 - Q0) * d2 + (d0 - P0) * Q2;
    lift_field<double>(self, 0x68) = (P1 - Q1) * d0 + (Q1 - d1) * P0 + (d1 - P1) * Q0;

    const double X1 = Q2 * P1 - Q1 * P2;
    const double Y1 = Q1 * d2 - Q2 * d1;
    lift_field<double>(self, 0x70) = -d0 * X1 - P0 * Y1 - Q0 * (d1 * P2 - d2 * P1);
}
