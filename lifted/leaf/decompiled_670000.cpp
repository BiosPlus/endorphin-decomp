// Lifted C++ translation unit: lifted/leaf/decompiled_670000.cpp
#include "lift_compat.h"
#include <cstdio>
#include <new>
#include <string>

#include <string>
namespace lift_006721B0 {
extern void ext_00672000(void* self);

// @name storeArgIntoFirstDword_006721B0
// @summary Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.
// @field field_0x00 DWORD field_0x00 (written from stack arg)
DWORD fn_006721B0(void* self, DWORD value) {
    ext_00672000(self);
    lift_field<DWORD>(self, 0x00) = value;
    return value;
}
} // namespace lift_006721B0
#include <cstdint>
#include <bit>

#include <bit>
namespace lift_0067B050 {
extern void ext_0067AE50(void* self);

// @name SubObject::ClearFlagThenVirtualSlot2
// @class Unknown
// @summary Clears the byte flag at +0x04, calls ext_0067AE50 on self, then dispatches virtual slot 2 on self's vtable (tail jump in original).
// @field Unknown +0x04 uint8_t field_0x04
void fn_0067B050(void* self) {
    lift_field<uint8_t>(self, 0x04) = 0;
    ext_0067AE50(self);

    // Original: eax = [self]; edx = [eax + 8]; ecx = self; jmp edx
    void* vtable = lift_field<void*>(self, 0x00);
    auto slot2 = reinterpret_cast<void (*)(void*)>(lift_field<void*>(vtable, 0x08));
    slot2(self);
}
} // namespace lift_0067B050

