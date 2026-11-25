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

// [0x006813B0] sub_006813B0 (27 bytes)
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

// [0x00687510] sub_00687510 (33 bytes)
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

// [0x0068BB30] sub_0068BB30 (45 bytes)
namespace lift_0068BB30 {
extern void ext_0065C770(void* self, void* arg1, int value, void* extra);
void* fn_00687510(void* self, void* arg1);

// Opaque C++ exception payload. The original throws a 0x34-byte object built
// in the frame at [ebp-0x64]; that bound comes from the distance to [ebp-0x30].
struct ThrowObject {
    alignas(8) unsigned char bytes[0x34];
};

// @name Lift_0068BB30_throwFromContext
// @summary Builds a 7-tagged exception object from arg1 and a context-derived value, then throws it.
void fn_0068BB30(void* arg1, void* ctx) {
    unsigned char scratch[0x1C];  // frame slot [ebp-0x30], bounded by [ebp-0x14]
    void* derived = fn_00687510(ctx, scratch);

    ThrowObject exc{};
    ext_0065C770(&exc, arg1, 7, derived);
    throw exc;
}
} // namespace lift_0068BB30

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

// [0x0068DDD0]
namespace lift_0068DDD0 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name copy_0068DDD0
// @summary Copy constructor setting vtables and copying 0x276 dwords from offset 0x10
// @field Obj +0x00 uint32_t vtable_0
// @field Obj +0x04 uint32_t vtable_4
// @field Obj +0x08 uint32_t field_0x08
// @field Obj +0x10 uint8_t[0x9d8] field_0x10

uint32_t __thiscall sub_0068DDD0(uint32_t self, uint32_t other) {
    mem_write32(self, 0x0098dd14u);
    mem_write32(self + 0x4u, 0x0098dce4u);
    mem_write32(self + 0x8u, mem_read32(other + 0x8u));
    for (uint32_t i = 0; i < 0x276u; ++i) {
        mem_write32(self + 0x10u + i * 4u, mem_read32(other + 0x10u + i * 4u));
    }
    return self;
}
} // namespace lift_0068DDD0

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

// [0x006878E0]
namespace lift_006878E0 {
// @name fn_006878E0 (fill range with copies of one record)
// @summary Copy-assigns one 36-byte record (u32, u8, string) from src into every slot of [dst, end).
// @field Record36 +0x00 DWORD value
// @field Record36 +0x04 BYTE flag
// @field Record36 +0x08 std_string str

// MSVCP80 std::basic_string<char>::operator=(const basic_string&), thiscall.
// Resolved through the IAT slot mem_00924FDC (.rdata value 0x006291BE).
extern const DWORD mem_00924FDC;
void* ext_std_string_assign(void* self, const void* rhs);

void fn_006878E0(void* dst, void* end, const void* src) {
    if (dst == end) {
        return;
    }
    do {
        lift_field<DWORD>(dst, 0x00) = lift_field<DWORD>(src, 0x00);
        lift_field<BYTE>(dst, 0x04) = lift_field<BYTE>(src, 0x04);
        ext_std_string_assign(static_cast<uint8_t*>(dst) + 0x08,
                              static_cast<const uint8_t*>(src) + 0x08);
        dst = static_cast<uint8_t*>(dst) + 0x24;
    } while (dst != end);
}
} // namespace lift_006878E0

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

// [0x00686740] sub_00686740 (58 bytes)
namespace lift_00686740 {
// @name sub_00686740
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
} // namespace lift_00686740

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

// [0x006812A0]
namespace lift_006812A0 {
// @name clearBufferRange
// @summary Frees and zeroes out a range of 16-byte buffer descriptors


extern uint32_t mem_read_u32(uint32_t addr);
extern void mem_write_u32(uint32_t addr, uint32_t val);
extern void ext_006A5C5C(uint32_t ptr);

void fn_006812A0(uint32_t first, uint32_t last) {
    for (uint32_t cur = first; cur != last; cur += 0x10) {
        uint32_t ptr = mem_read_u32(cur + 0x4);
        if (ptr != 0) {
            ext_006A5C5C(ptr);
        }
        mem_write_u32(cur + 0x4, 0);
        mem_write_u32(cur + 0x8, 0);
        mem_write_u32(cur + 0xC, 0);
    }
}
} // namespace lift_006812A0

