// Lifted C++ translation unit: lifted/leaf/decompiled_6C0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>

#include <cstring>
namespace lift_006CA060 {
// @name sub_006CA060
// @summary Auto-lifted identical-shape clone of 0x00707980 (Unknown::NotifySlot17IfSelfLinkedWrapper).
namespace lift_00707980 {
// Known callee 0x006FA920: Unknown::NotifySlot17IfSelfLinked (If the object's field at +0x08 points back to the object itself, calls virtual slot 17 with arg 0 and returns true; otherwise returns false.)
extern bool ext_006CA020(void* self);

// @name Unknown::NotifySlot17IfSelfLinkedWrapper
// @class Unknown
// @summary Forwards its single argument to ext_006FA920 and returns that result.
bool fn_006CA060(void* self) {
    return ext_006CA020(self);
}
} // namespace lift_00707980
} // namespace lift_006CA060
#include <cstdlib>

// [0x006C3450] sub_006C3450 (32 bytes)
namespace lift_006C3450 {
// @name Unknown::GetEntryAddress
// @class Unknown
// @summary Returns the 32-bit address of entry idx in a 496-byte-stride table at this->field_0xF0 + 0x1D18.
// @field Unknown +0xF0 uint32_t field_0xF0

// Returns the guest address (32-bit value, as left in eax) of entry `idx`:
//   base = *(uint32_t*)(self + 0xF0)
//   addr = base + 0x1D18 + idx * 496      (496 = 31 * 16, computed as (idx*32 - idx) << 4)
// Arithmetic is done in uint32_t to match the original 32-bit wrap-around behavior.
extern uint32_t __fastcall fn_006C3450(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xF0);
    uint32_t stride = ((static_cast<uint32_t>(idx) << 5) - static_cast<uint32_t>(idx)) << 4;
    return base + stride + 0x1D18u;
}
} // namespace lift_006C3450

// [0x006C3470] sub_006C3470 (32 bytes)
namespace lift_006C3470 {
// @name Unknown::GetEntryAddressAlt
// @class Unknown
// @summary Returns the 32-bit address of entry idx in a 496-byte-stride table at this->field_0xF0 + 0x1D38.
// @field Unknown +0xF0 uint32_t field_0xF0

// Returns the guest address (32-bit value, as left in eax) of entry `idx`:
//   base = *(uint32_t*)(self + 0xF0)
//   addr = base + 0x1D38 + idx * 496      (496 = 31 * 16, computed as (idx*32 - idx) << 4)
// Arithmetic is done in uint32_t to match the original 32-bit wrap-around behavior.
extern uint32_t __fastcall fn_006C3470(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xF0);
    uint32_t stride = ((static_cast<uint32_t>(idx) << 5) - static_cast<uint32_t>(idx)) << 4;
    return base + stride + 0x1D38u;
}
} // namespace lift_006C3470

// [0x006C3500] sub_006C3500 (32 bytes)
namespace lift_006C3500 {
// @name sub_006C3500
// @summary Auto-lifted identical-shape clone of 0x006C3470 (Unknown::GetEntryAddressAlt).
namespace lift_006C3470 {
// @name Unknown::GetEntryAddressAlt
// @class Unknown
// @summary Returns the 32-bit address of entry idx in a 496-byte-stride table at this->field_0xF0 + 0x1D38.
// @field Unknown +0xF0 uint32_t field_0xF0

// Returns the guest address (32-bit value, as left in eax) of entry `idx`:
//   base = *(uint32_t*)(self + 0xF0)
//   addr = base + 0x1D38 + idx * 496      (496 = 31 * 16, computed as (idx*32 - idx) << 4)
// Arithmetic is done in uint32_t to match the original 32-bit wrap-around behavior.
extern uint32_t __fastcall fn_006C3500(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xF0);
    uint32_t stride = ((static_cast<uint32_t>(idx) << 5) - static_cast<uint32_t>(idx)) << 4;
    return base + stride + 0x1D78u;
}
} // namespace lift_006C3470
} // namespace lift_006C3500

// [0x006C3590] sub_006C3590 (32 bytes)
namespace lift_006C3590 {
// @name sub_006C3590
// @summary Auto-lifted identical-shape clone of 0x006C3470 (Unknown::GetEntryAddressAlt).
namespace lift_006C3470 {
// @name Unknown::GetEntryAddressAlt
// @class Unknown
// @summary Returns the 32-bit address of entry idx in a 496-byte-stride table at this->field_0xF0 + 0x1D38.
// @field Unknown +0xF0 uint32_t field_0xF0

// Returns the guest address (32-bit value, as left in eax) of entry `idx`:
//   base = *(uint32_t*)(self + 0xF0)
//   addr = base + 0x1D38 + idx * 496      (496 = 31 * 16, computed as (idx*32 - idx) << 4)
// Arithmetic is done in uint32_t to match the original 32-bit wrap-around behavior.
extern uint32_t __fastcall fn_006C3590(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xF0);
    uint32_t stride = ((static_cast<uint32_t>(idx) << 5) - static_cast<uint32_t>(idx)) << 4;
    return base + stride + 0x1D98u;
}
} // namespace lift_006C3470
} // namespace lift_006C3590

// [0x006C35B0] sub_006C35B0 (32 bytes)
namespace lift_006C35B0 {
// @name sub_006C35B0
// @summary Auto-lifted identical-shape clone of 0x006C3470 (Unknown::GetEntryAddressAlt).
namespace lift_006C3470 {
// @name Unknown::GetEntryAddressAlt
// @class Unknown
// @summary Returns the 32-bit address of entry idx in a 496-byte-stride table at this->field_0xF0 + 0x1D38.
// @field Unknown +0xF0 uint32_t field_0xF0

// Returns the guest address (32-bit value, as left in eax) of entry `idx`:
//   base = *(uint32_t*)(self + 0xF0)
//   addr = base + 0x1D38 + idx * 496      (496 = 31 * 16, computed as (idx*32 - idx) << 4)
// Arithmetic is done in uint32_t to match the original 32-bit wrap-around behavior.
extern uint32_t __fastcall fn_006C35B0(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0xF0);
    uint32_t stride = ((static_cast<uint32_t>(idx) << 5) - static_cast<uint32_t>(idx)) << 4;
    return base + stride + 0x1DD8u;
}
} // namespace lift_006C3470
} // namespace lift_006C35B0

// [0x006C9A90]
namespace lift_006C9A90 {
// @name Unknown::InitDefaults
// @class Unknown
// @summary Zeroes the 0x18-byte state block at this, stores 0.33333334f at +0x04, and returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 uint8_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint8_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14

uint8_t* sub_006C9A90(uint8_t* ecx) {
    uint8_t* self = ecx;

    const uint32_t zero = 0;
    const uint32_t third_bits = 0x3eaaaaabu;
    float third;
    std::memcpy(&third, &third_bits, sizeof(third));

    std::memcpy(self + 0x00, &zero, sizeof(zero));
    std::memcpy(self + 0x04, &third, sizeof(third));
    self[0x08] = 0;
    std::memcpy(self + 0x0C, &zero, sizeof(zero));
    self[0x10] = 0;
    std::memcpy(self + 0x14, &zero, sizeof(zero));

    return self;
}
} // namespace lift_006C9A90

// [0x006C9DA0]
namespace lift_006C9DA0 {
// @name Unknown::SetFlags0x300000
// @class Unknown
// @summary Copies bits 20-21 (0x300000) of the stack argument into the same bits of the dword at this+0x10; other bits are preserved.
// @field Unknown +0x10 uint32_t flags

struct Unknown {
    uint8_t pad_0x00[0x10];
    uint32_t flags; // +0x10
};

void Unknown_SetFlags0x300000(Unknown* self, uint32_t arg) {
    uint32_t f = self->flags;
    // ((f ^ arg) & 0x300000) ^ f  ==  f with bits 20-21 replaced by those of arg
    uint32_t edx = ((f ^ arg) & 0x300000u) ^ f;
    self->flags = edx;
}
} // namespace lift_006C9DA0

