// Lifted C++ translation unit: lifted/leaf/tiny_470000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x004773B0] sub_004773B0 (27 bytes)
namespace lift_004773B0 {
// Import slot holding the address of MSVCP80 std::basic_string<char>::operator=(const basic_string&).
extern uint32_t mem_00924FDC;

// @name Unknown::SetByteAndAssignString
// @class Unknown
// @summary Stores a flag byte into the owner object at self->+0x28 (+0x1C), then assigns the string argument to that owner via std::string::operator=.
// @field Unknown +0x28 void* field_0x28
// @field Unknown +0x1C uint8_t field_0x1c
void fn_004773B0(void* self, uint8_t flag, const void* rhs) {
    void* owner = lift_field<void*>(self, 0x28);
    lift_field<uint8_t>(owner, 0x1c) = flag;

    using AssignFn = void* (*)(void* thisObj, const void* src);
    auto assign = reinterpret_cast<AssignFn>(static_cast<uintptr_t>(mem_00924FDC));
    assign(owner, rhs);
}
} // namespace lift_004773B0

// [0x00476B80] sub_00476B80 (28 bytes)
namespace lift_00476B80 {
// @name sub_00476B80
// @summary Auto-lifted identical-shape clone of 0x005AC820 (Unknown::walkLinkUntilFlagSet_005AC820).
namespace lift_005AC820 {
// @name Unknown::walkLinkUntilFlagSet_005AC820
// @class Unknown
// @summary Follow the +0x08 link chain from arg until a node with byte +0x29 set is reached; returns the node whose +0x08 link leads to it (or arg itself if the first link already matches).
// @field Unknown +0x08 void* field_0x08 (next link pointer)
// @field Unknown +0x29 uint8_t field_0x29 (flag byte)

void* fn_00476B80(void* a) {
    void* eax = a;
    void* ecx = lift_field<void*>(eax, 0x08);
    if (lift_field<uint8_t>(ecx, 0x2D) != 0) {
        return eax;
    }
    do {
        eax = ecx;
        ecx = lift_field<void*>(eax, 0x08);
    } while (lift_field<uint8_t>(ecx, 0x2D) == 0);
    return eax;
}
} // namespace lift_005AC820
} // namespace lift_00476B80

// [0x00477500] sub_00477500 (29 bytes)
namespace lift_00477500 {
// @name fillFloatRange_00477500
// @summary Stores the float at *value into every 4-byte slot in [first, last); no-op if first == last.
void fn_00477500(float* first, float* last, const float* value) {
    for (float* p = first; p != last; ++p) {
        *p = *value;
    }
}
} // namespace lift_00477500

// [0x00476BA0]
namespace lift_00476BA0 {
// @name fn_00476BA0 (signed span divided by 3, zero-guarded)
// @class Unknown
// @summary Returns (field_0x08 - field_0x04) / 3 as int32, or 0 when field_0x04 is 0.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08

int32_t __fastcall fn_00476BA0(void* ecx) {
    const int32_t a = lift_field<int32_t>(ecx, 0x04);
    if (a == 0) {
        return 0;
    }
    const int32_t b = lift_field<int32_t>(ecx, 0x08);
    // Unsigned subtraction mirrors the wrapping 32-bit `sub` in the original.
    const int32_t diff = static_cast<int32_t>(static_cast<uint32_t>(b) - static_cast<uint32_t>(a));
    // Signed division by 3 (truncating toward zero), as compiled from the
    // magic-multiply sequence 0x2AAAAAAB / sar / sign-correction.
    return diff / 3;
}
} // namespace lift_00476BA0

// [0x0047FFF0]
namespace lift_0047FFF0 {
// @name InitIdentityFloats
// @summary Writes 1.0f/0.0f constants into the float block at ecx (diagonal-style init).
// @field InitIdentityFloats +0x00 float field_0x00
// @field InitIdentityFloats +0x04 float field_0x04
// @field InitIdentityFloats +0x08 float field_0x08
// @field InitIdentityFloats +0x10 float field_0x10
// @field InitIdentityFloats +0x14 float field_0x14
// @field InitIdentityFloats +0x18 float field_0x18
// @field InitIdentityFloats +0x20 float field_0x20
// @field InitIdentityFloats +0x24 float field_0x24
// @field InitIdentityFloats +0x28 float field_0x28

void InitIdentityFloats(float* self)
{
    auto* base = reinterpret_cast<unsigned char*>(self);
    auto store = [base](int off, float v) {
        *reinterpret_cast<float*>(base + off) = v;
    };

    store(0x00, 1.0f);
    store(0x04, 0.0f);
    store(0x08, 0.0f);
    store(0x10, 0.0f);
    store(0x14, 1.0f);
    store(0x18, 0.0f);
    store(0x20, 0.0f);
    store(0x24, 0.0f);
    store(0x28, 1.0f);
}
} // namespace lift_0047FFF0
