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
