// Lifted C++ translation unit: lifted/classes/MaterialList.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x0052ED00] MaterialList::vfunc_6 (35 bytes)
namespace lift_0052ED00 {
extern const char* mem_00A9F084;

// @name MaterialList::vfunc_6
// @class MaterialList
// @summary Auto-lifted identical-shape clone of 0x00584FD0 (NMData::RPROJointData::vfunc_59).
std::string* fn_0052ED00(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9F084);
    return out;
}
} // namespace lift_0052ED00