// [0x006C9D00]
namespace lift_006C9D00 {
// @name Unknown::SetBits0F00
// @class Unknown
// @summary Replaces bits 8-11 (mask 0xF00) of the dword at this+0x10 with the same bits of the stack argument; all other bits are preserved.
// @field Unknown +0x10 uint32_t field_0x10

struct Unknown {
    uint8_t pad_0x00[0x10];
    uint32_t field_0x10; // +0x10
};

// Convention: this in ECX, one stack argument, callee pops 4 bytes (ret 4).
void Unknown_SetBits0F00(Unknown* self, uint32_t arg) {
    uint32_t eax = self->field_0x10;
    // ((eax ^ arg) & 0xF00) ^ eax == eax with bits 8-11 taken from arg
    uint32_t edx = ((eax ^ arg) & 0x00000F00u) ^ eax;
    self->field_0x10 = edx;
}
} // namespace lift_006C9D00

// [0x006C59C0] sub_006C59C0 (32 bytes)
namespace lift_006C59C0 {
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t __fastcall ext_006E7460(void* self);

// @name Unknown::GetChildByIndex
// @class Unknown
// @summary Returns the int32_t result of ext_006E7460 applied to the child pointer at index in the array stored at self+0x104.
// @field Unknown +0x104 void** childArray
int32_t fn_006C59C0(void* self, uint32_t index) {
    void** children = *reinterpret_cast<void***>(static_cast<uint8_t*>(self) + 0x104);
    return ext_006E7460(children[index]);
}
} // namespace lift_006C59C0

// [0x006C9CE0]
namespace lift_006C9CE0 {
// @name Unknown::SetFlag0x100
// @class Unknown
// @summary Copies bit 8 of the stack argument into bit 8 (0x100) of the dword at this+0x10; other bits are preserved.
// @field Unknown +0x10 DWORD flags

struct Unknown {
    BYTE pad_0x00[0x10];
    DWORD flags; // +0x10
};

void Unknown_SetFlag0x100(Unknown* self, DWORD arg) {
    DWORD f = self->flags;
    // ((f ^ arg) & 0x100) ^ f  ==  f with bit 8 replaced by bit 8 of arg
    DWORD edx = ((f ^ arg) & 0x100u) ^ f;
    self->flags = edx;
}
} // namespace lift_006C9CE0

// [0x006C9F00]
namespace lift_006C9F00 {
// @name Unknown::GetField0x08Pair
// @class Unknown
// @summary Copies the two DWORDs at this+0x08 and this+0x0C into the caller-supplied out buffer and returns it (thiscall, hidden out pointer, ret 4).
// @field Unknown +0x08 DWORD field_0x08
// @field Unknown +0x0C DWORD field_0x0C
DWORD* fn_006C9F00(BYTE* self, DWORD* out) {
    out[0] = *reinterpret_cast<DWORD*>(self + 0x08);
    out[1] = *reinterpret_cast<DWORD*>(self + 0x0C);
    return out;
}
} // namespace lift_006C9F00

// [0x006CA2D0] sub_006CA2D0 (32 bytes)
namespace lift_006CA2D0 {
// @name CopyTriplet_ToOffset08
// @summary If src is non-null, copy three 32-bit words from *src into self+0x08 (thiscall, one stack arg, ret 4).
void fn_006CA2D0(void* self, const uint32_t* src) {
    if (src == nullptr) {
        return;
    }
    lift_field<uint32_t>(self, 0x08) = src[0];
    lift_field<uint32_t>(self, 0x0C) = src[1];
    lift_field<uint32_t>(self, 0x10) = src[2];
}
} // namespace lift_006CA2D0

// [0x006CE080] sub_006CE080 (32 bytes)
namespace lift_006CE080 {
namespace lift_006CE080 {
// @name Unknown::SetValues0x48
// @class Unknown
// @summary Stores two dwords and one double-as-float into this at +0x48, +0x4C, +0x50; returns 0 (ret 0x10).
// @field Unknown +0x48 uint32_t field_0x48
// @field Unknown +0x4C uint32_t field_0x4C
// @field Unknown +0x50 float field_0x50

// Guest calling convention: thiscall (this in ecx), 16 bytes of stack args (ret 0x10):
//   arg1 = [esp+4]  (uint32)
//   arg2 = [esp+8]  (uint32)
//   arg3 = [esp+12] (double, 8 bytes; loaded with fld qword and stored with fstp dword,
//                    i.e. narrowed to float32)
// Returns 0 in eax.
extern uint32_t __thiscall fn_006CE080(void* self, uint32_t arg1, uint32_t arg2, double arg3) {
    uint8_t* p = static_cast<uint8_t*>(self);
    std::memcpy(p + 0x48, &arg1, sizeof(uint32_t));
    std::memcpy(p + 0x4C, &arg2, sizeof(uint32_t));
    float f = static_cast<float>(arg3);
    std::memcpy(p + 0x50, &f, sizeof(float));
    return 0;
}
} // namespace lift_006CE080
} // namespace lift_006CE080

// [0x006CA6B0] sub_006CA6B0 (32 bytes)
namespace lift_006CA6B0 {
// Callee: 0x006CA060 (identical-shape clone of 0x00707980, Unknown::NotifySlot17IfSelfLinkedWrapper).
// Used here as a source-pointer provider: its return value is the address of a 40-byte block.
extern void* ext_006CA060(void* self);

// @name CopyTenDwordsFromResolved
// @summary Resolve a source block via ext_006CA060(arg2), then copy 10 dwords (40 bytes) into arg1 (stdcall, ret 8).
void fn_006CA6B0(void* dst, void* self) {
    const void* src = ext_006CA060(self);
    // rep movsd, ecx = 10: copy 10 * 4 bytes from src to dst.
    std::memcpy(dst, src, 10 * sizeof(uint32_t));
}
} // namespace lift_006CA6B0

// [0x006CE0A0] sub_006CE0A0 (32 bytes)
namespace lift_006CE0A0 {
// @name Unknown::IsNotSentinel48
// @class Unknown
// @summary Returns 0 when the qword at +0x48 is the sentinel (-1, 0x7FFFFFFF); otherwise 1.
// @field Unknown +0x48 uint32_t field_0x48
// @field Unknown +0x4C uint32_t field_0x4C
int fn_006CE0A0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    uint32_t lo = *reinterpret_cast<uint32_t*>(base + 0x48);
    if (lo != 0xFFFFFFFFu) {
        return 1;
    }
    uint32_t hi = *reinterpret_cast<uint32_t*>(base + 0x4C);
    if (hi == 0x7FFFFFFFu) {
        return 0;
    }
    return 1;
}
} // namespace lift_006CE0A0

// [0x006CA4F0] sub_006CA4F0 (16 bytes)
namespace lift_006CA4F0 {
// @name sub_006CA4F0
// @summary Auto-lifted identical-shape clone of 0x00711A90 (Unknown::TestFlag0x08At0x78).
namespace lift_00711A90 {
// Known callee 0x00711D20: Unknown::TestMaskedFieldAt0x78 (Returns true when (this->field_0x78 & mask) is nonzero, else false.)
extern bool ext_006D0370(void* self, DWORD mask);

// @name Unknown::TestFlag0x08At0x78
// @class Unknown
// @summary Tests bit 0x08 of the flags word at this+0x78 by tail-forwarding to TestMaskedFieldAt0x78 and returns its result.
bool fn_006CA4F0(void* self) {
    return ext_006D0370(self, 0x0u);
}
} // namespace lift_00711A90
} // namespace lift_006CA4F0

