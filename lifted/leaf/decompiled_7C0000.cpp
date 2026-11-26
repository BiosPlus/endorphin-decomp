// Lifted C++ translation unit: lifted/leaf/decompiled_7C0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cmath>
#include <bit>
#include <cstring>

#include <cstring>
namespace lift_007C97A0 {
// @name Unknown::setField44IfBit0Clear
// @class Unknown
// @summary Sets the 32-bit field at +0x44 if bit 0 of +0x9C is clear.
// @field Unknown +0x44 uint32_t field_0x44


extern uint32_t ext_007C9260(void* self);

void fn_007C97A0(void* self, uint32_t value) {
    if (ext_007C9260(self) == 0) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x44) = value;
    }
}
} // namespace lift_007C97A0

// [0x007C9930]
namespace lift_007C9930 {
// @name Unknown::CallHelperThenDispatchAt15C
// @summary Calls ext_007C98C0 on the argument, then calls the indirect target in mem_00AB28C8 with (this+0x40+0x15C, this, this).
// @field Unknown +0x40 DWORD field_0x40

extern void ext_007C98C0(void* self);
extern DWORD mem_00AB28C8;

extern void __cdecl sub_007C9930(void* self) {
    ext_007C98C0(self);
    using DispatchFn = void(__cdecl*)(DWORD, void*, void*);
    auto target = reinterpret_cast<DispatchFn>(mem_00AB28C8);
    DWORD arg = lift_field<DWORD>(self, 0x40) + 0x15C;
    target(arg, self, self);
}
} // namespace lift_007C9930

// [0x007C9370] sub_007C9370 (34 bytes)
namespace lift_007C9370 {
// Known callee 0x007CA120: sub_007CA120 (121 bytes), cdecl, 4 stack args.
extern uint32_t ext_007CA120(void* a0, void* a1, uint32_t a2, uint32_t a3);

// @name Unknown::forwardWithSubobject
// @class Unknown
// @summary Calls ext_007CA120 with this->+0x98 as first argument, this+0x12C as second, 0 as third, and arg2 as fourth; returns its result.
// @field Unknown +0x98 void* field_0x98
// @field Unknown +0x12C void* field_0x12C
uint32_t fn_007C9370(void* self, uint32_t arg2) {
    void* handle = lift_field<void*>(self, 0x98);
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x12C;
    return ext_007CA120(handle, sub, 0, arg2);
}
} // namespace lift_007C9370

// [0x007C5950] sub_007C5950 (34 bytes)
namespace lift_007C5950 {
// Known callee 0x006A7256: thunk_MSVCR80__CIacos (IAT jump thunk forwarding to MSVCR80!_CIacos.)
// The CRT helper takes its operand and returns its result on the x87 stack; modelled here as float in/out.
extern float ext_006A7256(float x);

// @name Unknown::doubleAcosOfField1B0
// @class Unknown
// @summary Returns 2 * acos(field at +0x1B0), with float rounding at each intermediate step.
// @field Unknown +0x1B0 float field_0x1B0
float fn_007C5950(void* self) {
    const auto* base = static_cast<const unsigned char*>(self);
    float a;
    std::memcpy(&a, base + 0x1B0, sizeof(a));
    float r = ext_006A7256(a);   // acos
    r = r + r;                   // 2 * acos
    return r;
}
} // namespace lift_007C5950

// [0x007C9340] sub_007C9340 (36 bytes)
namespace lift_007C9340 {
// @name copyVec3FromIndexedElement
// @summary Copies three floats at +0x10 of the idx-th 32-byte element of base into out[0..2].
void fn_007C9340(const void* base, UINT idx, FLOAT* out) {
    const auto* element = reinterpret_cast<const uint8_t*>(base) + static_cast<size_t>(idx) * 32u;
    out[0] = lift_field<FLOAT>(element, 0x10);
    out[1] = lift_field<FLOAT>(element, 0x14);
    out[2] = lift_field<FLOAT>(element, 0x18);
}
} // namespace lift_007C9340

// [0x007C9CD0]
namespace lift_007C9CD0 {
// @name setAbsField04
// @summary Stores the absolute value of a float argument into offset +0x04 of the target struct.
// @field Target +0x04 float field_0x04


void sub_007C9CD0(void* dst, float val) {
    float abs_val = (val < 0.0f) ? -val : val;
    *reinterpret_cast<float*>(reinterpret_cast<uint8_t*>(dst) + 0x4) = abs_val;
}
} // namespace lift_007C9CD0

// [0x007C62B0]
namespace lift_007C62B0 {
// @name set_vec3_0xb0
// @summary Store three float values into object fields at offsets 0xb0, 0xb4, and 0xb8
// @field Object +0xb0 float field_0xb0
// @field Object +0xb4 float field_0xb4
// @field Object +0xb8 float field_0xb8

void sub_007C62B0(uintptr_t obj, float a1, float a2, float a3) {
    *reinterpret_cast<float*>(obj + 0xb0) = a1;
    *reinterpret_cast<float*>(obj + 0xb4) = a2;
    *reinterpret_cast<float*>(obj + 0xb8) = a3;
}
} // namespace lift_007C62B0

// [0x007C6DB0]
namespace lift_007C6DB0 {
// @name sub_007C6DB0
// @summary Initializes object via sub_007C6C60 and invokes callback at 0x00AB28C8 with field_0x17c + 0x114 and object
// @field Object +0x17c uint32_t field_0x17c


extern void ext_007C6C60(uint32_t);
extern uint32_t mem_00AB28C8;

void sub_007C6DB0(uint32_t arg0) {
    ext_007C6C60(arg0);
    uint32_t ptr = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(arg0 + 0x17c)) + 0x114;
    using Fn = void (*)(uint32_t, uint32_t);
    Fn fn = reinterpret_cast<Fn>(static_cast<uintptr_t>(mem_00AB28C8));
    fn(ptr, arg0);
}
} // namespace lift_007C6DB0

// [0x007C9E20]
namespace lift_007C9E20 {
// @name SetValueAndUpdateFlag
// @summary Stores a 32-bit value at *p, then sets p[+0x04] to 1 if the value is nonzero or p[+0x50]/p[+0x1c] is nonzero, otherwise 0.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x1c uint32_t field_0x1c
// @field Unknown +0x50 uint32_t field_0x50


void SetValueAndUpdateFlag(uint32_t* p, uint32_t v) {
    *p = v;
    if (v == 0) {
        if (p[0x50 / 4] == v && p[0x1c / 4] == v) {
            p[0x04 / 4] = v;
            return;
        }
    }
    p[0x04 / 4] = 1;
}
} // namespace lift_007C9E20

// [0x007CA310] sub_007CA310 (37 bytes)
namespace lift_007CA310 {
// @name scaleVec3Store
// @summary Writes dst[i] = src[i] * s for i in 0..2 (3-float vector scale; dst and src are float[3] pointers, s is a float scalar).
// @field Unknown +0x00 float src_x
// @field Unknown +0x04 float src_y
// @field Unknown +0x08 float src_z
void scaleVec3Store(float* dst, float s, const float* src) {
    dst[0] = src[0] * s;
    dst[1] = src[1] * s;
    dst[2] = src[2] * s;
}
} // namespace lift_007CA310

// [0x007CD550] sub_007CD550 (37 bytes)
namespace lift_007CD550 {
extern uint32_t ext_007D8700(uint32_t arg0);
extern void ext_007C9930(void* self);

// @name Unknown::TakeField18ThenDispatchAt15C
// @class Unknown
// @summary Clears the pointer-sized slot at +0x18, and if it was non-null, passes it through ext_007D8700 and tail-dispatches the result to ext_007C9930; otherwise returns.
// @field Unknown +0x18 uint32_t field_0x18
void fn_007CD550(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t* slot = reinterpret_cast<uint32_t*>(base + 0x18);

    const uint32_t value = *slot;
    *slot = 0;
    if (value == 0) {
        return;
    }

    const uint32_t resolved = ext_007D8700(value);
    ext_007C9930(reinterpret_cast<void*>(static_cast<uintptr_t>(resolved)));
}
} // namespace lift_007CD550

// [0x007C97C0]
namespace lift_007C97C0 {
// @name Unknown::setFields94And98IfUnlocked
// @class Unknown
// @summary Sets 32-bit fields at +0x94 and +0x98 if bit 0 of field +0x9C is clear.
// @field Unknown +0x94 uint32_t field_0x94
// @field Unknown +0x98 uint32_t field_0x98


extern uint32_t ext_007C9260(void* self);

void fn_007C97C0(void* self, uint32_t val94, uint32_t val98) {
    if (ext_007C9260(self) != 0) {
        return;
    }
    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x94) = val94;
    *reinterpret_cast<uint32_t*>(base + 0x98) = val98;
}
} // namespace lift_007C97C0

// [0x007C8850]
namespace lift_007C8850 {
extern uint32_t __cdecl ext_007C8820(uint32_t obj, int32_t index);

// @name GetArrayEntryFieldIfValid
// @class (none)
// @summary Returns the dword at +0x20 of the 40-byte entry at index in the array held at obj+0x20, if the entry is valid; otherwise returns the constant 0x0099D280.
// @field <Owner> +0x20 uint32_t field_0x20
// @field Entry +0x20 uint32_t field_0x20
uint32_t fn_007C8850(uint32_t obj, int32_t index) {
    if (ext_007C8820(obj, index) == 0) {
        return 0x0099D280u;
    }

    const uint8_t* const owner = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(obj));
    const uint32_t array_base = lift_field<uint32_t>(owner, 0x20);
    const uint8_t* const array = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(array_base));
    const uint32_t entry_offset = static_cast<uint32_t>(index) * 40u + 0x20u;
    return lift_field<uint32_t>(array, static_cast<ptrdiff_t>(entry_offset));
}
} // namespace lift_007C8850

