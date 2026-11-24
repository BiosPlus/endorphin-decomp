// Lifted C++ translation unit: lifted/leaf/decompiled_4A0000.cpp
#include "lift_compat.h"

// [0x004AEC60] sub_004AEC60 (14 bytes)
namespace lift_004AEC60 {
// @name thunk_004AEC60
// @class Unknown
// @summary Adjustor thunk: follows this->+0x04 to an embedded subobject, loads a vtable-like pointer from its +0x08, and forwards the call to slot +0x50 with this adjusted by +8.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x50 void* field_0x50
void fn_004AEC60(void* self) {
    // ecx = [self+0x4]; eax = [ecx+0x8]; edx = [eax+0x50]; ecx += 8; jmp edx
    // The jmp is expressed as a plain call; the callee's return value (none) is passed back via return.
    using ThisFn = void (*)(void*);

    void* sub = lift_field<void*>(self, 0x04);
    void* vt = lift_field<void*>(sub, 0x08);
    ThisFn target = lift_field<ThisFn>(vt, 0x50);

    target(static_cast<uint8_t*>(sub) + 0x08);
}
} // namespace lift_004AEC60

// [0x004A2510] sub_004A2510 (17 bytes)
namespace lift_004A2510 {
// @name Unknown::setFlag4AndForwardToSlot1
// @class Unknown
// @summary Sets byte +0x04 of the object at self+0x14, then tail-calls vtable slot 1 of the object at self+0x1C (passing it as this) and returns that result.
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x1C void* field_0x1C
uint32_t fn_004A2510(void* self) {
    void* flagOwner = lift_field<void*>(self, 0x14);
    lift_field<uint8_t>(flagOwner, 0x04) = 1;

    void* target = lift_field<void*>(self, 0x1C);
    void** vtable = *reinterpret_cast<void***>(target);
    using Slot1Fn = uint32_t (*)(void* self);
    return reinterpret_cast<Slot1Fn>(vtable[1])(target);
}
} // namespace lift_004A2510

// [0x004A5BE0] sub_004A5BE0 (25 bytes)
namespace lift_004A5BE0 {
// @name sub_004A5BE0
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00644F30(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_004A5BE0(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00644F30(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_004A5BE0

// [0x004AECE0] sub_004AECE0 (25 bytes)
namespace lift_004AECE0 {
// @name sub_004AECE0
// @summary Auto-lifted identical-shape clone of 0x00594790 (Unknown::releaseHeldObject (descriptive; owner class not identified)).
namespace lift_00594790 {
// @name Unknown::releaseHeldObject (descriptive; owner class not identified)
// @class Unknown
// @summary Reads a pointer at +0x00 of self; if non-null, invokes ext_00675650 with it as the this-pointer, then passes it to ext_006A5C5C as a single cdecl argument.
// @field Unknown +0x00 void* heldPtr

// Callee: sub_00675650 is a thiscall-style forwarder; ecx carries the object.
extern void ext_00676C90(void* thisPtr);
// Callee: thunk_MFC80_ord_764 is a cdecl IAT thunk taking one argument (caller cleans up).
extern void ext_006A5C5C(void* arg);

void fn_004AECE0(void* self) {
    void* held = lift_field<void*>(self, 0x00);
    if (held != nullptr) {
        ext_00676C90(held);
        ext_006A5C5C(held);
    }
}
} // namespace lift_00594790
} // namespace lift_004AECE0

// [0x004A98D0] sub_004A98D0 (33 bytes)
namespace lift_004A98D0 {
// @name InitVtableAndSeedFields
// @class (unknown)
// @summary Writes vtable pointer 0x00941484 to the object, zeroes field +0x04, and sets fields +0x08..+0x14 to 1.
// @field (unknown) +0x00 DWORD field_0x00
// @field (unknown) +0x04 DWORD field_0x04
// @field (unknown) +0x08 DWORD field_0x08
// @field (unknown) +0x0C DWORD field_0x0C
// @field (unknown) +0x10 DWORD field_0x10
// @field (unknown) +0x14 DWORD field_0x14
void fn_004A98D0(void* self) {
    DWORD* obj = reinterpret_cast<DWORD*>(self);
    obj[0x00 / 4] = 0x00941484u;
    obj[0x04 / 4] = 0u;
    obj[0x08 / 4] = 1u;
    obj[0x0C / 4] = 1u;
    obj[0x10 / 4] = 1u;
    obj[0x14 / 4] = 1u;
}
} // namespace lift_004A98D0

// [0x004AEF30]
namespace lift_004AEF30 {
// @name destroyRange_8byte
// @summary Iterates over a range of 8-byte objects [begin, end) and calls ext_00493D90 on each element.

extern void ext_00493D90(uint32_t self);

extern void __stdcall sub_004AEF30(uint32_t begin, uint32_t end) {
    uint32_t cur = begin;
    while (cur != end) {
        ext_00493D90(cur);
        cur += 8;
    }
}
} // namespace lift_004AEF30

// [0x004A5A50]
namespace lift_004A5A50 {
extern uint32_t mem_r32(uint32_t addr);
extern uint8_t mem_r8(uint32_t addr);

// @name sub_004A5A50
// @summary Returns 1 if pointer array is null/empty or flag at +0x24 is non-zero, otherwise 0.
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x24 uint8_t field_0x24

uint32_t __thiscall sub_004A5A50(uint32_t self) {
    uint32_t begin = mem_r32(self + 0x0c);
    if (begin == 0) {
        return 1;
    }

    uint32_t end = mem_r32(self + 0x10);
    int32_t count = static_cast<int32_t>(end - begin) >> 2;
    if (count == 0) {
        return 1;
    }

    if (mem_r8(self + 0x24) != 0) {
        return 1;
    }

    return 0;
}
} // namespace lift_004A5A50

// [0x004A96E0] sub_004A96E0 (60 bytes)
namespace lift_004A96E0 {
// Holds the address of the MSVCP80 std::string equality operator (indirect call target).
extern int mem_00924FC4;

using StrEqFn = bool(__cdecl*)(const void* lhs, const void* rhs);

// @name FindStringTableIndex
// @summary Linear-scans a 3-entry, 28-byte-stride std::string table at 0x00ADF300 and returns the matching index (0 if none).
uint32_t fn_004A96E0(const void* key) {
    auto eq = reinterpret_cast<StrEqFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FC4)));
    uint32_t index = 0;
    for (uint32_t addr = 0x00ADF300; addr < 0x00ADF354; addr += 0x1C, ++index) {
        if (eq(key, reinterpret_cast<const void*>(static_cast<uintptr_t>(addr)))) {
            return index;
        }
    }
    return 0;
}
} // namespace lift_004A96E0
