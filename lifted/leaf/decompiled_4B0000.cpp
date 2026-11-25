// Lifted C++ translation unit: lifted/leaf/decompiled_4B0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <istream>
#include <bit>

#include <bit>
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
#include <memory>
#include <cstddef>

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

// [0x004B1880]
namespace lift_004B1880 {
// @name initStaticObjectOnce_004B1880
// @summary One-time initializer for the static object at 0x00AE0CE8; guarded by flag bit 0 at 0x00AE0CEC, sets its vtable to 0x00942074, and returns its address.
// @field
// (no member accesses; the object at 0x00AE0CE8 is a global, not a class member)

extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE0CEC;
extern DWORD mem_00AE0CE8;

void* fn_004B1880(void) {
    // The original wraps this in an MSVC SEH frame (fs:[0] push/restore) and
    // sets a try-state slot; that is compiler/runtime plumbing with no portable
    // equivalent, so it is omitted here. Only the guarded init logic is kept.
    if ((mem_00AE0CEC & 1u) == 0) {
        mem_00AE0CEC |= 1u;
        ext_0067A670(&mem_00AE0CE8, 0);
        mem_00AE0CE8 = 0x00942074u;
    }
    return &mem_00AE0CE8;
}
} // namespace lift_004B1880

// [0x004B4830] sub_004B4830 (87 bytes)
namespace lift_004B4830 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (calls ext_00672000 on self, then stores the single argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00AE0D60;
extern DWORD mem_00AE0D64;

// @name ensureStaticObjectInitialized_004B4830
// @summary One-time initializer guarded by bit 0 of mem_00AE0D64: constructs the static object at 0x00AE0D60 via ext_0067A670, sets its vtable to 0x0094251C, and returns its address.
DWORD fn_004B4830() {
    if ((mem_00AE0D64 & 1u) == 0) {
        mem_00AE0D64 |= 1u;
        ext_0067A670(&mem_00AE0D60, 0);
        mem_00AE0D60 = 0x0094251Cu;
    }
    return (DWORD)(uintptr_t)&mem_00AE0D60;
}
} // namespace lift_004B4830

// [0x004B4770]
namespace lift_004B4770 {
// @name initStaticObjectOnce_004B4770
// @summary One-time initializer for the static object at 0x00AE0D50; returns that object's address.

extern uint32_t mem_00AE0D54;
extern uint32_t mem_00AE0D50;
DWORD ext_0067A670(void* self, DWORD value);

uint32_t fn_004B4770() {
    // The original sets up and tears down an SEH frame (fs:[0] chain) around this body.
    // That is compiler/runtime state with no portable C++ equivalent, so it is omitted here.
    if ((mem_00AE0D54 & 1u) == 0) {
        mem_00AE0D54 |= 1u;
        ext_0067A670(&mem_00AE0D50, 0);
        mem_00AE0D50 = 0x009421BCu;
    }
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AE0D50));
}
} // namespace lift_004B4770

// [0x004B47D0] sub_004B47D0 (87 bytes)
namespace lift_004B47D0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern int mem_00AE0D5C;
extern int mem_00AE0D58;

// @name initStaticObjectOnce_004B47D0
// @summary One-time initializer for the static object at 0x00AE0D58 guarded by bit 0 of 0x00AE0D5C; returns the object's address.
void* fn_004B47D0() {
    if ((mem_00AE0D5C & 1) == 0) {
        mem_00AE0D5C |= 1;
        ext_0067A670(&mem_00AE0D58, 0);
        mem_00AE0D58 = 0x0094236C;
    }
    return &mem_00AE0D58;
}
} // namespace lift_004B47D0