// [0x007CB940]
namespace lift_007CB940 {
// @name setNonNegativeFloat_0x10
// @summary Clamps a float to >= 0.0f and stores it at offset +0x10
// @field unknown +0x10 float field_0x10
void sub_007CB940(void* self, float value) {
    float clamped = (value < 0.0f) ? 0.0f : value;
    *reinterpret_cast<float*>(reinterpret_cast<uintptr_t>(self) + 0x10) = clamped;
}
} // namespace lift_007CB940

// [0x007CA8A0]
namespace lift_007CA8A0 {
extern const double mem_0092C510;

// @name getDoubledVec3
// @summary Reads three floats at offsets +0x10, +0x14, +0x18, multiplies each by 2.0, and writes them to three output pointers.
// @field unknown +0x10 float field_0x10
// @field unknown +0x14 float field_0x14
// @field unknown +0x18 float field_0x18

void __cdecl sub_007CA8A0(const void* self, float* outX, float* outY, float* outZ) {
    const auto* base = static_cast<const uint8_t*>(self);
    const double scale = mem_0092C510;
    *outX = static_cast<float>(static_cast<double>(*reinterpret_cast<const float*>(base + 0x10)) * scale);
    *outY = static_cast<float>(static_cast<double>(*reinterpret_cast<const float*>(base + 0x14)) * scale);
    *outZ = static_cast<float>(scale * static_cast<double>(*reinterpret_cast<const float*>(base + 0x18)));
}
} // namespace lift_007CA8A0

// [0x007CCC00]
namespace lift_007CCC00 {
extern uint32_t mem_0094CE80;

// @name setFloatAndUpdateFlag
// @summary Stores a float at +0x1c and sets or clears bit 0x8 at +0xc based on its magnitude.
// @field struct +0xc uint32_t field_0xc
// @field struct +0x1c float field_0x1c
void sub_007CCC00(uintptr_t ecx_ptr, float value) {
    *reinterpret_cast<float*>(ecx_ptr + 0x1c) = value;
    float abs_val = std::fabs(value);
    float threshold = *reinterpret_cast<const float*>(&mem_0094CE80);
    uint32_t* flags = reinterpret_cast<uint32_t*>(ecx_ptr + 0xc);
    if (abs_val <= threshold) {
        *flags &= ~0x8u;
    } else {
        *flags |= 0x8u;
    }
}
} // namespace lift_007CCC00

// [0x007C1F60]
namespace lift_007C1F60 {
// @name writeU16BE
// @summary Writes a 16-bit unsigned integer in big-endian order to a buffer and advances the write offset by 2.
// @field Buffer +0x08 uint8_t* field_0x08
// @field Buffer +0x14 uint32_t field_0x14


void __cdecl sub_007C1F60(void* self, uint32_t value) {
    uint8_t* buf = *reinterpret_cast<uint8_t**>(reinterpret_cast<uintptr_t>(self) + 0x08);
    uint32_t pos = *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(self) + 0x14);
    buf[pos] = static_cast<uint8_t>(value >> 8);
    pos += 1;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(self) + 0x14) = pos;
    buf = *reinterpret_cast<uint8_t**>(reinterpret_cast<uintptr_t>(self) + 0x08);
    buf[pos] = static_cast<uint8_t>(value & 0xFFu);
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uintptr_t>(self) + 0x14) = pos + 1;
}
} // namespace lift_007C1F60

// [0x007CAFD0] sub_007CAFD0 (49 bytes)
namespace lift_007CAFD0 {
// @name Unknown::setXYAndComputeLength
// @class Unknown
// @summary Stores x into +0x10, then sets +0x18 to sqrt(x*x + y*y) where y is read from +0x14.
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
extern void __cdecl fn_007CAFD0(void* self, float x) {
    lift_field<float>(self, 0x10) = x;

    // Original x87 sequence keeps intermediates at extended precision,
    // so the sum of squares and the sqrt are evaluated in double and
    // rounded to float only on store.
    const double y = static_cast<double>(lift_field<float>(self, 0x14));
    const double xd = static_cast<double>(x);
    const double len = std::sqrt(xd * xd + y * y);

    lift_field<float>(self, 0x18) = static_cast<float>(len);
}
} // namespace lift_007CAFD0

// [0x007CCCD0] sub_007CCCD0 (49 bytes)
namespace lift_007CCCD0 {
// @name Unknown::clampNonNegativeToFields20And2C
// @class Unknown
// @summary Stores v into +0x20 and +0x2c, replacing v with 0.0f when v < 0 (NaN and -0.0 pass through).
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x2c float field_0x2c
extern void __cdecl fn_007CCCD0(void* self, float v) {
    // x87 fcom + fnstsw + test ah,5 + jp: the branch to the "store v" path is taken
    // for v >= 0, equal, and unordered (NaN); only v < 0 falls through to store 0.0.
    const float out = (v < 0.0f) ? 0.0f : v;

    lift_field<float>(self, 0x20) = out;
    lift_field<float>(self, 0x2c) = out;
}
} // namespace lift_007CCCD0

// [0x007C9A60] sub_007C9A60 (50 bytes)
namespace lift_007C9A60 {
// @name copyVec4FromSelectedBlock
// @summary Copies a 4-float block from self+0x160 (flag==0) or self+0x174 (flag!=0) into out.
// @field self +0x160 float field_0x160
// @field self +0x164 float field_0x164
// @field self +0x168 float field_0x168
// @field self +0x16C float field_0x16C
// @field self +0x174 float field_0x174
// @field self +0x178 float field_0x178
// @field self +0x17C float field_0x17C
// @field self +0x180 float field_0x180
void fn_007C9A60(uint8_t* self, DWORD flag, float* out) {
    const uint8_t* src = self + (flag == 0 ? 0x160 : 0x174);
    std::memcpy(out, src, 4 * sizeof(float));
}
} // namespace lift_007C9A60

// [0x007CB980]
namespace lift_007CB980 {
extern const double mem_00993828;

// @name ObjectField::SetHalfOrZeroFloat14
// @class ObjectField
// @summary Stores x*0.5 at self+0x14 as float, or 0.0f when x < 0 (NaN takes the x*0.5 path).
// @field ObjectField +0x14 float field_0x14

void sub_007CB980(uint8_t* self, float x) {
    float v;
    if (x < 0.0f) {
        v = 0.0f;
    } else {
        v = (float)((double)x * mem_00993828);
    }
    *reinterpret_cast<float*>(self + 0x14) = v;
}
} // namespace lift_007CB980

// [0x007CA1A0]
namespace lift_007CA1A0 {
extern const double mem_009552D0;

// @name BuildScaledPartialMatrix
// @summary Zeroes six slots of a float matrix and writes 0.4*a*b*b into slots 0, 4 and 8.
void BuildScaledPartialMatrix(float a, float b, float* out) {
    double t = static_cast<double>(a) * mem_009552D0;
    t = t * static_cast<double>(b);
    t = static_cast<double>(b) * t;
    const float v = static_cast<float>(t);

    out[1] = 0.0f;
    out[2] = 0.0f;
    out[3] = 0.0f;
    out[5] = 0.0f;
    out[6] = 0.0f;
    out[7] = 0.0f;

    out[0] = v;
    out[4] = v;
    out[8] = v;
}
} // namespace lift_007CA1A0

// [0x007CCA20] sub_007CCA20 (59 bytes)
namespace lift_007CCA20 {
// @name DispatchObject::dispatchThroughTable
// @class DispatchObject
// @summary Looks up a handler in the object's context table by its type byte and calls it with (&{obj, arg2}, arg3, arg4).
// @field DispatchObject +0x00 uint32_t typeWord
// @field DispatchObject +0x0c void* context
// @field DispatchContext +0x20 void* handlerTable
// @field DispatchTableEntry +0x0c uint32_t handler (entries are 40 bytes; index = typeWord & 0xff)
uint32_t fn_007CCA20(uint32_t obj, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    const auto* o = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(obj));
    const uint32_t typeWord = *reinterpret_cast<const uint32_t*>(o + 0x00);
    const uint32_t ctxAddr = *reinterpret_cast<const uint32_t*>(o + 0x0c);
    const auto* ctx = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(ctxAddr));
    const uint32_t tableAddr = *reinterpret_cast<const uint32_t*>(ctx + 0x20);
    const auto* table = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(tableAddr));

    const uint32_t index = typeWord & 0xffu;
    const uint32_t handlerAddr = *reinterpret_cast<const uint32_t*>(table + index * 40u + 0x0c);

    // Argument block passed by pointer: { obj, arg2 }.
    uint32_t pair[2] = {obj, arg2};

    using Handler = uint32_t(__cdecl*)(uint32_t*, uint32_t, uint32_t);
    auto handler = reinterpret_cast<Handler>(static_cast<uintptr_t>(handlerAddr));
    return handler(pair, arg3, arg4);
}
} // namespace lift_007CCA20

// [0x007CAB40]
namespace lift_007CAB40 {
// @name sign_float
// @summary Returns the sign of a float: 1.0 for x > 0 (and NaN), -1.0 for x < 0, 0.0 for x == 0.
// @field none

extern const float mem_0093F7B8; // .rdata float -1.0

float sign_float(float x) {
    if (x == 0.0f) {
        return 0.0f;
    }
    if (x < 0.0f) {
        return mem_0093F7B8;
    }
    return 1.0f;
}
} // namespace lift_007CAB40

