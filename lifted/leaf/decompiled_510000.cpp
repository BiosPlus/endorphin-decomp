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
#include <cmath>
#include <cstdlib>

#include <cstdlib>
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
#include <cstdarg>
#include <utility>
#include <exception>

#include <exception>
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
#include <iostream>
#include <streambuf>

#include <streambuf>
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
#include <memory>
#include <cstdio>
#include <algorithm>

#include <algorithm>
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

// [0x0051E120] sub_0051E120 (77 bytes)
namespace lift_0051E120 {
// Known callee 0x00405FB0: throwPreparedStringError_00405FB0 (Builds a std::string from the literal at 0x00928F30 and throws it inside an std::exception-derived object.)
extern void ext_00405FB0();
// Known callee 0x0051DF00: sub_0051DF00 (Auto-lifted identical-shape clone of 0x00699810 (allocate_array_0x2c).)
extern void* ext_0051DF00(uint32_t count);

// @name Unknown::initElementRange_0051E120
// @class Unknown
// @summary Resets the three-pointer range at self+0x04..0x0C and, for a nonzero count, allocates count*0x168-byte elements and stores [begin, begin, end]; returns false when count is zero.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 void* field_0x08
// @field Unknown +0x0C void* field_0x0C
bool fn_0051E120(void* self, uint32_t count) {
    auto* obj = static_cast<uint8_t*>(self);
    auto& f04 = *reinterpret_cast<uint8_t**>(obj + 0x04);
    auto& f08 = *reinterpret_cast<uint8_t**>(obj + 0x08);
    auto& f0C = *reinterpret_cast<uint8_t**>(obj + 0x0C);

    f04 = nullptr;
    f08 = nullptr;
    f0C = nullptr;

    if (count == 0) {
        return false;
    }
    // 0xB60B60 * 0x168 is the largest product that fits in 32 bits.
    if (count > 0xB60B60u) {
        ext_00405FB0();
    }

    auto* buf = static_cast<uint8_t*>(ext_0051DF00(count));
    uint8_t* end = buf + static_cast<size_t>(count) * 0x168u;

    f04 = buf;
    f08 = buf;
    f0C = end;
    return true;
}
} // namespace lift_0051E120

// [0x0051EC00] sub_0051EC00 (59 bytes)
namespace lift_0051EC00 {
// @name sub_0051EC00
// @summary Auto-lifted identical-shape clone of 0x0044C500 (Vector::clear).
namespace lift_0044C500 {
// Known callee 0x0044C460: Vector::eraseRange (Validates an owner/range pair, moves [last,end) down to first, shrinks end, and writes {first_or_owner, first} to out.)
extern void ext_0051E740(void* ecx, uint32_t* out, uint32_t owner, uint32_t first,
                         uint32_t owner_expected, uint32_t last);

// IAT slot for MSVCR80!_invalid_parameter_noinfo, called through a pointer when a range check fails.
extern void (*mem_00925134)(void);

// @name Vector::clear
// @class Vector
// @summary Validates begin <= end, then calls Vector::eraseRange(begin, end) so the vector's end is reset to begin.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_0051EC00(void* self) {
    uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    uint32_t end = lift_field<uint32_t>(self, 0x08);

    if (begin > end) {
        mem_00925134();
    }

    begin = lift_field<uint32_t>(self, 0x04);
    if (begin > lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }

    uint32_t out[2] = {0, 0};
    ext_0051E740(self, out, self_addr, begin, self_addr, end);
}
} // namespace lift_0044C500
} // namespace lift_0051EC00

// [0x0051FEB0] sub_0051FEB0 (59 bytes)
namespace lift_0051FEB0 {
// @name sub_0051FEB0
// @summary Auto-lifted identical-shape clone of 0x0044C500 (Vector::clear).
namespace lift_0044C500 {
// Known callee 0x0044C460: Vector::eraseRange (Validates an owner/range pair, moves [last,end) down to first, shrinks end, and writes {first_or_owner, first} to out.)
extern void ext_0051F840(void* ecx, uint32_t* out, uint32_t owner, uint32_t first,
                         uint32_t owner_expected, uint32_t last);

// IAT slot for MSVCR80!_invalid_parameter_noinfo, called through a pointer when a range check fails.
extern void (*mem_00925134)(void);

// @name Vector::clear
// @class Vector
// @summary Validates begin <= end, then calls Vector::eraseRange(begin, end) so the vector's end is reset to begin.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_0051FEB0(void* self) {
    uint32_t self_addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    uint32_t end = lift_field<uint32_t>(self, 0x08);

    if (begin > end) {
        mem_00925134();
    }

    begin = lift_field<uint32_t>(self, 0x04);
    if (begin > lift_field<uint32_t>(self, 0x08)) {
        mem_00925134();
    }

    uint32_t out[2] = {0, 0};
    ext_0051F840(self, out, self_addr, begin, self_addr, end);
}
} // namespace lift_0044C500
} // namespace lift_0051FEB0

// [0x0051DF00] sub_0051DF00 (92 bytes)
namespace lift_0051DF00 {
// @name sub_0051DF00
// @summary Auto-lifted identical-shape clone of 0x00699810 (allocArray44_00699810).
namespace lift_00699810 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void* ext_006A5C62(uint32_t size);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
[[noreturn]] void ext_006A6DD2(void* pObject, const void* pThrowInfo);
// IAT slot 0x00925130: MSVCR80!std::exception::exception(const char* const&) (thiscall, called indirectly).
extern void (*mem_00925130)(void* self, const void* msgRef);

// @name allocArray44_00699810
// @summary Allocates an array of `count` 44-byte (0x2C) elements via the MFC80 allocator; throws if count*0x2C would overflow.
void* fn_0051DF00(uint32_t count) {
    uint32_t size = 0;
    if (count != 0) {
        if (0xFFFFFFFFu / count < 0x168u) {
            alignas(4) uint8_t exception[12] = {};
            const char* msg = nullptr;
            (*mem_00925130)(exception, &msg);
            const uint32_t vtable = 0x00928EC0u;
            std::memcpy(exception, &vtable, sizeof(vtable));
            ext_006A6DD2(exception, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009CDF94u)));
        }
    }
    size = count * 0x168u;
    return ext_006A5C62(size);
}
} // namespace lift_00699810
} // namespace lift_0051DF00

// [0x00519D50]
namespace lift_00519D50 {
// @name allocate_8byte_elements
// @summary Allocates an array of 8-byte elements with overflow check, throwing std::bad_alloc on overflow.


extern void* ext_006A5C62(uint32_t size);
extern void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
extern void (__thiscall *mem_00925130)(void* self, const char* const* msg);

extern void* fn_00519D50(uint32_t count) {
    if (count > 0) {
        if (0xFFFFFFFFu / count < 8u) {
            uint8_t exc[12];
            const char* msg = nullptr;
            mem_00925130(exc, &msg);
            *reinterpret_cast<uint32_t*>(exc) = 0x00928EC0u;
            ext_006A6DD2(exc, reinterpret_cast<void*>(0x009CDF94u));
            return nullptr;
        }
    } else {
        count = 0;
    }
    return ext_006A5C62(count * 8u);
}
} // namespace lift_00519D50

// [0x0051A210]
namespace lift_0051A210 {
extern uint32_t mem_00AEC728;
extern uint8_t mem_00AEC70C[];

extern void* ext_0066AD10(void* out_str, uint8_t flag);
extern int ext_006A6C87(void* fn);

// @name getStaticBoolString_0051A210
// @summary Lazily initializes a static string via ext_0066AD10, registers an atexit destructor, and returns its address.
void* fn_0051A210() {
    if ((mem_00AEC728 & 1u) == 0u) {
        mem_00AEC728 |= 1u;
        ext_0066AD10(mem_00AEC70C, static_cast<uint8_t>(0x00A4320Cu));
        ext_006A6C87(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00919FF0u)));
    }
    return mem_00AEC70C;
}
} // namespace lift_0051A210

// [0x0051A270]
namespace lift_0051A270 {
extern uint8_t mem_00AEC748[];
extern uint8_t mem_00AEC72C[];

extern void* ext_0066AD10(void* out_str, uint8_t flag);
extern int ext_006A6C87(void* fn);

// @name getStaticBoolString_0051A270
// @summary Lazily initializes a static string via ext_0066AD10 and registers its atexit destructor.
void* fn_0051A270() {
    auto* guard = reinterpret_cast<uint32_t*>(mem_00AEC748);
    if ((*guard & 1u) == 0u) {
        *guard |= 1u;
        ext_0066AD10(mem_00AEC72C, static_cast<uint8_t>(0x00A43218u));
        ext_006A6C87(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00919FE0u)));
    }
    return mem_00AEC72C;
}
} // namespace lift_0051A270

// [0x0051A560]
namespace lift_0051A560 {
extern uint32_t mem_00AEC778;
extern uint8_t mem_00AEC75C[];

extern void* ext_0066AD10(void* out_str, uint8_t flag);
extern int ext_006A6C87(void* fn);

// @name initStaticBoolString
// @summary Initializes a static string via ext_0066AD10 once, registers its destructor with atexit, and returns it.
void* fn_0051A560() {
    if ((mem_00AEC778 & 1u) == 0) {
        mem_00AEC778 |= 1u;
        ext_0066AD10(mem_00AEC75C, static_cast<uint8_t>(0x00A43418u));
        ext_006A6C87(reinterpret_cast<void*>(0x0091A000u));
    }
    return mem_00AEC75C;
}
} // namespace lift_0051A560

// [0x0051E740] sub_0051E740 (130 bytes)
namespace lift_0051E740 {
// @name sub_0051E740
// @summary Auto-lifted identical-shape clone of 0x0054F210 (Unknown::CopyRangeAndDestroyTail_0054F210).
namespace lift_0054F210 {
// Known callee 0x0054F0D0: CopyRangeOf104ByteElements_0054F0D0 (Invokes the per-element copy routine over [begin, end) in 0x68-byte steps, writing to dest; returns dest + count*0x68.)
extern void* ext_0051E070(const uint8_t* begin, const uint8_t* end, uint8_t* dest);
// CRT invalid-parameter handler slot (IAT entry for _invalid_parameter_noinfo).
extern int mem_00925134;

// Thiscall with 5 stack args (ret 0x14). Arg1 is a hidden result pointer receiving two pointers.
// @name Unknown::CopyRangeAndDestroyTail_0054F210
// @class Unknown
// @summary Guards two checked iterator args, copies [srcBegin, this->end) to dest via ext_0054F0D0, destroys the stale tail elements (virtual dtor with flag 0) and updates this->end; returns the pair {checked first, srcBegin} (or {arg2, arg3} when no copy is needed).
// @field Unknown +0x08 uint8_t* elemEnd
void fn_0051E740(void* self, uint8_t** out, uint8_t* arg2, uint8_t* arg3, uint8_t* arg4, uint8_t* arg5) {
    uint8_t*& end = lift_field<uint8_t*>(self, 0x08);

    // Checked-iterator guard: arg2 must be non-null and equal to arg4.
    // On failure the CRT invalid-parameter handler is invoked and execution continues.
    if (arg2 == nullptr || arg2 != arg4) {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    }

    // Nothing to copy when dest == srcBegin.
    if (arg3 == arg5) {
        out[0] = arg2;
        out[1] = arg3;
        return;
    }

    // The original clears the low byte of the arg4 stack slot (byte store of 0) and reads it back
    // as a dword; that value is both passed to the copy helper and returned as the first pointer.
    uint8_t* const firstOut = reinterpret_cast<uint8_t*>(
        reinterpret_cast<uintptr_t>(arg4) & ~static_cast<uintptr_t>(0xFF));

    // Copy [srcBegin, end) to arg3. The helper returns the new end of the destination range.
    uint8_t* const newEnd = static_cast<uint8_t*>(ext_0051E070(arg5, end, arg3));

    // Destroy the stale tail [newEnd, end) in 0x68-byte steps via vtable slot 0 (flag 0 = no free).
    for (uint8_t* p = newEnd; p != end; p += 0x168) {
        void** vtbl = *reinterpret_cast<void***>(p);
        reinterpret_cast<void (*)(void*, int)>(vtbl[0])(p, 0);
    }

    end = newEnd;
    out[0] = firstOut;
    out[1] = arg5;
}
} // namespace lift_0054F210
} // namespace lift_0051E740

