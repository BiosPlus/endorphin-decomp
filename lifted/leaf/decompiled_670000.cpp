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
#include <cmath>
#include <cstdlib>

#include <cstdlib>
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
#include <cstring>
#include <istream>

#include <istream>
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

// [0x00672810] sub_00672810 (73 bytes)
namespace lift_00672810 {
// Known callee 0x0041CDE0: CopyEntryRangeForward (Copies each 0x20-byte entry in [first,last) to dest by assigning its leading std::string and copying the DWORD at +0x1c; returns dest end, or dest itself when the range is empty.)
extern void* ext_0041CDE0(const void* first, const void* last, void* dest);

// @name CopyRangeAndComputeDestEnd
// @summary Copies the 0x20-byte entry range [first,last) to dest and returns dest advanced by the range size rounded down to a multiple of 0x20.
void* fn_00672810(const void* first, const void* last, void* dest) {
    ext_0041CDE0(first, last, dest);
    const std::ptrdiff_t bytes =
        reinterpret_cast<const char*>(last) - reinterpret_cast<const char*>(first);
    const std::ptrdiff_t aligned = bytes & ~static_cast<std::ptrdiff_t>(0x1F);
    return static_cast<char*>(dest) + aligned;
}
} // namespace lift_00672810

// [0x00672BD0] sub_00672BD0 (74 bytes)
namespace lift_00672BD0 {
// @name sub_00672BD0
// @summary Auto-lifted identical-shape clone of 0x00481C90 (SortHeapRange).
namespace lift_00481C90 {
extern void ext_00672690(uint32_t* first, ptrdiff_t hole, ptrdiff_t count, uint32_t value, uint32_t pred);

// @name SortHeapRange
// @summary Heap-sorts a range of 4-byte elements in place (pop-heap loop); pred is forwarded to the sift-down helper.
void fn_00672BD0(uint32_t* first, uint32_t* last, uint32_t pred) {
    ptrdiff_t n = last - first;
    while (n > 1) {
        --last;
        uint32_t value = *last;
        *last = *first;
        ext_00672690(first, 0, last - first, value, pred);
        n = last - first;
    }
}
} // namespace lift_00481C90
} // namespace lift_00672BD0

// [0x0067BCE0]
namespace lift_0067BCE0 {
// @name Unknown::InitIdentity3x3AndDispatch_0067BCE0
// @summary Builds a 3x3 identity float matrix on the stack, passes it with the stack argument to ext_006951A0, then passes it with this to ext_00694880.

extern void __thiscall ext_006951A0(void* self, DWORD arg);
extern void __thiscall ext_00694880(void* self, void* arg);

void __thiscall fn_0067BCE0(void* self, DWORD arg) {
    // 9-float (0x24-byte) local block, initialised to identity:
    // [0]=1 [4]=0 [8]=0 / [0xC]=0 [0x10]=1 [0x14]=0 / [0x18]=0 [0x1C]=0 [0x20]=1
    float m[9] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f,
    };

    ext_006951A0(m, arg);
    ext_00694880(m, self);
}
} // namespace lift_0067BCE0

// [0x0067BD80] sub_0067BD80 (77 bytes)
namespace lift_0067BD80 {
extern void ext_006951E0(void* matrix, DWORD arg);
extern void ext_00694840(void* matrix, void* self);

// @name Unknown::CallWithIdentityMat3_0067BD80
// @class Unknown
// @summary Builds a local 3x3 identity float matrix and passes it to two helper calls (with arg and self).
void fn_0067BD80(void* self, DWORD arg) {
    // Local 3x3 identity matrix (row-major), 9 floats.
    float matrix[9] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f,
    };

    ext_006951E0(matrix, arg);
    ext_00694840(matrix, self);
}
} // namespace lift_0067BD80

// [0x0067B450]
namespace lift_0067B450 {
extern void __fastcall ext_0067B410(void* self);
extern void __fastcall ext_0065C620(void* self);

// @name TimerHandle::~TimerHandle
// @class TimerHandle
// @summary Destroys TimerHandle by stopping the timer and destroying its critical section lock.
// @field TimerHandle +0x00 uint32_t vtable
// @field TimerHandle +0x18 CriticalSectionLock lock
void __fastcall fn_0067B450(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(obj) = 0x0098C5ECu;
    ext_0067B410(obj);
    ext_0065C620(obj + 0x18);
}
} // namespace lift_0067B450

