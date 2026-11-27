// Lifted C++ translation unit: lifted/leaf/decompiled_720000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0072D640(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>
#include <cstring>
#include <ctime>

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

// [0x00725300] sub_00725300 (64 bytes)
namespace lift_00725300 {
namespace lift_00725300 {

// Thiscall function-pointer shapes for the virtual slots used below.
using VSlotCall0 = uint32_t(__thiscall*)(void* self);
using VSlotCall2 = uint32_t(__thiscall*)(void* self, uint32_t a1, uint32_t a2);
using VSlotCall1Void = void(__thiscall*)(void* self, uint32_t a1);

// Fetch vtable entry `index` (slot offset / 4) of the object at `obj`.
inline void* vtable_entry(void* obj, size_t index) {
    void** vtable = *reinterpret_cast<void***>(obj);
    return vtable[index];
}

// @name Unknown::ForwardVtableCallsToChild
// @class Unknown
// @summary Calls vslot+0x24 on the child at this+0x10 (result t), then vslot+0x14 with (a1, 0x10) returning its result r, then vslot+0x28 with t; returns r.
// @field Unknown +0x10 void* field_0x10
uint32_t fn_00725300(void* self, uint32_t a1) {
    // Original: ecx = [self+0x10]; eax = [ecx]; call [eax+0x24]  -> t
    //           ecx = [self+0x10]; push 0x10; push a1; call [[ecx]+0x14] -> r
    //           ecx = [self+0x10]; push t; call [[ecx]+0x28]
    //           return r
    void* child = lift_field<void*>(self, 0x10);
    uint32_t t = reinterpret_cast<VSlotCall0>(vtable_entry(child, 0x24 / 4))(child);

    child = lift_field<void*>(self, 0x10);
    uint32_t r = reinterpret_cast<VSlotCall2>(vtable_entry(child, 0x14 / 4))(child, a1, 0x10);

    child = lift_field<void*>(self, 0x10);
    reinterpret_cast<VSlotCall1Void>(vtable_entry(child, 0x28 / 4))(child, t);

    return r;
}

} // namespace lift_00725300
} // namespace lift_00725300

// [0x0072B1E0] sub_0072B1E0 (64 bytes)
namespace lift_0072B1E0 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* arg);
// Known callee 0x0072B180: sub_0072D620 (MSVC scalar deleting destructor: calls sub_0072D640 and frees memory when (flags & 1) is set.)
extern void* ext_0072B180(void* self);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void* ext_006A5C62(void* arg);

// @name Unknown::ReplaceSubobjectValue
// @class Unknown
// @summary Releases the old word at subobject+0x08 via MFC80 ord_764, stores the argument at subobject+0x04, runs sub_0072B180 on the subobject, and stores any non-null result (passed through MFC80 ord_762) back at subobject+0x08.
// @field Unknown +0x00 void* field_0x00 (pointer to subobject; dereferenced to reach +0x04/+0x08)
// @field Unknown +0x04 DWORD field_0x04 (subobject field; receives stack argument)
// @field Unknown +0x08 void* field_0x08 (subobject field; old value released, then replaced with result)
void fn_0072B1E0(void* self, DWORD value) {
    void* sub = lift_field<void*>(self, 0x00);
    void* old = lift_field<void*>(sub, 0x08);
    ext_006A5C5C(old);
    lift_field<void*>(sub, 0x08) = nullptr;
    lift_field<DWORD>(sub, 0x04) = value;
    void* result = ext_0072B180(sub);
    if (result != nullptr) {
        result = ext_006A5C62(result);
        lift_field<void*>(sub, 0x08) = result;
    }
}
} // namespace lift_0072B1E0

// [0x0072DA80] sub_0072DA80 (80 bytes)
namespace lift_0072DA80 {
extern void ext_006B9D70(void* self);

// @name Unknown::CleanupSubobjects
// @class Unknown
// @summary Invokes ext_006B9D70 on the subobjects at this+0x50 and this+0x04 (member cleanup), in that order.
// @field Unknown +0x04 void field_0x04
// @field Unknown +0x50 void field_0x50
void fn_0072DA80(void* self) {
    ext_006B9D70(static_cast<uint8_t*>(self) + 0x50);
    ext_006B9D70(static_cast<uint8_t*>(self) + 0x04);
}
} // namespace lift_0072DA80