// [0x00672E50] sub_00672E50 (27 bytes)
namespace lift_00672E50 {
// @name sub_00672E50
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_00672C20(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_00672E50(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_00672C20(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_00672E50

// [0x0067F8F0] sub_0067F8F0 (32 bytes)
namespace lift_0067F8F0 {
// @name Unknown::PopBackIfSpanAtLeast4
// @class Unknown
// @summary If the element range [begin, end) spans at least one 4-byte slot, decrement end by 4 (pop back).
// @field Unknown +0x00 uint8_t* field_0x00 (pointer to range-holder struct)
// @field RangeHolder +0x04 uint32_t field_0x04 (range begin)
// @field RangeHolder +0x08 uint32_t field_0x08 (range end)
void fn_0067F8F0(void* self) {
    uint8_t* holder = lift_field<uint8_t*>(self, 0x00);
    uint32_t begin = lift_field<uint32_t>(holder, 0x04);
    if (begin == 0) {
        return;
    }
    uint32_t end = lift_field<uint32_t>(holder, 0x08);
    // Original: esi = (end - begin) sar 2; ZF from that shift decides the branch.
    int32_t span = static_cast<int32_t>(end - begin);
    if ((span >> 2) == 0) {
        return;
    }
    lift_field<uint32_t>(holder, 0x08) = end - 4;
}
} // namespace lift_0067F8F0

// [0x0067EC70] sub_0067EC70 (34 bytes)
namespace lift_0067EC70 {
// Import slot for MSVCR80!_snprintf (0x009251E0). Not called directly; the
// portable body below uses std::snprintf.
extern int mem_009251E0;

// @name Unknown::formatPairToBuffer
// @class Unknown
// @summary Formats the two ints at this+0x00 and this+0x04 into a caller buffer via snprintf (__thiscall, ret 8).
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x04 int32_t field_0x04
//
// Stack layout at entry: [esp+4] = buffer, [esp+8] = buffer size.
// snprintf is called as snprintf(buffer, size, fmt, this->field_0x04, this->field_0x00),
// with the format string at 0x0098C7C0 (not recovered here; see FORMAT below).
// Return value is snprintf's result (left in eax).
static constexpr const char* kFormat = "6|b"; // PLACEHOLDER: real format at 0x0098C7C0 not yet recovered

int fn_0067EC70(void* self, char* buffer, int size) {
    const int32_t field_0x00 = lift_field<int32_t>(self, 0x00);
    const int32_t field_0x04 = lift_field<int32_t>(self, 0x04);
    return std::snprintf(buffer, static_cast<size_t>(size), kFormat, field_0x04, field_0x00);
}
} // namespace lift_0067EC70

// [0x0067ED10]
namespace lift_0067ED10 {
// @name parseHexFromString
// @summary Parses a hexadecimal integer from a std::string and stores it at offset 0 of self
// @field Unknown +0x00 uint32_t field_0x00

extern uint32_t mem_00924FFC;
extern uint32_t mem_0092530C;

uint32_t __thiscall fn_0067ED10(void* self, const void* str) {
    using StringIndexFn = const char* (__thiscall*)(const void*, uint32_t);
    using StrtoulFn = uint32_t(__cdecl*)(const char*, char**, int);

    const char* ptr = reinterpret_cast<StringIndexFn>(mem_00924FFC)(str, 0);
    uint32_t val = reinterpret_cast<StrtoulFn>(mem_0092530C)(ptr, nullptr, 16);
    *reinterpret_cast<uint32_t*>(self) = val;
    return val;
}
} // namespace lift_0067ED10

// [0x0067AE20]
namespace lift_0067AE20 {
// @name sub_0067AE20
// @summary Checks under a critical section lock whether a pointer's field at +0x10 is non-zero.
// @field Self +0x08 void* lock
// @field Self +0x0C void* field_0x0C


extern void __thiscall ext_0065C640(void* self);
extern void __thiscall ext_0065C650(void* self);

extern bool __thiscall sub_0067AE20(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* lock = base + 0x8;
    ext_0065C640(lock);
    uint8_t* ptr = *reinterpret_cast<uint8_t**>(base + 0xC);
    bool result = (*reinterpret_cast<uint32_t*>(ptr + 0x10) != 0);
    ext_0065C650(lock);
    return result;
}
} // namespace lift_0067AE20

// [0x00671F50] sub_00671F50 (45 bytes)
namespace lift_00671F50 {
// @name compareOwnerAndDispatchVirtual
// @summary If self and other share the same owner pointer at +0x04, call vtable slot 42 on that owner with (self, other); return its result as BOOL, else FALSE.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x04 void* field_0x04
BOOL __thiscall fn_00671F50(void* self, void* other) {
    void* selfOwner = lift_field<void*>(self, 0x04);
    void* otherOwner = lift_field<void*>(other, 0x04);
    if (selfOwner != otherOwner) {
        return FALSE;
    }

    // Vtable slot at byte offset 0xA8 => index 42 (pointer-sized slots).
    void** vtable = *reinterpret_cast<void***>(selfOwner);
    using VirtualFn = BOOL (*)(void* thisPtr, void* a, void* b);
    auto fn = reinterpret_cast<VirtualFn>(vtable[0xA8 / sizeof(void*)]);
    BOOL result = fn(selfOwner, self, other);
    return result ? TRUE : FALSE;
}
} // namespace lift_00671F50

// [0x00678DE0] sub_00678DE0 (48 bytes)
namespace lift_00678DE0 {
// @name sub_00678DE0
// @summary Auto-lifted identical-shape clone of 0x00503CD0 (fn_00503CD0).
namespace lift_00503CD0 {
extern void ext_006A5C5C(uint32_t ptr);
extern uint32_t mem_0092FB68;

// @name fn_00678DE0
// @summary Sets vtable to 0x0094F074, frees buffer at +0x14 if non-null, and zeroes fields at +0x14, +0x18, +0x1C.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
// @field Unknown +0x1C uint32_t field_0x1c
void __thiscall fn_00503CD0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(obj) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0092FB68));

    uint32_t ptr = *reinterpret_cast<uint32_t*>(obj + 0x8);
    if (ptr != 0) {
        ext_006A5C5C(ptr);
    }

    *reinterpret_cast<uint32_t*>(obj + 0x8) = 0;
    *reinterpret_cast<uint32_t*>(obj + 0xC) = 0;
    *reinterpret_cast<uint32_t*>(obj + 0x10) = 0;
}
} // namespace lift_00503CD0
} // namespace lift_00678DE0

// [0x0067F9D0]
namespace lift_0067F9D0 {
// @name Unknown::notifyAndPopBack
// @class Unknown
// @summary Notifies the last 8-byte element of the range at +0x04..+0x08 via ext_0048A120, then shrinks the range end by one element.
// @field Unknown +0x04 uint32_t begin
// @field Unknown +0x08 uint32_t end

extern void ext_0048A120(uint32_t begin, uint32_t end, uint32_t self);

void fn_0067F9D0(void* self) {
    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    if (begin == 0) {
        return;
    }

    uint32_t end = lift_field<uint32_t>(self, 0x08);
    int32_t count = static_cast<int32_t>(end - begin) >> 3;
    if (count == 0) {
        return;
    }

    uint32_t last = end - 8;
    ext_0048A120(last, end, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)));
    lift_field<uint32_t>(self, 0x08) = end - 8;
}
} // namespace lift_0067F9D0