// [0x006816F0] sub_006816F0 (63 bytes)
namespace lift_006816F0 {
// @name sub_006816F0
// @summary Auto-lifted identical-shape clone of 0x00569970 (Unknown::ReleaseHandleAndClear).
namespace lift_00569970 {
extern void ext_006812A0(uint32_t a0, uint32_t a1, void* a2, void* a3);
extern void fn_006A5C5C(uint32_t arg);

// @name Unknown::ReleaseHandleAndClear
// @class Unknown
// @summary If field +0x04 is nonzero, run ext_005693E0 with it and forward it to fn_006A5C5C, then clear fields +0x04, +0x08 and +0x0C.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
void fn_006816F0(void* self) {
    if (lift_field<uint32_t>(self, 0x4) != 0) {
        // Argument order matches the original pushes: a0 = f04, a1 = f08, a2 = self, a3 = ecx (self).
        ext_006812A0(lift_field<uint32_t>(self, 0x4),
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
} // namespace lift_006816F0

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

// [0x00681250] sub_00681250 (67 bytes)
namespace lift_00681250 {
// Guest memory accessors (32-bit guest addresses).
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t value);

// @name swapBackwardElementTails16
// @summary Walks two 16-byte-stride ranges backward from their end pointers, swapping the 12 bytes at offsets +4..+15 of each element pair; returns the adjusted destination end pointer.
uint32_t fn_00681250(uint32_t first, uint32_t last, uint32_t destEnd) {
    if (first == last) {
        return destEnd;
    }
    do {
        last -= 0x10;
        destEnd -= 0x10;
        for (uint32_t off = 4; off < 0x10; off += 4) {
            const uint32_t src = mem_read32(last + off);
            const uint32_t dst = mem_read32(destEnd + off);
            mem_write32(destEnd + off, src);
            mem_write32(last + off, dst);
        }
    } while (last != first);
    return destEnd;
}
} // namespace lift_00681250

// [0x00687890] sub_00687890 (67 bytes)
namespace lift_00687890 {
// IAT slot for std::string::operator= (MSVCP80); its .rdata value is 0x006291BE.
extern const uint32_t mem_00924FDC;
// Indirect call target through mem_00924FDC: thiscall std::string::operator=(const std::string& rhs).
extern void ext_006291BE(void* self, const void* rhs);

// @name fillElementsFromSource
// @class UnknownElement44
// @summary Fills each 0x2C-byte element in [first, end) with a copy of *src: four dwords then a std::string at +0x10 assigned via operator=.
// @field UnknownElement44 +0x00 u32 field_0x00
// @field UnknownElement44 +0x04 u32 field_0x04
// @field UnknownElement44 +0x08 u32 field_0x08
// @field UnknownElement44 +0x0C u32 field_0x0C
// @field UnknownElement44 +0x10 std::string field_0x10
void fn_00687890(void* first, void* end, const void* src) {
    if (first == end) {
        return;
    }
    uint8_t* dst = reinterpret_cast<uint8_t*>(first);
    const uint8_t* const from = reinterpret_cast<const uint8_t*>(src);
    do {
        lift_field<uint32_t>(dst, 0x00) = lift_field<uint32_t>(from, 0x00);
        lift_field<uint32_t>(dst, 0x04) = lift_field<uint32_t>(from, 0x04);
        lift_field<uint32_t>(dst, 0x08) = lift_field<uint32_t>(from, 0x08);
        lift_field<uint32_t>(dst, 0x0C) = lift_field<uint32_t>(from, 0x0C);
        ext_006291BE(dst + 0x10, from + 0x10);
        dst += 0x2C;
    } while (dst != reinterpret_cast<uint8_t*>(end));
}
} // namespace lift_00687890

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

// [0x006821D0] sub_006821D0 (69 bytes)
namespace lift_006821D0 {
// @name Unknown::elementPtrChecked
// @class Unknown
// @summary Validates the element index against the element count derived from the (end - begin) range at +0x14/+0x18 (28-byte elements) and returns begin + index * 28; invalid parameter is raised when begin is null or the index is out of range.
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x18 uint32_t field_0x18
extern void* __thiscall fn_006821D0(void* self, uint32_t index) {
    const uint32_t begin = lift_field<uint32_t>(self, 0x14);
    if (begin == 0) {
        std::abort(); // _invalid_parameter_noinfo
    }

    const uint32_t end = lift_field<uint32_t>(self, 0x18);
    const int32_t count = static_cast<int32_t>(end - begin) / 28;

    if (index >= static_cast<uint32_t>(count)) {
        std::abort(); // _invalid_parameter_noinfo
    }

    return reinterpret_cast<void*>(static_cast<uintptr_t>(begin) +
                                   static_cast<uintptr_t>(index) * 28u);
}
} // namespace lift_006821D0

// [0x00688B50] sub_00688B50 (72 bytes)
namespace lift_00688B50 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* block);
// IAT slot 0x00924FF4 holds MSVCP80 std::basic_string<char>::~basic_string.
extern int mem_00924FF4;

// Element stride in the array; each element embeds a std::string at +0x10.
static constexpr std::size_t kElemStride = 0x2C;
static constexpr std::size_t kStringOffset = 0x10;

// @name Unknown::ResetStringEntryArray
// @class Unknown
// @summary Destroys each 0x2C-byte entry's std::string, frees the entry array, and zeroes the three array pointers.
// @field Unknown +0x04 uint8_t* entriesBegin
// @field Unknown +0x08 uint8_t* entriesEnd
// @field Unknown +0x0C uint8_t* entriesCapacity
void fn_00688B50(void* self) {
    auto* obj = static_cast<unsigned char*>(self);
    auto** begin = reinterpret_cast<unsigned char**>(obj + 0x4);
    auto** end = reinterpret_cast<unsigned char**>(obj + 0x8);
    auto** cap = reinterpret_cast<unsigned char**>(obj + 0xC);

    unsigned char* cur = *begin;
    if (cur != nullptr) {
        unsigned char* last = *end;
        if (cur != last) {
            for (; cur != last; cur += kElemStride) {
                using StringT = std::string;
                auto* str = reinterpret_cast<StringT*>(cur + kStringOffset);
                str->~StringT();
            }
        }
        ext_006A5C5C(*begin);
    }

    *begin = nullptr;
    *end = nullptr;
    *cap = nullptr;
}
} // namespace lift_00688B50

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