// [0x0072C820] sub_0072C820 (80 bytes)
namespace lift_0072C820 {
// @name CopyStridedBytes
// @summary Copies `rowCount` rows of `rowWidth` (low 16 bits) bytes from src to dst, packed back to back, byte by byte.
void fn_0072C820(std::uint8_t* src, std::uint8_t* dst, std::uint32_t rowWidth, std::uint32_t rowCount) {
    std::uint32_t width = rowWidth & 0xFFFFu;
    std::uint32_t offset = 0;

    for (std::uint32_t row = rowCount; row != 0; --row) {
        for (std::uint32_t i = 0; i < width; ++i) {
            dst[offset + i] = src[offset + i];
        }
        offset += width;
    }
}
} // namespace lift_0072C820

// [0x0072B130] sub_0072B130 (80 bytes)
namespace lift_0072B130 {
struct Unknown;

extern Unknown* ext_006B9960(Unknown* ecx);

// @name Unknown::InitSubobjects
// @class Unknown
// @summary Calls ext_006B9960 on six embedded subobjects (+0x00, +0x4C, +0x98, +0xE4, +0x130, +0x17C), then zeroes the dword at +0x1C8.
// @field Unknown +0x00 Unknown field_0x00
// @field Unknown +0x4C Unknown field_0x4C
// @field Unknown +0x98 Unknown field_0x98
// @field Unknown +0xE4 Unknown field_0xE4
// @field Unknown +0x130 Unknown field_0x130
// @field Unknown +0x17C Unknown field_0x17C
// @field Unknown +0x1C8 DWORD field_0x1C8
void fn_0072B130(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    ext_006B9960(reinterpret_cast<Unknown*>(base + 0x00));
    ext_006B9960(reinterpret_cast<Unknown*>(base + 0x4C));
    ext_006B9960(reinterpret_cast<Unknown*>(base + 0x98));
    ext_006B9960(reinterpret_cast<Unknown*>(base + 0xE4));
    ext_006B9960(reinterpret_cast<Unknown*>(base + 0x130));
    ext_006B9960(reinterpret_cast<Unknown*>(base + 0x17C));
    lift_field<DWORD>(self, 0x1C8) = 0;
}
} // namespace lift_0072B130

// [0x00724E30]
namespace lift_00724E30 {
// @name Unknown::CopyStridedQuadFromSubobject
// @class Unknown
// @summary Fetches a 160-byte block from this->field_0x10 via vtable slot 5, then copies four unaligned dwords (at +0x26, +0x2A, +0x2E, +0x32) into the caller's 16-byte output.
// @field Unknown +0x10 void* field_0x10

extern void __fastcall fn_00724E30(void* self, int edx_unused, uint8_t* out) {
    (void)edx_unused;

    // Sub-object at this->field_0x10; slot 5 (offset 0x14) fills a 0xA0-byte buffer.
    void* sub = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x10);
    uint8_t buf[0xA0];
    void** vtbl = *reinterpret_cast<void***>(sub);
    using FillFn = void (*)(void* self_, uint8_t* dst, uint32_t size);
    FillFn fill = reinterpret_cast<FillFn>(vtbl[5]);
    fill(sub, buf, 0xA0u);

    // Four unaligned 32-bit reads from the buffer, stored consecutively into out.
    uint32_t v0, v1, v2, v3;
    std::memcpy(&v0, buf + 0x26, sizeof(v0));
    std::memcpy(&v1, buf + 0x2A, sizeof(v1));
    std::memcpy(&v2, buf + 0x2E, sizeof(v2));
    std::memcpy(&v3, buf + 0x32, sizeof(v3));
    std::memcpy(out + 0x0, &v0, sizeof(v0));
    std::memcpy(out + 0x4, &v1, sizeof(v1));
    std::memcpy(out + 0x8, &v2, sizeof(v2));
    std::memcpy(out + 0xC, &v3, sizeof(v3));
}
} // namespace lift_00724E30