// [0x006C1BB0] sub_006C1BB0 (36 bytes)
namespace lift_006C1BB0 {
extern char mem_00AA8C8C[];
extern char mem_00AA8C94[];

// @name SelectRrSsOrRrsString
// @class <ClassName> (optional)
// @summary Maps selector 0/1 to "RrSs", 2 to "Rrs", and anything else to null.
// @field <ClassName> +0x00 <type> <fieldName>
const char* fn_006C1BB0(uint32_t selector) {
    switch (selector) {
        case 0:
        case 1:
            return mem_00AA8C8C;
        case 2:
            return mem_00AA8C94;
        default:
            return nullptr;
    }
}
} // namespace lift_006C1BB0

// [0x006C0470]
namespace lift_006C0470 {
// @name isKnownGlobalHandle
// @summary Checks whether the given 32-bit value matches one of three global values.


extern uint32_t mem_00B5F060;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

uint8_t __stdcall sub_006C0470(uint32_t arg0) {
    if (arg0 == mem_00B5F060) {
        return 1;
    }
    if (arg0 == mem_00B5EB78) {
        return 1;
    }
    return (arg0 == mem_00B5E400) ? 1 : 0;
}
} // namespace lift_006C0470

// [0x006C9A60]
namespace lift_006C9A60 {
// @name RangeTracker::update
// @class RangeTracker
// @summary ORs a mask into flags, increments count, and widens the min/max range with a new value (min sentinel -1 means unset).
// @field RangeTracker +0x00 uint32_t flags
// @field RangeTracker +0x08 int32_t minValue
// @field RangeTracker +0x0C int32_t maxValue
// @field RangeTracker +0x10 int32_t count

struct RangeTracker {
    uint32_t flags;      // +0x00
    uint32_t field_0x04; // +0x04
    int32_t  minValue;   // +0x08
    int32_t  maxValue;   // +0x0C
    int32_t  count;      // +0x10

    void update(uint32_t mask, int32_t value);
};

void RangeTracker::update(uint32_t mask, int32_t value) {
    flags |= mask;
    count++;
    if (value < minValue || minValue == -1) {
        minValue = value;
    }
    if (value > maxValue) {
        maxValue = value;
    }
}
} // namespace lift_006C9A60

// [0x006C2CB0]
namespace lift_006C2CB0 {
// @name ForwardOffsetFieldToCalleeReturnArg
// @summary Passes (self + 0x118) to ext_006D2390 with arg1 as its this pointer, then returns arg1.
// @field unknown +0x118 uint8_t field_0x118


extern void* ext_006D2390(void* self, uint32_t arg1);

void* fn_006C2CB0(void* self, void* arg1) {
    uint32_t field_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(static_cast<uint8_t*>(self) + 0x118));
    ext_006D2390(arg1, field_ptr);
    return arg1;
}
} // namespace lift_006C2CB0

// [0x006C2E30] sub_006C2E30 (48 bytes)
namespace lift_006C2E30 {
// @name sub_006C2E30
// @summary Auto-lifted identical-shape clone of 0x006C2CB0 (ForwardOffsetFieldToCalleeReturnArg).
namespace lift_006C2CB0 {
// @name ForwardOffsetFieldToCalleeReturnArg
// @summary Passes (self + 0x118) to ext_006D2390 with arg1 as its this pointer, then returns arg1.
// @field unknown +0x118 uint8_t field_0x118


extern void* ext_006D2390(void* self, uint32_t arg1);

void* fn_006C2E30(void* self, void* arg1) {
    uint32_t field_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(static_cast<uint8_t*>(self) + 0x138));
    ext_006D2390(arg1, field_ptr);
    return arg1;
}
} // namespace lift_006C2CB0
} // namespace lift_006C2E30

// [0x006C33F0] sub_006C33F0 (48 bytes)
namespace lift_006C33F0 {
// @name Unknown::setTableEntryByte
// @class Unknown
// @summary Stores a byte into a 496-byte-stride table entry: table[index * 496 + 0x1E7C] = value.
// @field Unknown +0xF0 void* tablePtr
void fn_006C33F0(void* self, uint32_t index, uint8_t value) {
    uint32_t stride = index * 31u;          // (index << 5) - index
    uint32_t offset = stride << 4;          // * 16 -> index * 496
    uint8_t* table = lift_field<uint8_t*>(self, 0xF0);
    lift_field<uint8_t>(table + offset, 0x1E7C) = value;
}
} // namespace lift_006C33F0

// [0x006C3040]
namespace lift_006C3040 {
// @name getValidatedChild0x158
// @summary Returns the child object at +0x158 if non-null and its vtable[0]() returns 1, else 0.
// @field Unknown +0x158 uint32_t field_0x158


extern uint32_t mem_u32(uint32_t addr);

uint32_t sub_006C3040(uint32_t self) {
    uint32_t obj = mem_u32(self + 0x158);
    if (obj != 0) {
        uint32_t vtable = mem_u32(obj);
        using Vfn0 = uint32_t(__thiscall*)(uint32_t);
        auto fn = reinterpret_cast<Vfn0>(static_cast<uintptr_t>(mem_u32(vtable)));
        if (fn(obj) == 1) {
            return mem_u32(self + 0x158);
        }
    }
    return 0;
}
} // namespace lift_006C3040

// [0x006C33C0]
namespace lift_006C33C0 {
// @name Unknown::loadRecordDwordByIndex
// @class Unknown
// @summary Computes index * 496 (index*31*16), adds the base pointer stored at +0xF0 and the constant 0x1E78, loads a dword from that address, and writes it through the out-pointer.
// @field Unknown +0xf0 uint32_t field_0xf0
void __thiscall fn_006C33C0(void* self, uint32_t index, uint32_t* out) {
    uint32_t scaled = index * 496u;                                   // (index << 5) - index, then << 4
    uint32_t base = lift_field<uint32_t>(self, 0xf0);
    uint32_t addr = base + scaled + 0x1E78u;
    uint32_t value = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(addr));
    *out = value;
}
} // namespace lift_006C33C0

// [0x006C30F0]
namespace lift_006C30F0 {
// @name sub_006C30F0
// @summary Returns field_0x158 if non-null and its vtable[0]() returns 4, else 0
// @field Unknown +0x158 uint32_t field_0x158


extern uint32_t mem_read32(uint32_t addr);

uint32_t __fastcall sub_006C30F0(uint32_t this_ptr, uint32_t /*edx*/) {
    uint32_t obj = mem_read32(this_ptr + 0x158);
    if (obj != 0) {
        uint32_t vtable = mem_read32(obj);
        typedef uint32_t(__fastcall * vfn_t)(uint32_t, uint32_t);
        vfn_t fn = reinterpret_cast<vfn_t>(static_cast<uintptr_t>(mem_read32(vtable)));
        if (fn(obj, 0) == 4) {
            return mem_read32(this_ptr + 0x158);
        }
    }
    return 0;
}
} // namespace lift_006C30F0

// [0x006C3070]
namespace lift_006C3070 {
// @name sub_006C3070
// @class UnknownClass
// @summary Returns field_0x158 if non-null and its vtable[0]() returns 2, else 0.
// @field UnknownClass +0x158 uint32_t field_0x158
uint32_t __thiscall sub_006C3070(uintptr_t self) {
    uint32_t obj = *reinterpret_cast<uint32_t*>(self + 0x158);
    if (obj != 0) {
        uint32_t vtable = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj));
        using vfn0_t = uint32_t(__thiscall*)(uintptr_t);
        auto vfn0 = reinterpret_cast<vfn0_t>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vtable))));
        if (vfn0(static_cast<uintptr_t>(obj)) == 2) {
            return *reinterpret_cast<uint32_t*>(self + 0x158);
        }
    }
    return 0;
}
} // namespace lift_006C3070

