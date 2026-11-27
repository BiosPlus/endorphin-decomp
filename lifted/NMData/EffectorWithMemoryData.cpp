// Lifted C++ translation unit: lifted/NMData/EffectorWithMemoryData.cpp
#include "lift_compat.h"
// Imported MSVCP80 std::string helpers (MSVC mangled names in the original binary).
// Declared with opaque 32-bit string-object pointers; layout is MSVC std::string (SSO, 0x18 bytes).
extern "C" void* __thiscall ext_string_ctor_cstr(void* self, const char* s);
extern "C" void* ext_string_concat_str_str(void* result, const void* lhs, const void* rhs);
extern "C" void* ext_string_concat_str_cstr(void* result, const void* lhs, const char* rhs);
extern "C" void __thiscall ext_string_dtor(void* self);
// Read-only C string literals in .rdata.
extern "C" const char mem_00972218[];
extern "C" const char mem_0093BF0C[];
#include <string>

// [0x0060C2C0] NMData::EffectorWithMemoryData::vfunc_20 (157 bytes)
namespace lift_0060C2C0 {
// .rdata string literals (0x00972218 prefix, 0x0093BF0C suffix).
extern const char mem_00972218[];
extern const char mem_0093BF0C[];
// MSVCP80 IAT slots (std::string ctor / concat / dtor). Replaced by portable std::string ops below.
extern void* mem_00924ECC;
extern void* mem_00924FD0;
extern void* mem_00924FE4;
extern void* mem_00924FF4;

// @name NMData::EffectorWithMemoryData::vfunc_20
// @class NMData::EffectorWithMemoryData
// @summary Builds a descriptive std::string: literal prefix + this member string at +0x04 + literal suffix, returned by value.
// @field NMData::EffectorWithMemoryData +0x04 std::string field_0x04
std::string fn_0060C2C0(void* self) {
    (void)&mem_00924ECC;
    (void)&mem_00924FD0;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;
    auto* base = static_cast<unsigned char*>(self);
    const auto& member = *reinterpret_cast<const std::string*>(base + 0x04);
    std::string result = std::string(mem_00972218) + member;
    return result + std::string(mem_0093BF0C);
}
} // namespace lift_0060C2C0