// [0x0067B3D0]
namespace lift_0067B3D0 {
// @name CriticalSectionGuardedRecord::init
// @class CriticalSectionGuardedRecord
// @summary Locks the embedded critical section at +0x18, stores three arguments into the record, clears the flag at +0x0C, then unlocks.
// @field CriticalSectionGuardedRecord +0x04 uint32_t field_0x04 (zeroed)
// @field CriticalSectionGuardedRecord +0x08 uint32_t field_0x08 (arg1)
// @field CriticalSectionGuardedRecord +0x0C uint8_t field_0x0C (cleared)
// @field CriticalSectionGuardedRecord +0x10 uint32_t field_0x10 (arg3)
// @field CriticalSectionGuardedRecord +0x14 uint32_t field_0x14 (arg2)
// @field CriticalSectionGuardedRecord +0x18 CriticalSectionLock lock

void ext_0065C640(void* self);
void ext_0065C650(void* self);

void sub_0067B3D0(void* self, std::uint32_t arg1, std::uint32_t arg2, std::uint32_t arg3) {
    auto* base = static_cast<std::uint8_t*>(self);
    void* lock = base + 0x18;

    ext_0065C640(lock);

    *reinterpret_cast<std::uint32_t*>(base + 0x08) = arg1;
    *reinterpret_cast<std::uint32_t*>(base + 0x10) = arg3;
    *reinterpret_cast<std::uint32_t*>(base + 0x04) = 0;
    *reinterpret_cast<std::uint32_t*>(base + 0x14) = arg2;
    *reinterpret_cast<std::uint8_t*>(base + 0x0C) = 0;

    ext_0065C650(lock);
}
} // namespace lift_0067B3D0

// [0x006799F0]
namespace lift_006799F0 {
// @name PerformanceTimer::PerformanceTimer
// @class PerformanceTimer
// @summary Allocates a 24-byte timer state block and initializes its performance frequency and counter.
// @field PerformanceTimer +0x00 void* state


void* ext_006A5C62(uint32_t size);
extern void* mem_00924280;
extern void* mem_0092427C;

typedef int32_t (__stdcall *QueryPerfFn)(void* lpPerformanceCount);

void* __thiscall fn_006799F0(void* self) {
    uint8_t* state = static_cast<uint8_t*>(ext_006A5C62(0x18));
    if (state != nullptr) {
        reinterpret_cast<QueryPerfFn>(mem_00924280)(state + 0x10);
        reinterpret_cast<QueryPerfFn>(mem_0092427C)(state);
        *reinterpret_cast<void**>(self) = state;
    } else {
        *reinterpret_cast<void**>(self) = nullptr;
    }
    return self;
}
} // namespace lift_006799F0

// [0x0067AEB0] sub_0067AEB0 (56 bytes)
namespace lift_0067AEB0 {
extern void ext_0067AEE8(void);
extern void (*mem_00925134)(void);
extern BOOL (*mem_00924260)(HANDLE hEvent);

// @name Unknown::SetEventAtIndex
// @class Unknown
// @summary Signals the event handle stored at the given index of the vector referenced by this+0x0C; invalid index returns FALSE.
// @field Unknown +0x0C pointer vecHolder
// @field Unknown +0x04 uint32_t field_0x04 (vector begin, via holder)
// @field Unknown +0x08 uint32_t field_0x08 (vector end, via holder)
BOOL fn_0067AEB0(void* self, INT index) {
    if (index < 0) {
        ext_0067AEE8();
        return FALSE;
    }

    uint32_t vecAddr = lift_field<uint32_t>(self, 0x0C);
    void* vec = reinterpret_cast<void*>(static_cast<uintptr_t>(vecAddr));
    uint32_t begin = lift_field<uint32_t>(vec, 0x04);
    uint32_t end = lift_field<uint32_t>(vec, 0x08);

    if (begin == 0 || static_cast<uint32_t>(index) >= ((end - begin) >> 2)) {
        mem_00925134();
        return FALSE;
    }

    void* elems = reinterpret_cast<void*>(static_cast<uintptr_t>(begin));
    uint32_t handleValue = lift_field<uint32_t>(elems, static_cast<ptrdiff_t>(index) * 4);
    HANDLE hEvent = reinterpret_cast<HANDLE>(static_cast<uintptr_t>(handleValue));
    return mem_00924260(hEvent);
}
} // namespace lift_0067AEB0