// [0x007266C0] sub_007266C0 (48 bytes)
namespace lift_007266C0 {
// Known callee 0x00789C80: ForwardSortedArrayFindValue (Thiscall forwarder: calls the SortedArray find routine on the subobject at this+0x04 with the same key and optional out-index arguments.)
extern uint32_t ext_00789C80(void* self, uint32_t key, int32_t* outIndex);
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t ext_006E7460(void* self);

// @name ForwardFindThenGetValue
// @class Object
// @summary Looks up key in the sorted array held at this+0x250; if found, returns the getter value of the match, otherwise 0.
// @field Object +0x250 void* field_0x250
int32_t fn_007266C0(void* self, uint32_t key) {
    void* sortedArray = lift_field<void*>(self, 0x250);
    uint32_t found = ext_00789C80(sortedArray, key, nullptr);
    if (found == 0) {
        return 0;
    }
    return ext_006E7460(reinterpret_cast<void*>(static_cast<uintptr_t>(found)));
}
} // namespace lift_007266C0

// [0x00728570]
namespace lift_00728570 {
// @name sub_00728570
// @summary Iterates field_0xee4 times calling vtable +0x3c on field_0x10 with 0xaad0b8 when preconditions hold
// @field Unknown +0x10 void* field_0x10
// @field Unknown +0x15 uint8_t field_0x15
// @field Unknown +0xee4 int32_t field_0xee4
// @field Unknown +0xef0 uint8_t field_0xef0


extern int32_t __fastcall ext_006E7460(void* self);

extern void __fastcall fn_00728570(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    if (ext_006E7460(base + 0xef0) > -1) {
        return;
    }

    void* obj = *reinterpret_cast<void**>(base + 0x10);
    if (!obj) {
        return;
    }

    auto* vtable = *reinterpret_cast<uintptr_t**>(obj);
    using VFn2C = uint8_t(__fastcall*)(void* this_ptr);
    auto fn_2c = reinterpret_cast<VFn2C>(vtable[0x2c / sizeof(uintptr_t)]);
    if (!fn_2c(obj)) {
        return;
    }

    if (base[0x15] != 0) {
        return;
    }

    int32_t count = *reinterpret_cast<int32_t*>(base + 0xee4);
    for (int32_t i = 0; i < count; ++i) {
        void* cur_obj = *reinterpret_cast<void**>(base + 0x10);
        auto* cur_vtable = *reinterpret_cast<uintptr_t**>(cur_obj);
        using VFn3C = void(__cdecl*)(void* obj_arg, uint32_t arg2);
        auto fn_3c = reinterpret_cast<VFn3C>(cur_vtable[0x3c / sizeof(uintptr_t)]);
        fn_3c(cur_obj, 0xaad0b8u);
        count = *reinterpret_cast<int32_t*>(base + 0xee4);
    }
}
} // namespace lift_00728570

// [0x00726770]
namespace lift_00726770 {
extern void __stdcall ext_00732CB0(int32_t a1);
extern uint32_t __thiscall ext_00789C80(void* self, uint32_t key, int32_t* outIndex);
extern void __fastcall ext_00789BA0(void* self, int edx_unused, int32_t value);
extern uint32_t __thiscall ext_0078CBE0(void* self);

// @name selectAndClearSubobjectField
// @summary Looks up a key in the subobject at +0x250, sets its index, and clears offset +0x1C of its indexed entry.
// @field Unknown +0x250 void* field_0x250
extern bool __thiscall fn_00726770(void* self, uint32_t key) {
    ext_00732CB0(static_cast<int32_t>(key));

    void* container = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x250);
    int32_t outIndex = static_cast<int32_t>(key);
    void* item = reinterpret_cast<void*>(static_cast<uintptr_t>(
        ext_00789C80(container, key, &outIndex)));
    if (!item) {
        return false;
    }

    ext_00789BA0(*reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x250), 0, outIndex);

    uint32_t entryAddr = ext_0078CBE0(item);
    if (!entryAddr) {
        return false;
    }

    uint8_t* entry = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(ext_0078CBE0(item)));
    *reinterpret_cast<uint32_t*>(entry + 0x1C) = 0;
    return true;
}
} // namespace lift_00726770

// [0x0072C0B0]
namespace lift_0072C0B0 {
extern void* ext_006A5C62(uint32_t size);
extern void ext_00782D00(void* self, uint32_t arg);

// @name sub_0072C0B0_ctor
// @summary Initializes field_0x04 with arg0, allocates a 0x14-byte object via ext_006A5C62, initializes it with ext_00782D00, stores it at field_0x00, and returns self.
// @field Self +0x00 void* field_0x00
// @field Self +0x04 uint32_t field_0x04
void* __thiscall fn_0072C0B0(void* self, uint32_t arg0) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(obj + 0x04) = arg0;