// [0x007CC180] sub_007CC180 (57 bytes)
namespace lift_007CC180 {
// Known callee 0x007CB940: setNonNegativeFloat_0x10 (Clamps a float to >= 0.0f and stores it at offset +0x10)
extern void ext_007CB940(void* self, float value);
// Known callee 0x007CB980: ObjectField::SetHalfOrZeroFloat14 (Stores x*0.5 at self+0x14 as float, or 0.0f when x < 0 (NaN takes the x*0.5 path).)
extern void ext_007CB980(void* self, float x);
// Unlifted callee 0x007CC8E0 (68 bytes); called as (self, a2, 5) with cdecl-style pushes.
extern void ext_007CC8E0(void* self, void* a2, int32_t mode);

// @name ObjectField::InitFloatsFromArgs
// @class ObjectField
// @summary Runs the mode-5 setup helper on (self, a2), then forwards a3 to setNonNegativeFloat_0x10 and a4 to SetHalfOrZeroFloat14; returns self.
void* fn_007CC180(void* self, void* a2, float a3, float a4) {
    ext_007CC8E0(self, a2, 5);
    ext_007CB940(self, a3);
    ext_007CB980(self, a4);
    return self;
}
} // namespace lift_007CC180

// [0x007CB5F0] sub_007CB5F0 (57 bytes)
namespace lift_007CB5F0 {
// @name sub_007CB5F0
// @summary Auto-lifted identical-shape clone of 0x007CC180 (ObjectField::InitFloatsFromArgs).
namespace lift_007CC180 {
// Known callee 0x007CB940: setNonNegativeFloat_0x10 (Clamps a float to >= 0.0f and stores it at offset +0x10)
extern void ext_007CAFD0(void* self, float value);
// Known callee 0x007CB980: ObjectField::SetHalfOrZeroFloat14 (Stores x*0.5 at self+0x14 as float, or 0.0f when x < 0 (NaN takes the x*0.5 path).)
extern void ext_007CB010(void* self, float x);
// Unlifted callee 0x007CC8E0 (68 bytes); called as (self, a2, 5) with cdecl-style pushes.
extern void ext_007CC8E0(void* self, void* a2, int32_t mode);

// @name ObjectField::InitFloatsFromArgs
// @class ObjectField
// @summary Runs the mode-5 setup helper on (self, a2), then forwards a3 to setNonNegativeFloat_0x10 and a4 to SetHalfOrZeroFloat14; returns self.
void* fn_007CB5F0(void* self, void* a2, float a3, float a4) {
    ext_007CC8E0(self, a2, 4);
    ext_007CAFD0(self, a3);
    ext_007CB010(self, a4);
    return self;
}
} // namespace lift_007CC180
} // namespace lift_007CB5F0

// [0x007CB890] sub_007CB890 (61 bytes)
namespace lift_007CB890 {
// Known callee 0x007CB5F0: sub_007CB5F0 (Auto-lifted identical-shape clone of 0x007CC180 (ObjectField::InitFloatsFromArgs).)
extern void* ext_007CB5F0(void* self, void* a2, float a3, float a4);

// Factory slot: cdecl(uint32 size, uint32 arg) -> void*, read from object+8.
using AllocFn = void* (__cdecl*)(uint32_t, uint32_t);

// @name AllocAndInitFloats
// @summary Allocates a 0x1C-byte object via the slot at [[self+0xB0]+8]; if that succeeds, initializes it with two floats via 0x007CB5F0, else returns null.
// @field Unknown +0xB0 void* field_0xB0
//
// Note: the x87 loads in the original happen after `sub esp,8`, so the float
// argument read from the 2nd parameter slot is forwarded as the callee's a3 and
// the 3rd parameter as a4. Values are passed through unchanged.
void* fn_007CB890(void* self, float a2, float a3) {
    void* obj = lift_field<void*>(self, 0xB0);
    AllocFn alloc = lift_field<AllocFn>(obj, 8);
    void* result = alloc(0x1C, 0x10);
    if (result == nullptr) {
        return nullptr;
    }
    return ext_007CB5F0(result, self, a2, a3);
}
} // namespace lift_007CB890

// [0x007CC1C0] sub_007CC1C0 (61 bytes)
namespace lift_007CC1C0 {
// Known callee 0x007CC180: ObjectField::InitFloatsFromArgs (Runs the mode-5 setup helper on (self, a2), then forwards a3 to setNonNegativeFloat_0x10 and a4 to SetHalfOrZeroFloat14; returns self.)
extern void* ext_007CC180(void* self, void* a2, float a3, float a4);

// @name InitFloatsIfSubobjectReady
// @summary Calls the function pointer at sub-object +0x08 with (0x18, 0x10); if it returns non-null, forwards (sub-object, self, x, y) to ext_007CC180, otherwise returns null.
// @field Unknown +0xB0 void* field_0xB0
void* fn_007CC1C0(void* self, float x, float y) {
    using SubFn = void* (*)(int32_t, int32_t);

    // eax = self->field_0xB0; ecx = eax->fn_at_0x08
    void* sub = lift_field<void*>(self, 0xB0);
    SubFn probe = lift_field<SubFn>(sub, 0x08);

    // push 0x10; push 0x18; call ecx  (cdecl: arg1 = 0x18, arg2 = 0x10)
    void* eax = reinterpret_cast<void*>(probe(0x18, 0x10));

    if (eax == nullptr) {
        return nullptr;
    }

    // Stack order: x -> a3 slot, y -> a4 slot; self and a2 are (eax, esi).
    return ext_007CC180(eax, self, x, y);
}
} // namespace lift_007CC1C0

// [0x007C9AA0] sub_007C9AA0 (63 bytes)
namespace lift_007C9AA0 {
// @name SetVec3ByFlag
// @class Unknown
// @summary Stores a 3-float vector at offset 0xEC when flag is 0, otherwise at offset 0x12C.
// @field Unknown +0xEC float field_0xEC
// @field Unknown +0xF0 float field_0xF0
// @field Unknown +0xF4 float field_0xF4
// @field Unknown +0x12C float field_0x12C
// @field Unknown +0x130 float field_0x130
// @field Unknown +0x134 float field_0x134
void fn_007C9AA0(void* self, float x, float y, float z, int32_t flag) {
    const ptrdiff_t base = (flag == 0) ? 0xEC : 0x12C;
    lift_field<float>(self, base + 0) = x;
    lift_field<float>(self, base + 4) = y;
    lift_field<float>(self, base + 8) = z;
}
} // namespace lift_007C9AA0

// [0x007CB010] sub_007CB010 (63 bytes)
namespace lift_007CB010 {
extern const double mem_00993828; // .rdata double 0.5

// @name ScaleHalfAndSetHypotenuse
// @class Unknown
// @summary Stores half of the float argument at +0x14 and sqrt(half^2 + f+0x10^2) at +0x18.
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
void fn_007CB010(void* self, float x) {
    const float half = static_cast<float>(static_cast<double>(x) * mem_00993828);
    lift_field<float>(self, 0x14) = half;
    const float p10 = lift_field<float>(self, 0x10);
    const float sum = half * half + p10 * p10;
    lift_field<float>(self, 0x18) = std::sqrt(sum);
}
} // namespace lift_007CB010

// [0x007C93A0] sub_007C93A0 (64 bytes)
namespace lift_007C93A0 {
extern void ext_007CA120(DWORD value, void* target);

// @name Unknown::DispatchSelectedSubobject
// @class Unknown
// @summary Calls ext_007CA120 with a DWORD field and the address of a subobject; flag selects the 0x94/0xEC pair (zero) or the 0x98/0x12C pair (non-zero).
// @field Unknown +0x94 DWORD field_0x94
// @field Unknown +0x98 DWORD field_0x98
// @field Unknown +0xEC BYTE field_0xEC
// @field Unknown +0x12C BYTE field_0x12C
void fn_007C93A0(void* self, DWORD flag, [[maybe_unused]] DWORD unused_arg) {
    auto* base = static_cast<uint8_t*>(self);
    if (flag == 0) {
        DWORD v = *reinterpret_cast<DWORD*>(base + 0x94);
        ext_007CA120(v, base + 0xEC);
    } else {
        DWORD v = *reinterpret_cast<DWORD*>(base + 0x98);
        ext_007CA120(v, base + 0x12C);
    }
}
} // namespace lift_007C93A0

// [0x007C9E80]
namespace lift_007C9E80 {
// @name sub_007C9E80
// @summary Stores a float parameter, sets a nonzero flag and absolute value for a second float, and clears a field.
// @field struct +0x1c uint32_t field_0x1c
// @field struct +0x50 uint32_t field_0x50
// @field struct +0x54 float field_0x54
// @field struct +0x58 float field_0x58
void __cdecl sub_007C9E80(void* self, float val1, float val2) {
    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<float*>(base + 0x54) = val1;
    *reinterpret_cast<uint32_t*>(base + 0x50) = (val2 != 0.0f) ? 1u : 0u;
    *reinterpret_cast<uint32_t*>(base + 0x1c) = 0u;
    *reinterpret_cast<float*>(base + 0x58) = (val2 < 0.0f) ? -val2 : val2;
}
} // namespace lift_007C9E80

