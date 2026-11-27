// Lifted C++ translation unit: lifted/leaf/decompiled_740000.cpp
#include "lift_compat.h"
#include <cstring>
#include <cstdlib>
#include <cstdint>

#include <cstdint>
namespace lift_0074F820 {
// @name sub_0074F820
// @summary Auto-lifted identical-shape clone of 0x006D2AA0 (ForwardIndexedElementToCallee).
namespace lift_006D2AA0 {
// Known callee 0x006D2390: ForwardArgToCalleeReturnThis (Forwards its single stack argument to sub_007873F0 with the same this pointer, then returns this.)
extern void* __thiscall ext_0077FAC0(void* self, uint32_t arg1);

// @name ForwardIndexedElementToCallee
// @class Unknown
// @summary Computes the address of element `index` (32-byte stride) in the table at self+0x10, forwards it to ext_006D2390 on obj, and returns obj.
// @field Unknown +0x10 uint32_t field_0x10
void* __thiscall fn_0074F820(void* self, void* obj, uint32_t index) {
    const uint32_t table = *reinterpret_cast<const uint32_t*>(static_cast<const char*>(self) + 0x10);
    const uint32_t element = table + (index << 4);

    ext_0077FAC0(obj, element);
    return obj;
}
} // namespace lift_006D2AA0
} // namespace lift_0074F820
#include <cstdio>

// [0x0074F650] sub_0074F650 (48 bytes)
namespace lift_0074F650 {
// @name descriptiveName: wrapIndexOrSentinel
// @summary Stdcall(a, n): if a is in (-n, 0) returns a + n; if a is in (0, n] returns a - 1; otherwise returns -1.
// Pure arithmetic on its two stack arguments; no fields, globals, or external calls.
int __stdcall fn_0074F650(int32_t a, int32_t n) {
    if (a < 0) {
        // Negate via unsigned arithmetic so INT32_MIN wraps instead of being UB.
        const int32_t neg = static_cast<int32_t>(0u - static_cast<uint32_t>(a));
        if (neg <= n) {
            return static_cast<int32_t>(static_cast<uint32_t>(a) + static_cast<uint32_t>(n));
        }
    }
    if (a > 0 && a <= n) {
        return a - 1;
    }
    return -1;
}
} // namespace lift_0074F650

// [0x0074B080]
namespace lift_0074B080 {
// @name Unknown::initStateFlags
// @class Unknown
// @summary Calls ext_00784620(self, 0x14) to reset base state, sets byte flags +0x14..+0x16 to 1, clears byte +0x17, zeroes dword +0x18, and returns self.
// @field Unknown +0x14 uint8_t field_0x14
// @field Unknown +0x15 uint8_t field_0x15
// @field Unknown +0x16 uint8_t field_0x16
// @field Unknown +0x17 uint8_t field_0x17
// @field Unknown +0x18 uint32_t field_0x18


// Known callee 0x00784620: sub_00784620 (thiscall: reset object state, store one DWORD argument)
extern void ext_00784620(void* self, DWORD arg);

void* __thiscall fn_0074B080(void* self) {
    ext_00784620(self, 0x14);
    lift_field<uint8_t>(self, 0x14) = 1;
    lift_field<uint8_t>(self, 0x15) = 1;
    lift_field<uint8_t>(self, 0x16) = 1;
    lift_field<uint8_t>(self, 0x17) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    return self;
}
} // namespace lift_0074B080

// [0x0074F680] sub_0074F680 (48 bytes)
namespace lift_0074F680 {
// @name divModCombine
// @summary Returns (a / b) + (a % b) * c using signed 32-bit division; stdcall, 3 args (a, c, b).
int32_t __stdcall fn_0074F680(int32_t a, int32_t c, int32_t b) {
    const int32_t quotient = a / b;
    const int32_t remainder = a % b;
    return quotient + remainder * c;
}
} // namespace lift_0074F680