// [0x00511960] sub_00511960 (138 bytes)
namespace lift_00511960 {
// @name sub_00511960
// @summary Auto-lifted identical-shape clone of 0x0058F770 (descriptiveName_0058F770).
namespace lift_0058F770 {
// Known callee 0x0046C3C0: DerivedException::DerivedException (thiscall, no stack args)
extern void* __thiscall ext_0046C3C0(void* self);
// Known callee 0x0058F550: descriptiveName_0058F550 (stdcall, one stack arg, returns it).
// The asm passes the object in ecx (the callee reads ecx), so declare it fastcall:
// ecx = obj, edx = unused, one stack arg = out. Callee's `ret 4` matches.
extern void* __fastcall ext_00511330(void* obj, void* unused_edx, void* out);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (cdecl: exc object, throw info)
extern void ext_006A6DD2(void* exc, const void* throwInfo);
// MSVCP80 basic_string<char> copy-ctor / dtor import slots (function pointers stored in .rdata).
extern int mem_00924FE0;
extern int mem_00924FF4;

namespace {

// MSVCP80 basic_string(const basic_string&), thiscall, via import slot mem_00924FE0.
using StringCopyCtorFn = void* (__thiscall*)(void* self, const void* src);
// MSVCP80 ~basic_string(), thiscall, via import slot mem_00924FF4.
using StringDtorFn = void (__thiscall*)(void* self);

void* lift_string_copy_ctor(void* self, const void* src) {
    auto fn = reinterpret_cast<StringCopyCtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FE0)));
    return fn(self, src);
}

void lift_string_dtor(void* self) {
    auto fn = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    fn(self);
}

// Null-object path: build the DerivedException in a frame-local buffer and throw it.
// The asm's frame places this object at esp+0x20 .. esp+0x4C (0x2C bytes).
[[noreturn]] void lift_throw_derived_exception() {
    alignas(8) unsigned char exc[0x2C];
    ext_0046C3C0(exc);
#ifdef _MSC_VER
    // Throw info constant pushed as the second argument of the asm call.
    ext_006A6DD2(exc, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009DEC1Cu)));
#endif
    std::abort();  // _CxxThrowException does not return; unreachable on MSVC.
}

}  // namespace

// @name descriptiveName_0058F770
// @summary Throws DerivedException if obj is null; otherwise fills a temp string via ext_0058F550(obj), copy-constructs *out from it, destroys the temp, and returns out.
void* __stdcall fn_00511960(void* out, void* obj) {
    if (obj == nullptr) {
        lift_throw_derived_exception();
    }

    // Temp std::string on the frame (asm esp+4 .. esp+0x20, 0x1C bytes).
    alignas(8) unsigned char tmp[0x1C];
    void* src = ext_00511330(obj, nullptr, tmp);
    lift_string_copy_ctor(out, src);
    lift_string_dtor(tmp);
    return out;
}
} // namespace lift_0058F770
} // namespace lift_00511960

// [0x005119F0] sub_005119F0 (138 bytes)
namespace lift_005119F0 {
// @name sub_005119F0
// @summary Auto-lifted identical-shape clone of 0x0058F770 (descriptiveName_0058F770).
namespace lift_0058F770 {
// Known callee 0x0046C3C0: DerivedException::DerivedException (thiscall, no stack args)
extern void* __thiscall ext_0046C3C0(void* self);
// Known callee 0x0058F550: descriptiveName_0058F550 (stdcall, one stack arg, returns it).
// The asm passes the object in ecx (the callee reads ecx), so declare it fastcall:
// ecx = obj, edx = unused, one stack arg = out. Callee's `ret 4` matches.
extern void* __fastcall ext_00511410(void* obj, void* unused_edx, void* out);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (cdecl: exc object, throw info)
extern void ext_006A6DD2(void* exc, const void* throwInfo);
// MSVCP80 basic_string<char> copy-ctor / dtor import slots (function pointers stored in .rdata).
extern int mem_00924FE0;
extern int mem_00924FF4;

namespace {

// MSVCP80 basic_string(const basic_string&), thiscall, via import slot mem_00924FE0.
using StringCopyCtorFn = void* (__thiscall*)(void* self, const void* src);
// MSVCP80 ~basic_string(), thiscall, via import slot mem_00924FF4.
using StringDtorFn = void (__thiscall*)(void* self);

void* lift_string_copy_ctor(void* self, const void* src) {
    auto fn = reinterpret_cast<StringCopyCtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FE0)));
    return fn(self, src);
}

void lift_string_dtor(void* self) {
    auto fn = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    fn(self);
}

// Null-object path: build the DerivedException in a frame-local buffer and throw it.
// The asm's frame places this object at esp+0x20 .. esp+0x4C (0x2C bytes).
[[noreturn]] void lift_throw_derived_exception() {
    alignas(8) unsigned char exc[0x2C];
    ext_0046C3C0(exc);
#ifdef _MSC_VER
    // Throw info constant pushed as the second argument of the asm call.
    ext_006A6DD2(exc, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009DEC1Cu)));
#endif
    std::abort();  // _CxxThrowException does not return; unreachable on MSVC.
}

}  // namespace

// @name descriptiveName_0058F770
// @summary Throws DerivedException if obj is null; otherwise fills a temp string via ext_0058F550(obj), copy-constructs *out from it, destroys the temp, and returns out.
void* __stdcall fn_005119F0(void* out, void* obj) {
    if (obj == nullptr) {
        lift_throw_derived_exception();
    }

    // Temp std::string on the frame (asm esp+4 .. esp+0x20, 0x1C bytes).
    alignas(8) unsigned char tmp[0x1C];
    void* src = ext_00511410(obj, nullptr, tmp);
    lift_string_copy_ctor(out, src);
    lift_string_dtor(tmp);
    return out;
}
} // namespace lift_0058F770
} // namespace lift_005119F0

