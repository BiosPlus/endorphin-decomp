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
#include <cstddef>
#include <algorithm>
#include <stdexcept>
#include <memory>

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

// [0x00674770] sub_00674770 (95 bytes)
namespace lift_00674770 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
// Signature from the callee listing: void* fn(void* out_str, uint8_t flag). Cdecl; caller cleans up.
extern void* ext_0066AD10(void* out_str, uint8_t flag);
// Unlifted callee 0x006A6C87 (18 bytes). Signature is inferred from the single pushed argument (0x9219C0).
extern void ext_006A6C87(const void* arg);
// Guard word for the one-time initialization.
extern int mem_00B59DA0;
// Storage whose address is returned.
extern int mem_00B59D84;

// @name GetOnceInitString_00674770
// @summary Runs a one-time initialization of the global at mem_00B59D84 (guarded by bit 0 of mem_00B59DA0) and returns its address.
void* fn_00674770() {
    if ((mem_00B59DA0 & 1) == 0) {
        mem_00B59DA0 |= 1;
        // Original pushes 0xAA19C8 as the second argument; the callee reads it as uint8_t.
        ext_0066AD10(&mem_00B59D84, static_cast<uint8_t>(0xAA19C8u));
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009219C0u)));
    }
    return &mem_00B59D84;
}
} // namespace lift_00674770

// [0x00679990]
namespace lift_00679990 {
extern uint32_t mem_0092427C;
extern double mem_00928E78;

// @name PerfTimer::getElapsedMs
// @class PerfTimer
// @summary Returns elapsed time in milliseconds since start using QueryPerformanceCounter.
// @field PerfTimer +0x00 int64_t startCounter
// @field PerfTimer +0x10 int64_t frequency
float __thiscall sub_00679990(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    int64_t now = 0;
    using QPCFn = int32_t(__stdcall*)(int64_t*);
    reinterpret_cast<QPCFn>(mem_0092427C)(&now);

    int64_t freq = *reinterpret_cast<const int64_t*>(obj + 0x10);
    if (freq == 0) {
        return 0.0f;
    }

    int64_t start = *reinterpret_cast<const int64_t*>(obj + 0x00);
    int64_t elapsed = now - start;
    double ms = (static_cast<double>(elapsed) * mem_00928E78) / static_cast<double>(freq);
    return static_cast<float>(ms);
}
} // namespace lift_00679990

// [0x00675240] sub_00675240 (98 bytes)
namespace lift_00675240 {
// @name sub_00675240
// @summary Auto-lifted identical-shape clone of 0x004A5F70 (OwnedPointerRange::destroyPointerRange).
namespace lift_004A5F70 {
// Known callee 0x00644F30: Unknown::invokeNestedVirtualSlot0 (extern void fn_00644F30(void* self))
extern void ext_00675110(void* self);
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
extern void fn_00675240(OwnedPointerRange* owner, void** first, OwnedPointerRange* ownerCheck, void** last) {
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

        ext_00675110(obj);
        ext_006A5C5C(obj);
    }
}
} // namespace lift_004A5F70
} // namespace lift_00675240

// [0x00676710] sub_00676710 (102 bytes)
namespace lift_00676710 {
// Known callee 0x006616D0: Unknown::IsSameDwordPair (Returns 1 if both leading DWORDs of *this and *other match, else 0 (stdcall-style, one stack arg, ret 4).)
extern int ext_006616D0(void* self, const void* other);
extern void (__cdecl* mem_00925134)(void);

namespace {

inline DWORD addr_of(const void* p) {
    return static_cast<DWORD>(reinterpret_cast<uintptr_t>(p));
}

} // namespace

// @name compareDwordPairRange
// @summary Validates that the other-range end (other + 8*count, count = (end-begin)/8) lies within [range+0x04, range+0x08] (invalid-parameter handler otherwise), then returns 1 iff IsSameDwordPair matches for every 8-byte element of [begin, end) against the same-offset element of other.
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
int fn_00676710(const void* begin, const void* end, void* range, const void* other) {
    if (range == nullptr) {
        mem_00925134();
        return 0;
    }

    const DWORD count = static_cast<DWORD>(static_cast<int32_t>(addr_of(end) - addr_of(begin)) >> 3);
    const DWORD other_end = addr_of(other) + 8u * count;

    if (other_end > lift_field<DWORD>(range, 0x08) ||
        other_end < lift_field<DWORD>(range, 0x04)) {
        mem_00925134();
        return 0;
    }

    const unsigned char* cur = static_cast<const unsigned char*>(begin);
    const unsigned char* const last = static_cast<const unsigned char*>(end);
    const unsigned char* const base = static_cast<const unsigned char*>(begin);
    const unsigned char* const other_base = static_cast<const unsigned char*>(other);

    while (cur != last) {
        void* self = const_cast<unsigned char*>(cur);
        const void* rhs = other_base + (cur - base);
        if (ext_006616D0(self, rhs) == 0) {
            return 0;
        }
        cur += 8;
    }
    return 1;
}
} // namespace lift_00676710

// [0x0067DBF0]
namespace lift_0067DBF0 {
// @name Unknown::SetRotationMatrix2D
// @class Unknown
// @summary Writes a 3x3 row-major 2D rotation matrix (cos/sin of the negated angle) into the object at this.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x0c float field_0x0c
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x1c float field_0x1c
// @field Unknown +0x20 float field_0x20

void fn_0067DBF0(float* self, float angle) {
    const float neg = -angle;
    const float s = std::sin(neg);
    const float c = std::cos(neg);

    self[0x00 / 4] = c;
    self[0x04 / 4] = -s;
    self[0x08 / 4] = 0.0f;
    self[0x0c / 4] = s;
    self[0x10 / 4] = c;
    self[0x14 / 4] = 0.0f;
    self[0x18 / 4] = 0.0f;
    self[0x1c / 4] = 0.0f;
    self[0x20 / 4] = 1.0f;
}
} // namespace lift_0067DBF0

// [0x0067E110]
namespace lift_0067E110 {
// @name ExtractMat3x3FromRows
// @summary Builds a row-major 3x3 float matrix at out from three 16-byte-strided rows of self and returns out.
// @field self +0x00 float[3] row0
// @field self +0x10 float[3] row1
// @field self +0x20 float[3] row2


extern void* ext_0067B8D0(void* self, const float* r0, const float* r1, const float* r2);

void* __thiscall fn_0067E110(const void* self, void* out) {
    const uint8_t* base = static_cast<const uint8_t*>(self);
    ext_0067B8D0(
        out,
        reinterpret_cast<const float*>(base + 0x00),
        reinterpret_cast<const float*>(base + 0x10),
        reinterpret_cast<const float*>(base + 0x20)
    );
    return out;
}
} // namespace lift_0067E110

// [0x0067B530]
namespace lift_0067B530 {
extern void __thiscall ext_0065C640(void* self);
extern void __thiscall ext_0065C650(void* self);

extern uint32_t mem_00925730;
extern uint32_t mem_0092572C;
extern uint32_t mem_00925728;

// @name MultimediaTimer::start
// @class MultimediaTimer
// @summary Acquires lock, configures timer resolution, and starts a periodic multimedia timer.
// @field MultimediaTimer +0x04 uint32_t timerId
// @field MultimediaTimer +0x08 uint32_t delayMs
// @field MultimediaTimer +0x0C uint8_t field_0x0C
// @field MultimediaTimer +0x18 uint8_t lock
void __thiscall sub_0067B530(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* lock = base + 0x18;

    ext_0065C640(lock);

    struct TimeCaps {
        uint32_t wPeriodMin;
        uint32_t wPeriodMax;
    } caps{};

    using TimeGetDevCapsFn = uint32_t(__stdcall*)(TimeCaps*, uint32_t);
    using TimeBeginPeriodFn = uint32_t(__stdcall*)(uint32_t);
    using TimeSetEventFn = uint32_t(__stdcall*)(uint32_t, uint32_t, uintptr_t, uintptr_t, uint32_t);

    reinterpret_cast<TimeGetDevCapsFn>(static_cast<uintptr_t>(mem_00925730))(&caps, 8);

    uint32_t resolution = (std::min)(caps.wPeriodMin, caps.wPeriodMax);
    reinterpret_cast<TimeBeginPeriodFn>(static_cast<uintptr_t>(mem_0092572C))(resolution);

    uint32_t delay = *reinterpret_cast<uint32_t*>(base + 0x08);
    *reinterpret_cast<uint8_t*>(base + 0x0C) = 0;

    uint32_t timer_id = reinterpret_cast<TimeSetEventFn>(static_cast<uintptr_t>(mem_00925728))(
        delay,
        resolution,
        static_cast<uintptr_t>(0x0067B4A0u),
        reinterpret_cast<uintptr_t>(self),
        1u);

    *reinterpret_cast<uint32_t*>(base + 0x04) = timer_id;

    ext_0065C650(lock);
}
} // namespace lift_0067B530

// [0x0067B5C0] sub_0067B5C0 (34 bytes)
namespace lift_0067B5C0 {
// Known callee 0x0067B530: MultimediaTimer::start (Acquires lock, configures timer resolution, and starts a periodic multimedia timer.)
extern void ext_0067B530(void* self);
// Import slot for KERNEL32!Sleep (rdata u32 0x006283FE)
extern DWORD mem_00924248;

// @name MultimediaTimer::startAndWait
// @class MultimediaTimer
// @summary Starts the multimedia timer, then sleeps 50 ms at a time while the field at +0x04 remains nonzero.
// @field MultimediaTimer +0x04 DWORD field_0x04
void fn_0067B5C0(void* self) {
    ext_0067B530(self);

    auto* flag = reinterpret_cast<DWORD*>(reinterpret_cast<uint8_t*>(self) + 0x04);
    if (*flag == 0) {
        return;
    }

    auto sleep = reinterpret_cast<void (*)(DWORD)>(static_cast<uintptr_t>(mem_00924248));
    do {
        sleep(50);
    } while (*flag != 0);
}
} // namespace lift_0067B5C0

