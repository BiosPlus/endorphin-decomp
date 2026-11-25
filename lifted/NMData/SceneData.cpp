// Lifted C++ translation unit: lifted/NMData/SceneData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Global string-literal pointer (value 0x00986584 in .data).
extern "C" const char* mem_00A9F23C;

// [0x0047DB90] NMData::SceneData::vfunc_6 (35 bytes)
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9F23C;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_0047DB90(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9F23C);
}
} // namespace lift_0047DB90