// [0x00515180] sub_00515180 (114 bytes)
namespace lift_00515180 {
// @name sub_00515180
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00511A80();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00515180(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00511A80();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00515180

// [0x00515200] sub_00515200 (114 bytes)
namespace lift_00515200 {
// @name sub_00515200
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00511AE0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00515200(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00511AE0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00515200

// [0x00515280] sub_00515280 (114 bytes)
namespace lift_00515280 {
// @name sub_00515280
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00511B40();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00515280(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00511B40();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00515280

// [0x00515300] sub_00515300 (114 bytes)
namespace lift_00515300 {
// @name sub_00515300
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00511BA0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00515300(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00511BA0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00515300

// [0x00515380] sub_00515380 (114 bytes)
namespace lift_00515380 {
// @name sub_00515380
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00511C00();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00515380(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00511C00();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00515380

// [0x00515400] sub_00515400 (114 bytes)
namespace lift_00515400 {
// @name sub_00515400
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00511C60();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00515400(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00511C60();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00515400

// [0x00515480] sub_00515480 (114 bytes)
namespace lift_00515480 {
// @name sub_00515480
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00511CC0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00515480(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00511CC0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00515480

// [0x00515500] sub_00515500 (114 bytes)
namespace lift_00515500 {
// @name sub_00515500
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00511D20();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00515500(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00511D20();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00515500

// [0x00515580] sub_00515580 (114 bytes)
namespace lift_00515580 {
// @name sub_00515580
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00511D80();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00515580(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00511D80();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00515580

// [0x00515600] sub_00515600 (114 bytes)
namespace lift_00515600 {
// @name sub_00515600
// @summary Auto-lifted identical-shape clone of 0x0048C1A0 (InvokeWithStaticInitAndStringArg).
namespace lift_0048C1A0 {
// Known callee 0x00487ED0: EnsureStaticInit_00487ED0 (One-time guarded init of the global at mem_00AD9DEC; returns the address of the global.)
extern uint32_t ext_00511DE0();
extern void ext_00475960(uint32_t self_ecx, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00924FE4; // std::string(const char*) ctor thunk (IAT slot)
extern uint32_t mem_00924FF4; // std::string dtor thunk (IAT slot)

using std_string_ctor_fn = void (__thiscall*)(uint32_t, const char*);
using std_string_dtor_fn = void (__thiscall*)(uint32_t);

// @name InvokeWithStaticInitAndStringArg
// @class Unknown
// @summary Takes a const char* name, builds a temporary std::string from it, and calls ext_00475960 with (*this, &str, &static_init_slot, 1).
// @field Unknown +0x00 uint32_t field_0x00
extern void fn_00515600(uint32_t this_ptr, uint32_t arg0) {
    // Static-init global address, held in a local slot whose address is passed on.
    uint32_t init_slot = ext_00511DE0();
    uint32_t init_slot_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&init_slot));

    // Temporary std::string built from the caller-supplied C string.
    uint8_t str_buf[0x20];
    uint32_t str_ptr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(str_buf));
    reinterpret_cast<std_string_ctor_fn>(static_cast<uintptr_t>(mem_00924FE4))(
        str_ptr, reinterpret_cast<const char*>(static_cast<uintptr_t>(arg0)));

    // ECX for the thiscall is the first dword of *this.
    uint32_t self_ecx = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(this_ptr));
    ext_00475960(self_ecx, str_ptr, init_slot_ptr, 1);

    reinterpret_cast<std_string_dtor_fn>(static_cast<uintptr_t>(mem_00924FF4))(str_ptr);
}
} // namespace lift_0048C1A0
} // namespace lift_00515600

// [0x00515680] sub_00515680 (140 bytes)
namespace lift_00515680 {
// @name sub_00515680
// @summary Auto-lifted identical-shape clone of 0x00476430 (Unknown::lookupStringKeyedValue).
namespace lift_00476430 {
// Known callee 0x00474F00: sub_00474F00 (thiscall on this+0x18; takes (std::string* str, uint32 key); returns a pointer used as the receiver of the follow-up assign import)
extern void* ext_00474F00(void* self, void* str, uint32_t key);
// Known callee 0x00476360: sub_00476360 (thiscall on this+0x08; takes (std::string* str); returns a 32-bit value)
extern uint32_t ext_00476360(void* self, void* str);
// Known callee 0x00662610: sub_00662610 (cdecl helper that fills a std::string from a C string literal)
extern void ext_00662610(void* str, const char* text);
// Import slot holding the MSVCP80 thiscall target invoked on the object returned by ext_00474F00 (no stack args)
extern int mem_00924FD4;
// Import slot holding the MSVCP80 std::string destructor (thiscall, no stack args)
extern int mem_00924FF4;

// @name Unknown::lookupStringKeyedValue
// @class Unknown
// @summary Builds a std::string from literal 0x00A3273C, and when key is nonzero passes it through this+0x18 and the import at mem_00924FD4; then stores the 32-bit result of this+0x08 applied to the string into *out, destroys the string, and returns out.
// @field Unknown +0x08 subobject field_0x08
// @field Unknown +0x18 subobject field_0x18
uint32_t* fn_00515680(void* self, uint32_t* out, uint32_t key) {
    // Local std::string (28-byte MSVC 2005 layout) in the frame.
    alignas(8) uint8_t str[0x1C] = {};
    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0xA4275Cu)));

    if (key != 0) {
        void* resolved = ext_00474F00(static_cast<uint8_t*>(self) + 0x18, str, key);

        using ThisOnlyFn = void (__thiscall*)(void*);
        auto assign = reinterpret_cast<ThisOnlyFn>(
            static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FD4)));
        assign(resolved);
    }

    uint32_t value = ext_00476360(static_cast<uint8_t*>(self) + 0x08, str);
    *out = value;

    using StringDtorFn = void (__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(str);

    return out;
}
} // namespace lift_00476430
} // namespace lift_00515680

// [0x00516C90] sub_00516C90 (140 bytes)
namespace lift_00516C90 {
// @name sub_00516C90
// @summary Auto-lifted identical-shape clone of 0x00476430 (Unknown::lookupStringKeyedValue).
namespace lift_00476430 {
// Known callee 0x00474F00: sub_00474F00 (thiscall on this+0x18; takes (std::string* str, uint32 key); returns a pointer used as the receiver of the follow-up assign import)
extern void* ext_00474F00(void* self, void* str, uint32_t key);
// Known callee 0x00476360: sub_00476360 (thiscall on this+0x08; takes (std::string* str); returns a 32-bit value)
extern uint32_t ext_00476360(void* self, void* str);
// Known callee 0x00662610: sub_00662610 (cdecl helper that fills a std::string from a C string literal)
extern void ext_00662610(void* str, const char* text);
// Import slot holding the MSVCP80 thiscall target invoked on the object returned by ext_00474F00 (no stack args)
extern int mem_00924FD4;
// Import slot holding the MSVCP80 std::string destructor (thiscall, no stack args)
extern int mem_00924FF4;

// @name Unknown::lookupStringKeyedValue
// @class Unknown
// @summary Builds a std::string from literal 0x00A3273C, and when key is nonzero passes it through this+0x18 and the import at mem_00924FD4; then stores the 32-bit result of this+0x08 applied to the string into *out, destroys the string, and returns out.
// @field Unknown +0x08 subobject field_0x08
// @field Unknown +0x18 subobject field_0x18
uint32_t* fn_00516C90(void* self, uint32_t* out, uint32_t key) {
    // Local std::string (28-byte MSVC 2005 layout) in the frame.
    alignas(8) uint8_t str[0x1C] = {};
    ext_00662610(str, reinterpret_cast<const char*>(static_cast<uintptr_t>(0xA42EC4u)));

    if (key != 0) {
        void* resolved = ext_00474F00(static_cast<uint8_t*>(self) + 0x18, str, key);

        using ThisOnlyFn = void (__thiscall*)(void*);
        auto assign = reinterpret_cast<ThisOnlyFn>(
            static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FD4)));
        assign(resolved);
    }

    uint32_t value = ext_00476360(static_cast<uint8_t*>(self) + 0x08, str);
    *out = value;

    using StringDtorFn = void (__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(str);

    return out;
}
} // namespace lift_00476430
} // namespace lift_00516C90

// [0x00519DB0] sub_00519DB0 (60 bytes)
namespace lift_00519DB0 {
// @name sub_00519DB0
// @summary Auto-lifted identical-shape clone of 0x0041CDA0 (ExprParser::GetTypeNameInto).
namespace lift_0041CDA0 {
// 28-byte MSVC std::string (x86) passed by value on the stack.
struct StdString28 {
    unsigned char bytes[28];
};

extern void ext_0066AC90(void* dst, StdString28 value);
extern int mem_00925354;  // IAT: std::type_info::_name_internal_method
extern int mem_00924FE4;  // IAT: std::basic_string<char>::basic_string(const char*)
extern int mem_00A43100;  // global std::type_info object
extern int mem_00B5CE94;  // __type_info_node pointer constant
extern int mem_00924FD0;
extern int mem_00924FF4;

// @name ExprParser::GetTypeNameInto
// @summary Copy the type_info name of the global type object into dst via a temporary std::string, then return dst.
void* fn_00519DB0(void* dst) {
    using NameInternalMethodFn = const char* (__thiscall*)(void* self, const void* node);
    using StringCtorFn = void (__thiscall*)(void* self, const char* s);

    // Metadata-only refs (not accessed by this function's asm).
    (void)&mem_00924FD0;
    (void)&mem_00924FF4;

    auto name_internal = *reinterpret_cast<NameInternalMethodFn*>(&mem_00925354);
    const char* name = name_internal(reinterpret_cast<void*>(&mem_00A43100),
                                     reinterpret_cast<const void*>(&mem_00B5CE94));

    StdString28 str{};
    auto string_ctor = *reinterpret_cast<StringCtorFn*>(&mem_00924FE4);
    string_ctor(static_cast<void*>(&str), name);

    ext_0066AC90(dst, str);
    return dst;
}
} // namespace lift_0041CDA0
} // namespace lift_00519DB0

// [0x00516FF0] sub_00516FF0 (117 bytes)
namespace lift_00516FF0 {
// @name sub_00516FF0
// @summary Auto-lifted identical-shape clone of 0x0049CF60 (NewAndInitDynCastObject).
namespace lift_0049CF60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (cdecl allocator, called with size 0x28)
extern void* ext_006A5C62(size_t size);
// Known callee 0x0049B400: Unknown::InitDynCastFields (thiscall-style: self in ecx, four stack args)
extern void* ext_00516EF0(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x00665870: sub_00665870 (returns global int32 value from mem_00B59420)
extern int32_t ext_00665870(void);
// Known callee 0x00666670: sub_00666670 (292 bytes; signature not recovered, modeled as thiscall with one stack arg)
extern uint32_t ext_00666670(void* self, uint32_t arg);

// @name NewAndInitDynCastObject
// @summary Allocates a 0x28-byte object; if allocation succeeds, initializes it via InitDynCastFields with (self, a1, a2, a3), then passes the result and the global value from ext_00665870 to ext_00666670.
// (No direct field accesses on self; self is only forwarded as an argument, so no @field lines.)
uint32_t fn_00516FF0(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    void* obj = ext_006A5C62(0x28);

    uint32_t result = 0;
    if (obj != nullptr) {
        void* init = ext_00516EF0(obj,
                                  static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)),
                                  a1, a2, a3);
        result = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(init));
    }

    int32_t global = ext_00665870();
    void* ctx = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(global)));
    return ext_00666670(ctx, result);
}
} // namespace lift_0049CF60
} // namespace lift_00516FF0

// [0x00517890] sub_00517890 (126 bytes)
namespace lift_00517890 {
// @name sub_00517890
// @summary Auto-lifted identical-shape clone of 0x0049EE60 (ConstructAndRegister_0049EE60).
namespace lift_0049EE60 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with one size argument (0x28) and its result is null-checked: allocation-style.
extern void* ext_006A5C62(uint32_t size);
// Known callee 0x0049E930: sub_0049E930 (326 bytes)
// Thiscall: ecx = obj, then 5 stack args (outer this, a1..a4).
extern void* ext_00517600(void* obj, void* outer, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);
// Known callee 0x00665870: sub_00665870 (Returns global int32 value from mem_00B59420.)
extern int32_t ext_00665870(void);
// Known callee 0x00666670: sub_00666670 (292 bytes)
// Thiscall: ecx = int32 from ext_00665870, one stack arg (result of ext_0049E930 or null).
extern void ext_00666670(int32_t self, void* result);
// SEH scope table referenced by the prolog (push 0x008A7A5B).
extern int mem_008A7A5B;

// @name ConstructAndRegister_0049EE60
// @summary Allocates a 0x28-byte object, constructs it via sub_0049E930 when allocation succeeds, then calls sub_00665870/sub_00666670 and returns the second argument.
// Note: the SEH frame (fs:[0] push/restore and trylevel bookkeeping) is not reproduced; portable C++ has no equivalent.
uint32_t fn_00517890(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    (void)&mem_008A7A5B;  // SEH scope table address from prolog; frame itself omitted.

    void* obj = ext_006A5C62(0x28);
    void* result = nullptr;
    if (obj != nullptr) {
        result = ext_00517600(obj, self, a1, a2, a3, a4);
    }

    int32_t g = ext_00665870();
    ext_00666670(g, result);
    return a2;
}
} // namespace lift_0049EE60
} // namespace lift_00517890

// [0x0051C980] sub_0051C980 (128 bytes)
namespace lift_0051C980 {
// @name sub_0051C980
// @summary Auto-lifted identical-shape clone of 0x0041E4C0 (ClassFactory<CompoundSensor>::ctor).
namespace lift_0041E4C0 {
// Known callee 0x0041CDA0: ExprParser::GetTypeNameInto (Copy the type_info name of the global type object into dst via a temporary std::string, then return dst.)
extern void* ext_00519DB0(void* dst);
// Callee 0x0040ECB0 (166 bytes, unnamed): thiscall on global 0xB5962C with one stack argument.
extern void ext_0040ECB0(void* self, void* arg);
extern int mem_00952618;
extern int mem_00B5962C;
// IAT slot for MSVCP80 ~basic_string; the destructor is implicit below (metadata reference only).
extern int mem_00924FF4;

// @name ClassFactory<CompoundSensor>::ctor
// @class ClassFactory<CompoundSensor>
// @summary Installs the factory vtable, zeroes its state fields, then writes the type name of the global type object to the stream at 0xB5962C; returns this.
// @field ClassFactory<CompoundSensor> +0x00 uint32_t vptr
// @field ClassFactory<CompoundSensor> +0x08 uint32_t field_0x08
// @field ClassFactory<CompoundSensor> +0x0c uint32_t field_0x0c
// @field ClassFactory<CompoundSensor> +0x10 uint32_t field_0x10
// @field ClassFactory<CompoundSensor> +0x18 uint32_t field_0x18
// @field ClassFactory<CompoundSensor> +0x1c uint32_t field_0x1c
// @field ClassFactory<CompoundSensor> +0x20 uint32_t field_0x20
void* fn_0051C980(void* self) {
    // Vtable pointer: the original stores the immediate VA of the vtable (mem_0092DF84).
    lift_field<uint32_t>(self, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00952618));
    lift_field<uint32_t>(self, 0x08) = 0;
    lift_field<uint32_t>(self, 0x0c) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    lift_field<uint32_t>(self, 0x18) = 0;
    lift_field<uint32_t>(self, 0x1c) = 0;
    lift_field<uint32_t>(self, 0x20) = 0;

    // Temporary std::string filled by GetTypeNameInto; destroyed automatically at scope exit.
    std::string name;
    void* text = ext_00519DB0(&name);
    ext_0040ECB0(&mem_00B5962C, text);
    (void)&mem_00924FF4;

    return self;
}
} // namespace lift_0041E4C0
} // namespace lift_0051C980

// [0x0051D8E0] sub_0051D8E0 (90 bytes)
namespace lift_0051D8E0 {
// @name sub_0051D8E0
// @summary Auto-lifted identical-shape clone of 0x004C9860 (initStaticObjectOnce_004C9860).
namespace lift_004C9860 {
// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00AEC7B0;
// Static object (global) whose address is returned; also the `this` passed to ext_004C94E0.
extern DWORD mem_00AEC78C;

// __thiscall: ECX = &mem_00AE3D94, no stack arguments.
extern void __thiscall ext_0051C980(void* self);
// __cdecl: one stack argument (0x00918AE0), caller pops.
extern void ext_006A6C87(DWORD arg);

// @name initStaticObjectOnce_004C9860
// @summary One-time initializer for the static object at mem_00AE3D94: under a local SEH frame, runs ext_004C94E0 on the object and ext_006A6C87(0x918AE0) on first call, marks the guard bit, and returns the object's address.
void* fn_0051D8E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler (0x0088BD3E), [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x892F2Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00AEC7B0 & 1u) == 0) {
        mem_00AEC7B0 |= 1u;
        frame[2] = 0;
        ext_0051C980(&mem_00AEC78C);
        ext_006A6C87(0x91A030u);
    }

    mem_fs_0 = frame[0];
    return &mem_00AEC78C;
}
} // namespace lift_004C9860
} // namespace lift_0051D8E0

// [0x00517970] sub_00517970 (111 bytes)
namespace lift_00517970 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762; cdecl, one size argument, returns the allocated block or null).
extern void* __cdecl ext_006A5C62(uint32_t size);
// Known callee 0x00506030: Interpreter::Interpreter (thiscall constructor; runs the base-class initializer, sets the vtable, default-constructs the std::string at +0x04, zeroes the dwords at +0x24..+0x34; returns this).
extern void* __thiscall ext_00506030(void* self);
// Known callee 0x00517890: sub_00517890 (thiscall, four stack args; auto-lifted clone of 0x0049EE60).
extern uint32_t __thiscall ext_00517890(void* self, uint32_t a1, void* a2, uint32_t a3, uint32_t a4);

