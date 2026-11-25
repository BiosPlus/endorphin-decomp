// Lifted C++ translation unit: lifted/leaf/decompiled_510000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstdint>
#include <cstddef>
#include <bit>
#include <stdexcept>
#include <cstring>
#include <istream>

#include <istream>
namespace lift_0051F640 {
// @name sub_0051F640
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_0051F4A0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0051F640(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_0051F4A0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0051F640

// [0x0051F610] sub_0051F610 (43 bytes)
namespace lift_0051F610 {
// @name sub_0051F610
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_0051F440(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_0051F610(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_0051F440(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_0051F610

// [0x0051DF00] sub_0051DF00 (92 bytes)
namespace lift_0051DF00 {
// @name sub_0051DF00
// @summary Auto-lifted identical-shape clone of 0x00699810 (allocate_array_0x2c).
namespace lift_00699810 {
extern void* fn_006A5C62(uint32_t size);

// @name allocate_array_0x2c
// @summary Allocates an array of count 0x2c-byte elements, throwing std::bad_alloc on size_t overflow.
extern void* fn_0051DF00(uint32_t count) {
    if (count > 0 && (0xFFFFFFFFu / count) < 0x168u) {
        throw std::bad_alloc();
    }
    return fn_006A5C62(count * 0x168u);
}
} // namespace lift_00699810
} // namespace lift_0051DF00

// [0x0051E170] sub_0051E170 (43 bytes)
namespace lift_0051E170 {
// @name sub_0051E170
// @summary Auto-lifted identical-shape clone of 0x00406290 (copyStringRange_00406290).
namespace lift_00406290 {
// Known callee 0x00406090: std::copy<std::string*, std::string*> (Copies a range of std::string objects from [first, last) to dest and returns the end of the destination range.)
extern uint32_t ext_0051E070(uint32_t first, uint32_t last, uint32_t dest);

// @name copyStringRange_00406290
// @summary Forwards (first, last, dest) to the std::string range-copy helper and returns its result.
extern uint32_t fn_0051E170(uint32_t first, uint32_t last, uint32_t dest) {
    // The original's stack shuffling (a dead zeroed byte local and redundant
    // argument pushes) has no observable effect; only the three arguments
    // reach the callee, and its return value is passed through in eax.
    return ext_0051E070(first, last, dest);
}
} // namespace lift_00406290
} // namespace lift_0051E170

// [0x0051F540] sub_0051F540 (43 bytes)
namespace lift_0051F540 {
// @name sub_0051F540
// @summary Auto-lifted identical-shape clone of 0x00406290 (copyStringRange_00406290).
namespace lift_00406290 {
// Known callee 0x00406090: std::copy<std::string*, std::string*> (Copies a range of std::string objects from [first, last) to dest and returns the end of the destination range.)
extern uint32_t ext_0051F270(uint32_t first, uint32_t last, uint32_t dest);

// @name copyStringRange_00406290
// @summary Forwards (first, last, dest) to the std::string range-copy helper and returns its result.
extern uint32_t fn_0051F540(uint32_t first, uint32_t last, uint32_t dest) {
    // The original's stack shuffling (a dead zeroed byte local and redundant
    // argument pushes) has no observable effect; only the three arguments
    // reach the callee, and its return value is passed through in eax.
    return ext_0051F270(first, last, dest);
}
} // namespace lift_00406290
} // namespace lift_0051F540

// [0x0051E070] sub_0051E070 (90 bytes)
namespace lift_0051E070 {
extern int32_t ext_0051DFC0(int32_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f);

// @name offsetByWholeTurns360
// @summary Calls ext_0051DFC0 (result unused), then returns c + (b - a) with the delta truncated toward zero to a multiple of 360.
int32_t fn_0051E070(int32_t a, int32_t b, int32_t c) {
    // Stack args a/b/c are the three cdecl params; the two byte-sized flags
    // passed to the callee are zero-initialised locals in the original.
    ext_0051DFC0(a, b, c, c, 0, 0);

    // Wrapping subtraction (matches 32-bit machine arithmetic).
    const int32_t delta = static_cast<int32_t>(static_cast<uint32_t>(b) - static_cast<uint32_t>(a));
    // Signed division by 360 (compiler emits the same magic-multiply sequence).
    const int32_t turns = delta / 360;
    // Wrapping add, as the original 32-bit add does.
    return static_cast<int32_t>(static_cast<uint32_t>(c) + static_cast<uint32_t>(turns * 360));
}
} // namespace lift_0051E070

// [0x00519D50] sub_00519D50 (91 bytes)
namespace lift_00519D50 {
// @name AllocateElements8
// @summary Allocates storage for `count` 8-byte elements; throws std::length_error if count*8 would overflow.
void* fn_00519D50(uint32_t count) {
    if (count != 0 && (0xFFFFFFFFu / count) < 8u) {
        throw std::length_error("vector<T> too long");
    }
    return ::operator new(static_cast<size_t>(count) * 8u);
}
} // namespace lift_00519D50

// [0x0051EC00] sub_0051EC00 (59 bytes)
namespace lift_0051EC00 {
// @name sub_0051EC00
// @summary Auto-lifted identical-shape clone of 0x005015E0 (Unknown::eraseRangeFromSelf).
namespace lift_005015E0 {
// Known callee 0x005013F0: sub_005013F0 (Auto-lifted identical-shape clone of 0x0057E9E0 (Unknown::eraseStringVectorRange).)
// Thiscall: self in ecx, then five stack args (out_iter, first_container, first_ptr, last_container, last_ptr).
extern void* ext_0051E740(void* self, void* out_iter, void* first_container,
                              void* first_ptr, void* last_container, void* last_ptr);

// @name Unknown::eraseRangeFromSelf
// @class Unknown
// @summary Erases the element range bounded by self+0x04 .. self+0x08 by forwarding both bounds to 0x005013F0.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_0051EC00(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto load_u32 = [&](std::size_t off) {
        std::uint32_t v;
        std::memcpy(&v, base + off, sizeof v);
        return v;
    };

    // The original asserts first <= last via _invalid_parameter_noinfo (diagnostic only; no
    // observable effect on the erase), so it is omitted here.
    const auto first = static_cast<std::uintptr_t>(load_u32(0x04));
    const auto last = static_cast<std::uintptr_t>(load_u32(0x08));

    // The out iterator is a caller-provided slot; this function never reads it.
    alignas(8) unsigned char out_iter[16] = {};
    ext_0051E740(self, out_iter, self, reinterpret_cast<void*>(first),
                 self, reinterpret_cast<void*>(last));
}
} // namespace lift_005015E0
} // namespace lift_0051EC00

// [0x0051FEB0] sub_0051FEB0 (59 bytes)
namespace lift_0051FEB0 {
// @name sub_0051FEB0
// @summary Auto-lifted identical-shape clone of 0x005015E0 (Unknown::eraseRangeFromSelf).
namespace lift_005015E0 {
// Known callee 0x005013F0: sub_005013F0 (Auto-lifted identical-shape clone of 0x0057E9E0 (Unknown::eraseStringVectorRange).)
// Thiscall: self in ecx, then five stack args (out_iter, first_container, first_ptr, last_container, last_ptr).
extern void* ext_0051F840(void* self, void* out_iter, void* first_container,
                              void* first_ptr, void* last_container, void* last_ptr);

// @name Unknown::eraseRangeFromSelf
// @class Unknown
// @summary Erases the element range bounded by self+0x04 .. self+0x08 by forwarding both bounds to 0x005013F0.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void fn_0051FEB0(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto load_u32 = [&](std::size_t off) {
        std::uint32_t v;
        std::memcpy(&v, base + off, sizeof v);
        return v;
    };

    // The original asserts first <= last via _invalid_parameter_noinfo (diagnostic only; no
    // observable effect on the erase), so it is omitted here.
    const auto first = static_cast<std::uintptr_t>(load_u32(0x04));
    const auto last = static_cast<std::uintptr_t>(load_u32(0x08));

    // The out iterator is a caller-provided slot; this function never reads it.
    alignas(8) unsigned char out_iter[16] = {};
    ext_0051F840(self, out_iter, self, reinterpret_cast<void*>(first),
                 self, reinterpret_cast<void*>(last));
}
} // namespace lift_005015E0
} // namespace lift_0051FEB0

// [0x0051DEA0]
namespace lift_0051DEA0 {
extern void* ext_006A5C62(uint32_t size);
extern void ext_006A6DD2(void* pExceptionObject, const void* pThrowInfo);

extern void* mem_00925130;
extern uint32_t mem_00928EC0;
extern uint8_t mem_009CDF94;

// @name allocateElements192
// @summary Allocates count elements of 192 bytes (0xC0) with overflow check, throwing std::bad_alloc on overflow

extern void* fn_0051DEA0(uint32_t count) {
    if (count > 0 && (0xFFFFFFFFu / count) < 0xC0u) {
        const char* msg = nullptr;
        uintptr_t exc[3] = {0, 0, 0};
        using ExceptionCtor = void(__thiscall*)(void*, const char* const*);
        reinterpret_cast<ExceptionCtor>(mem_00925130)(exc, &msg);
        exc[0] = reinterpret_cast<uintptr_t>(&mem_00928EC0);
        ext_006A6DD2(exc, &mem_009CDF94);
    }

    return ext_006A5C62(count * 0xC0u);
}
} // namespace lift_0051DEA0

// [0x00516F90] sub_00516F90 (95 bytes)
namespace lift_00516F90 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, const char* str);
// Known callee 0x006A6C87: sub_006A6C87 (18B), takes one function-pointer argument.
extern void ext_006A6C87(void (*fn)());
extern int mem_00AEC0C4;
extern int mem_00AEC0A8;

// @name InitOnceGlobalString_00516F90
// @summary One-time initializer for global string object 0x00AEC0A8; sets guard bit 0 of 0x00AEC0C4, builds the string, registers a cleanup routine, and returns the string's address.
void* fn_00516F90() {
    // Guard bit 0 of mem_00AEC0C4: run the initializer only once.
    if ((mem_00AEC0C4 & 1) == 0) {
        mem_00AEC0C4 |= 1;
        ext_0066AD10(&mem_00AEC0A8, reinterpret_cast<const char*>(uintptr_t{0xA4090C}));
        ext_006A6C87(reinterpret_cast<void (*)()>(uintptr_t{0x919E10}));
    }
    return &mem_00AEC0A8;
}
} // namespace lift_00516F90
