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
#include <cstddef>
#include <cmath>
#include <cstdlib>

#include <cstdlib>
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
#include <cstring>

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

// [0x004ABAA0] sub_004ABAA0 (30 bytes)
namespace lift_004ABAA0 {
// @name sub_004ABAA0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_004AB880();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_004ABAA0(DWORD* dst, DWORD value) {
    DWORD obj = ext_004AB880();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_004ABAA0

// [0x004ABAC0] sub_004ABAC0 (30 bytes)
namespace lift_004ABAC0 {
// @name sub_004ABAC0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_004AB8E0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_004ABAC0(DWORD* dst, DWORD value) {
    DWORD obj = ext_004AB8E0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_004ABAC0

// [0x004AB880] sub_004AB880 (87 bytes)
namespace lift_004AB880 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00ADFA04; // one-time-init guard flags (bit 0 = initialized/in progress)
extern DWORD mem_00ADFA00; // static object storage; first DWORD holds the object's vtable after init

// @name ensureStaticObjectInitialized_004AB880
// @summary One-time guarded initializer for the static object at 0x00ADFA00; returns its address.
// The original MSVC SEH frame (fs:[0] push/pop around the init call) is dropped; the guard bit is set before the
// init call, matching the original ordering, so a throw from the callee still leaves the guard set.
void* fn_004AB880() {
    if ((mem_00ADFA04 & 1u) == 0) {
        mem_00ADFA04 |= 1u;
        ext_0067A670(&mem_00ADFA00, 0u);
        mem_00ADFA00 = 0x009417D4u;
    }
    return &mem_00ADFA00;
}
} // namespace lift_004AB880

// [0x004A59A0]
namespace lift_004A59A0 {
// @name allocate_u32_array
// @summary Allocates an array of 4-byte elements, throwing std::bad_alloc on overflow.


extern void* ext_006A5C62(uint32_t size);
extern void ext_006A6DD2(void* exc, const void* throw_info);
extern void* mem_00925130;
extern const uint32_t mem_009CDF94;
extern const uint32_t mem_00928EC0;

void* fn_004A59A0(uint32_t count) {
    if (count > 0 && (0xFFFFFFFFu / count) < 4u) {
        struct {
            uint32_t vftable;
            uint32_t pad[2];
        } exc{};
        const char* msg = nullptr;
        using ExcCtor = void(__thiscall*)(void*, const char* const*);
        reinterpret_cast<ExcCtor>(mem_00925130)(&exc, &msg);
        exc.vftable = mem_00928EC0;
        ext_006A6DD2(&exc, &mem_009CDF94);
    }
    return ext_006A5C62(count * 4u);
}
} // namespace lift_004A59A0

// [0x004AB8E0]
namespace lift_004AB8E0 {
// @name ensureStaticObjectInitialized_004AB8E0
// @summary Thread-safe-style one-time initializer for the static object at 0x00ADFA08: runs its constructor (ext_0067A670) once, sets its vtable to 0x00941984, and returns its address.

extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00ADFA08;
extern DWORD mem_00ADFA0C;

DWORD sub_004AB8E0() {
    if ((mem_00ADFA0C & 1u) == 0) {
        mem_00ADFA0C |= 1u;
        ext_0067A670(&mem_00ADFA08, 0);
        mem_00ADFA08 = 0x00941984u;
    }
    return (DWORD)(uintptr_t)&mem_00ADFA08;
}
} // namespace lift_004AB8E0

// [0x004A5F70] sub_004A5F70 (98 bytes)
namespace lift_004A5F70 {
// Known callee 0x00644F30: Unknown::invokeNestedVirtualSlot0 (extern void fn_00644F30(void* self))
extern void ext_00644F30(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; called with one pointer argument)
extern void ext_006A5C5C(void* p);
// IAT slot 0x00925134 holding MSVCR80!_invalid_parameter_noinfo (called on failed range/owner checks)
extern void (*mem_00925134)(void);

struct OwnedPointerRange {
    uint8_t  field_0x00[0x08];
    void**   field_0x08; // upper bound for valid slot addresses
};

static inline void invalidParameterIf(bool bad) {
    if (bad) {
        mem_00925134();
    }
}

// @name OwnedPointerRange::destroyPointerRange
// @class OwnedPointerRange
// @summary Walks slots in [first, last) of an owning range, and for each non-null pointer calls ext_00644F30 then frees it via ext_006A5C5C.
// @field OwnedPointerRange +0x08 void** field_0x08
extern void fn_004A5F70(OwnedPointerRange* owner, void** first, OwnedPointerRange* ownerCheck, void** last) {
    void** cur = first;
    for (;;) {
        invalidParameterIf(owner == nullptr || owner != ownerCheck);
        if (cur == last) {
            return;
        }

        void** slot = cur;
        invalidParameterIf(!(owner != nullptr && slot < owner->field_0x08));
        cur = slot + 1;
        invalidParameterIf(!(owner != nullptr && cur - 1 < owner->field_0x08));

        void* obj = *slot;
        if (obj == nullptr) {
            continue;
        }

        ext_00644F30(obj);
        ext_006A5C5C(obj);
    }
}
} // namespace lift_004A5F70

// [0x004A6A90] sub_004A6A90 (90 bytes)
namespace lift_004A6A90 {
// @name Vector::destroyAndEraseRange
// @class Vector
// @summary Validates the [+0x04, +0x08) range, destroys the owned pointers in it, then erases the range from the vector.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08

struct VectorFields {
    uint32_t field_0x00;
    uint32_t field_0x04;
    uint32_t field_0x08;
};

// Known callee 0x004A5F70: OwnedPointerRange::destroyPointerRange (thiscall, 4 stack args: first/last iterator pairs)
extern void ext_004A5F70(void* self, uint32_t first_container, uint32_t first_ptr,
                             uint32_t last_container, uint32_t last_ptr);
// Known callee 0x00596660: Vector_erase_range (thiscall, out iterator + first/last pairs)
extern void* ext_00596660(void* self, uint32_t* out_iter, uint32_t first_container,
                              uint32_t first_ptr, uint32_t last_container, uint32_t last_ptr);
// Slot at 0x00925134 holds the CRT invalid-parameter handler (_invalid_parameter_noinfo) and is called as a function.
extern void (*mem_00925134)(void);

static inline void invalidParameterIf(bool bad) {
    if (bad) {
        mem_00925134();
    }
}

void fn_004A6A90(void* self) {
    auto* v = static_cast<VectorFields*>(self);
    const uint32_t container = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    invalidParameterIf(v->field_0x04 > v->field_0x08);
    ext_004A5F70(self, container, v->field_0x04, container, v->field_0x08);

    invalidParameterIf(v->field_0x04 > v->field_0x08);
    uint32_t out_iter[2] = {0, 0};
    ext_00596660(self, out_iter, container, v->field_0x04, container, v->field_0x08);
}
} // namespace lift_004A6A90

// [0x004AC060] sub_004AC060 (61 bytes)
namespace lift_004AC060 {
// Known callee 0x005F3E70: IsElementValidAndNotLess_005F3E70 (Looks up an element via sub_004AB940, validates it against the container bounds at a1+8, and returns 1 if *a5 is not less than the element's value, else 0.)
extern int ext_005F3E70(uintptr_t a1, uintptr_t a2, uintptr_t a3,
                            uintptr_t a4, uintptr_t a5, uintptr_t a6);
// CRT _invalid_parameter_noinfo handler pointer (MSVCR80).
extern uintptr_t mem_00925134;

// @name Unknown::isRangeValidAndNotLess_004AC060
// @class Unknown
// @summary Reports invalid parameters if the two range fields are out of order, then forwards to IsElementValidAndNotLess_005F3E70 with the range bounds and the value pointer.
// @field Unknown +0x04 uintptr_t field_0x04
// @field Unknown +0x08 uintptr_t field_0x08
int fn_004AC060(void* self, uintptr_t* a5) {
    auto* fields = static_cast<uint8_t*>(self);
    uintptr_t upper = lift_field<uintptr_t>(fields, 0x08);
    if (lift_field<uintptr_t>(fields, 0x04) > upper) {
        reinterpret_cast<void (*)()>(mem_00925134)();
    }
    uintptr_t lower = lift_field<uintptr_t>(fields, 0x04);
    if (lower > lift_field<uintptr_t>(fields, 0x08)) {
        reinterpret_cast<void (*)()>(mem_00925134)();
    }
    uintptr_t value = reinterpret_cast<uintptr_t>(a5);
    return ext_005F3E70(reinterpret_cast<uintptr_t>(self), lower,
                        reinterpret_cast<uintptr_t>(self), upper,
                        value, value);
}
} // namespace lift_004AC060

// [0x004A2410]
namespace lift_004A2410 {
extern uint32_t mem_00ADDA7C;
extern uint32_t mem_00ADDA84;
extern uint32_t mem_00ADDA88;
extern uint32_t mem_00ADDA8C;
extern uint32_t mem_00ADDA94;
extern uint32_t mem_00ADDA98;
extern uint32_t mem_00ADDA9C;
extern uint32_t mem_00ADDAA0;

extern int __cdecl ext_006A6C87(uint32_t func);

// @name getStaticObject_004A2410
// @summary Lazily initializes a static object at 0x00ADDA7C with vtable 0x00940704, registers atexit destructor 0x00917B40, and returns its address.
uint32_t __cdecl sub_004A2410() {
    if ((mem_00ADDAA0 & 1u) == 0u) {
        mem_00ADDAA0 |= 1u;
        mem_00ADDA84 = 0u;
        mem_00ADDA88 = 0u;
        mem_00ADDA8C = 0u;
        mem_00ADDA7C = 0x00940704u;
        mem_00ADDA94 = 0u;
        mem_00ADDA98 = 0u;
        mem_00ADDA9C = 0u;
        ext_006A6C87(0x00917B40u);
    }
    return 0x00ADDA7Cu;
}
} // namespace lift_004A2410

// [0x004A5890] sub_004A5890 (77 bytes)
namespace lift_004A5890 {
// @name sub_004A5890
// @summary Auto-lifted identical-shape clone of 0x004AD970 (Unknown::DestroyStringAndArray).
namespace lift_004AD970 {
// Known callee 0x004026E0: StringArray::ReleaseElements (Destroys each 28-byte string element in the array, frees its buffer, and nulls the begin/end/capacity pointers.)
extern void ext_005B0D90(void* self);
// Import slot for MSVCP80 std::basic_string<char>::~basic_string (IAT entry, bound at load time).
extern int mem_00924FF4;

// @name Unknown::DestroyStringAndArray
// @class Unknown
// @summary Releases the StringArray at +0x1c, then runs the std::string destructor on the object itself.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1c StringArray field_0x1c
void fn_004A5890(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Destroy the string elements held in the array at +0x1c.
    ext_005B0D90(base + 0x1c);

    // Destroy the std::string at offset 0 via the imported MSVC destructor (thiscall).
    using StringDtorFn = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4));
    dtor(self);
}
} // namespace lift_004AD970
} // namespace lift_004A5890

