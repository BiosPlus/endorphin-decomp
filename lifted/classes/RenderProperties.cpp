// Lifted C++ translation unit: lifted/classes/RenderProperties.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0054C910] RenderProperties::vfunc_6 (35 bytes)
namespace lift_0054C910 {
extern const char* mem_00A9F208;

// @name RenderProperties::vfunc_6
// @class RenderProperties
// @summary Auto-lifted identical-shape clone of 0x00584FD0 (NMData::RPROJointData::vfunc_59).
std::string* fn_0054C910(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9F208);
    return out;
}
} // namespace lift_0054C910
