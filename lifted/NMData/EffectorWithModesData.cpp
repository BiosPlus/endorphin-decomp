// Lifted C++ translation unit: lifted/NMData/EffectorWithModesData.cpp
#include "lift_compat.h"
#include <string>
// Literal strings at 0x00972290 and 0x0093BF0C are .rdata constants whose
// contents are not recovered; they are referenced here by their VA-derived names.
extern "C" const char str_00972290[];
extern "C" const char str_0093BF0C[];
// Base-class vfunc_19 (NMData::EffectorData::vfunc_19), called on the same object first.
extern "C" void ext_0060BDF0(void* self);
// .rdata C string literal at 0x009719C4; contents not recovered.
extern "C" const char str_009719C4[];

extern "C" void ext_0060BDF0(void* self);
// .rdata C string literal at 0x009719C4; contents not recovered.
extern "C" const char str_009719C4[];
// @summary Builds a descriptive std::string: literal prefix + this member string at +0x04 + literal suffix, returned by value.
// @field NMData::EffectorWithModesData +0x04 std::string field_0x04
std::string fn_0060C3D0(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    const auto& member = *reinterpret_cast<const std::string*>(base + 0x04);
    std::string result = std::string(str_00972290) + member;
    return result + std::string(str_0093BF0C);
}

// [0x0060C490] NMData::EffectorWithModesData::vfunc_19 (48 bytes)
// @name NMData::EffectorWithModesData::vfunc_19
// @class NMData::EffectorWithModesData
// @summary Runs base-class vfunc_19, assigns a literal to the string at +0x60, sets int +0x5C to 20, float +0x7C to 0.0f and float +0x80 to 10.0f.
// @field NMData::EffectorWithModesData +0x5C int field_0x5C
// @field NMData::EffectorWithModesData +0x60 std::string field_0x60
// @field NMData::EffectorWithModesData +0x7C float field_0x7C
// @field NMData::EffectorWithModesData +0x80 float field_0x80
void fn_0060C490(void* self) {
    ext_0060BDF0(self);

    lift_field<std::string>(self, 0x60) = str_009719C4;
    lift_field<float>(self, 0x7C) = 0.0f;
    lift_field<int32_t>(self, 0x5C) = 0x14;
    // Constant 10.0f (u32 0x41200000) from .rdata at 0x009518E0.
    lift_field<float>(self, 0x80) = 10.0f;
}