// [0x00678280] sub_00678280 (83 bytes)
namespace lift_00678280 {
// Known callee 0x0065C660: sub_0065C660 (Stores address of mem_00928E8C into field at offset +0x0.)
extern void ext_0065C660(void* self);
// Import slot at 0x00924FF4 (.rdata constant 0x00628FF0): destructor thunk for the std::string member.
extern const uint32_t mem_00924FF4;
extern void ext_00628FF0(void* self);

// @name Unknown::~Unknown
// @class Unknown
// @summary Destructor: sets the derived vtable, destroys the string member at +0x04, then runs the base-class reset via sub_0065C660.
// @field Unknown +0x00 uint32_t vptr
// @field Unknown +0x04 uint8_t field_0x04
void fn_00678280(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x0098C1F4u;
    ext_00628FF0(static_cast<uint8_t*>(self) + 0x04);
    ext_0065C660(self);
}
} // namespace lift_00678280

// [0x006721F0] sub_006721F0 (85 bytes)
namespace lift_006721F0 {
// Known callee 0x006721B0: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self, stack arg = value; writes value to self+0x00 and returns it)
extern DWORD ext_006721B0(void* self, DWORD value);
extern DWORD mem_00B599BC;

// @name InitFirstDwordSeedSecondAndStore_006721F0
// @summary Zeroes self's first DWORD, copies global mem_00B599BC into self+0x04, calls ext_006721B0(self, value) to store value into the first DWORD, and returns self. Original SEH frame bookkeeping is omitted.
// @field Unknown +0x00 DWORD field_0x00
// @field Unknown +0x04 DWORD field_0x04
void* fn_006721F0(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x00) = 0;
    lift_field<DWORD>(self, 0x04) = mem_00B599BC;
    ext_006721B0(self, value);
    return self;
}
} // namespace lift_006721F0

// [0x00672250] sub_00672250 (85 bytes)
namespace lift_00672250 {
// Known callee 0x00672190: ext_00672190 (18 bytes). Thiscall: ECX = self, one stack argument.
extern void ext_00672190(void* self, uint32_t arg);
extern uint32_t mem_00B599BC;

// @name Unknown::initWithArg_00672250
// @class Unknown
// @summary Zeroes the first DWORD of the output object, stores a global into the second DWORD, runs the 0x00672190 initializer with the argument, and returns the object. The original SEH frame bookkeeping is dropped.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
extern void* fn_00672250(void* out, uint32_t arg) {
    lift_field<uint32_t>(out, 0x00) = 0;
    lift_field<uint32_t>(out, 0x04) = mem_00B599BC;
    ext_00672190(out, arg);
    return out;
}
} // namespace lift_00672250

// [0x00670D80]
namespace lift_00670D80 {
extern uint32_t mem_00925134;
extern void ext_006A5C5C(uint32_t);

// @name destroyPointerRange
// @summary Iterates over a checked vector range [first, last) and passes each 32-bit element to ext_006A5C5C.
void __stdcall fn_00670D80(uint8_t* container1, uint32_t* first, uint8_t* container2, uint32_t* last) {
    using InvalidParamFn = void (__cdecl*)(void);
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    while (true) {
        if (container1 == nullptr || container1 != container2) {
            invalid_param();
        }
        if (first == last) {
            break;
        }

        uint32_t* cur = first;
        if (container1 == nullptr) {
            invalid_param();
        }
        uint32_t* end_ptr = *reinterpret_cast<uint32_t**>(container1 + 0x8);
        if (reinterpret_cast<uintptr_t>(first) >= reinterpret_cast<uintptr_t>(end_ptr)) {
            invalid_param();
        }

        first += 1;

        if (container1 == nullptr) {
            invalid_param();
        }
        end_ptr = *reinterpret_cast<uint32_t**>(container1 + 0x8);
        if (reinterpret_cast<uintptr_t>(cur) >= reinterpret_cast<uintptr_t>(end_ptr)) {
            invalid_param();
        }

        ext_006A5C5C(*cur);
    }
}
} // namespace lift_00670D80

