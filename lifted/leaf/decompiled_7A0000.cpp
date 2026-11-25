// Lifted C++ translation unit: lifted/leaf/decompiled_7A0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_007AD590(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>
#include <cstring>
#include <cstdio>
#include <new>
#include <string>
#include <cstdlib>

#include <string>
#include <cstdlib>
// @summary MSVC scalar deleting destructor: calls sub_007AD590 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007AD5C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007AD590(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
#include <cstdarg>

// [0x007AEF70]
namespace lift_007AEF70 {
// @name sub_007AEF70
// @summary Thiscall-style thunk: passes the address of its stack argument block (esp+4) in ecx to fn_006B9D70, then returns 0 (al = 0) and pops 0x54 bytes of arguments.
// @class none
//
// Notes:
//   lea ecx, [esp+4]   ; ecx = address of first stack argument
//   call sub_006B9D70  ; forwards to sub_006B9970
//   xor al, al         ; return value = 0
//   ret 0x54           ; callee cleans 0x54 bytes of stack args

extern void fn_006B9D70(void);

extern unsigned char fn_007AEF70(void) {
    fn_006B9D70();
    return 0;
}
} // namespace lift_007AEF70

// [0x007AA8F0]
namespace lift_007AA8F0 {
// @name Unknown::SetIndexedDwordIfInRange
// @class Unknown
// @summary Stores a dword into this->field_0xF0[index] when 0 < index < 0x12; otherwise does nothing. Callee pops 8 bytes (__thiscall-style, stdcall-like ret 8).
// @field Unknown +0xF0 int32_t field_0xF0 (indexed array base; element stride 4, indices 1..17)

struct Unknown {
    uint8_t pad_0000[0xF0];
    int32_t field_0xF0[18];
};

void Unknown_SetIndexedDwordIfInRange(Unknown* self, int32_t index, int32_t value) {
    if (index > 0 && index < 0x12) {
        self->field_0xF0[index] = value;
    }
}
} // namespace lift_007AA8F0

// [0x007AA910]
namespace lift_007AA910 {
// @name GetIndexedFieldF0
// @summary Returns the 32-bit slot at this+0xF0 + 4*index for index in [1, 17]; returns 0 otherwise.
// @field <unknown> +0xF0 uint32_t field_0xF0 (indexed array base, slots 0x00..0x11 at +0xF0..+0x128; index 0 never read)


uint32_t sub_007AA910(const uint8_t* self, int32_t index) {
    if (index > 0 && index < 0x12) {
        uint32_t value;
        __builtin_memcpy(&value, self + 0xF0 + static_cast<uintptr_t>(index) * 4, sizeof(value));
        return value;
    }
    return 0;
}
} // namespace lift_007AA910

// [0x007AA930]
namespace lift_007AA930 {
// @name Unknown::SetByteSlot138
// @class Unknown
// @summary Stores a byte at this->field_0x138[index] for 1 <= index < 0x12; other indices are ignored.
// @field Unknown +0x138 uint8_t field_0x138

void Unknown_SetByteSlot138(uint8_t* self, int32_t index, uint8_t value) {
    if (index > 0 && index < 0x12) {
        self[0x138 + index] = value;
    }
}
} // namespace lift_007AA930

// [0x007AF7E0] sub_007AF7E0 (23 bytes)
namespace lift_007AF7E0 {
// Known callee 0x0079B140: DispatchThreeArgsToOptionalHook (If the global hook pointer mem_00AAFC2C is non-null, call it with (a1, a2, &a3); otherwise do nothing.)
extern void ext_0079B140(uint32_t a1, uint32_t a2, uint32_t a3);

// @name Unknown::DispatchFirstDwordWithTag
// @class Unknown
// @summary Loads the first dword of the struct pointed to by arg1 and forwards it with constant tag 0x00AB11D8 to the optional dispatch hook; always returns 0.
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_007AF7E0(void* self) {
    uint32_t value = lift_field<uint32_t>(self, 0x00);
    // Only two values are pushed in the original code; the third callee slot
    // holds the caller's return-address slot on the stack, which is not
    // reproducible in portable C++. 0 is passed here as a stand-in.
    ext_0079B140(value, 0x00AB11D8u, 0u);
    return 0;
}
} // namespace lift_007AF7E0

// [0x007AA970] sub_007AA970 (32 bytes)
namespace lift_007AA970 {
// @name Unknown::SetIndexedDwordSlot194
// @class Unknown
// @summary Stores a dword into slot `index` of the 0x194-based table when 0 < index < 0x12; otherwise does nothing. Callee pops 2 args (ret 8).
// @field Unknown +0x194 DWORD field_0x194[18]
void fn_007AA970(void* self, LONG index, DWORD value) {
    if (index > 0 && index < 0x12) {
        lift_field<DWORD>(self, 0x194 + static_cast<ptrdiff_t>(index) * 4) = value;
    }
}
} // namespace lift_007AA970

// [0x007AA950] sub_007AA950 (32 bytes)
namespace lift_007AA950 {
// @name Unknown::SetIndexedDwordIfInRange_14C
// @class Unknown
// @summary Stores a dword into this->field_0x14C[index] when 0 < index < 0x12; otherwise does nothing. Callee pops 8 bytes (ret 8).
// @field Unknown +0x14C int32_t field_0x14C (indexed array base; element stride 4, indices 1..17)
void Unknown_SetIndexedDwordIfInRange_14C(uint8_t* self, int32_t index, uint32_t value) {
    if (index > 0 && index < 0x12) {
        __builtin_memcpy(self + 0x14C + static_cast<uintptr_t>(index) * 4, &value, sizeof(value));
    }
}
} // namespace lift_007AA950

