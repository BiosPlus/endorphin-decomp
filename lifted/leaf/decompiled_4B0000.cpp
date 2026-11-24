// Lifted C++ translation unit: lifted/leaf/decompiled_4B0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

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
