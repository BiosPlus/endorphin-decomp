// Lifted C++ translation unit: lifted/classes/AVIIO.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00401C30] AVIIO::vfunc_6 (35 bytes)
namespace lift_00401C30 {
extern const char* mem_00A9EE78;

// @name AVIIO::vfunc_6
// @class AVIIO
// @summary Auto-lifted identical-shape clone of 0x00584FD0 (NMData::RPROJointData::vfunc_59).
std::string* fn_00401C30(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EE78);
    return out;
}
} // namespace lift_00401C30
