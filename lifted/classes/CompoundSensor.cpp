// Lifted C++ translation unit: lifted/classes/CompoundSensor.cpp
#include "lift_compat.h"

// [0x005FF100]
namespace lift_005FF100 {
// @name CompoundSensor::vfunc_24
// @class CompoundSensor
// @summary Queries a virtual double via vtable slot +0x44, then forwards it with two member doubles and constants (-1.0, 1.0) to ext_005FF080, returning the result as float.
// @field CompoundSensor +0x18 double field_0x18
// @field CompoundSensor +0x20 double field_0x20

extern float ext_005FF080(double a0, double a1, double a2, double a3, double a4);
extern const double mem_00993830;

float __thiscall fn_005FF100(void* self)
{
    uint8_t* base = static_cast<uint8_t*>(self);
    void** vtable = *reinterpret_cast<void***>(base);
    using VFunc = double(__thiscall*)(void*);
    VFunc query = reinterpret_cast<VFunc>(vtable[0x44 / sizeof(void*)]);

    double queried = query(self);
    double f18 = *reinterpret_cast<double*>(base + 0x18);
    double f20 = *reinterpret_cast<double*>(base + 0x20);

    float result = ext_005FF080(f18, f20, mem_00993830, 1.0, queried);
    return result;
}
} // namespace lift_005FF100

// [0x005FF150]
namespace lift_005FF150 {
namespace lift_005FF150 {
// @name CompoundSensor::vfunc_23
// @class CompoundSensor
// @summary Queries a virtual double via vtable slot +0x40 using a caller-supplied argument, then forwards it with two member doubles and constants (-1.0, 1.0) to ext_005FF080, returning the result as float.
// @field CompoundSensor +0x18 double field_0x18
// @field CompoundSensor +0x20 double field_0x20

extern float ext_005FF080(double a0, double a1, double a2, double a3, double a4);
extern const double mem_00993830;

float __thiscall fn_005FF150(void* self, uint32_t arg0)
{
    uint8_t* base = static_cast<uint8_t*>(self);
    void** vtable = *reinterpret_cast<void***>(base);
    using VFunc = double(__thiscall*)(void*, uint32_t);
    VFunc query = reinterpret_cast<VFunc>(vtable[0x40 / sizeof(void*)]);

    double queried = query(self, arg0);
    double f18 = *reinterpret_cast<double*>(base + 0x18);
    double f20 = *reinterpret_cast<double*>(base + 0x20);

    float result = ext_005FF080(f18, f20, mem_00993830, 1.0, queried);
    return result;
}
} // namespace lift_005FF150
} // namespace lift_005FF150