// @name AllocInterpreterAndForward_00517970
// @summary Allocates a 0x38-byte block; if the allocation succeeds it constructs an Interpreter in it, then forwards (arg1, interpreter-or-null, arg2, arg3) to ext_00517890 on this and returns that result. Takes three stack arguments.
uint32_t __thiscall fn_00517970(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* interp = nullptr;
    void* block = ext_006A5C62(0x38);
    if (block != nullptr) {
        interp = ext_00506030(block);
    }
    return ext_00517890(self, arg1, interp, arg2, arg3);
}
} // namespace lift_00517970

// [0x00518420] sub_00518420 (97 bytes)
namespace lift_00518420 {
// @name sub_00518420
// @summary Auto-lifted identical-shape clone of 0x00508210 (Vector_copyAssign).
namespace lift_00508210 {
// @name Vector_copyAssign
// @summary Clears destination vector, reserves space for source vector size, validates source iterators, and copies elements.
// @field Vector +0x04 void* begin
// @field Vector +0x08 void* end


extern void ext_0050BE20(void* self);
extern void ext_0050ED40(void* self, int32_t count);
extern void ext_00518390(void* out_iter, void* src1, void* src_begin, void* src2, void* src_end, void* dst);
extern void (*mem_00925134)();

void fn_00518420(void* dst, void* src) {
    ext_0050BE20(dst);

    uint8_t* src_bytes = reinterpret_cast<uint8_t*>(src);
    uint32_t begin_addr = *reinterpret_cast<uint32_t*>(src_bytes + 0x04);
    int32_t count = 0;
    if (begin_addr != 0) {
        uint32_t end_addr = *reinterpret_cast<uint32_t*>(src_bytes + 0x08);
        count = static_cast<int32_t>(end_addr - begin_addr) >> 2;
    }

    ext_0050ED40(dst, count);

    uint32_t end_val = *reinterpret_cast<uint32_t*>(src_bytes + 0x08);
    if (*reinterpret_cast<uint32_t*>(src_bytes + 0x04) > end_val) {
        mem_00925134();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(src_bytes + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(src_bytes + 0x08)) {
        mem_00925134();
    }

    uint32_t tmp_iter[2] = {0, 0};
    ext_00518390(
        tmp_iter,
        src,
        reinterpret_cast<void*>(static_cast<uintptr_t>(begin_val)),
        src,
        reinterpret_cast<void*>(static_cast<uintptr_t>(end_val)),
        dst
    );
}
} // namespace lift_00508210
} // namespace lift_00518420

// [0x00518B00]
namespace lift_00518B00 {
// @name unguardedPartition
// @summary Performs MSVC std::_Unguarded_partition (3-way quicksort partition) on a range of uint32_t indices using comparator pred.

struct UnguardedPartitionResult {
    uint32_t* first;
    uint32_t* second;
};

extern int __thiscall ext_00518550(void* self, uint32_t idxA, uint32_t idxB);
extern void __cdecl ext_005188A0(uint32_t* first, uint32_t* mid, uint32_t* lastMinusOne, void* pred);

UnguardedPartitionResult* __cdecl fn_00518B00(
    UnguardedPartitionResult* out,
    uint32_t* first,
    uint32_t* last,
    void* pred) {
    uint32_t* mid = first + ((last - first) / 2);
    ext_005188A0(first, mid, last - 1, pred);

    uint32_t* pfirst = mid;
    uint32_t* plast = pfirst + 1;

    while (first < pfirst
        && static_cast<uint8_t>(ext_00518550(&pred, *(pfirst - 1), *pfirst)) == 0
        && static_cast<uint8_t>(ext_00518550(&pred, *pfirst, *(pfirst - 1))) == 0) {
        --pfirst;
    }

    while (plast < last
        && static_cast<uint8_t>(ext_00518550(&pred, *plast, *pfirst)) == 0
        && static_cast<uint8_t>(ext_00518550(&pred, *pfirst, *plast)) == 0) {
        ++plast;
    }

    uint32_t* gfirst = plast;
    uint32_t* glast = pfirst;

    for (;;) {
        for (; gfirst < last; ++gfirst) {
            if (static_cast<uint8_t>(ext_00518550(&pred, *pfirst, *gfirst)) != 0) {
                continue;
            }
            if (static_cast<uint8_t>(ext_00518550(&pred, *gfirst, *pfirst)) != 0) {
                break;
            }
            std::swap(*plast++, *gfirst);
        }

        for (; first < glast; --glast) {
            if (static_cast<uint8_t>(ext_00518550(&pred, *(glast - 1), *pfirst)) != 0) {
                continue;
            }
            if (static_cast<uint8_t>(ext_00518550(&pred, *pfirst, *(glast - 1))) != 0) {
                break;
            }
            std::swap(*--pfirst, *(glast - 1));
        }

        if (glast == first) {
            if (gfirst == last) {
                break;
            }
            if (plast != gfirst) {
                std::swap(*pfirst, *plast);
            }
            std::swap(*pfirst, *gfirst);
            ++plast;
            ++pfirst;
            ++gfirst;
        } else {
            --glast;
            if (gfirst == last) {
                --pfirst;
                if (glast != pfirst) {
                    std::swap(*glast, *pfirst);
                }
                --plast;
                std::swap(*pfirst, *plast);
            } else {
                std::swap(*gfirst, *glast);
                ++gfirst;
            }
        }
    }

    out->first = pfirst;
    out->second = plast;
    return out;
}
} // namespace lift_00518B00

// [0x00518D70] sub_00518D70 (438 bytes)
namespace lift_00518D70 {
// @name sub_00518D70
// @summary Auto-lifted identical-shape clone of 0x00518B00 (unguardedPartition).
namespace lift_00518B00 {
// @name unguardedPartition
// @summary Performs MSVC std::_Unguarded_partition (3-way quicksort partition) on a range of uint32_t indices using comparator pred.

struct UnguardedPartitionResult {
    uint32_t* first;
    uint32_t* second;
};

extern int __thiscall ext_005185D0(void* self, uint32_t idxA, uint32_t idxB);
extern void __cdecl ext_00518950(uint32_t* first, uint32_t* mid, uint32_t* lastMinusOne, void* pred);

UnguardedPartitionResult* __cdecl fn_00518D70(
    UnguardedPartitionResult* out,
    uint32_t* first,
    uint32_t* last,
    void* pred) {
    uint32_t* mid = first + ((last - first) / 2);
    ext_00518950(first, mid, last - 1, pred);

    uint32_t* pfirst = mid;
    uint32_t* plast = pfirst + 1;

    while (first < pfirst
        && static_cast<uint8_t>(ext_005185D0(&pred, *(pfirst - 1), *pfirst)) == 0
        && static_cast<uint8_t>(ext_005185D0(&pred, *pfirst, *(pfirst - 1))) == 0) {
        --pfirst;
    }

    while (plast < last
        && static_cast<uint8_t>(ext_005185D0(&pred, *plast, *pfirst)) == 0
        && static_cast<uint8_t>(ext_005185D0(&pred, *pfirst, *plast)) == 0) {
        ++plast;
    }

    uint32_t* gfirst = plast;
    uint32_t* glast = pfirst;

    for (;;) {
        for (; gfirst < last; ++gfirst) {
            if (static_cast<uint8_t>(ext_005185D0(&pred, *pfirst, *gfirst)) != 0) {
                continue;
            }
            if (static_cast<uint8_t>(ext_005185D0(&pred, *gfirst, *pfirst)) != 0) {
                break;
            }
            std::swap(*plast++, *gfirst);
        }

        for (; first < glast; --glast) {
            if (static_cast<uint8_t>(ext_005185D0(&pred, *(glast - 1), *pfirst)) != 0) {
                continue;
            }
            if (static_cast<uint8_t>(ext_005185D0(&pred, *pfirst, *(glast - 1))) != 0) {
                break;
            }
            std::swap(*--pfirst, *(glast - 1));
        }

        if (glast == first) {
            if (gfirst == last) {
                break;
            }
            if (plast != gfirst) {
                std::swap(*pfirst, *plast);
            }
            std::swap(*pfirst, *gfirst);
            ++plast;
            ++pfirst;
            ++gfirst;
        } else {
            --glast;
            if (gfirst == last) {
                --pfirst;
                if (glast != pfirst) {
                    std::swap(*glast, *pfirst);
                }
                --plast;
                std::swap(*pfirst, *plast);
            } else {
                std::swap(*gfirst, *glast);
                ++gfirst;
            }
        }
    }

    out->first = pfirst;
    out->second = plast;
    return out;
}
} // namespace lift_00518B00
} // namespace lift_00518D70

// [0x00510D60] sub_00510D60 (329 bytes)
namespace lift_00510D60 {
// @name sub_00510D60
// @summary Auto-lifted identical-shape clone of 0x004BE950 (CreateObjectFromDynamicCast).
namespace lift_004BE950 {
// @name CreateObjectFromDynamicCast
// @summary Dynamically casts arg0 and constructs a 0x30-byte object, or constructs a default one if null, or throws StringExceptionWithMember on cast failure.


void* ext_006A6E9E(void* inptr, int32_t vf_delta, uint32_t src_type, uint32_t target_type, int32_t is_reference);
void* ext_006A5C62(uint32_t size);
void* ext_00510B00(void* self, void* arg1);
void* ext_00519100(void* self);
void* ext_0050E3B0(void* out_str);
void* ext_00403560(void* self, const void* src);
[[noreturn]] void ext_006A6DD2(void* exc, uint32_t throw_info);

extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FD0;

void* fn_00510D60(void* arg0) {
    if (arg0 == nullptr) {
        void* obj = ext_006A5C62(0x70);
        if (obj != nullptr) {
            return ext_00519100(obj);
        }
        return nullptr;
    }

    void* casted = ext_006A6E9E(arg0, 0, 0xA41B00, 0xA41E00, 0);
    if (casted != nullptr) {
        void* obj = ext_006A5C62(0x70);
        if (obj != nullptr) {
            return ext_00510B00(obj, casted);
        }
        return nullptr;
    }

    uint8_t tmp_str1[0x20];
    uint8_t tmp_str2[0x20];
    uint8_t tmp_str3[0x18];
    uint8_t exc[0x20];

    void* s1 = ext_0050E3B0(tmp_str1);
    using StrCtorFn = void* (__thiscall*)(void*, uint32_t);
    using StrConcatFn = void* (__cdecl*)(void*, void*, void*);
    void* s2 = reinterpret_cast<StrCtorFn>(mem_00924FE4)(tmp_str2, 0x0092F9D4);
    void* s3 = reinterpret_cast<StrConcatFn>(mem_00924FD0)(tmp_str3, s2, s1);
    ext_00403560(exc, s3);
    ext_006A6DD2(exc, 0x009D47A4);
}
} // namespace lift_004BE950
} // namespace lift_00510D60

// [0x0051CA00] sub_0051CA00 (329 bytes)
namespace lift_0051CA00 {
// @name sub_0051CA00
// @summary Auto-lifted identical-shape clone of 0x004BE950 (CreateObjectFromDynamicCast).
namespace lift_004BE950 {
// @name CreateObjectFromDynamicCast
// @summary Dynamically casts arg0 and constructs a 0x30-byte object, or constructs a default one if null, or throws StringExceptionWithMember on cast failure.


void* ext_006A6E9E(void* inptr, int32_t vf_delta, uint32_t src_type, uint32_t target_type, int32_t is_reference);
void* ext_006A5C62(uint32_t size);
void* ext_0051C640(void* self, void* arg1);
void* ext_0051C5A0(void* self);
void* ext_00519DB0(void* out_str);
void* ext_00403560(void* self, const void* src);
[[noreturn]] void ext_006A6DD2(void* exc, uint32_t throw_info);

extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FD0;

void* fn_0051CA00(void* arg0) {
    if (arg0 == nullptr) {
        void* obj = ext_006A5C62(0x44);
        if (obj != nullptr) {
            return ext_0051C5A0(obj);
        }
        return nullptr;
    }

    void* casted = ext_006A6E9E(arg0, 0, 0xA43100, 0xA4317C, 0);
    if (casted != nullptr) {
        void* obj = ext_006A5C62(0x44);
        if (obj != nullptr) {
            return ext_0051C640(obj, casted);
        }
        return nullptr;
    }

    uint8_t tmp_str1[0x20];
    uint8_t tmp_str2[0x20];
    uint8_t tmp_str3[0x18];
    uint8_t exc[0x20];

    void* s1 = ext_00519DB0(tmp_str1);
    using StrCtorFn = void* (__thiscall*)(void*, uint32_t);
    using StrConcatFn = void* (__cdecl*)(void*, void*, void*);
    void* s2 = reinterpret_cast<StrCtorFn>(mem_00924FE4)(tmp_str2, 0x0092F9D4);
    void* s3 = reinterpret_cast<StrConcatFn>(mem_00924FD0)(tmp_str3, s2, s1);
    ext_00403560(exc, s3);
    ext_006A6DD2(exc, 0x009D47A4);
}
} // namespace lift_004BE950
} // namespace lift_0051CA00

// [0x0051CFE0] sub_0051CFE0 (329 bytes)
namespace lift_0051CFE0 {
// @name sub_0051CFE0
// @summary Auto-lifted identical-shape clone of 0x004BE950 (CreateObjectFromDynamicCast).
namespace lift_004BE950 {
// @name CreateObjectFromDynamicCast
// @summary Dynamically casts arg0 and constructs a 0x30-byte object, or constructs a default one if null, or throws StringExceptionWithMember on cast failure.


void* ext_006A6E9E(void* inptr, int32_t vf_delta, uint32_t src_type, uint32_t target_type, int32_t is_reference);
void* ext_006A5C62(uint32_t size);
void* ext_0051CD30(void* self, void* arg1);
void* ext_0051CCC0(void* self);
void* ext_00519DB0(void* out_str);
void* ext_00403560(void* self, const void* src);
[[noreturn]] void ext_006A6DD2(void* exc, uint32_t throw_info);

extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FD0;

void* fn_0051CFE0(void* arg0) {
    if (arg0 == nullptr) {
        void* obj = ext_006A5C62(0x64);
        if (obj != nullptr) {
            return ext_0051CCC0(obj);
        }
        return nullptr;
    }

    void* casted = ext_006A6E9E(arg0, 0, 0xA43100, 0xA33760, 0);
    if (casted != nullptr) {
        void* obj = ext_006A5C62(0x64);
        if (obj != nullptr) {
            return ext_0051CD30(obj, casted);
        }
        return nullptr;
    }

    uint8_t tmp_str1[0x20];
    uint8_t tmp_str2[0x20];
    uint8_t tmp_str3[0x18];
    uint8_t exc[0x20];

    void* s1 = ext_00519DB0(tmp_str1);
    using StrCtorFn = void* (__thiscall*)(void*, uint32_t);
    using StrConcatFn = void* (__cdecl*)(void*, void*, void*);
    void* s2 = reinterpret_cast<StrCtorFn>(mem_00924FE4)(tmp_str2, 0x0092F9D4);
    void* s3 = reinterpret_cast<StrConcatFn>(mem_00924FD0)(tmp_str3, s2, s1);
    ext_00403560(exc, s3);
    ext_006A6DD2(exc, 0x009D47A4);
}
} // namespace lift_004BE950
} // namespace lift_0051CFE0

// [0x00510EB0] sub_00510EB0 (211 bytes)
namespace lift_00510EB0 {
// @name sub_00510EB0
// @summary Auto-lifted identical-shape clone of 0x00429350 (Map::InsertUnique_00429350).
namespace lift_00429350 {
// @name Map::InsertUnique_00429350
// @class Map
// @summary Inserts a (string, uint32_t) pair into a sorted unique vector; optionally throws on duplicate.