// [0x00672590] sub_00672590 (89 bytes)
namespace lift_00672590 {
extern void ext_00628FF0(void* self);

// @name UnknownClass::dtor_00672590
// @class UnknownClass
// @summary If the pointer at +0x28 is set, calls virtual slot 0x78 on that object with &this->+0x24, then destroys this via the MSVCP80 string dtor.
// @field UnknownClass +0x24 uint32_t field_0x24
// @field UnknownClass +0x28 void* field_0x28
void fn_00672590(void* self) {
    void* child = lift_field<void*>(self, 0x28);
    if (child != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(child);
        auto slot = reinterpret_cast<void (*)(void*, void*)>(
            *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + 0x78));
        slot(child, reinterpret_cast<uint8_t*>(self) + 0x24);
    }
    ext_00628FF0(self);
}
} // namespace lift_00672590

// [0x00679EB0]
namespace lift_00679EB0 {
// @name lowerBoundByStringField10
// @summary Binary searches a pointer range [first, last) for the first element whose std::string at +0x10 is not less than key.
// @field Element +0x10 std::string field_0x10


extern uint32_t mem_00924EF4;

uint32_t* sub_00679EB0(uint32_t* first, uint32_t* last, uint32_t key) {
    int32_t count = static_cast<int32_t>(last - first);
    if (count <= 0) {
        return first;
    }

    using StringLessFn = bool (*)(uint32_t, uint32_t);
    auto string_less = reinterpret_cast<StringLessFn>(static_cast<uintptr_t>(mem_00924EF4));

    while (count > 0) {
        int32_t half = count / 2;
        uint32_t elem_str = first[half] + 0x10;
        if (string_less(elem_str, key)) {
            first += half + 1;
            count -= half + 1;
        } else {
            count = half;
        }
    }

    return first;
}
} // namespace lift_00679EB0

// [0x006788E0]
namespace lift_006788E0 {
extern uint32_t mem_00B59E70;
extern uint32_t mem_00B59E80;

extern void __thiscall ext_00678890(void* self);
extern void __cdecl ext_006A6C87(uint32_t func);

// @name getStaticObject_00B59E70
// @summary Lazily initializes global object at 0x00B59E70 once, registers atexit cleanup, and returns it
void* __cdecl sub_006788E0() {
    if ((mem_00B59E80 & 1u) == 0u) {
        mem_00B59E80 |= 1u;
        ext_00678890(&mem_00B59E70);
        ext_006A6C87(0x00921A10u);
    }
    return &mem_00B59E70;
}
} // namespace lift_006788E0

// [0x00672430]
namespace lift_00672430 {
extern void* ext_006A5C62(uint32_t size);

// @name allocateElements80
// @summary Allocates an array of count 80-byte elements, throwing std::bad_alloc on size overflow.
extern void* fn_00672430(uint32_t count) {
    if (count > 0) {
        if (0xFFFFFFFFu / count < 0x50u) {
            throw std::bad_alloc();
        }
    } else {
        count = 0;
    }
    return ext_006A5C62(count * 0x50u);
}
} // namespace lift_00672430

// [0x00670C50]
namespace lift_00670C50 {
// @name lowerBoundByPairU32
// @summary Binary search (std::lower_bound) over pointer array comparing (field_0x04, field_0x08) as unsigned 32-bit pairs
// @field Entry +0x04 uint32_t field_0x04
// @field Entry +0x08 uint32_t field_0x08


extern uint32_t mem_r32(uint32_t);

extern uint32_t __cdecl sub_00670C50(uint32_t begin, uint32_t end, uint32_t key_ptr_addr) {
    int32_t count = static_cast<int32_t>(end - begin) >> 2;
    if (count <= 0) {
        return begin;
    }

    uint32_t key = mem_r32(key_ptr_addr);
    uint32_t key_hi = mem_r32(key + 0x4);
    uint32_t key_lo = mem_r32(key + 0x8);

    while (count > 0) {
        int32_t half = count / 2;
        uint32_t mid_elem = mem_r32(begin + static_cast<uint32_t>(half) * 4);
        uint32_t mid_hi = mem_r32(mid_elem + 0x4);

        bool less = false;
        if (mid_hi < key_hi) {
            less = true;
        } else if (mid_hi == key_hi) {
            uint32_t mid_lo = mem_r32(mid_elem + 0x8);
            less = (mid_lo < key_lo);
        }

        if (less) {
            begin += static_cast<uint32_t>(half + 1) * 4;
            count -= half + 1;
        } else {
            count = half;
        }
    }

    return begin;
}
} // namespace lift_00670C50