// [0x006C3120]
namespace lift_006C3120 {
// @name sub_006C3120
// @summary Returns field_0x158 if non-null and its vtable[0]() returns 5, otherwise 0.
// @field unknown +0x158 uint32_t field_0x158


uint32_t mem_u32(uint32_t);

uint32_t __thiscall sub_006C3120(uint32_t this_ptr) {
    uint32_t obj = mem_u32(this_ptr + 0x158);
    if (obj == 0) {
        return 0;
    }
    uint32_t vtable = mem_u32(obj);
    uint32_t vfn = mem_u32(vtable);
    using Vfn0 = uint32_t(__thiscall*)(uint32_t);
    if (reinterpret_cast<Vfn0>(vfn)(obj) == 5) {
        return mem_u32(this_ptr + 0x158);
    }
    return 0;
}
} // namespace lift_006C3120

// [0x006C3EE0]
namespace lift_006C3EE0 {
// @name scaleVec3ToOut
// @summary out[i] = in[i] * scalar for i in 0..2 (three doubles); cdecl, args: out, in, scalar
// @field Vec3d +0x00 double x
// @field Vec3d +0x08 double y
// @field Vec3d +0x10 double z

void fn_006C3EE0(double* out, const double* in, double scalar) {
    out[0] = scalar * in[0];
    out[1] = scalar * in[1];
    out[2] = scalar * in[2];
}
} // namespace lift_006C3EE0

// [0x006C9D30]
namespace lift_006C9D30 {
// @name Unknown::setMaskedBitsField10
// @class Unknown
// @summary Replaces the bits of this+0x10 selected by (arg2 & 0x3000000) with the same bits of arg1; other bits are kept.
// @field Unknown +0x10 uint32_t field_0x10


struct Unknown;

// thiscall-style: ecx = this, two stack args, ret 8
uint32_t Unknown_setMaskedBitsField10(Unknown* self, uint32_t value, uint32_t flags) {
    const uint32_t mask = flags & 0x3000000u;
    uint32_t* field = reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x10);
    uint32_t cur = *field;
    uint32_t result = (cur & ~mask) | (value & mask);
    *field = result;
    return result;
}
} // namespace lift_006C9D30

// [0x006C3150]
namespace lift_006C3150 {
// @name sub_006C3150
// @summary Returns field_0x158 if non-null and its vtable[0]() returns 6, else 0
// @field Unknown +0x158 uint32_t field_0x158


extern uint32_t mem_r32(uint32_t addr);

uint32_t __thiscall sub_006C3150(uint32_t this_ptr) {
    uint32_t obj = mem_r32(this_ptr + 0x158);
    if (obj != 0) {
        uint32_t vtable = mem_r32(obj);
        uint32_t fn = mem_r32(vtable);
        using VFunc0 = uint32_t(__thiscall*)(uint32_t);
        if (reinterpret_cast<VFunc0>(static_cast<uintptr_t>(fn))(obj) == 6) {
            return mem_r32(this_ptr + 0x158);
        }
    }
    return 0;
}
} // namespace lift_006C3150

// [0x006CA090]
namespace lift_006CA090 {
// @name sub_006CA090
// @summary Conditionally subtracts a size from the global counter mem_00B5D768 and frees the pointer.
extern int32_t mem_00B5D768;

void sub_006CA090(void* ptr, int32_t size) {
    if (ptr != nullptr) {
        mem_00B5D768 -= size;
    }
    std::free(ptr);
}
} // namespace lift_006CA090

// [0x006C9D70]
namespace lift_006C9D70 {
// @name Unknown::mergeMaskedBitsField10
// @class Unknown
// @summary Replaces bits 28-29 (mask 0x30000000) of field +0x10 with the same bits from the first argument, selected by the second argument's mask bits.
// @field Unknown +0x10 uint32_t field_0x10

struct Unknown {
    uint8_t pad_0000[0x10];
    uint32_t field_0x10; // @field Unknown +0x10 uint32_t field_0x10
};

void Unknown_mergeMaskedBitsField10(Unknown* self, uint32_t value, uint32_t maskSource) {
    uint32_t mask = maskSource & 0x30000000u;
    uint32_t kept = self->field_0x10 & ~mask;
    uint32_t incoming = value & mask;
    self->field_0x10 = kept | incoming;
}
} // namespace lift_006C9D70

// [0x006C9F20]
namespace lift_006C9F20 {
// @name Unknown::setBits16to19Field10
// @class Unknown
// @summary Sets the 4-bit value at bits 16..19 of field +0x10 to 1 if flag is nonzero, else 0.
// @field Unknown +0x10 uint32_t field_0x10
void fn_006C9F20(void* self, uint8_t flag) {
    uint32_t& field = lift_field<uint32_t>(self, 0x10);
    if (flag != 0) {
        field = (field & ~0x000E0000u) | 0x00010000u;
    } else {
        field = field & ~0x000F0000u;
    }
}
} // namespace lift_006C9F20

// [0x006C9DC0] sub_006C9DC0 (48 bytes)
namespace lift_006C9DC0 {
namespace lift_006C9DC0 {
// @name Unknown::GetScaledOrRawValue
// @class Unknown
// @summary For idx < 2 returns the float at this+0x14+4*idx; otherwise returns int16 at this+0x18+2*idx scaled by 0.00010001f.
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x1C int16_t field_0x1C (int16 array; element idx at +0x18+2*idx for idx >= 2)

extern const float mem_0099381C;

// Original: __thiscall-style (ecx = this, one stack arg), `ret 4`.
//   if (idx < 2) return *(float*)(this + 0x14 + 4*idx);
//   else         return (float)*(int16_t*)(this + 0x18 + 2*idx) * mem_0099381C;
extern float __fastcall fn_006C9DC0(void* self, int edx_unused, int32_t idx) {
    (void)edx_unused;
    uint8_t* base = static_cast<uint8_t*>(self);
    if (idx < 2) {
        return lift_field<float>(base, 0x14 + static_cast<ptrdiff_t>(idx) * 4);
    }
    int16_t raw = lift_field<int16_t>(base, 0x18 + static_cast<ptrdiff_t>(idx) * 2);
    return static_cast<float>(raw) * mem_0099381C;
}
} // namespace lift_006C9DC0
} // namespace lift_006C9DC0

// [0x006C3360]
namespace lift_006C3360 {
// @name sub_006C3360
// @class Unknown
// @summary Sets a 32-bit field at offset 0x1f04 in an indexed 0x1f0-byte entry of the subobject at this+0xf0
// @field Unknown +0xf0 uint32_t field_0xf0
void __thiscall sub_006C3360(void* self, uint32_t index, uint32_t value) {
    uint8_t* base = *reinterpret_cast<uint8_t**>(reinterpret_cast<uint8_t*>(self) + 0xf0);
    uint32_t offset = index * 0x1f0u + 0x1f04u;
    *reinterpret_cast<uint32_t*>(base + offset) = value;
}
} // namespace lift_006C3360

// [0x006C31B0]
namespace lift_006C31B0 {
uint32_t mem_r32(uint32_t);

// @name getTypedChildIfType8
// @summary Returns field_0x158 if non-null and its vtable[0]() returns 8, otherwise 0.
// @field Unknown +0x158 uint32_t field_0x158
uint32_t __thiscall sub_006C31B0(uint32_t self) {
    uint32_t obj = mem_r32(self + 0x158);
    if (obj != 0) {
        uint32_t vtbl = mem_r32(obj);
        uint32_t fn = mem_r32(vtbl);
        using vfn_t = uint32_t(__thiscall*)(uint32_t);
        if (reinterpret_cast<vfn_t>(fn)(obj) == 8) {
            return mem_r32(self + 0x158);
        }
    }
    return 0;
}
} // namespace lift_006C31B0

