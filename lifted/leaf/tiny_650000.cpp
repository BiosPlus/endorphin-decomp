// Lifted C++ translation unit: lifted/leaf/tiny_650000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0065F2A0(void* self);
extern "C" int mem_009848CC;
extern "C" void __fastcall ext_0065C660(void* self);

extern "C" void __fastcall ext_0065C660(void* self);
// @name sub_0065ACB0
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_0065F2A0.
extern "C" void __fastcall fn_0065ACB0(void* self) {
    ext_0065F2A0(static_cast<char*>(self) + 0x4);
}
extern "C" int mem_00928E8C;
extern "C" int mem_009849C8;
extern "C" void __fastcall ext_00401BB0(void* self);

extern "C" void __fastcall ext_00401BB0(void* self);
// @name sub_0065BB60
// @summary Destructor tail-call: restores vtable mem_009848CC and tail-calls base destructor sub_0065C660.
extern "C" void __fastcall fn_0065BB60(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009848CC;
    ext_0065C660(self);
}
extern "C" int mem_0093BF24;
#include <cstring>
#include <cstdint>

// [0x0065C660] sub_0065C660 (7 bytes)
// @name sub_0065C660
// @summary Stores address of mem_00928E8C into field at offset +0x0.
extern "C" void __fastcall fn_0065C660(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00928E8C;
}

// [0x0065C7F0] sub_0065C7F0 (11 bytes)
// @name sub_0065C7F0
// @summary Destructor tail-call: restores vtable mem_009849C8 and tail-calls base destructor sub_00401BB0.
extern "C" void __fastcall fn_0065C7F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009849C8;
    ext_00401BB0(self);
}

// [0x0065F440] sub_0065F440 (7 bytes)
// @name sub_0065F440
// @summary Stores address of mem_0093BF24 into field at offset +0x0.
extern "C" void __fastcall fn_0065F440(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093BF24;
}

// [0x0065C650]
namespace lift_0065C650 {
extern void (__stdcall *mem_009241BC)(void*);

// @name CriticalSectionLock::leave
// @class CriticalSectionLock
// @summary Releases the critical section pointed to by the first field
// @field CriticalSectionLock +0x00 void* criticalSection
void __thiscall sub_0065C650(void* self) {
    mem_009241BC(*reinterpret_cast<void**>(self));
}
} // namespace lift_0065C650

// [0x0065BD80] sub_0065BD80 (22 bytes)
namespace lift_0065BD80 {
// @name Space::InitDefaults
// @class Space
// @summary Installs the Space vtable (0x009848CC) and resets fields +0x0C to 1.0f, +0x10 and +0x18 to 0.
// @field Space +0x00 uint32_t vtable
// @field Space +0x0C float field_0x0C
// @field Space +0x10 uint32_t field_0x10
// @field Space +0x18 uint32_t field_0x18
void fn_0065BD80(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x009848CC;
    lift_field<float>(self, 0x0C) = 1.0f;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
}
} // namespace lift_0065BD80

// [0x0065C320] sub_0065C320 (23 bytes)
namespace lift_0065C320 {
// @name CopyBlock64FromOffset0x0C
// @class Unknown
// @summary Copies 64 bytes (16 dwords) from self+0x0C into the caller-supplied destination buffer (thiscall, 1 stack arg, ret 4).
// @field Unknown +0x0C uint32_t[16] field_0x0C
void fn_0065C320(void* self, void* dst) {
    // rep movsd: ecx=0x10 dwords copied from [self+0x0C] to [dst].
    std::memcpy(dst, &lift_field<uint8_t>(self, 0x0C), 0x10 * sizeof(uint32_t));
}
} // namespace lift_0065C320

// [0x0065F280] sub_0065F280 (24 bytes)
namespace lift_0065F280 {
// @name CopyDwords16FromIndirectSrcToIndirectDst
// @summary Copies 16 DWORDs (64 bytes) from *src into *dst; dst comes in ECX, src is the single stack argument (ret 4).
void fn_0065F280(void** dst_holder, const void* const* src_holder) {
    // Original: mov eax,ecx; ecx=[esp+8]; esi=[ecx]; edi=[eax]; ecx=16; rep movsd
    // Copy 16 dwords from *src_holder to *dst_holder.
    std::memcpy(*dst_holder, *src_holder, 16 * sizeof(DWORD));
}
} // namespace lift_0065F280

// [0x0065B120] sub_0065B120 (28 bytes)
namespace lift_0065B120 {
// @name sub_0065B120
// @summary Auto-lifted identical-shape clone of 0x005AC820 (Unknown::walkLinkUntilFlagSet_005AC820).
namespace lift_005AC820 {
// @name Unknown::walkLinkUntilFlagSet_005AC820
// @class Unknown
// @summary Follow the +0x08 link chain from arg until a node with byte +0x29 set is reached; returns the node whose +0x08 link leads to it (or arg itself if the first link already matches).
// @field Unknown +0x08 void* field_0x08 (next link pointer)
// @field Unknown +0x29 uint8_t field_0x29 (flag byte)

void* fn_0065B120(void* a) {
    void* eax = a;
    void* ecx = lift_field<void*>(eax, 0x08);
    if (lift_field<uint8_t>(ecx, 0x11) != 0) {
        return eax;
    }
    do {
        eax = ecx;
        ecx = lift_field<void*>(eax, 0x08);
    } while (lift_field<uint8_t>(ecx, 0x11) == 0);
    return eax;
}
} // namespace lift_005AC820
} // namespace lift_0065B120

// [0x0065D0C0]
namespace lift_0065D0C0 {
// @name SetFieldAt0x130NonZero
// @summary Stores the argument at this+0x130, substituting 1 when the argument is zero (thiscall, one stack arg, ret 4).
// @field <unknown> +0x130 DWORD field_0x130

void __thiscall fn_0065D0C0(void* ecx, DWORD value) {
    DWORD& field_0x130 = lift_field<DWORD>(ecx, 0x130);
    field_0x130 = (value != 0) ? value : 1;
}
} // namespace lift_0065D0C0

// [0x0065D0A0]
namespace lift_0065D0A0 {
// @name SetFieldAt0x138PositiveOrNaNelseOne
// @summary Stores the float argument at this+0x138 if it is greater than zero or NaN, otherwise stores 1.0f (thiscall, one stack arg, ret 4).
// @field <unknown> +0x138 FLOAT field_0x138

void __thiscall fn_0065D0A0(void* ecx, FLOAT value) {
    FLOAT& field_0x138 = lift_field<FLOAT>(ecx, 0x138);
    // x87 fcom + test ah,0x41 + jp: jump (keep value) when value > 0 or unordered (NaN);
    // otherwise (value <= 0) fall through and store 1.0.
    field_0x138 = (value > 0.0f || std::isnan(value)) ? value : 1.0f;
}
} // namespace lift_0065D0A0
