// Lifted C++ translation unit: lifted/leaf/decompiled_4A0000.cpp
#include "lift_compat.h"
#include <string>
#include <new>

#include <new>
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
#include <cstdint>

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

// [0x004A6020]
namespace lift_004A6020 {
// @name DwordVector::EraseAt
// @class DwordVector
// @summary Erases the dword at pos by shifting the tail down one slot, decrements end, and writes {value, pos} to out.
// @field DwordVector +0x08 uint32_t* end (one past the last element)

struct DwordVector {
    // Thiscall: `this` is passed in ECX, out/value/pos on the stack (callee-cleans 12 bytes).
    void EraseAt(void* out, uint32_t value, uint32_t* pos);
};

void DwordVector::EraseAt(void* out, uint32_t value, uint32_t* pos) {
    uint32_t*& end = lift_field<uint32_t*>(this, 0x08);

    // Count of dwords strictly after pos (signed; sar 2 in the original).
    const intptr_t tail_bytes = reinterpret_cast<intptr_t>(end) -
                                reinterpret_cast<intptr_t>(pos + 1);
    const intptr_t count = tail_bytes >> 2;

    if (count > 0) {
        // Shift the tail down by one dword (memmove_s in the original).
        std::memmove(pos, pos + 1, static_cast<size_t>(count) * 4);
    }

    // Drop one element from the end (add dword ptr [esi+8], -4).
    end = end - 1;

    // Return value written through the sret/out buffer: { value, pos }.
    lift_field<uint32_t>(out, 0) = value;
    lift_field<uint32_t*>(out, 4) = pos;
}
} // namespace lift_004A6020

// [0x004ABA70] sub_004ABA70 (39 bytes)
namespace lift_004ABA70 {
// Known callee 0x00430EF0: FindStringInArray (Linear search over an array of 28-byte std::string objects; returns the first element equal to value, or last if none match.)
extern void* ext_00430EF0(void* first, void* last, const void* value);

// @name FindStringInRangeToPair
// @summary Searches [first, last) for value via ext_00430EF0 and writes {owner, found} to the out pair.
// Note: arg4 (+0x10) is unused by the code; kept so the cdecl stack layout matches.
struct StringFindResult {
    void* owner;
    void* found;
};

void fn_004ABA70(StringFindResult* out, void* owner, void* first, void* unused, void* last, const void* value) {
    (void)unused;
    void* found = ext_00430EF0(first, last, value);
    out->owner = owner;
    out->found = found;
}
} // namespace lift_004ABA70

// [0x004A5810] sub_004A5810 (61 bytes)
namespace lift_004A5810 {
// @name Unknown::UpdateInvertedFlagAndChildCache
// @class Unknown
// @summary Stores the inverted low bit of its argument at +0x200; if the child at +0x258 is non-null, caches (child's +0x168 pointer + 4) at +0x204, or 0 when that pointer is null.
// @field Unknown +0x200 uint32_t invertedFlag
// @field Unknown +0x204 void* cachedSubobject
// @field Unknown +0x258 void* child
void __thiscall fn_004A5810(void* self, uint8_t value) {
    uint8_t* base = static_cast<uint8_t*>(self);

    void* child = *reinterpret_cast<void**>(base + 0x258);
    *reinterpret_cast<uint32_t*>(base + 0x200) = static_cast<uint32_t>(~value) & 1u;

    if (child == nullptr) {
        return;
    }

    void* inner = *reinterpret_cast<void**>(static_cast<uint8_t*>(child) + 0x168);
    if (inner == nullptr) {
        *reinterpret_cast<void**>(base + 0x204) = nullptr;
        return;
    }
    *reinterpret_cast<void**>(base + 0x204) = static_cast<uint8_t*>(inner) + 4;
}
} // namespace lift_004A5810

// [0x004A0620] sub_004A0620 (63 bytes)
namespace lift_004A0620 {
// @name sub_004A0620
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_0049ECB0(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_004A0620(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_0049ECB0(lift_field<uint32_t>(self, 0x4),
                     lift_field<uint32_t>(self, 0x8),
                     self,
                     self);
        fn_006A5C5C(lift_field<uint32_t>(self, 0x4));
    }
    lift_field<uint32_t>(self, 0x4) = 0;
    lift_field<uint32_t>(self, 0x8) = 0;
    lift_field<uint32_t>(self, 0xC) = 0;
}
} // namespace lift_00569970
} // namespace lift_004A0620

// [0x004A9760]
namespace lift_004A9760 {
extern uintptr_t mem_00924FC4;  // holds address of MSVCP80 basic_string operator== (cdecl)
extern uint8_t mem_00ADF238[];  // table of 3 std::string-sized entries, 0x1C bytes apart

using StringEqualFn = bool(__cdecl*)(const void* lhs, const void* rhs);

// @name NameTableFindIndex
// @summary Scans the 3-entry string table for a match with the argument; returns the matching index, or 1 if none matches.
int __stdcall fn_004A9760(const void* name) {
    const auto equal = reinterpret_cast<StringEqualFn>(mem_00924FC4);
    for (int index = 0; index < 3; ++index) {
        const void* entry = mem_00ADF238 + static_cast<size_t>(index) * 0x1C;
        if (equal(entry, name)) {
            return index;
        }
    }
    return 1;
}
} // namespace lift_004A9760