// [0x004B7920]
namespace lift_004B7920 {
// @name initStaticObjectOnce_004B7920
// @summary One-time guarded initializer for the static object at 0x00AE165C; on first call sets bit 0 of 0x00AE1660, runs the object's init helper, stores 0x009433F4 into its first DWORD, and returns its address.

extern uint32_t mem_00AE1660;
extern uint32_t mem_00AE165C;
extern uint32_t ext_0067A670(void* self, uint32_t value);

void* fn_004B7920(void) {
    if ((mem_00AE1660 & 1u) == 0) {
        mem_00AE1660 |= 1u;
        ext_0067A670(&mem_00AE165C, 0u);
        mem_00AE165C = 0x009433F4u;
    }
    return &mem_00AE165C;
}
} // namespace lift_004B7920

// [0x004B99B0] sub_004B99B0 (87 bytes)
namespace lift_004B99B0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall: self in ECX, one stack argument; stores the argument into the first DWORD of self and returns it.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern uint32_t mem_00AE1698;
extern uint32_t mem_00AE1694;

// @name initStaticObjectOnce_004B99B0
// @summary One-time guarded initializer for the static object at mem_00AE1694; sets init bit 0 in mem_00AE1698, runs ext_0067A670 on the object with 0, stores 0x0094376C in its first DWORD, and returns its address.
// @field StaticObject_00AE1694 +0x00 uint32_t field_0x00
void* fn_004B99B0() {
    if ((mem_00AE1698 & 1u) == 0) {
        mem_00AE1698 |= 1u;
        ext_0067A670(&mem_00AE1694, 0);
        mem_00AE1694 = 0x0094376Cu;
    }
    return &mem_00AE1694;
}
} // namespace lift_004B99B0

// [0x004BA270] sub_004BA270 (87 bytes)
namespace lift_004BA270 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern uint32_t mem_00AE16B0;
extern uint32_t mem_00AE16AC;

// @name initStaticObjectOnce_004BA270
// @summary One-time guarded initializer for the static object at mem_00AE16AC; sets bit 0 of mem_00AE16B0, runs ext_0067A670 on the object, stores vtable-like pointer 0x00943694, and returns the object address.
void* fn_004BA270() {
    // The original wraps this in an MSVC SEH frame (fs:[0] push/pop). That
    // is exception-state bookkeeping with no portable equivalent, so it is
    // omitted; the guard and init logic below are unchanged.
    if ((mem_00AE16B0 & 1u) == 0) {
        mem_00AE16B0 |= 1u;
        // The original passes a saved SEH word as the stack argument; it is
        // overwritten by the vtable store below, so 0 is passed here.
        ext_0067A670(&mem_00AE16AC, 0);
        mem_00AE16AC = 0x00943694u;
    }
    return static_cast<void*>(&mem_00AE16AC);
}
} // namespace lift_004BA270

// [0x004BA740] sub_004BA740 (87 bytes)
namespace lift_004BA740 {
// @name sub_004BA740
// @summary Auto-lifted identical-shape clone of 0x0049D390 (initPairWithStaticHandle).
namespace lift_0049D390 {
// Known callee 0x0049CFF0: ensureStaticObjectInitialized_0049CFF0 (One-time initializer guarded by bit 0 of mem_00ADD818; initializes the static object at mem_00ADD814 and returns its address.)
extern void* ext_004BA270();
extern int mem_00B599BC;

// @name initPairWithStaticHandle
// @summary Writes a value into dst[0], stores the static object handle into dst[1], and returns dst.
// @field Pair +0x00 uint32_t field_0x00
// @field Pair +0x04 uint32_t field_0x04
void* fn_004BA740(void* dst, uint32_t value) {
    auto* out = static_cast<uint32_t*>(dst);

    // Pre-initialize both slots (original code zeroes [dst] and seeds [dst+4] from mem_00B599BC).
    out[0] = 0;
    out[1] = static_cast<uint32_t>(mem_00B599BC);

    // One-time initialization of the static object; returns its address.
    void* handle = ext_004BA270();

    out[0] = value;
    out[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(handle));
    return dst;
}
} // namespace lift_0049D390
} // namespace lift_004BA740

