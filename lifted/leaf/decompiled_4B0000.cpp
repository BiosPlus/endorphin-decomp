// Lifted C++ translation unit: lifted/leaf/decompiled_4B0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <cmath>

// [0x004B6C90] sub_004B6C90 (34 bytes)
namespace lift_004B6C90 {
extern const char mem_009433E0[];

// @name sub_004B6C90
// @summary Auto-lifted identical-shape clone of 0x00622380 (NMData::SkeletalCalibrationVariables::vfunc_28).
void* fn_004B6C90(void* self, void* dst, void* arg2) {
    (void)self;
    (void)arg2;
    new (dst) std::string(mem_009433E0);
    return dst;
}
} // namespace lift_004B6C90

// [0x004B6CF0]
namespace lift_004B6CF0 {
// @name sub_004B6CF0
// @class Unknown
// @summary Initializes float fields at +0x1C..+0x30: 0.2, 100.0, then zeros for +0x24..+0x30.
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C float field_0x2C
// @field Unknown +0x30 float field_0x30

extern float mem_00940694; // .rdata float 0.2
extern float mem_00943350; // .rdata float 100

void sub_004B6CF0(uint8_t* ecx) {
    *reinterpret_cast<float*>(ecx + 0x1C) = mem_00940694;
    *reinterpret_cast<float*>(ecx + 0x20) = mem_00943350;
    *reinterpret_cast<float*>(ecx + 0x24) = 0.0f;
    *reinterpret_cast<float*>(ecx + 0x28) = 0.0f;
    *reinterpret_cast<float*>(ecx + 0x2C) = 0.0f;
    *reinterpret_cast<float*>(ecx + 0x30) = 0.0f;
}
} // namespace lift_004B6CF0

// [0x004B7030]
namespace lift_004B7030 {
// RDATA constants
extern float mem_00A3849C; // 0.1230123f
extern float mem_00A384A0; // 0.23480123f
extern float mem_00A384A4; // 0.1343947f

// @name sub_004B7030
// @summary Writes three RDATA float constants into the 3-float structure pointed to by the single stack argument.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
void sub_004B7030(float *out)
{
    out[0] = mem_00A3849C;
    out[1] = mem_00A384A0;
    out[2] = mem_00A384A4;
}
} // namespace lift_004B7030

// [0x004B6CC0] sub_004B6CC0 (33 bytes)
namespace lift_004B6CC0 {
// The string constructor is reached through the MSVCP80 import slot at 0x924FE8,
// whose .rdata value is 0x006290D8 (mem_00924FE8); it is called here by that target.
extern void __thiscall ext_006290D8(void* self);

// @name Unknown::initStringAndZeroFloats1C
// @class Unknown
// @summary Default-constructs the std::string at +0x00, then zeroes the float fields at +0x1C..+0x30; returns this.
// @field Unknown +0x00 std::string field_0x00
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C float field_0x2C
// @field Unknown +0x30 float field_0x30

// [0x004B6CC0]
void* fn_004B6CC0(void* self) {
    uint8_t* esi = static_cast<uint8_t*>(self);
    ext_006290D8(esi);
    *reinterpret_cast<float*>(esi + 0x1C) = 0.0f;
    *reinterpret_cast<float*>(esi + 0x20) = 0.0f;
    *reinterpret_cast<float*>(esi + 0x24) = 0.0f;
    *reinterpret_cast<float*>(esi + 0x28) = 0.0f;
    *reinterpret_cast<float*>(esi + 0x2C) = 0.0f;
    *reinterpret_cast<float*>(esi + 0x30) = 0.0f;
    return esi;
}
} // namespace lift_004B6CC0

