// Lifted C++ translation unit: lifted/classes/KeyMappingManager.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0042E920] KeyMappingManager::vfunc_6 (35 bytes)
namespace lift_0042E920 {
extern const char* mem_00A9F024;

// @name KeyMappingManager::vfunc_6
// @class KeyMappingManager
// @summary Auto-lifted identical-shape clone of 0x005A98F0 (NMData::BackGroundData::vfunc_6).
namespace lift_005A98F0 {
extern const char* mem_00A9F024;

// @name NMData::BackGroundData::vfunc_6
// @class NMData::BackGroundData
// @summary Auto-lifted identical-shape clone of 0x0047DB90 (NMData::SceneData::vfunc_6).
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9F024;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_0042E920(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9F024);
}
} // namespace lift_0047DB90
} // namespace lift_005A98F0
} // namespace lift_0042E920
