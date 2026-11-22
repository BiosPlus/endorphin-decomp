// Lifted C++ translation unit: lifted/NMData/HingeSecondaryConstraint.cpp
#include "lift_compat.h"
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762).
// Called with a single size argument (0x164); used as allocator.
extern "C" void* ext_006A5C62(size_t size);
// Known callee 0x0061E9D0: sub_0061E9D0 (constructor body; receives the new object as `this`).
extern "C" void* ext_0061E9D0(void* self);

// [0x0061EA10] NMData::HingeSecondaryConstraint::vfunc_17_off_C (89 bytes)
// @name HingeSecondaryConstraint::AllocAndConstruct
// @class NMData::HingeSecondaryConstraint
// @summary Allocates a 0x164-byte HingeSecondaryConstraint and runs its constructor; returns null if allocation fails.
// (No object fields are accessed directly; the function only touches the new allocation via the constructor.)
void* fn_0061EA10() {
    constexpr size_t kHingeSecondaryConstraintSize = 0x164;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_0061E9D0(obj);
}
