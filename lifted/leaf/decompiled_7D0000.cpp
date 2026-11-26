// Lifted C++ translation unit: lifted/leaf/decompiled_7D0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cfenv>

// [0x007D8850]
namespace lift_007D8850 {
// @name sub_007D8850
// @summary Single-argument forwarding wrapper; passes its one stack argument to sub_007D8420 and returns that result unchanged.

extern uint32_t ext_007D8420(uint32_t arg0);

extern uint32_t sub_007D8850(uint32_t arg0) {
    return ext_007D8420(arg0);
}
} // namespace lift_007D8850

// [0x007D4800] sub_007D4800 (32 bytes)
namespace lift_007D4800 {
extern void ext_007D5950(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);

// @name ConditionalForwardCall
// @class
// @summary If the object's +0x04 field is non-zero, forwards it with the +0x1c field and a constant to ext_007D5950.
// @field Object +0x04 uint32_t field_0x04
// @field Object +0x1c uint32_t field_0x1c
void fn_007D4800(void* self) {
    auto* base = static_cast<std::uint8_t*>(self);
    const std::uint32_t f04 = *reinterpret_cast<std::uint32_t*>(base + 0x04);
    if (f04 == 0) {
        return;
    }
    const std::uint32_t f1c = *reinterpret_cast<std::uint32_t*>(base + 0x1c);
    ext_007D5950(f04, 0x0099DE84u, f1c, 0u);
}
} // namespace lift_007D4800

// [0x007DADA0] sub_007DADA0 (33 bytes)
namespace lift_007DADA0 {
extern void ext_007D5950(std::uint32_t a, std::uint32_t b, std::uint32_t c);

// @name Unknown::forwardToInnerWithConstant
// @class Unknown
// @summary Reads the inner object pointer at +0x0C, loads its dword at +0xB0, forwards it with constant 0x0099E218 to ext_007D5950, and returns 0 (AX cleared).
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0xB0 uint32_t field_0xB0

// Load/store helpers keep the 32-bit guest address arithmetic explicit.
static inline std::uint32_t lift_load32(std::uint32_t addr) {
    return *reinterpret_cast<const std::uint32_t*>(static_cast<std::uintptr_t>(addr));
}

std::uint16_t fn_007DADA0(std::uint8_t* self) {
    const std::uint32_t inner = *reinterpret_cast<const std::uint32_t*>(self + 0x0C);
    const std::uint32_t value = lift_load32(inner + 0xB0);
    ext_007D5950(0u, value, 0x0099E218u);
    return 0;
}
} // namespace lift_007DADA0

// [0x007D5C80] sub_007D5C80 (34 bytes)
namespace lift_007D5C80 {
// Known callee 0x007D5A00: sub_007D5A00 (54 bytes)
extern void ext_007D5A00(uint32_t a, uint32_t b);
// Function pointer stored in .data at 0x00AB28C8 (holds 0x007D4780)
extern uint32_t mem_00AB28C8;

// @name Unknown::invokeCallbackAtOffset6C
// @class Unknown (no member access; pointer arithmetic only)
// @summary Calls ext_007D5A00(arg0, arg1), then calls the function pointer at mem_00AB28C8 with (arg0 + 0x6C, arg1).
void fn_007D5C80(uint32_t arg0, uint32_t arg1) {
    ext_007D5A00(arg0, arg1);
    using Fn = void (*)(uint32_t, uint32_t);
    Fn target = reinterpret_cast<Fn>(static_cast<uintptr_t>(mem_00AB28C8));
    target(arg0 + 0x6C, arg1);
}
} // namespace lift_007D5C80

// [0x007DC8C0] sub_007DC8C0 (37 bytes)
namespace lift_007DC8C0 {
// @name SearchKeyedTable16
// @class <none>
// @summary Scans a 12-byte-stride table of 16-bit keys (terminated by 0x24) from `p`
//          and returns the first entry whose key matches `key`, or the terminator entry.
// @field <none>
uint8_t* fn_007DC8C0(uint8_t* p, int32_t key) {
    uint16_t k = *reinterpret_cast<uint16_t*>(p);
    if (k == 0x24) {
        return p;
    }
    for (;;) {
        if (static_cast<int32_t>(static_cast<int16_t>(k)) == key) {
            return p;
        }
        p += 12;
        k = *reinterpret_cast<uint16_t*>(p);
        if (k == 0x24) {
            return p;
        }
    }
}
} // namespace lift_007DC8C0

// [0x007DEC80] sub_007DEC80 (39 bytes)
namespace lift_007DEC80 {
// @name Unknown::initFromSource (descriptive placeholder; owning class not identified)
// @class Unknown
// @summary Initializes a 0x16-byte record at eax from the record at ecx, copying two dwords, a float and a word argument, and setting two self-referencing pointers.
// @field Unknown +0x00 uint32_t ptrToSrcPlus8
// @field Unknown +0x04 uint32_t ptrToSrcPlus14
// @field Unknown +0x08 float    floatArg
// @field Unknown +0x0C uint32_t srcField4
// @field Unknown +0x10 uint32_t srcField0
// @field Unknown +0x14 uint16_t wordArg
// @field Unknown (source ecx) +0x00 uint32_t srcField0
// @field Unknown (source ecx) +0x04 uint32_t srcField4
void fn_007DEC80(void* eax, void* ecx, uint16_t dx, float f) {
    uint8_t* out = static_cast<uint8_t*>(eax);
    uint8_t* src = static_cast<uint8_t*>(ecx);

    // Captured stack arguments: dx = [esp+4] (word), f = [esp+8] (float).
    lift_field<uint16_t>(out, 0x14) = dx;
    lift_field<float>(out, 0x08) = f;

    // Pointers into the source record (32-bit addresses).
    lift_field<uint32_t>(out, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(src) + 0x08);
    lift_field<uint32_t>(out, 0x04) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(src) + 0x14);

    // Copy dwords from source.
    lift_field<uint32_t>(out, 0x10) = lift_field<uint32_t>(src, 0x00);
    lift_field<uint32_t>(out, 0x0C) = lift_field<uint32_t>(src, 0x04);
}
} // namespace lift_007DEC80