// [0x007C8490]
namespace lift_007C8490 {
// Known callee 0x007C7330: sub_007C7330 (857 bytes). Caller cleans up (cdecl).
extern void ext_007C7330(void* obj, uint32_t a1, uint32_t a2, float a3, float a4);

// @name dispatchAndStoreOwner
// @summary Calls vtable slot 0 of self with 0x5F4; if it returns non-null, stores self at obj+0x5F0 and forwards to sub_007C7330.
// @field Unknown +0x5F0 uint32_t field_0x5F0
void fn_007C8490(uint32_t a1, uint32_t a2, float a3, float a4, void* self) {
    // vtable slot 0 of self, invoked with a single argument 0x5F4 (no this pushed).
    void* vtable = lift_field<void*>(self, 0);
    auto slot0 = reinterpret_cast<void* (*)(uint32_t)>(lift_field<void*>(vtable, 0));
    void* obj = slot0(0x5F4);
    if (obj == nullptr) {
        return;
    }
    // Store self as a 32-bit pointer at obj+0x5F0.
    lift_field<uint32_t>(obj, 0x5F0) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    ext_007C7330(obj, a1, a2, a3, a4);
}
} // namespace lift_007C8490

// [0x007C9D30] sub_007C9D30 (69 bytes)
namespace lift_007C9D30 {
// @name Unknown::storeClampedUnitFloat
// @class Unknown
// @summary Clamps a float to [0,1] (NaN yields 1.0) and stores it at self+0x0C.
// @field Unknown +0x0C float field_0x0C
void fn_007C9D30(uint8_t* self, float value) {
    // x87 path: value < 0 -> 0.0; value > 1 (or NaN) -> 1.0; otherwise value.
    float result;
    if (value < 0.0f) {
        result = 0.0f;
    } else if (value <= 1.0f) {
        result = value;
    } else {
        result = 1.0f;
    }
    std::memcpy(self + 0x0C, &result, sizeof(float));
}
} // namespace lift_007C9D30

// [0x007CCBB0] sub_007CCBB0 (69 bytes)
namespace lift_007CCBB0 {
extern int mem_0094CE80;

// @name Unknown::setClampedValueAndFlag
// @class Unknown
// @summary Stores max(x, 0) (NaN passes through) at +0x18 and sets bit 0x4 at +0x0C when |value| > 1e-6 or NaN, else clears it.
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x18 float field_0x18
void fn_007CCBB0(void* self, float x) {
    const float epsilon = std::bit_cast<float>(static_cast<uint32_t>(mem_0094CE80));

    // Negative inputs clamp to +0.0f; -0.0f, positives and NaN pass through unchanged.
    float v = (x < 0.0f) ? 0.0f : x;
    lift_field<float>(self, 0x18) = v;

    float a = std::fabs(v);
    if (a > epsilon || std::isnan(a)) {
        lift_field<uint32_t>(self, 0x0C) |= 0x4u;
    } else {
        lift_field<uint32_t>(self, 0x0C) &= ~0x4u;
    }
}
} // namespace lift_007CCBB0

// [0x007CCC30]
namespace lift_007CCC30 {
// @name clampNonNegativeStoreAndSetFlag10
// @summary Clamps x to >= 0 (NaN passes through), stores it at +0x28, then sets flag 0x10 in +0x0C when |x| > ~1e-6 (or NaN), else clears it.
// @field Unknown +0x0C u32 flags
// @field Unknown +0x28 float field_0x28
void fn_007CCC30(void* self, float x) {
    static constexpr float kEpsilon = std::bit_cast<float>(std::uint32_t{0x358637BDu}); // .rdata mem_0094CE80

    auto* base = static_cast<unsigned char*>(self);

    // if (x < 0) x = 0; (NaN is kept, since !(x < 0) is true)
    if (x < 0.0f) {
        x = 0.0f;
    }

    // *(float*)(self + 0x28) = x;
    std::memcpy(base + 0x28, &x, sizeof(float));

    // Compare |x| against epsilon; unordered (NaN) counts as "greater".
    float ax = std::fabs(x);
    std::uint32_t flags;
    std::memcpy(&flags, base + 0x0C, sizeof(flags));
    if (!(ax <= kEpsilon)) {
        flags |= 0x10u;
    } else {
        flags &= ~0x10u;
    }
    std::memcpy(base + 0x0C, &flags, sizeof(flags));
}
} // namespace lift_007CCC30

// [0x007CCC80] sub_007CCC80 (69 bytes)
namespace lift_007CCC80 {
extern int mem_0094CE80;

// @name Unknown::storeClampedValueAndUpdateFlag
// @class Unknown
// @summary Clamps value to >= 0 (NaN -> 0), stores it at +0x34, then sets flag 0x20 at +0x0C when |value| > epsilon, else clears it.
// @field Unknown +0x0C DWORD flags
// @field Unknown +0x34 float field_0x34
void fn_007CCC80(void* self, float value) {
    uint8_t* obj = static_cast<uint8_t*>(self);

    // x87 original: if (value < 0 || NaN) value = 0.0f; (the stack argument slot
    // is also overwritten in the original, but the caller never reads it back).
    float v = (value < 0.0f || std::isnan(value)) ? 0.0f : value;
    std::memcpy(obj + 0x34, &v, sizeof v);

    // Epsilon constant at mem_0094CE80 (IEEE-754 bits 0x358637BD, ~1e-6).
    const float eps = std::bit_cast<float>(static_cast<uint32_t>(mem_0094CE80));
    const float mag = std::fabs(v);

    uint32_t flags;
    std::memcpy(&flags, obj + 0x0C, sizeof flags);
    if (mag > eps) {
        flags |= 0x20u;
    } else {
        flags &= ~0x20u;
    }
    std::memcpy(obj + 0x0C, &flags, sizeof flags);
}
} // namespace lift_007CCC80

// [0x007CCB60] sub_007CCB60 (69 bytes)
namespace lift_007CCB60 {
extern int mem_0094CE80;

// @name Unknown::storeNonNegativeAndSetMagnitudeFlag
// @class Unknown
// @summary Stores max(value, 0) (NaN passes through) at self+0x10, then sets bit 1 of self+0x0C when |stored| > epsilon and clears it otherwise.
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 float field_0x10
void fn_007CCB60(uint8_t* self, float value) {
    // x87 path: value < 0 -> 0.0; otherwise value (NaN passes through).
    const float result = (value < 0.0f) ? 0.0f : value;
    lift_field<float>(self, 0x10) = result;

    // epsilon = float with bit pattern mem_0094CE80 (0x358637BD, ~9.5e-7).
    const float epsilon = std::bit_cast<float>(static_cast<uint32_t>(mem_0094CE80));

    // Unordered (NaN) compare falls through to "set" in the original, matching `!(<=)`.
    uint32_t& flags = lift_field<uint32_t>(self, 0x0C);
    if (std::fabs(result) <= epsilon) {
        flags &= ~0x2u;
    } else {
        flags |= 0x2u;
    }
}
} // namespace lift_007CCB60

// [0x007CCAB0]
namespace lift_007CCAB0 {
// @name Unknown::ResetDefaults
// @class Unknown
// @summary Zeroes a 0x44-byte state block and sets float defaults (0.001 at +0x14, FLT_MAX at +0x20 and +0x2C).
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x1C float field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C float field_0x2C
// @field Unknown +0x30 float field_0x30
// @field Unknown +0x34 float field_0x34
// @field Unknown +0x38 float field_0x38
// @field Unknown +0x3C float field_0x3C
// @field Unknown +0x40 float field_0x40

extern const float mem_00968ED8;    // .rdata float 0.001
extern const uint32_t mem_0099D148; // .rdata u32 0x7F7FFFFF

void __cdecl sub_007CCAB0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0u;
    lift_field<uint32_t>(self, 0x04) = 0u;
    lift_field<uint32_t>(self, 0x08) = 0u;
    lift_field<uint32_t>(self, 0x0C) = 0u;
    lift_field<float>(self, 0x10) = 0.0f;
    lift_field<float>(self, 0x14) = mem_00968ED8;
    lift_field<float>(self, 0x18) = 0.0f;
    lift_field<float>(self, 0x1C) = 0.0f;
    lift_field<float>(self, 0x40) = 0.0f;
    lift_field<float>(self, 0x20) = std::bit_cast<float>(mem_0099D148);
    lift_field<float>(self, 0x2C) = std::bit_cast<float>(mem_0099D148);
    lift_field<float>(self, 0x24) = 0.0f;
    lift_field<float>(self, 0x28) = 0.0f;
    lift_field<float>(self, 0x30) = 0.0f;
    lift_field<float>(self, 0x34) = 0.0f;
    lift_field<float>(self, 0x38) = 0.0f;
    lift_field<float>(self, 0x3C) = 0.0f;
}
} // namespace lift_007CCAB0

