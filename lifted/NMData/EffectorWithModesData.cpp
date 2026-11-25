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