// [0x004A5A00]
namespace lift_004A5A00 {
// @name findAncestorOfType
// @summary Walks an object hierarchy via vtable+0x10 until __RTDynamicCast succeeds.
// @field Object +0x00 uint32_t* vtable

extern uint32_t ext_006A6E9E(uint32_t inptr, uint32_t vf_delta, uint32_t src_type, uint32_t target_type, uint32_t is_reference);
extern uint32_t mem_read32(uint32_t addr);

uint32_t fn_004A5A00(uint32_t obj) {
    uint32_t esi = obj;
    if (esi == 0) {
        return 0;
    }

    uint32_t edi = 0;
    do {
        edi = ext_006A6E9E(esi, 0, 0x00A2E2F8u, 0x00A2FB78u, 0);
        if (edi != 0) {
            break;
        }
        uint32_t vtable = mem_read32(esi);
        uint32_t fn_addr = mem_read32(vtable + 0x10u);
        auto fn = reinterpret_cast<uint32_t (*)(uint32_t, uint32_t)>(static_cast<uintptr_t>(fn_addr));
        esi = fn(esi, 0u);
    } while (esi != 0);

    return edi;
}
} // namespace lift_004A5A00

// [0x004AEFF0] sub_004AEFF0 (70 bytes)
namespace lift_004AEFF0 {
// Callee 0x00493D90: AddCharacterDialog::vfunc_3, thiscall (element pointer in ECX).
extern void ext_00493D90(void* self);
// Callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764).
// Called with one stack argument (the buffer pointer), cdecl.
extern void ext_006A5C5C(uint32_t ptr);

// @name CArray-like::RemoveAll (element vfunc_3 over range, then free storage)
// @class <Unknown> (type not identified; layout inferred from accessors)
// @summary Calls vfunc_3 on each 8-byte element in [begin, end), frees the buffer at begin, and resets begin/end/capacity to null.
// @field <Unknown> +0x04 uint32_t begin
// @field <Unknown> +0x08 uint32_t end
// @field <Unknown> +0x0C uint32_t capacity
void fn_004AEFF0(void* self) {
    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    if (begin != 0) {
        uint32_t end = lift_field<uint32_t>(self, 0x08);
        for (uint32_t it = begin; it != end; it += 8) {
            ext_00493D90(reinterpret_cast<void*>(static_cast<uintptr_t>(it)));
        }
        ext_006A5C5C(begin);
    }
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
}
} // namespace lift_004AEFF0

// [0x004A73F0] sub_004A73F0 (73 bytes)
namespace lift_004A73F0 {
extern int mem_00924EF4;

// @name Unknown::FindNodeByStringKey
// @class Unknown
// @summary Walks a binary search tree (head sentinel at holder->field_0x04) comparing each node's string key at +0x0C against the argument; returns the last left-branch node visited (or the holder when the tree is empty).
// @field Unknown +0x04 uint32_t field_0x04
// @field UnknownHolder +0x04 uint32_t field_0x04
// @field UnknownNode +0x00 uint32_t field_0x00
// @field UnknownNode +0x08 uint32_t field_0x08
// @field UnknownNode +0x0C uint8_t field_0x0C
// @field UnknownNode +0xAD uint8_t field_0xAD

namespace {

// Pointer-sized address in the 32-bit image space.
inline uint8_t* at(uint32_t addr) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(addr));
}

// std::string equality routine, resolved through the import slot at 0x00924EF4.
using StringEqFn = bool (*)(const void* lhs, const void* rhs);

inline bool isSentinel(uint32_t node) {
    return lift_field<uint8_t>(at(node), 0xAD) != 0;
}

}  // namespace

void* fn_004A73F0(void* self, const void* key) {
    uint32_t holder = lift_field<uint32_t>(self, 0x04);
    uint32_t node = lift_field<uint32_t>(at(holder), 0x04);

    if (isSentinel(node)) {
        return at(holder);
    }

    auto eq = reinterpret_cast<StringEqFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924EF4)));

    do {
        if (eq(at(node) + 0x0C, key)) {
            node = lift_field<uint32_t>(at(node), 0x08);
        } else {
            holder = node;
            node = lift_field<uint32_t>(at(node), 0x00);
        }
    } while (!isSentinel(node));

    return at(holder);
}
} // namespace lift_004A73F0

