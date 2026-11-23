// Lifted C++ translation unit: lifted/classes/EvolvedIndividual.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00507E80] EvolvedIndividual::vfunc_6 (35 bytes)
namespace lift_00507E80 {
extern const char* mem_00A9EFC0;

// @name EvolvedIndividual::vfunc_6
// @class EvolvedIndividual
// @summary Auto-lifted identical-shape clone of 0x00584FD0 (NMData::RPROJointData::vfunc_59).
std::string* fn_00507E80(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EFC0);
    return out;
}
} // namespace lift_00507E80
