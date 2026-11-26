// Lifted C++ translation unit: lifted/leaf/decompiled_680000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <new>
#include <string>

#include <string>
namespace lift_006829E0 {
// Known callee 0x0066B080: sub_0066B080 (Auto-lifted identical-shape clone of 0x004D0B60 (GetTableEntry28Address).)
extern void* ext_0066B080(uint32_t index);

// @name VTableDispatch::GetTableEntry28ViaSlot30
// @class VTableDispatch
// @summary Loads the object at this+0x28, calls its vtable slot at +0x30 to obtain an index, and returns GetTableEntry28Address(index).
// @field VTableDispatch +0x28 void* target
void* fn_006829E0(void* self) {
    void* target = lift_field<void*>(self, 0x28);
    void* vtable = lift_field<void*>(target, 0x00);
    using Slot30 = uint32_t (__thiscall*)(void* self);
    Slot30 slot = reinterpret_cast<Slot30>(lift_field<void*>(vtable, 0x30));
    uint32_t index = slot(target);
    return ext_0066B080(index);
}
} // namespace lift_006829E0
#include <cstddef>
#include <bit>
#include <cstring>
#include <istream>

#include <istream>
namespace lift_006813B0 {
// @name sub_006813B0
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_006812A0(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_006813B0(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_006812A0(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_006813B0
#include <cmath>
#include <cstdlib>

#include <cstdlib>
namespace lift_00687510 {
// @name sub_00687510
// @summary Auto-lifted identical-shape clone of 0x0040A910 (sub_00407830).
namespace lift_0040A910 {
// Imported MFC80 ordinal 297 (thiscall: self = first arg, then 2 stack args), via indirect slot.
extern void (*mem_00924FE0)(void* self, void* subobject, int flags);

// @name Unknown::forwardSubobject68ThenMfcOrd297
// @class Unknown
// @summary Calls MFC80 ordinal 297 on the argument with (this+0x68, 0) and returns the argument.
// @field Unknown +0x68 void* subobject
void* fn_00687510(void* self, void* arg1) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x28;
    mem_00924FE0(arg1, subobject, 0);
    return arg1;
}
} // namespace lift_0040A910
} // namespace lift_00687510
#include <exception>

// [0x00682E20] sub_00682E20 (33 bytes)
namespace lift_00682E20 {
// @name Unknown::computeScaledDeltaDiv128
// @class Unknown
// @summary Returns 0 if field_0x04 is 0; otherwise returns (field_0x08 - field_0x04) scaled by a signed reciprocal multiply and divided by 128 with round-toward-zero correction.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
int32_t fn_00682E20(void* self) {
    const int32_t a = lift_field<int32_t>(self, 0x04);
    if (a == 0) {
        return 0;
    }

    const int32_t delta = lift_field<int32_t>(self, 0x08) - a;

    // Signed 32x32 -> 64 multiply (imul), keep the high dword.
    const int64_t prod = static_cast<int64_t>(static_cast<int32_t>(0xDD67C8A7u)) *
                         static_cast<int64_t>(delta);
    int32_t hi = static_cast<int32_t>(static_cast<uint64_t>(prod) >> 32);
    hi = static_cast<int32_t>(static_cast<uint32_t>(hi) + static_cast<uint32_t>(delta));

    // Arithmetic shift by 7, then add 1 if the result was negative.
    const int32_t t = hi >> 7;
    return static_cast<int32_t>(t + static_cast<int32_t>(static_cast<uint32_t>(t) >> 31));
}
} // namespace lift_00682E20

// [0x0068BC00] sub_0068BC00 (36 bytes)
namespace lift_0068BC00 {
extern DWORD ext_005111E0(void* self, DWORD* count);

// @name DecrementAndForwardAt0x10
// @summary If the count argument is nonzero, decrement it and forward the decremented count (by pointer) to ext_005111E0 on this+0x10; otherwise return 0.
// @field Unknown +0x10 void* field_0x10 (address only; this+0x10 passed as the this-pointer to ext_005111E0)
DWORD fn_0068BC00(void* self, DWORD count) {
    if (count == 0) {
        return 0;
    }
    count -= 1;
    return ext_005111E0(static_cast<uint8_t*>(self) + 0x10, &count);
}
} // namespace lift_0068BC00

// [0x00688BE0] sub_00688BE0 (37 bytes)
namespace lift_00688BE0 {
extern int mem_00924FF4;

// @name DestroyStringRange
// @summary Destroys the std::string member (at +0x08) of each 0x24-byte element in [begin, end).
// @field Unknown +0x08 std::string field_0x08

using BasicStringDtor = void(__thiscall*)(void* self);

void fn_00688BE0(uint8_t* begin, uint8_t* end) {
    if (begin == end) {
        return;
    }
    auto dtor = reinterpret_cast<BasicStringDtor>(static_cast<uintptr_t>(mem_00924FF4));
    do {
        dtor(begin + 0x08);
        begin += 0x24;
    } while (begin != end);
}
} // namespace lift_00688BE0

// [0x00688B20] sub_00688B20 (37 bytes)
namespace lift_00688B20 {
extern uintptr_t mem_00924FF4;

// @name DestroyStringRange
// @summary Destroys the std::string at +0x10 of each 44-byte element in [begin, end) (__stdcall, ret 8).
// @field Unknown +0x10 std::string field_0x10
void __stdcall fn_00688B20(uint8_t* begin, uint8_t* end) {
    // Element stride is 0x2C; the string destructor is called through the
    // import slot at mem_00924FF4 with `this` = element + 0x10.
    using StringDtorFn = void(__thiscall*)(void*);
    auto dtor = reinterpret_cast<StringDtorFn>(mem_00924FF4);

    for (uint8_t* p = begin; p != end; p += 0x2C) {
        dtor(p + 0x10);
    }
}
} // namespace lift_00688B20

// [0x0068BDC0]
namespace lift_0068BDC0 {
extern uint32_t __thiscall ext_00508680(uint32_t self);
extern double mem_0093BD38;
extern double mem_0094FF78;

// @name sub_0068BDC0
// @summary Calls ext_00508680 on this+0x10, converts unsigned result to double, scales by mem_0094FF78, and returns float
// @field Class +0x10 uint8_t field_0x10
float __thiscall sub_0068BDC0(uint32_t self) {
    uint32_t val = ext_00508680(self + 0x10);
    double d = static_cast<double>(static_cast<int32_t>(val));
    if (static_cast<int32_t>(val) < 0) {
        d += mem_0093BD38;
    }
    d *= mem_0094FF78;
    return static_cast<float>(d);
}
} // namespace lift_0068BDC0

// [0x0068BE70]
namespace lift_0068BE70 {
extern uint32_t __thiscall ext_00508680(void* self);
extern double mem_0093BD38;
extern double mem_0098E428;

// @name sub_0068BE70
// @summary Calls sub_00508680 on this+0x10 and converts the unsigned 32-bit result to a scaled float
// @field Unknown +0x10 uint8_t field_0x10
float __thiscall sub_0068BE70(void* self) {
    uint32_t val = ext_00508680(reinterpret_cast<uint8_t*>(self) + 0x10);
    double d = static_cast<double>(static_cast<int32_t>(val));
    if (static_cast<int32_t>(val) < 0) {
        d += mem_0093BD38;
    }
    d *= mem_0098E428;
    return static_cast<float>(d);
}
} // namespace lift_0068BE70

// [0x006829A0]
namespace lift_006829A0 {
extern void __stdcall ext_0065D3F0(int32_t handle);
extern int32_t mem_00B5ACC8;

// @name ReleaseHandleAtOffset88
// @class <ClassName> (optional)
// @summary If the int32 at +0x88 is valid (not -1) and the global at 0x00B5ACC8 is nonzero, releases that handle via ext_0065D3F0 and resets it to -1.
// @field <ClassName> +0x88 int32_t field_0x88
void fn_006829A0(void* self) {
    int32_t handle = lift_field<int32_t>(self, 0x88);
    if (handle != -1 && mem_00B5ACC8 != 0) {
        ext_0065D3F0(handle);
        lift_field<int32_t>(self, 0x88) = -1;
    }
}
} // namespace lift_006829A0

// [0x00681380] sub_00681380 (41 bytes)
namespace lift_00681380 {
// @name sub_00681380
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00681170(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00681380(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00681170(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00681380

// [0x00686800] sub_00686800 (41 bytes)
namespace lift_00686800 {
// @name sub_00686800
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00685DA0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00686800(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00685DA0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00686800

// [0x00688AF0] sub_00688AF0 (41 bytes)
namespace lift_00688AF0 {
// @name sub_00688AF0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00687F10(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00688AF0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00687F10(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00688AF0

// [0x00688D30] sub_00688D30 (41 bytes)
namespace lift_00688D30 {
// @name sub_00688D30
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00687FC0(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_00688D30(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00687FC0(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_00688D30

// [0x0068BED0]
namespace lift_0068BED0 {
extern uint32_t __thiscall ext_00508680(void* self);
extern uint64_t mem_0093BD38;
extern uint64_t mem_0098E430;

// @name sub_0068BED0
// @summary Converts an unsigned 32-bit value from sub_00508680(this + 0x10) to float via double scaling
// @field sub_0068BED0 +0x10 uint8_t field_0x10
float __thiscall sub_0068BED0(void* self) {
    uint32_t eax = ext_00508680(static_cast<uint8_t*>(self) + 0x10);
    double val = static_cast<double>(static_cast<int32_t>(eax));
    if (static_cast<int32_t>(eax) < 0) {
        double adj = *reinterpret_cast<const double*>(&mem_0093BD38);
        val += adj;
    }
    double c = *reinterpret_cast<const double*>(&mem_0098E430);
    double res = val * c + c;
    return static_cast<float>(res);
}
} // namespace lift_0068BED0

// [0x00689570] sub_00689570 (47 bytes)
namespace lift_00689570 {
// @name initDefaultState
// @summary Zeroes a state block and sets default double values (0.0 at +0x10/+0x18, 1.0 at +0x30).
// @class (none)
// @field (none) +0x00 uint8_t field_0x00
// @field (none) +0x01 uint8_t field_0x01
// @field (none) +0x02 uint8_t field_0x02
// @field (none) +0x03 uint8_t field_0x03
// @field (none) +0x04 uint32_t field_0x04
// @field (none) +0x08 uint32_t field_0x08
// @field (none) +0x0C uint32_t field_0x0C
// @field (none) +0x10 double field_0x10
// @field (none) +0x18 double field_0x18
// @field (none) +0x24 uint32_t field_0x24
// @field (none) +0x28 uint32_t field_0x28
// @field (none) +0x2C uint32_t field_0x2C
// @field (none) +0x30 double field_0x30
void fn_00689570(void* self) {
    lift_field<DOUBLE>(self, 0x10) = 0.0;
    lift_field<DOUBLE>(self, 0x18) = 0.0;
    lift_field<BYTE>(self, 0x00) = 0;
    lift_field<BYTE>(self, 0x01) = 0;
    lift_field<BYTE>(self, 0x02) = 0;
    lift_field<BYTE>(self, 0x03) = 0;
    lift_field<DWORD>(self, 0x04) = 0;
    lift_field<DWORD>(self, 0x08) = 0;
    lift_field<DWORD>(self, 0x0C) = 0;
    lift_field<DWORD>(self, 0x24) = 0;
    lift_field<DWORD>(self, 0x28) = 0;
    lift_field<DWORD>(self, 0x2C) = 0;
    lift_field<DOUBLE>(self, 0x30) = 1.0;
}
} // namespace lift_00689570

// [0x0068BEA0] sub_0068BEA0 (47 bytes)
namespace lift_0068BEA0 {
extern int32_t ext_00508680(void* self);
extern double mem_0093BD38; // 2^32 correction added to negative signed inputs (x87 fild sign fixup)
extern double mem_0098E428; // scale constant applied to converted value

// @name Unknown::scaledCallResult
// @class Unknown
// @summary Calls sub_00508680 on self+0x10, converts the unsigned-corrected result to double, scales it by two constants and the float argument, and returns it as float.
// @field Unknown +0x10 void* field_0x10
float fn_0068BEA0(void* self, float scale) {
    int32_t raw = ext_00508680(static_cast<uint8_t*>(self) + 0x10);
    double value = static_cast<double>(raw);
    if (raw < 0) {
        value += mem_0093BD38;
    }
    value *= mem_0098E428;
    return static_cast<float>(value * static_cast<double>(scale));
}
} // namespace lift_0068BEA0

// [0x0068BE40] sub_0068BE40 (47 bytes)
namespace lift_0068BE40 {
extern int __thiscall ext_00508680(void* self);
extern double mem_0093BD38; // 2^32 bias for unsigned conversion (qword)
extern double mem_0094FF78; // scale constant (qword)

// @name getScaledUnsignedSubvalue
// @summary Calls sub_00508680 on this+0x10, treats its 32-bit result as unsigned, scales by mem_0094FF78 and the float argument, returns float.
float __thiscall fn_0068BE40(void* self, float scale) {
    int v = ext_00508680(static_cast<char*>(self) + 0x10);
    double d = static_cast<double>(v);
    if (v < 0) {
        d += mem_0093BD38;
    }
    d *= mem_0094FF78;
    d *= static_cast<double>(scale);
    return static_cast<float>(d);
}
} // namespace lift_0068BE40

// [0x006813D0] sub_006813D0 (55 bytes)
namespace lift_006813D0 {
// @name sub_006813D0
// @summary Auto-lifted identical-shape clone of 0x00481DE0 (fillStructArrayAndGetEnd).
namespace lift_00481DE0 {
extern void ext_006812E0(uint32_t dst, uint32_t count, uint32_t src);

// @name fillStructArrayAndGetEnd
// @summary Fills count 64-byte slots at dst with the template at src via ext_00481770 and returns dst + count*64.
// Note: the original pushes extra stack words (saved ecx, a flag dword, and a duplicate of src) that the
// callee ignores per its 3-argument signature; they are not reproduced here.
uint32_t __stdcall fn_006813D0(uint32_t dst, uint32_t count, uint32_t src) {
    ext_006812E0(dst, count, src);
    return dst + (count << 4);
}
} // namespace lift_00481DE0
} // namespace lift_006813D0

// [0x0068BF00]
namespace lift_0068BF00 {
extern uint32_t __thiscall ext_00508680(void* self);
extern const double mem_0093BD38;
extern const double mem_0098E430;

// @name scaleByRandom_0068BF00
// @summary Scales a float argument using a value from sub_00508680 and two double constants.
// @field unknown +0x10 uint8_t field_0x10[]
extern float __thiscall sub_0068BF00(void* self, float scale) {
    uint32_t val = ext_00508680(static_cast<uint8_t*>(self) + 0x10);
    double d = static_cast<double>(static_cast<int32_t>(val));
    if (static_cast<int32_t>(val) < 0) {
        d += mem_0093BD38;
    }
    double factor = mem_0098E430;
    double res = (d * factor + factor) * static_cast<double>(scale);
    return static_cast<float>(res);
}
} // namespace lift_0068BF00

// [0x00688BA0] sub_00688BA0 (55 bytes)
namespace lift_00688BA0 {
// @name sub_00688BA0
// @summary Auto-lifted identical-shape clone of 0x0054F2C0 (ComputeRecordAddress).
namespace lift_0054F2C0 {
extern void ext_00688730(std::uintptr_t a0, std::uint32_t a1, std::uint32_t a2,
                             std::uint32_t a3, std::uint32_t a4, std::uint32_t a5);

// @name ComputeRecordAddress
// @summary Calls helper sub_0054F1E0 with the arguments and a zeroed flag word, then returns base + index * 0x68.
// (no direct struct field accesses in this function)
__stdcall std::uint8_t* fn_00688BA0(std::uint8_t* base, std::uint32_t index, std::uint32_t arg2) {
    // The original stores 0 into the low byte of a stack slot that previously held ECX,
    // so the dword passed on is ECX with its low byte cleared. ECX at entry is not
    // recoverable from the stdcall signature; it is modelled as a placeholder here.
    std::uint32_t ecx_in = 0;
    std::uint32_t flag_slot = ecx_in & 0xFFFFFF00u;

    ext_00688730(reinterpret_cast<std::uintptr_t>(base), index, arg2, ecx_in, arg2, flag_slot);

    return base + static_cast<std::size_t>(index) * 0x2Cu;
}
} // namespace lift_0054F2C0
} // namespace lift_00688BA0

// [0x0068EE80] sub_0068EE80 (64 bytes)
namespace lift_0068EE80 {
extern uint32_t mem_00924FC4;   // import: std::operator==(const std::string&, const std::string&)
extern uint8_t mem_00B5AE40[84]; // static table: 3 string-sized entries (28 bytes each) at 0x00B5AE40

// @name FindStringInStaticTable
// @summary Linear search of the 3-entry static string table at 0x00B5AE40; returns the matching index, or 0 if none match.
int __stdcall fn_0068EE80(const void* key) {
    using StringEqualFn = bool(__cdecl*)(const void*, const void*);
    auto string_equal = reinterpret_cast<StringEqualFn>(static_cast<uintptr_t>(mem_00924FC4));

    for (int index = 0; index < 3; ++index) {
        const void* entry = mem_00B5AE40 + index * 28;
        if (string_equal(key, entry)) {
            return index;
        }
    }
    return 0;
}
} // namespace lift_0068EE80

// [0x00687380]
namespace lift_00687380 {
extern uint32_t (__thiscall* mem_00924FDC)(void* self, const void* rhs);

// @name copyRange0x24
// @summary Copies a range of 0x24-byte elements containing a u32, a u8, and a std::string.
uint8_t* __cdecl sub_00687380(uint8_t* first, uint8_t* last, uint8_t* dest) {
    while (first != last) {
        *reinterpret_cast<uint32_t*>(dest) = *reinterpret_cast<const uint32_t*>(first);
        dest[4] = first[4];
        mem_00924FDC(dest + 8, first + 8);
        first += 0x24;
        dest += 0x24;
    }
    return dest;
}
} // namespace lift_00687380

// [0x00687420]
namespace lift_00687420 {
// @name copyBackwardStruct0x24
// @summary Copies a range of 0x24-byte structs backward, copying a u32, a u8, and assigning a std::string at +0x08.


extern uint32_t mem_00924FDC;

using StringAssignFn = uint32_t(__thiscall*)(uint32_t dst_str, uint32_t src_str);

uint32_t __cdecl sub_00687420(uint32_t first, uint32_t last, uint32_t dest_end) {
    uint32_t esi = last;
    if (first == esi) {
        return dest_end;
    }

    uint32_t edi = dest_end;
    auto string_assign = reinterpret_cast<StringAssignFn>(static_cast<uintptr_t>(mem_00924FDC));

    do {
        esi -= 0x24;
        edi -= 0x24;
        *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(edi)) =
            *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(esi));
        *reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(edi + 0x4)) =
            *reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(esi + 0x4));
        string_assign(edi + 0x8, esi + 0x8);
    } while (esi != first);

    return edi;
}
} // namespace lift_00687420

// [0x0068BDF0]
namespace lift_0068BDF0 {
// @name ComputeAbsBlendWithCallee
// @summary Returns x + r * |a - x|, where r is ext_00508680's result (read as unsigned) scaled by a constant.

extern int ext_00508680(void* self, double arg);

extern const double mem_0093BD38; // 2^32 bias added when the callee result is negative (unsigned reinterpretation)
extern const double mem_0094FF78; // scale applied to the unsigned callee result

float ComputeAbsBlendWithCallee(void* self, float x, float a) {
    const double xd = static_cast<double>(x);
    const int res = ext_00508680(static_cast<char*>(self) + 0x10, xd);

    double r = static_cast<double>(res);
    if (res < 0) {
        r += mem_0093BD38;
    }
    r *= mem_0094FF78;

    double d = static_cast<double>(a) - xd;
    if (d < 0.0) {
        d = -d;
    }

    const double result = xd + r * d;
    return static_cast<float>(result);
}
} // namespace lift_0068BDF0

// [0x00686780] sub_00686780 (43 bytes)
namespace lift_00686780 {
// @name sub_00686780
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_00686260(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00686780(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_00686260(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00686780

// [0x006886D0] sub_006886D0 (43 bytes)
namespace lift_006886D0 {
// @name sub_006886D0
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_00687920(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_006886D0(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_00687920(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_006886D0

// [0x00688700] sub_00688700 (43 bytes)
namespace lift_00688700 {
// @name sub_00688700
// @summary Auto-lifted identical-shape clone of 0x0054F290 (Unknown::RelocateRangeBackwardWrapper_0054F290).
namespace lift_0054F290 {
// Known callee 0x0054F120: Unknown::RelocateRangeBackward_0054F120 (Walks a 104-byte-element range [begin,end) from the back, invoking ext_0054F030 on each element with a destination pointer shifted by (value - end); returns value minus the range size in bytes.)
extern uint32_t ext_00687980(uint32_t begin, uint32_t end, uint32_t value);

// @name Unknown::RelocateRangeBackwardWrapper_0054F290
// @summary Forwards its three stack arguments unchanged to RelocateRangeBackward (0x0054F120) and returns that result; the original stack shuffling only reorders copies of the arguments.
uint32_t fn_00688700(uint32_t begin, uint32_t end, uint32_t value) {
    return ext_00687980(begin, end, value);
}
} // namespace lift_0054F290
} // namespace lift_00688700

// [0x00682280] sub_00682280 (75 bytes)
namespace lift_00682280 {
// IAT slot holding MSVCP80 std::basic_string<char>::swap (thiscall, 1 stack arg).
extern uint32_t mem_00924FBC;

// @name ShuffleStringRange_00682280
// @summary For each element after the first in a std::string[] range, swap it with element 0, 1 or -1 chosen by gen(n) % 2 (n starts at 2).
// @field none: accesses only element-relative addresses (stride 0x1C), no fixed-offset fields
void fn_00682280(void* begin, void* end, void* gen) {
    using StringSwapFn = void(__thiscall*)(void* self, void* other);
    using GenFn = int(__cdecl*)(int);

    constexpr std::ptrdiff_t kStride = 0x1C;

    auto* base = static_cast<uint8_t*>(begin);
    auto* last = static_cast<uint8_t*>(end);
    uint8_t* cur = base + kStride;
    if (cur == last) {
        return;
    }

    auto swapFn = reinterpret_cast<StringSwapFn>(static_cast<uintptr_t>(mem_00924FBC));
    GenFn genFn = *reinterpret_cast<GenFn*>(gen);

    int n = 2;
    do {
        int r = genFn(n) % 2;  // signed remainder: -1, 0 or 1
        uint8_t* other = base + static_cast<std::ptrdiff_t>(r) * kStride;
        swapFn(cur, other);
        cur += kStride;
        ++n;
    } while (cur != last);
}
} // namespace lift_00682280

// [0x006872E0] sub_006872E0 (76 bytes)
namespace lift_006872E0 {
// Import slot (MSVCP80 std::operator==(const basic_string&, const char*)), via IAT mem_00924FC0.
extern uint8_t __cdecl ext_00924FC0(const void* str, const char* s);
// .data pointer to the comparison C string (mem_00A9F838 -> 0x00958FC8).
extern const char* mem_00A9F838;
// Byte lookup table indexed by the state value at +0x48 (base 0x00AA2FE4).
extern uint8_t mem_00AA2FE4;

// @name Unknown::CheckStateFlags_006872E0
// @class Unknown
// @summary If state==0x15 returns 1 when both flag bytes are clear; otherwise returns 0 when the string at +0x10 equals the reference string, else looks up a byte table by state.
// @field Unknown +0x10 std::string field_0x10
// @field Unknown +0x48 uint32_t field_0x48
// @field Unknown +0xB2 uint8_t field_0xb2
// @field Unknown +0xB3 uint8_t field_0xb3
uint8_t fn_006872E0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    const uint32_t state = *reinterpret_cast<uint32_t*>(base + 0x48);

    if (state == 0x15) {
        const uint8_t flagB2 = base[0xb2];
        const uint8_t flagB3 = base[0xb3];
        if (flagB2 != 0 || flagB3 != 0) {
            return 0;
        }
        return 1;
    }

    if (ext_00924FC0(base + 0x10, mem_00A9F838) != 0) {
        return 0;
    }
    return (&mem_00AA2FE4)[state];
}
} // namespace lift_006872E0

// [0x00687E50] sub_00687E50 (85 bytes)
namespace lift_00687E50 {
// Known callee 0x00687330: Unknown::CopyStringRecordRange_00687330 (copies each 0x2C-byte StringRecord in [first, last) to dest and returns the end of the written range; the caller's return value is discarded here).
extern void* ext_00687330(const void* first, const void* last, void* dest);

// @name copyStringRecordRangeAdvance_00687E50
// @summary Copies the StringRecord range [first, last) to dest, then returns dest advanced by the record count times 0x2C (sizeof StringRecord).
void* fn_00687E50(const void* first, const void* last, void* dest) {
    // Copy the records; the callee's return value is not used by this function.
    ext_00687330(first, last, dest);

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

// [0x00687EB0] sub_00687EB0 (86 bytes)
namespace lift_00687EB0 {
// Known callee 0x00687380: copyRange0x24 (Copies a range of 0x24-byte elements containing a u32, a u8, and a std::string.)
extern uint8_t* ext_00687380(uint8_t* first, uint8_t* last, uint8_t* dest);

// @name copyRange0x24AndGetEnd_00687EB0
// @summary Copies the 0x24-byte records in [first, last) to dest and returns dest advanced by the copied record count times 0x24.
uint8_t* fn_00687EB0(uint8_t* first, uint8_t* last, uint8_t* dest) {
    ext_00687380(first, last, dest);
    const int32_t byteCount = static_cast<int32_t>(last - first);
    const int32_t recordCount = byteCount / 36;
    return dest + static_cast<ptrdiff_t>(recordCount) * 36;
}
} // namespace lift_00687EB0

// [0x00687920] sub_00687920 (89 bytes)
namespace lift_00687920 {
// Known callee 0x006873D0: Unknown::CopyRecordRangeBackward_006873D0 (Copies records of 0x2C bytes from [first, last) backward into the range ending at dest_last, returning the new begin (dest_last if the range is empty).)
extern void* ext_006873D0(void* first, void* last, void* dest_last);

// @name Unknown::copyRecordRangeAndRebase_00687920
// @summary Copies a 0x2C-byte record range backward via ext_006873D0, then returns dest_last rewound by the whole-record count of [first, last).
void* fn_00687920(void* first, void* last, void* dest_last) {
    ext_006873D0(first, last, dest_last);

    const std::intptr_t bytes = reinterpret_cast<std::intptr_t>(last) - reinterpret_cast<std::intptr_t>(first);
    const std::intptr_t records = bytes / 44; // 0x2C-byte records, truncated toward zero
    const std::intptr_t newBegin = reinterpret_cast<std::intptr_t>(dest_last) - records * 44;
    return reinterpret_cast<void*>(newBegin);
}
} // namespace lift_00687920

// [0x00687E20] sub_00687E20 (43 bytes)
namespace lift_00687E20 {
// @name sub_00687E20
// @summary Auto-lifted identical-shape clone of 0x00406290 (copyStringRange_00406290).
namespace lift_00406290 {
// Known callee 0x00406090: std::copy<std::string*, std::string*> (Copies a range of std::string objects from [first, last) to dest and returns the end of the destination range.)
extern uint32_t ext_0062BA00(uint32_t first, uint32_t last, uint32_t dest);

// @name copyStringRange_00406290
// @summary Forwards (first, last, dest) to the std::string range-copy helper and returns its result.
extern uint32_t fn_00687E20(uint32_t first, uint32_t last, uint32_t dest) {
    // The original's stack shuffling (a dead zeroed byte local and redundant
    // argument pushes) has no observable effect; only the three arguments
    // reach the callee, and its return value is passed through in eax.
    return ext_0062BA00(first, last, dest);
}
} // namespace lift_00406290
} // namespace lift_00687E20

// [0x0068BB60]
namespace lift_0068BB60 {
// @name sub_0068BB60_dtor
// @summary Destructor that resets vtables at +0x0 and +0x4, then calls subobject and base destructors
// @field Self +0x0 uintptr_t field_0x0
// @field Self +0x4 uintptr_t field_0x4


extern uint8_t mem_0098DD14[];
extern uint8_t mem_0098DCE4[];

void __fastcall ext_0065C660(void* self);
void __fastcall ext_0065F440(void* self);

extern void __fastcall fn_0068BB60(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uintptr_t*>(base + 0x0) = reinterpret_cast<uintptr_t>(mem_0098DD14);
    *reinterpret_cast<uintptr_t*>(base + 0x4) = reinterpret_cast<uintptr_t>(mem_0098DCE4);
    ext_0065C660(base + 0x4);
    ext_0065F440(base);
}
} // namespace lift_0068BB60

// [0x00681410] sub_00681410 (89 bytes)
namespace lift_00681410 {
// @name sub_00681410
// @summary Auto-lifted identical-shape clone of 0x0057E9E0 (Unknown::eraseStringVectorRange).
namespace lift_0057E9E0 {
// @name Unknown::eraseStringVectorRange
// @class Unknown
// @summary Erases [first, last) from a 0x14-byte-record vector by shifting [last, end) over first, destroying the trailing elements, and returning the updated iterator.
// @field Unknown +0x08 void* end

void ext_006812A0(void* first, void* last);
void* ext_006810D0(const void* first, const void* last, void* out);
extern void (*mem_00925134)();

struct VectorIterator {
    void* container;
    void* ptr;
};

VectorIterator* __thiscall fn_00681410(void* self, VectorIterator* out_iter, void* first_container, void* first_ptr, void* last_container, void* last_ptr) {
    if (!first_container || first_container != last_container) {
        mem_00925134();
    }
    if (first_ptr != last_ptr) {
        void* end_ptr = *(void**)((char*)self + 0x08);
        void* new_end = ext_006810D0(last_ptr, end_ptr, first_ptr);
        ext_006812A0(new_end, end_ptr);
        *(void**)((char*)self + 0x08) = new_end;
    }
    out_iter->container = first_container;
    out_iter->ptr = first_ptr;
    return out_iter;
}
} // namespace lift_0057E9E0
} // namespace lift_00681410

// [0x006836F0] sub_006836F0 (30 bytes)
namespace lift_006836F0 {
// @name sub_006836F0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_00683190();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_006836F0(DWORD* dst, DWORD value) {
    DWORD obj = ext_00683190();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_006836F0

// [0x00685BA0] sub_00685BA0 (30 bytes)
namespace lift_00685BA0 {
// @name sub_00685BA0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_006850E0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_00685BA0(DWORD* dst, DWORD value) {
    DWORD obj = ext_006850E0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_00685BA0

// [0x00685BC0] sub_00685BC0 (30 bytes)
namespace lift_00685BC0 {
// @name sub_00685BC0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_00685140();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_00685BC0(DWORD* dst, DWORD value) {
    DWORD obj = ext_00685140();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_00685BC0

// [0x00685BE0] sub_00685BE0 (30 bytes)
namespace lift_00685BE0 {
// @name sub_00685BE0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_006851A0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_00685BE0(DWORD* dst, DWORD value) {
    DWORD obj = ext_006851A0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_00685BE0

// [0x00685C00] sub_00685C00 (30 bytes)
namespace lift_00685C00 {
// @name sub_00685C00
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_00685200();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_00685C00(DWORD* dst, DWORD value) {
    DWORD obj = ext_00685200();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_00685C00

// [0x00681C50] sub_00681C50 (87 bytes)
namespace lift_00681C50 {
// @name sub_00681C50
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5A228;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5A224;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00681C50() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B50DEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5A228 & 1u) == 0) {
        mem_00B5A228 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5A224, frame[0]);
        mem_00B5A224 = 0x93F1ACu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5A224;
}
} // namespace lift_004CAE30
} // namespace lift_00681C50

// [0x00683190] sub_00683190 (87 bytes)
namespace lift_00683190 {
// @name sub_00683190
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5AD48;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5AD44;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00683190() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B52CEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5AD48 & 1u) == 0) {
        mem_00B5AD48 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5AD44, frame[0]);
        mem_00B5AD44 = 0x98CEBCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5AD44;
}
} // namespace lift_004CAE30
} // namespace lift_00683190

// [0x006850E0] sub_006850E0 (87 bytes)
namespace lift_006850E0 {
// @name sub_006850E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5AD78;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5AD74;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006850E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B540Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5AD78 & 1u) == 0) {
        mem_00B5AD78 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5AD74, frame[0]);
        mem_00B5AD74 = 0x98D144u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5AD74;
}
} // namespace lift_004CAE30
} // namespace lift_006850E0

// [0x00685140] sub_00685140 (87 bytes)
namespace lift_00685140 {
// @name sub_00685140
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5AD80;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5AD7C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00685140() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B542Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5AD80 & 1u) == 0) {
        mem_00B5AD80 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5AD7C, frame[0]);
        mem_00B5AD7C = 0x98D2F4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5AD7C;
}
} // namespace lift_004CAE30
} // namespace lift_00685140

// [0x006851A0] sub_006851A0 (87 bytes)
namespace lift_006851A0 {
// @name sub_006851A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5AD88;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5AD84;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_006851A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B544Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5AD88 & 1u) == 0) {
        mem_00B5AD88 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5AD84, frame[0]);
        mem_00B5AD84 = 0x98D4A4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5AD84;
}
} // namespace lift_004CAE30
} // namespace lift_006851A0

// [0x00685200] sub_00685200 (87 bytes)
namespace lift_00685200 {
// @name sub_00685200
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5AD90;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5AD8C;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00685200() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B546Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5AD90 & 1u) == 0) {
        mem_00B5AD90 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5AD8C, frame[0]);
        mem_00B5AD8C = 0x98D654u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5AD8C;
}
} // namespace lift_004CAE30
} // namespace lift_00685200

// [0x0068C280] sub_0068C280 (87 bytes)
namespace lift_0068C280 {
// @name sub_0068C280
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5ADC8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5ADC4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0068C280() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B5B8Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5ADC8 & 1u) == 0) {
        mem_00B5ADC8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5ADC4, frame[0]);
        mem_00B5ADC4 = 0x98DF1Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5ADC4;
}
} // namespace lift_004CAE30
} // namespace lift_0068C280