// [0x004B51F0] sub_004B51F0 (90 bytes)
namespace lift_004B51F0 {
// @name sub_004B51F0
// @summary Auto-lifted identical-shape clone of 0x0050BE20 (Vector_eraseTailChecked).
namespace lift_0050BE20 {
// Known callee 0x00536230: deleteRangeChecked (Deletes each non-null element of a 4-byte-slot range [first, last), validating the owner and its bound at every step.)
// Called with four stack words in the order the original pushes them: (self, begin, self, end).
extern void ext_004B4930(void* self, uint32_t arg1, uint32_t first, uint32_t arg3, uint32_t bound);
// Known callee 0x00596660: Vector_erase_range (Erases a range [first, last) of 4-byte elements from a vector and returns the updated iterator.)
extern void* ext_00596660(void* self, void* out_iter, uint32_t first_container, uint32_t first_ptr, uint32_t last_container, uint32_t last_ptr);
// Invalid-parameter handler pointer (MSVCR80!_invalid_parameter_noinfo).
extern void mem_00925134();

// @name Vector_eraseTailChecked
// @class Vector
// @summary Validates the vector's begin/end/bound pointers, deletes the owned elements through ext_00536230, then erases the tail range via ext_00596660.
// @field Vector +0x04 uint32_t field_0x04
// @field Vector +0x08 uint32_t field_0x08
void fn_004B51F0(void* self) {
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
    ext_004B4930(self, selfValue, first, selfValue, bound);

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
} // namespace lift_004B51F0

// [0x004BA170] sub_004BA170 (94 bytes)
namespace lift_004BA170 {
// Known callee 0x00665810: sub_00665810 (Stores address of mem_00987A04 into field at offset +0x0.)
extern void ext_00665810(void* self);

// @name Unknown::ReleaseStringAndBase
// @class Unknown
// @summary Destroys and frees the heap-allocated std::string at +0x18 if set, then runs the base-part reset (ext_00665810).
// @field Unknown +0x18 void* field_0x18
void fn_004BA170(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    void** slot = reinterpret_cast<void**>(base + 0x18);
    void* str = *slot;
    if (str != nullptr) {
        std::destroy_at(static_cast<std::string*>(str));
        ::operator delete(str);
    }
    ext_00665810(self);
}
} // namespace lift_004BA170

// [0x004B6680] sub_004B6680 (94 bytes)
namespace lift_004B6680 {
// Import slot (IAT entry for MSVCR80!_invalid_parameter_noinfo).
extern void (*mem_00925134)(void);

// @name DestroyOwnedRange
// @class Container
// @summary Iterates [first, last) over a container of owned object pointers (debug-checked iterators), calling each non-null element's virtual slot 0x234 with flag 1 (scalar deleting destructor).
// @field Container +0x08 uintptr_t field_0x08
void fn_004B6680(uintptr_t container, uintptr_t first, uintptr_t container2, uintptr_t last) {
    uintptr_t it = first;
    for (;;) {
        // Debug check: container must be valid and match the second container argument.
        if (container == 0 || container != container2) {
            mem_00925134();
        }
        if (it == last) {
            return;
        }
        // Debug check: iterator must be valid and within the container's end pointer.
        if (container == 0) {
            mem_00925134();
        }
        if (it >= lift_field<uintptr_t>(reinterpret_cast<void*>(container), 0x08)) {
            mem_00925134();
        }
        uintptr_t cur = it;
        it += 4;
        if (container == 0) {
            mem_00925134();
        }
        if (cur >= lift_field<uintptr_t>(reinterpret_cast<void*>(container), 0x08)) {
            mem_00925134();
        }
        uintptr_t obj = *reinterpret_cast<uintptr_t*>(cur);
        if (obj == 0) {
            continue;
        }
        // Virtual call: vtable slot at byte offset 0x234, invoked with flag 1.
        uintptr_t vtable = *reinterpret_cast<uintptr_t*>(obj);
        auto fn = *reinterpret_cast<void (**)(void*, int)>(vtable + 0x234);
        fn(reinterpret_cast<void*>(obj), 1);
    }
}
} // namespace lift_004B6680

// [0x004B4A40] sub_004B4A40 (95 bytes)
namespace lift_004B4A40 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
extern void* ext_0066AD10(void* out_str, uint8_t flag);
extern void ext_006A6C87(const void* dtor);
extern int mem_00AE0D8C;
extern int mem_00AE0D70;

// @name InitOnceGlobalString_004B4A40
// @summary One-time guarded initializer for the global string at 0x00AE0D70; registers its teardown via ext_006A6C87 and returns the global's address.
//
// The original wraps the init in an MSVC SEH frame (fs:[0]) so that the
// guard flag is cleared/handled if initialization throws. That frame is
// compiler/runtime plumbing and is not reproduced here.
void* fn_004B4A40() {
    // Guard bit 0 of mem_00AE0D8C: run initialization only once.
    if ((mem_00AE0D8C & 1) == 0) {
        mem_00AE0D8C |= 1;
        ext_0066AD10(reinterpret_cast<void*>(&mem_00AE0D70),
                     static_cast<uint8_t>(0xA37440u));
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x009182D0u)));
    }
    return reinterpret_cast<void*>(&mem_00AE0D70);
}
} // namespace lift_004B4A40