// [0x006C31E0]
namespace lift_006C31E0 {
// @name sub_006C31E0
// @summary Returns field_0x158 if non-null and its vtable[0]() returns 9, otherwise 0.
// @field Unknown +0x158 uint32_t field_0x158


uint32_t sub_006C31E0(uint32_t ecx) {
    uint32_t obj = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(ecx + 0x158));
    if (obj == 0) {
        return 0;
    }
    uint32_t vtable = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj));
    uint32_t fn = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vtable));
    using VFn0 = uint32_t(*)(uint32_t);
    uint32_t res = reinterpret_cast<VFn0>(static_cast<uintptr_t>(fn))(obj);
    if (res != 9) {
        return 0;
    }
    return *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(ecx + 0x158));
}
} // namespace lift_006C31E0

// [0x006C3180]
namespace lift_006C3180 {
// @name getTypedChild_0x158
// @summary Returns the sub-object at +0x158 if non-null and its vtable[0] returns 7, otherwise 0.
// @field Unknown +0x158 uint32_t field_0x158


extern uint32_t mem_read32(uintptr_t addr);

uint32_t __thiscall fn_006C3180(void* self) {
    uintptr_t base = reinterpret_cast<uintptr_t>(self);
    uint32_t obj = mem_read32(base + 0x158);
    if (obj != 0) {
        uint32_t vtbl = mem_read32(obj);
        uint32_t fn_addr = mem_read32(vtbl);
        using vfn0_t = uint32_t(__thiscall*)(uint32_t);
        uint32_t res = reinterpret_cast<vfn0_t>(static_cast<uintptr_t>(fn_addr))(obj);
        if (res == 7) {
            return mem_read32(base + 0x158);
        }
    }
    return 0;
}
} // namespace lift_006C3180

// [0x006C3390]
namespace lift_006C3390 {
uint32_t& mem_u32(uintptr_t);

// @name sub_006C3390
// @summary Sets a 32-bit field at offset 0x1e78 in an array of 496-byte entries pointed to by this+0xf0.
// @field this +0xf0 uint32_t field_0xf0

void __thiscall sub_006C3390(uintptr_t self, uint32_t index, uint32_t value) {
    uint32_t base = mem_u32(self + 0xf0);
    mem_u32(base + index * 496u + 0x1e78u) = value;
}
} // namespace lift_006C3390

// [0x006C04D0]
namespace lift_006C04D0 {
extern uint32_t mem_00B5D448;
extern uint32_t mem_00B5F060;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

// @name isKnownGlobalHandle
// @summary Checks whether the argument matches any of four global values.
uint8_t __stdcall sub_006C04D0(uint32_t value) {
    if (value == mem_00B5D448) {
        return 1;
    }
    if (value == mem_00B5F060) {
        return 1;
    }
    if (value == mem_00B5EB78) {
        return 1;
    }
    return value == mem_00B5E400 ? 1 : 0;
}
} // namespace lift_006C04D0

// [0x006C8E60]
namespace lift_006C8E60 {
// @name initHugeBounds
// @summary Initializes three 64-bit double globals from MSVCR80.dll!_HUGE.


extern uint32_t mem_00925284;
extern uint32_t mem_00B5D5F0;
extern uint32_t mem_00B5D5F4;
extern uint32_t mem_00B5D5F8;
extern uint32_t mem_00B5D5FC;
extern uint32_t mem_00B5D600;
extern uint32_t mem_00B5D604;

void __cdecl sub_006C8E60() {
    uint32_t* huge_ptr = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    uint32_t lo = huge_ptr[0];
    uint32_t hi = huge_ptr[1];
    mem_00B5D5F0 = lo;
    mem_00B5D5F4 = hi;
    mem_00B5D5F8 = lo;
    mem_00B5D5FC = hi;
    mem_00B5D600 = lo;
    mem_00B5D604 = hi;
}
} // namespace lift_006C8E60

// [0x006CA020] sub_006CA020 (64 bytes)
namespace lift_006CA020 {
// @name Unknown::getEntryPtr
// @class Unknown
// @summary Returns self->field_0x20[n / 100] + 40 * (n % 25), using signed division/modulo on the int argument n.
// @field Unknown +0x20 void** field_0x20
void* fn_006CA020(void* self, int n) {
    void** table = *reinterpret_cast<void***>(static_cast<unsigned char*>(self) + 0x20);
    unsigned char* base = static_cast<unsigned char*>(table[n / 100]);
    return base + 40 * (n % 25);
}
} // namespace lift_006CA020

// [0x006CC6B0] sub_006CC6B0 (64 bytes)
namespace lift_006CC6B0 {
// Known callee 0x006C9D20: Unknown::GetMaskedFlags18 (Returns the bits 0x03000000 of the DWORD at this+0x10.)
extern uint32_t ext_006C9D20(void* self);
// Known callee 0x006CA060: sub_006CA060 (Auto-lifted identical-shape clone of 0x00707980 (Unknown::NotifySlot17IfSelfLinkedWrapper).)
// Takes one stack argument (ret 4) and returns a pointer.
extern void* ext_006CA060(void* self, int32_t arg);

// @name CheckCountedSelfFlag18
// @summary For count > 0, resolve a pointer via ext_006CA060(self, count-1), call ext_006CA060(self, count) for its side effect, then return whether bit 0x02000000 of ext_006C9D20(ptr) is set; returns false when count <= 0.
bool fn_006CC6B0(void* self, int32_t count) {
    if (count <= 0) {
        return false;
    }
    void* ptr = ext_006CA060(self, count - 1);
    ext_006CA060(self, count);  // result discarded
    uint32_t flags = ext_006C9D20(ptr);
    return (flags & 0x02000000u) != 0;
}
} // namespace lift_006CC6B0

// [0x006CC950] sub_006CC950 (64 bytes)
namespace lift_006CC950 {
// Known callee 0x006CA060: sub_006CA060 (Auto-lifted identical-shape clone of 0x00707980 (Unknown::NotifySlot17IfSelfLinkedWrapper).)
// Machine code: receiver in ecx, one stack argument (ret 4). Returns a pointer in eax, used below as a receiver.
extern void* ext_006CA060(void* self, int32_t arg);
// Known callee 0x006C9D60: Unknown::GetMaskedFlags30 (Returns the bits 28-29 (mask 0x30000000) of the dword at this+0x10.)
extern uint32_t ext_006C9D60(void* self);

// @name Unknown::HasFlag29OfFirstOfRange
// @class Unknown
// @summary For count > 0, resolves the element at (count - 1) and the element at count via ext_006CA060, then returns true if bit 29 (0x20000000) of ext_006C9D60(first) is set; false for count <= 0.
bool fn_006CC950(void* self, int32_t count) {
    if (count <= 0) {
        return false;
    }

    // Call order matches the original: element (count - 1) first, then element (count).
    void* first = ext_006CA060(self, count - 1);
    (void)ext_006CA060(self, count);

    const uint32_t flags = ext_006C9D60(first);
    return (flags & 0x20000000u) != 0;
}
} // namespace lift_006CC950

// [0x006CC810]
namespace lift_006CC810 {
// @name Unknown::GetCountedFlagScaledValue
// @class Unknown
// @summary If the counted self-flag check passes for count, return the scaled int16 value (index 3) of the element resolved at count-1; otherwise return the constant 1/3.

extern bool ext_006CC6B0(void* self, int32_t count);
extern void* ext_006CA060(void* self, int32_t count);
extern float ext_006C9DC0(void* self, int32_t edx_unused, int32_t idx);

float fn_006CC810(void* self, int32_t count) {
    if (ext_006CC6B0(self, count)) {
        void* ptr = ext_006CA060(self, count - 1);
        return ext_006C9DC0(ptr, 0, 3);
    }
    return 0.33333334f;
}
} // namespace lift_006CC810