// [0x0067AB10] sub_0067AB10 (105 bytes)
namespace lift_0067AB10 {
// @name sub_0067AB10
// @summary Auto-lifted identical-shape clone of 0x0046C3C0 (DerivedException::DerivedException).
namespace lift_0046C3C0 {
// @name DerivedException::DerivedException
// @class DerivedException
// @summary Constructs an ExceptionWithMessage-derived exception with a fixed message string and installs its vtable.
// @field DerivedException +0x00 void* vtable

extern void* (*mem_00924FE4)(void* self, const char* str);
extern void (*mem_00924FF4)(void* self);
extern void* ext_00403560(void* self, const void* msg);
extern const char mem_0098C574[];
extern void* mem_0098C56C[];

void* fn_0067AB10(void* self) {
    alignas(4) uint8_t msg[28];
    mem_00924FE4(msg, mem_0098C574);
    ext_00403560(self, msg);
    mem_00924FF4(msg);
    *reinterpret_cast<void**>(self) = mem_0098C56C;
    return self;
}
} // namespace lift_0046C3C0
} // namespace lift_0067AB10

// [0x0067C450]
namespace lift_0067C450 {
// @name Vec3::rotateY
// @class Vec3
// @summary Rotates a 3D vector around the Y axis by the given angle in radians.
// @field Vec3 +0x00 float x
// @field Vec3 +0x08 float z
void __thiscall fn_0067C450(void* self, float angle) {
    float c = std::cos(angle);
    float s = std::sin(angle);
    auto* v = static_cast<float*>(self);
    float x = v[0];
    float z = v[2];
    v[0] = x * c + z * s;
    v[2] = z * c - x * s;
}
} // namespace lift_0067C450

// [0x0067C4D0]
namespace lift_0067C4D0 {
// @name Vec2::rotate
// @class Vec2
// @summary Rotates a 2D vector in-place by the given angle in radians.
// @field Vec2 +0x00 float x
// @field Vec2 +0x04 float y


extern void __thiscall fn_0067C4D0(void* this_ptr, float angle) {
    float c = std::cos(angle);
    float s = std::sin(angle);
    float* vec = static_cast<float*>(this_ptr);
    float x = vec[0];
    float y = vec[1];
    vec[0] = x * c - y * s;
    vec[1] = x * s + y * c;
}
} // namespace lift_0067C4D0

// [0x0067D9E0]
namespace lift_0067D9E0 {
// @name Matrix3::isIdentity
// @class Matrix3
// @summary Checks whether a 3x3 float matrix is the identity matrix within a given tolerance.
// @field Matrix3 +0x00 float[9] m

bool ext_0056B670(double a, double b, double tol);
bool ext_005631C0(double a, double tol);

bool __thiscall fn_0067D9E0(const float* self, float tol) {
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            float val = self[row * 3 + col];
            bool ok = (row == col)
                ? ext_0056B670(static_cast<double>(val), 1.0, static_cast<double>(tol))
                : ext_005631C0(static_cast<double>(val), static_cast<double>(tol));
            if (!ok) {
                return false;
            }
        }
    }
    return true;
}
} // namespace lift_0067D9E0

// [0x0067C3D0]
namespace lift_0067C3D0 {
// @name Vec3::rotateX
// @class Vec3
// @summary Rotates a 3D vector around the X-axis by the given angle in radians.
// @field Vec3 +0x04 float y
// @field Vec3 +0x08 float z
void __thiscall fn_0067C3D0(void* this_ptr, float angle) {
    float c = std::cos(angle);
    float s = std::sin(angle);
    auto* base = static_cast<char*>(this_ptr);
    float y = *reinterpret_cast<float*>(base + 0x4);
    float z = *reinterpret_cast<float*>(base + 0x8);
    *reinterpret_cast<float*>(base + 0x4) = y * c - z * s;
    *reinterpret_cast<float*>(base + 0x8) = y * s + z * c;
}
} // namespace lift_0067C3D0

// [0x00672590] sub_00672590 (89 bytes)
namespace lift_00672590 {
// @name sub_00672590
// @summary Auto-lifted identical-shape clone of 0x005940E0 (Unknown::destructorBody_005940E0).
namespace lift_005940E0 {
// Import thunk pointer: MSVCP80 std::basic_string<char>::~basic_string (0x00628FF0).
extern uint32_t mem_00924FF4;

// @name Unknown::destructorBody_005940E0
// @class Unknown
// @summary Releases an optional child object at +0x20 through its vtable slot 0x78 (passing &field_0x1c), then destroys the std::string at offset 0.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C void* field_0x1c
// @field Unknown +0x20 void* child
void __thiscall fn_00672590(uint8_t* self) {
    // Optional virtual notification on the child object at +0x20.
    uint8_t* child = *reinterpret_cast<uint8_t**>(self + 0x28);
    if (child != nullptr) {
        uint8_t* arg = self + 0x24;
        uint8_t* vtbl = *reinterpret_cast<uint8_t**>(child);
        uintptr_t slot = *reinterpret_cast<uintptr_t*>(vtbl + 0x78);
        using VirtualFn = void(__thiscall*)(void* obj, void* arg);
        reinterpret_cast<VirtualFn>(slot)(child, arg);
    }

    // Destroy the std::string stored at offset 0 of this object.
    using StringDtorFn = void(__thiscall*)(void* obj);
    reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4))(self);
}
} // namespace lift_005940E0
} // namespace lift_00672590

// [0x00673C20] sub_00673C20 (108 bytes)
namespace lift_00673C20 {
// @name sub_00673C20
// @summary Auto-lifted identical-shape clone of 0x00667030 (advanceCursorSkipFlagged).
namespace lift_00667030 {
// Import slot 0x00925134 holds the address of MSVCR80!_invalid_parameter_noinfo.
// The raw .rdata label is "P{b", but the code loads a function pointer from it.
extern void (*mem_00925134)();

// @name advanceCursorSkipFlagged
// @summary Advances the cursor at self+0x04 past nodes whose byte at +0x39 is set, using the +0x04 and +0x08 links; calls the invalid-parameter handler when self+0x00 is null or the cursor node is flagged on entry.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x04 void* cursor
// @field UnknownNode +0x00 void* field_0x00
// @field UnknownNode +0x04 void* field_0x04
// @field UnknownNode +0x08 void* field_0x08
// @field UnknownNode +0x39 uint8_t flag
void fn_00673C20(void* self) {
    if (lift_field<void*>(self, 0x00) == nullptr) {
        mem_00925134();
    }

    void* eax = lift_field<void*>(self, 0x04);
    if (lift_field<uint8_t>(eax, 0x2D) != 0) {
        mem_00925134();
        return;
    }

    void* ecx = lift_field<void*>(eax, 0x08);
    if (lift_field<uint8_t>(ecx, 0x2D) == 0) {
        // Walk the +0x00 chain from ecx until a node with flag set is found.
        void* n = lift_field<void*>(ecx, 0x00);
        if (lift_field<uint8_t>(n, 0x2D) == 0) {
            do {
                ecx = n;
                n = lift_field<void*>(ecx, 0x00);
            } while (lift_field<uint8_t>(n, 0x2D) == 0);
        }
        lift_field<void*>(self, 0x04) = ecx;
        return;
    }

    // ecx (eax+0x08) is flagged: step to eax+0x04 and skip forward.
    eax = lift_field<void*>(eax, 0x04);
    if (lift_field<uint8_t>(eax, 0x2D) == 0) {
        for (;;) {
            void* cur = lift_field<void*>(self, 0x04);
            if (cur != lift_field<void*>(eax, 0x08)) {
                break;
            }
            lift_field<void*>(self, 0x04) = eax;
            void* edx = eax;
            eax = lift_field<void*>(edx, 0x04);
            if (lift_field<uint8_t>(eax, 0x2D) != 0) {
                break;
            }
        }
    }
    lift_field<void*>(self, 0x04) = eax;
}
} // namespace lift_00667030
} // namespace lift_00673C20