    void ext_004142E0(void* self, void* a1, void* a2);
    void* ext_004276B0(void* dst, const void* src);
    void* ext_0050FC70();
    bool ext_005CD120(void* self, const void* value);
    void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
    extern uintptr_t mem_00924FE0;
    extern uintptr_t mem_00924FF4;
    extern uint32_t mem_00ACD9DC, mem_00ACD9E0, mem_00ACD9E4, mem_00ACD9E8;
    extern uint32_t mem_00ACD9EC, mem_00ACD9F0, mem_00ACD9F4, mem_00ACD9F8;
    extern uint32_t mem_00ACD9FC, mem_00ACDA00, mem_00ACDA04, mem_00ACDA08;
    extern uint32_t mem_00ACDA0C, mem_00ACDA10, mem_00ACDA14, mem_00ACDA18;
    extern uint32_t mem_00ACDA1C, mem_00ACDA20, mem_00ACDA24, mem_00ACDA28;
    extern uint32_t mem_00ACDA2C, mem_00ACDA30, mem_00ACDA34, mem_00ACDA38;
    extern uint32_t mem_00ACDA3C, mem_00ACDA40, mem_00ACDA44, mem_00ACDA48;
    extern uint32_t mem_00ACDA4C, mem_00ACDA50, mem_00ACDA54, mem_00ACDA58;
    extern uint32_t mem_00ACDA5C, mem_00ACDA60, mem_00ACDA64, mem_00ACDA68;
    extern uint32_t mem_00ACDA6C, mem_00ACDA70, mem_00ACDA74, mem_00ACDA78;
    extern uint32_t mem_00ACDA7C, mem_00ACDA80, mem_00ACDA84, mem_00ACDA88;
    extern uint32_t mem_00ACDA8C, mem_00ACDA90, mem_00ACDA94, mem_00ACDA98;
    extern uint32_t mem_00ACDA9C, mem_00ACDAA0, mem_00ACDAA4, mem_00ACDAA8;
    extern uint32_t mem_00ACDAAC;

bool fn_00510EB0(void* self, const void* key, const uint32_t* value, uint8_t throw_on_dup) {
    (void)&mem_00ACD9DC; (void)&mem_00ACD9E0; (void)&mem_00ACD9E4; (void)&mem_00ACD9E8;
    (void)&mem_00ACD9EC; (void)&mem_00ACD9F0; (void)&mem_00ACD9F4; (void)&mem_00ACD9F8;
    (void)&mem_00ACD9FC; (void)&mem_00ACDA00; (void)&mem_00ACDA04; (void)&mem_00ACDA08;
    (void)&mem_00ACDA0C; (void)&mem_00ACDA10; (void)&mem_00ACDA14; (void)&mem_00ACDA18;
    (void)&mem_00ACDA1C; (void)&mem_00ACDA20; (void)&mem_00ACDA24; (void)&mem_00ACDA28;
    (void)&mem_00ACDA2C; (void)&mem_00ACDA30; (void)&mem_00ACDA34; (void)&mem_00ACDA38;
    (void)&mem_00ACDA3C; (void)&mem_00ACDA40; (void)&mem_00ACDA44; (void)&mem_00ACDA48;
    (void)&mem_00ACDA4C; (void)&mem_00ACDA50; (void)&mem_00ACDA54; (void)&mem_00ACDA58;
    (void)&mem_00ACDA5C; (void)&mem_00ACDA60; (void)&mem_00ACDA64; (void)&mem_00ACDA68;
    (void)&mem_00ACDA6C; (void)&mem_00ACDA70; (void)&mem_00ACDA74; (void)&mem_00ACDA78;
    (void)&mem_00ACDA7C; (void)&mem_00ACDA80; (void)&mem_00ACDA84; (void)&mem_00ACDA88;
    (void)&mem_00ACDA8C; (void)&mem_00ACDA90; (void)&mem_00ACDA94; (void)&mem_00ACDA98;
    (void)&mem_00ACDA9C; (void)&mem_00ACDAA0; (void)&mem_00ACDAA4; (void)&mem_00ACDAA8;
    (void)&mem_00ACDAAC;

    struct Entry {
        uint8_t str[0x1C];
        uint32_t val;
    } entry;

    using CopyCtorFn = void(__thiscall*)(void*, const void*);
    using DtorFn = void(__thiscall*)(void*);

    reinterpret_cast<CopyCtorFn>(mem_00924FE0)(entry.str, key);
    entry.val = *value;

    bool inserted = ext_005CD120(self, &entry);
    reinterpret_cast<DtorFn>(mem_00924FF4)(entry.str);

    if (inserted) {
        return true;
    }

    if (throw_on_dup != 0) {
        uint8_t tmp_str[0x1C];
        uint8_t exc_obj[0x28];
        void* s1 = ext_004276B0(tmp_str, key);
        void* s2 = ext_0050FC70();
        ext_004142E0(exc_obj, s2, s1);
        ext_006A6DD2(exc_obj, reinterpret_cast<void*>(0x009D1278));
    }

    return false;
}
} // namespace lift_00429350
} // namespace lift_00510EB0

// [0x0051CF00] sub_0051CF00 (211 bytes)
namespace lift_0051CF00 {
// @name sub_0051CF00
// @summary Auto-lifted identical-shape clone of 0x00429350 (Map::InsertUnique_00429350).
namespace lift_00429350 {
// @name Map::InsertUnique_00429350
// @class Map
// @summary Inserts a (string, uint32_t) pair into a sorted unique vector; optionally throws on duplicate.