// [0x007C9D80]
namespace lift_007C9D80 {
extern const uint32_t mem_0099D148;
extern void ext_007C9C90(void* out);

// @name Unknown::InitStruct
// @class Unknown
// @summary Initializes struct fields to zero, sets +0x2C to FLT_MAX, and initializes float4 blocks at +0x30 and +0x40.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 float field_0x10
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x1C uint32_t field_0x1C
// @field Unknown +0x20 float field_0x20
// @field Unknown +0x24 float field_0x24
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C uint32_t field_0x2C
// @field Unknown +0x30 float[4] field_0x30
// @field Unknown +0x40 float[4] field_0x40
// @field Unknown +0x50 uint32_t field_0x50
// @field Unknown +0x54 float field_0x54
// @field Unknown +0x58 float field_0x58
void sub_007C9D80(void* obj) {
    auto* base = static_cast<uint8_t*>(obj);

    *reinterpret_cast<float*>(base + 0x10) = 0.0f;
    *reinterpret_cast<float*>(base + 0x54) = 0.0f;
    *reinterpret_cast<uint32_t*>(base + 0x50) = 0;
    *reinterpret_cast<float*>(base + 0x58) = 0.0f;
    *reinterpret_cast<uint32_t*>(base + 0x1C) = 0;
    *reinterpret_cast<float*>(base + 0x24) = 0.0f;
    *reinterpret_cast<uint32_t*>(base + 0x00) = 0;
    *reinterpret_cast<float*>(base + 0x14) = 0.0f;
    *reinterpret_cast<uint32_t*>(base + 0x04) = 0;
    *reinterpret_cast<float*>(base + 0x20) = 0.0f;
    *reinterpret_cast<uint32_t*>(base + 0x08) = 0;
    *reinterpret_cast<float*>(base + 0x28) = 0.0f;
    *reinterpret_cast<uint32_t*>(base + 0x0C) = 0;

    *reinterpret_cast<uint32_t*>(base + 0x2C) = mem_0099D148;

    ext_007C9C90(base + 0x30);
    ext_007C9C90(base + 0x40);
}
} // namespace lift_007C9D80

// [0x007C15A0] sub_007C15A0 (80 bytes)
namespace lift_007C15A0 {
// @name ReleaseOwnedCallbackHandle
// @class Unknown
// @summary If the owner at +0x1C and callback at +0x24 are set, invoke callback(ctx, owner->+0x2C) when non-null, then callback(ctx, owner) and clear +0x1C; returns 0 on success, -2 if a required pointer is null.
// @field Unknown +0x1C void* field_0x1C
// @field Unknown +0x24 void (*)(void*, void*) field_0x24
// @field Unknown +0x28 void* field_0x28
// @field Unknown +0x2C void* field_0x2C (read through the pointer at +0x1C)
namespace {
using CallbackFn = void (*)(void*, void*);
}

int32_t fn_007C15A0(void* self) {
    if (self == nullptr) {
        return -2;
    }
    void* owner = lift_field<void*>(self, 0x1C);
    if (owner == nullptr) {
        return -2;
    }
    CallbackFn callback = lift_field<CallbackFn>(self, 0x24);
    if (callback == nullptr) {
        return -2;
    }

    void* inner = lift_field<void*>(owner, 0x2C);
    if (inner != nullptr) {
        callback(lift_field<void*>(self, 0x28), inner);
    }

    // Re-read fields: the first callback may have changed them.
    owner = lift_field<void*>(self, 0x1C);
    callback = lift_field<CallbackFn>(self, 0x24);
    callback(lift_field<void*>(self, 0x28), owner);

    lift_field<void*>(self, 0x1C) = nullptr;
    return 0;
}
} // namespace lift_007C15A0

// [0x007CA1E0]
namespace lift_007CA1E0 {
// @name ComputeBoxInertiaDiagonal
// @summary Writes a 3x3 (4-float row stride) box inertia tensor: diagonal m*(sum of other two squared dims)/12, off-diagonals zero.

extern const double mem_009548E0; // .rdata double 12.0

// Args (cdecl): mass, dimX, dimY, dimZ, out (float[9] with row stride 0x10).
void __cdecl sub_007CA1E0(float mass, float dimX, float dimY, float dimZ, void* out) {
    const double m12 = static_cast<double>(mass) / mem_009548E0;
    const double x2 = static_cast<double>(dimX) * static_cast<double>(dimX);
    const double y2 = static_cast<double>(dimY) * static_cast<double>(dimY);
    const double z2 = static_cast<double>(dimZ) * static_cast<double>(dimZ);

    lift_field<float>(out, 0x00) = static_cast<float>((y2 + z2) * m12);
    lift_field<float>(out, 0x04) = 0.0f;
    lift_field<float>(out, 0x08) = 0.0f;
    lift_field<float>(out, 0x0C) = 0.0f;
    lift_field<float>(out, 0x10) = static_cast<float>((x2 + z2) * m12);
    lift_field<float>(out, 0x14) = 0.0f;
    lift_field<float>(out, 0x18) = 0.0f;
    lift_field<float>(out, 0x1C) = 0.0f;
    lift_field<float>(out, 0x20) = static_cast<float>((x2 + y2) * m12);
}
} // namespace lift_007CA1E0

// [0x007CCEC0]
namespace lift_007CCEC0 {
// @name triangularElementAddr_007CCEC0
// @summary Returns base + 0x58 * tri(lo,hi) for index pair (a,b) in a table of count *self; 0 if a or b exceeds count.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 uint32_t field_0x08

uint32_t sub_007CCEC0(const uint32_t* self, uint32_t a, uint32_t b) {
    const uint32_t count = self[0];
    if (a > count || b > count) {
        return 0;
    }

    // m = all-ones when b < a (signed difference sign), else 0.
    const int32_t m = static_cast<int32_t>(b - a) >> 31;
    const uint32_t mask = static_cast<uint32_t>(m);

    const uint32_t lo = (~mask & a) | (mask & b);
    const uint32_t hi = (mask & a) | (~mask & b);

    // Triangular-index: lo * count + hi - lo * (lo + 1) / 2
    const uint32_t tri = (lo * (lo + 1)) >> 1;
    const uint32_t index = lo * count + hi - tri;

    const uint32_t base = self[2];
    return base + index * 0x58u;
}
} // namespace lift_007CCEC0

// [0x007CA7C0]
namespace lift_007CA7C0 {
// @name Matrix4x4::transformPoint
// @class Matrix4x4
// @summary Transforms a 3D point by a 4x4 matrix (3x3 linear part plus translation)
// @field Matrix4x4 +0x00 float field_0x00
// @field Matrix4x4 +0x04 float field_0x04
// @field Matrix4x4 +0x08 float field_0x08
// @field Matrix4x4 +0x10 float field_0x10
// @field Matrix4x4 +0x14 float field_0x14
// @field Matrix4x4 +0x18 float field_0x18
// @field Matrix4x4 +0x20 float field_0x20
// @field Matrix4x4 +0x24 float field_0x24
// @field Matrix4x4 +0x28 float field_0x28
// @field Matrix4x4 +0x30 float field_0x30
// @field Matrix4x4 +0x34 float field_0x34
// @field Matrix4x4 +0x38 float field_0x38
void __thiscall sub_007CA7C0(void* self, const float* in, float* out) {
    const uint8_t* m = reinterpret_cast<const uint8_t*>(self);
    auto f = [m](uint32_t off) -> float {
        return *reinterpret_cast<const float*>(m + off);
    };

    out[0] = f(0x10) * in[1] + f(0x00) * in[0] + f(0x20) * in[2] + f(0x30);
    out[1] = f(0x04) * in[0] + f(0x14) * in[1] + f(0x24) * in[2] + f(0x34);
    out[2] = f(0x08) * in[0] + f(0x18) * in[1] + f(0x28) * in[2] + f(0x38);
}
} // namespace lift_007CA7C0

// [0x007CCF20] sub_007CCF20 (93 bytes)
namespace lift_007CCF20 {
// @name PairTable::lookupSymmetric
// @class PairTable
// @summary Looks up a 32-bit value for an unordered index pair (a, b) in a symmetric triangular table of 0x58-byte records; returns 0 if either index exceeds the count.
// @field PairTable +0x00 int32_t count
// @field PairTable +0x08 uint8_t* records
uint32_t fn_007CCF20(void* self, int32_t a, int32_t b) {
    const int32_t n = lift_field<int32_t>(self, 0x00);

    // Both indices must satisfy 0 <= idx <= count (unsigned compare, as in the original).
    if (static_cast<uint32_t>(a) > static_cast<uint32_t>(n) ||
        static_cast<uint32_t>(b) > static_cast<uint32_t>(n)) {
        return 0;
    }

    // Order the pair: lo = min(a, b), hi = max(a, b) (signed).
    const int32_t lo = (a < b) ? a : b;
    const int32_t hi = (a < b) ? b : a;

    // Triangular index: n*hi + lo - hi*(hi+1)/2, computed with wrap-around like the original.
    const uint32_t tri = static_cast<uint32_t>(hi) * static_cast<uint32_t>(hi + 1) / 2u;
    const int32_t idx = static_cast<int32_t>(
        static_cast<uint32_t>(n) * static_cast<uint32_t>(hi) +
        static_cast<uint32_t>(lo) - tri);

    uint8_t* records = lift_field<uint8_t*>(self, 0x08);
    return lift_field<uint32_t>(records,
                                static_cast<ptrdiff_t>(idx) * 0x58 + 0x4c);
}
} // namespace lift_007CCF20