// [0x007DFD80]
namespace lift_007DFD80 {
// @name initAllocatedArray
// @summary Allocates a buffer of 4-byte elements using the provided allocator and initializes a 12-byte array header.
// @field ArrayHeader +0x00 uint32_t data
// @field ArrayHeader +0x04 uint32_t count
// @field ArrayHeader +0x08 uint32_t field_0x08

void __cdecl sub_007DFD80(uint32_t* out_header, uint32_t count, uint32_t* allocator_ptr) {
    using AllocFn = uint32_t(__cdecl*)(uint32_t);
    auto alloc_fn = reinterpret_cast<AllocFn>(static_cast<uintptr_t>(allocator_ptr[0]));
    uint32_t buffer = alloc_fn(count * 4u);
    out_header[1] = count;
    out_header[0] = buffer;
    out_header[2] = 0u;
}
} // namespace lift_007DFD80

// [0x007DD130]
namespace lift_007DD130 {
namespace lift_007DD130 {

// @name UnknownClass_isIndexedEntryFlagSet
// @summary Returns bit 0 of the flags of the table entry at index when index is in range and the entry's stored id equals index; otherwise returns false.
// @field UnknownClass +0x0C int32_t count
// @field UnknownClass +0x10 uint8_t* entries
// @field UnknownEntry +0x08 int32_t id
// @field UnknownEntry +0x10 uint32_t flags
bool fn_007DD130(void* self, int32_t index) {
    if (index < 0 || index >= lift_field<int32_t>(self, 0x0C)) {
        return false;
    }

    uint8_t* entries = lift_field<uint8_t*>(self, 0x10);
    uint8_t* entry = entries + static_cast<ptrdiff_t>(index) * 0x9C;

    if (lift_field<int32_t>(entry, 0x08) != index) {
        return false;
    }

    return (lift_field<uint32_t>(entry, 0x10) & 1u) != 0;
}

} // namespace lift_007DD130
} // namespace lift_007DD130

// [0x007D5B30] sub_007D5B30 (45 bytes)
namespace lift_007D5B30 {
// @name dispatchThroughKindTable
// @summary Reads a kind byte from arg1's object, indexes a 40-byte-stride dispatch table, and forwards (arg1, arg2, arg3) to the selected handler.
// @field Unknown +0x00 void* field_0x00 (arg1 -> object pointer)
// @field Unknown +0x00 uint32_t field_0x00 (object kind word; low byte used as index)
// @field Unknown +0x0C void* field_0x0C (sub-object pointer)
// @field Unknown +0x20 void* field_0x20 (dispatch table base, via sub-object)
// @field Unknown +0x0C void* handler (handler pointer at table[kind*40 + 0x0C])
uint32_t fn_007D5B30(void* arg1, void* arg2, void* arg3) {
    using Handler = uint32_t (__cdecl*)(void*, void*, void*);

    void* obj = lift_field<void*>(arg1, 0x00);
    uint32_t kind = lift_field<uint32_t>(obj, 0x00) & 0xFFu;
    void* sub = lift_field<void*>(obj, 0x0C);
    void* table = lift_field<void*>(sub, 0x20);
    Handler handler = lift_field<Handler>(table, static_cast<ptrdiff_t>(kind) * 40 + 0x0C);
    return handler(arg1, arg2, arg3);
}
} // namespace lift_007D5B30

// [0x007D47D0] sub_007D47D0 (46 bytes)
namespace lift_007D47D0 {
// @name initTypeTag2Record
// @class <unknown>
// @summary Initializes a 0x20-byte record: sets type tag to 2, clears +0x04, and stores four caller-supplied DWORDs (cdecl, caller cleans up).
// @field <unknown> +0x00 DWORD typeTag
// @field <unknown> +0x04 DWORD reserved
// @field <unknown> +0x08 DWORD arg3Value
// @field <unknown> +0x0C DWORD arg2Value
// @field <unknown> +0x10 DWORD arg4Value
// @field <unknown> +0x1C DWORD arg5Value
void fn_007D47D0(void* self, DWORD arg2, DWORD arg3, DWORD arg4, DWORD arg5) {
    lift_field<DWORD>(self, 0x00) = 2;
    lift_field<DWORD>(self, 0x04) = 0;
    lift_field<DWORD>(self, 0x08) = arg3;
    lift_field<DWORD>(self, 0x0C) = arg2;
    lift_field<DWORD>(self, 0x10) = arg4;
    lift_field<DWORD>(self, 0x1C) = arg5;
}
} // namespace lift_007D47D0

// [0x007D8860]
namespace lift_007D8860 {
// Callees (lifted elsewhere)
extern uint32_t ext_007D8700(uint32_t arg0);
extern uint32_t ext_007C9260(void* self);

// @name setPairIfFlagClear
// @summary Resolves self via ext_007D8700, tests bit 0 of its +0x9C field via ext_007C9260; if clear, stores a1/a2 at self+0x94/+0x98.
// @field Unknown +0x94 uint32_t field_0x94
// @field Unknown +0x98 uint32_t field_0x98
void fn_007D8860(void* self, uint32_t a1, uint32_t a2) {
    const uint32_t obj = ext_007D8700(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)));
    const uint32_t flag = ext_007C9260(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
    if (flag == 0) {
        lift_field<uint32_t>(self, 0x94) = a1;
        lift_field<uint32_t>(self, 0x98) = a2;
    }
}
} // namespace lift_007D8860

// [0x007D8890] sub_007D8890 (43 bytes)
namespace lift_007D8890 {
// Known callee 0x007D8710: sub_007D8710 (void* fn(void* self); returns self)
extern void* ext_007D8710(void* self);
// Known callee 0x007D8860: setPairIfFlagClear (void fn(void* self, a1, a2))
extern void ext_007D8860(void* self, uint32_t a1, uint32_t a2);

// @name sub_007D8890
// @summary Reads a dword from self->+0x40->+0x5F0, calls ext_007D8710(self) to get a pointer, then calls ext_007D8860(ptr, a1, a2).
// @field Unknown +0x40 void* field_0x40
// @field UnknownPtr40 +0x5F0 uint32_t field_0x5f0
extern void fn_007D8890(void* self, uint32_t a1, uint32_t a2) {
    auto* inner = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(self) + 0x40);
    // Dereference performed by the original code; the value is passed on the
    // stack to ext_007D8710 but that callee is cdecl with one parameter and
    // never reads it, so it has no effect beyond the load.
    volatile uint32_t tag = *reinterpret_cast<uint32_t*>(inner + 0x5F0);
    (void)tag;

    void* result = ext_007D8710(self);
    ext_007D8860(result, a1, a2);
}
} // namespace lift_007D8890