// [0x004BEAA0]
namespace lift_004BEAA0 {
extern void* ext_0066AD10(void* out_str, uintptr_t arg);
extern int ext_006A6C87(uintptr_t fn);
extern uint32_t mem_00AE1D40;
extern int mem_00AE1D24;

// @name InitOnceGlobalString_004BEAA0
// @summary One-time initializer for global string at mem_00AE1D24; returns its address.
void* fn_004BEAA0() {
    if ((mem_00AE1D40 & 1u) == 0) {
        mem_00AE1D40 |= 1u;
        ext_0066AD10(&mem_00AE1D24, static_cast<uintptr_t>(0x00A395E8u));
        ext_006A6C87(static_cast<uintptr_t>(0x009185D0u));
    }
    return &mem_00AE1D24;
}
} // namespace lift_004BEAA0

// [0x004B5030] sub_004B5030 (95 bytes)
namespace lift_004B5030 {
// Known callee 0x00665810: sub_00665810 (Stores address of mem_00987A04 into field at offset +0x0.)
extern void __fastcall ext_00665810(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// Called cdecl with one pointer argument (push esi; call; add esp,4).
extern void ext_006A5C5C(void* p);

// @name ReleaseOwnedStringNode
// @summary If the owner's +0x18 node pointer is set, destroy the std::string at node+0x4, free the node, then reset this object via sub_00665810.
// @field field_0x18 +0x18 void* node
void fn_004B5030(void* self) {
    auto* owner = static_cast<uint8_t*>(self);
    void* node = lift_field<void*>(owner, 0x18);

    if (node != nullptr) {
        auto* str = reinterpret_cast<std::string*>(static_cast<uint8_t*>(node) + 0x4);
        str->~basic_string();
        ext_006A5C5C(node);
    }

    ext_00665810(self);
}
} // namespace lift_004B5030

// [0x004B7540] sub_004B7540 (95 bytes)
namespace lift_004B7540 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
// Known callee 0x006A6C87: sub_006A6C87 (18B), called with a single argument (0x009184B0).
void* ext_0066AD10(void* out_str, uint8_t flag);
int ext_006A6C87(uintptr_t arg);
extern uint32_t mem_00AE1658;
extern uint32_t mem_00AE163C;

// @name InitOnceGlobalString_004B7540
// @summary One-time initializer for global string at mem_00AE163C; returns its address.
void* fn_004B7540() {
    if ((mem_00AE1658 & 1u) == 0) {
        mem_00AE1658 |= 1u;
        ext_0066AD10(&mem_00AE163C, static_cast<uint8_t>(0xA328D4u));
        ext_006A6C87(static_cast<uintptr_t>(0x009184B0u));
    }
    return &mem_00AE163C;
}
} // namespace lift_004B7540