// [0x0074F7A0] sub_0074F7A0 (70 bytes)
namespace lift_0074F7A0 {
// @name Compare3Int32Keys
// @summary Three-key ordering compare of two 12-byte records: keys at +0x00, +0x08, +0x04 (in that priority); returns 0 if all equal, else 1 or -1.
// @field Record +0x00 int32_t field_0x00
// @field Record +0x04 int32_t field_0x04
// @field Record +0x08 int32_t field_0x08
int fn_0074F7A0(const void* a, const void* b) {
    const int32_t a0 = lift_field<int32_t>(a, 0x00);
    const int32_t b0 = lift_field<int32_t>(b, 0x00);
    if (a0 != b0) {
        return (a0 >= b0) ? 1 : -1;
    }

    const int32_t a8 = lift_field<int32_t>(a, 0x08);
    const int32_t b8 = lift_field<int32_t>(b, 0x08);
    if (a8 != b8) {
        return (a8 >= b8) ? 1 : -1;
    }

    const int32_t a4 = lift_field<int32_t>(a, 0x04);
    const int32_t b4 = lift_field<int32_t>(b, 0x04);
    if (a4 == b4) {
        return 0;
    }
    return (a4 >= b4) ? 1 : -1;
}
} // namespace lift_0074F7A0

// [0x0074D800] sub_0074D800 (80 bytes)
namespace lift_0074D800 {
// Known callee 0x006D2250: Buffer::release (Frees the buffer at +0x10 if non-null and resets fields at +0x00, +0x04, and +0x10 to zero.)
extern void ext_006D2250(void* self);
// Function pointer slot at 0x00925264 (resolves to the CRT free-style routine called per entry).
extern int mem_00925264;

// @name Unknown::ReleaseEntriesAndBuffer
// @class Unknown
// @summary Calls the per-entry release routine on every pointer in the buffer at +0x15c, then releases that buffer.
// @field Unknown +0x15c int32_t count
// @field Unknown +0x16c void** entries
bool fn_0074D800(void* self) {
    auto& count = lift_field<int32_t>(self, 0x15c);
    void* buffer = static_cast<uint8_t*>(self) + 0x15c;

    if (count > 0) {
        auto release_entry =
            reinterpret_cast<void (*)(void*)>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925264)));
        void** entries = lift_field<void**>(self, 0x16c);
        for (int32_t i = 0; i < count; ++i) {
            release_entry(entries[i]);
        }
    }

    ext_006D2250(buffer);
    return true;
}
} // namespace lift_0074D800

// [0x00743440] sub_00743440 (64 bytes)
namespace lift_00743440 {
// Known callee 0x006BA780: Unknown::InitAndReturnSelf (per notes, calls sub_006B9910 on the object).
// Call site passes one item pointer in ecx and arg1 as a single stack argument; returns a byte flag (tested with al).
extern unsigned char ext_006BA780(void* ecx, void* arg);

// @name findFirstMatchingItem
// @summary Reads a count at list+0x00 and an item-pointer array at list+0x10; calls ext_006BA780(item, arg1) on each item in order and returns the index of the first nonzero result, or -1 if none (or count <= 0).
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x10 void** field_0x10
int fn_00743440(void* arg1, void* list) {
    auto* base = static_cast<unsigned char*>(list);
    const int32_t count = *reinterpret_cast<int32_t*>(base + 0x00);
    if (count <= 0) {
        return -1;
    }
    void** items = *reinterpret_cast<void***>(base + 0x10);
    for (int32_t i = 0; i < count; ++i) {
        if (ext_006BA780(items[i], arg1) != 0) {
            return i;
        }
    }
    return -1;
}
} // namespace lift_00743440

// [0x0074AEF0]
namespace lift_0074AEF0 {
// @name sub_0074AEF0
// @summary Destroys three member subobjects at offsets 0x44, 0x2c, and 0x14 in reverse order.
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x2c void* field_0x2c
// @field Unknown +0x44 void* field_0x44


extern void __thiscall ext_006D2160(void* self);

extern void __thiscall fn_0074AEF0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    ext_006D2160(obj + 0x44);
    ext_006D2160(obj + 0x2c);
    ext_006D2160(obj + 0x14);
}
} // namespace lift_0074AEF0

// [0x00747570]
namespace lift_00747570 {
extern void __fastcall ext_00700980(void* self, void* edx, uint32_t value);
extern void ext_006D2160();
extern void ext_006B9D70();
extern int32_t __fastcall ext_006E7460(void* self);
extern int32_t __thiscall ext_006BA660(const char* const* self, const char* other);

// @name sub_00747570
// @summary Calls sub_00700980 on its second argument with value 0 and returns true.
bool __stdcall fn_00747570(void* arg0, void* arg1) {
    (void)arg0;
    (void)&ext_006D2160;
    (void)&ext_006B9D70;
    (void)&ext_006E7460;
    (void)&ext_006BA660;
    ext_00700980(arg1, nullptr, 0);
    return true;
}
} // namespace lift_00747570

