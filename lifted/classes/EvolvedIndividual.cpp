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

// [0x00516E60] EvolvedIndividual::vfunc_1_off_8 (73 bytes)
namespace lift_00516E60 {
// @name EvolvedIndividual::vfunc_1_off_8
// @class EvolvedIndividual
// @summary Walks the pointer vector at +0x0C..+0x10 and stores each element's index into that element's +0x34 field.
// @field EvolvedIndividual +0x0C void** elements_begin
// @field EvolvedIndividual +0x10 void** elements_end
// @field ElementUnknown +0x34 int32_t field_0x34
//
// The original is stdcall-style (`ret 0x8`); the two stack arguments are unused
// and the stub keeps only `self`. The _invalid_parameter_noinfo guards inside
// the loop are unreachable once the begin pointer and index bound are checked,
// so they are omitted.
void fn_00516E60(void* self) {
    void** const begin = lift_field<void**>(self, 0x0C);
    void** const end = lift_field<void**>(self, 0x10);

    if (begin == nullptr) {
        return;
    }

    const ptrdiff_t count = (reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin)) / 4;

    for (ptrdiff_t i = 0; i < count; ++i) {
        void* element = begin[i];
        lift_field<int32_t>(element, 0x34) = static_cast<int32_t>(i);
    }
}
} // namespace lift_00516E60