// [0x007DA8E0]
namespace lift_007DA8E0 {
// @name AccumulateStats
// @summary Accumulates value from ext_007C9280 and either field_0x164 of ext_007D8710 or increments a miss counter
// @field Stats +0x00 uint32_t field_0x00
// @field Stats +0x04 uint32_t field_0x04
// @field Stats +0x08 uint32_t field_0x08
// @field Node +0x164 uint32_t field_0x164


extern void* ext_007D8710(void* self);
extern uint32_t ext_007C9280(void* self);

static inline uint32_t& u32_at(void* base, uintptr_t offset) {
    return *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(base) + offset);
}

extern void fn_007DA8E0(void* out_stats, void* obj) {
    void* esi = ext_007D8710(obj);
    uint32_t val = ext_007C9280(obj);
    u32_at(out_stats, 0x0) += val;
    if (esi != nullptr) {
        u32_at(out_stats, 0x4) += u32_at(esi, 0x164);
    } else {
        u32_at(out_stats, 0x8) += 1;
    }
}
} // namespace lift_007DA8E0

// [0x007D4860] sub_007D4860 (54 bytes)
namespace lift_007D4860 {
// @name Dispatcher::SubmitValueAndDecrementCount
// @class Dispatcher
// @summary If value is nonzero, forward it to a handler slot chosen by field +0x10, then decrement the counter at +0x04 if positive.
// @field Dispatcher +0x04 int32_t field_0x04
// @field Dispatcher +0x10 int32_t field_0x10
// @field Dispatcher +0x1c void* field_0x1c
void fn_007D4860(void* self, int32_t value) {
    if (value == 0) {
        return;
    }

    auto* base = static_cast<uint8_t*>(self);
    const int32_t selector = *reinterpret_cast<int32_t*>(base + 0x10);
    auto* handler = static_cast<uint8_t*>(*reinterpret_cast<void**>(base + 0x1c));

    // Slot +0x10 when selector != 0, otherwise slot +0x0c.
    const std::size_t slot_offset = (selector != 0) ? 0x10 : 0x0c;
    auto fn = reinterpret_cast<void (__cdecl*)(int32_t)>(
        *reinterpret_cast<void**>(handler + slot_offset));
    fn(value);

    const int32_t count = *reinterpret_cast<int32_t*>(base + 0x04);
    if (count > 0) {
        *reinterpret_cast<int32_t*>(base + 0x04) = count - 1;
    }
}
} // namespace lift_007D4860

// [0x007D7190] sub_007D7190 (55 bytes)
namespace lift_007D7190 {
extern int32_t __cdecl ext_007D5950(int32_t a, int32_t b, int32_t c);

// @name addClampedCounter
// @summary Adds delta to *counter; if the result exceeds limit, reports via ext_007D5950 and returns 0, otherwise stores the sum and returns old + bias.
int32_t fn_007D7190(int32_t* counter, int32_t bias, int32_t limit, int32_t delta, int32_t reportArg) {
    const int32_t oldValue = *counter;
    const int32_t newValue = oldValue + delta;
    if (newValue > limit) {
        ext_007D5950(0, reportArg, 0x0099DF2C);
        return 0;
    }
    *counter = newValue;
    return oldValue + bias;
}
} // namespace lift_007D7190

// [0x007D4720] sub_007D4720 (55 bytes)
namespace lift_007D4720 {
// @name Unknown::InvokeSlotThenForward
// @class Unknown
// @summary If the count at +0x14 is positive, call slot +0x10 (flag set) or +0x0c (flag clear) of the table at +0x1c with +0x04, then tail-call slot +0x0c of the table with +0x08.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
// @field Unknown +0x14 int32_t count
// @field Unknown +0x18 int32_t flag
// @field Unknown +0x1c uint32_t table

using SlotFn = int32_t (*)(uint32_t table, int32_t arg);

static inline SlotFn slotAt(uint32_t table, int32_t offset) {
    uintptr_t base = static_cast<uintptr_t>(table);
    return reinterpret_cast<SlotFn>(lift_field<uint32_t>(reinterpret_cast<void*>(base), offset));
}

int32_t fn_007D4720(void* self) {
    if (lift_field<int32_t>(self, 0x14) <= 0) {
        return 0;
    }

    int32_t flag = lift_field<int32_t>(self, 0x18);
    uint32_t table = lift_field<uint32_t>(self, 0x1c);
    int32_t firstArg = lift_field<int32_t>(self, 0x04);

    SlotFn first = slotAt(table, flag != 0 ? 0x10 : 0x0c);
    (void)first(table, firstArg);

    table = lift_field<uint32_t>(self, 0x1c);
    int32_t secondArg = lift_field<int32_t>(self, 0x08);
    SlotFn tail = slotAt(table, 0x0c);
    return tail(table, secondArg);
}
} // namespace lift_007D4720

// [0x007DB4C0]
namespace lift_007DB4C0 {
// @name QueryFunctionThenForward_007DB4C0
// @summary Calls the function pointer at (self->+0xB0)->+0x08 with (0x4C, 0x10); if it returns nonzero, forwards (result, self, a1, a2) to sub_007DAE80, otherwise returns 0.
// @field Unknown +0xb0 void* field_0xb0
// @field Unknown +0x08 void* field_0x08

// Original: callee is sub_007DAE80 (80 bytes); cdecl, args pushed as (eax, esi, edx, float).
DWORD ext_007DAE80(DWORD result, void* self, DWORD a1, float a2);

DWORD fn_007DB4C0(void* self, DWORD a1, float a2) {
    // Original: eax = [esi + 0xb0]; ecx = [eax + 0x08];
    void* obj = lift_field<void*>(self, 0xb0);
    auto query = reinterpret_cast<DWORD (*)(DWORD, DWORD)>(lift_field<void*>(obj, 0x08));

    // Original: push 0x10; push 0x4c; call ecx  (first param is 0x4c).
    DWORD result = query(0x4C, 0x10);

    // Original: test eax, eax; je -> xor eax, eax; ret
    if (result == 0) {
        return 0;
    }

    // Original: push ecx (overwritten by fstp with a2); push edx (a1); push esi (self); push eax (result); call sub_007DAE80.
    return ext_007DAE80(result, self, a1, a2);
}
} // namespace lift_007DB4C0