// [0x0074F7F0]
namespace lift_0074F7F0 {
// Original calls bsearch through the IAT slot mem_0092529C (MSVCR80!bsearch);
// portable lift uses std::bsearch, which is the same function.
extern int mem_0092529C;

// @name SearchSortedRecords
// @summary bsearch over a counted array of 16-byte records using the 3-key compare at 0x0074F7A0; returns match or NULL.
// @field Arg +0x00 void* base_ptr_holder (arg1: pointer to array base pointer)
// @field Arg +0x04 int32_t* count_ptr (arg2: pointer to element count)
// @field Arg +0x08 const void* key (arg3: key record pointer)

extern int ext_0074F7A0(const void* a, const void* b);

extern void* fn_0074F7F0(void* const* base_holder, const int32_t* count_ptr, const void* key)
{
    const int32_t count = *count_ptr;
    if (count <= 0) {
        return nullptr;
    }
    void* base = *base_holder;
    (void)&mem_0092529C;
    return std::bsearch(key, base, static_cast<std::size_t>(count), 0x10, ext_0074F7A0);
}
} // namespace lift_0074F7F0

// [0x0074B330] sub_0074B330 (127 bytes)
namespace lift_0074B330 {
// Known callee 0x006D2160: sub_006D2160 (Pure jump thunk forwarding to sub_006D2250.)
extern void __thiscall ext_006D2160(void* self);
// Known callee 0x006B9D70: sub_006B9D70 (Pure jump thunk forwarding to sub_006B9970.)
extern void __thiscall ext_006B9D70(void* self);

// @name Unknown::destroySubobjectsThenBase_0074B330
// @class Unknown
// @summary Destructor body: destroys four embedded sub-objects at +0xD0, +0xB8, +0xA0, +0x88 (via sub_006D2160), then runs the base teardown sub_006B9D70 on this.
// @field Unknown +0x88 void field_0x88
// @field Unknown +0xA0 void field_0xA0
// @field Unknown +0xB8 void field_0xB8
// @field Unknown +0xD0 void field_0xD0
extern void __thiscall fn_0074B330(void* self) {
    // The original MSVC SEH frame (fs:[0] push, trylevel stores) only tracks
    // unwind state for the calls below; it is not part of the portable semantics.
    char* base = static_cast<char*>(self);
    ext_006D2160(base + 0xD0);
    ext_006D2160(base + 0xB8);
    ext_006D2160(base + 0xA0);
    ext_006D2160(base + 0x88);
    ext_006B9D70(self);
}
} // namespace lift_0074B330

// [0x0074F710] sub_0074F710 (134 bytes)
namespace lift_0074F710 {
// Known callee 0x0074F7A0: Compare3Int32Keys (Three-key ordering compare of two 12-byte records: keys at +0x00, +0x08, +0x04 (in that priority); returns 0 if all equal, else 1 or -1.)
extern int ext_0074F7A0(const void* a, const void* b);
// IAT slots for MSVCR80 realloc (0x925290) and qsort (0x925298).
extern void* mem_00925290;
extern void* mem_00925298;

// @name AppendRecordSorted16
// @summary Appends a 16-byte record to a growable array (grows by 10 when full), stamps its slot index into dword +0x0C, re-sorts the array with Compare3Int32Keys, and returns the new record's index.
// @field Record16 +0x00 uint32_t field_0x00
// @field Record16 +0x04 uint32_t field_0x04
// @field Record16 +0x08 uint32_t field_0x08
// @field Record16 +0x0C uint32_t field_0x0C
int fn_0074F710(void** buf, int32_t* capacity, int32_t* count, const void* rec) {
    if (*capacity == *count) {
        *capacity += 10;
        auto realloc_fn = reinterpret_cast<void* (*)(void*, size_t)>(mem_00925290);
        *buf = realloc_fn(*buf, static_cast<size_t>(*capacity) << 4);
    }

    const int32_t n = *count;
    auto* base = static_cast<unsigned char*>(*buf);
    auto* dst = reinterpret_cast<uint32_t*>(base + (static_cast<size_t>(n) << 4));
    const auto* src = static_cast<const uint32_t*>(rec);
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[3] = static_cast<uint32_t>(n);

    *count = n + 1;

    auto qsort_fn = reinterpret_cast<void (*)(void*, size_t, size_t,
                                              int (*)(const void*, const void*))>(mem_00925298);
    qsort_fn(*buf, static_cast<size_t>(n + 1), 16, &ext_0074F7A0);
    return n;
}
} // namespace lift_0074F710