    void* child = ext_006A5C62(0x14);
    if (child != nullptr) {
        ext_00782D00(child, 0x14);
    }

    *reinterpret_cast<void**>(obj + 0x00) = child;
    return self;
}
} // namespace lift_0072C0B0

// [0x0072B280]
namespace lift_0072B280 {
// @name ConstructEmbeddedBufferAndSetVtable
// @summary Runs fn_006D7880 on this with arg1, then writes the vtable pointer 0x00996810 at +0x00 and returns this.

extern void* __thiscall ext_006D7880(void* self, uint32_t arg1);

extern void* __thiscall fn_0072B280(void* self, uint32_t arg1) {
    ext_006D7880(self, arg1);
    *reinterpret_cast<uint32_t*>(self) = 0x00996810u;
    return self;
}
} // namespace lift_0072B280

// [0x007267D0]
namespace lift_007267D0 {
// @name clearIndexedEntryField
// @summary Finds a sub-object by key in field_0x250, validates an index against its count, and clears offset +0x1C of the indexed item.
// @field Self +0x250 void* field_0x250

extern void __stdcall ext_00732CB0(int32_t a1);
extern void __fastcall ext_00789BA0(void* self, int32_t edx_unused, int32_t value);
extern uint32_t __thiscall ext_00789C80(void* self, uint32_t key, int32_t* outIndex);
extern int32_t __fastcall ext_006E7460(void* self);
extern void __thiscall ext_0078CBC0(void* self, int32_t index);
extern uint32_t __fastcall ext_0078CBE0(void* self);

extern bool __thiscall fn_007267D0(void* self, uint32_t key, int32_t index) {
    ext_00732CB0(static_cast<int32_t>(key));

    void* container = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x250);
    int32_t outIndex = static_cast<int32_t>(key);
    uint32_t found = ext_00789C80(container, key, &outIndex);
    if (found == 0) {
        return false;
    }

    void* foundObj = reinterpret_cast<void*>(static_cast<uintptr_t>(found));
    ext_00789BA0(*reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x250), 0, outIndex);

    int32_t count = ext_006E7460(foundObj);
    if (index >= count) {
        return false;
    }

    ext_0078CBC0(foundObj, index);
    uint32_t item = ext_0078CBE0(foundObj);
    *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(item) + 0x1C) = 0;
    return true;
}
} // namespace lift_007267D0

// [0x0072B2F0] sub_0072B2F0 (25 bytes)
namespace lift_0072B2F0 {
// @name sub_0072B2F0
// @summary Auto-lifted identical-shape clone of 0x0072B280 (ConstructEmbeddedBufferAndSetVtable).
namespace lift_0072B280 {
// @name ConstructEmbeddedBufferAndSetVtable
// @summary Runs fn_006D7880 on this with arg1, then writes the vtable pointer 0x00996810 at +0x00 and returns this.

extern void* __thiscall ext_0077F9E0(void* self, uint32_t arg1);

extern void* __thiscall fn_0072B2F0(void* self, uint32_t arg1) {
    ext_0077F9E0(self, arg1);
    *reinterpret_cast<uint32_t*>(self) = 0x996834u;
    return self;
}
} // namespace lift_0072B280
} // namespace lift_0072B2F0

// [0x0072CB00] sub_0072CB00 (32 bytes)
namespace lift_0072CB00 {
// @name sub_0072CB00
// @summary Auto-lifted identical-shape clone of 0x00702F60 (sub_00702F60).
namespace lift_00702F60 {
// @name sub_00702F60
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
} // namespace lift_00702F60
} // namespace lift_0072CB00