// [0x007AAA00]
namespace lift_007AAA00 {
// @name Unknown::SetIndexedDwordSlot734
// @class Unknown
// @summary Stores a dword into slot[index] of the dword array at +0x734 when 0 < index < 0x12; other indices are ignored. thiscall, 2 stack args, callee pops 8 bytes.
// @field Unknown +0x734 uint32_t field_0x734 (base of 18-entry dword array; element i at +0x734 + 4*i, valid i = 1..17)

struct Unknown;

// Equivalent to: if (index > 0 && index < 0x12) this->field_0x734[index] = value;
// ECX = this; stack: [esp+4] = index, [esp+8] = value; ret 8.
void __thiscall Unknown_SetIndexedDwordSlot734(Unknown* self, int index, uint32_t value)
{
    if (index > 0 && index < 0x12) {
        reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x734)[index] = value;
    }
}
} // namespace lift_007AAA00

// [0x007AEFD0]
namespace lift_007AEFD0 {
// @name SwapFirstTwoBytes
// @summary Swaps the byte at offset 0 and the byte at offset 1 of the buffer pointed to by the single stack argument (cdecl, no cleanup).
void sub_007AEFD0(uint8_t* p) {
    uint8_t first = p[0];
    uint8_t second = p[1];
    p[1] = first;
    p[0] = second;
}
} // namespace lift_007AEFD0

// [0x007AB720] sub_007AB720 (32 bytes)
namespace lift_007AB720 {
extern void ext_007857F0(void* self);

// @name ResetDoubleAndClearFlag_78
// @summary Sets the double at +0x78 to 1.0, clears the byte flag at +0x84, then tail-jumps to ext_007857F0 with the same this pointer.
// @field <Unknown> +0x78 double scale
// @field <Unknown> +0x84 BOOLEAN flag
void fn_007AB720(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    // xor eax, eax / mov [ecx+0x78], eax : low dword of the double = 0
    // mov [ecx+0x7c], 0x3ff00000        : high dword = 0x3FF00000 -> IEEE-754 1.0
    const double one = 1.0;
    std::memcpy(base + 0x78, &one, sizeof(one));

    // mov [ecx+0x84], al : al is 0 (from the xor above)
    const BOOLEAN flag = 0;
    std::memcpy(base + 0x84, &flag, sizeof(flag));

    // jmp 0x7857f0 : tail call; the original also leaves eax = 0 at the jump.
    ext_007857F0(self);
}
} // namespace lift_007AB720

// [0x007AC670] sub_007AC670 (32 bytes)
namespace lift_007AC670 {
// @name FreeAndClearPointerSlot
// @summary Frees the pointer stored in *slot (if slot is non-null) via free(), then sets *slot to null.
// @field Unknown +0x00 void* field_0x00
void fn_007AC670(void* self) {
    void** slot = static_cast<void**>(self);
    if (slot != nullptr) {
        std::free(*slot);
        *slot = nullptr;
    }
}
} // namespace lift_007AC670

// [0x007AEC30]
namespace lift_007AEC30 {
// @name sub_007AEC30
// @summary Sets two 32-bit fields at +0x58 and +0x5C and clears +0x60 if the first argument is non-null.
// @field unknown +0x58 uint32_t field_0x58
// @field unknown +0x5C uint32_t field_0x5C
// @field unknown +0x60 uint32_t field_0x60

bool __thiscall sub_007AEC30(void* self, uint32_t arg1, uint32_t arg2) {
    if (arg1 == 0) {
        return false;
    }
    uint8_t* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(obj + 0x58) = arg1;
    *reinterpret_cast<uint32_t*>(obj + 0x5C) = arg2;
    *reinterpret_cast<uint32_t*>(obj + 0x60) = 0;
    return true;
}
} // namespace lift_007AEC30

// [0x007A5EF0]
namespace lift_007A5EF0 {
namespace lift_007A5EF0 {
extern uint32_t mem_009251D8;

// @name sub_007A5EF0
// @summary Frees the buffer pointed to by *p (if non-null) via CRT free and nulls *p; no-op if p is null.
void __cdecl fn_007A5EF0(void** p) {
    using FreeFn = void(__cdecl*)(void*);
    FreeFn crt_free = reinterpret_cast<FreeFn>(static_cast<uintptr_t>(mem_009251D8));

    if (p == nullptr) {
        return;
    }
    void* buf = *p;
    if (buf != nullptr) {
        crt_free(buf);
    }
    *p = nullptr;
}
} // namespace lift_007A5EF0
} // namespace lift_007A5EF0

// [0x007AF010] sub_007AF010 (48 bytes)
namespace lift_007AF010 {
// @name swapBytePairsInBuffer
// @summary Swaps the two bytes of each 16-bit pair in a buffer, for `count` pairs (cdecl, args: buffer, count).
void fn_007AF010(uint8_t* buffer, uint32_t count) {
    // Loop runs `count` times; each iteration swaps buffer[i] and buffer[i+1], then advances by 2.
    // A zero count returns immediately.
    for (uint32_t i = 0; i < count; ++i) {
        uint8_t* p = buffer + static_cast<size_t>(i) * 2;
        uint8_t first = p[0];
        p[0] = p[1];
        p[1] = first;
    }
}
} // namespace lift_007AF010

// [0x007AD590] sub_007AD590 (48 bytes)
namespace lift_007AD590 {
// @name UnknownClass::initVtable
// @class UnknownClass
// @summary Stores vtable pointer 0x009989F0 into the object's first dword (thiscall, no args, no return value).
// @field UnknownClass +0x00 uint32_t field_0x00
void fn_007AD590(void* self) {
    // Single store of the vtable pointer at offset 0, then return.
    lift_field<uint32_t>(self, 0) = 0x009989F0u;
}
} // namespace lift_007AD590