// [0x007D9680] sub_007D9680 (59 bytes)
namespace lift_007D9680 {
extern void ext_007D5950(uint32_t kind, uint32_t arg4, uint32_t str, uint32_t arg3,
                             uint32_t n, uint32_t limit, uint32_t sum);

// @name advanceBounded
// @summary Advances a 32-bit position by n, reporting via ext_007D5950 when the new position exceeds the stored limit.
// @field Cursor +0x00 uint32_t field_0x00
// @field Cursor +0x04 uint32_t field_0x04
void fn_007D9680(void* cursor, uint32_t n, uint32_t arg3, uint32_t arg4) {
    uint32_t pos = lift_field<uint32_t>(cursor, 0x00);
    uint32_t limit = lift_field<uint32_t>(cursor, 0x04);
    uint32_t sum = pos + n;
    if (sum > limit) {
        ext_007D5950(3, arg4, 0x0099E0D8u, arg3, n, limit, sum);
    }
    lift_field<uint32_t>(cursor, 0x00) = lift_field<uint32_t>(cursor, 0x00) + n;
}
} // namespace lift_007D9680

// [0x007D4820]
namespace lift_007D4820 {
// @name CursorAdvanceIfAccepted
// @class Cursor
// @summary If the cursor index is below its limit, ask a callback to accept the current value; on acceptance advance the index and return the callback result, otherwise return 0.
// @field Cursor +0x04 int32_t index
// @field Cursor +0x08 uint32_t value
// @field Cursor +0x0C int32_t limit
// @field Cursor +0x10 uint32_t extra
// @field Cursor +0x1C uint32_t callbacks
uint32_t fn_007D4820(void* self) {
    // Callback table layout (per the object at +0x1C): slot +0x00 is a
    // one-argument acceptor, slot +0x08 is a two-argument acceptor.
    // Both use cdecl and receive the value first.
    if (lift_field<int32_t>(self, 0x04) >= lift_field<int32_t>(self, 0x0C)) {
        return 0;
    }

    const uint32_t value = lift_field<uint32_t>(self, 0x08);
    const uint32_t extra = lift_field<uint32_t>(self, 0x10);
    const uint32_t table = lift_field<uint32_t>(self, 0x1C);

    uint32_t accepted;
    if (extra == 0) {
        using Acceptor1 = uint32_t(__cdecl*)(uint32_t);
        auto fn = reinterpret_cast<Acceptor1>(
            static_cast<uintptr_t>(lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(table)), 0x00)));
        accepted = fn(value);
    } else {
        using Acceptor2 = uint32_t(__cdecl*)(uint32_t, uint32_t);
        auto fn = reinterpret_cast<Acceptor2>(
            static_cast<uintptr_t>(lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(table)), 0x08)));
        accepted = fn(value, extra);
    }

    if (accepted == 0) {
        return 0;
    }
    lift_field<int32_t>(self, 0x04) += 1;
    return accepted;
}
} // namespace lift_007D4820

// [0x007D59C0] sub_007D59C0 (60 bytes)
namespace lift_007D59C0 {
extern const float mem_0099D148; // .rdata 0x7F7FFFFF (+FLT_MAX)
extern const float mem_0093C1A8; // .rdata 0xFF7FFFFF (-FLT_MAX)

// @name InitExtentBounds
// @summary Resets a 0x38-byte extent struct: zeroes the header and flag words, sets min (+0x08..+0x10) to +FLT_MAX and max (+0x14..+0x1C) to -FLT_MAX, and zeroes +0x20..+0x34.
// @field <unknown> +0x00 uint32_t field_0x00
// @field <unknown> +0x04 uint32_t field_0x04
// @field <unknown> +0x08 float field_0x08
// @field <unknown> +0x0C float field_0x0C
// @field <unknown> +0x10 float field_0x10
// @field <unknown> +0x14 float field_0x14
// @field <unknown> +0x18 float field_0x18
// @field <unknown> +0x1C float field_0x1C
// @field <unknown> +0x20 uint32_t field_0x20
// @field <unknown> +0x24 uint32_t field_0x24
// @field <unknown> +0x28 uint32_t field_0x28
// @field <unknown> +0x2C uint32_t field_0x2C
// @field <unknown> +0x30 uint32_t field_0x30
// @field <unknown> +0x34 uint32_t field_0x34
void fn_007D59C0(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    const auto put_u32 = [base](size_t off, uint32_t v) { std::memcpy(base + off, &v, sizeof v); };
    const auto put_f32 = [base](size_t off, float v) { std::memcpy(base + off, &v, sizeof v); };

    const float pos_max = mem_0099D148;
    const float neg_max = mem_0093C1A8;

    put_u32(0x20, 0);
    put_u32(0x04, 0);
    put_u32(0x00, 0);
    put_u32(0x24, 0);

    put_f32(0x08, pos_max);
    put_f32(0x0C, pos_max);
    put_f32(0x10, pos_max);

    put_f32(0x14, neg_max);
    put_f32(0x18, neg_max);
    put_f32(0x1C, neg_max);

    put_u32(0x2C, 0);
    put_u32(0x28, 0);
    put_u32(0x30, 0);
    put_u32(0x34, 0);
}
} // namespace lift_007D59C0

// [0x007D5C60] sub_007D5C60 (31 bytes)
namespace lift_007D5C60 {
// Imported indirect-call slot at 0x00AB28C4 (resolved at load time).
extern void* (*mem_00AB28C4)(void* arg);

// Tail-called extent reset (lifted as fn_007D59C0).
extern void ext_007D59C0(void* self);

// @name ExtentBounds::TryInitFromSub
// @class ExtentBounds
// @summary Passes the sub-object at +0x6C to an imported resolver; if it returns non-null, re-initializes the extent on that result, otherwise does nothing.
// @field ExtentBounds +0x6C void* field_0x6C
void fn_007D5C60(void* self) {
    void* sub = static_cast<uint8_t*>(self) + 0x6C;
    void* result = mem_00AB28C4(sub);
    if (result != nullptr) {
        ext_007D59C0(result);
    }
}
} // namespace lift_007D5C60

// [0x007DCAC0] sub_007DCAC0 (61 bytes)
namespace lift_007DCAC0 {
// @name HashTable_FindAndUnlinkByKey
// @summary Hashes a packed 32-bit key into a chained bucket table, unlinks the first node with a matching key, and returns it (or 0).
// @field HashTable +0x00 uint32_t bucketsAddr
// @field HashTable +0x08 uint32_t bucketCount
// @field HashNode +0x08 uint32_t key
// @field HashNode +0x10 uint32_t next
uint32_t fn_007DCAC0(void* self, uint32_t key) {
    // Guest-memory accessor: addresses are 32-bit guest pointers stored in the struct.
    auto mem32 = [](uint32_t addr) -> uint32_t& {
        return *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(addr));
    };