// [0x0068C2E0] sub_0068C2E0 (87 bytes)
namespace lift_0068C2E0 {
// @name sub_0068C2E0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5ADD0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5ADCC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0068C2E0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B5BAEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5ADD0 & 1u) == 0) {
        mem_00B5ADD0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5ADCC, frame[0]);
        mem_00B5ADCC = 0x98E0CCu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5ADCC;
}
} // namespace lift_004CAE30
} // namespace lift_0068C2E0

// [0x0068C340] sub_0068C340 (87 bytes)
namespace lift_0068C340 {
// @name sub_0068C340
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5ADD8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5ADD4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0068C340() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B5BCEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5ADD8 & 1u) == 0) {
        mem_00B5ADD8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5ADD4, frame[0]);
        mem_00B5ADD4 = 0x98E1A4u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5ADD4;
}
} // namespace lift_004CAE30
} // namespace lift_0068C340

// [0x0068C3A0] sub_0068C3A0 (87 bytes)
namespace lift_0068C3A0 {
// @name sub_0068C3A0
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5ADE0;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5ADDC;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0068C3A0() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B5BEEu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5ADE0 & 1u) == 0) {
        mem_00B5ADE0 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5ADDC, frame[0]);
        mem_00B5ADDC = 0x98E27Cu;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5ADDC;
}
} // namespace lift_004CAE30
} // namespace lift_0068C3A0