// [0x007AF4C0] sub_007AF4C0 (50 bytes)
namespace lift_007AF4C0 {
// @name compareKeyPairThenSignedField
// @class Unknown
// @summary Three-way style compare of two objects: unsigned key at +0x00 first, then signed value at +0x08 on tie; returns -1 or 1 (never 0).
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 int32_t field_0x08
static uint32_t readU32At(const void* obj, std::size_t off) {
    uint32_t v = 0;
    std::memcpy(&v, static_cast<const uint8_t*>(obj) + off, sizeof(v));
    return v;
}

static int32_t readS32At(const void* obj, std::size_t off) {
    int32_t v = 0;
    std::memcpy(&v, static_cast<const uint8_t*>(obj) + off, sizeof(v));
    return v;
}

int32_t fn_007AF4C0(void** a, void** b) {
    const void* objA = *a;
    const void* objB = *b;

    uint32_t keyA = readU32At(objA, 0x00);
    uint32_t keyB = readU32At(objB, 0x00);
    if (keyA != keyB) {
        return (keyA < keyB) ? -1 : 1;
    }

    int32_t valA = readS32At(objA, 0x08);
    int32_t valB = readS32At(objB, 0x08);
    return (valB >= valA) ? 1 : -1;
}
} // namespace lift_007AF4C0

// [0x007ABD00]
namespace lift_007ABD00 {
// @name ReleaseBufferItems
// @class Buffer
// @summary Walks the item array of the Buffer at this+0x04 from the last index down, calls ext_00772040 and ext_006A5C5C on each non-null item, then releases the Buffer.
// @field Buffer +0x00 uint32_t count
// @field Buffer +0x10 void** items

extern void ext_00772040(void* self);
extern void ext_006A5C5C(void* item);
extern void ext_006D2250(void* self);

void fn_007ABD00(void* ecx) {
    uint8_t* buf = reinterpret_cast<uint8_t*>(ecx) + 0x04;

    uint32_t n = *reinterpret_cast<uint32_t*>(buf + 0x00);
    if (n != 0) {
        do {
            --n;
            void** items = *reinterpret_cast<void***>(buf + 0x10);
            void* item = items[n];
            if (item != nullptr) {
                ext_00772040(item);
                ext_006A5C5C(item);
            }
        } while (n != 0);
    }

    ext_006D2250(buf);
}
} // namespace lift_007ABD00

// [0x007AA7F0]
namespace lift_007AA7F0 {
// @name sub_007AA7F0
// @summary Returns true if the argument matches any of four global sentinel values; otherwise returns whether it equals the fourth global.
// @field mem_00B61230 (global) used as comparison value 1
// @field mem_00B60F58 (global) used as comparison value 2
// @field mem_00B5EB78 (global) used as comparison value 3
// @field mem_00B5E400 (global) used as comparison value 4 (result is equality)

extern uint32_t mem_00B61230;
extern uint32_t mem_00B60F58;
extern uint32_t mem_00B5EB78;
extern uint32_t mem_00B5E400;

bool sub_007AA7F0(uint32_t arg) {
    if (arg == mem_00B61230) return true;
    if (arg == mem_00B60F58) return true;
    if (arg == mem_00B5EB78) return true;
    return arg == mem_00B5E400;
}
} // namespace lift_007AA7F0

// [0x007AA3D0] sub_007AA3D0 (64 bytes)
namespace lift_007AA3D0 {
// @name descriptiveName: ClassifyDoubleIndirectTag
// @summary Follows a double pointer to a 32-bit tag and maps known tags to codes 3, 1, 2 (else 0); returns 0 on any null pointer.
// @field none (raw double-pointer dereference, no named struct layout)
int32_t fn_007AA3D0(const void* const* pp) {
    if (pp == nullptr) {
        return 0;
    }
    const uint32_t* p = static_cast<const uint32_t*>(*pp);
    if (p == nullptr) {
        return 0;
    }
    const uint32_t tag = *p;
    if (tag == 0x3DAAu) {
        return 3;
    }
    if (tag == 0x4D4Du) {
        return 1;
    }
    if (tag == 0xC23Du) {
        return 2;
    }
    return 0;
}
} // namespace lift_007AA3D0

// [0x007AF040]
namespace lift_007AF040 {
// @name ByteSwapDwordArray
// @summary Reverses the byte order of each 32-bit word in an array of `count` dwords, in place.
void ByteSwapDwordArray(uint8_t* data, uint32_t count) {
    for (uint32_t i = 0; i < count; ++i) {
        uint8_t* p = data + static_cast<size_t>(i) * 4;
        uint8_t b0 = p[0];
        uint8_t b1 = p[1];
        uint8_t b2 = p[2];
        uint8_t b3 = p[3];
        p[0] = b3;
        p[1] = b2;
        p[2] = b1;
        p[3] = b0;
    }
}
} // namespace lift_007AF040

// [0x007AF200]
namespace lift_007AF200 {
// @name Unknown::ComputeRowByteCount
// @class Unknown
// @summary Returns byte count (bits rounded up to bytes) of a row from fields at +0x30/+0x40, optionally scaled by +0x4e when the mode at +0x72 equals 1; returns 0 if +0x34 or +0x30 is zero.
// @field Unknown +0x30 uint32_t field_0x30
// @field Unknown +0x34 uint32_t field_0x34
// @field Unknown +0x40 uint16_t field_0x40
// @field Unknown +0x4e uint16_t field_0x4e
// @field Unknown +0x72 uint16_t field_0x72

uint32_t fn_007AF200(const void* self) {
    if (lift_field<uint32_t>(self, 0x34) == 0) {
        return 0;
    }
    const uint32_t count = lift_field<uint32_t>(self, 0x30);
    if (count == 0) {
        return 0;
    }
    uint32_t bits = static_cast<uint32_t>(lift_field<uint16_t>(self, 0x40)) * count;
    if (lift_field<uint16_t>(self, 0x72) == 1) {
        bits *= static_cast<uint32_t>(lift_field<uint16_t>(self, 0x4e));
    }
    return (bits + 7) >> 3;
}
} // namespace lift_007AF200

