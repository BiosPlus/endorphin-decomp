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
    *reinterpret_cast<const void**>(p) = reinterpret_cast<const void*>(static_cast<std::uintptr_t>(0x95501cu));
    return self;
}
} // namespace lift_00538530

// [0x0053ACF0] sub_0053ACF0 (32 bytes)
namespace lift_0053ACF0 {
// @name SetMaskBitsToMatchFlag
// @class Unknown
// @summary Tests whether all bits in mask are set in this+0x04; if that result differs from flag, toggles those mask bits in this+0x04.
// @field Unknown +0x04 uint32_t field_0x04
void fn_0053ACF0(void* self, uint32_t mask, uint8_t flag) {
    uint32_t bits = lift_field<uint32_t>(self, 0x04);
    uint8_t allSet = ((bits & mask) == mask) ? 1 : 0;
    if (allSet != flag) {
        bits ^= mask;
        lift_field<uint32_t>(self, 0x04) = bits;
    }
}
} // namespace lift_0053ACF0

// [0x0053F6A0] sub_0053F6A0 (32 bytes)
namespace lift_0053F6A0 {
// Callee (ext_00533D40): stores its 3rd argument into this+0x498.
void fn_00533D40(void* self, DWORD arg0, DWORD value);

// @name ForwardSetField498ToChild
// @class Unknown
// @summary Forwards the second stack argument to child object at this+0xB4 via SetField498 with tag 0x93A444; pops 8 bytes.
// @field Unknown +0xB4 void* field_0xB4
void fn_0053F6A0(void* self, DWORD arg0, DWORD value) {
    (void)arg0; // first stack argument is unused; callee receives the constant tag 0x93A444
    void* child = lift_field<void*>(self, 0xB4);
    fn_00533D40(child, 0x93A444u, value);
}
} // namespace lift_0053F6A0

// [0x00533D50] sub_00533D50 (33 bytes)
namespace lift_00533D50 {
// Known callee 0x00532B40: Unknown::dtor_00532B40 (Sets vtable to 0x009543E4 and unlinks peer at +0x08 if it points back to this at +0x04.)
extern void ext_00532B40(void* self);
extern uint32_t mem_009253E8; // IAT slot holding glDeleteLists
extern uint32_t mem_009547FC; // .rdata constant (unused by this body; vtable is written as an immediate)

// @name Unknown::dtor_00533D50
// @class Unknown
// @summary Sets vtable to 0x009547FC, deletes the display list at +0x30 if present, then chains to the base dtor 0x00532B40.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x30 GLuint displayList
void fn_00533D50(void* self) {
    // [0x00533D50] mov [esi], 0x9547fc
    lift_field<uint32_t>(self, 0x00) = 0x009547FCu;

    // [0x00533D53] mov eax, [esi+0x30]; test eax, eax; je ...
    GLuint displayList = lift_field<GLuint>(self, 0x30);
    if (displayList != 0) {
        // [0x00533D60] push 1; push eax; call [0x9253e8] ; glDeleteLists(list, 1)
        using glDeleteLists_t = void (*)(GLuint, GLsizei);
        auto glDeleteLists = reinterpret_cast<glDeleteLists_t>(
            static_cast<uintptr_t>(mem_009253E8));
        glDeleteLists(displayList, 1);
    }

    // [0x00533D69] mov ecx, esi; pop esi; jmp 0x532b40  (tail call with this = self)
    ext_00532B40(self);
}
} // namespace lift_00533D50

// [0x00533FB0]
namespace lift_00533FB0 {
// @name sub_00533FB0
// @summary Copy four floats from +0x08..+0x14 into output buffer and return it
// @field Object +0x08 float field_0x08
// @field Object +0x0c float field_0x0c
// @field Object +0x10 float field_0x10
// @field Object +0x14 float field_0x14


void* __thiscall sub_00533FB0(void* self, void* out) {
    float* dst = reinterpret_cast<float*>(out);
    const uint8_t* src = reinterpret_cast<const uint8_t*>(self);
    dst[0] = *reinterpret_cast<const float*>(src + 0x08);
    dst[1] = *reinterpret_cast<const float*>(src + 0x0c);
    dst[2] = *reinterpret_cast<const float*>(src + 0x10);
    dst[3] = *reinterpret_cast<const float*>(src + 0x14);
    return out;
}
} // namespace lift_00533FB0