// [0x00687980] sub_00687980 (93 bytes)
namespace lift_00687980 {
// @name sub_00687980
// @summary Auto-lifted identical-shape clone of 0x0050A720 (CopyBackwardElements24Wrapper).
namespace lift_0050A720 {
// @name CopyBackwardElements24Wrapper
// @summary Copies 0x24-byte elements backward from [first, last) to d_last and returns the new destination start.


extern void* ext_00687420(void* first, void* last, void* d_last);

void* fn_00687980(void* first, void* last, void* d_last) {
    ext_00687420(first, last, d_last);
    int32_t byte_diff = static_cast<int32_t>(
        reinterpret_cast<uintptr_t>(last) - reinterpret_cast<uintptr_t>(first));
    int32_t count = byte_diff / 0x24;
    return reinterpret_cast<void*>(
        reinterpret_cast<uintptr_t>(d_last) - static_cast<uintptr_t>(count * 0x24));
}
} // namespace lift_0050A720
} // namespace lift_00687980

// [0x00688670]
namespace lift_00688670 {
// @name Unknown::FindFirstKind13Element
// @class Unknown
// @summary Scans the 0x24-byte element array bounded by +0x144/+0x148 and returns the first element whose object has kind 0x13, or nullptr.
// @field Unknown +0x144 uint8_t* elems_begin
// @field Unknown +0x148 uint8_t* elems_end
// @field Element +0x00 uint8_t* obj
// @field ElementObject +0x48 uint32_t kind

// Invalid-parameter handler (original: indirect call through the IAT slot at 0x925134).
extern void (*mem_00925134)(void);

extern void* __thiscall Unknown_FindFirstKind13Element(void* self) {
    uint8_t* cur = lift_field<uint8_t*>(self, 0x144);
    if (cur > lift_field<uint8_t*>(self, 0x148)) {
        mem_00925134();
    }

    for (;;) {
        uint8_t* const end = lift_field<uint8_t*>(self, 0x148);
        if (lift_field<uint8_t*>(self, 0x144) > end) {
            mem_00925134();
        }
        if (cur == end) {
            return nullptr;
        }
        if (cur >= end) {
            mem_00925134();
        }

        uint8_t* const obj = lift_field<uint8_t*>(cur, 0x00);
        if (lift_field<uint32_t>(obj, 0x48) == 0x13u) {
            return cur;
        }

        if (cur >= end) {
            mem_00925134();
        }
        cur += 0x24;
    }
}
} // namespace lift_00688670