    // Bucket index: (high16 arithmetic-shifted) XOR low16, masked by (count - 1).
    uint32_t hash = static_cast<uint32_t>(static_cast<int32_t>(key) >> 16) ^ (key & 0xFFFFu);
    uint32_t mask = lift_field<uint32_t>(self, 0x08) - 1u;
    uint32_t link = lift_field<uint32_t>(self, 0x00) + 4u * (hash & mask);

    uint32_t node = mem32(link);
    if (node == 0) {
        return 0;
    }

    // Walk the chain. 'link' is the address of the pointer that refers to 'node'.
    for (;;) {
        if (mem32(node + 0x08) == key) {
            mem32(link) = mem32(node + 0x10);  // unlink
            return node;
        }
        if (mem32(node + 0x10) == 0) {
            return 0;
        }
        link = node + 0x10;
        node = mem32(link);
    }
}
} // namespace lift_007DCAC0

// [0x007D4AA0] sub_007D4AA0 (64 bytes)
namespace lift_007D4AA0 {
// @name Unknown::FindLinkPredecessor
// @class Unknown
// @summary Searches a link structure rooted at the head node (+0x04 chain, then +0x08 chain with back-link checks) for the given key; returns the predecessor node, the matching child, or 0.
// @field TreeNode +0x00 uint32_t field_0x00
// @field TreeNode +0x04 uint32_t field_0x04
// @field TreeNode +0x08 uint32_t field_0x08

// Guest-address load helper; keeps 32-bit address arithmetic explicit.
static inline std::uint32_t lift_load32(std::uint32_t addr) {
    return *reinterpret_cast<const std::uint32_t*>(static_cast<std::uintptr_t>(addr));
}

// Stack arguments in the original: key at [esp+4], head at [esp+8].
std::uint32_t fn_007D4AA0(std::uint32_t key, std::uint32_t head) {
    const std::uint32_t first = lift_load32(head + 0x04);

    if (first != key) {
        // Walk the +0x00 chain from 'first' until a node whose +0x00 link equals key.
        std::uint32_t p = first;
        while (lift_load32(p) != key) {
            p = lift_load32(p);
        }
        return p;
    }

    // first == key: examine the +0x08 chain of head.
    std::uint32_t cur = lift_load32(head + 0x08);
    if (cur == key) {
        return 0;
    }

    std::uint32_t prev = head;
    while (lift_load32(cur + 0x04) == prev) {
        prev = cur;
        cur = lift_load32(cur + 0x08);
        if (cur == key) {
            return 0;
        }
    }
    return cur;
}
} // namespace lift_007D4AA0

// [0x007D83B0] sub_007D83B0 (68 bytes)
namespace lift_007D83B0 {
// Known callee 0x006A6E8C: thunk_MSVCR80_memset (IAT jump thunk forwarding to MSVCR80!memset.)
extern void* ext_006A6E8C(void* dst, int value, size_t count);
// Known callee 0x007CCAB0: Unknown::ResetDefaults (Zeroes a 0x44-byte state block and sets float defaults.)
extern void ext_007CCAB0(void* self);
// Callee 0x007D8760: sub_007D8760 (98 bytes, signature not yet recovered; called as (arg2, self)).
extern void ext_007D8760(void* arg, void* self);
// .rdata constant 0x0099D148 = 0x7F7FFFFF (FLT_MAX bit pattern).
extern int mem_0099D148;

// @name Unknown::InitStateBlock
// @class Unknown
// @summary Zeroes a 0xD8-byte object, sets float defaults (1.0 at +0x50/+0x6C, FLT_MAX at +0xD0), resets the sub-block at +0x84, then runs a secondary init with arg2; returns self.
// @field Unknown +0x50 float field_0x50
// @field Unknown +0x6C float field_0x6C
// @field Unknown +0xD0 float field_0xD0
void* fn_007D83B0(void* self, void* arg2) {
    ext_006A6E8C(self, 0, 0xD8);

    const float one = 1.0f;
    const float flt_max = std::bit_cast<float>(mem_0099D148);

    lift_field<float>(self, 0x6C) = one;
    lift_field<float>(self, 0x50) = one;

    lift_field<float>(self, 0xD0) = flt_max;

    ext_007CCAB0(static_cast<uint8_t*>(self) + 0x84);
    ext_007D8760(arg2, self);
    return self;
}
} // namespace lift_007D83B0

// [0x007D4920] sub_007D4920 (76 bytes)
namespace lift_007D4920 {
// Node addresses are guest addresses; each node is a pair of guest addresses
// (node[0], node[1]). Reads go through the guest address as a pointer.
// @name SearchPairTree
// @summary Depth-first search over pair nodes from node until end (returns 1) or sentinel (returns 0).

static inline uint32_t read_guest_u32(uint32_t addr) {
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(addr));
}

int fn_007D4920(uint32_t sentinel, uint32_t node, uint32_t end) {
    if (node == sentinel) {
        return 0;
    }
    if (node == end) {
        return 1;
    }
    if (fn_007D4920(sentinel, read_guest_u32(node), end) != 0) {
        return 1;
    }
    if (fn_007D4920(sentinel, read_guest_u32(node + 4), end) != 0) {
        return 1;
    }
    return 0;
}
} // namespace lift_007D4920

// [0x007D9630] sub_007D9630 (78 bytes)
namespace lift_007D9630 {
// @name SplitRangeEvenly_007D9630
// @summary Writes `count` consecutive 24-byte ranges starting at `start`, each `total / count` long (at least one range is always written).
// @field Range +0x00 int32_t begin
// @field Range +0x04 int32_t end
// @field Range +0x08 int32_t flags

// Stride between Range entries is 0x18 (24 bytes); only offsets 0x00, 0x04 and
// 0x08 are touched by the original code.
struct Range {
    int32_t begin; // +0x00
    int32_t end;   // +0x04
    int32_t flags; // +0x08 (always written as 0)
    int32_t pad[3];
};
static_assert(sizeof(Range) == 0x18, "Range stride must be 0x18");

// Original is __stdcall-style with `ret 0x10` (four 32-bit stack arguments, callee-cleaned).
// The division by `count` traps on zero in the original; callers must pass count != 0.
void __stdcall SplitRangeEvenly_007D9630(Range* out, int32_t start, int32_t total, int32_t count) {
    const int32_t chunk = total / count;
    const int32_t records = (count > 1) ? count : 1;

    uint32_t begin = static_cast<uint32_t>(start);
    for (int32_t k = 0; k < records; ++k) {
        out[k].begin = static_cast<int32_t>(begin);
        const uint32_t end = begin + static_cast<uint32_t>(chunk);
        out[k].end = static_cast<int32_t>(end);
        out[k].flags = 0;
        begin = end;
    }
}
} // namespace lift_007D9630

