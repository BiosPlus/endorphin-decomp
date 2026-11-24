// Lifted C++ translation unit: lifted/leaf/tiny_550000.cpp
#include "lift_compat.h"
extern "C" int mem_00957534;
extern "C" uintptr_t mem_00924FDC;
extern "C" void __fastcall ext_004026E0(void* self);
extern "C" void __fastcall ext_00406FC0(void* self);
extern "C" void __fastcall ext_0055B720(void* self);
extern "C" int mem_0095841C;
extern "C" void __fastcall ext_0065C660(void* self);

extern "C" void __fastcall ext_0065C660(void* self);
// @name sub_00552850
// @summary Stores address of mem_00957534 into field at offset +0x0.
extern "C" void __fastcall fn_00552850(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00957534;
}
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_00553750
// @summary This-adjustor thunk: adjusts `this` by +0x24 and forwards through mem_00924FDC.
extern "C" void __fastcall fn_00553750(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x24);
}

// [0x00557260] sub_00557260 (8 bytes)
// @name sub_00557260
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_004026E0.
extern "C" void __fastcall fn_00557260(void* self) {
    ext_004026E0(static_cast<char*>(self) + 0x4);
}

// [0x00557270] sub_00557270 (8 bytes)
// @name sub_00557270
// @summary This-adjustor thunk: adjusts `this` by +0xC and tail-calls sub_004026E0.
extern "C" void __fastcall fn_00557270(void* self) {
    ext_004026E0(static_cast<char*>(self) + 0xC);
}

// [0x00558A10] sub_00558A10 (8 bytes)
// @name sub_00558A10
// @summary This-adjustor thunk: adjusts `this` by +0x5C and tail-calls sub_00406FC0.
extern "C" void __fastcall fn_00558A10(void* self) {
    ext_00406FC0(static_cast<char*>(self) + 0x5C);
}

// [0x00558A20] sub_00558A20 (11 bytes)
// @name sub_00558A20
// @summary This-adjustor thunk: adjusts `this` by +0x16C and tail-calls sub_00406FC0.
extern "C" void __fastcall fn_00558A20(void* self) {
    ext_00406FC0(static_cast<char*>(self) + 0x16C);
}

// [0x0055B770] sub_0055B770 (8 bytes)
// @name sub_0055B770
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_0055B720.
extern "C" void __fastcall fn_0055B770(void* self) {
    ext_0055B720(static_cast<char*>(self) + 0x4);
}

// [0x0055D670] sub_0055D670 (11 bytes)
// @name sub_0055D670
// @summary Destructor tail-call: restores vtable mem_0095841C and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_0055D670(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0095841C;
    ext_0065C660(self);
}

// [0x00553E40] sub_00553E40 (31 bytes)
namespace lift_00553E40 {
// @name sub_00553E40
// @summary Auto-lifted identical-shape clone of 0x0051C7A0 (NMData::QuatChannel::vfunc_9).
int32_t fn_00553E40(void* self) {
    uint32_t begin = lift_field<uint32_t>(self, 0x4);
    if (begin == 0) {
        return 0;
    }
    uint32_t end = lift_field<uint32_t>(self, 0x8);
    int32_t span = static_cast<int32_t>(end - begin);
    // Compiler-emitted magic multiply (0x66666667, sar 3) computes signed /20.
    return span / 20;
}
} // namespace lift_00553E40

// [0x005528A0] sub_005528A0 (13 bytes)
namespace lift_005528A0 {
// @name SubObject::resetScaleAndIndex
// @summary Sets the float at +0x0C to 1.0f and the int32 at +0x10 to -1 on the object passed in ecx.
// @field <unknown> +0x0C float field_0x0c
// @field <unknown> +0x10 int32_t field_0x10
void fn_005528A0(void* self) {
    lift_field<int32_t>(self, 0x10) = -1;
    lift_field<float>(self, 0x0C) = 1.0f;
}
} // namespace lift_005528A0