// [0x0068C530] sub_0068C530 (94 bytes)
namespace lift_0068C530 {
// Known callee 0x00661980: setVtable_0093BFB4 (Stores the vtable address 0x0093BFB4 into the first dword of the object pointed to by ECX (this).)
extern void ext_00661980(void* self);
// Callee 0x00695440 (sub_00695440, 19 bytes); invoked with this+0x10 as its receiver.
extern void ext_00695440(void* self);

// @name Unknown::Construct_0068C530
// @class Unknown
// @summary Initializes an object's vptr pair, runs ext_00661980 first, clears +0x08, and constructs the sub-object at +0x10 via ext_00695440.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint8_t field_0x10
void fn_0068C530(void* self) {
    auto store32 = [](void* base, std::size_t off, std::uint32_t v) {
        std::memcpy(static_cast<std::uint8_t*>(base) + off, &v, sizeof v);
    };

    ext_00661980(self);                              // sets first vptr dword to 0x0093BFB4
    store32(self, 0x04, 0x00928EFC);                 // intermediate vptr (overwritten below)
    store32(self, 0x00, 0x0098DD14);                 // primary vptr
    store32(self, 0x04, 0x0098DCE4);                 // final vptr for this object
    store32(self, 0x08, 0);                          // clear field_0x08

    ext_00695440(static_cast<std::uint8_t*>(self) + 0x10);
}
} // namespace lift_0068C530