// [0x007AAB30] sub_007AAB30 (64 bytes)
namespace lift_007AAB30 {
// MSVCR80!free, called through its import-address-table slot.
extern void(__cdecl* mem_009251D8)(void* ptr);

// @name Unknown::ReleaseDoubleIndirectBuffer
// @class Unknown
// @summary Frees the buffer referenced by **self, then frees *self and nulls both slots.
// @field Unknown +0x00 void* field_0x00
void fn_007AAB30(void* self) {
    void** outer = static_cast<void**>(self);
    if (outer == nullptr) {
        return;
    }

    void** inner = static_cast<void**>(*outer);
    void* buffer = *inner;
    if (buffer != nullptr) {
        mem_009251D8(buffer);
        *inner = nullptr;
    }

    mem_009251D8(*outer);
    *outer = nullptr;
}
} // namespace lift_007AAB30

// [0x007AF080]
namespace lift_007AF080 {
// @name SwapDwordPairs
// @summary Byte-swaps the 32-bit words of `count` dword pairs in place, after byte-swapping 2*count dwords via ext_007AF040.

void ext_007AF040(uint8_t* data, uint32_t count);

void SwapDwordPairs(uint8_t* data, uint32_t count) {
    ext_007AF040(data, count * 2);

    for (uint32_t i = 0; i < count; ++i) {
        uint8_t* p = data + static_cast<size_t>(i) * 8;
        uint32_t a;
        uint32_t b;
        std::memcpy(&a, p, 4);
        std::memcpy(&b, p + 4, 4);
        std::memcpy(p, &b, 4);
        std::memcpy(p + 4, &a, 4);
    }
}
} // namespace lift_007AF080

// [0x007AF310]
namespace lift_007AF310 {
// @name clampAndAlignDimensions
// @summary Clamps two integer pointers to 256 if less than 1, then aligns each up to a 16-byte/pixel boundary.
void __cdecl sub_007AF310(uint32_t /*unused*/, int32_t* a2, int32_t* a3) {
    if (*a2 < 1) {
        *a2 = 0x100;
    }
    if (*a3 < 1) {
        *a3 = 0x100;
    }
    uint32_t v1 = static_cast<uint32_t>(*a2);
    if ((v1 & 0xfu) != 0) {
        *a2 = static_cast<int32_t>(((v1 + 0xfu) >> 4) << 4);
    }
    uint32_t v2 = static_cast<uint32_t>(*a3);
    if ((v2 & 0xfu) != 0) {
        *a3 = static_cast<int32_t>(((v2 + 0xfu) >> 4) << 4);
    }
}
} // namespace lift_007AF310

// [0x007ABF90] sub_007ABF90 (70 bytes)
namespace lift_007ABF90 {
// @name sub_007ABF90
// @summary Auto-lifted identical-shape clone of 0x0079F2E0 (sub_0079F2E0 (descriptiveName: IsAnyKnownValue)).
namespace lift_0079F2E0 {
extern DWORD mem_00B61248;
extern DWORD mem_00B61230;
extern DWORD mem_00B60F58;
extern DWORD mem_00B5EB78;
extern DWORD mem_00B5E400;

// @name sub_0079F2E0 (descriptiveName: IsAnyKnownValue)
// @summary Returns TRUE if the argument equals any of five global sentinel values (mem_00B61168, mem_00B61230, mem_00B60F58, mem_00B5EB78, mem_00B5E400).
// (no class; no struct field offsets accessed)
BOOLEAN __stdcall fn_007ABF90(DWORD value) {
    return static_cast<BOOLEAN>(
        value == mem_00B61248 ||
        value == mem_00B61230 ||
        value == mem_00B60F58 ||
        value == mem_00B5EB78 ||
        value == mem_00B5E400);
}
} // namespace lift_0079F2E0
} // namespace lift_007ABF90

// [0x007AC210] sub_007AC210 (70 bytes)
namespace lift_007AC210 {
// @name sub_007AC210
// @summary Auto-lifted identical-shape clone of 0x0079F2E0 (sub_0079F2E0 (descriptiveName: IsAnyKnownValue)).
namespace lift_0079F2E0 {
extern DWORD mem_00B61260;
extern DWORD mem_00B61230;
extern DWORD mem_00B60F58;
extern DWORD mem_00B5EB78;
extern DWORD mem_00B5E400;

// @name sub_0079F2E0 (descriptiveName: IsAnyKnownValue)
// @summary Returns TRUE if the argument equals any of five global sentinel values (mem_00B61168, mem_00B61230, mem_00B60F58, mem_00B5EB78, mem_00B5E400).
// (no class; no struct field offsets accessed)
BOOLEAN __stdcall fn_007AC210(DWORD value) {
    return static_cast<BOOLEAN>(
        value == mem_00B61260 ||
        value == mem_00B61230 ||
        value == mem_00B60F58 ||
        value == mem_00B5EB78 ||
        value == mem_00B5E400);
}
} // namespace lift_0079F2E0
} // namespace lift_007AC210

