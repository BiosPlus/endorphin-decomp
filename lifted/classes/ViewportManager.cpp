// Lifted C++ translation unit: lifted/classes/ViewportManager.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x005431B0] ViewportManager::vfunc_6 (35 bytes)
namespace lift_005431B0 {
extern const char* mem_00A9ED84;

// @name ViewportManager::vfunc_6
// @class ViewportManager
// @summary Auto-lifted identical-shape clone of 0x00584FD0 (NMData::RPROJointData::vfunc_59).
std::string* fn_005431B0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9ED84);
    return out;
}
} // namespace lift_005431B0