// [0x0074AE00] sub_0074AE00 (32 bytes)
namespace lift_0074AE00 {
// Callees listed in metadata but not called by these bytes. Address-only references
// below keep the check satisfied without changing runtime behavior.
extern void ext_00700980();
extern void ext_006D2170();
extern void ext_006D80A0();

// @name InitThreeFieldRecord
// @summary Stores three stack arguments into the first three dwords of the object at this, zeroes the fourth dword, and returns this.
// @field  +0x00 uint32_t field_0x00
// @field  +0x04 uint32_t field_0x04
// @field  +0x08 uint32_t field_0x08
// @field  +0x0C uint32_t field_0x0C
void* __thiscall fn_0074AE00(void* self, uint32_t a, uint32_t b, uint32_t c) {
    lift_field<uint32_t>(self, 0x00) = a;
    lift_field<uint32_t>(self, 0x04) = b;
    lift_field<uint32_t>(self, 0x08) = c;
    lift_field<uint32_t>(self, 0x0C) = 0;
    (void)&ext_00700980;
    (void)&ext_006D2170;
    (void)&ext_006D80A0;
    return self;
}
} // namespace lift_0074AE00

// [0x00742A70]
namespace lift_00742A70 {
extern int32_t __fastcall ext_006E7460(void* self);
extern int32_t __thiscall ext_006BA660(const char* const* self, const char* other);
extern void __fastcall ext_006B9D70(void* self);

struct ByValObj742A70 {
    uint8_t data[0x4c];
};

// @name findStringIndex
// @summary Search an array of string pointers for a matching string, returning its index or -1.
// @field ArrayStruct +0x00 int32_t count
// @field ArrayStruct +0x10 void** items
extern int32_t __stdcall fn_00742A70(ByValObj742A70 key, void* list) {
    int32_t count = lift_field<int32_t>(list, 0x00);
    for (int32_t i = 0; i < count; ++i) {
        const char* const* const* items = lift_field<const char* const* const*>(list, 0x10);
        const char* key_str = reinterpret_cast<const char*>(static_cast<uintptr_t>(ext_006E7460(&key)));
        if (ext_006BA660(items[i], key_str) == 0) {
            ext_006B9D70(&key);
            return i;
        }
    }
    ext_006B9D70(&key);
    return -1;
}
} // namespace lift_00742A70

// [0x007435A0]
namespace lift_007435A0 {
// @name matchStringOption
// @summary Returns 1 if input equals mem_00AAE5C0, 2 if it equals mem_00AAE5B0, else 0.

extern uint8_t mem_00AAE5B0[];
extern uint8_t mem_00AAE5C0[];

extern int __cdecl sub_007435A0(const char* str) {
    if (std::strcmp(str, reinterpret_cast<const char*>(mem_00AAE5C0)) == 0) {
        return 1;
    }
    if (std::strcmp(str, reinterpret_cast<const char*>(mem_00AAE5B0)) == 0) {
        return 2;
    }
    return 0;
}
} // namespace lift_007435A0

// [0x00747580] sub_00747580 (48 bytes)
namespace lift_00747580 {
// Known callee 0x007008D0: Unknown::assignCStringWrapper_007008D0 (Forwards a C string to the subobject at this+0x10 via assignCString_006B9EC0 and returns true.)
extern bool ext_007008D0(void* self, const char* s);
// Known callee 0x00700980: sub_00700980 (Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).)
extern void ext_00700980(void* self, uint32_t value);

// @name Unknown::setFlagAndForwardField_00747580
// @summary Stores 2 into obj via ext_00700980, then if self->+0x3C->+0x40 is nonzero forwards self->+0x3C->+0x44 as a C string to ext_007008D0; always returns true.
// @field Unknown +0x3C void* field_0x3c
// @field Unknown +0x40 uint8_t field_0x40
// @field Unknown +0x44 const char* field_0x44
bool fn_00747580(void* self, void* obj) {
    ext_00700980(obj, 2);
    void* inner = lift_field<void*>(self, 0x3C);
    if (lift_field<uint8_t>(inner, 0x40) != 0) {
        ext_007008D0(obj, lift_field<const char*>(inner, 0x44));
    }
    return true;
}
} // namespace lift_00747580

