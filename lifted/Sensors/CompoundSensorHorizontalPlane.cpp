// Lifted C++ translation unit: lifted/Sensors/CompoundSensorHorizontalPlane.cpp
#include "lift_compat.h"
extern "C" const float* __thiscall ext_005B6930(void* self);
extern "C" void (*mem_00925134)();   // CRT _invalid_parameter_noinfo (IAT slot)
// @name Sensors::CompoundSensorHorizontalPlane::vfunc_27
// @class Sensors::CompoundSensorHorizontalPlane
// @summary Takes the positions of the first two child sensors, builds a cross-product frame from them and a reference offset, and stores the derived plane terms (doubles at +0x58..+0x70) plus the cached positions (+0x78, +0x84).
// @field Sensors::CompoundSensorHorizontalPlane +0x2c void* field_0x2c
// @field Sensors::CompoundSensorHorizontalPlane +0x30 void* field_0x30
// @field Sensors::CompoundSensorHorizontalPlane +0x38 void* field_0x38
// @field Sensors::CompoundSensorHorizontalPlane +0x58 double field_0x58
// @field Sensors::CompoundSensorHorizontalPlane +0x60 double field_0x60
// @field Sensors::CompoundSensorHorizontalPlane +0x68 double field_0x68
// @field Sensors::CompoundSensorHorizontalPlane +0x70 double field_0x70
// @field Sensors::CompoundSensorHorizontalPlane +0x78 float field_0x78
// @field Sensors::CompoundSensorHorizontalPlane +0x7c float field_0x7c
// @field Sensors::CompoundSensorHorizontalPlane +0x80 float field_0x80
// @field Sensors::CompoundSensorHorizontalPlane +0x84 float field_0x84
// @field Sensors::CompoundSensorHorizontalPlane +0x88 float field_0x88
// @field Sensors::CompoundSensorHorizontalPlane +0x8c float field_0x8c
namespace {
struct Vec3 {
    float x;
    float y;
    float z;
};
Vec3 load_vec3(const float* p) {
    return Vec3{p[0], p[1], p[2]};
}
// Cross product a x b. Products are formed in double (the original kept
// x87 extended precision) and rounded to float on store, like the fstp dword
// writes in the original.
Vec3 cross(const Vec3& a, const Vec3& b) {
    return Vec3{
        static_cast<float>(double(a.y) * b.z - double(a.z) * b.y),
        static_cast<float>(double(a.z) * b.x - double(a.x) * b.z),
        static_cast<float>(double(a.x) * b.y - double(a.y) * b.x),
    };
}
// Virtual slot at +0x38 (index 14) of the child sensor object; returns a Vec3*.
const float* vcall_vec3_slot14(void* obj) {
    void** vtbl = *static_cast<void***>(obj);
    using Fn = const float* (*)(void*);
    return reinterpret_cast<Fn>(vtbl[14])(obj);
}
}  // namespace

// [0x0062F360] Sensors::CompoundSensorHorizontalPlane::vfunc_27 (615 bytes)
void fn_0062F360(void* self) {
    // Child-sensor array at +0x2c (begin) / +0x30 (end).
    void** elems = lift_field<void**>(self, 0x2c);
    void** elemsEnd = lift_field<void**>(self, 0x30);
    if (elems == nullptr || elemsEnd - elems == 0) {
        mem_00925134();
    }
    const Vec3 p0 = load_vec3(vcall_vec3_slot14(elems[0]));

    elems = lift_field<void**>(self, 0x2c);
    elemsEnd = lift_field<void**>(self, 0x30);
    if (elems == nullptr || elemsEnd - elems <= 1) {
        mem_00925134();
    }
    const Vec3 p1 = load_vec3(vcall_vec3_slot14(elems[1]));

    // Cache the two positions in the object.
    lift_field<Vec3>(self, 0x78) = p0;
    lift_field<Vec3>(self, 0x84) = p1;

    // C = p0 x p1 ; M = C x p0
    const Vec3 c = cross(p0, p1);
    const Vec3 m = cross(c, p0);
    // V = p0 x M
    const Vec3 v = cross(p0, m);

    // Reference offset W from the sub-object at +0x38.
    const Vec3 w = load_vec3(ext_005B6930(lift_field<void*>(self, 0x38)));

    // A = M + W ; B = V + W
    const Vec3 a{m.x + w.x, m.y + w.y, m.z + w.z};
    const Vec3 b{v.x + w.x, v.y + w.y, v.z + w.z};

    // Plane terms, computed in double and stored as double.
    lift_field<double>(self, 0x58) =
        (double(a.z) - b.z) * w.y + (double(b.z) - w.z) * a.y + (double(w.z) - a.z) * b.y;

    lift_field<double>(self, 0x60) =
        (double(b.x) - w.x) * a.z + (double(a.x) - b.x) * w.z + (double(w.x) - a.x) * b.z;

    lift_field<double>(self, 0x68) =
        (double(b.y) - w.y) * a.x + (double(a.y) - b.y) * w.x + (double(w.y) - a.y) * b.x;

    const double k = double(b.z) * a.y - double(b.x) * a.z;
    const double l = double(b.x) * w.z - double(b.z) * w.y;
    const double n = double(w.y) * a.z - double(w.z) * a.y;
    lift_field<double>(self, 0x70) =
        -double(w.x) * k - double(a.x) * l - double(b.x) * n;
}