// [0x0067AEF0] sub_0067AEF0 (56 bytes)
namespace lift_0067AEF0 {
// Known callee 0x0067AF28: cleanup_epilogue_pop_edi_stdcall4 (Stdcall (ret 4) epilogue fragment: restores the saved edi register and drops one stack argument; no other effect.)
extern void __stdcall ext_0067AF28(void* arg);
// Import KERNEL32!ResetEvent (IAT slot mem_0092428C).
extern BOOL __stdcall ResetEvent(HANDLE hEvent);

// @name EventTable::ResetEventAt
// @class EventTable
// @summary Resets the Win32 event whose handle is stored at the given index of the table's handle array; out-of-range or empty array aborts.
// @field EventTable +0x0C uint32_t slots
// @field EventSlotVec +0x04 uint32_t begin
// @field EventSlotVec +0x08 uint32_t end

// Guest-address layout of the handle vector reached through EventTable+0x0C.
struct EventSlotVec {
    uint32_t field_0x00;
    uint32_t begin;  // +0x04: first handle slot (guest address)
    uint32_t end;    // +0x08: one past last handle slot (guest address)
};

struct EventTable {
    uint8_t  field_0x00[0x0C];
    uint32_t slots;  // +0x0C: guest address of EventSlotVec
};

extern BOOL __thiscall fn_0067AEF0(void* self, int index) {
    auto* table = static_cast<EventTable*>(self);

    if (index < 0) {
        // Negative index: fragment restores state and returns without touching the event.
        ext_0067AF28(nullptr);
        return FALSE;
    }

    auto* vec = reinterpret_cast<EventSlotVec*>(static_cast<uintptr_t>(table->slots));
    if (vec->begin == 0 ||
        static_cast<uint32_t>(index) >= (vec->end - vec->begin) / 4u) {
        // Original calls _invalid_parameter_noinfo here (does not return).
        std::abort();
    }

    auto* handles = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vec->begin));
    HANDLE hEvent = reinterpret_cast<HANDLE>(static_cast<uintptr_t>(handles[index]));
    return ResetEvent(hEvent);
}
} // namespace lift_0067AEF0

// [0x0067B410] sub_0067B410 (58 bytes)
namespace lift_0067B410 {
extern void __fastcall ext_0065C640(void* self); // CriticalSectionLock::enter
extern void __fastcall ext_0065C650(void* self); // CriticalSectionLock::leave

// WINMM imports, resolved through the IAT slots at 0x925734 / 0x925724.
extern UINT(__stdcall* mem_00925734)(UINT uTimerID);  // timeKillEvent
extern UINT(__stdcall* mem_00925724)(UINT uPeriod);   // timeEndPeriod

// @name TimerHandle::stop
// @class TimerHandle
// @summary Kills the multimedia timer under the object's lock, ends the timer period, clears the timer id, and releases the lock.
// @field TimerHandle +0x04 UINT field_0x04
// @field TimerHandle +0x08 UINT field_0x08
// @field TimerHandle +0x18 CriticalSectionLock field_0x18
void fn_0067B410(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    auto& timerId = *reinterpret_cast<UINT*>(base + 0x04);
    auto& period  = *reinterpret_cast<UINT*>(base + 0x08);
    void* lock    = base + 0x18;

    if (timerId == 0) {
        return;
    }

    ext_0065C640(lock);
    mem_00925734(timerId);
    mem_00925724(period);
    timerId = 0;
    ext_0065C650(lock);
}
} // namespace lift_0067B410

