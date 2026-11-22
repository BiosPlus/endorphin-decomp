// Lifted C++ translation unit: lifted/NMData/EffectorData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EE64;
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_00622750(void* self);

extern "C" void* ext_00622750(void* self);
// @name NMData::EffectorData::vfunc_8
// @class NMData::EffectorData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9EE64; this is unused.
std::string* fn_0060BBF0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9EE64);
    return out;
}

// [0x0060BEA0] NMData::EffectorData::vfunc_18 (86 bytes)
// @name NMData::EffectorData::vfunc_18
// @class NMData::EffectorData
// @summary Auto-lifted identical-shape clone of 0x0061EA10 (HingeSecondaryConstraint::AllocAndConstruct).
void* fn_0060BEA0() {
    constexpr size_t kHingeSecondaryConstraintSize = 0x10;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_00622750(obj);
}