// [0x006895A0] sub_006895A0 (64 bytes)
namespace lift_006895A0 {
// Known callee 0x0041DD40: destroyStringPairRange (Destroys a range [begin, end) of 0x38-byte elements, each containing two std::string fields at +0x00 and +0x1C.)
extern void ext_0041DD40(uint32_t begin, uint32_t end);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(uint32_t ptr);

// @name releaseStringPairBuffer
// @summary Destroys the string-pair range at self+0x24..+0x28, frees its buffer if non-null, and zeroes the three range words.
// @field <unknown> +0x24 uint32_t field_0x24
// @field <unknown> +0x28 uint32_t field_0x28
// @field <unknown> +0x2C uint32_t field_0x2c
void fn_006895A0(void* self) {
    const uint32_t begin = lift_field<uint32_t>(self, 0x24);
    if (begin != 0) {
        const uint32_t end = lift_field<uint32_t>(self, 0x28);
        ext_0041DD40(begin, end);
        ext_006A5C5C(begin);
    }
    lift_field<uint32_t>(self, 0x24) = 0;
    lift_field<uint32_t>(self, 0x28) = 0;
    lift_field<uint32_t>(self, 0x2C) = 0;
}
} // namespace lift_006895A0

// [0x006877B0] sub_006877B0 (99 bytes)
namespace lift_006877B0 {
// Known callee 0x00427640: checkStringEqualsLiteral (Gets a string from the object via ext_004275C0, stores whether it equals the .rdata literal at 0x0092F10C into *out.)
extern void ext_00427640(void* unused, void* self, bool* out);

// @name FlagOrByteStoreByKey
// @class Unknown
// @summary Calls checkStringEqualsLiteral (its result is discarded); if arg2 is one of five magic keys stores the low byte of arg4 to *arg1, otherwise ORs arg3 into this+0x150.
// @field Unknown +0x150 uint32_t field_0x150
void fn_006877B0(void* arg1, void* self, uint32_t arg2, uint32_t arg3, uint8_t arg4) {
    // The callee writes its bool into the caller's stack slot for arg2; that slot is
    // never read back (the original compares the register copy of arg2), so a local suffices.
    bool scratch = false;
    ext_00427640(arg1, self, &scratch);

    if (arg2 == 0x00B53A34u || arg2 == 0x00B53B30u || arg2 == 0x00B53AB0u ||
        arg2 == 0x00B53A70u || arg2 == 0x00B53AF0u) {
        *static_cast<uint8_t*>(arg1) = arg4;
        return;
    }

    lift_field<uint32_t>(self, 0x150) |= arg3;
}
} // namespace lift_006877B0

