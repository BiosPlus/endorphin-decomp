// Lifted C++ translation unit: lifted/classes/VersionControlManager.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004A96B0] VersionControlManager::vfunc_6 (34 bytes)
namespace lift_004A96B0 {
extern const char mem_009414AC[];

// @name VersionControlManager::vfunc_6
// @class VersionControlManager
// @summary Auto-lifted identical-shape clone of 0x005F0D40 (NMData::MagnetJointData::vfunc_59).
void* __thiscall fn_004A96B0(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_009414AC);
    return out;
}
} // namespace lift_004A96B0