// [0x0067A670] sub_0067A670 (26 bytes)
namespace lift_0067A670 {
// Known callee 0x006A0680: getStaticInstance_00B5CA74 (Lazily initializes and returns the static object at 0x00B5CA74, registering its destructor via atexit.)
extern void* __thiscall ext_006A0680();
// Callee 0x006A0790 (13B, unlifted): takes the static instance as `this`.
extern void __thiscall ext_006A0790(void* self);

// @name InitWithStaticInstance_0067A670
// @summary Stores the vtable pointer 0x0098816C at offset 0, passes the lazily created static instance to ext_006A0790, and returns this.
// @field Unknown +0x00 uint32_t vfptr
void* __thiscall fn_0067A670(void* self) {
    // mov dword ptr [esi], 0x98816c
    lift_field<uint32_t>(self, 0x00) = 0x0098816Cu;

    // call ext_006A0680 -> eax = static instance; mov ecx, eax; call ext_006A0790
    void* instance = ext_006A0680();
    ext_006A0790(instance);

    // mov eax, esi
    return self;
}
} // namespace lift_0067A670

// [0x0067AB90]
namespace lift_0067AB90 {
// @name logic_error_derived_copy_ctor
// @summary Copy constructor for a std::logic_error-derived exception class (sets vtable 0x0098c56c)
// @field Exception +0x00 uint32_t vtable


extern void* __thiscall ext_00401C60(void* self, const void* other);

void* __thiscall sub_0067AB90(void* self, const void* other) {
    ext_00401C60(self, other);
    *reinterpret_cast<uint32_t*>(self) = 0x0098c56c;
    return self;
}
} // namespace lift_0067AB90

// [0x00674F20] sub_00674F20 (30 bytes)
namespace lift_00674F20 {
// @name sub_00674F20
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_00674EC0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_00674F20(DWORD* dst, DWORD value) {
    DWORD obj = ext_00674EC0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_00674F20

// [0x00675000] sub_00675000 (31 bytes)
namespace lift_00675000 {
// Known callee 0x00674F20: sub_00674F20 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD* ext_00674F20(DWORD* dst, DWORD value);

// @name initDwordToZero_00675000
// @summary Calls ext_00674F20(dst, 0) to store a zero into *dst via the shared store helper, then returns dst.
DWORD* fn_00675000(DWORD* dst) {
    ext_00674F20(dst, 0);
    return dst;
}
} // namespace lift_00675000

// [0x00670B30] sub_00670B30 (87 bytes)
namespace lift_00670B30 {
// @name sub_00670B30
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59864;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59860;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00670B30() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3BFEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59864 & 1u) == 0) {
        mem_00B59864 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59860, frame[0]);
        mem_00B59860 = 0x98B1A4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59860;
}
} // namespace lift_004CAE30
} // namespace lift_00670B30

// [0x00670B90] sub_00670B90 (87 bytes)
namespace lift_00670B90 {
// @name sub_00670B90
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5986C;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59868;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00670B90() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3C1Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5986C & 1u) == 0) {
        mem_00B5986C |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59868, frame[0]);
        mem_00B59868 = 0x98B354u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59868;
}
} // namespace lift_004CAE30
} // namespace lift_00670B90

// [0x00670BF0] sub_00670BF0 (87 bytes)
namespace lift_00670BF0 {
// @name sub_00670BF0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59874;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59870;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00670BF0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B3C3Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59874 & 1u) == 0) {
        mem_00B59874 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59870, frame[0]);
        mem_00B59870 = 0x98B504u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59870;
}
} // namespace lift_004CAE30
} // namespace lift_00670BF0

// [0x00674EC0] sub_00674EC0 (87 bytes)
namespace lift_00674EC0 {
// @name sub_00674EC0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B59DB0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B59DAC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00674EC0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B426Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B59DB0 & 1u) == 0) {
        mem_00B59DB0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B59DAC, frame[0]);
        mem_00B59DAC = 0x98BF74u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B59DAC;
}
} // namespace lift_004CAE30
} // namespace lift_00674EC0