// [0x004B74E0]
namespace lift_004B74E0 {
// @name InitOnceGlobalString_004B74E0
// @summary One-time guarded initializer for the global string at mem_00AE161C; runs the setup call and registers its teardown on first use, then returns the global's address.

extern uint32_t mem_00AE1638;   // init guard flag (bit 0 = initialized)
extern uint8_t  mem_00AE161C[]; // global string storage

void* ext_0066AD10(void* out_str, uint8_t flag);
void  ext_006A6C87(void* teardown);
void  ext_009184C0(void);       // teardown routine registered via ext_006A6C87

void* sub_004B74E0() {
    if ((mem_00AE1638 & 1u) == 0) {
        mem_00AE1638 |= 1u;
        ext_0066AD10(static_cast<void*>(mem_00AE161C), static_cast<uint8_t>(0x30));
        ext_006A6C87(reinterpret_cast<void*>(&ext_009184C0));
    }
    return static_cast<void*>(mem_00AE161C);
}
} // namespace lift_004B74E0

// [0x004B4AA0] sub_004B4AA0 (33 bytes)
namespace lift_004B4AA0 {
// Known callee 0x004B4A40: InitOnceGlobalString_004B4A40 (One-time guarded initializer for the global string at 0x00AE0D70; registers its teardown via ext_006A6C87 and returns the global's address.)
extern void* ext_004B4A40();
// Import slot for the MSVCP80 std::basic_string<char> copy constructor (__thiscall, one stack arg).
extern int mem_00924FE0;

// @name CopyInitOnceGlobalString_004B4AA0
// @summary Copy-constructs the caller's std::string from the lazily initialized global string and returns the destination.
void* fn_004B4AA0(void* dst) {
    // Original code also zeroes a scratch stack slot before the call; it is unobservable and omitted.
    using CopyCtor = void(__thiscall*)(void* self, const void* other);
    const void* src = ext_004B4A40();
    // Indirect call through the import slot at mem_00924FE0 (thiscall: callee cleans the stack arg).
    (*reinterpret_cast<CopyCtor*>(&mem_00924FE0))(dst, src);
    return dst;
}
} // namespace lift_004B4AA0

// [0x004BA060] sub_004BA060 (99 bytes)
namespace lift_004BA060 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* ptr);
extern int mem_00925134;
extern int mem_00924FF4;

namespace {

using StringDtorFn = void (*)(void*);
using InvalidParamFn = void (*)();

// Resolve an import slot (mem_*) holding a 32-bit code address.
inline uintptr_t slot_target(int slot) {
    return static_cast<uintptr_t>(static_cast<uint32_t>(slot));
}

inline void* as_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

inline uint32_t read_u32(uint32_t addr) {
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(addr));
}

// Debug-iterator compatibility failure: MSVCR80 _invalid_parameter_noinfo.
[[noreturn]] inline void raise_invalid_parameter() {
    reinterpret_cast<InvalidParamFn>(slot_target(mem_00925134))();
    std::abort();
}

// Destroy the std::string object at obj (original: mov ecx, obj; call [mem_00924FF4]).
// The original passes `this` in ECX (thiscall); this wrapper passes it as the first argument.
inline void destroy_string(uint32_t obj) {
    reinterpret_cast<StringDtorFn>(slot_target(mem_00924FF4))(as_ptr(obj));
}

}  // namespace

// @name DestroyStringPtrRange
// @summary Walks [it, last) over an array of 32-bit std::string* slots with debug-iterator checks against owner, destroying and freeing each non-null entry.
// @field Unknown +0x08 DWORD field_0x08
void fn_004BA060(uint32_t owner, uint32_t it, uint32_t expected_owner, uint32_t last) {
    for (;;) {
        if (owner == 0 || owner != expected_owner) raise_invalid_parameter();
        if (it == last) return;

        const uint32_t cur = it;
        if (owner == 0 || !(cur < read_u32(owner + 8))) raise_invalid_parameter();
        it = cur + 4;
        if (owner == 0 || !(cur < read_u32(owner + 8))) raise_invalid_parameter();

        const uint32_t element = read_u32(cur);
        if (element == 0) continue;

        destroy_string(element);
        ext_006A5C5C(as_ptr(element));
    }
}
} // namespace lift_004BA060

