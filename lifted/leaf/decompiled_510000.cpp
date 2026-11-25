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

// [0x0051A210] sub_0051A210 (95 bytes)
namespace lift_0051A210 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out, uint32_t arg);
// Known callee 0x006A6C87: sub_006A6C87 (18B) - registers a teardown routine.
extern void ext_006A6C87(void (*teardown)(void));
// Teardown routine whose address is pushed to 0x006A6C87.
extern void ext_00919FF0(void);
extern uint32_t mem_00AEC728;   // once-init guard flag (bit 0)
extern uint8_t mem_00AEC70C[];  // static object storage (size not recovered)

// @name GetOnceInitString_0051A210
// @summary One-time guarded initializer for the global at 0x00AEC70C; on first call builds it via ext_0066AD10 and registers its teardown via ext_006A6C87; later calls only return its address.
void* fn_0051A210(void) {
    // Guard bit 0 of mem_00AEC728. Original MSVC SEH frame (fs:[0] push/pop around the
    // initialization) is an exception-unwind detail and is not reproduced here.
    if ((mem_00AEC728 & 1u) == 0u) {
        mem_00AEC728 |= 1u;
        // Original pushes the operand 0x00A4320C as the second argument.
        ext_0066AD10(mem_00AEC70C, 0x00A4320Cu);
        // Original pushes 0x00919FF0 as the teardown address for 0x006A6C87.
        ext_006A6C87(ext_00919FF0);
    }
    return mem_00AEC70C;
}
} // namespace lift_0051A210

// [0x0051A270] sub_0051A270 (95 bytes)
namespace lift_0051A270 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
// Second pushed argument is a 32-bit literal (0x00A43218), so it is declared as uint32_t.
extern void* ext_0066AD10(void* out, uint32_t arg);
// Callee 0x006A6C87 takes one pointer argument (0x00919FE0, a teardown routine registered once).
extern int ext_006A6C87(void* fn);
extern int mem_00AEC748;   // once-init guard flag (bit 0)
extern int mem_00AEC72C;   // static string/object storage
extern void ext_00919FE0(); // teardown routine (address pushed as the argument to 0x006A6C87)

// @name InitOnceGlobalString_0051A270
// @summary One-time guarded initializer for the global at mem_00AEC72C (guarded by bit 0 of mem_00AEC748); registers a teardown and returns its address.
void* fn_0051A270(void) {
    if ((mem_00AEC748 & 1) == 0) {
        mem_00AEC748 |= 1;
        ext_0066AD10(&mem_00AEC72C, 0x00A43218u);
        ext_006A6C87(reinterpret_cast<void*>(&ext_00919FE0));
    }
    return &mem_00AEC72C;
}
} // namespace lift_0051A270

// [0x0051A560] sub_0051A560 (95 bytes)
namespace lift_0051A560 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out, uint32_t arg);
// Known callee 0x006A6C87: sub_006A6C87 (18B) - registers a teardown routine.
extern void ext_006A6C87(void (*teardown)(void));
// Teardown routine whose address is pushed to 0x006A6C87.
extern void ext_0091A000(void);
extern uint32_t mem_00AEC778;   // once-init guard flag (bit 0)
extern uint8_t mem_00AEC75C[];  // static object storage (size not recovered)

// @name GetOnceInitString_0051A560
// @summary One-time guarded initializer for the global at 0x00AEC75C; on first call builds it via ext_0066AD10 and registers its teardown (0x0091A000) via ext_006A6C87; later calls only return its address.
void* fn_0051A560(void) {
    // Guard bit 0 of mem_00AEC778. The original MSVC SEH frame (fs:[0] push/pop, try-state
    // slot) is an exception-unwind detail and is not reproduced here.
    if ((mem_00AEC778 & 1u) == 0u) {
        mem_00AEC778 |= 1u;
        // Original pushes the operand 0x00A43418 as the second argument.
        ext_0066AD10(mem_00AEC75C, 0x00A43418u);
        // Original pushes 0x0091A000 as the teardown address for 0x006A6C87.
        ext_006A6C87(ext_0091A000);
    }
    return mem_00AEC75C;
}
} // namespace lift_0051A560

// [0x00517070] sub_00517070 (33 bytes)
namespace lift_00517070 {
// Known callee 0x00516F90: InitOnceGlobalString_00516F90 (One-time initializer for global string object 0x00AEC0A8; sets guard bit 0 of 0x00AEC0C4, builds the string, registers a cleanup routine, and returns the string's address.)
extern void* ext_00516F90();
// Import slot 0x00924FE0: MSVCP80 std::basic_string<char> copy constructor (thiscall, one stack arg: source string).
extern void (*mem_00924FE0)(void* self, const void* src);

// @name InitOnceGlobalStringCopy_00517070
// @summary Copy-constructs the global string (from InitOnceGlobalString_00516F90) into the caller-supplied string object and returns that object's address.
void* fn_00517070(void* dst) {
    const void* src = ext_00516F90();
    mem_00924FE0(dst, src);
    return dst;
}
} // namespace lift_00517070

// [0x0051E0D0] sub_0051E0D0 (77 bytes)
namespace lift_0051E0D0 {
// Known callee 0x00405FB0: throwPreparedStringError_00405FB0 (Builds a std::string from the literal at 0x00928F30 and throws it inside an std::exception-derived object.)
extern void ext_00405FB0();

// Known callee 0x0051DEA0: allocateElements192 (Allocates count elements of 192 bytes (0xC0) with overflow check, throwing std::bad_alloc on overflow)
// The call site pushes two stack words (a zero, then count), so both are declared here.
extern void* ext_0051DEA0(uint32_t hiddenArg, uint32_t count);

// @name Unknown::reserveElements192
// @class Unknown
// @summary Clears the three-pointer element range at +0x04/+0x08/+0x0C, then, for a nonzero count not above 0x1555555, allocates count * 192 bytes and sets begin, end and capacity-end. Returns true when storage was allocated.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
bool fn_0051E0D0(void* self, uint32_t count) {
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0C) = 0;

    if (count == 0) {
        return false;
    }
    if (count > 0x1555555u) {
        ext_00405FB0();
    }

    // Stored as 32-bit values to keep the original field offsets exact.
    uint32_t base = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ext_0051DEA0(0u, count)));
    lift_field<uint32_t>(self, 0x04) = base;
    lift_field<uint32_t>(self, 0x08) = base;
    lift_field<uint32_t>(self, 0x0C) = base + count * 0xC0u;
    return true;
}
} // namespace lift_0051E0D0