// [0x007299C0] sub_007299C0 (64 bytes)
namespace lift_007299C0 {
// Known callee 0x006D23F0: Unknown::GetAddressAt8 (Returns this + 8 * index (32-bit address of an 8-byte element in an array based at this); thiscall, one stack argument, callee pops 4.)
extern uint32_t ext_006D23F0(uint32_t self, uint32_t index);

// @name FillStride32SlotsWithOne
// @class Unknown
// @summary For count = self->field_0x28 entries, takes base = self->field_0x38 and walks it in 0x20-byte steps; for each entry writes the double 1.0 into the 8 bytes at entry+0x18 (via ext_006D23F0(entry, 3)).
// @field Unknown +0x28 int32_t field_0x28
// @field Unknown +0x38 uint32_t field_0x38
void fn_007299C0(void* self) {
    const int32_t count = lift_field<int32_t>(self, 0x28);
    if (count <= 0) {
        return;
    }

    const uint32_t base = lift_field<uint32_t>(self, 0x38);
    uint32_t offset = 0;
    for (int32_t i = 0; i < count; ++i, offset += 0x20) {
        const uint32_t addr = ext_006D23F0(base + offset, 3);
        void* slot = reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
        lift_field<uint32_t>(slot, 0) = 0x00000000u;  // low dword of 1.0
        lift_field<uint32_t>(slot, 4) = 0x3ff00000u;  // high dword of 1.0
    }
}
} // namespace lift_007299C0

// [0x0072BF70] sub_0072BF70 (96 bytes)
namespace lift_0072BF70 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* arg);
// Known callee 0x006B9D70: sub_006B9D70 (Pure jump thunk forwarding to sub_006B9970.)
extern void ext_006B9D70(void* thisptr);

// @name Unknown::resetAndReleaseSubobject
// @class Unknown
// @summary If +0x10 is non-null, passes it to ext_006A5C5C; clears the byte at +0x64; then calls ext_006B9D70 on the embedded subobject at +0x18 (thiscall). SEH frame from the original is dropped.
// @field Unknown +0x10 void* field_0x10
// @field Unknown +0x18 subobject field_0x18
// @field Unknown +0x64 uint8_t field_0x64
void fn_0072BF70(void* self) {
    void* ptr = lift_field<void*>(self, 0x10);
    if (ptr != nullptr) {
        ext_006A5C5C(ptr);
    }
    lift_field<uint8_t>(self, 0x64) = 0;
    ext_006B9D70(static_cast<void*>(&lift_field<uint8_t>(self, 0x18)));
}
} // namespace lift_0072BF70

// [0x00729A00] sub_00729A00 (96 bytes)
namespace lift_00729A00 {
// Known callee 0x006FDF30: Unknown::CountMatchingByIndex (Counts entries of the pointer array at +0x20 (length at +0x10) for which GetDwordByIndex(entry, index) is nonzero.)
extern int32_t ext_006FDF30(void* self, uint32_t index);
// Known callee 0x006FDF90: Unknown::FindNthMatchingEntry (Returns the entry at the ordinal-th match in the pointer array at +0x20, or 0 if no match exists.)
extern uint32_t ext_006FDF90(void* self, uint32_t ordinal, uint32_t index);
// Known callee 0x006B99C0: sub_006B99C0 (Getter returning int32_t field at offset +0x4.)
extern int32_t ext_006B99C0(void* self);
// Known callee 0x006D23F0: Unknown::GetAddressAt8 (Returns this + 8 * index; thiscall, one stack argument.)
extern uint32_t ext_006D23F0(uint32_t self, uint32_t index);

// @name Unknown::initMatchingEntryDoubles
// @class Unknown
// @summary If the self array has matching entries, takes the first match's object and writes double 1.0 into the 8-byte element at index 3 of each 0x20-byte stride of its array.
// @field Unknown +0x08 int32_t count
// @field Unknown +0x18 uint32_t arrayBase
void fn_00729A00(uint32_t self) {
    void* selfp = (void*)(uintptr_t)self;

    if (ext_006FDF30(selfp, 1) <= 0) {
        return;
    }

    uint32_t entry = ext_006FDF90(selfp, 0, 1);
    uint32_t obj = (uint32_t)ext_006B99C0((void*)(uintptr_t)entry);
    void* objp = (void*)(uintptr_t)obj;

    int32_t n = lift_field<int32_t>(objp, 0x08);
    for (int32_t i = 0; i < n; ++i) {
        uint32_t base = lift_field<uint32_t>(objp, 0x18) + static_cast<uint32_t>(i) * 0x20u;
        uint32_t elem = ext_006D23F0(base, 3);
        void* elemp = (void*)(uintptr_t)elem;
        lift_field<uint32_t>(elemp, 0) = 0u;
        lift_field<uint32_t>(elemp, 4) = 0x3ff00000u;
    }
}
} // namespace lift_00729A00