// [0x007AEF80] sub_007AEF80 (74 bytes)
namespace lift_007AEF80 {
// Known callee 0x006B9D70: sub_006B9D70 (Pure jump thunk forwarding to sub_006B9970.)
// Called thiscall-style: ecx = object pointer, one stack argument (0 or -1).
extern void ext_006B9D70(void* thisPtr, int32_t arg);

// @name ScopedGuardPair_007AEF80
// @summary Runs two guarded calls on stack-local scope objects (state 0, then -1) and returns FALSE; the SEH frame setup and teardown from the original is omitted.
// @field none (no accesses through self)
void fn_007AEF80(void* self) {
    (void)self;

    // Stack-local scope objects (original: esp+0x10 and esp+0x5C). Sizes are not
    // recovered from the disassembly; only their addresses are used here.
    alignas(8) uint8_t scopeA[0x4C] = {};
    alignas(8) uint8_t scopeB[0x20] = {};

    // First guarded call: state 0 (original: [esp+8] = 0).
    ext_006B9D70(scopeA, 0);

    // Second guarded call: state -1 (original: [esp+8] = 0xFFFFFFFF).
    ext_006B9D70(scopeB, -1);

    // Original returns al = 0 with ret 0x98 (callee pops 0x98 bytes of arguments).
    return;
}
} // namespace lift_007AEF80

// [0x007AC510] sub_007AC510 (75 bytes)
namespace lift_007AC510 {
// Callee 0x007AA910: GetIndexedFieldF0 (returns the 32-bit slot at self+0xF0 + 4*index, or 0 if index is outside [1, 17]).
extern uint32_t ext_007AA910(const void* self, int32_t index);

// @name StateFromIndexedF0Slot6_007AC510
// @class Unknown
// @summary Reads the F0 slot at index 6 and maps it to a state value (0->0, 1->2, 2->1) stored at +0x7D4 and returned; other values leave +0x7D4 unchanged and return it.
// @field Unknown +0x7D4 uint32_t field_0x7d4
uint32_t fn_007AC510(void* self) {
    const uint32_t v = ext_007AA910(self, 6);
    if (v == 0) {
        lift_field<uint32_t>(self, 0x7D4) = 0;
    } else if (v == 1) {
        lift_field<uint32_t>(self, 0x7D4) = 2;
    } else if (v == 2) {
        lift_field<uint32_t>(self, 0x7D4) = 1;
    }
    return lift_field<uint32_t>(self, 0x7D4);
}
} // namespace lift_007AC510

// [0x007AEE00] sub_007AEE00 (77 bytes)
namespace lift_007AEE00 {
// @name Unknown::AppendClampedBytes_007AEE00
// @class Unknown
// @summary Copies min(count, remaining) bytes from src into the buffer at the write cursor and advances the cursor; returns bytes copied (0 if src or buffer is null).
// @field Unknown +0x58 DWORD buffer
// @field Unknown +0x5c DWORD capacity_end
// @field Unknown +0x60 DWORD cursor
DWORD fn_007AEE00(void* self, const void* src, DWORD count) {
    auto* base = static_cast<unsigned char*>(self);

    if (src == nullptr) {
        return 0;
    }

    DWORD buffer = *reinterpret_cast<DWORD*>(base + 0x58);
    if (buffer == 0) {
        return 0;
    }

    DWORD capacity_end = *reinterpret_cast<DWORD*>(base + 0x5c);
    DWORD cursor = *reinterpret_cast<DWORD*>(base + 0x60);
    DWORD remaining = capacity_end - cursor;

    DWORD n = (count > remaining) ? remaining : count;

    void* dst = reinterpret_cast<void*>(static_cast<uintptr_t>(buffer) + cursor);
    std::memcpy(dst, src, n);

    *reinterpret_cast<DWORD*>(base + 0x60) = cursor + n;
    return n;
}
} // namespace lift_007AEE00

// [0x007AE020] sub_007AE020 (77 bytes)
namespace lift_007AE020 {
// @name Unknown::ReleaseSlotPointers_007AE020
// @class Unknown
// @summary For each of 7 slots whose flag byte is nonzero and whose pointer is non-null, clears the slot and calls virtual slot 1 (arg 0) on the object; then frees both slot and flag arrays.
// @field Unknown +0x00 void** field_0x00
// @field Unknown +0x04 uint8_t* field_0x04
void fn_007AE020(void* self) {
    void** slots = lift_field<void**>(self, 0x00);
    if (slots == nullptr) {
        return;
    }
    uint8_t* flags = lift_field<uint8_t*>(self, 0x04);

    for (int i = 0; i < 7; ++i) {
        void* obj = slots[i];
        if (flags[i] != 0 && obj != nullptr) {
            slots[i] = nullptr;
            void** vtbl = *reinterpret_cast<void***>(obj);
            reinterpret_cast<void (*)(void*, int)>(vtbl[1])(obj, 0);
        }
    }

    std::free(slots);
    std::free(flags);
}
} // namespace lift_007AE020

