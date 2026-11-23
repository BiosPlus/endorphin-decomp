// Lifted C++ translation unit: lifted/leaf/decompiled_530000.cpp
#include "lift_compat.h"

// [0x00530070] sub_00530070 (89 bytes)
namespace lift_00530070 {
extern void* ext_006A5C62(size_t size);
extern void* ext_0052F890(void* self);

// @name sub_00530070
// @summary Auto-lifted identical-shape clone of 0x0061EA10 (HingeSecondaryConstraint::AllocAndConstruct).
void* fn_00530070() {
    constexpr size_t kHingeSecondaryConstraintSize = 0xCC;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_0052F890(obj);
}
} // namespace lift_00530070

// [0x005300D0] sub_005300D0 (86 bytes)
namespace lift_005300D0 {
extern void* ext_006A5C62(size_t size);
extern void* ext_0052F9C0(void* self);

// @name sub_005300D0
// @summary Auto-lifted identical-shape clone of 0x0061EA10 (HingeSecondaryConstraint::AllocAndConstruct).
void* fn_005300D0() {
    constexpr size_t kHingeSecondaryConstraintSize = 0x58;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_0052F9C0(obj);
}
} // namespace lift_005300D0

// [0x00530130] sub_00530130 (89 bytes)
namespace lift_00530130 {
extern void* ext_006A5C62(size_t size);
extern void* ext_0052FA40(void* self);

// @name sub_00530130
// @summary Auto-lifted identical-shape clone of 0x0061EA10 (HingeSecondaryConstraint::AllocAndConstruct).
void* fn_00530130() {
    constexpr size_t kHingeSecondaryConstraintSize = 0x124;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_0052FA40(obj);
}
} // namespace lift_00530130

// [0x00530190] sub_00530190 (86 bytes)
namespace lift_00530190 {
extern void* ext_006A5C62(size_t size);
extern void* ext_0052FC10(void* self);

// @name sub_00530190
// @summary Auto-lifted identical-shape clone of 0x0061EA10 (HingeSecondaryConstraint::AllocAndConstruct).
void* fn_00530190() {
    constexpr size_t kHingeSecondaryConstraintSize = 0x48;

    void* obj = ext_006A5C62(kHingeSecondaryConstraintSize);
    if (obj == nullptr) {
        return nullptr;
    }
    return ext_0052FC10(obj);
}
} // namespace lift_00530190

// [0x00537EC0]
namespace lift_00537EC0 {
extern uint32_t mem_read32(uint32_t addr);
extern void ext_0063E006(uint32_t quadric);

// @name QuadricWrapper::destroy
// @class QuadricWrapper
// @summary Deletes the GLU quadric object stored at offset +0x00.
// @field QuadricWrapper +0x00 uint32_t quadric
void __fastcall fn_00537EC0(uint32_t ecx, uint32_t edx) {
    (void)edx;
    uint32_t quadric = mem_read32(ecx);
    ext_0063E006(quadric);
}
} // namespace lift_00537EC0
