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

// [0x006991F0]
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

// [0x006989B0]
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

// [0x006968D0] read_line_until_newline_or_eof (58 bytes)
namespace lift_006968D0 {
// MSVCP80 imports used by this function (called through IAT slots 0x9250BC / 0x9250C0).
// basic_istream<char>::get(char&) -- thiscall, returns istream&.
extern void* __thiscall ext_MSVCP80_istream_get_char(void* self, char* out);
// basic_ios::operator!() const -- thiscall, returns true when the stream is in a failed state.
extern bool __thiscall ext_MSVCP80_ios_base_not(const void* self);

// @name readLineUntilNewlineOrEof
// @summary Reads chars from an istream until '\n' or 0xFF is read; returns false if the stream fails first, true otherwise.
// (No direct class field offsets are accessed; the only offsets used are the istream vbtable displacement at vptr+4, which is not a class field.)
bool fn_006968D0(void* stream) {
    for (;;) {
        char c = 0;
        // get(c) on the stream
        void* in = ext_MSVCP80_istream_get_char(stream, &c);

        // Locate the basic_ios subobject via the virtual base displacement stored in the vtable at +4.
        const void* vptr = lift_field<const void*>(in, 0);
        ptrdiff_t disp = lift_field<int32_t>(vptr, 4);
        void* ios = reinterpret_cast<uint8_t*>(in) + disp;

        if (ext_MSVCP80_ios_base_not(ios)) {
            return false;
        }

        const unsigned char uc = static_cast<unsigned char>(c);
        if (uc == 0x0A || uc == 0xFF) {
            return true;
        }
    }
}
} // namespace lift_006968D0

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

// [0x00699360] sub_00699360 (60 bytes)
namespace lift_00699360 {
extern void ext_invalid_parameter_noinfo(void);

// @name VectorLike::checkedBegin
// @class VectorLike
// @summary Returns the begin pointer when the range holds at least one 32-byte element, else a static sentinel; asserts begin is inside [begin, end).
// @field VectorLike +0x08 uint32_t field_0x08
// @field VectorLike +0x0C uint32_t field_0x0C
uint32_t fn_00699360(void* self) {
    const uint32_t begin = lift_field<uint32_t>(self, 0x08);
    if (begin != 0) {
        const uint32_t end = lift_field<uint32_t>(self, 0x0C);
        const int32_t count = static_cast<int32_t>(end - begin) >> 5;
        if (count != 0) {
            if (begin > end) {
                ext_invalid_parameter_noinfo();
            }
            if (!(begin < end)) {
                ext_invalid_parameter_noinfo();
            }
            return begin;
        }
    }
    return 0x00B59400u;
}
} // namespace lift_00699360

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

// [0x006991A0]
namespace lift_006991A0 {
uint32_t mem_read32(uint32_t addr);
void mem_write32(uint32_t addr, uint32_t val);

// @name sub_006991A0_dtor
// @summary Destructor that sets vtable 0x98fac4, deletes member at +0x8 via vtable[0](1), and restores base vtable 0x98fabc
// @field Class +0x00 uint32_t vptr
// @field Class +0x08 uint32_t field_0x08
void __thiscall sub_006991A0(uint32_t ecx_this) {
    mem_write32(ecx_this, 0x0098FAC4u);

    uint32_t member = mem_read32(ecx_this + 0x8u);
    if (member != 0u) {
        uint32_t vtable = mem_read32(member);
        uint32_t dtor_fn = mem_read32(vtable);
        using dtor_t = void (__thiscall *)(uint32_t, uint32_t);
        reinterpret_cast<dtor_t>(static_cast<uintptr_t>(dtor_fn))(member, 1u);
    }

    mem_write32(ecx_this, 0x0098FABCu);
}
} // namespace lift_006991A0

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

// [0x00696B70] sub_00696B70 (86 bytes)
namespace lift_00696B70 {
extern int mem_009250E4;
extern int mem_009250E8;
extern int mem_009250EC;

// MSVCP80 imports used by this function (called through IAT slots 0x9250E4, 0x9250E8, 0x9250EC).
// basic_istream<char>::get() -- thiscall, returns int_type (low byte is the char, 0xFF is treated as EOF here).
extern int __thiscall ext_MSVCP80_istream_get(void* self);
// basic_istream<char>::putback(char) -- thiscall, returns istream&.
extern void* __thiscall ext_MSVCP80_istream_putback(void* self, char c);
// operator>>(basic_istream<char>&, basic_string<char>&) -- free function, returns istream&.
extern void* __cdecl ext_MSVCP80_operator_extract_string(void* in, void* str);

// @name readTokenSkippingBlanks
// @summary Skips spaces and tabs on an istream; on EOF or newline returns false, otherwise puts the
//          first non-blank char back, extracts a string token into `str`, and returns true.
// (No class fields are accessed directly; `stream` and `str` are opaque MSVCP80 objects passed to imports.)
bool fn_00696B70(void* stream, void* str) {
    for (;;) {
        const uint8_t b = static_cast<uint8_t>(ext_MSVCP80_istream_get(stream));
        if (b == 0x20 || b == 0x09) {
            continue;
        }
        if (b == 0xFF) {
            return false;
        }
        ext_MSVCP80_istream_putback(stream, static_cast<char>(b));
        if (b == 0x0A) {
            return false;
        }
        ext_MSVCP80_operator_extract_string(stream, str);
        return true;
    }
}
} // namespace lift_00696B70