// [0x007CCF80] sub_007CCF80 (93 bytes)
namespace lift_007CCF80 {
// @name TriangularPairLookup
// @summary Returns the 32-bit value at +0x50 of record idx (88-byte records) for an unordered pair (a, b) with 0 <= a,b <= count; returns 0 if either index exceeds count.
// @field TriangularPairLookup +0x00 int32_t count
// @field TriangularPairLookup +0x08 uint32_t records

struct TriangularPairLookup {
    int32_t  count;    // +0x00
    uint32_t pad_04;   // +0x04 (not accessed)
    uint32_t records;  // +0x08 address of 88-byte record array
};

static constexpr uint32_t kRecordSize = 0x58;
static constexpr uint32_t kValueOffset = 0x50;

uint32_t fn_007CCF80(const TriangularPairLookup* table, uint32_t a, uint32_t b) {
    const uint32_t n = static_cast<uint32_t>(table->count);
    if (a > n || b > n) {
        return 0;
    }

    const uint32_t hi = (a > b) ? a : b;
    const uint32_t lo = (a > b) ? b : a;

    // Index into the triangular layout: n * lo + hi - lo * (lo + 1) / 2.
    const uint32_t idx = n * lo + hi - (lo * (lo + 1)) / 2;

    const uintptr_t base = static_cast<uintptr_t>(table->records);
    const uint8_t* rec = reinterpret_cast<const uint8_t*>(base) + static_cast<size_t>(idx) * kRecordSize;
    uint32_t value = 0;
    std::memcpy(&value, rec + kValueOffset, sizeof(value));
    return value;
}
} // namespace lift_007CCF80

// [0x007CCFE0] sub_007CCFE0 (93 bytes)
namespace lift_007CCFE0 {
// @name TriangularTableLookup
// @summary Returns a dword from a triangular-indexed table of 0x58-byte records, or 0 if either index exceeds the count at +0x00.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 uint8_t* field_0x08
// @field Unknown +0x54 uint32_t field_0x54 (record field, per table element)
uint32_t fn_007CCFE0(void* self, uint32_t x, uint32_t y) {
    const uint32_t n = lift_field<uint32_t>(self, 0x00);
    if (x > n) {
        return 0;
    }
    if (y > n) {
        return 0;
    }

    // Branchless min/max of (x, y) using the sign of (y - x).
    const uint32_t diff = y - x;
    const uint32_t m = static_cast<uint32_t>(static_cast<int32_t>(diff) >> 31);
    const uint32_t hi = (m & x) | (~m & y);
    const uint32_t lo = (~m & x) | (m & y);

    // Triangular index: lo * n + hi - lo * (lo + 1) / 2.
    const uint32_t tri = static_cast<uint32_t>(static_cast<int32_t>((lo + 1) * lo) >> 1);
    const uint32_t idx = hi - tri + n * lo;

    uint8_t* records = lift_field<uint8_t*>(self, 0x08);
    return lift_field<uint32_t>(records, idx * 0x58u + 0x54u);
}
} // namespace lift_007CCFE0

// [0x007CD900] sub_007CD900 (94 bytes)
namespace lift_007CD900 {
// @name BuildSignedPermutedMatrix3x4_007CD900
// @summary Reads four floats from src (ecx) and writes a 3x4 row-major float matrix to dst (eax) with a fixed sign/permutation pattern (negations of src[1], src[2], src[3] and copies of src[0], src[1], src[2], src[3]).
void fn_007CD900(const void* src, void* dst) {
    const float s0 = lift_field<float>(src, 0x0);
    const float s1 = lift_field<float>(src, 0x4);
    const float s2 = lift_field<float>(src, 0x8);
    const float s3 = lift_field<float>(src, 0xC);

    lift_field<float>(dst, 0x00) = -s1;
    lift_field<float>(dst, 0x04) = s0;
    lift_field<float>(dst, 0x08) = -s3;
    lift_field<float>(dst, 0x0C) = s2;

    lift_field<float>(dst, 0x10) = -s2;
    lift_field<float>(dst, 0x14) = s3;
    lift_field<float>(dst, 0x18) = s0;
    lift_field<float>(dst, 0x1C) = -s1;

    lift_field<float>(dst, 0x20) = -s3;
    lift_field<float>(dst, 0x24) = -s2;
    lift_field<float>(dst, 0x28) = s1;
    lift_field<float>(dst, 0x2C) = s0;
}
} // namespace lift_007CD900

// [0x007C8690] sub_007C8690 (102 bytes)
namespace lift_007C8690 {
// Known callee 0x007CC9C0: getShiftedField0 (Dereferences a 32-bit pointer and shifts the value right by 8 bits.)
extern uint32_t ext_007CC9C0(const uint32_t* ptr);
// Known callee 0x007CC970: DispatchReleaseByType (Reports if the node's high flag bits are set, then invokes the owner's type-indexed handler for this node.)
extern void ext_007CC970(void* self);
// Callee 0x007D58E0: unnamed error reporter (level, owner, format, message); cdecl, 4 args.
extern void ext_007D58E0(int level, uint32_t owner, const char* fmt, const char* msg);
extern const char mem_0099D228[];
extern const char mem_009548E8[];

// @name DestroyGeometryList
// @summary Walks the linked node list at self+0x0C, releasing each node whose flag bits are clear; reports an error if the list does not drain within about 101 passes.
// @field Unknown +0x0C void* field_0x0C
// @field Unknown +0xB0 uint32_t field_0xB0
// @field ListNode +0x08 void* field_0x08
void fn_007C8690(void* self) {
    void* node = lift_field<void*>(self, 0x0C);
    if (node == nullptr) {
        return;
    }

    int32_t counter = 0;
    void* head = nullptr;
    do {
        void* next = lift_field<void*>(node, 0x08);
        if (ext_007CC9C0(static_cast<const uint32_t*>(node)) == 0) {
            ext_007CC970(node);
        }

        head = lift_field<void*>(self, 0x0C);
        if (next == head) {
            if (counter > 100) {
                ext_007D58E0(1, lift_field<uint32_t>(self, 0xB0), mem_009548E8,
                             mem_0099D228);
                return;
            }
            ++counter;
        }
        node = next;
    } while (head != nullptr);
}
} // namespace lift_007C8690

// [0x007CB8D0]
namespace lift_007CB8D0 {
// @name vec3_ComponentwiseMax
// @summary Stores componentwise max of two float[3] vectors (a at edx, b at ecx) into out (esi); NaN in b yields b.
void vec3_ComponentwiseMax(const float* a, const float* b, float* out)
{
    for (int i = 0; i < 3; ++i) {
        float av = a[i];
        float bv = b[i];
        out[i] = (bv < av) ? av : bv;
    }
}
} // namespace lift_007CB8D0

// [0x007C9490]
namespace lift_007C9490 {
extern void ext_007CA120(int32_t mode, float* vec, int32_t value, uint8_t* sub);

// @name sub_007C9490
// @summary Copies a 3-float vector and forwards it with a selected per-object value and subobject to ext_007CA120.
// @class Unknown (object pointer; class not identified)
// @field Unknown +0x94 int32_t field_0x94 (read when flag == 0)
// @field Unknown +0xEC uint8_t field_0xEC (address taken when flag == 0)
// @field Unknown +0x98 int32_t field_0x98 (read when flag != 0)
// @field Unknown +0x12C uint8_t field_0x12C (address taken when flag != 0)
void fn_007C9490(uint8_t* self, int32_t flag, float x, float y, float z) {
    float vec[3] = {x, y, z};
    if (flag == 0) {
        int32_t value = *reinterpret_cast<int32_t*>(self + 0x94);
        ext_007CA120(0, vec, value, self + 0xEC);
    } else {
        int32_t value = *reinterpret_cast<int32_t*>(self + 0x98);
        ext_007CA120(0, vec, value, self + 0x12C);
    }
}
} // namespace lift_007C9490

// [0x007CA280]
namespace lift_007CA280 {
// @name Vec3ComponentMinNanToA
// @summary Componentwise select of three floats: out[i] = (a[i] > b[i]) ? b[i] : a[i]; ties and unordered (NaN) pick a.
// Register convention: a = ecx, b = edx, out = esi. Returns void.

static inline void Vec3SelectComponentwise(const float* a, const float* b, float* out) {
    out[0] = (a[0] > b[0]) ? b[0] : a[0];
    out[1] = (a[1] > b[1]) ? b[1] : a[1];
    out[2] = (a[2] > b[2]) ? b[2] : a[2];
}

void sub_007CA280(const float* a /* ecx */, const float* b /* edx */, float* out /* esi */) {
    Vec3SelectComponentwise(a, b, out);
}
} // namespace lift_007CA280

// [0x007C16F0]
namespace lift_007C16F0 {
// @name scanSyncMarker0000FFFF
// @summary Scans a byte buffer for the 4-byte sequence 00 00 FF FF, updating a state machine counter
void __cdecl sub_007C16F0(uint32_t* statePtr, const uint8_t* data, uint32_t length) {
    uint32_t state = *statePtr;
    for (uint32_t i = 0; i < length; ++i) {
        if (state >= 4) {
            break;
        }
        uint8_t b = data[i];
        uint8_t expected = (state < 2) ? 0x00 : 0xFF;
        if (b == expected) {
            ++state;
        } else if (b != 0) {
            state = 0;
        } else {
            state = 4 - state;
        }
    }
    *statePtr = state;
}
} // namespace lift_007C16F0

// [0x007C8C90]
namespace lift_007C8C90 {
// @name SlotTable::nextValidSlot
// @class SlotTable
// @summary Scans from *cursor for the next entry whose key equals its index; outputs that entry's value, advances cursor past it, returns 1; returns 0 and writes 0 when exhausted.
// @field SlotTable +0x0C int32_t count
// @field SlotTable +0x10 uint8_t* entries
// @field SlotEntry +0x08 int32_t key
// @field SlotEntry +0x0C int32_t value

int32_t sub_007C8C90(void* self, int32_t* cursor, int32_t* out) {
    const int32_t count = lift_field<int32_t>(self, 0x0C);
    uint8_t* entries = lift_field<uint8_t*>(self, 0x10);

    if (*cursor < count) {
        int32_t i = *cursor;
        do {
            if (i >= 0 && i < count) {
                if (lift_field<int32_t>(entries, static_cast<ptrdiff_t>(i) * 0x9C + 0x08) == i) {
                    break;
                }
            }
            ++i;
            *cursor = i;
        } while (i < count);
    }

    if (*cursor != count) {
        *out = lift_field<int32_t>(entries, static_cast<ptrdiff_t>(*cursor) * 0x9C + 0x0C);
        *cursor += 1;
        return 1;
    }

    *out = 0;
    return 0;
}
} // namespace lift_007C8C90