    void ext_004142E0(void* self, void* a1, void* a2);
    void* ext_004276B0(void* dst, const void* src);
    void* ext_0051A560();
    bool ext_005CD120(void* self, const void* value);
    void ext_006A6DD2(void* pExceptionObject, void* pThrowInfo);
    extern uintptr_t mem_00924FE0;
    extern uintptr_t mem_00924FF4;
    extern uint32_t mem_00ACD9DC, mem_00ACD9E0, mem_00ACD9E4, mem_00ACD9E8;
    extern uint32_t mem_00ACD9EC, mem_00ACD9F0, mem_00ACD9F4, mem_00ACD9F8;
    extern uint32_t mem_00ACD9FC, mem_00ACDA00, mem_00ACDA04, mem_00ACDA08;
    extern uint32_t mem_00ACDA0C, mem_00ACDA10, mem_00ACDA14, mem_00ACDA18;
    extern uint32_t mem_00ACDA1C, mem_00ACDA20, mem_00ACDA24, mem_00ACDA28;
    extern uint32_t mem_00ACDA2C, mem_00ACDA30, mem_00ACDA34, mem_00ACDA38;
    extern uint32_t mem_00ACDA3C, mem_00ACDA40, mem_00ACDA44, mem_00ACDA48;
    extern uint32_t mem_00ACDA4C, mem_00ACDA50, mem_00ACDA54, mem_00ACDA58;
    extern uint32_t mem_00ACDA5C, mem_00ACDA60, mem_00ACDA64, mem_00ACDA68;
    extern uint32_t mem_00ACDA6C, mem_00ACDA70, mem_00ACDA74, mem_00ACDA78;
    extern uint32_t mem_00ACDA7C, mem_00ACDA80, mem_00ACDA84, mem_00ACDA88;
    extern uint32_t mem_00ACDA8C, mem_00ACDA90, mem_00ACDA94, mem_00ACDA98;
    extern uint32_t mem_00ACDA9C, mem_00ACDAA0, mem_00ACDAA4, mem_00ACDAA8;
    extern uint32_t mem_00ACDAAC;

bool fn_0051CF00(void* self, const void* key, const uint32_t* value, uint8_t throw_on_dup) {
    (void)&mem_00ACD9DC; (void)&mem_00ACD9E0; (void)&mem_00ACD9E4; (void)&mem_00ACD9E8;
    (void)&mem_00ACD9EC; (void)&mem_00ACD9F0; (void)&mem_00ACD9F4; (void)&mem_00ACD9F8;
    (void)&mem_00ACD9FC; (void)&mem_00ACDA00; (void)&mem_00ACDA04; (void)&mem_00ACDA08;
    (void)&mem_00ACDA0C; (void)&mem_00ACDA10; (void)&mem_00ACDA14; (void)&mem_00ACDA18;
    (void)&mem_00ACDA1C; (void)&mem_00ACDA20; (void)&mem_00ACDA24; (void)&mem_00ACDA28;
    (void)&mem_00ACDA2C; (void)&mem_00ACDA30; (void)&mem_00ACDA34; (void)&mem_00ACDA38;
    (void)&mem_00ACDA3C; (void)&mem_00ACDA40; (void)&mem_00ACDA44; (void)&mem_00ACDA48;
    (void)&mem_00ACDA4C; (void)&mem_00ACDA50; (void)&mem_00ACDA54; (void)&mem_00ACDA58;
    (void)&mem_00ACDA5C; (void)&mem_00ACDA60; (void)&mem_00ACDA64; (void)&mem_00ACDA68;
    (void)&mem_00ACDA6C; (void)&mem_00ACDA70; (void)&mem_00ACDA74; (void)&mem_00ACDA78;
    (void)&mem_00ACDA7C; (void)&mem_00ACDA80; (void)&mem_00ACDA84; (void)&mem_00ACDA88;
    (void)&mem_00ACDA8C; (void)&mem_00ACDA90; (void)&mem_00ACDA94; (void)&mem_00ACDA98;
    (void)&mem_00ACDA9C; (void)&mem_00ACDAA0; (void)&mem_00ACDAA4; (void)&mem_00ACDAA8;
    (void)&mem_00ACDAAC;

    struct Entry {
        uint8_t str[0x1C];
        uint32_t val;
    } entry;

    using CopyCtorFn = void(__thiscall*)(void*, const void*);
    using DtorFn = void(__thiscall*)(void*);

    reinterpret_cast<CopyCtorFn>(mem_00924FE0)(entry.str, key);
    entry.val = *value;

    bool inserted = ext_005CD120(self, &entry);
    reinterpret_cast<DtorFn>(mem_00924FF4)(entry.str);

    if (inserted) {
        return true;
    }

    if (throw_on_dup != 0) {
        uint8_t tmp_str[0x1C];
        uint8_t exc_obj[0x28];
        void* s1 = ext_004276B0(tmp_str, key);
        void* s2 = ext_0051A560();
        ext_004142E0(exc_obj, s2, s1);
        ext_006A6DD2(exc_obj, reinterpret_cast<void*>(0x009D1278));
    }

    return false;
}
} // namespace lift_00429350
} // namespace lift_0051CF00

// [0x0051D940] sub_0051D940 (246 bytes)
namespace lift_0051D940 {
// @name sub_0051D940
// @summary Auto-lifted identical-shape clone of 0x004C98C0 (findAndInvokeFactory_004C98C0).
namespace lift_004C98C0 {
// @name findAndInvokeFactory_004C98C0
// @summary Looks up a factory/creator entry by key in the static registry, invokes it with arg2 if found, or throws/returns nullptr if not found.
// @field StaticRegistry +0x04 void* lookupTable


extern void* ext_0051D8E0(void);
extern void* __thiscall ext_00505D50(void* self, void* key);
extern void* ext_00519DB0(void* arg);
extern void ext_0066AC90(void* arg);
extern void* __thiscall ext_004C6F60(void* self, ...);
extern void* __thiscall ext_004C7200(void* self, const void* other);
extern void ext_006A6DD2(void);

extern void* mem_00924FE0;

using FactoryFn = void* (*)(void*);
using StringCopyCtor = void* (__thiscall*)(void* self, const void* other);

void* fn_0051D940(void* key, void* arg2, uint8_t throwIfNotFound) {
    void* registry = ext_0051D8E0();
    void* entry = ext_00505D50(static_cast<char*>(registry) + 0x04, key);
    if (entry != nullptr) {
        FactoryFn fn = *reinterpret_cast<FactoryFn*>(entry);
        return fn(arg2);
    }

    if (throwIfNotFound == 0) {
        return nullptr;
    }

    uint8_t keyCopy[0x1C]{};
    reinterpret_cast<StringCopyCtor>(mem_00924FE0)(keyCopy, key);

    uint8_t typeNameBuf[0x1C]{};
    uint8_t typeArgBuf[0x1C]{};
    ext_00519DB0(typeArgBuf);
    ext_0066AC90(typeNameBuf);

    uint8_t excTemp[0x60]{};
    void* excObj = ext_004C6F60(excTemp);

    uint8_t excCopy[0x60]{};
    ext_004C7200(excCopy, excObj);
    ext_006A6DD2();

    return nullptr;
}
} // namespace lift_004C98C0
} // namespace lift_0051D940

// [0x00510F90] sub_00510F90 (244 bytes)
namespace lift_00510F90 {
// @name sub_00510F90
// @summary Auto-lifted identical-shape clone of 0x004BF020 (RegisterNamedKey_004BF020).
namespace lift_004BF020 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uintptr_t flag);
// Known callee 0x004BE7C0: TypeInfoName_004BE7C0 (Fetches type_info name at 0xa328b0 (MSVC runtime), builds a temp std::string, passes the incoming esi-register value to ext_0066AC90, and returns it unchanged.)
extern void* ext_0050E3B0(void* out_str);
extern void* ext_006798D0(void* a, void* b);
extern void ext_006790C0(void* self);
// Known callee 0x004BEFC0: initOnceAndGetStaticObject (One-time initialization guard: on first call sets bit 0 of mem_00AE1D68, runs ext_004BEBE0 on the static object at mem_00AE1D44 and ext_006A6C87(0x9185E0); returns the static object's address.)
extern void* ext_0050F550();
// Known callee 0x004BED90: sub_004BED90 (Auto-lifted identical-shape clone of 0x00429350 (Map::InsertUnique_00429350).)
extern bool ext_00510EB0(void* self, const void* key, const uint32_t* value, uint8_t throw_on_dup);
extern void ext_0043A910(void* self, const void* key, const void* value, uint8_t throw_on_dup);

// MSVCP80 std::string imports, read through their IAT slots.
extern int mem_00924FEC; // basic_string::empty
extern int mem_00924FDC; // basic_string::operator=(const basic_string&)
extern int mem_00924FF4; // basic_string::~basic_string

// @name RegisterNamedKey_004BF020
// @summary Takes a by-value name key; if it is empty, fills it from a bool-formatted string, optionally appends the type_info name when the flag byte at +0x1C is set, then registers the key with the static registry (InsertUnique at +0x4 and a second insert at +0x14), using callback 0x004BE800.
void fn_00510F90(void* arg) {
    // Strings are 0x18-byte MSVCP80 std::string objects.
    alignas(8) uint8_t s0[0x18] = {};
    alignas(8) uint8_t s2[0x18] = {};

    // Build the default string from the constant at 0x00A32B50.
    ext_0066AD10(static_cast<void*>(s0), static_cast<uintptr_t>(0xA41DA8u));

    // if (arg.empty()) arg = s0;
    bool arg_empty = (*reinterpret_cast<bool (**)(void*)>(&mem_00924FEC))(arg);
    if (arg_empty) {
        (*reinterpret_cast<void* (**)(void*, const void*)>(&mem_00924FDC))(arg, static_cast<const void*>(s0));
    }

    // if (arg->flag) { append type_info name }
    if (lift_field<uint8_t>(arg, 0x1C) != 0) {
        void* name = ext_0050E3B0(static_cast<void*>(s2));
        void* dst = ext_006798D0(name, static_cast<void*>(s0));
        ext_006790C0(dst);
        (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(static_cast<void*>(s2));
    }

    // Static registry object.
    void* registry = ext_0050F550();

    // Callback pointer stored as the map value.
    uint32_t callback = 0x50FB20u;
    ext_00510EB0(static_cast<uint8_t*>(registry) + 0x04, arg, &callback, 1);
    ext_0043A910(static_cast<uint8_t*>(registry) + 0x14, arg, static_cast<const void*>(s0), 1);

    // Destroy the temporary and the by-value key.
    (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(static_cast<void*>(s0));
    (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(arg);
}
} // namespace lift_004BF020
} // namespace lift_00510F90

// [0x00511090] sub_00511090 (244 bytes)
namespace lift_00511090 {
// @name sub_00511090
// @summary Auto-lifted identical-shape clone of 0x004BF020 (RegisterNamedKey_004BF020).
namespace lift_004BF020 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uintptr_t flag);
// Known callee 0x004BE7C0: TypeInfoName_004BE7C0 (Fetches type_info name at 0xa328b0 (MSVC runtime), builds a temp std::string, passes the incoming esi-register value to ext_0066AC90, and returns it unchanged.)
extern void* ext_0050E3B0(void* out_str);
extern void* ext_006798D0(void* a, void* b);
extern void ext_006790C0(void* self);
// Known callee 0x004BEFC0: initOnceAndGetStaticObject (One-time initialization guard: on first call sets bit 0 of mem_00AE1D68, runs ext_004BEBE0 on the static object at mem_00AE1D44 and ext_006A6C87(0x9185E0); returns the static object's address.)
extern void* ext_0050F550();
// Known callee 0x004BED90: sub_004BED90 (Auto-lifted identical-shape clone of 0x00429350 (Map::InsertUnique_00429350).)
extern bool ext_00510EB0(void* self, const void* key, const uint32_t* value, uint8_t throw_on_dup);
extern void ext_0043A910(void* self, const void* key, const void* value, uint8_t throw_on_dup);

// MSVCP80 std::string imports, read through their IAT slots.
extern int mem_00924FEC; // basic_string::empty
extern int mem_00924FDC; // basic_string::operator=(const basic_string&)
extern int mem_00924FF4; // basic_string::~basic_string

// @name RegisterNamedKey_004BF020
// @summary Takes a by-value name key; if it is empty, fills it from a bool-formatted string, optionally appends the type_info name when the flag byte at +0x1C is set, then registers the key with the static registry (InsertUnique at +0x4 and a second insert at +0x14), using callback 0x004BE800.
void fn_00511090(void* arg) {
    // Strings are 0x18-byte MSVCP80 std::string objects.
    alignas(8) uint8_t s0[0x18] = {};
    alignas(8) uint8_t s2[0x18] = {};

    // Build the default string from the constant at 0x00A32B50.
    ext_0066AD10(static_cast<void*>(s0), static_cast<uintptr_t>(0xA41E00u));

    // if (arg.empty()) arg = s0;
    bool arg_empty = (*reinterpret_cast<bool (**)(void*)>(&mem_00924FEC))(arg);
    if (arg_empty) {
        (*reinterpret_cast<void* (**)(void*, const void*)>(&mem_00924FDC))(arg, static_cast<const void*>(s0));
    }

    // if (arg->flag) { append type_info name }
    if (lift_field<uint8_t>(arg, 0x1C) != 0) {
        void* name = ext_0050E3B0(static_cast<void*>(s2));
        void* dst = ext_006798D0(name, static_cast<void*>(s0));
        ext_006790C0(dst);
        (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(static_cast<void*>(s2));
    }

    // Static registry object.
    void* registry = ext_0050F550();

    // Callback pointer stored as the map value.
    uint32_t callback = 0x510D60u;
    ext_00510EB0(static_cast<uint8_t*>(registry) + 0x04, arg, &callback, 1);
    ext_0043A910(static_cast<uint8_t*>(registry) + 0x14, arg, static_cast<const void*>(s0), 1);

    // Destroy the temporary and the by-value key.
    (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(static_cast<void*>(s0));
    (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(arg);
}
} // namespace lift_004BF020
} // namespace lift_00511090

// [0x0051DA40] sub_0051DA40 (244 bytes)
namespace lift_0051DA40 {
// @name sub_0051DA40
// @summary Auto-lifted identical-shape clone of 0x004BF020 (RegisterNamedKey_004BF020).
namespace lift_004BF020 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uintptr_t flag);
// Known callee 0x004BE7C0: TypeInfoName_004BE7C0 (Fetches type_info name at 0xa328b0 (MSVC runtime), builds a temp std::string, passes the incoming esi-register value to ext_0066AC90, and returns it unchanged.)
extern void* ext_00519DB0(void* out_str);
extern void* ext_006798D0(void* a, void* b);
extern void ext_006790C0(void* self);
// Known callee 0x004BEFC0: initOnceAndGetStaticObject (One-time initialization guard: on first call sets bit 0 of mem_00AE1D68, runs ext_004BEBE0 on the static object at mem_00AE1D44 and ext_006A6C87(0x9185E0); returns the static object's address.)
extern void* ext_0051D8E0();
// Known callee 0x004BED90: sub_004BED90 (Auto-lifted identical-shape clone of 0x00429350 (Map::InsertUnique_00429350).)
extern bool ext_0051CF00(void* self, const void* key, const uint32_t* value, uint8_t throw_on_dup);
extern void ext_0043A910(void* self, const void* key, const void* value, uint8_t throw_on_dup);

// MSVCP80 std::string imports, read through their IAT slots.
extern int mem_00924FEC; // basic_string::empty
extern int mem_00924FDC; // basic_string::operator=(const basic_string&)
extern int mem_00924FF4; // basic_string::~basic_string

// @name RegisterNamedKey_004BF020
// @summary Takes a by-value name key; if it is empty, fills it from a bool-formatted string, optionally appends the type_info name when the flag byte at +0x1C is set, then registers the key with the static registry (InsertUnique at +0x4 and a second insert at +0x14), using callback 0x004BE800.
void fn_0051DA40(void* arg) {
    // Strings are 0x18-byte MSVCP80 std::string objects.
    alignas(8) uint8_t s0[0x18] = {};
    alignas(8) uint8_t s2[0x18] = {};

    // Build the default string from the constant at 0x00A32B50.
    ext_0066AD10(static_cast<void*>(s0), static_cast<uintptr_t>(0xA4317Cu));

    // if (arg.empty()) arg = s0;
    bool arg_empty = (*reinterpret_cast<bool (**)(void*)>(&mem_00924FEC))(arg);
    if (arg_empty) {
        (*reinterpret_cast<void* (**)(void*, const void*)>(&mem_00924FDC))(arg, static_cast<const void*>(s0));
    }

    // if (arg->flag) { append type_info name }
    if (lift_field<uint8_t>(arg, 0x1C) != 0) {
        void* name = ext_00519DB0(static_cast<void*>(s2));
        void* dst = ext_006798D0(name, static_cast<void*>(s0));
        ext_006790C0(dst);
        (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(static_cast<void*>(s2));
    }

    // Static registry object.
    void* registry = ext_0051D8E0();

    // Callback pointer stored as the map value.
    uint32_t callback = 0x51CA00u;
    ext_0051CF00(static_cast<uint8_t*>(registry) + 0x04, arg, &callback, 1);
    ext_0043A910(static_cast<uint8_t*>(registry) + 0x14, arg, static_cast<const void*>(s0), 1);

    // Destroy the temporary and the by-value key.
    (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(static_cast<void*>(s0));
    (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(arg);
}
} // namespace lift_004BF020
} // namespace lift_0051DA40

// [0x0051DB40] sub_0051DB40 (244 bytes)
namespace lift_0051DB40 {
// @name sub_0051DB40
// @summary Auto-lifted identical-shape clone of 0x004BF020 (RegisterNamedKey_004BF020).
namespace lift_004BF020 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uintptr_t flag);
// Known callee 0x004BE7C0: TypeInfoName_004BE7C0 (Fetches type_info name at 0xa328b0 (MSVC runtime), builds a temp std::string, passes the incoming esi-register value to ext_0066AC90, and returns it unchanged.)
extern void* ext_00519DB0(void* out_str);
extern void* ext_006798D0(void* a, void* b);
extern void ext_006790C0(void* self);
// Known callee 0x004BEFC0: initOnceAndGetStaticObject (One-time initialization guard: on first call sets bit 0 of mem_00AE1D68, runs ext_004BEBE0 on the static object at mem_00AE1D44 and ext_006A6C87(0x9185E0); returns the static object's address.)
extern void* ext_0051D8E0();
// Known callee 0x004BED90: sub_004BED90 (Auto-lifted identical-shape clone of 0x00429350 (Map::InsertUnique_00429350).)
extern bool ext_0051CF00(void* self, const void* key, const uint32_t* value, uint8_t throw_on_dup);
extern void ext_0043A910(void* self, const void* key, const void* value, uint8_t throw_on_dup);

// MSVCP80 std::string imports, read through their IAT slots.
extern int mem_00924FEC; // basic_string::empty
extern int mem_00924FDC; // basic_string::operator=(const basic_string&)
extern int mem_00924FF4; // basic_string::~basic_string

// @name RegisterNamedKey_004BF020
// @summary Takes a by-value name key; if it is empty, fills it from a bool-formatted string, optionally appends the type_info name when the flag byte at +0x1C is set, then registers the key with the static registry (InsertUnique at +0x4 and a second insert at +0x14), using callback 0x004BE800.
void fn_0051DB40(void* arg) {
    // Strings are 0x18-byte MSVCP80 std::string objects.
    alignas(8) uint8_t s0[0x18] = {};
    alignas(8) uint8_t s2[0x18] = {};

    // Build the default string from the constant at 0x00A32B50.
    ext_0066AD10(static_cast<void*>(s0), static_cast<uintptr_t>(0xA33760u));

    // if (arg.empty()) arg = s0;
    bool arg_empty = (*reinterpret_cast<bool (**)(void*)>(&mem_00924FEC))(arg);
    if (arg_empty) {
        (*reinterpret_cast<void* (**)(void*, const void*)>(&mem_00924FDC))(arg, static_cast<const void*>(s0));
    }

    // if (arg->flag) { append type_info name }
    if (lift_field<uint8_t>(arg, 0x1C) != 0) {
        void* name = ext_00519DB0(static_cast<void*>(s2));
        void* dst = ext_006798D0(name, static_cast<void*>(s0));
        ext_006790C0(dst);
        (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(static_cast<void*>(s2));
    }

    // Static registry object.
    void* registry = ext_0051D8E0();

    // Callback pointer stored as the map value.
    uint32_t callback = 0x51CFE0u;
    ext_0051CF00(static_cast<uint8_t*>(registry) + 0x04, arg, &callback, 1);
    ext_0043A910(static_cast<uint8_t*>(registry) + 0x14, arg, static_cast<const void*>(s0), 1);

    // Destroy the temporary and the by-value key.
    (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(static_cast<void*>(s0));
    (*reinterpret_cast<void (**)(void*)>(&mem_00924FF4))(arg);
}
} // namespace lift_004BF020
} // namespace lift_0051DB40

// [0x00511190] sub_00511190 (67 bytes)
namespace lift_00511190 {
// Known callee 0x0050F550: InitOnceGlobal_0050F550 (One-time guarded initializer for the global object at 0x00AEBD5C; returns the object's address.)
extern void* ext_0050F550();
// Known callee 0x00510F90: sub_00510F90 (Auto-lifted identical-shape clone of 0x004BF020 (RegisterNamedKey_004BF020).)
extern void ext_00510F90(void* arg);
// Known callee 0x00511090: sub_00511090 (Auto-lifted identical-shape clone of 0x004BF020 (RegisterNamedKey_004BF020).)
extern void ext_00511090(void* arg);
// MSVCP80 basic_string(const char*) constructor, read through its IAT slot.
extern int mem_00924FE4;

// @name RegisterNamedKeysFromLiterals_00511190
// @summary Ensures the static object is initialized, then builds two std::string temporaries from literal C strings at 0x00950AA8 and 0x009508AC and passes each to its registration routine (0x00510F90, 0x00511090).
// Strings are 0x18-byte MSVCP80 std::string objects.
void fn_00511190() {
    // Ensure the global object is initialized (return value unused by the caller).
    ext_0050F550();

    // First temporary: std::string(literal at 0x00950AA8), then register it.
    alignas(8) uint8_t s0[0x18] = {};
    (*reinterpret_cast<void (**)(void*, const char*)>(&mem_00924FE4))(
        static_cast<void*>(s0),
        reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00950AA8u)));
    ext_00510F90(static_cast<void*>(s0));

    // Second temporary: std::string(literal at 0x009508AC), then register it.
    alignas(8) uint8_t s1[0x18] = {};
    (*reinterpret_cast<void (**)(void*, const char*)>(&mem_00924FE4))(
        static_cast<void*>(s1),
        reinterpret_cast<const char*>(static_cast<uintptr_t>(0x009508ACu)));
    ext_00511090(static_cast<void*>(s1));
}
} // namespace lift_00511190

// [0x0051C440] sub_0051C440 (175 bytes)
namespace lift_0051C440 {
// @name sub_0051C440
// @summary Auto-lifted identical-shape clone of 0x00560920 (Vector::InsertSortedFloatKey_00560920).
namespace lift_00560920 {
// Known callee 0x0055F340: LowerBoundFloatKey16 (Binary search over 16-byte records keyed by their leading float; returns the first record whose key is not less than *key (std::lower_bound semantics).)
// Caller pushes five cdecl arguments (begin, end, key, a dword local, 0) and cleans up 0x14 bytes.
extern void* ext_0051A5C0(void* begin, void* end, const float* key, uint32_t unused_a, uint32_t unused_b);
// Known callee 0x00560270: sub_00560270 (Auto-lifted identical-shape clone of 0x00475710 (Vector::InsertAndGetIterator_00475710).)
extern void ext_004115D0(void* self, void* out);
// Import slot 0x00925134: MSVCR80!_invalid_parameter_noinfo (noreturn CRT assertion).
extern int mem_00925134;

// Portable stand-in for the CRT invalid-parameter trap reached through the IAT slot.
[[noreturn]] static void invalid_parameter_noinfo() {
    (void)&mem_00925134;
    std::abort();
}

// @name Vector::InsertSortedFloatKey_00560920
// @class Vector
// @summary Lower-bounds *key in [begin,end); if the hit is end or its float key is greater than *key, inserts via ext_00560270 and returns true, otherwise returns false.
// @field Vector +0x04 uint8_t* begin
// @field Vector +0x08 uint8_t* end
bool fn_0051C440(void* self, const float* key) {
    auto* base = static_cast<uint8_t*>(self);
    auto** begin_slot = reinterpret_cast<uint8_t**>(base + 0x04);
    auto** end_slot = reinterpret_cast<uint8_t**>(base + 0x08);

    // Range sanity checks: begin <= end.
    if (reinterpret_cast<uintptr_t>(*begin_slot) > reinterpret_cast<uintptr_t>(*end_slot))
        invalid_parameter_noinfo();
    uint8_t* begin = *begin_slot;
    if (reinterpret_cast<uintptr_t>(begin) > reinterpret_cast<uintptr_t>(*end_slot))
        invalid_parameter_noinfo();

    uint32_t flag_arg = 0;  // byte local zeroed in the prologue, passed as a dword
    uint8_t* found = static_cast<uint8_t*>(
        ext_0051A5C0(begin, *end_slot, key, flag_arg, 0));

    // Re-validate the range after the search.
    uint8_t* end = *end_slot;
    if (reinterpret_cast<uintptr_t>(*begin_slot) > reinterpret_cast<uintptr_t>(end))
        invalid_parameter_noinfo();
    if (!self)
        invalid_parameter_noinfo();

    if (found == end) {
        uint32_t slot = 0;
        ext_004115D0(self, &slot);
        return true;
    }

    if (!self)
        invalid_parameter_noinfo();
    if (reinterpret_cast<uintptr_t>(found) >= reinterpret_cast<uintptr_t>(*end_slot))
        invalid_parameter_noinfo();

    // Insert only when the found record's key is strictly greater than *key.
    // NaN compares false here, matching the x87 fcompp/test-ah-0x41 sequence.
    if (*reinterpret_cast<const float*>(found) > *key) {
        uint32_t slot = 0;
        ext_004115D0(self, &slot);
        return true;
    }
    return false;
}
} // namespace lift_00560920
} // namespace lift_0051C440

// [0x0051C8D0] sub_0051C8D0 (175 bytes)
namespace lift_0051C8D0 {
// @name sub_0051C8D0
// @summary Auto-lifted identical-shape clone of 0x00560920 (Vector::InsertSortedFloatKey_00560920).
namespace lift_00560920 {
// Known callee 0x0055F340: LowerBoundFloatKey16 (Binary search over 16-byte records keyed by their leading float; returns the first record whose key is not less than *key (std::lower_bound semantics).)
// Caller pushes five cdecl arguments (begin, end, key, a dword local, 0) and cleans up 0x14 bytes.
extern void* ext_0051A610(void* begin, void* end, const float* key, uint32_t unused_a, uint32_t unused_b);
// Known callee 0x00560270: sub_00560270 (Auto-lifted identical-shape clone of 0x00475710 (Vector::InsertAndGetIterator_00475710).)
extern void ext_0051C4F0(void* self, void* out);
// Import slot 0x00925134: MSVCR80!_invalid_parameter_noinfo (noreturn CRT assertion).
extern int mem_00925134;

// Portable stand-in for the CRT invalid-parameter trap reached through the IAT slot.
[[noreturn]] static void invalid_parameter_noinfo() {
    (void)&mem_00925134;
    std::abort();
}

// @name Vector::InsertSortedFloatKey_00560920
// @class Vector
// @summary Lower-bounds *key in [begin,end); if the hit is end or its float key is greater than *key, inserts via ext_00560270 and returns true, otherwise returns false.
// @field Vector +0x04 uint8_t* begin
// @field Vector +0x08 uint8_t* end
bool fn_0051C8D0(void* self, const float* key) {
    auto* base = static_cast<uint8_t*>(self);
    auto** begin_slot = reinterpret_cast<uint8_t**>(base + 0x04);
    auto** end_slot = reinterpret_cast<uint8_t**>(base + 0x08);

    // Range sanity checks: begin <= end.
    if (reinterpret_cast<uintptr_t>(*begin_slot) > reinterpret_cast<uintptr_t>(*end_slot))
        invalid_parameter_noinfo();
    uint8_t* begin = *begin_slot;
    if (reinterpret_cast<uintptr_t>(begin) > reinterpret_cast<uintptr_t>(*end_slot))
        invalid_parameter_noinfo();

    uint32_t flag_arg = 0;  // byte local zeroed in the prologue, passed as a dword
    uint8_t* found = static_cast<uint8_t*>(
        ext_0051A610(begin, *end_slot, key, flag_arg, 0));

    // Re-validate the range after the search.
    uint8_t* end = *end_slot;
    if (reinterpret_cast<uintptr_t>(*begin_slot) > reinterpret_cast<uintptr_t>(end))
        invalid_parameter_noinfo();
    if (!self)
        invalid_parameter_noinfo();

    if (found == end) {
        uint32_t slot = 0;
        ext_0051C4F0(self, &slot);
        return true;
    }

    if (!self)
        invalid_parameter_noinfo();
    if (reinterpret_cast<uintptr_t>(found) >= reinterpret_cast<uintptr_t>(*end_slot))
        invalid_parameter_noinfo();

    // Insert only when the found record's key is strictly greater than *key.
    // NaN compares false here, matching the x87 fcompp/test-ah-0x41 sequence.
    if (*reinterpret_cast<const float*>(found) > *key) {
        uint32_t slot = 0;
        ext_0051C4F0(self, &slot);
        return true;
    }
    return false;
}
} // namespace lift_00560920
} // namespace lift_0051C8D0

// [0x0051C4F0]
namespace lift_0051C4F0 {
extern uint8_t mem_00925134[];
extern void __fastcall ext_0051BC00(void* self, void* edx, void* contOwner, uint8_t* where, uint32_t count, const void* val);

// @name Vector20::insert
// @class Vector20
// @summary Inserts one 20-byte element at iterator position and returns an iterator {container, ptr} to it.
// @field Vector20 +0x04 uint8_t* first
// @field Vector20 +0x08 uint8_t* last
extern void** __fastcall fn_0051C4F0(uint8_t* self, void* /*edx*/, void** result, void* iterCont, uint8_t* iterPtr, const void* val)
{
    typedef void (__cdecl *InvalidParamFn)(void);
    InvalidParamFn invalidParam = *(InvalidParamFn*)mem_00925134;

    uint8_t* first = lift_field<uint8_t*>(self, 0x4);
    int32_t idx = 0;
    if (first != nullptr) {
        uint8_t* last = lift_field<uint8_t*>(self, 0x8);
        if ((int32_t)(last - first) / 20 != 0) {
            if (first > last) invalidParam();
            if (iterCont == nullptr || iterCont != (void*)self) invalidParam();
            idx = (int32_t)(iterPtr - first) / 20;
        }
    }

    ext_0051BC00(self, nullptr, iterCont, iterPtr, 1, val);

    uint8_t* nfirst = lift_field<uint8_t*>(self, 0x4);
    if (nfirst > lift_field<uint8_t*>(self, 0x8)) invalidParam();
    uint8_t* p = nfirst + idx * 20;
    if (p > lift_field<uint8_t*>(self, 0x8) || p < lift_field<uint8_t*>(self, 0x4)) invalidParam();

    result[1] = p;
    result[0] = self;
    return result;
}
} // namespace lift_0051C4F0
