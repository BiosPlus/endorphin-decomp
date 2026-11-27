// Lifted C++ translation unit: lifted/NMData/RootRelationshipData.cpp
#include "lift_compat.h"
extern "C" void ext_005EB5A0(void* self);
extern "C" void __thiscall ext_005F2970(void* self, uint32_t arg);
extern "C" bool __thiscall ext_0062908A(void* self);
extern "C" void* __thiscall ext_00629266(void* self, const char* s);
extern "C" const char mem_0093E1E4[];

extern "C" bool __thiscall ext_0062908A(void* self);
extern "C" void* __thiscall ext_00629266(void* self, const char* s);
extern "C" const char mem_0093E1E4[];
// @summary Forwards to the base NMData::RelationshipData::vfunc_22 for this object and returns this.
// (no fields accessed: the function only passes `self` through)
void* fn_005EBEA0(void* self) {
    ext_005EB5A0(self);
    return self;
}

// [0x005EEBC0] NMData::RootRelationshipData::vfunc_67 (219 bytes)
namespace lift_005EEBC0 {
// Known callee 0x00412690: Container_EmplaceOrGrow_00412690 (Appends an 8-byte element when capacity allows; otherwise grows.)
extern void __thiscall ext_00412690(void* self, const void* elem);
// Known callee 0x0048EF80: std_vector_8_erase_range (Erases a range [first, last) of 8-byte elements from a vector.)
extern void __thiscall ext_0048EF80(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);
// Boilerplate MSVCR80 _invalid_parameter_noinfo pointer (debug begin<=end asserts, dropped); metadata-only reference.
extern int mem_00925134;

// @name NMData::RootRelationshipData::vfunc_67
// @class NMData::RootRelationshipData
// @summary Clears the 8-byte element vector at self+0x168 and refills it with six {id, 0.0f} entries (ids 3, 4, 5, 0, 1, 2).
// @field NMData::RootRelationshipData +0x16C uint32_t field_0x16C
// @field NMData::RootRelationshipData +0x170 uint32_t field_0x170

namespace {
struct VecElem8 {
    int32_t id;
    float value;
};
} // namespace

void fn_005EEBC0(void* self) {
    (void)&mem_00925134;  // metadata only: original debug-assert handler, not a real access
    uint8_t* vec = reinterpret_cast<uint8_t*>(self) + 0x168;

    // Erase [begin, end) of the whole vector (clear).
    uint32_t begin = lift_field<uint32_t>(vec, 0x4);
    uint32_t end = lift_field<uint32_t>(vec, 0x8);
    uint32_t out_iter[2] = {};
    ext_0048EF80(vec, out_iter, vec, begin, vec, end);

    // Append six elements in the original order.
    static const int32_t ids[6] = {3, 4, 5, 0, 1, 2};
    for (int32_t id : ids) {
        VecElem8 elem{id, 0.0f};
        ext_00412690(vec, &elem);
    }
}
} // namespace lift_005EEBC0