// [0x004B64C0] sub_004B64C0 (102 bytes)
namespace lift_004B64C0 {
// Known callee 0x004B4BA0: sub_004B4BA0 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD* ext_004B4BA0(DWORD* dst, DWORD value);
// Known callee 0x004B4BC0: sub_004B4BC0 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD* ext_004B4BC0(DWORD* dst, DWORD value);
// Known callee 0x004B4BE0: sub_004B4BE0 (Auto-lifted identical-shape clone of 0x0046F6A0 (StoreValueAndSingleton).)
extern DWORD* ext_004B4BE0(DWORD* dst, DWORD value);
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(uint32_t* out);

// @name ConstructBySelector_004B64C0
// @summary Dispatches on selector (arg2 - 0x386): 0/1/2 call the matching StoreValueAndSingleton-style initializer; any other value calls sub_00671F30 on dst. Returns dst.
DWORD* fn_004B64C0(DWORD* dst, DWORD selector) {
    // The original pushes the entry ECX register as the callee's second argument
    // on the three initializer paths; that value is not a meaningful parameter,
    // so it is modeled as 0 here.
    const DWORD entry_ecx = 0;

    switch (selector - 0x386u) {
    case 0:
        ext_004B4BA0(dst, entry_ecx);
        break;
    case 1:
        ext_004B4BC0(dst, entry_ecx);
        break;
    case 2:
        ext_004B4BE0(dst, entry_ecx);
        break;
    default:
        ext_00671F30(dst);
        break;
    }
    return dst;
}
} // namespace lift_004B64C0

// [0x004B72D0] sub_004B72D0 (100 bytes)
namespace lift_004B72D0 {
// @name sub_004B72D0
// @summary Auto-lifted identical-shape clone of 0x005C3FB0 (sub_005CF3E0).
namespace lift_005C3FB0 {
// @name FindEntryIndexByStringAt17C
// @summary Scans the 28-byte entries between mem_00B44C08 (begin) and mem_00B44C0C (end) for the first whose leading std::string equals this+0x17C; returns its index, or 0 when none matches or the array is empty.
// @field +0x17C uint8_t[28] field_0x17C


extern uintptr_t mem_00AE1D18;  // vector-like begin pointer (global)
extern uintptr_t mem_00AE1D1C;  // vector-like end pointer (global)

extern bool __cdecl ext_MSVCP80_string_equal(const void* lhs, const void* rhs);

constexpr uint32_t kEntryStride = 0x1C;
constexpr ptrdiff_t kKeyOffset = 0x58;

extern uint32_t __thiscall fn_004B72D0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);

    uint8_t* begin = reinterpret_cast<uint8_t*>(mem_00AE1D18);
    if (begin == nullptr) {
        return 0;
    }

    uint32_t span = static_cast<uint32_t>(mem_00AE1D1C - mem_00AE1D18);
    uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(span) / static_cast<int32_t>(kEntryStride));

    for (uint32_t i = 0; i < count; ++i) {
        uint8_t* entry = begin + static_cast<size_t>(i) * kEntryStride;
        if (ext_MSVCP80_string_equal(entry, obj + kKeyOffset)) {
            return i;
        }
    }

    return 0;
}
} // namespace lift_005C3FB0
} // namespace lift_004B72D0

