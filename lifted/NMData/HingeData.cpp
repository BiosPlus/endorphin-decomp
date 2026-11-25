// Lifted C++ translation unit: lifted/NMData/HingeData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9EF9C;
extern "C" void __thiscall ext_005E29F0(void* self, void* a, void* b);

// [0x005E2A90] NMData::HingeData::vfunc_14 (32 bytes)
// @name NMData::HingeData::vfunc_14
// @class NMData::HingeData
// @summary Auto-lifted identical-shape clone of 0x005C32B0 (NMData::FluidObjectData::vfunc_15).
void* __thiscall fn_005E2A90(void* self, void* a, void* b) {
    ext_005E29F0(self, a, b);
    return a;
}

// [0x005E05F0]
// @name NMData::HingeData::vfunc_55
// @class NMData::HingeData
// @summary Returns true if the base TransformInterface virtual slot 7 reports success and the hinge is not flagged at +0x17a; otherwise true only when the stack argument is 0, 1, 2 or 6.
// @field NMData::HingeData +0x4 void* transform_interface_vptr (TransformInterface subobject; vtable slot 7 at +0x1c is called)
// @field NMData::HingeData +0x17A uint8_t hinge_flag

#include <cstdint>

namespace {

// Virtual slot 7 (offset 0x1C) of the TransformInterface subobject, thiscall, returns bool in AL.
using SlotFn = std::uint8_t (*)(void* self);

}  // namespace

// thiscall (ECX = this), one stack argument, callee pops 4 (ret 4).
std::uint8_t __fastcall NMData_HingeData_vfunc_55(void* ecx, std::uint32_t arg) {
    auto* self = static_cast<std::uint8_t*>(ecx);
    void* sub = self + 0x4;
    void** vptr = *reinterpret_cast<void***>(sub);
    auto slot7 = reinterpret_cast<SlotFn>(vptr[7]);

    if (slot7(sub) == 0) {
        return 0;
    }
    if (*(self + 0x17A) != 0) {
        return 1;
    }
    switch (arg) {
        case 0:
        case 1:
        case 2:
        case 6:
            return 1;
        default:
            return 0;
    }
}

// [0x005EE3B0]
namespace lift_005EE3B0 {
// Known callee 0x005EE360: NMData::FixedPathJointData::vfunc_15
extern uint32_t ext_005EE360(void* self, uint32_t code);
// Known callee 0x005EC910: fillPairWithStaticObject
extern void ext_005EC910(void* self, uint32_t value);

// @name NMData::HingeData::vfunc_15
// @class NMData::HingeData
// @summary Forwards code 0x22F to FixedPathJointData::vfunc_15; otherwise calls fillPairWithStaticObject, then returns self.
void* __stdcall fn_005EE3B0(void* self, uint32_t code) {
    if (code == 0x22F) {
        ext_005EE360(self, code);
    } else {
        // Original pushes the ecx register at entry as the second argument.
        // That value is not defined by this function, so it is passed as 0 here.
        ext_005EC910(self, 0);
    }
    return self;
}
} // namespace lift_005EE3B0
