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

// [0x00611790] NMData::HingeSecondaryConstraint::vfunc_8_off_C (52 bytes)
namespace lift_00611790 {
// Known callee 0x00528BB0: descriptiveName_00528BB0 (forwardVirtual0x2CIfNonNull) (If this->field_0x04 is non-null, tail-dispatch virtual slot 0x2C/4 on it with the same args; otherwise return 0 (callee pops 8 bytes).)
extern DWORD ext_00528BB0(void* self, DWORD arg0, DWORD arg1);
// Known callee 0x00528C70: setFlagOnPointedObject (If the pointer at self+0x04 is non-null, sets the byte at (that pointer)+0x04 to 1.)
extern void ext_00528C70(void* self);

// @name NMData::HingeSecondaryConstraint::vfunc_8_off_C
// @class NMData::HingeSecondaryConstraint
// @summary Stores the low byte of its argument at +0x5C and, if the sub-object at +0x154 is present, forwards that argument via ext_00528BB0 and sets a flag through ext_00528C70.
// @field NMData::HingeSecondaryConstraint +0x154 void* field_0x154
// @field NMData::HingeSecondaryConstraint +0x5C BYTE field_0x5C
void fn_00611790(void* self, DWORD arg0) {
    void* sub = lift_field<void*>(self, 0x154);
    lift_field<BYTE>(self, 0x5C) = static_cast<BYTE>(arg0);
    if (sub != nullptr) {
        ext_00528BB0(static_cast<uint8_t*>(sub) + 0x0C, 0x20000, arg0);
        ext_00528C70(static_cast<uint8_t*>(lift_field<void*>(self, 0x154)) + 0x0C);
    }
}
} // namespace lift_00611790
