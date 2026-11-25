// Lifted C++ translation unit: lifted/leaf/decompiled_720000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0072D640(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>
#include <cstring>

// [0x0072D620] sub_0072D620 (32 bytes)
// @name sub_0072D620
// @summary MSVC scalar deleting destructor: calls sub_0072D640 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0072D620(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0072D640(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0072B2F0]
namespace lift_0072B2F0 {
// @name sub_0072B2F0
// @summary Constructor calling base constructor sub_0077F9E0 and setting vtable to 0x00996834
// @field sub_0072B2F0 +0x00 uint32_t vtable


extern uint32_t __thiscall ext_0077F9E0(uint32_t self, uint32_t arg1);
extern void mem_write32(uint32_t addr, uint32_t val);

uint32_t __thiscall sub_0072B2F0(uint32_t self, uint32_t arg1) {
    ext_0077F9E0(self, arg1);
    mem_write32(self, 0x00996834u);
    return self;
}
} // namespace lift_0072B2F0

// [0x0072CB00] sub_0072CB00 (32 bytes)
namespace lift_0072CB00 {
// @name sub_0072CB00
// @summary Auto-lifted identical-shape clone of 0x0071B020 (Unknown::CallArgWithSubObjectAddr0x10).
namespace lift_0071B020 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* ext_006B9D20(void* self, uint32_t arg1);

// @name Unknown::CallArgWithSubObjectAddr0x10
// @class Unknown
// @summary Calls 0x006D2390 with arg as this and (self + 0x10) as its stack argument, then returns arg.
// @field Unknown +0x10 BYTE field_0x10
void* fn_0072CB00(void* self, void* arg) {
    const uint32_t sub_addr =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self) + 0x18);
    ext_006B9D20(arg, sub_addr);
    return arg;
}
} // namespace lift_0071B020
} // namespace lift_0072CB00

// [0x00724FA0] sub_00724FA0 (16 bytes)
namespace lift_00724FA0 {
// @name sub_00724FA0
// @summary Auto-lifted identical-shape clone of 0x00711A90 (Unknown::TestFlag0x08At0x78).
namespace lift_00711A90 {
// Known callee 0x00711D20: Unknown::TestMaskedFieldAt0x78 (Returns true when (this->field_0x78 & mask) is nonzero, else false.)
extern bool ext_00724FE0(void* self, DWORD mask);

// @name Unknown::TestFlag0x08At0x78
// @class Unknown
// @summary Tests bit 0x08 of the flags word at this+0x78 by tail-forwarding to TestMaskedFieldAt0x78 and returns its result.
bool fn_00724FA0(void* self) {
    return ext_00724FE0(self, 0x0u);
}
} // namespace lift_00711A90
} // namespace lift_00724FA0

// [0x00724FB0]
namespace lift_00724FB0 {
// @name Unknown::DecrementClampZero
// @class Unknown
// @summary Returns max(0, this->field_0x194 - 1) as a signed 32-bit value.
// @field Unknown +0x194 int32_t field_0x194

// Reads ecx-relative dword at +0x194, decrements it, and clamps negatives to zero.
uint32_t fn_00724FB0(uint8_t* ecx) {
    int32_t value = *reinterpret_cast<int32_t*>(ecx + 0x194);
    int32_t dec = value - 1;
    return dec > 0 ? static_cast<uint32_t>(dec) : 0u;
}
} // namespace lift_00724FB0

// [0x0072CEB0]
namespace lift_0072CEB0 {
// @name Unknown::SetArray1B8Element
// @class Unknown
// @summary Stores a 32-bit value into slot [index] of a 6-entry int array at this+0x1B8; out-of-range indices are ignored.
// @field Unknown +0x1B8 int32_t field_0x1B8 (int32_t[6] array, indexed 0..5)

void Unknown_SetArray1B8Element(uint8_t* self, int32_t index, int32_t value) {
    if (index < 0 || index >= 6) {
        return;
    }
    int32_t* slots = reinterpret_cast<int32_t*>(self + 0x1B8);
    slots[index] = value;
}
} // namespace lift_0072CEB0

// [0x007266A0]
namespace lift_007266A0 {
// @name Unknown::ForwardSubObject0x250Value
// @class Unknown
// @summary Reads the pointer-sized value at this+0x250; if non-zero, tail-forwards to fn_006BC380 with that value as self, otherwise returns 0.
// @field Unknown +0x250 int32_t field_0x250

extern int32_t __fastcall ext_006BC380(void* self);

extern int32_t __fastcall fn_007266A0(void* self) {
    int32_t v = *reinterpret_cast<int32_t*>(reinterpret_cast<uint8_t*>(self) + 0x250);
    if (v != 0) {
        return ext_006BC380(reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(v))));
    }
    return 0;
}
} // namespace lift_007266A0

