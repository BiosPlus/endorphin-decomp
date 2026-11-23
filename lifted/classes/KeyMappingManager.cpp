// Lifted C++ translation unit: lifted/classes/KeyMappingManager.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0042E920] KeyMappingManager::vfunc_6 (35 bytes)
namespace lift_0042E920 {
extern const char* mem_00A9F024;

// @name KeyMappingManager::vfunc_6
// @class KeyMappingManager
// @summary Auto-lifted identical-shape clone of 0x00584FD0 (NMData::RPROJointData::vfunc_59).
std::string* fn_0042E920(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9F024);
    return out;
}
} // namespace lift_0042E920
