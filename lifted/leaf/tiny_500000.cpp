// Lifted C++ translation unit: lifted/leaf/tiny_500000.cpp
#include "lift_compat.h"
extern "C" int mem_00950A74;
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_0050F990
// @summary Stores address of mem_00950A74 into field at offset +0x0.
extern "C" void __fastcall fn_0050F990(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00950A74;
}

// [0x00508BA0] sub_00508BA0 (19 bytes)
// @name sub_00508BA0
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_00508BA0(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x28);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x2C);
    const int32_t diff = end - begin;
    return diff >> 2;
}

// [0x0050E9F0]
namespace lift_0050E9F0 {
// @name sub_0050E9F0
// @summary Loads a double from a sub-object pointed to by this+0x08 at offset +0x10 and returns it on the x87 stack.
// @field field_0x08 ptr  (this+0x08: pointer to sub-object)
// @field field_0x10 double (sub-object+0x10: double value)

double sub_0050E9F0(void* self) {
    // mov eax, [ecx + 0x8]
    uintptr_t eax = *reinterpret_cast<uintptr_t*>(static_cast<uint8_t*>(self) + 0x8);
    // fld qword ptr [eax + 0x10]; ret  (value returned in st(0))
    return *reinterpret_cast<double*>(eax + 0x10);
}
} // namespace lift_0050E9F0

// [0x0050EA00]
namespace lift_0050EA00 {
// @name getNestedDouble
// @summary Loads a double at offset 0x18 from a pointer stored at offset 0x08 of this.
// @field unknown +0x08 void* field_0x08


double __thiscall sub_0050EA00(void* self) {
    const uint8_t* inner = *reinterpret_cast<const uint8_t* const*>(
        static_cast<const uint8_t*>(self) + 0x8);
    return *reinterpret_cast<const double*>(inner + 0x18);
}
} // namespace lift_0050EA00

// [0x0050EA10]
namespace lift_0050EA10 {
extern uint32_t mem_read32(uintptr_t addr);
extern double mem_read_f64(uintptr_t addr);

// @name sub_0050EA10
// @summary Returns a double at offset 0x20 from the object pointed to by this+0x8.
// @field Class +0x08 void* field_0x08

double __thiscall sub_0050EA10(void* self) {
    uint32_t ptr = mem_read32(reinterpret_cast<uintptr_t>(self) + 0x8);
    return mem_read_f64(static_cast<uintptr_t>(ptr) + 0x20);
}
} // namespace lift_0050EA10

// [0x00507F50] sub_00507F50 (14 bytes)
namespace lift_00507F50 {
// @name SetDoubleValueAndEnableFlag
// @class Unknown
// @summary Stores a double argument at self+0x20 and sets the byte flag at self+0x28 to 1.
// @field Unknown +0x20 double field_0x20
// @field Unknown +0x28 uint8_t field_0x28

// __thiscall-style: self in ECX, one 8-byte stack argument, callee pops 8 bytes (ret 0x8).
void fn_00507F50(void* self, double value) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint8_t*>(base + 0x28) = 1;
    *reinterpret_cast<double*>(base + 0x20) = value;
}
} // namespace lift_00507F50

// [0x00507F60] sub_00507F60 (14 bytes)
namespace lift_00507F60 {
// @name SetDoubleValueAndClearFlag
// @class Unknown
// @summary Stores a double argument at self+0x20 and clears the byte flag at self+0x28 to 0.
// @field Unknown +0x20 double field_0x20
// @field Unknown +0x28 uint8_t field_0x28

// __thiscall-style: self in ECX, one 8-byte stack argument, callee pops 8 bytes (ret 0x8).
void fn_00507F60(void* self, double value) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint8_t*>(base + 0x28) = 0;
    *reinterpret_cast<double*>(base + 0x20) = value;
}
} // namespace lift_00507F60

// [0x0050E350] sub_0050E350 (15 bytes)
namespace lift_0050E350 {
extern uint32_t mem_00AEC0A4;

// @name SetField2CAndGlobalFromArg
// @class <unknown> (this is in ecx; owning class not yet recovered)
// @summary Stores the single stack argument into this->field_0x2c and into global mem_00AEC0A4, then returns (ret 4).
// @field <unknown> +0x2c uint32_t field_0x2c
extern void __thiscall fn_0050E350(void* self, uint32_t value) {
    lift_field<uint32_t>(self, 0x2c) = value;   // mov [ecx+0x2c], eax
    mem_00AEC0A4 = value;                        // mov [0xaec0a4], eax
}
} // namespace lift_0050E350