// [0x007DD040] sub_007DD040 (81 bytes)
namespace lift_007DD040 {
// Known callee 0x007DCBB0 (97 bytes): one stack argument, caller-cleaned.
extern void ext_007DCBB0(uint32_t arg);

// @name NotifyAndResetPair
// @class Owner
// @summary Forwards two stored values to the object at this->field_0x08->field_0xb0, calls the external helper with this->field_0x2c, then invokes this's vtable slot 0 with 0 and finally notifies the same object with this.
// @field Owner +0x00 void* vtable
// @field Owner +0x08 void* field_0x08
// @field Owner +0x10 uint32_t field_0x10
// @field Owner +0x14 uint32_t field_0x14
// @field Owner +0x2c uint32_t field_0x2c
void fn_007DD040(void* self) {
    using Fn32 = void (*)(void* obj, uint32_t arg);
    using FnPtr = void (*)(void* obj, void* arg);

    // Object at this+0x08, and its sub-object at +0xb0 (the call target object).
    void* inner = lift_field<void*>(self, 0x08);
    void* target = lift_field<void*>(inner, 0xb0);

    // target->fn(this+0x14)
    auto fnA = lift_field<Fn32>(target, 0x0c);
    fnA(target, lift_field<uint32_t>(self, 0x14));

    // Re-fetch the chain (same as above) and call target->fn(this+0x10).
    inner = lift_field<void*>(self, 0x08);
    target = lift_field<void*>(inner, 0xb0);
    auto fnB = lift_field<Fn32>(target, 0x0c);
    fnB(target, lift_field<uint32_t>(self, 0x10));

    // External helper with this+0x2c as its single argument.
    ext_007DCBB0(lift_field<uint32_t>(self, 0x2c));

    // this->vtable[0](this, 0)
    void* vtbl = lift_field<void*>(self, 0x00);
    auto vslot0 = lift_field<void (*)(void* obj, uint32_t arg)>(vtbl, 0x00);
    vslot0(self, 0u);

    // Final notification: (this+0x08)->+0xb0 ->fn(obj, this).
    inner = lift_field<void*>(self, 0x08);
    target = lift_field<void*>(inner, 0xb0);
    auto fnC = lift_field<FnPtr>(target, 0x0c);
    fnC(target, self);
}
} // namespace lift_007DD040

// [0x007DB130] sub_007DB130 (83 bytes)
namespace lift_007DB130 {
// @name Unknown::DispatchSixFields_007DB130
// @class Unknown
// @summary Calls a function pointer at [[self+0x24]+0x0c] once per field (+0x00..+0x10), then tail-calls it with +0x14; returns that callee's result.
// @field Unknown +0x00 DWORD field_0x00
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
// @field Unknown +0x0c DWORD field_0x0c
// @field Unknown +0x10 DWORD field_0x10
// @field Unknown +0x14 DWORD field_0x14
// @field Unknown +0x24 void* field_0x24
int fn_007DB130(void* self) {
    using Slot = int(__cdecl*)(DWORD);
    // Each call re-reads the dispatch object at self+0x24 and its slot at +0x0c,
    // matching the original code, which reloads them before every call.
    auto call = [self](ptrdiff_t fieldOffset) -> int {
        void* obj = lift_field<void*>(self, 0x24);
        Slot fn = reinterpret_cast<Slot>(lift_field<void*>(obj, 0x0c));
        return fn(lift_field<DWORD>(self, fieldOffset));
    };

    call(0x00);
    call(0x04);
    call(0x08);
    call(0x0c);
    call(0x10);
    // Tail call in the original: the result of this last call is returned as-is.
    return call(0x14);
}
} // namespace lift_007DB130

// [0x007DCA30] sub_007DCA30 (106 bytes)
namespace lift_007DCA30 {
// @name allocTaggedPow2Array
// @summary Allocates a 12-byte header and a zeroed uint32 array whose capacity is the largest power of two <= count (minimum 1), using the allocator's function pointer at offset 0.
// @field TaggedArray +0x00 uint32_t* data
// @field TaggedArray +0x04 uint32_t tag
// @field TaggedArray +0x08 uint32_t capacity

typedef void* (*AllocFn)(uint32_t size);

struct TaggedArray {
    uint32_t* data;      // +0x00
    uint32_t  tag;       // +0x04
    uint32_t  capacity;  // +0x08
};

TaggedArray* fn_007DCA30(uint32_t tag, int32_t count, void* allocator) {
    AllocFn alloc = *reinterpret_cast<AllocFn*>(allocator);

    TaggedArray* arr = static_cast<TaggedArray*>(alloc(12));
    arr->tag = tag;
    arr->capacity = 1;

    if (count > 1) {
        // Largest power of two <= count.
        uint32_t cap = 1;
        int32_t n = count;
        do {
            n >>= 1;
            cap <<= 1;
        } while (n > 1);
        arr->capacity = cap;
    }

    arr->data = static_cast<uint32_t*>(alloc(arr->capacity * 4));
    for (uint32_t i = 0; i < arr->capacity; ++i) {
        arr->data[i] = 0;
    }
    return arr;
}
} // namespace lift_007DCA30