// [0x004B0F50] sub_004B0F50 (37 bytes)
namespace lift_004B0F50 {
// @name InitFlagsAndEmptyString
// @summary Sets four header bytes (3 x 1, 1 x 0), default-constructs a std::string at +0x04, zeroes the dword at +0x20, and returns self.
// @field UnknownClass +0x00 uint8_t field_0x00
// @field UnknownClass +0x01 uint8_t field_0x01
// @field UnknownClass +0x02 uint8_t field_0x02
// @field UnknownClass +0x03 uint8_t field_0x03
// @field UnknownClass +0x04 std::string field_0x04
// @field UnknownClass +0x20 uint32_t field_0x20
void* fn_004B0F50(void* self) {
    auto* base = static_cast<std::uint8_t*>(self);

    base[0x00] = 1;
    base[0x01] = 1;
    base[0x02] = 1;
    base[0x03] = 0;

    // Original calls the MSVC std::string default ctor through mem_00924FE8
    // (MSVCP80) on this+4. Expressed here as a placement-new of std::string.
    // Caveat: MSVC basic_string is 0x18 bytes; libstdc++ differs, so the
    // +0x20 store below only matches the original layout under MSVC ABI.
    new (base + 0x04) std::string();

    *reinterpret_cast<std::uint32_t*>(base + 0x20) = 0;
    return self;
}
} // namespace lift_004B0F50

// [0x004B4740] sub_004B4740 (37 bytes)
namespace lift_004B4740 {
namespace lift_004B4740 {
// Known callee 0x004B18E0: sub_004B18E0 (35 bytes, stdcall: callee pops its 3 args).
// Arg 2 is the caller's saved ESI slot in the original code (no meaningful value); passed as 0.
extern DWORD __stdcall ext_004B18E0(DWORD a, DWORD b, DWORD c);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void __stdcall ext_0055DA20(void* self, DWORD a, DWORD b);

// @name sub_004B4740
// @summary Calls ext_004B18E0 on arg2, then initialises arg1 with its result and arg2 via ext_0055DA20; returns arg1.
void* fn_004B4740(void* arg1, DWORD arg2) {
    DWORD result = ext_004B18E0(arg2, 0, 0);
    ext_0055DA20(arg1, result, arg2);
    return arg1;
}
} // namespace lift_004B4740
} // namespace lift_004B4740

// [0x004BA230] sub_004BA230 (37 bytes)
namespace lift_004BA230 {
namespace lift_004BA230 {
// Known callee 0x004B7980: sub_004B7980 (35 bytes). Called with arg2 as its first argument;
// the remaining two stack slots hold no meaningful value in the original code and are passed as 0.
extern DWORD __stdcall ext_004B7980(DWORD a, DWORD b, DWORD c);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void __stdcall ext_0055DA20(void* self, DWORD a, DWORD b);

// @name initDwordPairFromLookup
// @summary Calls ext_004B7980 on arg2, then initialises arg1 with its result and arg2 via ext_0055DA20; returns arg1.
void* fn_004BA230(void* arg1, DWORD arg2) {
    DWORD result = ext_004B7980(arg2, 0, 0);
    ext_0055DA20(arg1, result, arg2);
    return arg1;
}
} // namespace lift_004BA230
} // namespace lift_004BA230

// [0x004BA920] sub_004BA920 (35 bytes)
namespace lift_004BA920 {
// Known callee 0x004BA230: initDwordPairFromLookup (Calls ext_004B7980 on arg2, then initialises arg1 with its result and arg2 via ext_0055DA20; returns arg1.)
extern void* ext_004BA230(void* arg1, DWORD arg2);

// @name initDwordPairFromLookup_passthrough
// @summary Forwards (arg1, arg2) to ext_004BA230 (result discarded) and returns arg1 unchanged.
void* fn_004BA920(void* arg1, DWORD arg2) {
    ext_004BA230(arg1, arg2);
    return arg1;
}
} // namespace lift_004BA920

// [0x004B4C00] sub_004B4C00 (35 bytes)
namespace lift_004B4C00 {
// Known callee 0x004B4740: sub_004B4740 (Calls ext_004B18E0 on arg2, then initialises arg1 with its result and arg2 via ext_0055DA20; returns arg1.)
extern void* ext_004B4740(void* arg1, DWORD arg2);

// @name initAndReturnFirstArg
// @summary Calls ext_004B4740(arg1, arg2) for its side effects and returns arg1 unchanged (stdcall, 2 args).
void* __stdcall fn_004B4C00(void* arg1, DWORD arg2) {
    ext_004B4740(arg1, arg2);
    return arg1;
}
} // namespace lift_004B4C00

