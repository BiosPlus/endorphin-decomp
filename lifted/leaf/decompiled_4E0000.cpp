// Lifted C++ translation unit: lifted/leaf/decompiled_4E0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_004E7E90 {
// @name Unknown::initDefaults
// @class Unknown
// @summary Zeroes the state words at +0x04..+0x10 and the flag byte at +0x1C, then sets +0x14 to 1 and +0x18 to 2.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint8_t field_0x1C
void fn_004E7E90(void* self) {
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x14) = 1;
    lift_field<uint32_t>(self, 0x18) = 2;
    lift_field<uint8_t>(self, 0x1C) = 0;
}
} // namespace lift_004E7E90
#include <cstdint>

// [0x004E31A0] sub_004E31A0 (41 bytes)
namespace lift_004E31A0 {
// @name sub_004E31A0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00490760(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_004E31A0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00490760(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_004E31A0

// [0x004ECA40]
namespace lift_004ECA40 {
extern uint32_t mem_00925134;

// @name Vector8::operator[]
// @class Vector8
// @summary Bounds-checked element access for an 8-byte-stride vector
// @field Vector8 +0x04 uint32_t begin
// @field Vector8 +0x08 uint32_t end
uint32_t __thiscall sub_004ECA40(void* self, uint32_t index) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    uint32_t begin = *reinterpret_cast<uint32_t*>(base + 0x4);
    if (begin == 0) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    } else {
        uint32_t end = *reinterpret_cast<uint32_t*>(base + 0x8);
        uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 3);
        if (index >= count) {
            reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
        }
    }
    uint32_t ptr = *reinterpret_cast<uint32_t*>(base + 0x4);
    return ptr + index * 8u;
}
} // namespace lift_004ECA40

// [0x004EBE30] sub_004EBE30 (55 bytes)
namespace lift_004EBE30 {
// @name sub_004EBE30
// @summary Auto-lifted identical-shape clone of 0x0043D780 (AllocAndInitRecord).
namespace lift_0043D780 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Cdecl allocator: takes one size argument (pushed by caller), returns the block address in eax.
extern void* ext_006A5C62(uint32_t size);

// @name AllocAndInitRecord
// @summary Allocates a 0x18-byte record, zeroes its three dword slots at +0x00/+0x04/+0x08, sets the flag bytes at +0x14=1 and +0x15=0, and returns the record.
// @field AllocAndInitRecord +0x00 uint32_t field_0x00
// @field AllocAndInitRecord +0x04 uint32_t field_0x04
// @field AllocAndInitRecord +0x08 uint32_t field_0x08
// @field AllocAndInitRecord +0x14 uint8_t field_0x14
// @field AllocAndInitRecord +0x15 uint8_t field_0x15
void* fn_004EBE30() {
    // push 0x18 / call ext_006A5C62 / add esp,4 (cdecl: caller cleans up)
    void* rec = ext_006A5C62(0x48);
    uintptr_t base = reinterpret_cast<uintptr_t>(rec);

    // Each store is guarded by a null check on the computed slot address,
    // matching the original `test ecx,ecx / je` pattern.
    if (base != 0) {
        *reinterpret_cast<uint32_t*>(base + 0x00) = 0;
    }
    uintptr_t slot04 = base + 0x04;
    if (slot04 != 0) {
        *reinterpret_cast<uint32_t*>(slot04) = 0;
    }
    uintptr_t slot08 = base + 0x08;
    if (slot08 != 0) {
        *reinterpret_cast<uint32_t*>(slot08) = 0;
    }

    *reinterpret_cast<uint8_t*>(base + 0x44) = 0x01;
    *reinterpret_cast<uint8_t*>(base + 0x45) = 0x00;

    return rec;
}
} // namespace lift_0043D780
} // namespace lift_004EBE30

// [0x004E9D70] sub_004E9D70 (17 bytes)
namespace lift_004E9D70 {
// Known callee 0x00468180: sub_00468180 (Returns global int32 value from mem_00AD7CD8.)
extern INT __cdecl ext_00468180(void);
// Known callee 0x00469530: Unknown::DispatchToIndexedChild (Bounds-checks index against the pointer array at +0x54..+0x58, then calls vtable slot 1 of the selected element with arg and returns its result.)
extern INT __thiscall ext_00469530(void* self, INT index, INT arg);

// @name Unknown::DispatchIndex5ToSelector
// @class Unknown
// @summary Fetches a global int32 as the receiver and dispatches index 5 (arg 0) to its indexed child.
extern INT __cdecl fn_004E9D70(void) {
    INT self = ext_00468180();
    return ext_00469530(reinterpret_cast<void*>(static_cast<intptr_t>(self)), 5, 0);
}
} // namespace lift_004E9D70

// [0x004EF970] sub_004EF970 (63 bytes)
namespace lift_004EF970 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Used here as the allocator (operator new-style, cdecl, one size argument, result in eax).
extern void* ext_006A5C62(size_t size);

// @name AllocRecord18
// @class <ClassName> (optional)
// @summary Allocates a 0x18-byte record, fills it from five arguments (three dwords, a dword pair read through a pointer, and a byte flag), zeroes the trailing byte, and returns the record or null on allocation failure.
// @field Record18 +0x00 DWORD field_0x00
// @field Record18 +0x04 DWORD field_0x04
// @field Record18 +0x08 DWORD field_0x08
// @field Record18 +0x0C DWORD field_0x0C
// @field Record18 +0x10 DWORD field_0x10
// @field Record18 +0x14 BYTE field_0x14
// @field Record18 +0x15 BYTE field_0x15
void* fn_004EF970(DWORD a0, DWORD a1, DWORD a2, const DWORD* a3, BYTE a4) {
    void* rec = ext_006A5C62(0x18);
    if (rec == nullptr) {
        return nullptr;
    }
    lift_field<DWORD>(rec, 0x00) = a0;
    lift_field<DWORD>(rec, 0x04) = a1;
    lift_field<DWORD>(rec, 0x08) = a2;
    lift_field<DWORD>(rec, 0x0C) = a3[0];
    lift_field<DWORD>(rec, 0x10) = a3[1];
    lift_field<BYTE>(rec, 0x14) = a4;
    lift_field<BYTE>(rec, 0x15) = 0;
    return rec;
}
} // namespace lift_004EF970

// [0x004E7E40] sub_004E7E40 (67 bytes)
namespace lift_004E7E40 {
extern void ext_0059F310(DWORD* first, DWORD hole, DWORD len, DWORD value);

// @name sortHeapDWORD
// @summary In-place heapsort tail: repeatedly moves the heap top to the end and sifts the remaining range down via ext_0059F310 (std::sort_heap-style).
void fn_004E7E40(DWORD* first, DWORD* last) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        DWORD value = first[n - 1];
        first[n - 1] = first[0];
        ext_0059F310(first, 0, static_cast<DWORD>(n - 1), value);
        --n;
    }
}
} // namespace lift_004E7E40