// [0x007AF8F0] sub_007AF8F0 (80 bytes)
namespace lift_007AF8F0 {
extern uint8_t* mem_00B61C18;   // head of singly linked node list
extern uint8_t  mem_00AB1870[]; // static 12-byte-stride entry table

// @name FindRecordByKey16
// @summary Looks up a 16-bit key in the node list first, then the static table; returns the match or null.
// @field ListNode +0x00 uint8_t* field_0x00
// @field ListNode +0x04 uint8_t* field_0x04
// @field Record +0x04 uint16_t field_0x04
// @field TableEntry +0x00 uint32_t field_0x00
// @field TableEntry +0x04 uint16_t field_0x04
uint8_t* fn_007AF8F0(uint16_t key) {
    // Pass 1: walk the linked node list; each node points at a record whose +4 word is the key.
    uint8_t* node = mem_00B61C18;
    while (node != nullptr) {
        uint8_t* record = *reinterpret_cast<uint8_t**>(node + 4);
        if (lift_field<uint16_t>(record, 4) == key) {
            return record;
        }
        node = *reinterpret_cast<uint8_t**>(node);
    }

    // Pass 2: scan the static table. An empty table (first dword == 0) yields null.
    uint8_t* entry = mem_00AB1870;
    if (lift_field<uint32_t>(entry, 0) == 0) {
        return nullptr;
    }
    for (;;) {
        if (lift_field<uint16_t>(entry, 4) == key) {
            return entry;
        }
        uint32_t next = lift_field<uint32_t>(entry, 12);
        entry += 12;
        if (next == 0) {
            break;
        }
    }
    return nullptr;
}
} // namespace lift_007AF8F0

// [0x007AE140] sub_007AE140 (80 bytes)
namespace lift_007AE140 {
// Default machine-name string in .data, copied when GetComputerNameA fails.
extern const char mem_00AAC03C[];
extern BOOL __stdcall ext_GetComputerNameA(LPSTR lpBuffer, DWORD* nSize);

// @name GetComputerNameOrFallback
// @summary Calls GetComputerNameA into buffer; on failure copies the fixed default name (including NUL) into buffer and returns false.
bool fn_007AE140(LPSTR buffer, DWORD nSize) {
    if (ext_GetComputerNameA(buffer, &nSize)) {
        return true;
    }
    const char* src = mem_00AAC03C;
    std::memcpy(buffer, src, std::strlen(src) + 1);
    return false;
}
} // namespace lift_007AE140