// [0x00688CC0] sub_00688CC0 (107 bytes)
namespace lift_00688CC0 {
// Known callee 0x00687EB0: copyRange0x24AndGetEnd_00687EB0 (Copies the 0x24-byte records in [first, last) to dest and returns dest advanced by the copied record count times 0x24.)
extern uint8_t* __cdecl ext_00687EB0(uint8_t* first, uint8_t* last, uint8_t* dest);

// Import slots (MSVCR80 _invalid_parameter_noinfo, MSVCP80 basic_string dtor).
extern uintptr_t mem_00925134;
extern uintptr_t mem_00924FF4;

// @name VectorRecords::EraseRangeAndReport
// @class (none)
// @summary Erases the 0x24-byte records in [dest, src) by moving the tail [src, end) down via ext_00687EB0, destroys the vacated tail strings at +0x08, updates end at this+0x08, and writes (guardCopy, src) to outPair.
// @field Unknown +0x08 uint8_t* end
void __thiscall fn_00688CC0(void* self, uint8_t** outPair, uint8_t* guard, uint8_t* dest,
                            uint8_t* guardCopy, uint8_t* src) {
    // Original: guard must be non-null and equal guardCopy, else _invalid_parameter_noinfo.
    if (guard == nullptr || guard != guardCopy) {
        auto invalidParam = reinterpret_cast<void (*)()>(mem_00925134);
        invalidParam();
    }

    if (dest != src) {
        uint8_t* const selfBytes = static_cast<uint8_t*>(self);
        uint8_t** endSlot = reinterpret_cast<uint8_t**>(selfBytes + 0x08);
        uint8_t* end = *endSlot;

        uint8_t* newEnd = ext_00687EB0(src, end, dest);

        using StringDtorFn = void(__thiscall*)(void* self);
        auto dtor = reinterpret_cast<StringDtorFn>(mem_00924FF4);
        for (uint8_t* rec = newEnd; rec != end; rec += 0x24) {
            dtor(rec + 0x08);
        }

        *endSlot = newEnd;
    }

    outPair[0] = guardCopy;
    outPair[1] = src;
}
} // namespace lift_00688CC0