// [0x006CCAB0] sub_006CCAB0 (64 bytes)
namespace lift_006CCAB0 {
// Known callee 0x006CC950: Unknown::HasFlag29OfFirstOfRange (For count > 0, resolves the element at (count - 1) and the element at count via ext_006CA060, then returns true if bit 29 (0x20000000) of ext_006C9D60(first) is set; false for count <= 0.)
// Original: __fastcall-style (ecx = self, one stack arg), `ret 4`.
extern bool __fastcall ext_006CC950(void* self, int edx_unused, int32_t count);

// Known callee 0x006CA060: sub_006CA060 (returns the element pointer in eax for index idx).
// Original: ecx = self, one stack arg (idx); result returned in eax.
extern void* __fastcall ext_006CA060(void* self, int edx_unused, int32_t idx);

// Known callee 0x006C9DC0: Unknown::GetScaledOrRawValue (For idx < 2 returns the float at this+0x14+4*idx; otherwise returns int16 at this+0x18+2*idx scaled by 0.00010001f.)
// Original: __fastcall-style (ecx = self, one stack arg), `ret 4`.
extern float __fastcall ext_006C9DC0(void* self, int edx_unused, int32_t idx);

// @name Unknown::GetScaledValueOfPrevElementIfFlagged
// @class Unknown
// @summary If HasFlag29OfFirstOfRange(count) is set, returns GetScaledOrRawValue(element at count-1, 5); otherwise returns 0.0f.
float __fastcall fn_006CCAB0(void* self, int edx_unused, int32_t count) {
    (void)edx_unused;
    if (!ext_006CC950(self, 0, count)) {
        return 0.0f;
    }
    void* element = ext_006CA060(self, 0, count - 1);
    return ext_006C9DC0(element, 0, 5);
}
} // namespace lift_006CCAB0

// [0x006C0580] sub_006C0580 (74 bytes)
namespace lift_006C0580 {
// @name Unknown::CopyBlock1E8ToOut_006C0580
// @class Unknown
// @summary Copies five dwords from self+0x1E8..0x1F8 and self+0x1FC into out, sets out+0x18 to double 1.0, returns out.
// @field Unknown +0x1E8 uint32_t field_0x1E8
// @field Unknown +0x1EC uint32_t field_0x1EC
// @field Unknown +0x1F0 uint32_t field_0x1F0
// @field Unknown +0x1F4 uint32_t field_0x1F4
// @field Unknown +0x1F8 uint32_t field_0x1F8
// @field Unknown +0x1FC uint32_t field_0x1FC
void* fn_006C0580(void* self, void* out) {
    auto* src = static_cast<uint8_t*>(self);
    auto* dst = static_cast<uint8_t*>(out);

    uint32_t v;
    std::memcpy(&v, src + 0x1E8, sizeof(v));
    std::memcpy(dst + 0x00, &v, sizeof(v));
    std::memcpy(&v, src + 0x1EC, sizeof(v));
    std::memcpy(dst + 0x04, &v, sizeof(v));
    std::memcpy(&v, src + 0x1F0, sizeof(v));
    std::memcpy(dst + 0x08, &v, sizeof(v));
    std::memcpy(&v, src + 0x1F4, sizeof(v));
    std::memcpy(dst + 0x0C, &v, sizeof(v));
    std::memcpy(&v, src + 0x1F8, sizeof(v));
    std::memcpy(dst + 0x10, &v, sizeof(v));
    std::memcpy(&v, src + 0x1FC, sizeof(v));
    std::memcpy(dst + 0x14, &v, sizeof(v));

    const uint32_t zero = 0x00000000u;
    const uint32_t one_hi = 0x3FF00000u; // high dword of IEEE-754 double 1.0
    std::memcpy(dst + 0x18, &zero, sizeof(zero));
    std::memcpy(dst + 0x1C, &one_hi, sizeof(one_hi));

    return out;
}
} // namespace lift_006C0580

// [0x006C0730] sub_006C0730 (74 bytes)
namespace lift_006C0730 {
// @name Unknown::CopyStateTo_006C0730
// @class Unknown
// @summary Copies five dwords and one dword from self into the output record, then writes the constant double 1.0 at +0x18.
// @field Unknown +0x3c8 uint32_t field_0x3c8
// @field Unknown +0x3cc uint32_t field_0x3cc
// @field Unknown +0x3d0 uint32_t field_0x3d0
// @field Unknown +0x3d4 uint32_t field_0x3d4
// @field Unknown +0x3d8 uint32_t field_0x3d8
// @field Unknown +0x3dc uint32_t field_0x3dc
void fn_006C0730(void* self, void* out) {
    // out[0x00..0x10] <- self[0x3c8..0x3d8]
    lift_field<uint32_t>(out, 0x00) = lift_field<uint32_t>(self, 0x3c8);
    lift_field<uint32_t>(out, 0x04) = lift_field<uint32_t>(self, 0x3cc);
    lift_field<uint32_t>(out, 0x08) = lift_field<uint32_t>(self, 0x3d0);
    lift_field<uint32_t>(out, 0x0c) = lift_field<uint32_t>(self, 0x3d4);
    lift_field<uint32_t>(out, 0x10) = lift_field<uint32_t>(self, 0x3d8);
    // out[0x14] <- self[0x3dc]
    lift_field<uint32_t>(out, 0x14) = lift_field<uint32_t>(self, 0x3dc);
    // out[0x18] (double 1.0): low dword 0, high dword 0x3ff00000
    lift_field<uint32_t>(out, 0x18) = 0x00000000u;
    lift_field<uint32_t>(out, 0x1c) = 0x3ff00000u;
}
} // namespace lift_006C0730

// [0x006C0610]
namespace lift_006C0610 {
// @name CopySnapshotWithUnitWeight_006C0610
// @class Unknown
// @summary Copies six dwords from self+0x288..+0x29c into out[0..0x14], then writes 0 at out+0x18 and the double 1.0 at out+0x18 (high dword at out+0x1c).
// @field Unknown +0x288 uint32_t field_0x288
// @field Unknown +0x28c uint32_t field_0x28c
// @field Unknown +0x290 uint32_t field_0x290
// @field Unknown +0x294 uint32_t field_0x294
// @field Unknown +0x298 uint32_t field_0x298
// @field Unknown +0x29c uint32_t field_0x29c
void fn_006C0610(void* self, void* out) {
    uint8_t* src = static_cast<uint8_t*>(self);
    uint8_t* dst = static_cast<uint8_t*>(out);

    uint32_t v[6];
    std::memcpy(v, src + 0x288, sizeof(v));

    std::memcpy(dst + 0x00, &v[0], sizeof(uint32_t));
    std::memcpy(dst + 0x04, &v[1], sizeof(uint32_t));
    std::memcpy(dst + 0x08, &v[2], sizeof(uint32_t));
    std::memcpy(dst + 0x0c, &v[3], sizeof(uint32_t));
    std::memcpy(dst + 0x10, &v[4], sizeof(uint32_t));
    std::memcpy(dst + 0x14, &v[5], sizeof(uint32_t));

    const double one = 1.0;
    uint32_t zero = 0;
    std::memcpy(dst + 0x18, &zero, sizeof(uint32_t));
    std::memcpy(dst + 0x1c, reinterpret_cast<const uint8_t*>(&one) + 4, sizeof(uint32_t));
}
} // namespace lift_006C0610