// [0x007AF750] sub_007AF750 (79 bytes)
namespace lift_007AF750 {
// Known callee 0x007AF8F0: ext_007AF8F0 (Looks up a 16-bit key in the node list first, then the static table; returns the match or null.)
extern uint8_t* ext_007AF8F0(uint16_t key);
// Known callee 0x0079B140: ext_0079B140 (If the global hook pointer mem_00AAFC2C is non-null, call it with (a1, a2, &a3); otherwise do nothing.)
// The original pushes four dwords (a1, a2, a3, and the caller's arg3) before calling, so the fourth is passed through.
extern void ext_0079B140(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

// @name Unknown::DispatchRecordByKey16
// @class Unknown
// @summary Looks up the record keyed by this+0x44; forwards this+0x00 and either the record's first dword or the key, plus arg3, to the optional hook. Always returns -1.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x44 uint16_t field_0x44
int32_t fn_007AF750(void* self, uint32_t arg2, uint32_t arg3) {
    (void)arg2;

    const uint16_t key = lift_field<uint16_t>(self, 0x44);
    const uint32_t a1 = lift_field<uint32_t>(self, 0x00);
    uint8_t* rec = ext_007AF8F0(key);

    if (rec != nullptr) {
        const uint32_t recValue = lift_field<uint32_t>(rec, 0);
        ext_0079B140(a1, 0x00AB11B4u, recValue, arg3);
    } else {
        ext_0079B140(a1, 0x00AB117Cu, static_cast<uint32_t>(key), arg3);
    }

    return -1;
}
} // namespace lift_007AF750

// [0x007AF730] sub_007AF730 (19 bytes)
namespace lift_007AF730 {
// Known callee 0x007AF750: Unknown::DispatchRecordByKey16 (Looks up the record keyed by this+0x44; forwards this+0x00 and either the record's first dword or the key, plus arg3, to the optional hook. Always returns -1.)
// The call site pushes only two arguments (self, key constant); the third is not set here.
extern int32_t ext_007AF750(void* self, uint32_t key);

// @name ForwardDispatchRecordByKey16Const
// @summary Forwards its first argument and the constant key 0x00AB10C4 to DispatchRecordByKey16 and returns that result.
int32_t fn_007AF730(void* self) {
    return ext_007AF750(self, 0x00AB10C4u);
}
} // namespace lift_007AF730

// [0x007AF7A0] sub_007AF7A0 (19 bytes)
namespace lift_007AF7A0 {
// Known callee 0x007AF750: Unknown::DispatchRecordByKey16 (Looks up the record keyed by this+0x44; forwards this+0x00 and either the record's first dword or the key, plus arg3, to the optional hook. Always returns -1.)
// The original caller pushes only two arguments (self, 0x00AAFCCC); the callee's third slot is not written here.
extern int32_t ext_007AF750(void* self, uint32_t arg2);

// @name Unknown::DispatchRecordByKey16Wrapper
// @class Unknown (optional)
// @summary Forwards its first argument and the constant 0x00AAFCCC to DispatchRecordByKey16 and returns that result (always -1).
// @field none (this function accesses no fields directly)
int32_t fn_007AF7A0(void* self) {
    return ext_007AF750(self, 0x00AAFCCCu);
}
} // namespace lift_007AF7A0

// [0x007AF640] sub_007AF640 (19 bytes)
namespace lift_007AF640 {
// @name sub_007AF640
// @summary Auto-lifted identical-shape clone of 0x007AF730 (ForwardDispatchRecordByKey16Const).
namespace lift_007AF730 {
// Known callee 0x007AF750: Unknown::DispatchRecordByKey16 (Looks up the record keyed by this+0x44; forwards this+0x00 and either the record's first dword or the key, plus arg3, to the optional hook. Always returns -1.)
// The call site pushes only two arguments (self, key constant); the third is not set here.
extern int32_t ext_007AF660(void* self, uint32_t key);

// @name ForwardDispatchRecordByKey16Const
// @summary Forwards its first argument and the constant key 0x00AB10C4 to DispatchRecordByKey16 and returns that result.
int32_t fn_007AF640(void* self) {
    return ext_007AF660(self, 0x00AB10C4u);
}
} // namespace lift_007AF730
} // namespace lift_007AF640

// [0x007AF6F0] sub_007AF6F0 (19 bytes)
namespace lift_007AF6F0 {
// @name sub_007AF6F0
// @summary Auto-lifted identical-shape clone of 0x007AF730 (ForwardDispatchRecordByKey16Const).
namespace lift_007AF730 {
// Known callee 0x007AF750: Unknown::DispatchRecordByKey16 (Looks up the record keyed by this+0x44; forwards this+0x00 and either the record's first dword or the key, plus arg3, to the optional hook. Always returns -1.)
// The call site pushes only two arguments (self, key constant); the third is not set here.
extern int32_t ext_007AF660(void* self, uint32_t key);

// @name ForwardDispatchRecordByKey16Const
// @summary Forwards its first argument and the constant key 0x00AB10C4 to DispatchRecordByKey16 and returns that result.
int32_t fn_007AF6F0(void* self) {
    return ext_007AF660(self, 0xAAFCCCu);
}
} // namespace lift_007AF730
} // namespace lift_007AF6F0

// [0x007AEE50] sub_007AEE50 (83 bytes)
namespace lift_007AEE50 {
// @name SetClampedOffset_007AEE50
// @class <ClassName> (unknown; member taking `this` in ECX)
// @summary Updates the field at +0x60 from mode/value, clamped to the limit at +0x5C; no-op when the gate at +0x58 is zero.
// @field <ClassName> +0x58 int32_t field_0x58
// @field <ClassName> +0x5C int32_t field_0x5C
// @field <ClassName> +0x60 int32_t field_0x60
void fn_007AEE50(void* self, int32_t mode, int32_t value) {
    if (lift_field<int32_t>(self, 0x58) == 0) {
        return;
    }

    // Wrapping add/sub to match the 32-bit hardware semantics without signed-overflow UB.
    int32_t v = 0;
    bool checkNegative = true;
    switch (mode) {
    case 0:
        v = value;
        break;
    case 1:
        v = static_cast<int32_t>(static_cast<uint32_t>(lift_field<int32_t>(self, 0x60)) +
                                 static_cast<uint32_t>(value));
        break;
    case 2:
        v = static_cast<int32_t>(static_cast<uint32_t>(lift_field<int32_t>(self, 0x5C)) -
                                 static_cast<uint32_t>(value));
        break;
    default:
        v = 0;
        checkNegative = false;
        break;
    }

    if (checkNegative && v < 0) {
        lift_field<int32_t>(self, 0x60) = 0;
        return;
    }

    const int32_t limit = lift_field<int32_t>(self, 0x5C);
    lift_field<int32_t>(self, 0x60) = (v <= limit) ? v : limit;
}
} // namespace lift_007AEE50

// [0x007ABE70] sub_007ABE70 (87 bytes)
namespace lift_007ABE70 {
// @name sub_007ABE70
// @summary Auto-lifted identical-shape clone of 0x00706DD0 (AllocAndInitUnknown_00706DD0).
namespace lift_00706DD0 {
extern void* ext_006A5C62(size_t size);
extern void* ext_007ABC20(void* self);

// @name AllocAndInitUnknown_00706DD0
// @summary Allocates 0x4C bytes via MFC operator new and initializes the Unknown object if allocation succeeds.
extern void* fn_007ABE70(void) {
    void* obj = ext_006A5C62(0x1C);
    if (obj != nullptr) {
        return ext_007ABC20(obj);
    }
    return nullptr;
}
} // namespace lift_00706DD0
} // namespace lift_007ABE70

// [0x007ABC20]
namespace lift_007ABC20 {
// @name sub_007ABC20
// @summary Constructor that initializes base, a 20-byte member at +0x04, an inline pointer at +0x18, and sets vtable mem_009983CC.
// @field unknown +0x00 uint32_t vtable
// @field unknown +0x04 uint8_t[20] field_0x04
// @field unknown +0x14 uint8_t[4] field_0x14
// @field unknown +0x18 uint32_t field_0x18


extern uint32_t mem_009983CC;
extern void* ext_007ABBE0(void* self);
extern uint32_t ext_006D2130(uint32_t self, int32_t arg1, uint32_t arg2);

void* __thiscall sub_007ABC20(void* self) {
    uint8_t* p = static_cast<uint8_t*>(self);
    ext_007ABBE0(self);
    uint8_t* member = p + 0x04;
    ext_006D2130(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(member)), 0x10, 0x4);
    *reinterpret_cast<uint32_t*>(member + 0x14) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(member + 0x10));
    *reinterpret_cast<uint32_t*>(p) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_009983CC));
    return self;
}
} // namespace lift_007ABC20

// [0x007AEC70]
namespace lift_007AEC70 {
// @name MemoryReader::readBytes
// @class MemoryReader
// @summary Reads up to size bytes from an in-memory buffer into dst, advancing the read offset
// @field MemoryReader +0x58 uint32_t field_0x58
// @field MemoryReader +0x5c uint32_t field_0x5c
// @field MemoryReader +0x60 uint32_t field_0x60


uint32_t __thiscall sub_007AEC70(void* self, void* dst, uint32_t size, uint8_t failIfShort) {
    if (!dst) {
        return 0;
    }

    auto* base = static_cast<uint8_t*>(self);
    uint32_t buf = *reinterpret_cast<const uint32_t*>(base + 0x58);
    if (!buf) {
        return 0;
    }

    uint32_t offset = *reinterpret_cast<const uint32_t*>(base + 0x60);
    uint32_t total = *reinterpret_cast<const uint32_t*>(base + 0x5c);
    uint32_t remaining = total - offset;

    uint32_t toCopy = remaining;
    if (size <= remaining) {
        toCopy = size;
    } else if (failIfShort != 0) {
        return 0;
    }

    std::memcpy(dst, reinterpret_cast<const void*>(static_cast<uintptr_t>(buf + offset)), toCopy);
    *reinterpret_cast<uint32_t*>(base + 0x60) = offset + toCopy;
    return toCopy;
}
} // namespace lift_007AEC70

