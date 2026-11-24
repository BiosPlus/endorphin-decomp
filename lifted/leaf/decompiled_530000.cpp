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

// [0x0053C8F0]
namespace lift_0053C8F0 {
// @name Unknown::initDerivedVtable
// @class Unknown
// @summary Runs the base initializer on self, then installs the derived vtable at +0x00 and returns self.
// @field Unknown +0x00 uint32_t vtable

void fn_00532B60(void* self);

void* fn_0053C8F0(void* self) {
    fn_00532B60(self);
    *reinterpret_cast<uint32_t*>(self) = 0x00955B6Cu;
    return self;
}
} // namespace lift_0053C8F0

// [0x00532B40]
namespace lift_00532B40 {
// @name Unknown::dtor_00532B40
// @class Unknown
// @summary Sets vtable to 0x009543E4 and unlinks peer at +0x08 if it points back to this at +0x04.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x08 void* peer


extern void __thiscall ext_00528B90(void* self, void* peer);

void __thiscall fn_00532B40(void* self) {
    *reinterpret_cast<uint32_t*>(self) = 0x009543E4u;
    void* peer = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x08);
    if (peer != nullptr && *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(peer) + 0x04) == self) {
        ext_00528B90(peer, nullptr);
    }
}
} // namespace lift_00532B40

// [0x00538530] sub_00538530 (31 bytes)
namespace lift_00538530 {
// Known callee 0x00532B60: Unknown::initVtableAndFlags (Stores the vtable address at +0x00, sets flag bytes at +0x04 and +0x0C to 1, and zeroes the dwords at +0x08 and +0x10.)
extern void ext_00532B60();

// @name Unknown::InitWithVTableAndDefaults
// @class Unknown
// @summary Base-initializes this object, then sets vtable to 0x95501c, a float at +0x14 to 1.0, and flag bytes at +0x18 and +0x19 to 1; returns this.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 uint8_t field_0x18
// @field Unknown +0x19 uint8_t field_0x19
void* fn_00538530(void* self) {
    auto* p = static_cast<unsigned char*>(self);
    ext_00532B60(); // thiscall: ecx = self, still live from entry
    *reinterpret_cast<float*>(p + 0x14) = 1.0f;
    p[0x18] = 1;
    p[0x19] = 1;
    *reinterpret_cast<const void**>(p) = reinterpret_cast<const void*>(static_cast<uintptr_t>(0x95501cu));
    return self;
}
} // namespace lift_00538530