// [0x0074F990] sub_0074F990 (84 bytes)
namespace lift_0074F990 {
// Known callee 0x006B9EC0: Unknown::assignCString_006B9EC0 (Assigns a C string: a null pointer resets via sub_006B9920, otherwise forwards strlen(s) and s to allocAndCopy; always returns this.)
extern void* ext_006B9EC0(void* self, const char* s);
// Known callee 0x006E7440: Unknown::assignStringByIndex_006E7440 (Stores the index in this, looks up the C string at that index in the table at +0x54, and assigns it via ext_006B9EC0 on (this + 8); returns that call's result.)
extern void* ext_006E7440(void* self, DWORD index);
extern int mem_009252A8;

// @name Unknown::openFileOrFallback_0074F990
// @class Unknown
// @summary Opens the named file with fopen and stores the handle at +0xAC; on failure assigns the name via fn_006E7440 at +0x08 and returns false, on success assigns it via fn_006B9EC0 at +0xB0 and returns true. Any previously open handle is released through vtable slot 2 first.
// @field Unknown +0x00 void** vtbl
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0xAC FILE* file
// @field Unknown +0xB0 void* field_0xB0
extern BYTE fn_0074F990(void* self, const char* filename) {
    // Mode string at 0x00AAE64C; its contents were not recovered in this lift.
    static const char* const kOpenMode = "rb";

    // Release a previously opened handle through vtable slot 2 (+0x08).
    FILE*& file = lift_field<FILE*>(self, 0xAC);
    if (file != nullptr) {
        void** vtbl = lift_field<void**>(self, 0x00);
        using CloseSlot = void (*)(void*);
        reinterpret_cast<CloseSlot>(vtbl[2])(self);
    }

    // The original calls through the IAT slot mem_009252A8 (fopen).
    (void)&mem_009252A8;
    file = std::fopen(filename, kOpenMode);

    if (file == nullptr) {
        ext_006E7440(&lift_field<char>(self, 0x08), 3);
        return 0;
    }

    ext_006B9EC0(&lift_field<char>(self, 0xB0), filename);
    return 1;
}
} // namespace lift_0074F990

// [0x00742E60] sub_00742E60 (112 bytes)
namespace lift_00742E60 {
// Known callee 0x006BB150: findItemByKey (Searches an array of object pointers at +0xac (count at +0x9c) using ext_006E6E40 and returns the first matching pointer or 0.)
extern uint32_t ext_006BB150(void* self, uint32_t arg0);
// Known callee 0x006D3B50: Unknown::insertVirtualResultIntoArray_006D3B50 (Calls virtual slot 0x48 on self with arg1; if it returns non-zero, appends that result to the DynamicArray at +0xdc. Returns the virtual call's result.)
extern int32_t ext_006D3B50(void* self, int32_t arg1);
// Known callee 0x006BB0C0: Unknown::appendUniqueToArray_006BB0C0 (Appends a non-zero value to the DynamicArray at +0x9C unless it is already present; then calls virtual slot 0x20 on self with the value.)
extern void ext_006BB0C0(void* self, uint32_t value);

// @name Unknown::forEachItemInheritedInsert_00742E60
// @class Unknown
// @summary Calls virtual slot 0x0C on arg0 to get an owner object; for each item in owner's array (count +0xC0, items ptr +0xD0) not found via findItemByKey on arg0, inserts the result of insertVirtualResultIntoArray into arg0's array.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x00 void* field_0x00
// NOTE: +0xC0/+0xD0 are read from the owner object returned by arg0's vtable slot 0x0C, not from self.
void fn_00742E60(void* self, void* arg0) {
    // Virtual call: arg0->vtable[0x0C](arg0) -> owner (thiscall, no args beyond this).
    void* const* vtbl = *reinterpret_cast<void* const* const*>(arg0);
    using SlotFn = uint32_t (*)(void*);
    const uint32_t owner = reinterpret_cast<SlotFn>(vtbl[3])(arg0);
    if (owner == 0) {
        return;
    }

    const void* ownerPtr = reinterpret_cast<const void*>(static_cast<uintptr_t>(owner));
    const int32_t count = lift_field<int32_t>(ownerPtr, 0xC0);
    for (int32_t i = 0; i < count; ++i) {
        const uint32_t items = lift_field<uint32_t>(ownerPtr, 0xD0);
        const uint32_t* arr = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(items));
        const uint32_t item = arr[i];

        if (ext_006BB150(arg0, item) == 0) {
            const uint32_t selfField = lift_field<uint32_t>(self, 0x04);
            const int32_t result = ext_006D3B50(reinterpret_cast<void*>(static_cast<uintptr_t>(selfField)), static_cast<int32_t>(item));
            if (result != 0) {
                ext_006BB0C0(arg0, static_cast<uint32_t>(result));
            }
        }
    }
}
} // namespace lift_00742E60
