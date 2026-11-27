// Lifted C++ translation unit: lifted/Primitives/Sphyl.cpp
#include "lift_compat.h"
// Known callee 0x0053A610: Primitives::Plane::vfunc_25 (If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30; then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.)
extern "C" void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
// std::string::operator[](size_t) const (MSVCP80), reached through the IAT slot mem_00924FFC whose .rdata value is 0x0062B156.
extern "C" const char& ext_0062B156(const void* self, uint32_t pos);

// [0x0053DA40]
namespace lift_0053DA40 {
// @name Primitives::Sphyl::vfunc_25
// @class Primitives::Sphyl
// @summary Forwards to Plane::vfunc_25, sets flag 0x40 in this->field_0x1C, copies three uint32 values from the source record (+0x84/+0x88/+0x8C) and the first char of its std::string member (+0x9C) into this.
// @field Primitives::Sphyl +0x1C uint32_t field_0x1C
// @field Primitives::Sphyl +0x3C uint32_t field_0x3C
// @field Primitives::Sphyl +0x40 uint32_t field_0x40
// @field Primitives::Sphyl +0x44 uint32_t field_0x44
// @field Primitives::Sphyl +0x48 uint8_t field_0x48
//
// Source-record accesses (second argument, not Sphyl fields): +0x84 uint32 (-> dst +0x44),
// +0x88 uint32 (-> dst +0x3C), +0x8C uint32 (-> dst +0x40), +0x9C std::string (first char -> dst +0x48).
//
// The std::string operator[] is reached through the MSVCP80 IAT slot at mem_00924FFC
// (called with pos 0, thiscall, one stack arg), represented here by ext_std_string_index_const.


// Plane::vfunc_25 (0x0053A610): (this, arg1, arg2, arg3)
extern void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);

// IAT slot holding MSVCP80 std::string::operator[](size_type) const
extern const uint32_t mem_00924FFC;

// MSVCP80 std::string::operator[](size_type) const, reached via mem_00924FFC
extern const char& ext_std_string_index_const(const void* str, size_t pos);

void Primitives_Sphyl_vfunc_25(void* self, uint32_t a1, void* src, uint32_t a3) {
    (void)&mem_00924FFC;
    ext_0053A610(self, a1, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(src)), a3);

    uint32_t& flags = lift_field<uint32_t>(self, 0x1C);
    if ((flags & 0x40) == 0) {
        flags ^= 0x40;
    }

    lift_field<uint32_t>(self, 0x3C) = lift_field<uint32_t>(src, 0x88);
    lift_field<uint32_t>(self, 0x40) = lift_field<uint32_t>(src, 0x8C);
    lift_field<uint32_t>(self, 0x44) = lift_field<uint32_t>(src, 0x84);

    const void* str = static_cast<const uint8_t*>(src) + 0x9C;
    lift_field<uint8_t>(self, 0x48) = static_cast<uint8_t>(ext_std_string_index_const(str, 0));
}
} // namespace lift_0053DA40

// [0x0053B8A0]
namespace lift_0053B8A0 {
// @name Primitives::Sphyl::vfunc_28
// @class Primitives::Sphyl
// @summary Renders a sphyl (capsule) primitive using OpenGL/GLU sphere and cylinder calls.
// @field Primitives::Sphyl +0x20 uint32_t field_0x20
// @field Primitives::Sphyl +0x3C uint32_t field_0x3C
// @field Primitives::Sphyl +0x40 uint32_t field_0x40
// @field Primitives::Sphyl +0x44 uint32_t field_0x44
// @field Primitives::Sphyl +0x4C uint32_t field_0x4C


extern uint32_t* __thiscall ext_005B11D0(uintptr_t self, uint32_t index);
extern void __stdcall ext_0063E036(uintptr_t quadric, double radius, int32_t slices, int32_t stacks);
extern void __stdcall ext_0063E01E(uintptr_t quadric, uint32_t orientation);
extern void __stdcall ext_0063E02A(uintptr_t quadric, double baseRadius, double topRadius, double height, int32_t slices, int32_t stacks);

extern void (__stdcall *mem_00925414)(void);
extern void (__stdcall *mem_009253D0)(float x, float y, float z);
extern void (__stdcall *mem_00925404)(void);
extern const double mem_00993828;

void __thiscall fn_0053B8A0(void* self, uint32_t /*unused*/) {
    mem_00925414();

    uintptr_t params = lift_field<uint32_t>(self, 0x20);
    float half_neg_len = static_cast<float>(-static_cast<double>(*reinterpret_cast<const float*>(ext_005B11D0(params, 1))) * mem_00993828);
    mem_009253D0(0.0f, 0.0f, half_neg_len);

    float radius = *reinterpret_cast<const float*>(ext_005B11D0(params, 0));
    int32_t slices = lift_field<int32_t>(self, 0x3C);
    int32_t stacks_sphere = lift_field<int32_t>(self, 0x44);
    uintptr_t quadric = lift_field<uint32_t>(self, 0x4C);
    ext_0063E036(quadric, static_cast<double>(radius), slices, stacks_sphere);

    ext_0063E01E(lift_field<uint32_t>(self, 0x4C), 0x186B4);

    const float* height_ptr = reinterpret_cast<const float*>(ext_005B11D0(params, 1));
    const float* top_radius_ptr = reinterpret_cast<const float*>(ext_005B11D0(params, 0));
    const float* base_radius_ptr = reinterpret_cast<const float*>(ext_005B11D0(params, 0));
    int32_t stacks_cyl = lift_field<int32_t>(self, 0x40);
    slices = lift_field<int32_t>(self, 0x3C);
    quadric = lift_field<uint32_t>(self, 0x4C);
    ext_0063E02A(
        quadric,
        static_cast<double>(*base_radius_ptr),
        static_cast<double>(*top_radius_ptr),
        static_cast<double>(*height_ptr),
        slices,
        stacks_cyl
    );

    float length = *reinterpret_cast<const float*>(ext_005B11D0(params, 1));
    mem_009253D0(0.0f, 0.0f, length);

    radius = *reinterpret_cast<const float*>(ext_005B11D0(params, 0));
    slices = lift_field<int32_t>(self, 0x3C);
    stacks_sphere = lift_field<int32_t>(self, 0x44);
    quadric = lift_field<uint32_t>(self, 0x4C);
    ext_0063E036(quadric, static_cast<double>(radius), slices, stacks_sphere);

    mem_00925404();
}
} // namespace lift_0053B8A0