// [0x007CA830]
namespace lift_007CA830 {
// @name sub_007CA830
// @class (none)
// @summary Stores half of a, x, y into out[+0x10..+0x18] and writes half the Euclidean length of (a,x,y) to out[+0x1c].
// @field (none) +0x10 float field_0x10
// @field (none) +0x14 float field_0x14
// @field (none) +0x18 float field_0x18
// @field (none) +0x1c float field_0x1c
extern void fn_007CA830(unsigned char* out, float a, float x, float y)
{
    const float h  = a * 0.5f;
    const float hx = x * 0.5f;
    const float hy = y * 0.5f;

    *reinterpret_cast<float*>(out + 0x10) = h;
    *reinterpret_cast<float*>(out + 0x14) = hx;
    *reinterpret_cast<float*>(out + 0x18) = hy;

    const float sumSq = (h * h + hx * hx) + hy * hy;
    *reinterpret_cast<float*>(out + 0x1c) = std::sqrt(sumSq);
}
} // namespace lift_007CA830

// [0x007CFEC0] sub_007CFEC0 (108 bytes)
namespace lift_007CFEC0 {
// @name transformVec3Affine
// @summary Multiplies a 3-vector by the 3x3 linear part of a column-major 4x4 float matrix (m[i + 4*j]) into linear, then adds the translation column (m[12..14]) into point.
void fn_007CFEC0(const float* m, const float* v, float* linear, float* point) {
    for (int i = 0; i < 3; ++i) {
        // Accumulate in double to match the x87 extended-precision intermediates of the original.
        double acc = 0.0;
        for (int j = 0; j < 3; ++j) {
            acc += static_cast<double>(m[i + 4 * j]) * static_cast<double>(v[j]);
        }
        linear[i] = static_cast<float>(acc);
        point[i] = static_cast<float>(static_cast<double>(linear[i]) + static_cast<double>(m[12 + i]));
    }
}
} // namespace lift_007CFEC0

// [0x007CAF30] sub_007CAF30 (54 bytes)
namespace lift_007CAF30 {
// Known callee 0x007CA830: sub_007CA830 (Stores half of a, x, y into out[+0x10..+0x18] and writes half the Euclidean length of (a,x,y) to out[+0x1c].)
extern void ext_007CA830(unsigned char* out, float a, float x, float y);
// Unlifted callee 0x007CC8E0 (68 bytes); signature inferred from call site: (out, arg2, 2).
extern void ext_007CC8E0(unsigned char* out, uint32_t arg2, int32_t count);

// @name storeHalfLengthVectorAfterSetup
// @summary Runs the 0x007CC8E0 setup with the second argument and count 2, then stores the (a,x,y) vector and half its length into out; returns out.
unsigned char* fn_007CAF30(unsigned char* out, uint32_t arg2, float a, float x, float y) {
    ext_007CC8E0(out, arg2, 2);
    ext_007CA830(out, a, x, y);
    return out;
}
} // namespace lift_007CAF30

// [0x007CAF70] sub_007CAF70 (69 bytes)
namespace lift_007CAF70 {
// Known callee 0x007CAF30: storeHalfLengthVectorAfterSetup (Runs the 0x007CC8E0 setup with the second argument and count 2, then stores the (a,x,y) vector and half its length into out; returns out.)
extern unsigned char* ext_007CAF30(unsigned char* out, uint32_t arg2, float a, float x, float y);

// @name allocateAndStoreHalfLengthVector
// @class Unknown
// @summary Requests a 0x20-byte block (count 0x10) via the function pointer at obj+0x08, where obj = self+0xB0; if it returns non-null, stores (a,x,y) and its half-length into it and returns nothing.
// @field Unknown +0xB0 void* field_0xB0
// @field Unknown +0x08 void* field_0x08
void fn_007CAF70(void* self, float a, float x, float y) {
    using AllocFn = unsigned char* (__cdecl*)(uint32_t size, uint32_t count);

    void* obj = lift_field<void*>(self, 0xB0);
    AllocFn alloc = lift_field<AllocFn>(obj, 0x08);

    unsigned char* out = alloc(0x20, 0x10);
    if (out == nullptr) {
        return;
    }

    ext_007CAF30(out, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self)), a, x, y);
    return;
}
} // namespace lift_007CAF70

// [0x007C8C50] sub_007C8C50 (28 bytes)
namespace lift_007C8C50 {
// Callee 0x007DD160 (Unknown::pairFlagIsClear_007DD160): tests the packed pair flag.
extern bool ext_007DD160(void* self, int32_t a, int32_t b);

// @name Unknown::pairFlagIsClearForObjects_007C8C50
// @class Unknown
// @summary Returns whether the pair flag between the +0x20 ids of two objects is clear, using the first object's +0x0c table.
// @field Unknown +0x0c void* field_0x0c (table pointer passed as self to the pair-flag lookup)
// @field Unknown +0x20 int32_t field_0x20 (pair index id)
bool fn_007C8C50(void* first, void* second) {
    void* table = lift_field<void*>(first, 0x0c);
    const int32_t idA = lift_field<int32_t>(first, 0x20);
    const int32_t idB = lift_field<int32_t>(second, 0x20);
    return ext_007DD160(table, idA, idB);
}
} // namespace lift_007C8C50

// [0x007C5FA0] sub_007C5FA0 (35 bytes)
namespace lift_007C5FA0 {
// @name sub_007C5FA0
// @summary Auto-lifted identical-shape clone of 0x007D8450 (CopyVec3FromOffset40).
namespace lift_007D8450 {
// @name CopyVec3FromOffset40
// @class <none>
// @summary Copies three consecutive floats from self+0x40..+0x48 into out[0..2].
// @field self +0x40 float field_0x40
// @field self +0x44 float field_0x44
// @field self +0x48 float field_0x48
void fn_007C5FA0(const void* self, void* out) {
    const uint8_t* src = static_cast<const uint8_t*>(self);
    uint8_t* dst = static_cast<uint8_t*>(out);

    float v0, v1, v2;
    std::memcpy(&v0, src + 0x140, sizeof(float));
    std::memcpy(&v1, src + 0x144, sizeof(float));
    std::memcpy(&v2, src + 0x148, sizeof(float));

    std::memcpy(dst + 0x0, &v0, sizeof(float));
    std::memcpy(dst + 0x4, &v1, sizeof(float));
    std::memcpy(dst + 0x8, &v2, sizeof(float));
}
} // namespace lift_007D8450
} // namespace lift_007C5FA0

// [0x007C5B70]
namespace lift_007C5B70 {
// @name copyVec3To160
// @summary Copies three floats from src into dst at byte offsets 0x160, 0x164, 0x168.
void copyVec3To160(unsigned char* dst, const float* src) {
    float* out = reinterpret_cast<float*>(dst + 0x160);
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
}
} // namespace lift_007C5B70

// [0x007C5C00] sub_007C5C00 (35 bytes)
namespace lift_007C5C00 {
// @name copyVec3To190
// @class UnknownClass
// @summary Copies three floats from src into self at byte offsets 0x190, 0x194, 0x198.
// @field UnknownClass +0x190 float field_0x190
// @field UnknownClass +0x194 float field_0x194
// @field UnknownClass +0x198 float field_0x198
void fn_007C5C00(unsigned char* self, const float* src) {
    float* out = reinterpret_cast<float*>(self + 0x190);
    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
}
} // namespace lift_007C5C00

// [0x007C9D00]
namespace lift_007C9D00 {
// @name sub_007C9D00
// @summary Stores the absolute value of a float into dst+0x08 (negates when value < 0 or unordered/NaN).
// @field <Class> +0x08 float field_0x08 (written: abs-like result of the float argument)

// Original: void __cdecl f(float* dst /*[esp+4]*/, float value /*[esp+8]*/)
extern void sub_007C9D00(uint8_t* dst, float value)
{
    float result = value;
    // fcom compares value against 0.0; C0 is set when value < 0 or the compare is unordered (NaN).
    if (value < 0.0f || value != value) {
        result = -value;
    }
    *reinterpret_cast<float*>(dst + 0x08) = result;
}
} // namespace lift_007C9D00

// [0x007C9310]
namespace lift_007C9310 {
// @name copyVec3FromStride32Array
// @summary Copy the first three floats (Vec3) of element `index` from a 32-byte-stride array into out.
void __cdecl copyVec3FromStride32Array(const void* base, UINT index, float* out) {
    const uint8_t* elem = reinterpret_cast<const uint8_t*>(base) + static_cast<size_t>(index) * 32u;
    out[0] = *reinterpret_cast<const float*>(elem + 0x0);
    out[1] = *reinterpret_cast<const float*>(elem + 0x4);
    out[2] = *reinterpret_cast<const float*>(elem + 0x8);
}
} // namespace lift_007C9310