// [0x00686180] sub_00686180 (51 bytes)
namespace lift_00686180 {
// Known callee 0x00685890: Unknown::assignFields_00685890 (thiscall: self in ECX, other on stack)
extern void* __thiscall ext_00685890(void* self, void* other);

// @name Unknown::copyRecordRange_00686180
// @class Unknown
// @summary For each 0x94-byte element in [first, last), stores the leading uint32 of src into it and copy-assigns src's subobject (+0x04) into the element's subobject via ext_00685890.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint8_t field_0x04
void fn_00686180(void* first, void* last, void* src) {
    uint8_t* it = reinterpret_cast<uint8_t*>(first);
    uint8_t* end = reinterpret_cast<uint8_t*>(last);
    while (it != end) {
        lift_field<uint32_t>(it, 0x00) = lift_field<uint32_t>(src, 0x00);
        ext_00685890(it + 0x04, static_cast<uint8_t*>(src) + 0x04);
        it += 0x94;
    }
}
} // namespace lift_00686180

// [0x00687820]
namespace lift_00687820 {
// @name Unknown::uniqueStringPairRange_00687820
// @class Unknown
// @summary std::unique over a range of 0x38-byte records, comparing the first std::string (+0x00) and copying both strings on compaction; returns new end.
// @field Unknown +0x00 BYTE[0x1c] field_0x00
// @field Unknown +0x1c BYTE[0x1c] field_0x1c

// MSVCP80 std::operator==(const basic_string&, const basic_string&)
extern bool (__cdecl* mem_00924FC4)(const void* lhs, const void* rhs);
// MSVCP80 std::basic_string::operator=(const basic_string&)
extern void* (__thiscall* mem_00924FDC)(void* self, const void* src);

static constexpr ptrdiff_t kElemSize = 0x38;
static constexpr ptrdiff_t kSecondStrOff = 0x1c;

void* uniqueStringPairRange_00687820(void* first, void* last) {
    uint8_t* const end = static_cast<uint8_t*>(last);
    uint8_t* dst = static_cast<uint8_t*>(first);
    if (dst == end) {
        return end;
    }

    uint8_t* it = dst + kElemSize;
    if (it == end) {
        return end;
    }

    // Phase 1: scan until the first element equal to its kept predecessor.
    for (;;) {
        if (mem_00924FC4(it, dst)) {
            break;
        }
        dst = it;
        it += kElemSize;
        if (it == end) {
            return end;
        }
    }

    // `it` now points at the first duplicate; skip it.
    it += kElemSize;
    if (it == end) {
        return dst + kElemSize;
    }

    // Phase 2: compact, copying non-duplicates into the kept slot.
    do {
        if (!mem_00924FC4(it, dst)) {
            dst += kElemSize;
            mem_00924FDC(dst, it);
            mem_00924FDC(dst + kSecondStrOff, it + kSecondStrOff);
        }
        it += kElemSize;
    } while (it != end);

    return dst + kElemSize;
}
} // namespace lift_00687820

// [0x006823B0] sub_006823B0 (104 bytes)
namespace lift_006823B0 {
// @name sub_006823B0
// @summary Auto-lifted identical-shape clone of 0x00660280 (VectorBack).
namespace lift_00660280 {
extern uint32_t mem_00B5ACB4;
extern uint32_t mem_00B5ACB8;
extern uint32_t mem_00B5ACBC;
extern uint32_t mem_00925134;

// Debug-checked "back()" on an MSVC-style vector whose storage is [mem_00B59080, mem_00B59084).
// Invalid-parameter handler is reached through the IAT slot at mem_00925134.
static void invalid_parameter_noinfo() {
    reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
}

// @name VectorBack
// @summary Returns the last element of the global vector at mem_00B59080..mem_00B59084, or 0 if empty; validates iterator range first.
// @class Unknown
// @field Unknown +0x08 uint32_t field_0x08
uint32_t fn_006823B0() {
    const uint32_t begin = mem_00B5ACB8;
    const uint32_t end = mem_00B5ACBC;

    if (begin == 0) {
        return 0;
    }
    // Element count = (end - begin) / 4 (arithmetic shift); empty -> 0.
    const int32_t count = static_cast<int32_t>(end - begin) >> 2;
    if (count == 0) {
        return 0;
    }
    if (begin > end) {
        invalid_parameter_noinfo();
    }

    const uint32_t last = end - 4;
    if (last > end || last < begin) {
        invalid_parameter_noinfo();
    }

    const uint32_t cursor = last;
    if (cursor >= lift_field<uint32_t>(&mem_00B5ACB4, 0x08)) {
        invalid_parameter_noinfo();
    }

    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(cursor));
}
} // namespace lift_00660280
} // namespace lift_006823B0

// [0x00686740] sub_00686740 (58 bytes)
namespace lift_00686740 {
// @name sub_00686740
// @summary Auto-lifted identical-shape clone of 0x004064D0 (sub_004064D0).
namespace lift_004064D0 {
// @name sub_004064D0
// @summary Auto-lifted identical-shape clone of 0x0054F2C0 (ComputeRecordAddress).
namespace lift_0054F2C0 {
extern void ext_006861C0(std::uintptr_t a0, std::uint32_t a1, std::uint32_t a2,
                             std::uint32_t a3, std::uint32_t a4, std::uint32_t a5);

// @name ComputeRecordAddress
// @summary Calls helper sub_0054F1E0 with the arguments and a zeroed flag word, then returns base + index * 0x68.
// (no direct struct field accesses in this function)
__stdcall std::uint8_t* fn_00686740(std::uint8_t* base, std::uint32_t index, std::uint32_t arg2) {
    // The original stores 0 into the low byte of a stack slot that previously held ECX,
    // so the dword passed on is ECX with its low byte cleared. ECX at entry is not
    // recoverable from the stdcall signature; it is modelled as a placeholder here.
    std::uint32_t ecx_in = 0;
    std::uint32_t flag_slot = ecx_in & 0xFFFFFF00u;

    ext_006861C0(reinterpret_cast<std::uintptr_t>(base), index, arg2, ecx_in, arg2, flag_slot);

    return base + static_cast<std::size_t>(index) * 0x94u;
}
} // namespace lift_0054F2C0
} // namespace lift_004064D0
} // namespace lift_00686740