// [0x004B10A0] sub_004B10A0 (46 bytes)
namespace lift_004B10A0 {
extern void __stdcall ext_004B0ED0(float* v);

// @name ObjectVec3_callWithScalar
// @class Unknown
// @summary Builds a float[4] {scalar, this->+0x20, this->+0x24, this->+0x28} and passes it to ext_004B0ED0 (stdcall, one pointer arg); scalar is a stack arg, callee pops 4 bytes.
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
void __thiscall fn_004B10A0(void* self, float scalar) {
    float v[4];
    v[0] = scalar;
    v[1] = lift_field<float>(self, 0x20);
    v[2] = lift_field<float>(self, 0x24);
    v[3] = lift_field<float>(self, 0x28);
    ext_004B0ED0(v);
}
} // namespace lift_004B10A0

// [0x004B10D0]
namespace lift_004B10D0 {
// @name sub_004B10D0
// @summary Reads three float fields from the object and forwards them with an extra float argument to sub_004B0ED0 through a temporary out-parameter.
// @field +0x1C float field_0x1C
// @field +0x24 float field_0x24
// @field +0x28 float field_0x28

extern void __cdecl ext_004B0ED0(float* out, float a, float x, float b, float c);

void __stdcall sub_004B10D0(void* ecx, float arg1) {
    float a = lift_field<float>(ecx, 0x1C);
    float out = a;
    float b = lift_field<float>(ecx, 0x24);
    float c = lift_field<float>(ecx, 0x28);
    ext_004B0ED0(&out, a, arg1, b, c);
}
} // namespace lift_004B10D0

// [0x004B1100] sub_004B1100 (46 bytes)
namespace lift_004B1100 {
extern void ext_004B0ED0(float* quad);

// @name packQuadAndCall
// @summary Copies float fields +0x1C, +0x20, +0x28 of self plus one stack float into a local 4-float array and passes it to sub_004B0ED0.
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x28 float field_0x28
void fn_004B1100(void* self, float arg0) {
    auto* ecx = static_cast<uint8_t*>(self);
    float quad[4];
    quad[0] = *reinterpret_cast<float*>(ecx + 0x1C);
    quad[1] = *reinterpret_cast<float*>(ecx + 0x20);
    quad[2] = arg0;
    quad[3] = *reinterpret_cast<float*>(ecx + 0x28);
    ext_004B0ED0(quad);
}
} // namespace lift_004B1100

// [0x004B1130] sub_004B1130 (46 bytes)
namespace lift_004B1130 {
extern void __thiscall ext_004B0ED0(void* self, float* out, float b, float c, float d);

// @name sub_004B1130
// @class Unknown
// @summary Copies three float fields from self into locals, calls sub_004B0ED0 with them plus the stack float argument, and returns (ret 4).
// @field Unknown +0x1c float field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
extern void __thiscall fn_004B1130(void* self, float arg) {
    float a = lift_field<float>(self, 0x1c);
    float b = lift_field<float>(self, 0x20);
    float c = lift_field<float>(self, 0x24);
    ext_004B0ED0(self, &a, b, c, arg);}
} // namespace lift_004B1130

// [0x004B6FF0] sub_004B6FF0 (61 bytes)
namespace lift_004B6FF0 {
extern const char mem_009433A0[];
extern const char mem_0093C18C[];
extern std::string mem_00AE173C;

// @name ConfigStrings::ResetDefaults
// @class ConfigStrings
// @summary Resets four std::string members to defaults: +0x04 = "default_default", +0x20 and +0x3C = copies of global mem_00AE173C, +0x58 = "Default".
// @field ConfigStrings +0x04 std::string name0
// @field ConfigStrings +0x20 std::string name1
// @field ConfigStrings +0x3C std::string name2
// @field ConfigStrings +0x58 std::string name3
extern void __thiscall fn_004B6FF0(void* self) {
    lift_field<std::string>(self, 0x04) = mem_009433A0;
    lift_field<std::string>(self, 0x20) = mem_00AE173C;
    lift_field<std::string>(self, 0x3C) = mem_00AE173C;
    lift_field<std::string>(self, 0x58) = mem_0093C18C;
}
} // namespace lift_004B6FF0