// [0x004A7440] sub_004A7440 (105 bytes)
namespace lift_004A7440 {
// @name sub_004A7440
// @summary Auto-lifted identical-shape clone of 0x0059B2E0 (TreeMap::find).
namespace lift_0059B2E0 {
// @name TreeMap::find
// @class TreeMap
// @summary Finds a string key in the red-black tree map and writes an iterator pair (map, node) to out_iter.
// @field TreeMap +0x04 void* head


extern void* ext_004A73F0(void* self, const void* key);
extern void (*mem_00925134)(void);
extern uint8_t (*mem_00924EF4)(const void* lhs, const void* rhs);

void* fn_004A7440(void* self, void* out_iter, const void* key) {
    void* node = ext_004A73F0(self, key);
    if (!self) {
        mem_00925134();
    }
    void* head = *reinterpret_cast<void**>(reinterpret_cast<uintptr_t>(self) + 0x4);
    void* result_node = head;
    if (node != head) {
        const void* node_key = reinterpret_cast<const void*>(reinterpret_cast<uintptr_t>(node) + 0xc);
        if (!mem_00924EF4(key, node_key)) {
            result_node = node;
        }
    }
    void** iter = reinterpret_cast<void**>(out_iter);
    iter[0] = self;
    iter[1] = result_node;
    return out_iter;
}
} // namespace lift_0059B2E0
} // namespace lift_004A7440