// [0x0072CED0]
namespace lift_0072CED0 {
// @name Unknown::GetArrayEntry1B8
// @class Unknown
// @summary Returns entry idx (0..5) of the int32 array at this+0x1B8, or 0 if idx is out of range.
// @field Unknown +0x1B8 int32_t[6] field_0x1B8

int32_t Unknown_GetArrayEntry1B8(const uint8_t* self, int32_t idx) {
    if (idx < 0 || idx >= 6) {
        return 0;
    }
    return *reinterpret_cast<const int32_t*>(self + 0x1B8 + 4 * static_cast<uintptr_t>(idx));
}
} // namespace lift_0072CED0

// [0x0072CEF0] sub_0072CEF0 (32 bytes)
namespace lift_0072CEF0 {
// @name Unknown::SetArray1A9Element
// @class Unknown
// @summary Stores a byte into slot [index] of a 13-entry byte array at this+0x1A9; out-of-range indices are ignored.
// @field Unknown +0x1A9 uint8_t field_0x1A9 (uint8_t[13] array, indexed 0..12)
void fn_0072CEF0(uint8_t* self, int32_t index, uint8_t value) {
    if (index < 0 || index >= 13) {
        return;
    }
    self[0x1A9 + index] = value;
}
} // namespace lift_0072CEF0

// [0x0072CF10] sub_0072CF10 (32 bytes)
namespace lift_0072CF10 {
// @name Unknown::GetByte1A9Checked
// @class Unknown
// @summary Returns byte at this+0x1A9+index for index in [0,13); returns 0 for out-of-range index.
// @field Unknown +0x1A9 uint8_t[13] byte1A9Array
extern uint8_t __fastcall fn_0072CF10(void* self, int edx_unused, int index) {
    (void)edx_unused;
    if (index < 0 || index >= 13) {
        return 0;
    }
    return lift_field<uint8_t>(self, 0x1A9 + static_cast<uintptr_t>(index));
}
} // namespace lift_0072CF10

// [0x00725DE0]
namespace lift_00725DE0 {
// @name xorChainBlock16
// @summary In-place 16-byte chained XOR: buf[i] ^= key[i] ^ prev, prev seeded 0x40 (stdcall, ret 8).
void sub_00725DE0(uint8_t* buf, const uint8_t* key) {
    uint8_t prev = 0x40;
    for (int i = 0; i < 16; ++i) {
        uint8_t out = static_cast<uint8_t>(buf[i] ^ key[i] ^ prev);
        buf[i] = out;
        prev = out;
    }
}
} // namespace lift_00725DE0

// [0x00725E10]
namespace lift_00725E10 {
// @name xorChainDiffBlock16
// @summary In-place 16-byte chained XOR of buf against (end - buf)-relative source; prev seeded 0x40 (stdcall, ret 8).
// (no struct field accesses: buf/end are raw byte pointers)
void sub_00725E10(uint8_t* buf, const uint8_t* end) {
    uint8_t prev = 0x40;
    for (int i = 0; i < 16; ++i) {
        uint8_t cur = buf[i];
        uint8_t out = static_cast<uint8_t>(end[i] ^ cur ^ prev);
        buf[i] = out;
        prev = cur;
    }
}
} // namespace lift_00725E10

// [0x0072B180] sub_0072B180 (48 bytes)
namespace lift_0072B180 {
// @name getPackedStateBits
// @summary Returns (ptr != 0 ? 4 : 3) shifted by 12 or 14 depending on the second field's value (0x40 / 0x80), else 0.
// @field field_0x00 DWORD
// @field field_0x04 DWORD
DWORD fn_0072B180(void* self) {
    const DWORD* f = static_cast<const DWORD*>(self);
    const DWORD a = f[0];
    const DWORD b = f[1];
    const DWORD v = (a != 0 ? 1u : 0u) + 3u;
    if (b == 0x40) {
        return v << 12;
    }
    if (b == 0x80) {
        return v << 14;
    }
    return 0;
}
} // namespace lift_0072B180

// [0x0072B220] sub_0072B220 (48 bytes)
namespace lift_0072B220 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with one 4-byte argument (12); returns allocated pointer in eax.
extern void* ext_006A5C62(unsigned int size);

// @name Unknown::allocZeroedBlock12
// @class Unknown
// @summary Allocates a 12-byte zeroed block, stores its pointer at [this+0x00] (null on failure), and returns this.
// @field Unknown +0x00 void* field_0x00
void* fn_0072B220(void* self) {
    void* block = ext_006A5C62(12);
    if (block != nullptr) {
        std::memset(block, 0, 12);
    }
    *static_cast<void**>(self) = block;
    return self;
}
} // namespace lift_0072B220

// [0x0072B250]
namespace lift_0072B250 {
extern void ext_006A5C5C(void* arg);

// @name Unknown::releaseOwnedHandle
// @class Unknown
// @summary Releases the handle at +0x08 of the object referenced by *this, clears that slot, then releases the object itself.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x08 void* field_0x08
void fn_0072B250(void* self) {
    void* obj = lift_field<void*>(self, 0x00);
    if (obj == nullptr) {
        return;
    }
    ext_006A5C5C(lift_field<void*>(obj, 0x08));
    lift_field<void*>(obj, 0x08) = nullptr;
    ext_006A5C5C(obj);
}
} // namespace lift_0072B250