// [0x004BEB00] sub_004BEB00 (76 bytes)
namespace lift_004BEB00 {
// @name sub_004BEB00
// @summary Auto-lifted identical-shape clone of 0x0050C4D0 (sub_00508310).
namespace lift_0050C4D0 {
// @name Unknown::ResetElementsAndNotify_0050C4D0
// @class Unknown
// @summary Clears the element buffer at this+0x4 via ext_0050B960, then calls ext_0065F440 on this.
// @field Unknown +0x04 uint8_t field_0x04 (subobject passed by address to ext_0050B960; contents not inspected)

void ext_006246B0(void* self);
void ext_0065F440(void* self);

void fn_004BEB00(void* self) {
    // Original MSVC SEH prologue/epilogue (fs:[0] frame setup/teardown) is
    // omitted; it only manages exception-handler registration and has no
    // effect on the logic below.
    ext_006246B0(static_cast<uint8_t*>(self) + 0x4);
    ext_0065F440(self);
}
} // namespace lift_0050C4D0
} // namespace lift_004BEB00

// [0x004B4CD0] sub_004B4CD0 (84 bytes)
namespace lift_004B4CD0 {
// Import thunk slot holding MSVCR80!_invalid_parameter_noinfo (__cdecl, no args).
// Called by the CRT iterator-debug checks when a range invariant is violated.
extern uint32_t mem_00925134;

// Calls the CRT invalid-parameter handler through its import slot.
static void invalidParameter() {
    const uint32_t handler = mem_00925134;
    if (handler != 0) {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(handler))();
    }
}

// Guest addresses are 32-bit virtual addresses; widen them to host pointers.
static inline uint8_t* guestBytes(uint32_t addr) {
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(addr));
}

// @name Unknown::copyByte2ToByte1_004B4CD0
// @class Unknown
// @summary For each 32-bit pointer in the range [this+0x0C, this+0x10) (stepping by 4), copies byte +2 of the pointed-to object into byte +1 of that object; asserts the range is ordered.
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
void fn_004B4CD0(void* self) {
    // Range bounds: begin at +0x0C, end (exclusive) at +0x10.
    const uint32_t begin = lift_field<uint32_t>(self, 0x0C);
    const uint32_t end0 = lift_field<uint32_t>(self, 0x10);

    // Iterator-debug precondition: begin must not exceed end.
    if (begin > end0) {
        invalidParameter();
    }

    uint32_t cur = begin;
    for (;;) {
        const uint32_t end = lift_field<uint32_t>(self, 0x10);
        if (cur == end) {
            break;
        }

        // Iterator-debug bounds check: cur must lie before end before dereferencing.
        if (!(cur < end)) {
            invalidParameter();
        }

        // Each slot holds a 32-bit pointer to an object.
        uint32_t obj = 0;
        std::memcpy(&obj, guestBytes(cur), sizeof(obj));

        // obj[1] = obj[2]
        const uint8_t src = guestBytes(obj)[2];
        guestBytes(obj)[1] = src;

        cur += 4;
    }
}
} // namespace lift_004B4CD0

// [0x004BA340] sub_004BA340 (85 bytes)
namespace lift_004BA340 {
// Import slot holding the address of MSVC std::operator< for std::string.
extern int mem_00924EF4;

using StrLessFn = bool(__cdecl*)(DWORD lhs, DWORD rhs);

// @name lowerBoundStringPtr_004BA340
// @summary std::lower_bound-style binary search over a DWORD array using the indirect comparator; returns first element not less than value.
DWORD* fn_004BA340(DWORD* first, DWORD* last, DWORD value) {
    auto less = reinterpret_cast<StrLessFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924EF4)));
    ptrdiff_t count = last - first;
    while (count > 0) {
        ptrdiff_t half = count / 2;
        DWORD* mid = first + half;
        if (less(*mid, value)) {
            first = mid + 1;
            count -= half + 1;
        } else {
            count = half;
        }
    }
    return first;
}
} // namespace lift_004BA340

