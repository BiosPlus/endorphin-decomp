// Lifted C++ translation unit: lifted/leaf/decompiled_690000.cpp
#include "lift_compat.h"
#include <cstddef>
#include <cstdint>

#include <cstdint>
namespace lift_00692D90 {
extern void (*mem_00925134)();

// @name sub_00692D90
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_00490960(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_00692D90(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x8;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_00490960(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_00692D90
#include <new>
#include <string>

#include <string>
namespace lift_00695E20 {
extern void ext_00695E00(void* self, uint32_t arg2);

// @name sub_00695E20
// @summary Auto-lifted identical-shape clone of 0x0051AED0 (NMData::RealChannel::vfunc_8).
void* fn_00695E20(void* self, uint32_t ecx_in) {
    ext_00695E00(self, ecx_in);
    return self;
}
} // namespace lift_00695E20
#include <cstring>
#include <cmath>
#include <cstdlib>

#include <cstdlib>
namespace lift_006991F0 {
// @name setOwnedObject_006991F0
// @summary Replaces an owned object pointer at +0x8, invoking its virtual deleting destructor if non-null and different
// @field unknown +0x08 uint32_t field_0x08


uint32_t mem_r32(uint32_t addr);
void mem_w32(uint32_t addr, uint32_t val);

void __thiscall sub_006991F0(uint32_t self, uint32_t newPtr) {
    uint32_t oldPtr = mem_r32(self + 0x8);
    if (newPtr != oldPtr && oldPtr != 0) {
        uint32_t vtable = mem_r32(oldPtr);
        uint32_t dtor = mem_r32(vtable);
        using ScalarDeletingDtor = void (__thiscall *)(uint32_t, uint32_t);
        reinterpret_cast<ScalarDeletingDtor>(dtor)(oldPtr, 1);
    }
    mem_w32(self + 0x8, newPtr);
}
} // namespace lift_006991F0
#include <istream>
#include <bit>

#include <bit>
namespace lift_006989B0 {
// @name CopyBytesRange
// @summary Copies bytes from [first, last) to dst; returns dst advanced past the copied bytes. Null dst skips stores but still advances the count.
uint8_t* CopyBytesRange(const uint8_t* first, const uint8_t* last, uint8_t* dst) {
    uint8_t* out = dst;
    if (first == last) {
        return out;
    }
    do {
        if (out != nullptr) {
            *out = *first;
        }
        ++first;
        ++out;
    } while (first != last);
    return out;
}
} // namespace lift_006989B0
#include <stdexcept>

// [0x00698A40]
namespace lift_00698A40 {
// @name copyByteRangeForward
// @summary Forward byte-by-byte copy of [first, last) to dest (no overlap handling, loop runs while cursor != last); returns dest + (last - first).
// Stack args (read from the entry stack): a1 is unused, first, a3 is unused, last, dest.
uint32_t fn_00698A40(uint32_t a1, uint32_t first, uint32_t a3, uint32_t last, uint32_t dest) {
    (void)a1;
    (void)a3;
    const uint32_t delta = dest - first;    // edx = dest - src
    const uint32_t result = delta + last;   // edi = dest + (last - first)
    for (uint32_t cur = first; cur != last; ++cur) {
        uint8_t b = *reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(cur));
        *reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(cur + delta)) = b;
    }
    return result;
}
} // namespace lift_00698A40

// [0x006997E0]
namespace lift_006997E0 {
// @name getTypedObjectViaVfunc60
// @summary Calls virtual method at vtable+0x60 with arg1 and dynamic_casts the result via __RTDynamicCast


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);

void* __thiscall fn_006997E0(void* self, uint32_t arg1) {
    auto vtable = *reinterpret_cast<const uintptr_t* const*>(self);
    using VFunc = void* (__thiscall*)(void*, uint32_t);
    auto vfunc = reinterpret_cast<VFunc>(vtable[0x60 / sizeof(uintptr_t)]);
    void* obj = vfunc(self, arg1);
    return ext_006A6E9E(obj, 0, reinterpret_cast<void*>(0x00A2E2F8), reinterpret_cast<void*>(0x00AA3D80), 0);
}
} // namespace lift_006997E0

// [0x0069B180] sub_0069B180 (42 bytes)
namespace lift_0069B180 {
// @name matchingCloseBracket
// @summary Maps an opening bracket ( < [ { to its closing counterpart; returns 0 for any other char.
// @field none (no member access; free function)
uint8_t matchingCloseBracket(int8_t c) {
    switch (c) {
    case '(': return ')';
    case '<': return '>';
    case '[': return ']';
    case '{': return '}';
    default:  return 0;
    }
}
} // namespace lift_0069B180

// [0x0069A1C0] sub_0069A1C0 (41 bytes)
namespace lift_0069A1C0 {
// @name sub_0069A1C0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00699C70(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0069A1C0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00699C70(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0069A1C0

// [0x0069E850] sub_0069E850 (41 bytes)
namespace lift_0069E850 {
// @name sub_0069E850
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_0069E6C0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0069E850(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_0069E6C0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0069E850

// [0x00698B90]
namespace lift_00698B90 {
// @name CopyBytesRangeStdcallAdapter
// @summary __stdcall adapter that forwards arg1, arg3, and arg4 to CopyBytesRange.

extern uint8_t* ext_006989B0(const uint8_t* first, const uint8_t* last, uint8_t* dst);

extern uint8_t* __stdcall fn_00698B90(uint32_t /*arg0*/, const uint8_t* first, uint32_t /*arg2*/, const uint8_t* last, uint8_t* dst) {
    return ext_006989B0(first, last, dst);
}
} // namespace lift_00698B90

// [0x00698810] sub_00698810 (47 bytes)
namespace lift_00698810 {
// @name cstrCompareStep2
// @summary Case-sensitive string compare (strcmp-style, unsigned bytes) that steps two bytes per iteration; returns -1/0/1. Takes the string pointer from *self and the other string as its one argument.
// @field (unknown) +0x00 const char* string (self dereferenced; owning class not yet identified)
int cstrCompareStep2(const char* const* self, const char* other) {
    const unsigned char* a = reinterpret_cast<const unsigned char*>(*self);
    const unsigned char* b = reinterpret_cast<const unsigned char*>(other);
    for (;;) {
        unsigned char c = a[0];
        if (c != b[0]) {
            return c < b[0] ? -1 : 1;
        }
        if (c == 0) {
            return 0;
        }
        c = a[1];
        if (c != b[1]) {
            return c < b[1] ? -1 : 1;
        }
        a += 2;
        b += 2;
        if (c == 0) {
            return 0;
        }
    }
}
} // namespace lift_00698810

// [0x0069B100] sub_0069B100 (49 bytes)
namespace lift_0069B100 {
// @name isIdentifierChar
// @summary Returns 1 if the signed byte is an ASCII letter, digit, '_' or '$' (identifier character), else 0. Non-ASCII/high bytes (negative as signed char) and NUL return 0.
// (No object fields accessed; no @class/@field lines.)
int fn_0069B100(int8_t c) {
    if (c != 0 && c >= 'A' && c <= 'Z') {
        return 1;
    }
    if (c >= 'a' && c <= 'z') {
        return 1;
    }
    if (c >= '0' && c <= '9') {
        return 1;
    }
    if (c == '_' || c == '$') {
        return 1;
    }
    return 0;
}
} // namespace lift_0069B100

// [0x00698200]
namespace lift_00698200 {
// @name copyStringPairRange
// @summary For each 0x38-byte element in [begin, end), assigns its two std::string members (at +0x00 and +0x1C) from the matching members of src via basic_string::operator=.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C std::string field_0x1C


extern uint32_t mem_00924FDC;

using StringAssign_t = void(__thiscall*)(void* self, const void* rhs);

extern void __cdecl fn_00698200(uint32_t begin, uint32_t end, uint32_t src) {
    if (begin == end) {
        return;
    }

    auto assign = reinterpret_cast<StringAssign_t>(static_cast<uintptr_t>(mem_00924FDC));
    uint32_t cur = begin;
    do {
        assign(reinterpret_cast<void*>(static_cast<uintptr_t>(cur)),
               reinterpret_cast<const void*>(static_cast<uintptr_t>(src)));
        assign(reinterpret_cast<void*>(static_cast<uintptr_t>(cur + 0x1C)),
               reinterpret_cast<const void*>(static_cast<uintptr_t>(src + 0x1C)));
        cur += 0x38;
    } while (cur != end);
}
} // namespace lift_00698200

// [0x0069A0F0] sub_0069A0F0 (55 bytes)
namespace lift_0069A0F0 {
// @name sub_0069A0F0
// @summary Auto-lifted identical-shape clone of 0x0054F2C0 (ComputeRecordAddress).
namespace lift_0054F2C0 {
extern void ext_00699D50(std::uintptr_t a0, std::uint32_t a1, std::uint32_t a2,
                             std::uint32_t a3, std::uint32_t a4, std::uint32_t a5);

// @name ComputeRecordAddress
// @summary Calls helper sub_0054F1E0 with the arguments and a zeroed flag word, then returns base + index * 0x68.
// (no direct struct field accesses in this function)
__stdcall std::uint8_t* fn_0069A0F0(std::uint8_t* base, std::uint32_t index, std::uint32_t arg2) {
    // The original stores 0 into the low byte of a stack slot that previously held ECX,
    // so the dword passed on is ECX with its low byte cleared. ECX at entry is not
    // recoverable from the stdcall signature; it is modelled as a placeholder here.
    std::uint32_t ecx_in = 0;
    std::uint32_t flag_slot = ecx_in & 0xFFFFFF00u;

    ext_00699D50(reinterpret_cast<std::uintptr_t>(base), index, arg2, ecx_in, arg2, flag_slot);

    return base + static_cast<std::size_t>(index) * 0x2Cu;
}
} // namespace lift_0054F2C0
} // namespace lift_0069A0F0

// [0x0069B640]
namespace lift_0069B640 {
// @name sub_0069B640
// @summary Initializes a range of elements using sub_00596300 and returns the end pointer

extern uint32_t __cdecl ext_00596300(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

uint32_t __thiscall sub_0069B640(uint32_t ecx, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint32_t local_var = (ecx & 0xFFFFFF00u);
    ext_00596300(arg1, arg2, arg3, ecx, arg3, local_var);
    return arg1 + 8u * arg2;
}
} // namespace lift_0069B640

// [0x006999B0] sub_006999B0 (60 bytes)
namespace lift_006999B0 {
extern void ext_006A6C87(DWORD arg);
extern int mem_00B5C9A4;
extern int mem_00B599BC;
extern int mem_00B5C99C;
extern int mem_00B5C9A0;

// @name initOnceGetSlotAddress
// @summary One-time init guard: if bit 0 of the flag byte at mem_00B5C9A4 is clear, sets it, zeroes mem_00B5C99C, copies mem_00B599BC into mem_00B5C9A0, calls ext_006A6C87(0x921FE0); always returns &mem_00B5C99C.
void* fn_006999B0(void* self) {
    (void)self;
    if ((static_cast<unsigned char>(mem_00B5C9A4) & 1u) == 0) {
        mem_00B5C9A4 |= 1;
        int value = mem_00B599BC;
        mem_00B5C99C = 0;
        mem_00B5C9A0 = value;
        ext_006A6C87(0x921FE0u);
    }
    return &mem_00B5C99C;
}
} // namespace lift_006999B0

// [0x00691FC0]
namespace lift_00691FC0 {
// @name CompareStringLess
// @summary Lexicographic unsigned-byte less-than compare of two NUL-terminated strings, two bytes per iteration; returns 1 if s1 < s2, else 0.

// Argument order: cdecl, s1 at [esp+4], s2 at [esp+8].
extern __cdecl BOOLEAN CompareStringLess(const UCHAR* s1, const UCHAR* s2) {
    const UCHAR* a = s1;
    const UCHAR* b = s2;
    for (;;) {
        UCHAR ca = a[0];
        if (ca != b[0]) {
            return ca < b[0] ? 1 : 0;
        }
        if (ca == 0) {
            return 0;
        }
        UCHAR cb = a[1];
        if (cb != b[1]) {
            return cb < b[1] ? 1 : 0;
        }
        a += 2;
        b += 2;
        if (cb == 0) {
            return 0;
        }
    }
}
} // namespace lift_00691FC0

// [0x0069B0C0]
namespace lift_0069B0C0 {
// @name ConsumeStringPrefix
// @summary If the string src is a prefix of *dst, advance *dst past it and return true; otherwise leave *dst unchanged and return false.
bool ConsumeStringPrefix(char **dst, const char *src)
{
    char *orig = *dst;

    // Empty source always matches without touching *dst.
    if (*src == 0) {
        return true;
    }

    for (;;) {
        char *p = *dst;
        char d = *p;
        if (d == 0 || d != *src) {
            // Mismatch: if src is exhausted, it still counts as a match.
            if (*src == 0) {
                return true;
            }
            *dst = orig;
            return false;
        }
        *dst = p + 1;
        ++src;
        if (*src == 0) {
            return true;
        }
    }
}
} // namespace lift_0069B0C0

// [0x0069B5A0]
namespace lift_0069B5A0 {
// @name ConsumeKeywordPrefix
// @summary If src is a prefix of *dst and the next char is not an identifier char, advance *dst past it and return true; otherwise leave *dst unchanged and return false.

bool ext_0069B0C0(char **dst, const char *src);
int ext_0069B100(int8_t c);

bool fn_0069B5A0(char **dst, const char *src) {
    char *p = *dst;
    if (!ext_0069B0C0(&p, src)) {
        return false;
    }
    if (ext_0069B100(static_cast<int8_t>(*p))) {
        return false;
    }
    *dst = p;
    return true;
}
} // namespace lift_0069B5A0

// [0x0069A130] sub_0069A130 (43 bytes)
namespace lift_0069A130 {
// @name sub_0069A130
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_00699E30(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_0069A130(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_00699E30(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_0069A130

// [0x0069E7E0] sub_0069E7E0 (43 bytes)
namespace lift_0069E7E0 {
// @name sub_0069E7E0
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_0069E660(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_0069E7E0(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_0069E660(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_0069E7E0

// [0x00692B50]
namespace lift_00692B50 {
extern void ext_00661980(void* self);

// @name ctor_00944E74
// @summary Constructor that initializes base vtable via ext_00661980, sets vtables 0x00944E74 and 0x00944E44, and zeroes fields at +0x0c, +0x10, +0x14.
// @field +0x00 uint32_t vtable
// @field +0x04 uint32_t vtable_04
// @field +0x0c uint32_t field_0x0c
// @field +0x10 uint32_t field_0x10
// @field +0x14 uint32_t field_0x14
void* fn_00692B50(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    ext_00661980(obj);
    *reinterpret_cast<uint32_t*>(obj + 0x04) = 0x00928EFCEu & 0xFFFFFFFFu;
    *reinterpret_cast<uint32_t*>(obj + 0x00) = 0x00944E74u;
    *reinterpret_cast<uint32_t*>(obj + 0x04) = 0x00944E44u;
    *reinterpret_cast<uint32_t*>(obj + 0x0C) = 0u;
    *reinterpret_cast<uint32_t*>(obj + 0x10) = 0u;
    *reinterpret_cast<uint32_t*>(obj + 0x14) = 0u;
    return obj;
}
} // namespace lift_00692B50

// [0x006981A0] sub_006981A0 (83 bytes)
namespace lift_006981A0 {
extern uint32_t mem_00924FE0;

namespace {
// MSVCP80 std::basic_string<char> copy constructor, reached through the import slot.
using StringCopyCtorFn = void(__thiscall*)(void* self, const void* src);
} // namespace

// @name Unknown::CopyConstructPair_006981A0
// @class Unknown
// @summary Copy-constructs two std::string members (at +0x00 and +0x1C) from the matching strings of src; returns this.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C std::string field_0x1C
void* fn_006981A0(void* self, const void* src) {
    auto copyCtor = reinterpret_cast<StringCopyCtorFn>(static_cast<uintptr_t>(mem_00924FE0));

    auto* dst = static_cast<uint8_t*>(self);
    const auto* from = static_cast<const uint8_t*>(src);

    copyCtor(dst + 0x00, from + 0x00);
    copyCtor(dst + 0x1C, from + 0x1C);

    return self;
}
} // namespace lift_006981A0

// [0x00699950] sub_00699950 (54 bytes)
namespace lift_00699950 {
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (Self-assignment guarded copy: if other differs, releases the current field_0x04 via vtable slot 0x78, copies other's field_0x04, then sets field_0x00 to the value written by other's field_0x04 vtable slot 0x70 (0 when that pointer is null). Returns self.)
// Prototype adjusted from the wip stub: __thiscall(self, other) is passed as a plain (self, other) call.
extern void* ext_0041CF50(void* self, void* other);
// Import slot for the CRT invalid-parameter handler (MSVCR80 _invalid_parameter_noinfo).
extern void (*mem_00925134)();

// @name Unknown::assignElement_00699950
// @class Unknown
// @summary Bounds-checked element assignment: calls the invalid-parameter handler if the element array at field_0x1c is null or index is out of range (count = (field_0x20 - field_0x1c) / 8), otherwise forwards &elements[index] and other to Unknown::assignFromOther_0041CF50 and returns its result.
// @field Unknown +0x1c void* field_0x1c
// @field Unknown +0x20 void* field_0x20
void* __thiscall fn_00699950(void* self, uint32_t index, void* other) {
    void* begin = lift_field<void*>(self, 0x1c);
    bool invalid = (begin == nullptr);
    if (!invalid) {
        intptr_t bytes = reinterpret_cast<intptr_t>(lift_field<void*>(self, 0x20))
                       - reinterpret_cast<intptr_t>(begin);
        uint32_t count = static_cast<uint32_t>(bytes >> 3);
        invalid = (index >= count);
    }
    if (invalid) {
        mem_00925134();
        return nullptr;
    }

    // Elements are 8 bytes each.
    uint8_t* elem = static_cast<uint8_t*>(begin) + 8u * static_cast<size_t>(index);
    return ext_0041CF50(elem, other);
}
} // namespace lift_00699950

// [0x0069A090] sub_0069A090 (85 bytes)
namespace lift_0069A090 {
// @name sub_0069A090
// @summary Auto-lifted identical-shape clone of 0x00687E50 (copyStringRecordRangeAdvance_00687E50).
namespace lift_00687E50 {
// Known callee 0x00687330: Unknown::CopyStringRecordRange_00687330 (copies each 0x2C-byte StringRecord in [first, last) to dest and returns the end of the written range; the caller's return value is discarded here).
extern void* ext_00699BD0(const void* first, const void* last, void* dest);

// @name copyStringRecordRangeAdvance_00687E50
// @summary Copies the StringRecord range [first, last) to dest, then returns dest advanced by the record count times 0x2C (sizeof StringRecord).
void* fn_0069A090(const void* first, const void* last, void* dest) {
    // Copy the records; the callee's return value is not used by this function.
    ext_00699BD0(first, last, dest);

    // Record count = (last - first) / 0x2C, computed as a signed 32-bit division
    // (matches the original magic-multiply sequence, which truncates toward zero).
    const auto* f = static_cast<const uint8_t*>(first);
    const auto* l = static_cast<const uint8_t*>(last);
    const int32_t diff = static_cast<int32_t>(l - f);
    const int32_t count = diff / 0x2C;

    auto* out = static_cast<uint8_t*>(dest);
    return out + static_cast<ptrdiff_t>(count) * 0x2C;
}
} // namespace lift_00687E50
} // namespace lift_0069A090

// [0x006988A0]
namespace lift_006988A0 {
// @name String::findFirstNotOf
// @class String
// @summary Find index of first character not in the given C-string starting at startIndex, or -1 if none.
// @field String +0x00 const char* data
// @field String +0x04 int32_t length


int32_t __thiscall sub_006988A0(void* self, const char* chars, int32_t startIndex) {
    const char* data = *reinterpret_cast<const char* const*>(static_cast<const uint8_t*>(self) + 0x00);
    int32_t length = *reinterpret_cast<const int32_t*>(static_cast<const uint8_t*>(self) + 0x04);

    int32_t charsLen = 0;
    while (chars[charsLen] != '\0') {
        ++charsLen;
    }

    for (int32_t i = startIndex; i < length; ++i) {
        char ch = data[i];
        bool found = false;
        for (int32_t j = 0; j < charsLen; ++j) {
            if (ch == chars[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return i;
        }
    }

    return -1;
}
} // namespace lift_006988A0

// [0x00692010]
namespace lift_00692010 {
// @name lowerBound32
// @summary Binary search (lower_bound) over a range of 32-bit elements using a predicate
uint32_t* sub_00692010(uint32_t* first, uint32_t* last, const uint32_t* val_ptr, bool (*comp)(uint32_t, uint32_t)) {
    int32_t count = static_cast<int32_t>(last - first);
    while (count > 0) {
        int32_t half = count / 2;
        uint32_t* mid = first + half;
        if (comp(*mid, *val_ptr)) {
            first = mid + 1;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return first;
}
} // namespace lift_00692010

// [0x006992E0] sub_006992E0 (89 bytes)
namespace lift_006992E0 {
// Known callee 0x006991F0: setOwnedObject_006991F0 (Replaces an owned object pointer at +0x8, invoking its virtual deleting destructor if non-null and different)
namespace lift_006992E0 {
extern void __thiscall ext_006991F0(uint32_t self, uint32_t newPtr);

// @name Unknown::initOutPairAndSetOwnedFromArg2
// @class Unknown
// @summary Zeroes out[0], stores self in out[1], calls the virtual method at vtable+0x74 with out, then calls setOwnedObject_006991F0(out[0], arg2); returns out.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x74 void* vfn_74 (virtual method invoked with out pointer)
uint32_t __thiscall fn_006992E0(void* self, void* out, uint32_t arg2) {
    // mov dword ptr [esi], 0 ; mov dword ptr [esi+4], ecx
    lift_field<uint32_t>(out, 0x00) = 0;
    lift_field<uint32_t>(out, 0x04) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    // mov edx, [[ecx]+0x74] ; push esi ; call edx   (thiscall, callee pops its one argument)
    void* vtable = lift_field<void*>(self, 0x00);
    uintptr_t slot = lift_field<uintptr_t>(vtable, 0x74);
    using VirtualFn = void(__thiscall*)(void* self_, void* out_);
    reinterpret_cast<VirtualFn>(slot)(self, out);

    // mov ecx, [esi] ; push arg2 ; call setOwnedObject_006991F0
    const uint32_t owned = lift_field<uint32_t>(out, 0x00);
    ext_006991F0(owned, arg2);

    // mov eax, esi  (return out)
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(out));
}
} // namespace lift_006992E0
} // namespace lift_006992E0

// [0x00699E30] sub_00699E30 (89 bytes)
namespace lift_00699E30 {
// @name sub_00699E30
// @summary Auto-lifted identical-shape clone of 0x00687920 (Unknown::copyRecordRangeAndRebase_00687920).
namespace lift_00687920 {
// Known callee 0x006873D0: Unknown::CopyRecordRangeBackward_006873D0 (Copies records of 0x2C bytes from [first, last) backward into the range ending at dest_last, returning the new begin (dest_last if the range is empty).)
extern void* ext_00699AE0(void* first, void* last, void* dest_last);

// @name Unknown::copyRecordRangeAndRebase_00687920
// @summary Copies a 0x2C-byte record range backward via ext_006873D0, then returns dest_last rewound by the whole-record count of [first, last).
void* fn_00699E30(void* first, void* last, void* dest_last) {
    ext_00699AE0(first, last, dest_last);

    const std::intptr_t bytes = reinterpret_cast<std::intptr_t>(last) - reinterpret_cast<std::intptr_t>(first);
    const std::intptr_t records = bytes / 44; // 0x2C-byte records, truncated toward zero
    const std::intptr_t newBegin = reinterpret_cast<std::intptr_t>(dest_last) - records * 44;
    return reinterpret_cast<void*>(newBegin);
}
} // namespace lift_00687920
} // namespace lift_00699E30

// [0x00696BD0]
namespace lift_00696BD0 {
// @name readLineFromStream
// @summary Reads characters from an istream into a std::string until '\n', '\r', or EOF (-1), returning true.


// MSVCP80!?get@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEHXZ
extern uintptr_t mem_009250E4;
// MSVCP80!?clear@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEXXZ
extern uintptr_t mem_00924EA8;
// MSVCP80!??Y?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@D@Z
extern uintptr_t mem_00924EC0;

using istream_get_fn = int(__thiscall*)(void*);
using string_clear_fn = void(__thiscall*)(void*);
using string_append_char_fn = void*(__thiscall*)(void*, char);

uint8_t __cdecl sub_00696BD0(void* stream, void* str) {
    auto istream_get = reinterpret_cast<istream_get_fn>(mem_009250E4);
    auto string_clear = reinterpret_cast<string_clear_fn>(mem_00924EA8);
    auto string_append_char = reinterpret_cast<string_append_char_fn>(mem_00924EC0);

    char ch = static_cast<char>(istream_get(stream));
    string_clear(str);

    while (ch != '\n' && ch != '\r' && ch != static_cast<char>(-1)) {
        string_append_char(str, ch);
        ch = static_cast<char>(istream_get(stream));
    }

    return 1;
}
} // namespace lift_00696BD0

// [0x0069B560]
namespace lift_0069B560 {
// @name LogicErrorDerived::LogicErrorDerived
// @class LogicErrorDerived
// @summary Copy constructor for a std::logic_error-derived exception class setting vftable 0x0098FB84.
// @field LogicErrorDerived +0x00 uint32_t vftable


void* __thiscall ext_00401C60(void* self, const void* other);

void* __thiscall sub_0069B560(void* self, const void* other) {
    ext_00401C60(self, other);
    *reinterpret_cast<uint32_t*>(self) = 0x0098FB84u;
    return self;
}
} // namespace lift_0069B560

// [0x0069C1C0]
namespace lift_0069C1C0 {
// @name sub_0069C1C0
// @summary Default constructor initializing two std::string members and five 32-bit zero fields
// @field UnknownClass +0x00 std::string field_0x00
// @field UnknownClass +0x20 uint32_t field_0x20
// @field UnknownClass +0x24 uint32_t field_0x24
// @field UnknownClass +0x28 uint32_t field_0x28
// @field UnknownClass +0x2C std::string field_0x2C
// @field UnknownClass +0x48 uint32_t field_0x48
// @field UnknownClass +0x4C uint32_t field_0x4C


extern uint32_t mem_00924FE8;
extern void __thiscall ext_006290D8(void* self);

void* __thiscall sub_0069C1C0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FE8)(obj);
    *reinterpret_cast<uint32_t*>(obj + 0x20) = 0;
    *reinterpret_cast<uint32_t*>(obj + 0x24) = 0;
    *reinterpret_cast<uint32_t*>(obj + 0x28) = 0;
    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924FE8)(obj + 0x2C);
    *reinterpret_cast<uint32_t*>(obj + 0x48) = 0;
    *reinterpret_cast<uint32_t*>(obj + 0x4C) = 0;
    return self;
}
} // namespace lift_0069C1C0

// [0x00699870] sub_00699870 (91 bytes)
namespace lift_00699870 {
// Indirect call through the object's vtable slot at +0x70 (index 28).
// Convention: MSVC __fastcall-style, ecx = object, first stack arg = out-slot pointer, second = record pointer.
typedef void* (__fastcall *VirtualGetSlot70Fn)(void* self, int edx_unused, void** out_slot, void* record);

// @name Unknown::copyRecordWithOptionalResolve
// @class Unknown
// @summary Copies a 16-byte record from src into self; when src+0xC is non-null, calls vtable slot 0x70 on it to fetch the +0x8 value, otherwise +0x8 is zeroed. Returns self.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
extern void* __fastcall fn_00699870(void* self, int edx_unused, const void* src) {
    (void)edx_unused;

    // Copy the first two dwords of the source record.
    lift_field<uint32_t>(self, 0x0) = lift_field<const uint32_t>(src, 0x0);
    lift_field<uint32_t>(self, 0x4) = lift_field<const uint32_t>(src, 0x4);

    // Sub-record at src+0x8; its pointer field lives at src+0xC.
    const void* sub = static_cast<const uint8_t*>(src) + 0x8;
    void* obj = lift_field<void*>(sub, 0x4);

    if (obj != nullptr) {
        // Vtable slot 0x70 on the object; the result points at the value to copy.
        void** vtbl = *static_cast<void***>(obj);
        auto getSlot = reinterpret_cast<VirtualGetSlot70Fn>(vtbl[0x70 / sizeof(void*)]);
        void* out_slot = const_cast<void*>(src);
        void* result = getSlot(obj, 0, &out_slot, const_cast<void*>(sub));
        lift_field<uint32_t>(self, 0x8) = lift_field<const uint32_t>(result, 0x0);
    } else {
        lift_field<uint32_t>(self, 0x8) = 0;
    }

    lift_field<uint32_t>(self, 0xC) = lift_field<const uint32_t>(sub, 0x4);
    return self;
}
} // namespace lift_00699870

// [0x00695CE0] sub_00695CE0 (87 bytes)
namespace lift_00695CE0 {
// @name sub_00695CE0
// @summary Auto-lifted identical-shape clone of 0x0066E660 (sub_0066E660).
namespace lift_0066E660 {
// @name sub_0066E660
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5C7A0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5C79C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00695CE0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B603Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5C7A0 & 1u) == 0) {
        mem_00B5C7A0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5C79C, frame[0]);
        mem_00B5C79C = 0x98F41Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5C79C;
}
} // namespace lift_004CAE30
} // namespace lift_0066E660
} // namespace lift_00695CE0

// [0x00695E00] sub_00695E00 (30 bytes)
namespace lift_00695E00 {
// @name sub_00695E00
// @summary Auto-lifted identical-shape clone of 0x0061EED0 (sub_0061EED0).
namespace lift_0061EED0 {
// @name sub_0061EED0
// @summary Auto-lifted identical-shape clone of 0x0058D8D0 (sub_0058D8D0).
namespace lift_0058D8D0 {
// @name sub_0058D8D0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_00695CE0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_00695E00(DWORD* dst, DWORD value) {
    DWORD obj = ext_00695CE0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_0058D8D0
} // namespace lift_0061EED0
} // namespace lift_00695E00

// [0x0069A160] sub_0069A160 (89 bytes)
namespace lift_0069A160 {
// @name sub_0069A160
// @summary Auto-lifted identical-shape clone of 0x0057A770 (sub_0057A770).
namespace lift_0057A770 {
// @name sub_0057A770
// @summary Auto-lifted identical-shape clone of 0x0057E9E0 (Unknown::eraseStringVectorRange).
namespace lift_0057E9E0 {
// @name Unknown::eraseStringVectorRange
// @class Unknown
// @summary Erases [first, last) from a 0x14-byte-record vector by shifting [last, end) over first, destroying the trailing elements, and returning the updated iterator.
// @field Unknown +0x08 void* end

void ext_00672C20(void* first, void* last);
void* ext_0069A090(const void* first, const void* last, void* out);
extern void (*mem_00925134)();

struct VectorIterator {
    void* container;
    void* ptr;
};

VectorIterator* __thiscall fn_0069A160(void* self, VectorIterator* out_iter, void* first_container, void* first_ptr, void* last_container, void* last_ptr) {
    if (!first_container || first_container != last_container) {
        mem_00925134();
    }
    if (first_ptr != last_ptr) {
        void* end_ptr = *(void**)((char*)self + 0x08);
        void* new_end = ext_0069A090(last_ptr, end_ptr, first_ptr);
        ext_00672C20(new_end, end_ptr);
        *(void**)((char*)self + 0x08) = new_end;
    }
    out_iter->container = first_container;
    out_iter->ptr = first_ptr;
    return out_iter;
}
} // namespace lift_0057E9E0
} // namespace lift_0057A770
} // namespace lift_0069A160

// [0x00696910]
namespace lift_00696910 {
// @name skipUntilCharOrEofSkippingComments
// @summary Reads chars from an istream, skipping '#' comment lines, until delim or 0xFF is reached and put back; returns false on stream failure.


bool ext_006968D0(void* stream);
extern uint32_t mem_009250BC; // MSVCP80!basic_istream::get(char&)
extern uint32_t mem_009250C0; // MSVCP80!ios_base::operator!()
extern uint32_t mem_009250E8; // MSVCP80!basic_istream::putback(char)

using istream_get_fn = void* (__thiscall*)(void* self, char* ch);
using ios_not_fn = bool (__thiscall*)(void* ios_base_ptr);
using istream_putback_fn = void* (__thiscall*)(void* self, char ch);

bool fn_00696910(void* stream, char delim) {
    char ch = 0;
    auto get_fn = reinterpret_cast<istream_get_fn>(static_cast<uintptr_t>(mem_009250BC));
    auto not_fn = reinterpret_cast<ios_not_fn>(static_cast<uintptr_t>(mem_009250C0));
    auto putback_fn = reinterpret_cast<istream_putback_fn>(static_cast<uintptr_t>(mem_009250E8));

    while (true) {
        void* strm = get_fn(stream, &ch);
        uint32_t* vptr = *reinterpret_cast<uint32_t**>(strm);
        void* ios_base_ptr = reinterpret_cast<char*>(strm) + static_cast<int32_t>(vptr[1]);
        if (not_fn(ios_base_ptr)) {
            return false;
        }
        if (ch == '#') {
            if (!ext_006968D0(stream)) {
                return false;
            }
        }
        if (ch == delim || ch == static_cast<char>(-1)) {
            putback_fn(stream, ch);
            return true;
        }
    }
}
} // namespace lift_00696910

// [0x00699B80] sub_00699B80 (74 bytes)
namespace lift_00699B80 {
// Known callee 0x00405FB0: throwPreparedStringError_00405FB0 (Builds a std::string from the literal at 0x00928F30 and throws it inside an std::exception-derived object.)
extern void ext_00405FB0();
// Known callee 0x00699810: allocate_array_0x2c (Allocates an array of count 0x2c-byte elements, throwing std::bad_alloc on size_t overflow.)
extern void* ext_00699810(uint32_t count);

// @name allocateEntryArray
// @summary Zeroes three 32-bit slots of self, then allocates count 0x2c-byte entries and stores the begin/end/capacity pointers. Returns false when count is 0.
// @field <unknown> +0x04 uint32_t field_0x04
// @field <unknown> +0x08 uint32_t field_0x08
// @field <unknown> +0x0C uint32_t field_0x0C
bool fn_00699B80(void* self, uint32_t count) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t* field04 = reinterpret_cast<uint32_t*>(base + 0x04);
    uint32_t* field08 = reinterpret_cast<uint32_t*>(base + 0x08);
    uint32_t* field0C = reinterpret_cast<uint32_t*>(base + 0x0C);

    *field04 = 0;
    *field08 = 0;
    *field0C = 0;

    if (count == 0) {
        return false;
    }

    if (count > 0x05D1745Du) {
        ext_00405FB0();
    }

    void* block = ext_00699810(count);
    uint32_t blockAddr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(block));
    uint32_t endAddr = blockAddr + count * 0x2Cu;

    *field04 = blockAddr;
    *field08 = blockAddr;
    *field0C = endAddr;
    return true;
}
} // namespace lift_00699B80

// [0x006989E0]
namespace lift_006989E0 {
[[noreturn]] void ext_0067F5B0();
extern void (*mem_00925134)(void);

// @name ByteVector::at
// @class ByteVector
// @summary Returns a pointer to the byte at index in a vector-like container after bounds and iterator validation.
// @field ByteVector +0x04 uint32_t m_first
// @field ByteVector +0x08 uint32_t m_last
uint32_t __thiscall fn_006989E0(void* self, uint32_t index) {
    auto* base = static_cast<const uint8_t*>(self);
    uint32_t first = 0;
    uint32_t last = 0;
    std::memcpy(&first, base + 0x04, sizeof(first));
    if (first == 0) {
        ext_0067F5B0();
    }
    std::memcpy(&last, base + 0x08, sizeof(last));
    if ((last - first) <= index) {
        ext_0067F5B0();
    }
    if (first > last) {
        mem_00925134();
    }
    uint32_t elem = first + index;
    std::memcpy(&last, base + 0x08, sizeof(last));
    std::memcpy(&first, base + 0x04, sizeof(first));
    if (elem > last || elem < first) {
        mem_00925134();
    }
    std::memcpy(&last, base + 0x08, sizeof(last));
    if (elem >= last) {
        mem_00925134();
    }
    return elem;
}
} // namespace lift_006989E0

// [0x00698A70]
namespace lift_00698A70 {
// @name ByteVector::readByte
// @class ByteVector
// @summary Reads the byte at *cursor and increments *cursor by 1.


extern uint32_t __thiscall ext_006989E0(void* self, uint32_t index);

uint8_t __thiscall fn_00698A70(void* self, uint32_t* cursor) {
    uint32_t index = *cursor;
    *cursor = index + 1;
    uint32_t ptr = ext_006989E0(self, index);
    return *reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(ptr));
}
} // namespace lift_00698A70

// [0x00698AB0]
namespace lift_00698AB0 {
// @name ByteVector::readFloat
// @class ByteVector
// @summary Reads a 32-bit float from the byte vector at *offsetPtr and advances *offsetPtr by 4 bytes.


extern uint32_t __thiscall ext_006989E0(void* self, uint32_t index);

float __thiscall fn_00698AB0(void* self, uint32_t* offsetPtr) {
    uint32_t ptr = ext_006989E0(self, *offsetPtr);
    *offsetPtr += 4;
    float value = 0.0f;
    std::memcpy(&value, reinterpret_cast<const void*>(static_cast<uintptr_t>(ptr)), sizeof(value));
    return value;
}
} // namespace lift_00698AB0

// [0x00698B50]
namespace lift_00698B50 {
// @name ByteVector::readVector3
// @class ByteVector
// @summary Reads three 32-bit floats from the byte vector at *offsetPtr into outVec, advancing *offsetPtr by 12 bytes.
// @field Vector3 +0x00 float x
// @field Vector3 +0x04 float y
// @field Vector3 +0x08 float z


extern float __thiscall ext_00698AB0(void* self, uint32_t* offsetPtr);

void __thiscall fn_00698B50(void* self, uint32_t* offsetPtr, float* outVec) {
    outVec[0] = ext_00698AB0(self, offsetPtr);
    outVec[1] = ext_00698AB0(self, offsetPtr);
    outVec[2] = ext_00698AB0(self, offsetPtr);
}
} // namespace lift_00698B50

// [0x00698AD0]
namespace lift_00698AD0 {
// @name ByteVector::readString
// @class ByteVector
// @summary Reads a null-terminated string at *offset_ptr into sret and advances *offset_ptr past it.

uint32_t __thiscall ext_006989E0(void* self, uint32_t index);
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924EAC;

uint32_t __thiscall fn_00698AD0(void* self, uint32_t sret, uint32_t* offset_ptr) {
    uint32_t str_ptr = ext_006989E0(self, *offset_ptr);
    ((void(__thiscall*)(uint32_t, uint32_t))mem_00924FE4)(sret, str_ptr);
    uint32_t len = ((uint32_t(__thiscall*)(uint32_t))mem_00924EAC)(sret);
    *offset_ptr += len + 1;
    return sret;
}
} // namespace lift_00698AD0

// [0x00693CC0]
namespace lift_00693CC0 {
// @name Quat4f::normalize
// @class Quat4f
// @summary Normalizes a 4-component float vector/quaternion in place if its length is non-zero, returning this.
// @field Quat4f +0x00 float x
// @field Quat4f +0x04 float y
// @field Quat4f +0x08 float z
// @field Quat4f +0x0C float w


extern uint32_t __fastcall fn_00693CC0(uint32_t ecx, uint32_t /*edx*/) {
    float* q = reinterpret_cast<float*>(static_cast<uintptr_t>(ecx));
    float x = q[0];
    float y = q[1];
    float z = q[2];
    float w = q[3];

    float len_sq = x * x + y * y + z * z + w * w;
    float len = std::sqrt(len_sq);

    if (len != 0.0f) {
        q[0] = x / len;
        q[1] = y / len;
        q[2] = z / len;
        q[3] = w / len;
    }

    return ecx;
}
} // namespace lift_00693CC0

// [0x0069A260] sub_0069A260 (59 bytes)
namespace lift_0069A260 {
// @name sub_0069A260
// @summary Auto-lifted identical-shape clone of 0x0044C500 (Vector::clear).
namespace lift_0044C500 {
// Known callee 0x0044C460: Vector::eraseRange (Validates an owner/range pair, moves [last,end) down to first, shrinks end, and writes {first_or_owner, first} to out.)
extern void ext_0069A160(void* ecx, uint32_t* out, uint32_t owner, uint32_t first,
                         uint32_t owner_expected, uint32_t last);

// IAT slot for MSVCR80!_invalid_parameter_noinfo, called through a pointer when a range check fails.
extern void (*mem_00925134)(void);

// @name Vector::clear
// @class Vector
// @summary Validates begin <= end, then calls Vector::eraseRange(begin, end) so the vector's end is reset to begin.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_0069A260(void* self) {
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
    ext_0069A160(self, out, self_addr, begin, self_addr, end);
}
} // namespace lift_0044C500
} // namespace lift_0069A260

// [0x006989B0]
namespace lift_006989B0 {
// @name copyBytesRangeToOptionalDst_006989B0
// @summary Copies bytes from [begin, end) to dst, skipping stores when dst is null.
void copyBytesRangeToOptionalDst_006989B0(const uint8_t* begin, const uint8_t* end, uint8_t* dst) {
    const uintptr_t count = static_cast<uintptr_t>(end - begin);
    for (uintptr_t i = 0; i < count; ++i) {
        if (dst != nullptr) {
            dst[i] = begin[i];
        }
    }
}
} // namespace lift_006989B0

// [0x006968D0] sub_006968D0 (58 bytes)
namespace lift_006968D0 {
// IAT slots (.rdata): basic_istream<char>::get(char&) and ios_base::operator!()
extern uint32_t mem_009250BC;  // MSVCP80 basic_istream::get(char&)
extern uint32_t mem_009250C0;  // MSVCP80 ios_base::operator!()

// @name skipLine
// @summary Reads chars from an istream until '\n' or EOF; returns false if the stream fails mid-read, true otherwise.
bool fn_006968D0(void* stream) {
    using GetFn = void* (__thiscall*)(void* self, char* c);
    using NotFn = bool (__thiscall*)(void* ios);
    char c = 0;
    for (;;) {
        void* istr = reinterpret_cast<GetFn>(mem_009250BC)(stream, &c);
        void* vtbl = lift_field<void*>(istr, 0);
        int32_t vbase_off = lift_field<int32_t>(vtbl, 4);
        void* ios = static_cast<char*>(istr) + vbase_off;
        if (reinterpret_cast<NotFn>(mem_009250C0)(ios))
            return false;
        if (c == '\n')
            return true;
        if (c == static_cast<char>(0xFF))
            return true;
    }
}
} // namespace lift_006968D0

// [0x00699360] sub_00699360 (60 bytes)
namespace lift_00699360 {
// IAT slot holding MSVCR80!_invalid_parameter_noinfo (loaded into ebx in the original).
extern void* mem_00925134;
// Static sentinel address returned when the container is empty or unset.
extern uint8_t mem_00b59400;

// @name ContainerBase::GetCheckedBegin
// @class ContainerBase
// @summary Returns the begin pointer of a 32-byte-element array if non-empty, else a static sentinel; calls invalid_parameter when begin >= end.
// @field ContainerBase +0x08 uint8_t* begin
// @field ContainerBase +0x0C uint8_t* end
uint8_t* fn_00699360(void* self) {
    uintptr_t begin = lift_field<uintptr_t>(self, 0x08);
    uintptr_t end   = lift_field<uintptr_t>(self, 0x0C);

    // Empty or unset: return sentinel.
    if (begin == 0 || (static_cast<int32_t>(end - begin) >> 5) == 0) {
        return &mem_00b59400;
    }

    // begin >= end is invalid; the original calls the CRT handler once for
    // equality and twice when begin is above end.
    if (begin >= end) {
        auto invalid_parameter_noinfo = reinterpret_cast<void (*)()>(mem_00925134);
        invalid_parameter_noinfo();
        if (begin > end) {
            invalid_parameter_noinfo();
        }
    }

    return reinterpret_cast<uint8_t*>(begin);
}
} // namespace lift_00699360

// [0x006991A0]
namespace lift_006991A0 {
// @name UnknownClass_dtor_006991A0
// @summary Destructor that deletes member at +0x08 via vtable[0](1) and resets vtable to base
// @field UnknownClass +0x00 uintptr_t vtable
// @field UnknownClass +0x08 void* field_0x08


void __thiscall sub_006991A0(void* self) {
    lift_field<uintptr_t>(self, 0x00) = 0x0098FAC4u;

    void* child = lift_field<void*>(self, 0x08);
    if (child != nullptr) {
        auto** vtable = *reinterpret_cast<void***>(child);
        using ScalarDeletingDtor = void(__thiscall*)(void*, int);
        reinterpret_cast<ScalarDeletingDtor>(vtable[0])(child, 1);
    }

    lift_field<uintptr_t>(self, 0x00) = 0x0098FABCu;
}
} // namespace lift_006991A0

// [0x006998D0] sub_006998D0 (82 bytes)
namespace lift_006998D0 {
// Known callee 0x00699870: Unknown::copyRecordWithOptionalResolve (Copies a 16-byte record from src into self; when src+0xC is non-null, calls vtable slot 0x70 on it to fetch the +0x8 value, otherwise +0x8 is zeroed. Returns self.)
extern void ext_00699870();
// .rdata IAT slot for MSVCP80 basic_string copy-ctor (0x00924FE0). The portable
// lift performs that copy with std::string directly; this declaration only records
// the original dependency and is intentionally never dereferenced.
extern int mem_00924FE0;

// @name Unknown::copyStringAndRecord
// @class Unknown
// @summary Copy-constructs the leading std::string from src, then copies the 16-byte record at +0x1C via ext_00699870; returns self.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C void* field_0x1C
void* fn_006998D0(void* self, const void* src) {
    // Original called the MSVCP80 copy-ctor through mem_00924FE0; reference it without dereferencing.
    (void)&mem_00924FE0;

    // Copy-construct the std::string at offset 0 from the source string at offset 0.
    new (self) std::string(*static_cast<const std::string*>(src));

    // Copy the 16-byte record at +0x1C from src into self.
    using RecordCopyFn = void* (*)(void* self, int edx_unused, const void* src);
    auto copyRecord = reinterpret_cast<RecordCopyFn>(ext_00699870);
    copyRecord(static_cast<uint8_t*>(self) + 0x1C,
               0,
               static_cast<const uint8_t*>(src) + 0x1C);

    return self;
}
} // namespace lift_006998D0

// [0x00698840] sub_00698840 (87 bytes)
namespace lift_00698840 {
// @name Unknown::findFirstOfChars
// @class Unknown
// @summary Scans this buffer from start to its count and returns the index of the first byte present in the NUL-terminated set, or -1.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 int32_t field_0x04
int __thiscall fn_00698840(void* self, const char* set, int start) {
    const int setLen = static_cast<int>(std::strlen(set));
    const uint32_t bufAddr = lift_field<uint32_t>(self, 0x00);
    const int count = lift_field<int32_t>(self, 0x04);
    const char* buf = reinterpret_cast<const char*>(static_cast<uintptr_t>(bufAddr));

    for (int i = start; i < count; ++i) {
        const char c = buf[i];
        for (int j = 0; j < setLen; ++j) {
            if (c == set[j]) {
                return i;
            }
        }
    }
    return -1;
}
} // namespace lift_00698840

// [0x00696B70] sub_00696B70 (86 bytes)
namespace lift_00696B70 {
extern int mem_009250E4;
extern int mem_009250E8;
extern int mem_009250EC;

// @name readTokenSkipBlanks
// @summary Skips spaces/tabs on a std::istream; returns false on EOF or newline, otherwise puts the char back, extracts a std::string with operator>>, and returns true.

using IstreamGetFn = int(__thiscall*)(void* self);
using IstreamPutbackFn = void*(__thiscall*)(void* self, char c);
using StringExtractFn = void*(__cdecl*)(void* is, void* str);

bool fn_00696B70(void* is, void* str) {
    auto get = reinterpret_cast<IstreamGetFn>(static_cast<uintptr_t>(mem_009250E4));
    auto putback = reinterpret_cast<IstreamPutbackFn>(static_cast<uintptr_t>(mem_009250E8));
    auto extract = reinterpret_cast<StringExtractFn>(static_cast<uintptr_t>(mem_009250EC));

    uint8_t bl;
    for (;;) {
        bl = static_cast<uint8_t>(get(is));
        if (bl == 0x20 || bl == 0x09) {
            continue;
        }
        break;
    }
    if (bl == 0xFF) {
        return false;
    }
    putback(is, static_cast<char>(bl));
    if (bl == 0x0A) {
        return false;
    }
    extract(is, str);
    return true;
}
} // namespace lift_00696B70
