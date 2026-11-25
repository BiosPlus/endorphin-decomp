// Lifted C++ translation unit: lifted/NMData/RPROMagnetData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F1E8;

// [0x00584F50] NMData::RPROMagnetData::vfunc_59 (35 bytes)
namespace lift_00584F50 {
extern int mem_00A9F1E8; // .data slot holding a const char* (0x00986694)
extern int mem_00924FE4; // IAT slot: MSVCP80 basic_string(const char*, allocator) ctor

// @name NMData::RPROMagnetData::vfunc_59
// @class NMData::RPROMagnetData
// @summary Constructs a std::string from the literal pointed to by mem_00A9F1E8 into the caller-supplied buffer and returns that buffer.
std::string* fn_00584F50(std::string* out) {
    // Original code called the MSVCP80 ctor through the IAT slot mem_00924FE4;
    // the portable std::string constructor below performs the same operation.
    (void)&mem_00924FE4;
    const char* lit = *reinterpret_cast<const char* const*>(&mem_00A9F1E8);
    ::new (static_cast<void*>(out)) std::string(lit);
    return out;
}
} // namespace lift_00584F50