// [0x004B7340] sub_004B7340 (90 bytes)
namespace lift_004B7340 {
extern std::string* mem_00AE1D18; // global string table: begin
extern std::string* mem_00AE1D1C; // global string table: end

extern void ext_invalid_parameter_noinfo(void);

// @name Unknown::copyStringFromTable
// @class Unknown
// @summary Copies table[index] into this+0x58 (std::string), with bounds check on the global table.
// @field Unknown +0x58 std::string field_0x58

void fn_004B7340(void* self, uint32_t index) {
    std::string* begin = mem_00AE1D18;
    std::string* end = mem_00AE1D1C;
    size_t count = static_cast<size_t>(end - begin);

    if (begin == nullptr || static_cast<size_t>(index) >= count) {
        ext_invalid_parameter_noinfo();
        return;
    }

    lift_field<std::string>(self, 0x58) = begin[index];
}
} // namespace lift_004B7340

// [0x004B79B0]
namespace lift_004B79B0 {
// @name parseFloatFromString
// @summary Converts a std::string argument (by value) to float via atof; returns the result in ST0.
float parseFloatFromString(std::string s) {
    return static_cast<float>(std::atof(s.c_str()));
}
} // namespace lift_004B79B0

// [0x004B4D30]
namespace lift_004B4D30 {
extern uint32_t mem_00925134;

// @name sub_004B4D30
// @summary Iterates over a vector of pointers at +0x8 and sets each element's byte at +0x1 to (byte at +0x2 == 0)
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x10 uint32_t field_0x10
void __thiscall sub_004B4D30(void* self) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    auto invalid_param = reinterpret_cast<void (*)()>(mem_00925134);
    uint32_t* vec = reinterpret_cast<uint32_t*>(base + 0x8);
    uint32_t* it = reinterpret_cast<uint32_t*>(vec[1]);

    if (reinterpret_cast<uintptr_t>(it) > vec[2]) {
        invalid_param();
    }

    while (true) {
        uint32_t last = vec[2];
        if (vec[1] > last) {
            invalid_param();
        }
        if (reinterpret_cast<uintptr_t>(it) == last) {
            break;
        }
        if (reinterpret_cast<uintptr_t>(it) >= vec[2]) {
            invalid_param();
        }
        uint8_t* elem = reinterpret_cast<uint8_t*>(*it);
        uint8_t flag = elem[2];
        if (reinterpret_cast<uintptr_t>(it) >= vec[2]) {
            invalid_param();
        }
        uint8_t* elem2 = reinterpret_cast<uint8_t*>(*it);
        elem2[1] = (flag == 0) ? 1 : 0;
        if (reinterpret_cast<uintptr_t>(it) >= vec[2]) {
            invalid_param();
        }
        ++it;
    }
}
} // namespace lift_004B4D30

// [0x004B4BA0] sub_004B4BA0 (30 bytes)
namespace lift_004B4BA0 {
// @name sub_004B4BA0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_004B4770();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_004B4BA0(DWORD* dst, DWORD value) {
    DWORD obj = ext_004B4770();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_004B4BA0

// [0x004B4BC0] sub_004B4BC0 (30 bytes)
namespace lift_004B4BC0 {
// @name sub_004B4BC0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_004B47D0();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_004B4BC0(DWORD* dst, DWORD value) {
    DWORD obj = ext_004B47D0();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_004B4BC0

// [0x004B4BE0] sub_004B4BE0 (30 bytes)
namespace lift_004B4BE0 {
// @name sub_004B4BE0
// @summary Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).
namespace lift_0046F6A0 {
DWORD ext_004B4830();  // ConstructOnce_0046F580

// @name StoreValueAndSingleton
// @summary Stores a value into dst[0], stores the one-time-constructed global object pointer into dst[1], and returns dst.
// @field <none> +0x00 DWORD field_0x00 (written from the value argument)
// @field <none> +0x04 DWORD field_0x04 (written from ext_0046F580() result)

DWORD* fn_004B4BE0(DWORD* dst, DWORD value) {
    DWORD obj = ext_004B4830();
    dst[0] = value;
    dst[1] = obj;
    return dst;
}
} // namespace lift_0046F6A0
} // namespace lift_004B4BE0