// [0x007DD160] sub_007DD160 (109 bytes)
namespace lift_007DD160 {
// @name Unknown::pairFlagIsClear_007DD160
// @class Unknown
// @summary Maps the unordered pair (a, b) to a triangular index into a packed nibble table and returns true when that flag bit is clear; returns false when a == b.
// @field Unknown +0x0c int32_t field_0x0c (multiplier applied to the lower index of the pair)
// @field Unknown +0x20 uint8_t* field_0x20 (packed 4-bit flag table base pointer)
bool fn_007DD160(void* self, int32_t a, int32_t b) {
    if (a == b) {
        return false;
    }

    // Branchless min/max of (a, b) via sign mask of (b - a).
    const uint32_t ua = static_cast<uint32_t>(a);
    const uint32_t ub = static_cast<uint32_t>(b);
    const uint32_t mask = static_cast<uint32_t>(static_cast<int32_t>(ub - ua) >> 31);
    const uint32_t lo = ((~mask) & ua) | (mask & ub);
    const uint32_t hi = (mask & ua) | ((~mask) & ub);

    // Triangular offset: (lo + 1) * (lo + 2) / 2.
    const uint32_t prod = (lo + 1u) * (lo + 2u);
    const uint32_t tri = static_cast<uint32_t>(static_cast<int32_t>(prod) >> 1);

    const uint32_t mult = static_cast<uint32_t>(lift_field<int32_t>(self, 0x0c));
    const uint32_t n = hi - tri + mult * lo;

    // Two nibbles per byte: even index -> low nibble, odd index -> high nibble.
    const int32_t byteIndex = static_cast<int32_t>(n) >> 1;
    const uint8_t* table = lift_field<uint8_t*>(self, 0x20);
    const uint32_t packed = table[byteIndex];
    const unsigned shift = (n & 1u) * 4u;

    // Flag is bit 2 of the selected nibble; result is true when it is clear.
    const uint32_t flag = (packed >> (shift + 2u)) & 1u;
    return flag == 0u;
}
} // namespace lift_007DD160

// [0x007DCC20] sub_007DCC20 (110 bytes)
namespace lift_007DCC20 {
// Layouts assume the original 32-bit (x86) object layout.
struct BucketNode {
    uint8_t   pad_00[0x0C];
    uint32_t  value;        // +0x0C
    BucketNode* next;       // +0x10
};

struct BucketTable {
    BucketNode** slots;     // +0x00
    uint8_t   pad_04[0x04];
    int32_t   slotCount;    // +0x08
};

struct BucketMap {
    uint8_t   pad_00[0x28];
    BucketTable* table;     // +0x28
};

struct BucketCursor {
    int32_t   slotIndex;    // +0x00
    BucketNode* node;       // +0x04
};

struct OutBuffer {
    uint32_t* data;         // +0x00
    int32_t   capacity;     // +0x04
    int32_t   count;        // +0x08
};

// @name fillValuesFromBucketCursor_007DCC20
// @summary Walks a bucketed node map from a cursor, copying node values into an output buffer until it is full or the map is exhausted; returns true if the buffer filled up.
// @field BucketMap +0x28 BucketTable* table
// @field BucketTable +0x00 BucketNode** slots
// @field BucketTable +0x08 int32_t slotCount
// @field BucketCursor +0x00 int32_t slotIndex
// @field BucketCursor +0x04 BucketNode* node
// @field BucketNode +0x0C uint32_t value
// @field BucketNode +0x10 BucketNode* next
// @field OutBuffer +0x00 uint32_t* data
// @field OutBuffer +0x04 int32_t capacity
// @field OutBuffer +0x08 int32_t count
bool fillValuesFromBucketCursor_007DCC20(BucketMap* map, BucketCursor* cur, OutBuffer* out) {
    BucketTable* table = map->table;
    out->count = 0;
    for (;;) {
        BucketNode* n = cur->node;
        if (n == nullptr) {
            // Advance to the next non-empty bucket.
            int32_t idx;
            do {
                idx = ++cur->slotIndex;
            } while (idx < table->slotCount && table->slots[idx] == nullptr);
            if (idx == table->slotCount) {
                return false;
            }
            n = table->slots[idx];
        }
        cur->node = n->next;
        out->data[out->count] = n->value;
        out->count++;
        if (out->count >= out->capacity) {
            return true;
        }
    }
}
} // namespace lift_007DCC20

// [0x007D6260]
namespace lift_007D6260 {
// @name sub_007D6260_freeBuffer
// @summary Frees an allocated buffer via a callback at +0x1c/+0x10 and clears pointer and size fields.
// @field Buffer +0x00 void* data
// @field Buffer +0x04 uint32_t size
// @field Buffer +0x1c void* allocator


void __cdecl sub_007D6260(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* data = lift_field<void*>(base, 0x00);
    if (data != nullptr) {
        uint8_t* allocator = lift_field<uint8_t*>(base, 0x1c);
        using FreeFn = void(__cdecl*)(void*);
        FreeFn free_fn = lift_field<FreeFn>(allocator, 0x10);
        free_fn(data);
        lift_field<uint32_t>(base, 0x00) = 0;
        lift_field<uint32_t>(base, 0x04) = 0;
    }
}
} // namespace lift_007D6260

// [0x007D48C0]
namespace lift_007D48C0 {
// @name treeRotateLeft
// @summary Performs a binary tree left rotation on the given node.
// @field Node +0x00 uint32_t left
// @field Node +0x04 uint32_t right
// @field Node +0x08 uint32_t parent
void sub_007D48C0(void* node) {
    void* right = lift_field<void*>(node, 0x4);
    void* right_left = lift_field<void*>(right, 0x0);
    lift_field<void*>(node, 0x4) = right_left;
    lift_field<void*>(right_left, 0x8) = node;
    void* parent = lift_field<void*>(node, 0x8);
    lift_field<void*>(right, 0x8) = parent;
    if (node == lift_field<void*>(parent, 0x0)) {
        lift_field<void*>(parent, 0x0) = right;
    } else {
        lift_field<void*>(parent, 0x4) = right;
    }
    lift_field<void*>(right, 0x0) = node;
    lift_field<void*>(node, 0x8) = right;
}
} // namespace lift_007D48C0

// [0x007D5DA0]
namespace lift_007D5DA0 {
// @name setFpuPrecision
// @summary Sets the x87 FPU precision control bits while preserving exception masks and clearing exceptions.


uint32_t __cdecl sub_007D5DA0(uint32_t precision) {
    // Original x87: fnstcw, mask (cw & 0x7f) | ((precision & 3) << 8), fnclex, fldcw.
    std::feclearexcept(FE_ALL_EXCEPT);
    return ((precision & 0x3u) << 8) | 0x7fu;
}
} // namespace lift_007D5DA0