// [0x007226A0]
namespace lift_007226A0 {
extern double ext_00722660(double a, double b, double c);
extern double ext_00722720(double a, double b);
extern const double mem_009967F0;
extern const double mem_009967F8;

// @name BlendPlusSignedSquareOverRange500
// @summary Returns BlendTwoValuesOverRange100(a,b,c) + mulSquareDouble((a-500)*0.002, b>c ? 1000 : -1000).
double fn_007226A0(double a, double b, double c) {
    double sign = (b > c) ? 1000.0 : -1000.0;
    double t = (a - mem_009967F0) * mem_009967F8;
    double r = ext_00722720(t, sign);
    double q = ext_00722660(a, b, c);
    return q + r;
}
} // namespace lift_007226A0

// [0x00722730] sub_00722730 (128 bytes)
namespace lift_00722730 {
// Known callee 0x00722660: BlendTwoValuesOverRange100 (Returns 0.5 * ((100 - a) * 0.01 * c + (100 + a) * 0.01 * b), a weighted blend of b and c with a in [-100, 100] (double return in ST0).)
extern double ext_00722660(double a, double b, double c);
// Known callee 0x00722720: mulSquareDouble (Computes (a * a) * b for two double-precision arguments.)
extern double ext_00722720(double a, double b);
extern double mem_009967F0;
extern double mem_00996800;

// @name ComputeBlendPlusSquaredOffset
// @summary Returns BlendTwoValuesOverRange100(a, b, c) plus mulSquareDouble of an offset of a scaled by -0.002, signed by whether b > c (+/-1000).
double fn_00722730(double a, double b, double c) {
    const double sign = (b > c) ? -1000.0 : 1000.0;
    const double x = (a + mem_009967F0) * mem_00996800;
    const double squared = ext_00722720(x, sign);
    return ext_00722660(a, b, c) + squared;
}
} // namespace lift_00722730

// [0x00722BA0] sub_00722BA0 (128 bytes)
namespace lift_00722BA0 {
// Known callee 0x00722660: BlendTwoValuesOverRange100 (Returns 0.5 * ((100 - a) * 0.01 * c + (100 + a) * 0.01 * b), a weighted blend of b and c with a in [-100, 100] (double return in ST0).)
extern double ext_00722660(double a, double b, double c);
// Known callee 0x00722720: mulSquareDouble (Computes (a * a) * b for two double-precision arguments.)
extern double ext_00722720(double a, double b);
extern const double mem_009967F0; // .rdata double 500
extern const double mem_009967F8; // .rdata double 0.002

// @name BlendPlusSquaredScaledOffset
// @summary Returns BlendTwoValuesOverRange100(a, b, c) + mulSquareDouble((a - 500) * 0.002, sign) where sign is -1000 if b < c (or unordered) else +1000.
// @field none (free function, no struct accesses)
double fn_00722BA0(double a, double b, double c) {
    // fcomp sets C0 on b < c and on unordered operands, which selects -1000.
    const double s = (b < c || std::isunordered(b, c)) ? -1000.0 : 1000.0;
    const double t = (a - mem_009967F0) * mem_009967F8;
    const double v1 = ext_00722720(t, s);
    const double r = ext_00722660(a, b, c);
    return r + v1;
}
} // namespace lift_00722BA0

// [0x0072BFD0] sub_0072BFD0 (128 bytes)
namespace lift_0072BFD0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762).
extern int32_t ext_006A5C62(int32_t);