// [0x0067AEF0] sub_0067AEF0 (56 bytes)
namespace lift_0067AEF0 {
// @name sub_0067AEF0
// @summary Auto-lifted identical-shape clone of 0x0067AEB0 (Unknown::SetEventAtIndex).
namespace lift_0067AEB0 {
extern void ext_0067AF28(void);
extern void (*mem_00925134)(void);
extern BOOL (*mem_0092428C)(HANDLE hEvent);

// @name Unknown::SetEventAtIndex
// @class Unknown
// @summary Signals the event handle stored at the given index of the vector referenced by this+0x0C; invalid index returns FALSE.
// @field Unknown +0x0C pointer vecHolder
// @field Unknown +0x04 uint32_t field_0x04 (vector begin, via holder)
// @field Unknown +0x08 uint32_t field_0x08 (vector end, via holder)
BOOL fn_0067AEF0(void* self, INT index) {
    if (index < 0) {
        ext_0067AF28();
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
    return mem_0092428C(hEvent);
}
} // namespace lift_0067AEB0
} // namespace lift_0067AEF0

// [0x0067EC70] sub_0067EC70 (34 bytes)
namespace lift_0067EC70 {
// MSVCR80!_snprintf import slot (IAT entry at 0x009251E0).
extern int mem_009251E0;

// @name formatFieldPairToBuffer
// @summary Formats two 32-bit fields of self into a caller buffer via _snprintf; returns its result.
// @field <Unknown> +0x00 uint32_t field_0x00
// @field <Unknown> +0x04 uint32_t field_0x04
int fn_0067EC70(void* self, char* buf, size_t size) {
    using SnprintfFn = int (*)(char*, size_t, const char*, ...);
    // Call through the IAT slot: the slot holds the function pointer.
    SnprintfFn snprintf_fn = *reinterpret_cast<SnprintfFn*>(&mem_009251E0);

    uint32_t a = lift_field<uint32_t>(self, 0x00);
    uint32_t b = lift_field<uint32_t>(self, 0x04);

    // Original pushes b before a, so b is the first vararg.
    // Format string literal lives in .rdata at 0x0098C7C0.
    const char* fmt = reinterpret_cast<const char*>(static_cast<uintptr_t>(0x0098C7C0u));
    return snprintf_fn(buf, size, fmt, b, a);
}
} // namespace lift_0067EC70

// [0x0067ED10] sub_0067ED10 (35 bytes)
namespace lift_0067ED10 {
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980();
// Import slots (IAT entries) referenced by the original asm:
//   mem_00924FFC: std::basic_string<char>::operator[](size_t) const   (MSVCP80)
//   mem_0092530C: strtoul                                             (MSVCR80)
extern int mem_00924FFC;
extern int mem_0092530C;
extern int mem_0098C254;

// Signatures of the two imported functions, read through their IAT slots.
typedef const char& (__thiscall* StringIndexFn)(const void* self, size_t index);
typedef unsigned long (__cdecl* StrtoulFn)(const char* s, char** end, int base);

// @name parseHexStringToDword
// @summary Parses the std::string argument as hex via strtoul(&str[0], NULL, 16) and stores the result in *self.
// @field Unknown +0x00 uint32_t field_0x00
void fn_0067ED10(void* self, const void* str) {
    // Original: ext_00661980 (setVtable) is in the callee graph but not invoked here.
    static_cast<void>(&ext_00661980);

    // Original: push 0; call [mem_00924FFC] -> str.operator[](0)
    const StringIndexFn string_index = *reinterpret_cast<StringIndexFn*>(&mem_00924FFC);
    const char& first = string_index(str, 0);

    // Original: push 0x10; push 0; push eax; call [mem_0092530C] -> strtoul(&first, NULL, 16)
    const StrtoulFn strtoul_fn = *reinterpret_cast<StrtoulFn*>(&mem_0092530C);
    const unsigned long value = strtoul_fn(&first, nullptr, 16);

    // Original: mov [esi], eax
    lift_field<uint32_t>(self, 0x00) = static_cast<uint32_t>(value);
}
} // namespace lift_0067ED10

// [0x0067AE70] sub_0067AE70 (58 bytes)
namespace lift_0067AE70 {
// IAT slots the original asm calls through (call dword ptr [0x925134] / [0x924274]).
// mem_00925134 -> MSVCR80!_invalid_parameter_noinfo, mem_00924274 -> KERNEL32!WaitForSingleObject.
extern void* mem_00925134;
extern void* mem_00924274;

// @name Unknown_WaitForHandleAtIndex
// @class Unknown
// @summary If index >= 0, waits infinitely on the HANDLE at element `index` of the handle array held at this+0x0C (out-of-range index calls the CRT invalid-parameter handler).
// @field Unknown +0x0C void* field_0x0C
// @field Unknown_0x0C_Container +0x04 void** field_0x04
// @field Unknown_0x0C_Container +0x08 void** field_0x08
void __thiscall fn_0067AE70(void* self, int32_t index) {
    if (index < 0) {
        return;
    }

    void* container = lift_field<void*>(self, 0x0C);
    void** begin = lift_field<void**>(container, 0x04);
    void** end = lift_field<void**>(container, 0x08);

    // Element count = byte span >> 2 (signed sar); unsigned compare against index as in the original jb.
    const int32_t byteSpan = static_cast<int32_t>(reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin));
    const int32_t count = byteSpan >> 2;
    if (begin == nullptr || static_cast<uint32_t>(index) >= static_cast<uint32_t>(count)) {
        using InvalidParamFn = void(__cdecl*)();
        reinterpret_cast<InvalidParamFn>(mem_00925134)();
    }

    void* handle = begin[index];
    using WaitFn = uint32_t(__stdcall*)(void*, uint32_t);
    (void)reinterpret_cast<WaitFn>(mem_00924274)(handle, 0xFFFFFFFFu);
}
} // namespace lift_0067AE70

// [0x00672E70] sub_00672E70 (63 bytes)
namespace lift_00672E70 {
// @name sub_00672E70
// @summary Auto-lifted identical-shape clone of 0x005597C0 (clearStringVectorRecord).
namespace lift_005597C0 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// cdecl, one stack argument (the buffer pointer), caller cleans up.
extern void ext_006A5C5C(void* buffer);
// Known callee 0x00558F20: Unknown::clearStringVectorRange (Destroys the 0x1C-byte elements of each 0x14-byte record's buffer in [first, last), frees a non-null buffer, and zeroes its three pointer fields.)
// The call site pushes four cdecl arguments (first, last, self, flag) and the caller cleans them up.
extern void ext_00672C20(void* first, void* last, void* self, uint32_t flag);

// @name clearStringVectorRecord
// @summary Thiscall: if field_0x04 is non-null, destroys the range [field_0x04, field_0x08) via ext_00558F20, releases field_0x04 via ext_006A5C5C, then zeroes fields 0x04, 0x08 and 0x0C.
// @field <unknown> +0x04 uint32_t field_0x04
// @field <unknown> +0x08 uint32_t field_0x08
// @field <unknown> +0x0C uint32_t field_0x0C
void fn_00672E70(void* self, uint32_t flag) {
    if (lift_field<uint32_t>(self, 0x04) != 0) {
        ext_00672C20(
            reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x04))),
            reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x08))),
            self,
            flag);
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x04))));
    }

    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
}
} // namespace lift_005597C0
} // namespace lift_00672E70

// [0x00678520]
namespace lift_00678520 {
// @name sub_00678520
// @summary Constructor that sets vtable to 0x0098C1F4 and default-constructs std::string at +0x4
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x04 uint8_t[0x1C] field_0x04

extern uint32_t mem_00924FE8;

extern uint32_t __thiscall sub_00678520(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    lift_field<uint32_t>(obj, 0x00) = 0x0098C1F4u;
    using ctor_t = void(__thiscall*)(void*);
    reinterpret_cast<ctor_t>(mem_00924FE8)(obj + 0x04);
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_00678520

// [0x00676780]
namespace lift_00676780 {
// @name sub_00676780
// @summary Constructor that zeroes fields and default-constructs a std::string member at +0x04
// @field Self +0x00 uint32_t field_0x00
// @field Self +0x04 char[0x20] field_0x04
// @field Self +0x24 uint32_t field_0x24
// @field Self +0x28 uint32_t field_0x28
// @field Self +0x2C uint32_t field_0x2C
// @field Self +0x30 uint32_t field_0x30


extern void (*mem_00924FE8)(void* this_ptr);

void* __thiscall sub_00676780(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0;
    mem_00924FE8(static_cast<uint8_t*>(self) + 0x04);
    lift_field<uint32_t>(self, 0x24) = 0;
    lift_field<uint32_t>(self, 0x28) = 0;
    lift_field<uint32_t>(self, 0x2C) = 0;
    lift_field<uint32_t>(self, 0x30) = 0;
    return self;
}
} // namespace lift_00676780

// [0x00672D10]
namespace lift_00672D10 {
// @name StdVectorStringTidy
// @summary Destroys all std::string elements in a vector, frees its buffer, and zeroes its pointers.
// @field StdVectorString +0x04 uint32_t first
// @field StdVectorString +0x08 uint32_t last
// @field StdVectorString +0x0c uint32_t end


extern void ext_006A5C5C(void* ptr);
extern void (*mem_00924FF4)(void* self);

void fn_00672D10(void* self) {
    uint32_t first = lift_field<uint32_t>(self, 0x04);
    if (first != 0) {
        uint32_t last = lift_field<uint32_t>(self, 0x08);
        for (uint32_t cur = first; cur != last; cur += 0x20) {
            mem_00924FF4(reinterpret_cast<void*>(static_cast<uintptr_t>(cur)));
        }
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x04))));
    }
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
}
} // namespace lift_00672D10

// [0x00678280]
namespace lift_00678280 {
// @name sub_00678280_dtor
// @summary Destructor that sets vtable, destroys std::string member at +0x4, and calls base destructor ext_0065C660.
// @field Self +0x0 uint32_t vtable
// @field Self +0x4 std::string field_0x4


extern uint32_t mem_0098C1F4;
extern void (__thiscall *mem_00924FF4)(void*);
void __fastcall ext_0065C660(void* self);

extern void __fastcall fn_00678280(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0098C1F4;
    mem_00924FF4(static_cast<char*>(self) + 0x4);
    ext_0065C660(self);
}
} // namespace lift_00678280

// [0x00670C50]
namespace lift_00670C50 {
// @name lowerBoundByPair
// @summary Binary search (std::lower_bound) on pointer range comparing (field_0x4, field_0x8) lexicographically as uint32_t


uint32_t** __cdecl sub_00670C50(uint32_t** first, uint32_t** last, uint32_t** val_ptr) {
    int32_t count = static_cast<int32_t>(reinterpret_cast<uintptr_t>(last) - reinterpret_cast<uintptr_t>(first)) >> 2;
    if (count <= 0) {
        return first;
    }

    uint32_t* val = *val_ptr;
    uint32_t val_k1 = lift_field<uint32_t>(val, 0x4);
    uint32_t val_k2 = lift_field<uint32_t>(val, 0x8);

    while (count > 0) {
        int32_t half = count / 2;
        uint32_t* mid = first[half];
        uint32_t mid_k1 = lift_field<uint32_t>(mid, 0x4);

        bool less = false;
        if (mid_k1 < val_k1) {
            less = true;
        } else if (mid_k1 == val_k1) {
            uint32_t mid_k2 = lift_field<uint32_t>(mid, 0x8);
            if (mid_k2 < val_k2) {
                less = true;
            }
        }

        if (less) {
            first = first + half + 1;
            count = count - half - 1;
        } else {
            count = half;
        }
    }

    return first;
}
} // namespace lift_00670C50