// [0x0067AE70] sub_0067AE70 (58 bytes)
namespace lift_0067AE70 {
extern DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
extern void __cdecl _invalid_parameter_noinfo(void);

// @name HandleTable::waitOnHandle
// @class Unknown
// @summary Waits infinitely on the handle at the given index of the owner's handle array; negative indices return without waiting.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0x04 HANDLE* field_0x04
// @field Unknown +0x08 HANDLE* field_0x08
void __thiscall fn_0067AE70(void* self, int32_t index) {
    if (index < 0) {
        return;
    }

    void* header = lift_field<void*>(self, 0x0C);
    HANDLE* begin = lift_field<HANDLE*>(header, 0x04);
    HANDLE* end = lift_field<HANDLE*>(header, 0x08);

    // Original: if begin is null or index >= element count, report invalid parameter
    // (the original then continues with the same read).
    if (begin == nullptr ||
        static_cast<uint32_t>(index) >= static_cast<uint32_t>(end - begin)) {
        _invalid_parameter_noinfo();
    }

    HANDLE handle = begin[index];
    WaitForSingleObject(handle, 0xFFFFFFFFu); // INFINITE
}
} // namespace lift_0067AE70

// [0x00678170] sub_00678170 (62 bytes)
namespace lift_00678170 {
// @name ConvertAngleUnits
// @class <unknown>
// @summary Converts a float by a mode selected at self+0x0C: mode 1 multiplies by pi/180 (degrees to radians), mode 2 divides by 360 (degrees to turns), any other mode returns the input unchanged.
// @field <unknown> +0x0C int32_t field_0x0C
float fn_00678170(void* self, float value) {
    const int32_t mode = lift_field<int32_t>(self, 0x0C);
    if (mode == 1) {
        // mem_0098C1D0 = 0.017453292519943295 (pi / 180)
        return static_cast<float>(static_cast<double>(value) * 0.017453292519943295);
    }
    if (mode == 2) {
        // mem_00993CC0 = 360.0
        return static_cast<float>(static_cast<double>(value) / 360.0);
    }
    return value;
}
} // namespace lift_00678170

// [0x00672E70] sub_00672E70 (63 bytes)
namespace lift_00672E70 {
// @name sub_00672E70
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_00672C20(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_00672E70(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_00672C20(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_00672E70

// [0x0067ECA0]
namespace lift_0067ECA0 {
// @name parseHexPairFromString
// @summary Parses two 16-based unsigned longs from a string at offsets 0 and 9 into fields +0x04 and +0x00.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04

extern uint32_t (__thiscall *mem_00924FFC)(const void* str, uint32_t index);
extern uint32_t (__cdecl *mem_0092530C)(const char* str, char** endptr, int base);

void __thiscall sub_0067ECA0(void* self, const void* str) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    const char* s0 = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00924FFC(str, 0)));
    *reinterpret_cast<uint32_t*>(obj + 0x4) = mem_0092530C(s0, nullptr, 16);

    const char* s9 = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00924FFC(str, 9)));
    *reinterpret_cast<uint32_t*>(obj + 0x0) = mem_0092530C(s9, nullptr, 16);
}
} // namespace lift_0067ECA0

// [0x0067F910]
namespace lift_0067F910 {
// @name Vector8::back
// @class Vector8
// @summary Returns a pointer to the last 8-byte element of the vector with MSVC8 checked-iterator bounds validation.
// @field Vector8 +0x04 uint32_t begin
// @field Vector8 +0x08 uint32_t end


extern uintptr_t mem_00925134;

uint32_t __thiscall fn_0067F910(uintptr_t self) {
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    uint32_t end = *reinterpret_cast<uint32_t*>(self + 0x8);
    uint32_t begin = *reinterpret_cast<uint32_t*>(self + 0x4);
    if (begin > end) {
        invalid_param();
    }

    uint32_t elem = end - 8;
    if (elem > *reinterpret_cast<uint32_t*>(self + 0x8) ||
        elem < *reinterpret_cast<uint32_t*>(self + 0x4)) {
        invalid_param();
    }

    uint32_t result = end - 8;
    if (result >= *reinterpret_cast<uint32_t*>(self + 0x8)) {
        invalid_param();
    }

    return result;
}
} // namespace lift_0067F910