// [0x004B4930]
namespace lift_004B4930 {
// @name destroyStringEntryRange
// @summary Iterates a checked vector iterator range, destroying each non-null entry's std::string at +0x4 and freeing the entry.
// @field Vector +0x08 uint32_t end_ptr


extern void fn_006A5C5C(void* ptr);
extern uint32_t mem_00925134;
extern uint32_t mem_00924FF4;

void __stdcall fn_004B4930(uint32_t begin_cont, uint32_t begin_ptr, uint32_t end_cont, uint32_t end_ptr) {
    using InvalidParamFn = void (__cdecl*)(void);
    using StringDtorFn = void (__thiscall*)(void*);

    auto invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));
    auto string_dtor = reinterpret_cast<StringDtorFn>(static_cast<uintptr_t>(mem_00924FF4));

    uint32_t cur = begin_ptr;
    for (;;) {
        if (begin_cont == 0 || begin_cont != end_cont) {
            invalid_param();
        }
        if (cur == end_ptr) {
            break;
        }
        uint32_t elem_slot = cur;
        if (begin_cont == 0) {
            invalid_param();
        }
        uint32_t vec_end = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(begin_cont + 0x8u));
        if (cur >= vec_end) {
            invalid_param();
        }
        cur += 4u;
        if (begin_cont == 0) {
            invalid_param();
        }
        vec_end = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(begin_cont + 0x8u));
        if (elem_slot >= vec_end) {
            invalid_param();
        }
        uint32_t elem = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(elem_slot));
        if (elem == 0) {
            continue;
        }
        string_dtor(reinterpret_cast<void*>(static_cast<uintptr_t>(elem + 0x4u)));
        fn_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(elem)));
    }
}
} // namespace lift_004B4930

// [0x004B5180] sub_004B5180 (109 bytes)
namespace lift_004B5180 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C();
extern int mem_00925134;
extern int mem_00924FF4;
extern int mem_009251EC;

// @name eraseStringNodeAt
// @summary Erases one pointer-slot from a pointer array at an iterator: frees the node's string and pointer, shifts the tail down, shrinks end by one slot, and returns (v, it) through the hidden out pointer.
// @field self +0x08 uintptr_t field_0x08
// @field v +0x08 uintptr_t field_0x08
void fn_004B5180(void* self, uintptr_t* out, uintptr_t* v, uintptr_t it) {
    // Error handler pointer stored in the .rdata slot (MSVCR80!_invalid_parameter_noinfo).
    const uintptr_t invalid_handler = static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925134));
    auto invalid_parameter = [invalid_handler]() {
        reinterpret_cast<void (*)()>(invalid_handler)();
    };

    auto* selfBytes = static_cast<unsigned char*>(self);

    // Null container or iterator past the end -> invalid parameter.
    if (v == nullptr) {
        invalid_parameter();
    }
    const uintptr_t vEnd = *reinterpret_cast<uintptr_t*>(reinterpret_cast<unsigned char*>(v) + 0x08);
    if (it >= vEnd) {
        invalid_parameter();
    }

    // Node pointer stored at the iterator.
    const uintptr_t node = *reinterpret_cast<uintptr_t*>(it);
    if (node != 0) {
        // Destroy std::string at node+4 (function pointer in mem_00924FF4, thiscall with ecx = node+4).
        const uintptr_t strDtor = static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4));
        reinterpret_cast<void (*)(void*)>(strDtor)(reinterpret_cast<void*>(node + 4));

        // Free the node itself via the MFC80 thunk.
        reinterpret_cast<void (*)(void*)>(reinterpret_cast<void*>(&ext_006A5C5C))(
            reinterpret_cast<void*>(node));
    }

    // Number of pointer slots after the erased one, from (it + 4) up to self->end.
    const uintptr_t selfEnd = *reinterpret_cast<uintptr_t*>(selfBytes + 0x08);
    const intptr_t remaining = (static_cast<intptr_t>(selfEnd) - static_cast<intptr_t>(it + 4)) >> 2;
    if (remaining > 0) {
        const size_t bytes = static_cast<size_t>(remaining) * 4;
        std::memmove(reinterpret_cast<void*>(it), reinterpret_cast<const void*>(it + 4), bytes);
    }

    // Shrink end by one slot.
    *reinterpret_cast<uintptr_t*>(selfBytes + 0x08) = selfEnd - 4;

    // Return pair: { v, it }.
    out[0] = reinterpret_cast<uintptr_t>(v);
    out[1] = it;
}
} // namespace lift_004B5180