// [0x00672430]
namespace lift_00672430 {
extern void* ext_006A5C62(uint32_t size);
extern void ext_006A6DD2(void* pExceptionObject, uint32_t pThrowInfo);
extern uintptr_t mem_00925130;

// @name allocateElements80
// @summary Allocates count elements of 80 bytes via MFC80 operator new, throwing std::bad_alloc on overflow
void* __cdecl fn_00672430(uint32_t count) {
    if (count > 0) {
        if (0xFFFFFFFFu / count < 0x50u) {
            const char* msg = nullptr;
            uint32_t exc[3] = {};
            using ExcCtor = void(__thiscall*)(void*, const char* const*);
            reinterpret_cast<ExcCtor>(mem_00925130)(exc, &msg);
            exc[0] = 0x00928EC0u;
            ext_006A6DD2(exc, 0x009CDF94u);
        }
    } else {
        count = 0;
    }
    return ext_006A5C62(count * 0x50u);
}
} // namespace lift_00672430

// [0x006767D0]
namespace lift_006767D0 {
// @name clearState
// @summary Clears the string at +0x04, erases all elements from the int32 vector at +0x20, and resets fields at +0x00 and +0x30 to zero.
// @field Self +0x00 uint32_t field_0x00
// @field Self +0x04 char[28] field_0x04
// @field Self +0x20 void* field_0x20
// @field Self +0x24 int32_t* field_0x24
// @field Self +0x28 int32_t* field_0x28
// @field Self +0x30 uint32_t field_0x30


extern void ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);
extern void (*mem_00924EA8)(void* str);
extern void (*mem_00925134)();

void fn_006767D0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    mem_00924EA8(base + 0x04);

    uint8_t* vec = base + 0x20;
    int32_t* last = lift_field<int32_t*>(base, 0x28);
    if (lift_field<int32_t*>(base, 0x24) > last) {
        mem_00925134();
    }

    int32_t* first = lift_field<int32_t*>(vec, 0x04);
    if (first > lift_field<int32_t*>(vec, 0x08)) {
        mem_00925134();
    }

    void* out[2] = {};
    ext_00596660(vec, out, vec, first, vec, last);

    lift_field<uint32_t>(base, 0x30) = 0;
    lift_field<uint32_t>(base, 0x00) = 0;
}
} // namespace lift_006767D0

// [0x0067F960] sub_0067F960 (104 bytes)
namespace lift_0067F960 {
extern uint32_t mem_00B5A120;
extern uint32_t mem_00B5A124;
extern uint32_t mem_00B5A11C;
extern uint32_t mem_00925134;

// @name GlobalArrayGetLastElement
// @summary Returns the last DWORD of the global range [mem_00B5A120, mem_00B5A124); returns 0 when the range is empty or unset, and calls the CRT invalid-parameter handler on out-of-range access.
uint32_t fn_0067F960(void) {
    // Invalid-parameter handler (CRT _invalid_parameter_noinfo, loaded from the import slot).
    auto invalid_parameter = []() {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    };

    uint32_t begin = mem_00B5A120;
    uint32_t end = mem_00B5A124;

    // Empty or unset range: return 0.
    if (begin == 0 || (static_cast<int32_t>(end - begin) >> 2) == 0) {
        return 0;
    }

    // begin must not be past end.
    if (begin > end) {
        invalid_parameter();
        end = mem_00B5A124;
        begin = mem_00B5A120;
    }

    // Candidate element is end - 4; it must lie within [begin, end].
    uint32_t elem = end - 4;
    if (elem > end || elem < begin) {
        invalid_parameter();
    }

    elem -= 4;
    // Container at mem_00B5A11C: the end pointer sits at +8 (== mem_00B5A124).
    if (elem >= reinterpret_cast<uint32_t*>(&mem_00B5A11C)[2]) {
        invalid_parameter();
    }

    return *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(elem));
}
} // namespace lift_0067F960

// [0x0067F5B0] sub_0067F5B0 (112 bytes)
namespace lift_0067F5B0 {
// @name sub_0067F5B0
// @summary Auto-lifted identical-shape clone of 0x0043D2E0 (throwStringLiteralException).
namespace lift_0043D2E0 {
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exception_object, const void* throw_info);
extern int mem_00924FE4;   // IAT slot: MSVCP80 basic_string(const char*) ctor
extern int mem_009251C4;   // IAT slot: MSVCR80 std::exception() ctor
extern int mem_00924FE0;   // IAT slot: MSVCP80 basic_string(const basic_string&) ctor
extern int mem_0092DB70;   // .rdata message literal
extern int mem_00928ECC;   // vtable: thrown exception type (first stage)
extern int mem_00928EE4;   // vtable: thrown exception type (final)
extern int mem_009CE164;   // _ThrowInfo for the thrown type

using StringFromCStrCtor = void (*)(void* self, const char* text);
using DefaultCtor        = void (*)(void* self);
using StringCopyCtor     = void (*)(void* self, const void* src);

// @name throwStringLiteralException
// @summary Builds a std::string from a literal, copies it into an exception object, and throws that object.
// @field ThrownObject +0x00 void* vptr
// @field ThrownObject +0x10 std::string message
// @field ThrownObject +0x30 uint32_t field_0x30
// @field ThrownObject +0x34 uint8_t field_0x34
// @field ThrownObject +0x38 uint8_t field_0x38
void fn_0067F5B0(void) {
    // Stack frame: temp string @+0x00, exception object @+0x1c, copy destination @+0x2c.
    uint8_t frame[0x58] = {};
    uint8_t* temp = frame;
    uint8_t* obj = frame + 0x1c;
    uint8_t* member = frame + 0x2c;

    // std::string temp("...")
    (*reinterpret_cast<StringFromCStrCtor*>(&mem_00924FE4))(
        temp, reinterpret_cast<const char*>(&mem_0092DB70));

    // Exception base constructed in place; state word cleared before the call.
    lift_field<uint32_t>(frame, 0x4c) = 0;
    (*reinterpret_cast<DefaultCtor*>(&mem_009251C4))(obj);

    lift_field<uint8_t>(frame, 0x50) = 1;
    lift_field<const void*>(frame, 0x1c) = &mem_00928ECC;

    // member = temp (copy-construct the message into the exception object)
    (*reinterpret_cast<StringCopyCtor*>(&mem_00924FE0))(member, temp);

    lift_field<uint8_t>(frame, 0x54) = 0;
    lift_field<const void*>(frame, 0x1c) = &mem_00928EE4;

    // _CxxThrowException(obj, &_ThrowInfo) -- does not return.
    ext_006A6DD2(obj, &mem_009CE164);
}
} // namespace lift_0043D2E0
} // namespace lift_0067F5B0

// [0x00673C90]
namespace lift_00673C90 {
// @name copyConstructStringPairAndFields
// @summary Copy-constructs two std::string members at +0x00 and +0x1C and copies three 32-bit fields at +0x38, +0x3C, and +0x40.
// @field +0x00 uint8_t[0x1C] field_0x00
// @field +0x1C uint8_t[0x1C] field_0x1C
// @field +0x38 uint32_t field_0x38
// @field +0x3C uint32_t field_0x3C
// @field +0x40 uint32_t field_0x40

extern uintptr_t mem_00924FE0;

typedef void* (__thiscall* std_string_copy_ctor_t)(void* self, const void* other);

void* __thiscall sub_00673C90(void* self, const void* other) {
    auto string_copy_ctor = reinterpret_cast<std_string_copy_ctor_t>(mem_00924FE0);
    string_copy_ctor(self, other);
    string_copy_ctor(
        static_cast<uint8_t*>(self) + 0x1C,
        static_cast<const uint8_t*>(other) + 0x1C
    );
    lift_field<uint32_t>(self, 0x38) = lift_field<const uint32_t>(other, 0x38);
    lift_field<uint32_t>(self, 0x3C) = lift_field<const uint32_t>(other, 0x3C);
    lift_field<uint32_t>(self, 0x40) = lift_field<const uint32_t>(other, 0x40);
    return self;
}
} // namespace lift_00673C90

// [0x00672C20] sub_00672C20 (120 bytes)
namespace lift_00672C20 {
extern int mem_00924FF4;

// @name DestroyStringElementRange
// @class Element
// @summary Iterates [first, last) over 0x2C-byte elements; for each element with a non-null owner at +0x28, calls its vtable slot 0x78 with (owner, &element+0x24), then destroys the std::string at element+0x00.
// @field Element +0x00 std::string name (basic_string destroyed each iteration)
// @field Element +0x24 uint32_t subobject (address passed to the virtual call)
// @field Element +0x28 uint32_t owner (receiver of virtual call; skipped when null)
void fn_00672C20(void* first, void* last) {
    // Element stride is 0x2C bytes.
    constexpr uintptr_t kStride = 0x2C;

    // Imported std::string destructor; the IAT constant holds the guest target address.
    using StringDtor = void(__thiscall*)(void* self);
    // Virtual slot 0x78 (index 30) on the owner's vtable; takes one stack argument.
    using VirtualSlot78 = void(__thiscall*)(void* self, void* arg);

    uintptr_t it = reinterpret_cast<uintptr_t>(first);
    const uintptr_t end = reinterpret_cast<uintptr_t>(last);

    while (it != end) {
        void* elem = reinterpret_cast<void*>(it);

        const uint32_t owner = lift_field<uint32_t>(elem, 0x28);
        if (owner != 0) {
            void* ownerObj = reinterpret_cast<void*>(static_cast<uintptr_t>(owner));
            const uint32_t vtbl = lift_field<uint32_t>(ownerObj, 0x00);
            const uint32_t slot =
                lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl)), 0x78);
            auto fn = reinterpret_cast<VirtualSlot78>(static_cast<uintptr_t>(slot));
            void* subobj = static_cast<uint8_t*>(elem) + 0x24;
            fn(ownerObj, subobj);
        }

        auto dtor = reinterpret_cast<StringDtor>(
            static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
        dtor(elem);

        it += kStride;
    }
}
} // namespace lift_00672C20