// [0x00676780] sub_00676780 (70 bytes)
namespace lift_00676780 {
extern int mem_00924FE8;

// @name ObjectInit_00676780
// @class <ClassName> (unknown; object layout not recovered)
// @summary Zeroes the scalar fields of a 0x34-byte object and default-constructs an embedded std::string at +0x04; returns this.
// @field <ClassName> +0x00 u32 field_0x00
// @field <ClassName> +0x04 std::string field_0x04
// @field <ClassName> +0x24 u32 field_0x24
// @field <ClassName> +0x28 u32 field_0x28
// @field <ClassName> +0x2c u32 field_0x2c
// @field <ClassName> +0x30 u32 field_0x30
void* fn_00676780(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    const uint32_t zero = 0;

    // Original: sets [this+0] = 0, then calls the MSVC std::string default
    // constructor on [this+4] via mem_00924FE8. The string constructor is
    // platform-specific and is not reproduced here; the 0x18-byte region is
    // zeroed as a neutral placeholder.
    std::memset(obj + 0x00, 0, sizeof(uint32_t));
    std::memset(obj + 0x04, 0, 0x20);

    std::memcpy(obj + 0x24, &zero, sizeof(zero));
    std::memcpy(obj + 0x28, &zero, sizeof(zero));
    std::memcpy(obj + 0x2c, &zero, sizeof(zero));
    std::memcpy(obj + 0x30, &zero, sizeof(zero));

    return self;
}
} // namespace lift_00676780

// [0x00678520] sub_00678520 (70 bytes)
namespace lift_00678520 {
// Known callee 0x006290D8: MSVCP80 std::basic_string<char>::basic_string() (default ctor, thiscall).
extern void ext_006290D8(void* self);

// @name XMLConverter::XMLConverter
// @class XMLConverter
// @summary Constructor: installs XMLConverter primary vtable and default-constructs the std::string member at +0x04; returns this.
// @field XMLConverter +0x00 uint32_t vfptr
// @field XMLConverter +0x04 std::string field_0x04
void* fn_00678520(void* self) {
    // Install primary vtable (0x0098C1F4).
    lift_field<uint32_t>(self, 0x00) = 0x0098C1F4u;

    // Default-construct std::string at this+0x04 (original: call [mem_00924FE8] thiscall).
    ext_006290D8(static_cast<uint8_t*>(self) + 0x04);

    return self;
}
} // namespace lift_00678520

// [0x00672D10] sub_00672D10 (71 bytes)
namespace lift_00672D10 {
// @name sub_00672D10
// @summary Auto-lifted identical-shape clone of 0x004026E0 (StringArray::ReleaseElements).
namespace lift_004026E0 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// Takes one cdecl argument (the buffer pointer), pushed before the call in the original.
extern void ext_006A5C5C(void* buffer);
// Element destructor pointed to by mem_00924FF4 (0x00628FF0, MSVCP80 basic_string<char> dtor).
extern void ext_00628FF0(void* self);
extern int mem_00924FF4;

// @name StringArray::ReleaseElements
// @class StringArray
// @summary Destroys each 28-byte string element in the array, frees its buffer, and nulls the begin/end/capacity pointers.
// @field StringArray +0x04 void* begin
// @field StringArray +0x08 void* end
// @field StringArray +0x0C void* capacity
void fn_00672D10(void* self) {
    auto* obj = static_cast<unsigned char*>(self);
    auto** begin_slot = reinterpret_cast<unsigned char**>(obj + 0x04);
    auto** end_slot = reinterpret_cast<unsigned char**>(obj + 0x08);
    auto** cap_slot = reinterpret_cast<unsigned char**>(obj + 0x0C);

    unsigned char* begin = *begin_slot;
    if (begin != nullptr) {
        unsigned char* end = *end_slot;
        for (unsigned char* p = begin; p != end; p += 0x20) {
            ext_00628FF0(p);
        }
        ext_006A5C5C(begin);
    }

    *begin_slot = nullptr;
    *end_slot = nullptr;
    *cap_slot = nullptr;
}
} // namespace lift_004026E0
} // namespace lift_00672D10

// [0x00670EC0] sub_00670EC0 (72 bytes)
namespace lift_00670EC0 {
extern void ext_0065C5F0(void* self);

// @name Unknown::InitSubobjectAndZeroFields
// @class Unknown
// @summary Clears the header words of self, runs ext_0065C5F0 on the subobject at +0x14, and returns self.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint8_t field_0x14
void* fn_00670EC0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<void**>(base + 0x00) = nullptr;
    *reinterpret_cast<uint32_t*>(base + 0x08) = 0;
    *reinterpret_cast<uint32_t*>(base + 0x0C) = 0;
    *reinterpret_cast<uint32_t*>(base + 0x10) = 0;
    ext_0065C5F0(base + 0x14);
    return self;
}
} // namespace lift_00670EC0
