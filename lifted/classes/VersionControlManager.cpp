// Lifted C++ translation unit: lifted/classes/VersionControlManager.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004A96B0] VersionControlManager::vfunc_6 (34 bytes)
namespace lift_004A96B0 {
extern const std::string mem_009414AC;

// @name VersionControlManager::vfunc_6
// @class VersionControlManager
// @summary Auto-lifted identical-shape clone of 0x005C3270 (NMData::FluidObjectData::vfunc_62).
// @field VersionControlManager +0x0 void** vptr
namespace lift_005C3270 {
// Static std::string object at VA 0x00B44944 (copy source).
extern const std::string mem_009414AC;
// MSVCP80 import slot [0x924FE0]: address of std::basic_string copy constructor (thiscall).
extern void (__thiscall* mem_00924FE4)(void* self, const std::string& rhs);

// @name NMData::FluidObjectData::vfunc_62
// @class NMData::FluidObjectData
// @summary Copy-constructs a std::string from the static string at 0x00B44944 into the caller's sret buffer and returns that buffer.
// @field NMData::FluidObjectData +0x00 void** vptr
void* __thiscall fn_004A96B0(void* self, void* out) {
    (void)self;
    mem_00924FE4(out, mem_009414AC);
    return out;
}
} // namespace lift_005C3270
} // namespace lift_004A96B0
