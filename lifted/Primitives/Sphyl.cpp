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