// [0x00670FD0]
namespace lift_00670FD0 {
// @name Unknown::ctor_00670FD0
// @class Unknown
// @summary Initializes base object, sets vtable pointers at +0x0 and +0x4, constructs subobject at +0x8, and returns self.
// @field Unknown +0x00 uint32_t vptr_0x00
// @field Unknown +0x04 uint32_t vptr_0x04
// @field Unknown +0x08 uint8_t subobject_0x08


extern void ext_0067A670(void* self);
extern void* ext_00670EC0(void* self);

void* fn_00670FD0(void* self) {
    uint8_t* p = static_cast<uint8_t*>(self);
    ext_0067A670(self);
    *reinterpret_cast<uint32_t*>(p + 0x0) = 0x0098B9FCu;
    *reinterpret_cast<uint32_t*>(p + 0x4) = 0x0098B9C8u;
    ext_00670EC0(p + 0x8);
    return self;
}
} // namespace lift_00670FD0

// [0x006767D0]
namespace lift_006767D0 {
// Known callee 0x00596660: Vector_erase_range (Erases a range [first, last) of 4-byte elements from a vector and returns the updated iterator.)
extern void* ext_00596660(void* this_ptr, void* out_iter, uint32_t first_container, uint32_t first_ptr, uint32_t last_container, uint32_t last_ptr);

// [0x006767D0] sub_006767D0 (86 bytes)
// @name resetStringAndEraseVectorTail
// @class Unknown
// @summary Clears the string at +0x04, erases the vector range [+0x24, +0x28) of the vector at +0x20, and zeroes fields +0x00 and +0x30.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 std::string field_0x04
// @field Unknown +0x20 void* field_0x20
// @field Unknown +0x24 uint32_t field_0x24
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x30 uint32_t field_0x30
void fn_006767D0(void* self_) {
    auto* self = static_cast<uint8_t*>(self_);
    auto rd32 = [self](size_t off) {
        uint32_t v;
        std::memcpy(&v, self + off, sizeof v);
        return v;
    };
    auto wr32 = [self](size_t off, uint32_t v) {
        std::memcpy(self + off, &v, sizeof v);
    };

    reinterpret_cast<std::string*>(self + 0x04)->clear();

    const uint32_t last = rd32(0x28);
    const uint32_t first = rd32(0x24);
    if (first > last) {
        std::abort(); // was _invalid_parameter_noinfo
    }

    uint32_t out_iter[2] = {0, 0};
    const uint32_t vec = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self + 0x20));
    ext_00596660(self + 0x20, out_iter, vec, first, vec, last);

    wr32(0x30, 0);
    wr32(0x00, 0);
}
} // namespace lift_006767D0

// [0x006753D0] sub_006753D0 (90 bytes)
namespace lift_006753D0 {
// @name sub_006753D0
// @summary Auto-lifted identical-shape clone of 0x0050BE20 (Vector_eraseTailChecked).
namespace lift_0050BE20 {
// Known callee 0x00536230: deleteRangeChecked (Deletes each non-null element of a 4-byte-slot range [first, last), validating the owner and its bound at every step.)
// Called with four stack words in the order the original pushes them: (self, begin, self, end).
extern void ext_00675240(void* self, uint32_t arg1, uint32_t first, uint32_t arg3, uint32_t bound);
// Known callee 0x00596660: Vector_erase_range (Erases a range [first, last) of 4-byte elements from a vector and returns the updated iterator.)
extern void* ext_00596660(void* self, void* out_iter, uint32_t first_container, uint32_t first_ptr, uint32_t last_container, uint32_t last_ptr);
// Invalid-parameter handler pointer (MSVCR80!_invalid_parameter_noinfo).
extern void mem_00925134();

// @name Vector_eraseTailChecked
// @class Vector
// @summary Validates the vector's begin/end/bound pointers, deletes the owned elements through ext_00536230, then erases the tail range via ext_00596660.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_006753D0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    const uint32_t selfValue = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    // First pass: check the begin/end ordering, then delete the range.
    uint32_t bound = lift_field<uint32_t>(base, 0x08);
    if (lift_field<uint32_t>(base, 0x04) > bound) {
        mem_00925134();
    }
    uint32_t first = lift_field<uint32_t>(base, 0x04);
    if (first > lift_field<uint32_t>(base, 0x08)) {
        mem_00925134();
    }
    ext_00675240(self, selfValue, first, selfValue, bound);