// @name CFoo::SetParamsAndMaybeCompute
// @class CFoo
// @summary Stores four params and a byte flag; when flags allow, stores ext_006A5C62(a5 * a1 * a2) at +0x10.
// @field CFoo +0x00 int32_t a1
// @field CFoo +0x04 int32_t a2
// @field CFoo +0x08 int32_t a4
// @field CFoo +0x0C int32_t a5 (sign-extended from byte)
// @field CFoo +0x10 int32_t result
// @field CFoo +0x64 uint8_t flag
// @field CFoo +0x65 uint8_t a3_flag
void fn_0072BFD0(void* self, int32_t a1, int32_t a2, uint8_t a3, int32_t a4, int8_t a5) {
    lift_field<int32_t>(self, 0x00) = a1;
    lift_field<int32_t>(self, 0x04) = a2;
    lift_field<int32_t>(self, 0x08) = a4;
    lift_field<int32_t>(self, 0x0C) = static_cast<int32_t>(a5);
    lift_field<int32_t>(self, 0x10) = 0;

    // Flag is 1 when (a1 > 0 && a2 > 0 && a4 in {0,1} && a5 >= 1), or when a3 == 0.
    bool take = false;
    if (a1 > 0 && a2 > 0 && (a4 == 0 || a4 == 1)) {
        if (static_cast<int32_t>(a5) >= 1) {
            take = true;
        }
    }
    const uint8_t flag = (take || a3 == 0) ? 1 : 0;
    lift_field<uint8_t>(self, 0x64) = flag;

    if (flag != 0 && a3 != 0) {
        const uint32_t product = static_cast<uint32_t>(static_cast<int32_t>(a5))
                               * static_cast<uint32_t>(a1)
                               * static_cast<uint32_t>(a2);
        lift_field<int32_t>(self, 0x10) = ext_006A5C62(static_cast<int32_t>(product));
    }

    lift_field<uint8_t>(self, 0x65) = a3;
}
} // namespace lift_0072BFD0

// [0x00724E80] sub_00724E80 (128 bytes)
namespace lift_00724E80 {
extern void* mem_009251B8; // MSVCR80!_time32 (IAT slot)
extern void* mem_00925180; // MSVCR80!srand   (IAT slot)
extern void* mem_009252B4; // MSVCR80!rand    (IAT slot)

// @name ClassName::FillRandomAndCopyPair
// @class ClassName
// @summary Seeds rand() from time, fills a 160-byte random word buffer, passes it to vtable slot 7 of self->+0x10, then writes a {A,B,B,A} dword quad to out.
// @field ClassName +0x10 void* field_0x10
void fn_00724E80(void* self, uint32_t* out) {
    using TimeFn = int32_t(__cdecl*)(int32_t*);
    using SrandFn = void(__cdecl*)(uint32_t);
    using RandFn = int(__cdecl*)();
    using VSlot7Fn = void(__thiscall*)(void* /*this*/, void* /*buf*/, uint32_t /*size*/);

    uint16_t buf[80];

    // srand(_time32(NULL))
    const int32_t t = reinterpret_cast<TimeFn>(mem_009251B8)(nullptr);
    reinterpret_cast<SrandFn>(mem_00925180)(static_cast<uint32_t>(t));

    // for (i = 0x50; i != 0; --i) buf[k++] = (uint16_t)rand();
    RandFn rnd = reinterpret_cast<RandFn>(mem_009252B4);
    for (int i = 0; i < 80; ++i) {
        buf[i] = static_cast<uint16_t>(rnd());
    }

    // obj = self->+0x10; obj->vtable[7](buf, 0xa0)  (thiscall)
    void* obj = lift_field<void*>(self, 0x10);
    void** vtbl = *reinterpret_cast<void***>(obj);
    reinterpret_cast<VSlot7Fn>(vtbl[7])(obj, buf, 0xa0);

    // Copy: A = dword at buf+0x26, B = dword at buf+0x2A; out = {A, B, B, A}
    uint32_t a, b;
    std::memcpy(&a, reinterpret_cast<uint8_t*>(buf) + 0x26, sizeof(a));
    std::memcpy(&b, reinterpret_cast<uint8_t*>(buf) + 0x2A, sizeof(b));
    out[0] = a;
    out[1] = b;
    out[2] = b;
    out[3] = a;
}
} // namespace lift_00724E80

// [0x00722C20]
namespace lift_00722C20 {
// @name ComputeBlendPlusScaledSquare
// @summary Returns BlendTwoValuesOverRange100(a, b, c) plus (x*x)*t1, where x = (a+500)*-0.002 and t1 = (b<c) ? 1000 : -1000.

extern double ext_00722660(double a, double b, double c);
extern double ext_00722720(double a, double b);
extern const double mem_009967F0;
extern const double mem_00996800;

double fn_00722C20(double a, double b, double c) {
    int32_t sign_step = (b < c) ? 1000 : -1000;
    double t1 = static_cast<double>(sign_step);
    double x = (a + mem_009967F0) * mem_00996800;
    double scaled = ext_00722720(x, t1);
    return ext_00722660(a, b, c) + scaled;
}
} // namespace lift_00722C20