// [0x0050AD20] sub_0050AD20 (13 bytes)
namespace lift_0050AD20 {
// @name sub_0050AD20
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_0050AB00(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_0050AD20(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x34);
    if (sub != 0) {
        ext_0050AB00(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_0050AD20

// [0x0050F180] sub_0050F180 (13 bytes)
namespace lift_0050F180 {
// @name sub_0050F180
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_0050F100(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_0050F180(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x74);
    if (sub != 0) {
        ext_0050F100(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_0050F180

// [0x0050FA00] sub_0050FA00 (20 bytes)
namespace lift_0050FA00 {
extern const double mem_00950A90;
extern const double mem_00950A60;

// @name ReturnConstantByField8
// @summary Returns one of two double constants depending on whether the dword at self+0x08 is zero.
// @field <ClassName> +0x08 int32_t field_0x08
double fn_0050FA00(void* self) {
    const int32_t field_0x08 = *reinterpret_cast<const int32_t*>(static_cast<const char*>(self) + 0x08);
    if (field_0x08 != 0) {
        return mem_00950A60;
    }
    return mem_00950A90;
}
} // namespace lift_0050FA00

// [0x0050FA20] sub_0050FA20 (20 bytes)
namespace lift_0050FA20 {
extern double mem_00950A60;
extern double mem_00950A90;

// @name SelectConstantByField8
// @class Unknown
// @summary Returns one of two qword constants (as x87 st0) depending on whether this->field_0x08 is nonzero.
// @field Unknown +0x08 int32_t field_0x08

double fn_0050FA20(void* self) {
    if (lift_field<int32_t>(self, 0x08) != 0) {
        return mem_00950A90;
    }
    return mem_00950A60;
}
} // namespace lift_0050FA20

// [0x00508C10] sub_00508C10 (21 bytes)
namespace lift_00508C10 {
// Known callee 0x005087F0: sub_005087F0 (10 bytes). Tail-jumped to with the
// (possibly rewritten) stack argument still in place.
extern void __stdcall ext_005087F0(DWORD arg);

// @name ForwardArgIfAtMost2
// @summary Forwards its single stdcall argument to sub_005087F0 (tail call) when the argument is <= 2 unsigned; otherwise returns immediately, popping the 4-byte argument.
void __stdcall fn_00508C10(DWORD arg) {
    if (arg <= 2u) {
        ext_005087F0(arg);
        return;
    }
    // Out-of-range: plain stdcall return (callee pops 4 bytes, handled by convention).
}
} // namespace lift_00508C10

// [0x005014B0] sub_005014B0 (27 bytes)
namespace lift_005014B0 {
// @name sub_005014B0
// @summary Auto-lifted identical-shape clone of 0x00401AF0 (FindPredecessorOfFlagged).
namespace lift_00401AF0 {
// @name FindPredecessorOfFlagged
// @summary Walks the first-word link chain from arg and returns the node just before the first node whose byte at +0x15 is nonzero (returns arg if arg->next is already flagged).
// @field Node +0x00 void* field_0x00
// @field Node +0x15 uint8_t field_0x15
void* fn_005014B0(void* arg) {
    void* prev = arg;
    void* cur = lift_field<void*>(arg, 0x00);
    while (lift_field<uint8_t>(cur, 0x11) == 0) {
        prev = cur;
        cur = lift_field<void*>(cur, 0x00);
    }
    return prev;
}
} // namespace lift_00401AF0
} // namespace lift_005014B0

// [0x00503AD0] sub_00503AD0 (29 bytes)
namespace lift_00503AD0 {
// @name sub_00503AD0_fillDoubleRange
// @summary Stores the double at *value into every 8-byte slot in [first, last); no-op if first == last.
void fn_00503AD0(double* first, double* last, const double* value) {
    if (first == last) {
        return;
    }
    double* p = first;
    do {
        *p = *value;
        ++p;
    } while (p != last);
}
} // namespace lift_00503AD0

// [0x00504A80] sub_00504A80 (31 bytes)
namespace lift_00504A80 {
// @name sub_00504A80
// @summary Auto-lifted identical-shape clone of 0x00404D50 (ElementCountFromRange).
namespace lift_00404D50 {
// @name ElementCountFromRange
// @class Unknown
// @summary Returns 0 if field +0x04 is null; otherwise (field +0x08 - field +0x04) / 88 (signed, truncating).
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
int32_t fn_00504A80(void* self) {
    const int32_t first = lift_field<int32_t>(self, 0x04);
    if (first == 0) {
        return 0;
    }
    // 32-bit wrapping difference, as computed by the original sub/imul sequence.
    const int32_t diff = static_cast<int32_t>(
        static_cast<uint32_t>(lift_field<int32_t>(self, 0x08)) -
        static_cast<uint32_t>(first));
    // Signed high-half multiply by 0x2E8BA2E9, arithmetic shift right by 4,
    // then add the sign bit of the shifted value (round toward zero).
    const int64_t product = static_cast<int64_t>(diff) * static_cast<int64_t>(0x66666667);
    const int32_t high = static_cast<int32_t>(product >> 32);
    const int32_t shifted = high >> 4;
    const int32_t sign = static_cast<int32_t>(static_cast<uint32_t>(shifted) >> 31);
    return shifted + sign;
}
} // namespace lift_00404D50
} // namespace lift_00504A80

// [0x00504990] sub_00504990 (31 bytes)
namespace lift_00504990 {
// @name Unknown::GetCountFromBeginEnd
// @class Unknown
// @summary Returns (end - begin) / 36 when begin (+0x04) is non-null, otherwise 0.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
int32_t fn_00504990(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);
    int32_t begin;
    int32_t end;
    std::memcpy(&begin, base + 0x04, sizeof(begin));
    if (begin == 0) {
        return 0;
    }
    std::memcpy(&end, base + 0x08, sizeof(end));
    // Unsigned subtraction avoids signed-overflow UB; the result is reinterpreted as signed,
    // matching the 32-bit wrap of the original `sub ecx, eax`.
    int32_t diff = static_cast<int32_t>(static_cast<uint32_t>(end) - static_cast<uint32_t>(begin));
    // Signed division by 36 (truncating toward zero), as produced by the magic-multiply sequence.
    return diff / 36;
}
} // namespace lift_00504990