// [0x00675430] sub_00675430 (121 bytes)
namespace lift_00675430 {
// @name sub_00675430
// @summary Auto-lifted identical-shape clone of 0x004B66E0 (DestroyOwnedRangeAndFree).
namespace lift_004B66E0 {
// Known callee 0x004B6680: DestroyOwnedRange (Iterates [first, last) over a container of owned object pointers (debug-checked iterators), calling each non-null element's virtual slot 0x234 with flag 1 (scalar deleting destructor).)
extern void ext_00675240(uintptr_t container, uintptr_t first, uintptr_t container2, uintptr_t last);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.) Called cdecl with one argument (the buffer to free).
extern void ext_006A5C5C(uintptr_t block);
extern int mem_00925134;

// @name DestroyOwnedRangeAndFree
// @summary Destroys the owned objects in [begin, end), frees the begin buffer if non-null, and zeroes begin/end/+0xC.
// @field Unknown +0x04 uint32_t begin
// @field Unknown +0x08 uint32_t end
// @field Unknown +0x0C uint32_t field_0x0C
void fn_00675430(void* self) {
    // The MSVC SEH frame setup/teardown and the debug invalid-parameter guards
    // (begin <= end checks calling _invalid_parameter_noinfo via mem_00925134) are CRT boilerplate and are omitted.
    (void)&mem_00925134;
    const uintptr_t selfVal = reinterpret_cast<uintptr_t>(self);
    uint32_t& begin = lift_field<uint32_t>(self, 0x4);
    uint32_t& end = lift_field<uint32_t>(self, 0x8);

    ext_00675240(selfVal, begin, selfVal, end);

    // Re-read begin after the range destruction, as the original does.
    if (begin != 0) {
        ext_006A5C5C(begin);
    }

    begin = 0;
    end = 0;
    lift_field<uint32_t>(self, 0xC) = 0;
}
} // namespace lift_004B66E0
} // namespace lift_00675430

// [0x006724B0] sub_006724B0 (121 bytes)
namespace lift_006724B0 {
extern int mem_00924EF4;

// @name pushHeapByKey
// @summary Sift-up heap insertion (std::__push_heap shape) of an object pointer into an array, ordered by std::string operator> on each object's virtual key (vtable slot +0x24).
// @field none (no class; objects are accessed only via vtable +0x00 and +0x24)
void fn_006724B0(void** first, int holeIndex, int topIndex, void* value) {
    using KeyFn = void* (__thiscall*)(void*);
    using GreaterFn = bool (__cdecl*)(const void*, const void*);

    // Virtual key accessor: obj->vtbl[+0x24](obj)
    auto keyOf = [](void* obj) -> const void* {
        uint8_t* vtbl = *reinterpret_cast<uint8_t**>(obj);
        KeyFn fn = *reinterpret_cast<KeyFn*>(vtbl + 0x24);
        return fn(obj);
    };

    // Indirect call through import slot mem_00924EF4 (std::string operator>).
    GreaterFn greater = reinterpret_cast<GreaterFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924EF4)));

    if (topIndex >= holeIndex) {
        first[holeIndex] = value;
        return;
    }

    int parent = (holeIndex - 1) / 2;
    while (true) {
        const void* valueKey = keyOf(value);
        const void* parentKey = keyOf(first[parent]);
        if (!greater(parentKey, valueKey)) {
            break;
        }
        first[holeIndex] = first[parent];
        holeIndex = parent;
        parent = (holeIndex - 1) / 2;
        if (!(topIndex < holeIndex)) {
            break;
        }
    }
    first[holeIndex] = value;
}
} // namespace lift_006724B0

// [0x00673720] sub_00673720 (35 bytes)
namespace lift_00673720 {
// @name sub_00673720
// @summary Auto-lifted identical-shape clone of 0x00559C50 (destroyStringPairRange).
namespace lift_00559C50 {
// Known callee 0x00558B90: destroyStringAndRecordVector (Destroys a vector of 0x3C-byte string-pair records and the owning std::string.)
extern void ext_00673420(void* self);

// @name destroyStringPairRange
// @summary Calls fn_00558B90 on each 0x2C-byte record in [first, last) and returns (stdcall, ret 8).
void __stdcall fn_00673720(void* first, void* last) {
    auto* cur = static_cast<unsigned char*>(first);
    auto* end = static_cast<unsigned char*>(last);
    if (cur == end) {
        return;
    }
    do {
        ext_00673420(cur);
        cur += 0x50;
    } while (cur != end);
}
} // namespace lift_00559C50
} // namespace lift_00673720

// [0x00673750] sub_00673750 (70 bytes)
namespace lift_00673750 {
// @name sub_00673750
// @summary Auto-lifted identical-shape clone of 0x00559C80 (destroyRecordVectorAndReset).
namespace lift_00559C80 {
// Known callee 0x00558B90: destroyStringAndRecordVector (Destroys a vector of 0x3C-byte string-pair records and the owning std::string.)
extern void ext_00673420(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t arg);

// @name destroyRecordVectorAndReset
// @summary Destroys each 0x2C-byte record in the vector at [+4, +8), releases the buffer via MFC80 ord_764 when it is non-null, then clears the three vector pointers.
// @field self +0x04 uint32_t begin
// @field self +0x08 uint32_t end
// @field self +0x0C uint32_t capacity
void fn_00673750(void* self) {
    uint32_t& begin = lift_field<uint32_t>(self, 0x4);
    uint32_t& end = lift_field<uint32_t>(self, 0x8);
    uint32_t& capacity = lift_field<uint32_t>(self, 0xC);

    if (begin != 0) {
        uint32_t cur = begin;
        const uint32_t last = end;
        while (cur != last) {
            ext_00673420(reinterpret_cast<void*>(cur));
            cur += 0x50;
        }
        ext_006A5C5C(begin);
    }

    begin = 0;
    end = 0;
    capacity = 0;
}
} // namespace lift_00559C80
} // namespace lift_00673750

// [0x006737B0] sub_006737B0 (123 bytes)
namespace lift_006737B0 {
// Known callee 0x0065F440: sub_0065F440 (Stores address of mem_0093BF24 into field at offset +0x0.)
extern void __fastcall ext_0065F440(void* self);
// Known callee 0x00672D10: StdVectorStringTidy (Destroys all std::string elements in a vector, frees its buffer, and zeroes its pointers.)
extern void __fastcall ext_00672D10(void* self);
// Known callee 0x00673750: sub_00673750 (Auto-lifted identical-shape clone of 0x00559C80 (destroyRecordVectorAndReset).)
extern void __fastcall ext_00673750(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* ptr);

// @name ExprParser::DeclarationsParser::~DeclarationsParser (base body)
// @class ExprParser::DeclarationsParser
// @summary Destructor body: resets vtable, destroys subobject at +0x24, frees pointer at +0x18, clears +0x18..+0x20, tidies string vector at +0x04, then runs sub_0065F440 on this.
// @field ExprParser::DeclarationsParser +0x00 uint32_t vtable
// @field ExprParser::DeclarationsParser +0x04 uint8_t field_0x04
// @field ExprParser::DeclarationsParser +0x18 void* field_0x18
// @field ExprParser::DeclarationsParser +0x1c uint32_t field_0x1c
// @field ExprParser::DeclarationsParser +0x20 uint32_t field_0x20
// @field ExprParser::DeclarationsParser +0x24 uint8_t field_0x24
void fn_006737B0(void* self) {
    // Vtable pointer reset to DeclarationsParser's vtable (0x0098BF2C).
    lift_field<uint32_t>(self, 0x00) = 0x0098BF2Cu;

    // Destroy subobject at +0x24.
    ext_00673750(static_cast<uint8_t*>(self) + 0x24);

    // Free the pointer stored at +0x18 if it is non-null.
    void* p18 = lift_field<void*>(self, 0x18);
    if (p18 != nullptr) {
        ext_006A5C5C(p18);
    }

    lift_field<void*>(self, 0x18) = nullptr;
    lift_field<uint32_t>(self, 0x1C) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    // Tidy the string vector at +0x04.
    ext_00672D10(static_cast<uint8_t*>(self) + 0x04);

    // Final base-level cleanup on this.
    ext_0065F440(self);
}
} // namespace lift_006737B0

// [0x0067DB10] sub_0067DB10 (125 bytes)
namespace lift_0067DB10 {
// @name copyPacked3x3ToPaddedMatrix
// @summary Copies a packed 3x3 float matrix (36 bytes) from src into a 4-float-stride matrix at self (rows at +0x00, +0x10, +0x20), leaving the padding slots untouched.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
void fn_0067DB10(void* self, const void* src) {
    // Packed src element i (0..8, row-major) -> dst slot, rows padded to 16 bytes.
    static constexpr ptrdiff_t kDstOffset[9] = {
        0x00, 0x04, 0x08,   // src row 0 -> dst row 0
        0x10, 0x14, 0x18,   // src row 1 -> dst row 1
        0x20, 0x24, 0x28,   // src row 2 -> dst row 2
    };
    const float* in = static_cast<const float*>(src);
    for (ptrdiff_t i = 0; i < 9; ++i) {
        lift_field<float>(self, kDstOffset[i]) = in[i];
    }
}
} // namespace lift_0067DB10

// [0x0067E5B0] sub_0067E5B0 (79 bytes)
namespace lift_0067E5B0 {
// Known callee 0x0067DB10: copyPacked3x3ToPaddedMatrix (Copies a packed 3x3 float matrix (36 bytes) from src into a 4-float-stride matrix at self (rows at +0x00, +0x10, +0x20), leaving the padding slots untouched.)
extern void ext_0067DB10(void* self, const void* src);
// Unlifted callee 0x006951A0 (57 bytes): thiscall-style, takes the matrix in ecx and one 32-bit stack argument.
extern void ext_006951A0(void* self, uint32_t arg);

// @name setPaddedMatrixFromAdjustedIdentity
// @summary Builds a packed 3x3 identity, adjusts it via sub_006951A0 using the stack argument, then copies it into self's padded 4-stride matrix.
void fn_0067E5B0(void* self, uint32_t arg) {
    // Packed 3x3 identity, 9 floats, row-major (stride 12 bytes).
    float m[9] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f,
    };
    ext_006951A0(m, arg);
    ext_0067DB10(self, m);
}
} // namespace lift_0067E5B0