// [0x004ABF10] sub_004ABF10 (74 bytes)
namespace lift_004ABF10 {
// @name sub_004ABF10
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_004AB230(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_004ABF10(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_004AB230(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_004ABF10

// [0x004AD970] sub_004AD970 (77 bytes)
namespace lift_004AD970 {
// Known callee 0x004026E0: StringArray::ReleaseElements (Destroys each 28-byte string element in the array, frees its buffer, and nulls the begin/end/capacity pointers.)
extern void ext_004026E0(void* self);
// Import slot for MSVCP80 std::basic_string<char>::~basic_string (IAT entry, bound at load time).
extern int mem_00924FF4;

// @name Unknown::DestroyStringAndArray
// @class Unknown
// @summary Releases the StringArray at +0x1c, then runs the std::string destructor on the object itself.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1c StringArray field_0x1c
void fn_004AD970(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Destroy the string elements held in the array at +0x1c.
    ext_004026E0(base + 0x1c);

    // Destroy the std::string at offset 0 via the imported MSVC destructor (thiscall).
    using StringDtorFn = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    dtor(self);
}
} // namespace lift_004AD970

// [0x004A5890] sub_004A5890 (77 bytes)
namespace lift_004A5890 {
// @name sub_004A5890
// @summary Auto-lifted identical-shape clone of 0x004757F0 (sub_0047A010).
namespace lift_004757F0 {
// Known callee 0x00672D10: sub_00672D10 (Auto-lifted identical-shape clone of 0x004026E0 (StringArray::ReleaseElements).)
extern void ext_005B0D90(void* self);
// Imported MSVC CRT slot for std::basic_string<char>::~basic_string (used via explicit dtor call below).
extern int mem_00924FF4;

// @name Unknown::Dtor_004757F0
// @class Unknown
// @summary Destructor body: releases the StringArray at +0x1C, then destroys the std::string at +0x00.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C StringArray field_0x1C
void fn_004A5890(void* self) {
    // ecx+0x1c is passed as `this` to the StringArray release routine.
    ext_005B0D90(static_cast<unsigned char*>(self) + 0x1C);
    // The original calls the MSVC CRT string dtor through mem_00924FF4 on `this`.
    using StdString = std::string;
    reinterpret_cast<StdString*>(self)->~StdString();
}
} // namespace lift_004757F0
} // namespace lift_004A5890

// [0x004AFE50]
namespace lift_004AFE50 {
// @name Unknown::releaseAndClearSlots_004AFE50
// @class Unknown
// @summary Releases three pointer slots (+0x18, +0x38, +0x58) via ext_006A5C5C when non-null, zeroes them and their adjacent companion fields, then tail-calls fn_00665810(self).

extern void ext_006A5C5C(void* p);
extern void __fastcall fn_00665810(void* self);

// @field Unknown +0x18 void* field_0x18
// @field Unknown +0x1C uint32_t field_0x1c
// @field Unknown +0x20 uint32_t field_0x20
// @field Unknown +0x38 void* field_0x38
// @field Unknown +0x3C uint32_t field_0x3c
// @field Unknown +0x40 uint32_t field_0x40
// @field Unknown +0x58 void* field_0x58
// @field Unknown +0x5C uint32_t field_0x5c
// @field Unknown +0x60 uint32_t field_0x60
extern void __fastcall fn_004AFE50(void* self) {
    auto& p18 = lift_field<void*>(self, 0x18);
    auto& p38 = lift_field<void*>(self, 0x38);
    auto& p58 = lift_field<void*>(self, 0x58);

    if (p58 != nullptr) {
        ext_006A5C5C(p58);
    }
    p58 = nullptr;
    lift_field<uint32_t>(self, 0x5C) = 0;
    lift_field<uint32_t>(self, 0x60) = 0;

    if (p38 != nullptr) {
        ext_006A5C5C(p38);
    }
    p38 = nullptr;
    lift_field<uint32_t>(self, 0x3C) = 0;
    lift_field<uint32_t>(self, 0x40) = 0;

    if (p18 != nullptr) {
        ext_006A5C5C(p18);
    }
    p18 = nullptr;
    lift_field<uint32_t>(self, 0x1C) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    fn_00665810(self);
}
} // namespace lift_004AFE50

// [0x004A6060] sub_004A6060 (90 bytes)
namespace lift_004A6060 {
// Known callee 0x00644F20: forwardVCall24 (Dereferences the inner object at +0x00 and tail-calls its vtable slot +0x24)
extern uint32_t ext_00644F20(uint32_t obj, uint32_t key);
// Import slot for an MSVCP80 std::string operator< (const string&, const string&) -> bool
extern int mem_00924EF4;

using StringLessFn = bool (*)(uint32_t, uint32_t);

// @name lowerBoundProjected
// @summary std::lower_bound-style binary search over a 32-bit element array, comparing projected element against key; returns first index not less than key.
// (no struct field offsets accessed)
uint32_t* fn_004A6060(uint32_t* first, uint32_t* last, uint32_t key) {
    const StringLessFn less = reinterpret_cast<StringLessFn>(static_cast<uintptr_t>(mem_00924EF4));
    ptrdiff_t count = last - first;
    while (count > 0) {
        const ptrdiff_t half = count / 2;
        uint32_t* mid = first + half;
        const uint32_t projected = ext_00644F20(*mid, key);
        if (less(projected, key)) {
            first = mid + 1;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return first;
}
} // namespace lift_004A6060