// [0x004A5A50] sub_004A5A50 (35 bytes)
namespace lift_004A5A50 {
// @name checkRangeNonEmptyAndUnflagged
// @summary Returns 0 when the [+0x0C, +0x10) element range is non-empty and the byte flag at +0x24 is clear; otherwise returns 1.
// @field Self +0x0C DWORD field_0x0C
// @field Self +0x10 DWORD field_0x10
// @field Self +0x24 BYTE field_0x24
uint32_t fn_004A5A50(void* self) {
    uint32_t begin = lift_field<uint32_t>(self, 0x0C);
    if (begin == 0) {
        return 1;
    }
    uint32_t end = lift_field<uint32_t>(self, 0x10);
    // Element count = (end - begin) / 4, arithmetic shift as in the original sar.
    int32_t count = static_cast<int32_t>(end - begin) >> 2;
    if (count == 0) {
        return 1;
    }
    if (lift_field<uint8_t>(self, 0x24) != 0) {
        return 1;
    }
    return 0;
}
} // namespace lift_004A5A50

// [0x004A5810]
namespace lift_004A5810 {
extern void* ext_00430EF0(void* first, void* last, const void* value);

// @name setInvertedFlagAndInnerPtr
// @summary Stores inverted bit-0 flag at +0x200 and updates +0x204 from [this+0x258]->[+0x168]+4 if non-null
// @field Unknown +0x200 uint32_t field_0x200
// @field Unknown +0x204 void* field_0x204
// @field Unknown +0x258 void* field_0x258
void __thiscall fn_004A5810(void* thisPtr, uint8_t flag) {
    if (false) {
        ext_00430EF0(nullptr, nullptr, nullptr);
    }

    lift_field<uint32_t>(thisPtr, 0x200) = (~static_cast<uint32_t>(flag)) & 1u;

    void* obj = lift_field<void*>(thisPtr, 0x258);
    if (obj != nullptr) {
        uint8_t* inner = lift_field<uint8_t*>(obj, 0x168);
        lift_field<void*>(thisPtr, 0x204) = (inner != nullptr) ? (inner + 4) : nullptr;
    }
}
} // namespace lift_004A5810

