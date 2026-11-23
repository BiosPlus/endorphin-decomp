// Lifted C++ translation unit: lifted/classes/ViewManager.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004B0850] ViewManager::vfunc_6 (35 bytes)
namespace lift_004B0850 {
extern const char* mem_00A9F1BC;

// @name ViewManager::vfunc_6
// @class ViewManager
// @summary Auto-lifted identical-shape clone of 0x00584FD0 (NMData::RPROJointData::vfunc_59).
std::string* fn_004B0850(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9F1BC);
    return out;
}
} // namespace lift_004B0850