// [0x0055DA20] sub_0055DA20 (18 bytes)
namespace lift_0055DA20 {
// @name initDwordPair
// @summary Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).
// @field DwordPair +0x00 DWORD field_0x00
// @field DwordPair +0x04 DWORD field_0x04
void fn_0055DA20(DWORD* self, DWORD a, DWORD b) {
    // mov edx,[esp+8]; mov eax,ecx; mov ecx,[esp+4]
    // mov [eax],ecx; mov [eax+4],edx; ret 8
    self[0] = a;
    self[1] = b;
}
} // namespace lift_0055DA20

// [0x00553A30] sub_00553A30 (20 bytes)
namespace lift_00553A30 {
// @name SetIndexedSlot (descriptive; owning class not yet identified)
// @class Unknown
// @summary Stores a 32-bit value into one of three slots (indices 0..2) at this+0x0C.
// @field Unknown +0x0C uint32_t field_0x0C (slot[0])
// @field Unknown +0x10 uint32_t field_0x10 (slot[1])
// @field Unknown +0x14 uint32_t field_0x14 (slot[2])
void fn_00553A30(void* self, uint32_t index, uint32_t value) {
    // Unsigned compare: indices above 2 are ignored.
    if (index <= 2) {
        lift_field<uint32_t>(self, 0x0C + static_cast<ptrdiff_t>(index) * 4) = value;
    }
}
} // namespace lift_00553A30

// [0x005539D0] sub_005539D0 (20 bytes)
namespace lift_005539D0 {
// @name ReadFloatTripleOrZero
// @class <ClassName> (optional)
// @summary Returns float element [index] of a 3-float array at self for index 0..2, else 0.0f.
// @field <ClassName> +0x00 float field_0x00
// @field <ClassName> +0x04 float field_0x04
// @field <ClassName> +0x08 float field_0x08
float fn_005539D0(const void* self, uint32_t index) {
    if (index > 2u) {
        return 0.0f;
    }
    float value;
    std::memcpy(&value, static_cast<const std::uint8_t*>(self) + 4u * index, sizeof(value));
    return value;
}
} // namespace lift_005539D0

// [0x005539B0]
namespace lift_005539B0 {
// @name GetByteTableEntryOrZero
// @summary Returns this->byte[+0x18 + index] for index 0..2, otherwise 0 (thiscall, one stack arg, ret 4).
// @field Unknown +0x18 uint8_t field_0x18 (3 bytes, indexed by 0..2)
uint8_t GetByteTableEntryOrZero(void* self, uint32_t index) {
    if (index > 2) {
        return 0;
    }
    return lift_field<uint8_t>(self, 0x18 + static_cast<ptrdiff_t>(index));
}
} // namespace lift_005539B0

// [0x005539F0] sub_005539F0 (21 bytes)
namespace lift_005539F0 {
// @name GetDwordTableEntryOrZero
// @class Unknown
// @summary Returns the DWORD at this+0x0C + 4*index for index 0..2, otherwise 0 (__thiscall, 1 stack arg).
// @field Unknown +0x0C DWORD field_0x0C
// @field Unknown +0x10 DWORD field_0x10
// @field Unknown +0x14 DWORD field_0x14
DWORD __thiscall fn_005539F0(void* self, DWORD index) {
    if (index > 2) {
        return 0;
    }
    return lift_field<DWORD>(self, 0x0C + static_cast<ptrdiff_t>(index) * 4);
}
} // namespace lift_005539F0

// [0x00553A10] sub_00553A10 (24 bytes)
namespace lift_00553A10 {
// @name SetFloatAndFlagAt
// @class Unknown
// @summary If index (0..2) is in range, stores a float into slot[index] and sets the byte flag at +0x18+index; out-of-range indices are ignored. Callee pops 8 bytes (__thiscall-style, ret 8).
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x18 uint8_t field_0x18
// @field Unknown +0x19 uint8_t field_0x19
// @field Unknown +0x1A uint8_t field_0x1A
void fn_00553A10(void* self, DWORD index, float value) {
    if (index > 2) {
        return;
    }
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + index * sizeof(float), &value, sizeof(float));
    base[0x18 + index] = 1;
}
} // namespace lift_00553A10