// [0x0072BC70] sub_0072BC70 (48 bytes)
namespace lift_0072BC70 {
// @name Unknown::getIndexedDword
// @class Unknown
// @summary Returns the uint32 at index from the array at +0x160, or 0 if index is negative or >= count at +0x150.
// @field Unknown +0x150 int32_t field_0x150
// @field Unknown +0x160 uint32_t* field_0x160
uint32_t fn_0072BC70(void* self, int32_t index) {
    const int32_t count = lift_field<int32_t>(self, 0x150);
    if (index < 0 || index >= count) {
        return 0;
    }
    const uint32_t* elements = lift_field<uint32_t*>(self, 0x160);
    return elements[index];
}
} // namespace lift_0072BC70

// [0x0072BDD0] sub_0072BDD0 (32 bytes)
namespace lift_0072BDD0 {
// Known callee 0x0072BC70: Unknown::getIndexedDword (Returns the uint32 at index from the array at +0x160, or 0 if index is negative or >= count at +0x150.)
extern uint32_t __thiscall ext_0072BC70(void* self, int32_t index);

// @name Unknown::getIndexedDwordOffset50
// @class Unknown
// @summary Fetches the indexed dword via ext_0072BC70; if it is non-zero returns it plus 0x50, otherwise returns the constant 0xB60020.
uint32_t fn_0072BDD0(void* self, int32_t index) {
    const uint32_t value = ext_0072BC70(self, index);
    if (value != 0) {
        return value + 0x50u;
    }
    return 0x00B60020u;
}
} // namespace lift_0072BDD0

// [0x0072BDB0] sub_0072BDB0 (32 bytes)
namespace lift_0072BDB0 {
// Known callee 0x0072BC70: Unknown::getIndexedDword (thiscall, one stack arg: index).
extern uint32_t __thiscall ext_0072BC70(void* self, int32_t index);
// Known callee 0x006E7460: sub_006E7460 (thiscall getter, returns int32 at +0x0).
extern int32_t __thiscall ext_006E7460(void* self);

// @name Unknown::getIndexedDwordOrDefault
// @class Unknown
// @summary Looks up the dword at index via getIndexedDword; if it is 0, substitutes the global object at 0x00B600B8, then returns the int32 read by sub_006E7460 from that object.
// (No fields accessed directly in this function; field offsets belong to the callees.)
int32_t __thiscall fn_0072BDB0(void* self, int32_t index) {
    const uint32_t entry = ext_0072BC70(self, index);
    void* target = entry != 0
        ? reinterpret_cast<void*>(static_cast<uintptr_t>(entry))
        : reinterpret_cast<void*>(static_cast<uintptr_t>(0x00B600B8u));
    return ext_006E7460(target);
}
} // namespace lift_0072BDB0

// [0x0072B770]
namespace lift_0072B770 {
// @name isKnownGlobalHandle
// @summary Returns true if the argument matches any of four known global 32-bit values.


extern uint32_t mem_00B600A0;
extern uint32_t mem_00B5F060;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

bool __stdcall sub_0072B770(uint32_t value) {
    if (value == mem_00B600A0) {
        return true;
    }
    if (value == mem_00B5F060) {
        return true;
    }
    if (value == mem_00B5EB78) {
        return true;
    }
    return value == mem_00B5E400;
}
} // namespace lift_0072B770

// [0x0072CC90]
namespace lift_0072CC90 {
extern uint32_t mem_00B60288;
extern uint32_t mem_00B60F58;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

// @name isKnownGlobalId
// @summary Returns true if arg0 matches any of four global 32-bit values.
uint8_t __stdcall sub_0072CC90(uint32_t arg0) {
    if (arg0 == mem_00B60288) {
        return 1;
    }
    if (arg0 == mem_00B60F58) {
        return 1;
    }
    if (arg0 == mem_00B5EB78) {
        return 1;
    }
    return arg0 == mem_00B5E400 ? 1 : 0;
}
} // namespace lift_0072CC90

// [0x00722660] sub_00722660 (64 bytes)
namespace lift_00722660 {
extern const double mem_009334D8; // 100.0
extern const double mem_009939D8; // 0.01
extern const double mem_00993828; // 0.5

// @name BlendTwoValuesOverRange100
// @summary Returns 0.5 * ((100 - a) * 0.01 * c + (100 + a) * 0.01 * b), a weighted blend of b and c with a in [-100, 100] (double return in ST0).
double fn_00722660(double a, double b, double c) {
    double t1 = (mem_009334D8 - a) * mem_009939D8 * c;
    double t2 = (a + mem_009334D8) * mem_009939D8 * b;
    return (t1 + t2) * mem_00993828;
}
} // namespace lift_00722660
