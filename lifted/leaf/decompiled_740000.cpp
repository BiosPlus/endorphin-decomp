// Lifted C++ translation unit: lifted/leaf/decompiled_740000.cpp
#include "lift_compat.h"
#include <cstring>

// [0x0074F820] sub_0074F820 (48 bytes)
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

// [0x0074F7F0] sub_0074F7F0 (48 bytes)
namespace lift_0074F7F0 {
// Known callee 0x0074F7A0: Compare3Int32Keys (Three-key ordering compare of two 12-byte records: keys at +0x00, +0x08, +0x04 (in that priority); returns 0 if all equal, else 1 or -1.)
extern int ext_0074F7A0(const void* a, const void* b);
extern int mem_0092529C;

// @name Compare3Int32KeysBsearch
// @summary Binary-searches a table of 12-byte records (base pointer read from *table_ref, count from *count_ref) for key using ext_0074F7A0; returns the matching record or NULL.
void* fn_0074F7F0(const void* const* table_ref, const int32_t* count_ref, const void* key) {
    const int32_t count = *count_ref;
    if (count <= 0) {
        return nullptr;
    }
    return std::bsearch(key, *table_ref, static_cast<size_t>(count), 16,
                        [](const void* a, const void* b) -> int {
                            return ext_0074F7A0(a, b);
                        });
}
} // namespace lift_0074F7F0

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

// [0x00747570] sub_00747570 (16 bytes)
namespace lift_00747570 {
// Known callee 0x00700980: sub_00700980 (Auto-lifted identical-shape clone of 0x004F9840 (VMCSModes::DefaultImplementation::vfunc_16).)
extern void ext_00700980(void* self, uint32_t value);

// @name fn_00747570
// @summary Calls ext_00700980 with self (second stack argument) and value 0, then returns 1.
uint8_t fn_00747570(uint32_t /*stack_arg0*/, void* self) {
    ext_00700980(self, 0);
    return 1;
}
} // namespace lift_00747570

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