// [0x007CA790] sub_007CA790 (35 bytes)
namespace lift_007CA790 {
// @name dotVec3
// @summary Returns the 3-component dot product of two float[3] vectors, summed as (y*y' + x*x') + z*z'.
float fn_007CA790(const float* self, const float* other) {
    // Matches original x87 evaluation order: (a[1]*b[1] + a[0]*b[0]) + a[2]*b[2].
    // Result is rounded to single precision (original stored via fstp dword).
    float t = self[1] * other[1];
    t += self[0] * other[0];
    t += self[2] * other[2];
    return t;
}
} // namespace lift_007CA790

// [0x007C8820]
namespace lift_007C8820 {
// @name hasItemAtIndex
// @summary Checks whether the item at the given index has a non-zero field at offset 0x24.
// @field Self +0x00 int32_t count
// @field Self +0x20 uint8_t* items
uint32_t __cdecl fn_007C8820(void* self, int32_t index) {
    if (index < 0 || index >= lift_field<int32_t>(self, 0x00)) {
        return 0;
    }
    uint8_t* items = lift_field<uint8_t*>(self, 0x20);
    if (lift_field<uint32_t>(items + static_cast<size_t>(index) * 40, 0x24) == 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_007C8820

// [0x007C9E50]
namespace lift_007C9E50 {
// @name Unknown::setFlagFromState_007C9E50
// @class Unknown
// @summary Sets this+0x04 to 1 if the flag argument is nonzero or any of this+0x00/0x1C/0x50 is nonzero, otherwise to 0.
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x1c int32_t field_0x1c
// @field Unknown +0x50 int32_t field_0x50

void sub_007C9E50(void* self, int32_t flag) {
    uint8_t* p = static_cast<uint8_t*>(self);
    int32_t result = 0;
    if (flag == 0 &&
        *reinterpret_cast<int32_t*>(p + 0x00) == 0 &&
        *reinterpret_cast<int32_t*>(p + 0x50) == 0 &&
        *reinterpret_cast<int32_t*>(p + 0x1c) == 0) {
        result = 0;
    } else {
        result = 1;
    }
    *reinterpret_cast<int32_t*>(p + 0x04) = result;
}
} // namespace lift_007C9E50

// [0x007CC5D0] sub_007CC5D0 (43 bytes)
namespace lift_007CC5D0 {
// Known callee 0x007CC200: sub_007CC200 (cdecl, 25 bytes). Called as (result, self).
extern uint32_t ext_007CC200(uint32_t result, void* self);

// @name Unknown::callAllocAndInit_007CC5D0
// @class Unknown
// @summary Calls the function pointer at obj+0x08 (obj = self+0xB0) with (0x10, 0x10); if it returns non-null, forwards that result and self to ext_007CC200 and returns its result, otherwise returns 0.
// @field Unknown +0xB0 uint32_t field_0xB0
uint32_t fn_007CC5D0(void* self) {
    // mov esi, [esp+8]; mov eax, [esi+0xB0]   -> obj address
    const uint32_t obj_addr = lift_field<uint32_t>(self, 0xB0);
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(obj_addr));

    // mov ecx, [eax+8]                        -> function pointer slot at obj+0x08
    const uint32_t fn_addr = lift_field<uint32_t>(obj, 0x08);

    // push 0x10; push 0x10; call ecx; add esp,8   -> cdecl call, result in eax
    using AllocFn = uint32_t (*)(uint32_t, uint32_t);
    auto fn = reinterpret_cast<AllocFn>(static_cast<uintptr_t>(fn_addr));
    uint32_t eax = fn(0x10, 0x10);

    // test eax,eax; je .zero
    if (eax != 0) {
        // push esi; push eax; call ext_007CC200; add esp,8
        return ext_007CC200(eax, self);
    }

    // .zero: xor eax,eax
    return 0;
}
} // namespace lift_007CC5D0

// [0x007CA750]
namespace lift_007CA750 {
// @name sub_007CA750
// @summary Allocates a 20-byte 16-byte-aligned object via field_0xb0 and initializes it with ext_007CA340
// @field Unknown +0xb0 void* field_0xb0

extern void* ext_007CA340(void* mem, void* obj, float val);

extern void* sub_007CA750(void* obj, float val) {
    using AllocFn = void* (*)(uint32_t size, uint32_t align);
    void* allocator = lift_field<void*>(obj, 0xb0);
    AllocFn alloc_fn = lift_field<AllocFn>(allocator, 0x8);
    void* mem = alloc_fn(0x14, 0x10);
    if (!mem) {
        return nullptr;
    }
    return ext_007CA340(mem, obj, val);
}
} // namespace lift_007CA750

// [0x007CC930]
namespace lift_007CC930 {
// @name unlinkListNode
// @summary Unlinks a node from a circular doubly-linked list and decrements the list count.
// @field Node +0x04 void* prev
// @field Node +0x08 void* next
// @field Node +0x0c void* list
// @field List +0x0c void* head
// @field List +0x1c int32_t count


void __cdecl sub_007CC930(void* node) {
    void* list = lift_field<void*>(node, 0x0c);
    if (node == lift_field<void*>(list, 0x0c)) {
        void* new_head = (node == lift_field<void*>(node, 0x04))
            ? nullptr
            : lift_field<void*>(node, 0x08);
        lift_field<void*>(list, 0x0c) = new_head;
    }

    void* next = lift_field<void*>(node, 0x08);
    void* prev = lift_field<void*>(node, 0x04);
    lift_field<void*>(next, 0x04) = prev;
    lift_field<void*>(prev, 0x08) = next;

    lift_field<int32_t>(list, 0x1c) -= 1;
}
} // namespace lift_007CC930

// [0x007CDBC0]
namespace lift_007CDBC0 {
// @name clearIndexedArrayEntries
// @summary Zeroes out the indexed 32-bit entries in three dynamic arrays on the target object.
// @field Target +0x70 uint32_t* field_0x70
// @field Target +0x74 uint32_t field_0x74
// @field Target +0x7C uint32_t* field_0x7C
// @field Target +0x80 uint32_t field_0x80
// @field Target +0x88 uint32_t* field_0x88
// @field Target +0x8C uint32_t field_0x8C


void sub_007CDBC0(void* arg0) {
    uint32_t* arr1 = lift_field<uint32_t*>(arg0, 0x7C);
    uint32_t idx1 = lift_field<uint32_t>(arg0, 0x80);
    arr1[idx1] = 0;

    uint32_t* arr2 = lift_field<uint32_t*>(arg0, 0x88);
    uint32_t idx2 = lift_field<uint32_t>(arg0, 0x8C);
    arr2[idx2] = 0;

    uint32_t* arr0 = lift_field<uint32_t*>(arg0, 0x70);
    uint32_t idx0 = lift_field<uint32_t>(arg0, 0x74);
    arr0[idx0] = 0;
}
} // namespace lift_007CDBC0

// [0x007C6810] sub_007C6810 (64 bytes)
namespace lift_007C6810 {
extern std::uint32_t ext_007D4A70(std::uint32_t head);
// Known callee 0x007D4AA0: Unknown::FindLinkPredecessor (Searches a link structure rooted at the head node (+0x04 chain, then +0x08 chain with back-link checks) for the given key; returns the predecessor node, the matching child, or 0.)
extern std::uint32_t ext_007D4AA0(std::uint32_t head, std::uint32_t node);

// @name Unknown::ForEachLinkMatch
// @class Unknown
// @summary Gets the first node of the link chain at this+0x1D4, then for each node found by ext_007D4AA0 calls callback(node+0x14, context) until no further match; always returns 0.
// @field Unknown +0x1D4 std::uint8_t field_0x1d4
// @field LinkNode +0x14 std::uint32_t field_0x14

using LinkCallback = void (*)(std::uint32_t, std::uint32_t);

std::uint32_t fn_007C6810(std::uint32_t self, std::uint32_t callback, std::uint32_t context) {
    const std::uint32_t head = self + 0x1D4;

    std::uint32_t node = ext_007D4A70(head);
    if (node == 0) {
        return 0;
    }

    const auto fn = reinterpret_cast<LinkCallback>(static_cast<std::uintptr_t>(callback));
    for (;;) {
        const std::uint32_t value = lift_field<std::uint32_t>(
            reinterpret_cast<void*>(static_cast<std::uintptr_t>(node)), 0x14);
        const std::uint32_t next = ext_007D4AA0(head, node);
        fn(value, context);
        node = next;
        if (node == 0) {
            break;
        }
    }
    return 0;
}
} // namespace lift_007C6810

// [0x007CDB70] sub_007CDB70 (65 bytes)
namespace lift_007CDB70 {
// @name Unknown::AdvanceAlignedCounters
// @class Unknown
// @summary Rounds the int at +0xAC to the next 4-byte step (signed remainder rule) and increments four counters by 1.
// @field Unknown +0x74 int32_t field_0x74
// @field Unknown +0x80 int32_t field_0x80
// @field Unknown +0x8C int32_t field_0x8C
// @field Unknown +0xA8 int32_t field_0xA8
// @field Unknown +0xAC int32_t field_0xAC
void fn_007CDB70(void* self) {
    int32_t& v = lift_field<int32_t>(self, 0xAC);
    int32_t r = v % 4;                       // signed remainder: 0, +/-1, +/-2, +/-3
    if (r != 0) {
        v = static_cast<int32_t>(static_cast<uint32_t>(v) - static_cast<uint32_t>(r) + 4u);
    }

    lift_field<int32_t>(self, 0x80) += 1;
    lift_field<int32_t>(self, 0x8C) += 1;
    lift_field<int32_t>(self, 0x74) += 1;
    lift_field<int32_t>(self, 0xA8) += 1;
}
} // namespace lift_007CDB70