// [0x0068C400] sub_0068C400 (87 bytes)
namespace lift_0068C400 {
// @name sub_0068C400
// @summary Auto-lifted identical-shape clone of 0x005FD150 (sub_005FD150).
namespace lift_005FD150 {
// @name sub_005FD150
// @summary Auto-lifted identical-shape clone of 0x004CAE30 (initStaticObjectOnce_004CAE30).
namespace lift_004CAE30 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: ECX = self, one stack arg; calls ext_00672000 on self, then stores the arg into self[0]; returns it.)
extern DWORD __thiscall ext_0067A670(void* self, DWORD value);

// TEB exception-list head (fs:[0]); modeled as a global because the header has no TEB accessor.
extern DWORD mem_fs_0;
// Guard word: bit 0 marks that the static object below has been initialized.
extern DWORD mem_00B5ADE8;
// Static object (global) whose address is returned; its first DWORD is set to a vtable-like pointer.
extern DWORD mem_00B5ADE4;

// @name initStaticObjectOnce_004CAE30
// @summary One-time initializer for the static object at mem_00AE44A8: under a local SEH frame, runs the helper on first call, marks the guard bit, sets the object's first DWORD to 0x946754, and returns its address.
// @field Unknown +0x00 DWORD field_0x00
void* fn_0068C400() {
    // Local SEH registration record: [0] = previous frame, [1] = handler, [2] = trylevel.
    DWORD frame[3];
    frame[0] = mem_fs_0;
    frame[1] = 0x8B5C0Eu;
    frame[2] = 0xFFFFFFFFu;
    mem_fs_0 = static_cast<DWORD>(reinterpret_cast<uintptr_t>(frame));

    if ((mem_00B5ADE8 & 1u) == 0) {
        mem_00B5ADE8 |= 1u;
        frame[2] = 0;
        // The callee's stack argument is the value at the top of the frame (the saved previous frame).
        ext_0067A670(&mem_00B5ADE4, frame[0]);
        mem_00B5ADE4 = 0x98E354u;
    }

    mem_fs_0 = frame[0];
    return &mem_00B5ADE4;
}
} // namespace lift_004CAE30
} // namespace lift_005FD150
} // namespace lift_0068C400

// [0x00688E90] sub_00688E90 (59 bytes)
namespace lift_00688E90 {
// @name sub_00688E90
// @summary Auto-lifted identical-shape clone of 0x0044C500 (Vector::clear).
namespace lift_0044C500 {
// Known callee 0x0044C460: Vector::eraseRange (Validates an owner/range pair, moves [last,end) down to first, shrinks end, and writes {first_or_owner, first} to out.)
extern void ext_00688E20(void* ecx, uint32_t* out, uint32_t owner, uint32_t first,
                         uint32_t owner_expected, uint32_t last);

// IAT slot for MSVCR80!_invalid_parameter_noinfo, called through a pointer when a range check fails.
extern void (*mem_00925134)(void);

// @name Vector::clear
// @class Vector
// @summary Validates begin <= end, then calls Vector::eraseRange(begin, end) so the vector's end is reset to begin.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_00688E90(void* self) {
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
    ext_00688E20(self, out, self_addr, begin, self_addr, end);
}
} // namespace lift_0044C500
} // namespace lift_00688E90

// [0x00688EE0] sub_00688EE0 (59 bytes)
namespace lift_00688EE0 {
// @name sub_00688EE0
// @summary Auto-lifted identical-shape clone of 0x0044C500 (Vector::clear).
namespace lift_0044C500 {
// Known callee 0x0044C460: Vector::eraseRange (Validates an owner/range pair, moves [last,end) down to first, shrinks end, and writes {first_or_owner, first} to out.)
extern void ext_00688C50(void* ecx, uint32_t* out, uint32_t owner, uint32_t first,
                         uint32_t owner_expected, uint32_t last);

// IAT slot for MSVCR80!_invalid_parameter_noinfo, called through a pointer when a range check fails.
extern void (*mem_00925134)(void);

// @name Vector::clear
// @class Vector
// @summary Validates begin <= end, then calls Vector::eraseRange(begin, end) so the vector's end is reset to begin.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_00688EE0(void* self) {
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
    ext_00688C50(self, out, self_addr, begin, self_addr, end);
}
} // namespace lift_0044C500
} // namespace lift_00688EE0

// [0x00688F20] sub_00688F20 (59 bytes)
namespace lift_00688F20 {
// @name sub_00688F20
// @summary Auto-lifted identical-shape clone of 0x0044C500 (Vector::clear).
namespace lift_0044C500 {
// Known callee 0x0044C460: Vector::eraseRange (Validates an owner/range pair, moves [last,end) down to first, shrinks end, and writes {first_or_owner, first} to out.)
extern void ext_00688CC0(void* ecx, uint32_t* out, uint32_t owner, uint32_t first,
                         uint32_t owner_expected, uint32_t last);

// IAT slot for MSVCR80!_invalid_parameter_noinfo, called through a pointer when a range check fails.
extern void (*mem_00925134)(void);

// @name Vector::clear
// @class Vector
// @summary Validates begin <= end, then calls Vector::eraseRange(begin, end) so the vector's end is reset to begin.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_00688F20(void* self) {
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
    ext_00688CC0(self, out, self_addr, begin, self_addr, end);
}
} // namespace lift_0044C500
} // namespace lift_00688F20

// [0x0068BB30] sub_0068BB30 (45 bytes)
namespace lift_0068BB30 {
// Known callee 0x0065C770: sub_0065C770 (114 bytes). Thiscall: ECX = this (local object), stack args follow.
extern void* ext_0065C770(void* self, void* arg0, int kind, void* arg2);
// Known callee 0x00687510: sub_00687510 (auto-lifted clone of 0x0040A910). Thiscall: ECX = self, arg1 on stack.
extern void* ext_00687510(void* self, void* arg1);
// Known callee 0x006A6DD2: thunk to MSVCR80!_CxxThrowException (does not return).
extern void ext_006A6DD2(void* object, void* throwInfo);
// .rdata u32 at 0x00A14D3C, passed by address as the ThrowInfo argument.
extern int mem_00A14D3C;

// @name Unknown::constructAndThrow_0068BB30
// @class Unknown
// @summary Builds a 0x34-byte temporary via 0x0065C770 (seeded from the 0x00687510 result) and throws it through _CxxThrowException.
// @field Unknown +0x00 void* field_0x00 (accessed only via arg/ECX; layout not inferred)
void fn_0068BB30(void* self) {
    // Stack-frame locals: [ebp-0x64] is the 0x34-byte temporary, [ebp-0x30] is the scratch
    // buffer passed to 0x00687510. The value of [ebp-0x14] (ECX seed for 0x00687510) is set
    // by code outside this 45-byte window; it is taken as nullptr here.
    alignas(8) uint8_t temp[0x34] = {};
    alignas(8) uint8_t scratch[0x30 - 0x14] = {};
    void* local14 = nullptr;

    void* r = ext_00687510(local14, scratch);
    ext_0065C770(temp, self, 7, r);
    ext_006A6DD2(temp, reinterpret_cast<void*>(&mem_00A14D3C));
}
} // namespace lift_0068BB30

// [0x0068DDD0]
namespace lift_0068DDD0 {
// @name sub_0068DDD0
// @summary Copy constructor that initializes vtable pointers and copies fields from +0x8 and +0x10..+0x9E8
// @field Unknown +0x00 uint32_t vtable_0x00
// @field Unknown +0x04 uint32_t vtable_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint8_t[0x9d8] field_0x10

void* __thiscall sub_0068DDD0(void* self, const void* src) {
    auto* dst = static_cast<uint8_t*>(self);
    const auto* s = static_cast<const uint8_t*>(src);

    lift_field<uint32_t>(dst, 0x04) = 0x00928efc;
    lift_field<uint32_t>(dst, 0x00) = 0x0098dd14;
    lift_field<uint32_t>(dst, 0x04) = 0x0098dce4;
    lift_field<uint32_t>(dst, 0x08) = lift_field<uint32_t>(s, 0x08);
    std::memcpy(dst + 0x10, s + 0x10, 0x276 * sizeof(uint32_t));

    return self;
}
} // namespace lift_0068DDD0