// [0x0067E600] sub_0067E600 (79 bytes)
namespace lift_0067E600 {
// Known callee 0x0067DB10: copyPacked3x3ToPaddedMatrix (Copies a packed 3x3 float matrix (36 bytes) from src into a 4-float-stride matrix at self (rows at +0x00, +0x10, +0x20), leaving the padding slots untouched.)
extern void ext_0067DB10(void* self, const void* src);
// Callee 0x006951E0 (81 bytes, not yet lifted): receives a 3x3 packed matrix in its
// first argument (ECX in the original) and one stack pointer argument.
extern void ext_006951E0(void* self, const void* p);

// @name buildPaddedMatrixFromParam
// @summary Starts from a packed 3x3 identity, applies ext_006951E0 with the stack parameter, then copies the result into the padded matrix at self.
void fn_0067E600(void* self, const void* p) {
    // Packed 3x3 identity (row-major, 9 floats = 36 bytes).
    float m[9] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f,
    };
    ext_006951E0(m, p);
    ext_0067DB10(self, m);
}
} // namespace lift_0067E600

// [0x0067E650] sub_0067E650 (98 bytes)
namespace lift_0067E650 {
// Unknown callee 0x00658880 (thiscall: ecx = this, one float stack argument, callee pops).
extern void ext_00658880(void* self, float value);

// Known callee 0x0067DB10: copyPacked3x3ToPaddedMatrix (Copies a packed 3x3 float matrix (36 bytes) from src into a 4-float-stride matrix at self (rows at +0x00, +0x10, +0x20), leaving the padding slots untouched.)
extern void ext_0067DB10(void* self, const void* src);

// @name Unknown::initTransformFromFloat
// @class Unknown
// @summary Fills a scratch 3x3 identity-like block, calls helpers on it, then sets the bottom row of the 4x4 matrix at self to (0, 0, 0, 1).
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
// @field Unknown +0x3c float field_0x3c
void fn_0067E650(void* self, float a) {
    // Scratch frame mirroring the stack slots used by the original code:
    // frame[0] = saved esi (self bits), frame[1..9] = 3x3 block (identity pattern).
    float frame[10] = {};
    frame[0] = std::bit_cast<float>(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)));
    frame[1] = 1.0f;
    frame[5] = 1.0f;
    frame[9] = 1.0f;

    ext_00658880(&frame[1], a);
    ext_0067DB10(self, &frame[0]);

    lift_field<float>(self, 0x30) = 0.0f;
    lift_field<float>(self, 0x34) = 0.0f;
    lift_field<float>(self, 0x38) = 0.0f;
    lift_field<float>(self, 0x3c) = 1.0f;
}
} // namespace lift_0067E650

// [0x0067E510] sub_0067E510 (79 bytes)
namespace lift_0067E510 {
// @name sub_0067E510
// @summary Auto-lifted identical-shape clone of 0x0067E600 (buildPaddedMatrixFromParam).
namespace lift_0067E600 {
// Known callee 0x0067DB10: copyPacked3x3ToPaddedMatrix (Copies a packed 3x3 float matrix (36 bytes) from src into a 4-float-stride matrix at self (rows at +0x00, +0x10, +0x20), leaving the padding slots untouched.)
extern void ext_0067DB10(void* self, const void* src);
// Callee 0x006951E0 (81 bytes, not yet lifted): receives a 3x3 packed matrix in its
// first argument (ECX in the original) and one stack pointer argument.
extern void ext_00695070(void* self, const void* p);

// @name buildPaddedMatrixFromParam
// @summary Starts from a packed 3x3 identity, applies ext_006951E0 with the stack parameter, then copies the result into the padded matrix at self.
void fn_0067E510(void* self, const void* p) {
    // Packed 3x3 identity (row-major, 9 floats = 36 bytes).
    float m[9] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f,
    };
    ext_00695070(m, p);
    ext_0067DB10(self, m);
}
} // namespace lift_0067E600
} // namespace lift_0067E510

// [0x0067E560] sub_0067E560 (79 bytes)
namespace lift_0067E560 {
// @name sub_0067E560
// @summary Auto-lifted identical-shape clone of 0x0067E600 (buildPaddedMatrixFromParam).
namespace lift_0067E600 {
// Known callee 0x0067DB10: copyPacked3x3ToPaddedMatrix (Copies a packed 3x3 float matrix (36 bytes) from src into a 4-float-stride matrix at self (rows at +0x00, +0x10, +0x20), leaving the padding slots untouched.)
extern void ext_0067DB10(void* self, const void* src);
// Callee 0x006951E0 (81 bytes, not yet lifted): receives a 3x3 packed matrix in its
// first argument (ECX in the original) and one stack pointer argument.
extern void ext_00694C10(void* self, const void* p);

// @name buildPaddedMatrixFromParam
// @summary Starts from a packed 3x3 identity, applies ext_006951E0 with the stack parameter, then copies the result into the padded matrix at self.
void fn_0067E560(void* self, const void* p) {
    // Packed 3x3 identity (row-major, 9 floats = 36 bytes).
    float m[9] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f,
    };
    ext_00694C10(m, p);
    ext_0067DB10(self, m);
}
} // namespace lift_0067E600
} // namespace lift_0067E560

// [0x00673B90]
namespace lift_00673B90 {
// @name Unknown::findFirstValidNode
// @class Unknown
// @summary Iterates a linked list at +0x0C, testing each node's (+0x10, +0x14) pair and returning the first non-zero result from ext_006616C0.
// @field Unknown +0x0C void* head
// @field Node +0x0C void* next
// @field Node +0x10 intptr_t field_0x10
// @field Node +0x14 intptr_t field_0x14


    intptr_t ext_006616B0(void* self);
    intptr_t ext_006616C0(void* self);
    void ext_00493D90(void* self);

struct LocalPair_00673B90 {
    intptr_t first;
    intptr_t second;
};

intptr_t fn_00673B90(void* self) {
    void* node = lift_field<void*>(self, 0x0c);
    intptr_t result = 0;

    while (node != nullptr) {
        LocalPair_00673B90 pair;
        pair.first = lift_field<intptr_t>(node, 0x10);
        pair.second = lift_field<intptr_t>(node, 0x14);

        if ((ext_006616B0(&pair) & 0xFF) == 0) {
            result = ext_006616C0(&pair);
        }

        node = lift_field<void*>(node, 0x0c);
        ext_00493D90(&pair);

        if (result != 0) {
            break;
        }
    }

    return result;
}
} // namespace lift_00673B90

// [0x00673420] sub_00673420 (135 bytes)
namespace lift_00673420 {
// Known callee 0x00672C20: DestroyStringElementRange (Iterates [first, last) over 0x2C-byte elements; for each element with a non-null owner at +0x28, calls its vtable slot 0x78 with (owner, &element+0x24), then destroys the std::string at element+0x00.)
// Called cdecl with four stack arguments: (first, last, this+0x1C, self).
extern void ext_00672C20(void* first, void* last, void* ctx, void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// Called cdecl with one stack argument: the value at this+0x20.
extern void ext_006A5C5C(void* arg);
// IAT slot holding the address of std::basic_string<char>::~basic_string (MSVCP80).
extern int mem_00924FF4;

using StringDtorFn = void(__thiscall*)(void*);

// Calls the std::string destructor through the IAT slot mem_00924FF4 (indirect call in the original).
static void call_string_dtor(void* obj) {
    auto fn = reinterpret_cast<StringDtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    fn(obj);
}

// @name Class_00673420::~Class_00673420
// @class Class_00673420
// @summary Destructor: destroys the string at +0x2C, releases the element range at +0x20..+0x24 if non-empty, zeroes the range fields, then destroys the base std::string at +0x00.
// @field Class_00673420 +0x20 void* range_first
// @field Class_00673420 +0x24 void* range_last
// @field Class_00673420 +0x28 uint32_t field_0x28
// @field Class_00673420 +0x2C std::string field_0x2c
void fn_00673420(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    // Destroy member string at +0x2C.
    call_string_dtor(base + 0x2C);

    uint8_t* esi = base + 0x1C;
    void* first = lift_field<void*>(self, 0x20);
    if (first != nullptr) {
        void* last = lift_field<void*>(self, 0x24);
        ext_00672C20(first, last, esi, self);
        ext_006A5C5C(lift_field<void*>(self, 0x20));
    }

    lift_field<void*>(self, 0x20) = nullptr;
    lift_field<void*>(self, 0x24) = nullptr;
    lift_field<uint32_t>(self, 0x28) = 0;

    // Destroy base std::string at +0x00.
    call_string_dtor(self);
}
} // namespace lift_00673420

// [0x0067B090] sub_0067B090 (138 bytes)
namespace lift_0067B090 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);
extern uint32_t mem_00925134; // IAT slot: MSVCR80!_invalid_parameter_noinfo
extern uint32_t mem_009241E0; // IAT slot: KERNEL32!CloseHandle

namespace {

// Addresses in this 32-bit image are stored as uint32_t; convert to a host pointer.
inline void* addr_to_ptr(uint32_t a) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(a));
}

inline void call_invalid_parameter_noinfo() {
    auto fn = reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134));
    fn();
}

inline void call_close_handle(uint32_t handle_value) {
    using CloseHandleFn = BOOL (__stdcall*)(HANDLE);
    auto fn = reinterpret_cast<CloseHandleFn>(static_cast<uintptr_t>(mem_009241E0));
    fn(reinterpret_cast<HANDLE>(static_cast<uintptr_t>(handle_value)));
}

} // namespace