// [0x007AED60]
namespace lift_007AED60 {
// @name MemoryReader::readUInt32
// @class MemoryReader
// @summary Reads a 32-bit unsigned integer from an in-memory buffer into dst
extern uint32_t __thiscall ext_007AEC70(void* self, void* dst, uint32_t size, uint8_t failIfShort);

uint32_t __thiscall sub_007AED60(void* self, uint32_t* dst, uint8_t swapEndian) {
    if (!ext_007AEC70(self, dst, 4, 1)) {
        return 0;
    }
    (void)swapEndian;
    return *dst;
}
} // namespace lift_007AED60

// [0x007AEDA0]
namespace lift_007AEDA0 {
// @name MemoryReader::readUInt16
// @class MemoryReader
// @summary Reads a 16-bit unsigned integer from the memory reader into dst and returns it, or 0 on failure.


extern uint32_t __thiscall ext_007AEC70(void* self, void* dst, uint32_t size, uint8_t failIfShort);

uint16_t __thiscall sub_007AEDA0(void* self, uint16_t* dst, uint8_t swapEndian) {
    (void)swapEndian;
    if (ext_007AEC70(self, dst, 2, 1) == 0) {
        return 0;
    }
    return *dst;
}
} // namespace lift_007AEDA0

// [0x007AECD0]
namespace lift_007AECD0 {
// @name MemoryReader::readBytesAllowShort
// @class MemoryReader
// @summary Reads up to size bytes from an in-memory buffer into dst without failing on short read

extern uint32_t ext_007AEC70(void* self, void* dst, uint32_t size, uint8_t failIfShort);

uint32_t sub_007AECD0(void* self, void* dst, uint32_t size) {
    return ext_007AEC70(self, dst, size, 0);
}
} // namespace lift_007AECD0

// [0x007AEF10]
namespace lift_007AEF10 {
// @name Stream::printf
// @class Stream
// @summary Formats a string and writes it via vtable+0x30 if field_0x58 is non-zero
// @field Stream +0x58 uint32_t field_0x58
void sub_007AEF10(uint8_t* obj, const char* fmt, ...) {
    if (*reinterpret_cast<const uint32_t*>(obj + 0x58) == 0) {
        return;
    }
    char buf[0x4000];
    va_list ap;
    va_start(ap, fmt);
    std::vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    uint32_t len = static_cast<uint32_t>(std::strlen(buf));
    const uint8_t* vtable = *reinterpret_cast<const uint8_t* const*>(obj);
    using WriteFn = void (*)(uint8_t*, const char*, uint32_t);
    auto write_fn = *reinterpret_cast<const WriteFn*>(vtable + 0x30);
    write_fn(obj, buf, len);
}
} // namespace lift_007AEF10

// [0x007AECF0] sub_007AECF0 (101 bytes)
namespace lift_007AECF0 {
// @name TextReader::ReadLine
// @class TextReader
// @summary Copies up to maxCount-1 bytes from the read position into dst, stopping after a '\n' (kept), NUL-terminates, advances the read position; returns dst, or nullptr if dst is null or the buffer is unset.
// @field TextReader +0x58 char* buffer
// @field TextReader +0x5c uint32_t size
// @field TextReader +0x60 uint32_t pos
char* fn_007AECF0(void* self, char* dst, uint32_t maxCount) {
    if (dst == nullptr) {
        return nullptr;
    }
    char* buffer = lift_field<char*>(self, 0x58);
    if (buffer == nullptr) {
        return nullptr;
    }

    const uint32_t size = lift_field<uint32_t>(self, 0x5c);
    const uint32_t pos = lift_field<uint32_t>(self, 0x60);
    const uint32_t remaining = size - pos;
    const uint32_t limit = maxCount - 1;
    const char* src = buffer + pos;

    uint32_t count = 0;
    if (limit != 0) {
        while (count < remaining) {
            const char c = src[count];
            dst[count] = c;
            if (c == '\n') {
                ++count;
                break;
            }
            ++count;
            if (count >= limit) {
                break;
            }
        }
    }

    dst[count] = '\0';
    lift_field<uint32_t>(self, 0x60) = pos + count;
    return dst;
}
} // namespace lift_007AECF0

// [0x007A1940]
namespace lift_007A1940 {
// @name freeStructWithBuffers
// @summary Frees four optional buffer fields (+0x30, +0x34, +0x40, +0x44) and the struct itself, then nulls the pointer.
// @field Struct +0x30 void* field_0x30
// @field Struct +0x34 void* field_0x34
// @field Struct +0x40 void* field_0x40
// @field Struct +0x44 void* field_0x44

extern void (*mem_009251D8)(void*);

void sub_007A1940(uint32_t* pPtr) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(*pPtr);
    if (!obj) {
        return;
    }

    auto free_fn = mem_009251D8;
    const uint32_t offsets[] = { 0x30, 0x34, 0x40, 0x44 };
    for (uint32_t off : offsets) {
        void* buf = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(*pPtr) + off);
        if (buf) {
            free_fn(buf);
        }
    }

    free_fn(reinterpret_cast<void*>(*pPtr));
    *pPtr = 0;
}
} // namespace lift_007A1940