// [0x007D48F0]
namespace lift_007D48F0 {
// @name TreeNode::rotateRight
// @class TreeNode
// @summary Performs a right rotation on a binary tree node with left/right/parent pointers.
// @field TreeNode +0x00 void* left
// @field TreeNode +0x04 void* right
// @field TreeNode +0x08 void* parent
void sub_007D48F0(void* node) {
    void* left = lift_field<void*>(node, 0x0);
    void* leftRight = lift_field<void*>(left, 0x4);
    lift_field<void*>(node, 0x0) = leftRight;
    lift_field<void*>(leftRight, 0x8) = node;

    void* parent = lift_field<void*>(node, 0x8);
    lift_field<void*>(left, 0x8) = parent;

    if (node == lift_field<void*>(parent, 0x4)) {
        lift_field<void*>(parent, 0x4) = left;
    } else {
        lift_field<void*>(parent, 0x0) = left;
    }

    lift_field<void*>(left, 0x4) = node;
    lift_field<void*>(node, 0x8) = left;
}
} // namespace lift_007D48F0

// [0x007DAD70]
namespace lift_007DAD70 {
// @name sub_007DAD70
// @summary Tail-calls ext_007D5950 with a nested field at +0xc -> +0xb0 and constant 0x0099e1e0
// @field Unknown +0x0 void* field_0x0
// @field Unknown +0xc void* field_0xc
// @field Unknown +0xb0 uint32_t field_0xb0


extern uint32_t ext_007D5950(uint32_t a0, uint32_t a1, uint32_t a2);

uint32_t sub_007DAD70(void* arg0) {
    void* v0 = lift_field<void*>(arg0, 0x0);
    void* v1 = lift_field<void*>(v0, 0xc);
    uint32_t v2 = lift_field<uint32_t>(v1, 0xb0);
    return ext_007D5950(0, v2, 0x0099e1e0);
}
} // namespace lift_007DAD70

// [0x007DAE50] sub_007DAE50 (43 bytes)
namespace lift_007DAE50 {
extern uint32_t ext_007DAD50(uint32_t result, uint32_t self);

// @name Unknown::invokeFactoryThenDispatch_007DAE50
// @class Unknown
// @summary Calls a function pointer stored at obj+0x08 (obj = self+0xB0) with (0x20, 0x10); if it returns non-null, forwards that result and self to ext_007DAD50, otherwise returns 0.
// @field Unknown +0xB0 void* field_0xB0
void* fn_007DAE50(void* self) {
    // Object pointer stored at self+0xB0 (32-bit target: pointers are 4 bytes).
    const uint32_t obj = lift_field<uint32_t>(self, 0xB0);

    // Function pointer stored at obj+0x08, called cdecl with args (0x20, 0x10).
    using Factory = uint32_t(__cdecl*)(uint32_t, uint32_t);
    const auto fn = reinterpret_cast<Factory>(static_cast<uintptr_t>(lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)), 0x08)));
    const uint32_t eax = fn(0x20, 0x10);

    if (eax != 0) {
        return reinterpret_cast<void*>(static_cast<uintptr_t>(ext_007DAD50(eax, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)))));
    }
    return nullptr;
}
} // namespace lift_007DAE50

// [0x007DA820]
namespace lift_007DA820 {
// @name Unknown::walkLinkChainWhileFlagged_007DA820
// @class Unknown
// @summary Walks a link chain from a start node, following each node's child via FindLinkPredecessor while the node's flag byte at +0x1c4 (bit 0x02) is set; returns the first node whose flag is clear, or 0 if the chain is exhausted.
// @field LinkNode +0x14 std::uint32_t field_0x14
// @field LinkObject +0x1c4 std::uint8_t field_0x1c4

extern std::uint32_t ext_007D4AA0(std::uint32_t key, std::uint32_t node);

std::uint32_t Unknown_walkLinkChainWhileFlagged_007DA820(std::uint32_t key, std::uint32_t node) {
    std::uint32_t eax = node;
    if (eax == 0) {
        return 0;
    }
    for (;;) {
        std::uint32_t ecx = lift_field<std::uint32_t>(reinterpret_cast<void*>(static_cast<std::uintptr_t>(eax)), 0x14);
        std::uint8_t flags = lift_field<std::uint8_t>(reinterpret_cast<void*>(static_cast<std::uintptr_t>(ecx)), 0x1c4);
        if ((flags & 0x02) == 0) {
            return eax;
        }
        eax = ext_007D4AA0(key, eax);
        if (eax == 0) {
            return 0;
        }
    }
}
} // namespace lift_007DA820

// [0x007DB9E0]
namespace lift_007DB9E0 {
// @name makeSkewSymmetricMatrix
// @summary Builds a 3x3 skew-symmetric (cross-product) matrix in [eax] from a 3D vector in [ecx].
// @field Vec3 +0x00 float x
// @field Vec3 +0x04 float y
// @field Vec3 +0x08 float z


void sub_007DB9E0(void* eax, const void* ecx) {
    float x = lift_field<float>(ecx, 0x00);
    float y = lift_field<float>(ecx, 0x04);
    float z = lift_field<float>(ecx, 0x08);

    lift_field<float>(eax, 0x00) = 0.0f;
    lift_field<float>(eax, 0x04) = z;
    lift_field<float>(eax, 0x08) = -y;
    lift_field<float>(eax, 0x0C) = -z;
    lift_field<float>(eax, 0x10) = 0.0f;
    lift_field<float>(eax, 0x14) = x;
    lift_field<float>(eax, 0x18) = y;
    lift_field<float>(eax, 0x1C) = -x;
    lift_field<float>(eax, 0x20) = 0.0f;
}
} // namespace lift_007DB9E0

// [0x007D6290]
namespace lift_007D6290 {
// @name setOwnedState
// @summary Updates state at +0x10 and invokes cleanup callback if transitioning from 1 while unowned
// @field Obj +0x00 uint32_t field_0x00
// @field Obj +0x10 uint32_t field_0x10
// @field Obj +0x14 uint32_t field_0x14
// @field Obj +0x1c uint8_t* field_0x1c

void sub_007D6290(uint8_t* obj, uint32_t new_val) {
    uint32_t old_val = lift_field<uint32_t>(obj, 0x10);
    if (old_val == new_val) {
        return;
    }

    if (lift_field<uint32_t>(obj, 0x14) == 0 && old_val == 1) {
        uint32_t arg = lift_field<uint32_t>(obj, 0x00);
        if (arg != 0) {
            uint8_t* vtable_or_ctx = lift_field<uint8_t*>(obj, 0x1c);
            auto fn = lift_field<void (*)(uint32_t)>(vtable_or_ctx, 0x10);
            fn(arg);
        }
    }

    lift_field<uint32_t>(obj, 0x10) = new_val;
}
} // namespace lift_007D6290