// [0x004A6020] sub_004A6020 (62 bytes)
namespace lift_004A6020 {
// IAT slot holding MSVCR80!memmove_s (original: call dword ptr [0x9251ec]).
extern int mem_009251EC;
using MemmoveSFn = int (*)(void* dst, size_t dst_size, const void* src, size_t count);

// @name EraseDwordAtPos
// @class Unknown
// @summary Removes the DWORD at pos by shifting the tail down, shrinks end by 4, and writes (value, pos) to the out pair.
// @field Unknown +0x08 DWORD field_0x08
void* fn_004A6020(void* self, void* out, DWORD value, void* pos) {
    // Thiscall: self in ECX; stack args are out (hidden return buffer), value, pos. Returns out in EAX.
    const DWORD end = lift_field<DWORD>(self, 0x08);
    const DWORD src = static_cast<DWORD>(reinterpret_cast<uintptr_t>(pos) + 4);
    const int32_t diff = static_cast<int32_t>(end - src);
    const int32_t count = diff >> 2;
    if (count > 0) {
        const size_t bytes = static_cast<size_t>(count) * 4;
        auto memmove_s_fn = reinterpret_cast<MemmoveSFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_009251EC)));
        memmove_s_fn(pos, bytes, reinterpret_cast<const void*>(static_cast<uintptr_t>(src)), bytes);
    }
    lift_field<DWORD>(self, 0x08) = end - 4;
    DWORD* pair = static_cast<DWORD*>(out);
    pair[0] = value;
    pair[1] = static_cast<DWORD>(reinterpret_cast<uintptr_t>(pos));
    return out;
}
} // namespace lift_004A6020