// [0x006C06A0] sub_006C06A0 (74 bytes)
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C06A0(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x328, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x32C, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x330, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x334, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x338, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x33C, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0

// [0x006C07C0] sub_006C07C0 (74 bytes)
namespace lift_006C07C0 {
// @name sub_006C07C0
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C07C0(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x468, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x46C, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x470, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x474, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x478, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x47C, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C07C0

// [0x006C0850] sub_006C0850 (74 bytes)
namespace lift_006C0850 {
// @name sub_006C0850
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C0850(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x508, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x50C, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x510, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x514, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x518, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x51C, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C0850

// [0x006C0900] sub_006C0900 (74 bytes)
namespace lift_006C0900 {
// @name sub_006C0900
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C0900(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x630, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x634, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x638, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x63C, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x640, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x644, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C0900

// [0x006C0990] sub_006C0990 (74 bytes)
namespace lift_006C0990 {
// @name sub_006C0990
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C0990(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x6D0, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x6D4, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x6D8, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x6DC, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x6E0, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x6E4, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C0990

// [0x006C0B50] sub_006C0B50 (74 bytes)
namespace lift_006C0B50 {
// @name sub_006C0B50
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C0B50(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0xC38, sizeof(uint32_t));
    std::memcpy(&f1, src + 0xC3C, sizeof(uint32_t));
    std::memcpy(&f2, src + 0xC40, sizeof(uint32_t));
    std::memcpy(&f3, src + 0xC44, sizeof(uint32_t));
    std::memcpy(&f4, src + 0xC48, sizeof(uint32_t));
    std::memcpy(&f5, src + 0xC4C, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C0B50

// [0x006C0BE0] sub_006C0BE0 (74 bytes)
namespace lift_006C0BE0 {
// @name sub_006C0BE0
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C0BE0(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0xCD8, sizeof(uint32_t));
    std::memcpy(&f1, src + 0xCDC, sizeof(uint32_t));
    std::memcpy(&f2, src + 0xCE0, sizeof(uint32_t));
    std::memcpy(&f3, src + 0xCE4, sizeof(uint32_t));
    std::memcpy(&f4, src + 0xCE8, sizeof(uint32_t));
    std::memcpy(&f5, src + 0xCEC, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C0BE0

// [0x006C0C90] sub_006C0C90 (74 bytes)
namespace lift_006C0C90 {
// @name sub_006C0C90
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C0C90(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0xE00, sizeof(uint32_t));
    std::memcpy(&f1, src + 0xE04, sizeof(uint32_t));
    std::memcpy(&f2, src + 0xE08, sizeof(uint32_t));
    std::memcpy(&f3, src + 0xE0C, sizeof(uint32_t));
    std::memcpy(&f4, src + 0xE10, sizeof(uint32_t));
    std::memcpy(&f5, src + 0xE14, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C0C90

// [0x006C0D20] sub_006C0D20 (74 bytes)
namespace lift_006C0D20 {
// @name sub_006C0D20
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C0D20(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0xEA0, sizeof(uint32_t));
    std::memcpy(&f1, src + 0xEA4, sizeof(uint32_t));
    std::memcpy(&f2, src + 0xEA8, sizeof(uint32_t));
    std::memcpy(&f3, src + 0xEAC, sizeof(uint32_t));
    std::memcpy(&f4, src + 0xEB0, sizeof(uint32_t));
    std::memcpy(&f5, src + 0xEB4, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C0D20

// [0x006C0F40] sub_006C0F40 (74 bytes)
namespace lift_006C0F40 {
// @name sub_006C0F40
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C0F40(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x1518, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x151C, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x1520, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x1524, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x1528, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x152C, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C0F40

// [0x006C0FD0] sub_006C0FD0 (74 bytes)
namespace lift_006C0FD0 {
// @name sub_006C0FD0
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C0FD0(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x15B8, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x15BC, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x15C0, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x15C4, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x15C8, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x15CC, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C0FD0

// [0x006C1120] sub_006C1120 (74 bytes)
namespace lift_006C1120 {
// @name sub_006C1120
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C1120(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x1988, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x198C, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x1990, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x1994, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x1998, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x199C, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C1120

// [0x006C11B0] sub_006C11B0 (74 bytes)
namespace lift_006C11B0 {
// @name sub_006C11B0
// @summary Auto-lifted identical-shape clone of 0x006C06A0 (CopyStateAndWriteUnitDouble_006C06A0).
namespace lift_006C06A0 {
// @name CopyStateAndWriteUnitDouble_006C06A0
// @summary Copies six dwords from self+0x328..0x33C into a 0x20-byte caller-provided result buffer (hidden sret pointer), then writes the double 1.0 at result+0x18.
// @field self +0x328 uint32_t field_0x328
// @field self +0x32C uint32_t field_0x32C
// @field self +0x330 uint32_t field_0x330
// @field self +0x334 uint32_t field_0x334
// @field self +0x338 uint32_t field_0x338
// @field self +0x33C uint32_t field_0x33C
void fn_006C11B0(void* self, void* result) {
    // Source block: six 32-bit fields of the object; the first five map
    // to result+0x00..0x10, the sixth to result+0x14.
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint32_t* out = static_cast<uint32_t*>(result);

    uint32_t f0, f1, f2, f3, f4, f5;
    std::memcpy(&f0, src + 0x1A28, sizeof(uint32_t));
    std::memcpy(&f1, src + 0x1A2C, sizeof(uint32_t));
    std::memcpy(&f2, src + 0x1A30, sizeof(uint32_t));
    std::memcpy(&f3, src + 0x1A34, sizeof(uint32_t));
    std::memcpy(&f4, src + 0x1A38, sizeof(uint32_t));
    std::memcpy(&f5, src + 0x1A3C, sizeof(uint32_t));

    out[0] = f0;
    out[1] = f1;
    out[2] = f2;
    out[3] = f3;
    out[4] = f4;
    out[5] = f5;             // result+0x14
    out[6] = 0x00000000u;    // result+0x18 (low dword of 1.0)
    out[7] = 0x3FF00000u;    // result+0x1C (high dword of 1.0)
}
} // namespace lift_006C06A0
} // namespace lift_006C11B0

// [0x006C1B40] sub_006C1B40 (77 bytes)
namespace lift_006C1B40 {
// @name LookupStringPtrByIndex
// @summary Maps selector 0..6 to one of seven fixed read-only string/table addresses; returns 0 otherwise.
// (stdcall, one dword argument, ret 4)
extern uint32_t __stdcall fn_006C1B40(uint32_t index) {
    switch (index) {
        case 0: return 0x00AA8C80u;
        case 1: return 0x00AA8C74u;
        case 2: return 0x00AA8C68u;
        case 3: return 0x00AA8C5Cu;
        case 4: return 0x00AA8C50u;
        case 5: return 0x00AA8C44u;
        case 6: return 0x00AA8C38u;
        default: return 0u;
    }
}
} // namespace lift_006C1B40

// [0x006C2DE0]
namespace lift_006C2DE0 {
// @name sub_006C2DE0
// @summary Forwards field_0x138 and a 32-byte stack argument to sub_007873F0, then invokes sub_006D80A0
// @field Unknown +0x138 uint8_t[] field_0x138


extern void __thiscall ext_007873F0(void* self, void* arg);
extern void __cdecl ext_006D80A0(void);

extern void __thiscall fn_006C2DE0(
    void* self,
    uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
    uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7) {
    uint32_t local_arg[8] = { a0, a1, a2, a3, a4, a5, a6, a7 };
    ext_007873F0(static_cast<uint8_t*>(self) + 0x138, local_arg);
    ext_006D80A0();
}
} // namespace lift_006C2DE0

// [0x006C2C60]
namespace lift_006C2C60 {
extern void __thiscall ext_007873F0(void* this_ptr, void* arg0);
extern void __cdecl ext_006D80A0(void);

// @name sub_006C2C60
// @summary Forwards member at +0x118 and stack argument block to sub_007873F0.
// @field Unknown +0x118 uint8_t field_0x118
extern void __thiscall fn_006C2C60(
    void* this_ptr,
    uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
    uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7)
{
    uint32_t args[8] = { a0, a1, a2, a3, a4, a5, a6, a7 };
    ext_007873F0(static_cast<uint8_t*>(this_ptr) + 0x118, args);
    ext_006D80A0();
}
} // namespace lift_006C2C60

// [0x006CC6F0]
namespace lift_006CC6F0 {
extern int32_t __fastcall ext_006CA6A0(void* self);
extern void* __fastcall ext_006CA060(void* self, int32_t edx_unused, int32_t index);
extern uint32_t __fastcall ext_006C9C30(void* self);
extern uint32_t __fastcall ext_006C9CD0(void* self);
extern uint32_t __fastcall ext_006C9D20(void* self);

// @name sub_006CC6F0
// @summary Checks whether the item at index (when index < count - 1) has matching flag bits (0x08, 0x0D00, and 0x01000000).

bool __fastcall fn_006CC6F0(void* self, int32_t /*edx*/, int32_t index) {
    int32_t count = ext_006CA6A0(self);
    if (index >= count - 1) {
        return false;
    }

    void* item = ext_006CA060(self, 0, index);
    if (ext_006C9C30(item) != 8) {
        return false;
    }

    if ((ext_006C9CD0(item) & 0x0D00u) == 0) {
        return false;
    }

    if ((ext_006C9D20(item) & 0x01000000u) == 0) {
        return false;
    }

    return true;
}
} // namespace lift_006CC6F0

// [0x006CC990]
namespace lift_006CC990 {
// @name checkItemFlagsAtIndex
// @summary Checks if index < count - 1 and the item at index has specific flag bits set.

int32_t __thiscall ext_006CA6A0(void* self);
void* __thiscall ext_006CA060(void* self, int32_t index);
uint32_t __thiscall ext_006C9C30(void* item);
uint32_t __thiscall ext_006C9CD0(void* item);
uint32_t __thiscall ext_006C9D60(void* item);

bool __thiscall fn_006CC990(void* self, int32_t index) {
    int32_t count = ext_006CA6A0(self);
    if (index >= count - 1) {
        return false;
    }

    void* item = ext_006CA060(self, index);
    if (ext_006C9C30(item) != 8) {
        return false;
    }
    if ((ext_006C9CD0(item) & 0x0D00u) == 0) {
        return false;
    }
    if ((ext_006C9D60(item) & 0x10000000u) == 0) {
        return false;
    }

    return true;
}
} // namespace lift_006CC990

// [0x006C30A0]
namespace lift_006C30A0 {
// @name sub_006C30A0
// @summary Return field_0x158 if its virtual method 0 returns 4, 5, or 6, else 0.
// @field Unknown +0x158 uint32_t field_0x158


extern uint32_t mem_r32(uint32_t addr);

uint32_t __fastcall sub_006C30A0(uint32_t self) {
    using Vfn0 = uint32_t(__fastcall*)(uint32_t);
    uint32_t obj = mem_r32(self + 0x158);
    if (!obj) {
        return 0;
    }
    uint32_t vtable = mem_r32(obj);
    if (reinterpret_cast<Vfn0>(static_cast<uintptr_t>(mem_r32(vtable)))(obj) == 4) {
        return mem_r32(self + 0x158);
    }
    obj = mem_r32(self + 0x158);
    vtable = mem_r32(obj);
    if (reinterpret_cast<Vfn0>(static_cast<uintptr_t>(mem_r32(vtable)))(obj) == 5) {
        return mem_r32(self + 0x158);
    }
    obj = mem_r32(self + 0x158);
    vtable = mem_r32(obj);
    if (reinterpret_cast<Vfn0>(static_cast<uintptr_t>(mem_r32(vtable)))(obj) == 6) {
        return mem_r32(self + 0x158);
    }
    return 0;
}
} // namespace lift_006C30A0

// [0x006C3C10]
namespace lift_006C3C10 {
// @name vec3dCross
// @summary Computes the 3D cross product of two double-precision vectors: out = a x b.


void sub_006C3C10(uint32_t out_ptr, uint32_t a_ptr, uint32_t b_ptr) {
    double* out = reinterpret_cast<double*>(static_cast<uintptr_t>(out_ptr));
    const double* a = reinterpret_cast<const double*>(static_cast<uintptr_t>(a_ptr));
    const double* b = reinterpret_cast<const double*>(static_cast<uintptr_t>(b_ptr));

    double x = a[1] * b[2] - a[2] * b[1];
    double y = a[2] * b[0] - a[0] * b[2];
    double z = a[0] * b[1] - a[1] * b[0];

    out[0] = x;
    out[1] = y;
    out[2] = z;
}
} // namespace lift_006C3C10

// [0x006C8440]
namespace lift_006C8440 {
extern void ext_006D80A0(void);

// @name sub_006C8440_dtor
// @summary Destructor that invokes empty subobject destructors at +0xa8 and +0x28.
// @field Unknown +0xa8 void* field_0xa8
// @field Unknown +0x28 void* field_0x28
extern void __thiscall fn_006C8440(void* self) {
    (void)self;
    ext_006D80A0();
    ext_006D80A0();
}
} // namespace lift_006C8440

// [0x006C84B0]
namespace lift_006C84B0 {
extern void* __fastcall ext_00714570(void* self);
extern void __fastcall ext_006C8510(void* self);

// @name Unknown::InitWithSubobject
// @class Unknown
// @summary Initializes subobject at +0x8, initializes self via ext_006C8510, and returns self.
// @field Unknown +0x8 uint8_t field_0x8
extern void* __fastcall fn_006C84B0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    ext_00714570(base + 0x8);
    ext_006C8510(self);
    return self;
}
} // namespace lift_006C84B0

// [0x006C8E00]
namespace lift_006C8E00 {
// @name initHugePos
// @summary Initializes global positive infinity double from MSVCR80!_HUGE

extern uint32_t mem_00925284;
extern uint32_t mem_00B5D5E8;
extern uint32_t mem_00B5D5EC;

void sub_006C8E00() {
    uint32_t* huge_ptr = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5D5E8 = huge_ptr[0];
    mem_00B5D5EC = huge_ptr[1];
}
} // namespace lift_006C8E00

// [0x006C92D0]
namespace lift_006C92D0 {
// @name Unknown::PruneFlag08Children
// @class Unknown
// @summary Recursively removes child items whose flag 0x08 is set via vtable calls.
// @field Unknown +0x00 void** vtable


extern uint32_t ext_006DEEA0(const uint8_t* self);

void __thiscall sub_006C92D0(void* self, void* node) {
    auto* vtable = *reinterpret_cast<void***>(node);
    using GetCountFn = int32_t(__thiscall*)(void*);
    using GetItemFn = void*(__thiscall*)(void*, int32_t);
    using RemoveAtFn = void(__thiscall*)(void*, int32_t);

    int32_t idx = reinterpret_cast<GetCountFn>(vtable[0x14 / 4])(node) - 1;
    while (idx >= 0) {
        vtable = *reinterpret_cast<void***>(node);
        void* child = reinterpret_cast<GetItemFn>(vtable[0x18 / 4])(node, idx);
        if (ext_006DEEA0(reinterpret_cast<const uint8_t*>(child)) == 8) {
            sub_006C92D0(self, child);
            vtable = *reinterpret_cast<void***>(node);
            reinterpret_cast<RemoveAtFn>(vtable[0x10 / 4])(node, idx);
        }
        --idx;
    }
}
} // namespace lift_006C92D0

// [0x006CC850]
namespace lift_006CC850 {
extern bool __fastcall ext_006CC6F0(void* self, int32_t /*edx*/, int32_t index);
extern void* __fastcall ext_006CA060(void* self, int32_t /*edx*/, int32_t index);
extern float __fastcall ext_006C9DC0(void* self, int32_t /*edx*/, int32_t idx);

// @name Unknown::GetSlot2OrDefaultThird
// @class Unknown
// @summary Returns GetScaledOrRawValue(2) on the item at index if valid, otherwise 1/3.
float __fastcall fn_006CC850(void* self, int32_t /*edx*/, int32_t index) {
    if (ext_006CC6F0(self, 0, index)) {
        void* item = ext_006CA060(self, 0, index);
        return ext_006C9DC0(item, 0, 2);
    }
    return 0.33333334f;
}
} // namespace lift_006CC850
