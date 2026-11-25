// Lifted C++ translation unit: lifted/leaf/decompiled_7A0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_007AD590(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
#include <cstdint>
#include <cstring>

// [0x007AD5C0] sub_007AD5C0 (32 bytes)
// @name sub_007AD5C0
// @summary MSVC scalar deleting destructor: calls sub_007AD590 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007AD5C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007AD590(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

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