// @name HandleArray::CloseAllAndRelease
// @class Unknown
// @summary Closes every HANDLE in the [begin,end) array, frees the array buffer via ext_006A5C5C, and zeroes the three pointer fields.
// @field Unknown +0x04 uint32_t field_0x04 (array begin pointer)
// @field Unknown +0x08 uint32_t field_0x08 (array end pointer)
// @field Unknown +0x0C uint32_t field_0x0C (capacity end pointer, zeroed)
void fn_0067B090(void* self) {
    // Both range checks in the original call _invalid_parameter_noinfo when begin > end.
    uint32_t end = lift_field<uint32_t>(self, 0x08);
    if (lift_field<uint32_t>(self, 0x04) > end) {
        call_invalid_parameter_noinfo();
    }
    if (lift_field<uint32_t>(self, 0x04) > lift_field<uint32_t>(self, 0x08)) {
        call_invalid_parameter_noinfo();
    }

    // Close each handle in [begin, end).
    for (uint32_t p = lift_field<uint32_t>(self, 0x04); p != end; p += 4) {
        call_close_handle(*static_cast<uint32_t*>(addr_to_ptr(p)));
    }

    // Release the array buffer if present.
    uint32_t buffer = lift_field<uint32_t>(self, 0x04);
    if (buffer != 0) {
        ext_006A5C5C(addr_to_ptr(buffer));
    }

    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;
}
} // namespace lift_0067B090

// [0x0067B1F0] sub_0067B1F0 (110 bytes)
namespace lift_0067B1F0 {
// Known callee 0x0067B050: SubObject::ClearFlagThenVirtualSlot2 (clears byte flag at +0x04, calls ext_0067AE50 on self, then dispatches virtual slot 2).
extern void ext_0067B050(void* self);
// Known callee 0x0067B090: HandleArray::CloseAllAndRelease (closes every HANDLE in the [begin,end) array, frees the buffer, zeroes the pointer fields).
extern void ext_0067B090(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; frees the handle array buffer).
extern void ext_006A5C5C(void* p);
// Known callee 0x0065C620: sub_0065C620 (25 bytes).
extern void ext_0065C620(void* self);
// Vtable address written into the object at entry.
extern int mem_0098C5C8;

// @name Unknown::closeHandlesAndCleanup
// @class Unknown
// @summary Runs the base-object cleanup, closes and frees the owned HandleArray if present, then cleans up the embedded sub-object at +0x08.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x08 void* subobject
// @field Unknown +0x0c void* handles
void fn_0067B1F0(void* self) {
    // The original sets up an MSVC SEH frame (fs:[0] handler 0x008B4A86) and a
    // scope-state slot; those are unwinding boilerplate and are omitted here.

    // mov dword ptr [esi], 0x98c5c8
    *reinterpret_cast<void**>(self) = reinterpret_cast<void*>(&mem_0098C5C8);

    // call sub_0067B050(self)
    ext_0067B050(self);

    // mov edi, dword ptr [esi + 0xc]; if (edi != 0) { CloseAll(edi); free(edi); }
    void* handles = *reinterpret_cast<void**>(static_cast<char*>(self) + 0x0c);
    if (handles != nullptr) {
        ext_0067B090(handles);
        ext_006A5C5C(handles);
    }

    // lea ecx, [esi + 8]; call sub_0065C620(ecx)
    ext_0065C620(static_cast<char*>(self) + 0x08);
}
} // namespace lift_0067B1F0

// [0x0067B930] sub_0067B930 (114 bytes)
namespace lift_0067B930 {
// Known callee 0x0046C0A0: parseFloatFromString (Calls ext_004275C0 to get a std::string, converts it with atof, and stores the float result.)
extern void __cdecl ext_0046C0A0(uint32_t unused, float* out_val);
// Known callee 0x0063EFE0: sub_0063EFE0 (Searches a vector of item pointers at +0x3c for an item whose std::string at +0x04 matches the given C-string, returning it or a sentinel at 0x00B53A34.)
extern uint32_t __thiscall ext_0063EFE0(void* self, const char* name);
extern uint32_t mem_00A9FAE8;
extern uint32_t mem_00A9FAEC;
extern uint32_t mem_00A9FAF4;

// @name loadThreeNamedFloats
// @class Unknown
// @summary Looks up three named items in the container and parses each item's string as a float into this+0x00, this+0x04 and this+0x08.
void __thiscall fn_0067B930(void* self, void* container) {
    auto* base = static_cast<uint8_t*>(self);

    // Item 1 -> float at this+0x00.
    uint32_t slot = ext_0063EFE0(container, reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9FAE8)));
    ext_0046C0A0(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x00)), reinterpret_cast<float*>(&slot));

    // Item 2 -> float at this+0x04.
    slot = ext_0063EFE0(container, reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9FAEC)));
    ext_0046C0A0(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x04)), reinterpret_cast<float*>(&slot));

    // Item 3 -> float at this+0x08.
    slot = ext_0063EFE0(container, reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9FAF4)));
    ext_0046C0A0(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(base + 0x08)), reinterpret_cast<float*>(&slot));
}
} // namespace lift_0067B930

// [0x006738D0] sub_006738D0 (138 bytes)
namespace lift_006738D0 {
// MSVCP80 std::string (MSVC 2005 layout) is 0x1C bytes; its copy-ctor and dtor are
// imported through these IAT slots. They are referenced for metadata only.
extern int mem_00924FE0;
extern int mem_00924FF4;
// .rdata constant 0x0062822A referenced by the original asm; metadata-only.
extern int mem_009241E0;

// @name Unknown::initTwoStringsAndFlags
// @class Unknown
// @summary Copies two by-value std::string args into this+0x00 and this+0x1C, stores two dwords at +0x38/+0x40 and clears +0x3C; returns this.
// @field Unknown +0x00 uint8_t[0x1C] m_str0 (std::string copy of arg a)
// @field Unknown +0x1C uint8_t[0x1C] m_str1 (std::string copy of arg b)
// @field Unknown +0x38 uint32_t field_0x38
// @field Unknown +0x3C uint32_t field_0x3C
// @field Unknown +0x40 uint32_t field_0x40
void* fn_006738D0(void* self, const void* a, const void* b, uint32_t v1, uint32_t v2) {
    // std::string copy-construct (MSVCP80 ctor via mem_00924FE0): the 0x1C-byte blob is copied.
    (void)&mem_00924FE0;
    std::memcpy(static_cast<uint8_t*>(self) + 0x00, a, 0x1C);
    std::memcpy(static_cast<uint8_t*>(self) + 0x1C, b, 0x1C);

    lift_field<uint32_t>(self, 0x38) = v2;
    lift_field<uint32_t>(self, 0x3C) = 0;
    lift_field<uint32_t>(self, 0x40) = v1;

    // Callee-side destruction of the two by-value std::string args (MSVCP80 dtor via mem_00924FF4).
    (void)&mem_00924FF4;
    (void)&mem_009241E0;
    return self;
}
} // namespace lift_006738D0

// [0x00672690] sub_00672690 (139 bytes)
namespace lift_00672690 {
// Known callee 0x006724B0: pushHeapByKey (Sift-up heap insertion (std::__push_heap shape) of an object pointer into an array, ordered by std::string operator> on each object's virtual key (vtable slot +0x24).)
extern void ext_006724B0(void** first, int holeIndex, int topIndex, void* value);
// MSVCP80 std::string operator> import slot (IAT entry, holds the function address at runtime).
extern int mem_00924EF4;

// Virtual key accessor: vtable slot +0x24 (index 9) returns const std::string&.
static inline const std::string& keyOf(void* obj) {
    using KeyFn = const std::string& (__thiscall*)(void*);
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<KeyFn>(vtbl[9])(obj);
}

// @name pushHeapByKey_adjust
// @summary std::__adjust_heap shape: sift the hole at holeIndex down by child key (std::string >), then push value up via fn_006724B0.
void fn_00672690(void** first, int holeIndex, int len, void* value) {
    using StrGtFn = bool(__cdecl*)(const std::string&, const std::string&);
    const StrGtFn strGreater = *reinterpret_cast<StrGtFn*>(&mem_00924EF4);

    const int topIndex = holeIndex;
    int secondChild = 2 * holeIndex + 2;
    while (secondChild < len) {
        if (strGreater(keyOf(first[secondChild]), keyOf(first[secondChild - 1]))) {
            --secondChild;
        }
        first[holeIndex] = first[secondChild];
        holeIndex = secondChild;
        secondChild = 2 * (secondChild + 1);
    }
    if (secondChild == len) {
        first[holeIndex] = first[len - 1];
        holeIndex = len - 1;
    }
    ext_006724B0(first, holeIndex, topIndex, value);
}
} // namespace lift_00672690

// [0x00676860] sub_00676860 (139 bytes)
namespace lift_00676860 {
// Known callee 0x00676710: compareDwordPairRange (Validates that the other-range end (other + 8*count, count = (end-begin)/8) lies within [range+0x04, range+0x08] (invalid-parameter handler otherwise), then returns 1 iff IsSameDwordPair matches for every 8-byte element of [begin, end) against the same-offset element of other.)
extern int ext_00676710(const void* begin, const void* end, void* range, const void* other);

// MSVCRT _invalid_parameter_noinfo, called through its IAT slot.
extern void (*mem_00925134)(void);

// @name compareDwordPairRanges
// @summary Returns 1 if two {begin,end} DWORD-pair ranges have the same element count and every 8-byte pair in range a matches the same-offset pair in range b (via compareDwordPairRange); otherwise 0. Invokes the invalid-parameter handler on inconsistent bounds but continues.
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
int fn_00676860(const void* a, const void* b) {
    const uint32_t aBegin = lift_field<uint32_t>(a, 0x04);
    const uint32_t aEnd   = lift_field<uint32_t>(a, 0x08);
    const uint32_t bBegin = lift_field<uint32_t>(b, 0x04);
    const uint32_t bEnd   = lift_field<uint32_t>(b, 0x08);

    // Element counts: (end - begin) / 8 (signed arithmetic shift), or 0 when begin is null.
    const int32_t countA = (aBegin != 0) ? (static_cast<int32_t>(aEnd - aBegin) >> 3) : 0;
    const int32_t countB = (bBegin != 0) ? (static_cast<int32_t>(bEnd - bBegin) >> 3) : 0;
    if (countA != countB) {
        return 0;
    }

    // Bounds sanity checks; the handler is invoked but execution continues.
    if (bBegin > bEnd) {
        mem_00925134();
    }
    if (aBegin > aEnd) {
        mem_00925134();
    }
    if (aBegin > bEnd) {
        mem_00925134();
    }

    return ext_00676710(reinterpret_cast<const void*>(static_cast<uintptr_t>(aBegin)),
                        reinterpret_cast<const void*>(static_cast<uintptr_t>(aEnd)),
                        const_cast<void*>(b),
                        reinterpret_cast<const void*>(static_cast<uintptr_t>(bBegin))) != 0
               ? 1
               : 0;
}
} // namespace lift_00676860