    // Second pass: re-validate, then erase the tail and capture the returned iterator.
    bound = lift_field<uint32_t>(base, 0x08);
    if (lift_field<uint32_t>(base, 0x04) > bound) {
        mem_00925134();
    }
    first = lift_field<uint32_t>(base, 0x04);
    if (first > lift_field<uint32_t>(base, 0x08)) {
        mem_00925134();
    }
    uint32_t outIter[2] = {0, 0};
    ext_00596660(self, outIter, selfValue, first, selfValue, bound);
}
} // namespace lift_0050BE20
} // namespace lift_006753D0

// [0x00672530] sub_00672530 (95 bytes)
namespace lift_00672530 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString)).
// Takes (out_str, flag); the second pushed argument is a raw 32-bit constant (0x00A2F0CC).
extern void* ext_0066AD10(void* out_str, uint32_t arg);
// Known callee 0x006A6C87: sub_006A6C87 (one stack argument, the constant 0x009218D0; return value unused).
extern void ext_006A6C87(uint32_t arg);
extern int mem_00B59CE0;
extern int mem_00B59CC4;

// @name GetOnceInitString_00672530
// @summary Returns the global string at 0x00B59CC4, initializing it once on first call (sets bit 0 of 0x00B59CE0, calls ext_0066AD10, then registers teardown via ext_006A6C87).
void* fn_00672530(void* self) {
    (void)self;
    if ((mem_00B59CE0 & 1) == 0) {
        mem_00B59CE0 |= 1;
        ext_0066AD10(&mem_00B59CC4, 0x00A2F0CCu);
        ext_006A6C87(0x009218D0u);
    }
    return &mem_00B59CC4;
}
} // namespace lift_00672530

// [0x0067DB90]
namespace lift_0067DB90 {
// @name SetRotationYMatrix
// @summary Writes a 3x3 row-major rotation matrix about the Y axis (cos/0/-sin, 0/1/0, sin/0/cos) into the object at this, from a float angle.
// @field  +0x00 float m00 (cos(angle))
// @field  +0x04 float m01 (0.0f)
// @field  +0x08 float m02 (-sin(angle))
// @field  +0x0C float m10 (0.0f)
// @field  +0x10 float m11 (1.0f)
// @field  +0x14 float m12 (0.0f)
// @field  +0x18 float m20 (sin(angle))
// @field  +0x1C float m21 (0.0f)
// @field  +0x20 float m22 (cos(angle))
// Original: __thiscall (this in ecx), one float arg, ret 4. The x87 CIsin/CIcos
// thunks (ext_006A6EB0 / ext_006A6EAA) are replaced by std::sin / std::cos.
void SetRotationYMatrix(void* self, float angle) {
    const float s = static_cast<float>(std::sin(static_cast<double>(angle)));
    const float c = static_cast<float>(std::cos(static_cast<double>(angle)));

    lift_field<float>(self, 0x00) = c;
    lift_field<float>(self, 0x04) = 0.0f;
    lift_field<float>(self, 0x08) = -s;
    lift_field<float>(self, 0x0C) = 0.0f;
    lift_field<float>(self, 0x10) = 1.0f;
    lift_field<float>(self, 0x14) = 0.0f;
    lift_field<float>(self, 0x18) = s;
    lift_field<float>(self, 0x1C) = 0.0f;
    lift_field<float>(self, 0x20) = c;
}
} // namespace lift_0067DB90

// [0x0067B8D0] sub_0067B8D0 (95 bytes)
namespace lift_0067B8D0 {
// @name Mat3x3FromRows_0067B8D0
// @class Unknown (owner class not identified)
// @summary Builds a row-major 3x3 float matrix at self from three vec3 rows (rows 0..2 from r0, r1, r2) and returns self; the initial zeroing is fully overwritten.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0C float field_0x0C
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 float field_0x20
void* fn_0067B8D0(void* self, const float* r0, const float* r1, const float* r2) {
    float* m = static_cast<float*>(self);
    m[0] = r0[0]; m[1] = r0[1]; m[2] = r0[2];
    m[3] = r1[0]; m[4] = r1[1]; m[5] = r1[2];
    m[6] = r2[0]; m[7] = r2[1]; m[8] = r2[2];
    return self;
}
} // namespace lift_0067B8D0