// [0x0067B4A0] sub_0067B4A0 (141 bytes)
namespace lift_0067B4A0 {
// Known callee 0x0065C640: CriticalSectionLock::enter (fastcall, this in ecx).
extern void __fastcall ext_0065C640(void* self);
// Known callee 0x0065C650: CriticalSectionLock::leave (fastcall, this in ecx).
extern void __fastcall ext_0065C650(void* self);
// Known callee 0x0067B410: TimerHandle::stop (fastcall, this in ecx).
extern void __fastcall ext_0067B410(void* self);

// Imports (IAT slots): GetCurrentThread, SetThreadPriority.
extern void* (__stdcall* mem_00924290)(void);
extern BOOL (__stdcall* mem_00924288)(void* hThread, int nPriority);

// @name TimerHandle::updateThreadPriorityAndValidate
// @class TimerHandle
// @summary Under the object's lock, boosts the current thread priority once (per priority index), then stops the timer if the attached object's vtable slot 0 check fails, and releases the lock.
// @field TimerHandle +0x0C u8 priority_applied
// @field TimerHandle +0x10 s32 priority_index
// @field TimerHandle +0x14 void* attached_object
// @field TimerHandle +0x18 CriticalSectionLock lock
void __stdcall fn_0067B4A0(void* arg0, void* self, void* arg2, void* arg3, void* arg4) {
    (void)arg0;
    (void)arg2;
    (void)arg3;
    (void)arg4;

    // Index -> priority table as built on the stack by the original code.
    // Index 0 means "no change". Indices above 5 were out-of-range reads in asm.
    static const int prio_table[6] = {0, 2, 1, 0, -1, -2};

    auto* base = static_cast<uint8_t*>(self);
    void* lock = base + 0x18;

    ext_0065C640(lock);

    if (base[0x0C] == 0) {
        const int index = *reinterpret_cast<int32_t*>(base + 0x10);
        if (index != 0) {
            mem_00924288(mem_00924290(), prio_table[index]);
        }
        base[0x0C] = 1;
    }

    void* obj = *reinterpret_cast<void**>(base + 0x14);
    bool ok = false;
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        using VFn = uint8_t(__thiscall*)(void*);
        ok = reinterpret_cast<VFn>(vtbl[0])(obj) != 0;
    }
    if (!ok) {
        ext_0067B410(self);
    }

    ext_0065C650(lock);
}
} // namespace lift_0067B4A0

// [0x0067BEC0]
namespace lift_0067BEC0 {
// @name Vec3::mulMat3
// @class Vec3
// @summary Multiplies a 3D row vector by a 3x3 matrix and writes the result to out.
// @field Vec3 +0x00 float x
// @field Vec3 +0x04 float y
// @field Vec3 +0x08 float z
float* __thiscall sub_0067BEC0(void* self, float* out, const float* mat) {
    float x = lift_field<float>(self, 0x0);
    float y = lift_field<float>(self, 0x4);
    float z = lift_field<float>(self, 0x8);

    out[0] = x * mat[0] + y * mat[3] + z * mat[6];
    out[1] = x * mat[1] + y * mat[4] + z * mat[7];
    out[2] = x * mat[2] + y * mat[5] + z * mat[8];
    return out;
}
} // namespace lift_0067BEC0

// [0x0067C8C0] sub_0067C8C0 (46 bytes)
namespace lift_0067C8C0 {
// Known callee 0x0067BEC0: Vec3::mulMat3 (Multiplies a 3D row vector by a 3x3 matrix and writes the result to out.)
extern float* ext_0067BEC0(void* self, float* out, const float* mat);

// @name Vec3::assignMulMat3
// @class Vec3
// @summary Multiplies this vector by a 3x3 matrix via Vec3::mulMat3 and copies the 3-float result back into self.
// @field Vec3 +0x00 float field_0x00
// @field Vec3 +0x04 float field_0x04
// @field Vec3 +0x08 float field_0x08
void fn_0067C8C0(void* self, const float* mat) {
    float scratch[3];
    float* src = ext_0067BEC0(self, scratch, mat);
    float* dst = static_cast<float*>(self);
    float x = src[0];
    float y = src[1];
    float z = src[2];
    dst[0] = x;
    dst[1] = y;
    dst[2] = z;
}
} // namespace lift_0067C8C0

// [0x00673EA0]
namespace lift_00673EA0 {
// @name allocAndConstructListNode
// @summary Allocates a 0x4C-byte node, sets two pointer fields at +0x00/+0x04, and copy-constructs the payload at +0x08.
// @field Node +0x00 uint32_t next
// @field Node +0x04 uint32_t prev
// @field Node +0x08 uint8_t payload[0x44]


extern void* ext_006A5C62(uint32_t size);
extern void ext_006A5C5C(void* ptr);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void* __thiscall ext_00673C90(void* self, const void* other);

extern void* __stdcall fn_00673EA0(uint32_t nextPtr, uint32_t prevPtr, const void* val) {
    uint8_t* node = static_cast<uint8_t*>(ext_006A5C62(0x4C));
    try {
        if (node != nullptr) {
            lift_field<uint32_t>(node, 0x00) = nextPtr;
        }
        uint8_t* prevField = node + 0x04;
        if (prevField != nullptr) {
            lift_field<uint32_t>(node, 0x04) = prevPtr;
        }
        uint8_t* payload = node + 0x08;
        if (payload != nullptr) {
            ext_00673C90(payload, val);
        }
    } catch (...) {
        ext_006A5C5C(node);
        ext_006A6DD2(nullptr, nullptr);
    }
    return node;
}
} // namespace lift_00673EA0

// [0x0067BB00]
namespace lift_0067BB00 {
extern void __thiscall ext_00694880(void* self, void* arg);

// @name Vec3::buildBasisFromCross
// @class Vec3
// @summary Computes cross(this, other), builds a 3x3 basis matrix [this, other, cross], and passes it to ext_00694880.
// @field Vec3 +0x00 float x
// @field Vec3 +0x04 float y
// @field Vec3 +0x08 float z
void __thiscall sub_0067BB00(float* self, const float* other) {
    float cx = self[1] * other[2] - self[2] * other[1];
    float cy = self[2] * other[0] - self[0] * other[2];
    float cz = self[0] * other[1] - self[1] * other[0];

    float basis[9] = {
        self[0],  self[1],  self[2],
        other[0], other[1], other[2],
        cx,       cy,       cz,
    };

    ext_00694880(basis, self);
}
} // namespace lift_0067BB00

// [0x006725F0]
namespace lift_006725F0 {
// @name sortThreeByName
// @summary Sorts three object pointers in ascending order by their virtual name string (vtable +0x24).

extern uint32_t mem_00924EF4;

using GetNameFn = const void* (__thiscall*)(void* self);
using StringLessFn = uint8_t (__cdecl*)(const void* lhs, const void* rhs);

static void compareAndSwap(void** lhs, void** rhs) {
    void* objL = *lhs;
    void* objR = *rhs;
    auto getNameL = (*reinterpret_cast<GetNameFn**>(objL))[0x24 / sizeof(void*)];
    const void* nameL = getNameL(objL);
    auto getNameR = (*reinterpret_cast<GetNameFn**>(objR))[0x24 / sizeof(void*)];
    const void* nameR = getNameR(objR);
    auto stringLess = reinterpret_cast<StringLessFn>(mem_00924EF4);
    if (stringLess(nameR, nameL) != 0) {
        *lhs = objR;
        *rhs = objL;
    }
}

void __cdecl sub_006725F0(void** a, void** b, void** c) {
    compareAndSwap(a, b);
    compareAndSwap(b, c);
    compareAndSwap(a, b);
}
} // namespace lift_006725F0

// [0x0067BA60]
namespace lift_0067BA60 {
// @name Vector3::buildBasisFromPair
// @class Vector3
// @summary Computes cross product of self and other, builds a 3x3 basis matrix, and passes it to ext_00694840.
// @field Vector3 +0x00 float x
// @field Vector3 +0x04 float y
// @field Vector3 +0x08 float z


extern void __thiscall ext_00694840(void* mat, void* self);

void __thiscall sub_0067BA60(void* self, const void* other) {
    float cx = lift_field<float>(self, 0x00);
    float cy = lift_field<float>(self, 0x04);
    float cz = lift_field<float>(self, 0x08);

    float ax = lift_field<float>(other, 0x00);
    float ay = lift_field<float>(other, 0x04);
    float az = lift_field<float>(other, 0x08);

    float cross_x = cy * az - cz * ay;
    float cross_y = cz * ax - cx * az;
    float cross_z = cx * ay - cy * ax;

    float mat[9] = {
        cx, cy, cz,
        ax, ay, az,
        cross_x, cross_y, cross_z
    };

    ext_00694840(mat, self);
}
} // namespace lift_0067BA60
