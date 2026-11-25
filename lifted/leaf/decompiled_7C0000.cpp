// Lifted C++ translation unit: lifted/leaf/decompiled_7C0000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cmath>

// [0x007C97A0]
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

// [0x007C5B70]
namespace lift_007C5B70 {
template <typename T>
T mem_read(uint32_t addr);

template <typename T>
void mem_write(uint32_t addr, T val);

// @name setVec3_0x160
// @summary Copies a 3-float vector from src into dst offsets +0x160, +0x164, and +0x168.
// @field Obj +0x160 float field_0x160
// @field Obj +0x164 float field_0x164
// @field Obj +0x168 float field_0x168
void __cdecl sub_007C5B70(uint32_t dst, uint32_t src)
{
    mem_write<float>(dst + 0x160u, mem_read<float>(src));
    mem_write<float>(dst + 0x164u, mem_read<float>(src + 0x4u));
    mem_write<float>(dst + 0x168u, mem_read<float>(src + 0x8u));
}
} // namespace lift_007C5B70

// [0x007C5C00]
namespace lift_007C5C00 {
// @name copyVec3ToOffset0x190
// @summary Copies a 3-float vector from the second argument into fields at +0x190..+0x198 of the first argument
// @field Unknown +0x190 float field_0x190
// @field Unknown +0x194 float field_0x194
// @field Unknown +0x198 float field_0x198


uint32_t mem_read32(uint32_t addr);
void mem_write32(uint32_t addr, uint32_t val);

void sub_007C5C00(uint32_t self, uint32_t vec) {
    mem_write32(self + 0x190, mem_read32(vec + 0x0));
    mem_write32(self + 0x194, mem_read32(vec + 0x4));
    mem_write32(self + 0x198, mem_read32(vec + 0x8));
}
} // namespace lift_007C5C00

// [0x007C5FA0]
namespace lift_007C5FA0 {
template <typename T> T mem_read(uint32_t addr);
template <typename T> void mem_write(uint32_t addr, T val);

// @name getVec3_0x140
// @summary Copies a 3D float vector from offset 0x140 of the source object into the destination buffer
// @field Object +0x140 float field_0x140
// @field Object +0x144 float field_0x144
// @field Object +0x148 float field_0x148
void sub_007C5FA0(uint32_t src, uint32_t dst) {
    mem_write<float>(dst + 0x0, mem_read<float>(src + 0x140));
    mem_write<float>(dst + 0x4, mem_read<float>(src + 0x144));
    mem_write<float>(dst + 0x8, mem_read<float>(src + 0x148));
}
} // namespace lift_007C5FA0

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

// [0x007C9310]
namespace lift_007C9310 {
extern uint32_t mem_read_u32(uint32_t addr);
extern void mem_write_u32(uint32_t addr, uint32_t val);

// @name copyVec3AtStride32
// @summary Copies 3 floats from base + index * 32 to out.
void __cdecl sub_007C9310(uint32_t base, uint32_t index, uint32_t out) {
    uint32_t src = base + (index << 5);
    mem_write_u32(out + 0x0, mem_read_u32(src + 0x0));
    mem_write_u32(out + 0x4, mem_read_u32(src + 0x4));
    mem_write_u32(out + 0x8, mem_read_u32(src + 0x8));
}
} // namespace lift_007C9310

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

// [0x007C9D00]
namespace lift_007C9D00 {
// @name setAbsFloatField_0x8
// @summary Sets float field at offset +0x8 to the absolute value of the input float.
// @field Unknown +0x08 float field_0x08

extern void mem_write_f32(uint32_t addr, float val);

void __cdecl sub_007C9D00(uint32_t arg0, float val) {
    float abs_val = (val < 0.0f) ? -val : val;
    mem_write_f32(arg0 + 0x8, abs_val);
}
} // namespace lift_007C9D00

// [0x007CA790]
namespace lift_007CA790 {
// @name Vec3::dot
// @class Vec3
// @summary Computes the 3D dot product of this vector with another vector.
// @field Vec3 +0x00 float x
// @field Vec3 +0x04 float y
// @field Vec3 +0x08 float z


float mem_f32(uintptr_t addr);

float __thiscall sub_007CA790(uintptr_t self, uintptr_t other)
{
    float xy = mem_f32(other + 0x4) * mem_f32(self + 0x4) + mem_f32(other) * mem_f32(self);
    return xy + mem_f32(other + 0x8) * mem_f32(self + 0x8);
}
} // namespace lift_007CA790

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

// [0x007C8820]
namespace lift_007C8820 {
uint32_t mem_read32(uint32_t addr);

// @name checkArrayEntryNonZero
// @summary Checks if index is in bounds [0, count) and the 40-byte entry's field at +0x24 is non-zero.
// @field Obj +0x00 int32_t field_0x00
// @field Obj +0x20 uint32_t field_0x20
uint32_t sub_007C8820(uint32_t obj, int32_t index) {
    if (index < 0) {
        return 0;
    }
    int32_t count = static_cast<int32_t>(mem_read32(obj));
    if (index >= count) {
        return 0;
    }
    uint32_t base = mem_read32(obj + 0x20);
    uint32_t val = mem_read32(base + static_cast<uint32_t>(index) * 40u + 0x24u);
    return (val != 0) ? 1u : 0u;
}
} // namespace lift_007C8820

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

// [0x007C9E50]
namespace lift_007C9E50 {
uint32_t mem_read32(uint32_t addr);
void mem_write32(uint32_t addr, uint32_t val);

// @name updateFlagIfAnySet
// @summary Sets field at +0x04 to 1 if arg1 or any of fields +0x00, +0x1C, +0x50 are non-zero, else 0.
// @field Obj +0x00 uint32_t field_0x00
// @field Obj +0x04 uint32_t field_0x04
// @field Obj +0x1C uint32_t field_0x1C
// @field Obj +0x50 uint32_t field_0x50
void sub_007C9E50(uint32_t arg0, uint32_t arg1) {
    uint32_t val = (arg1 != 0 ||
                    mem_read32(arg0 + 0x00) != 0 ||
                    mem_read32(arg0 + 0x50) != 0 ||
                    mem_read32(arg0 + 0x1C) != 0) ? 1u : 0u;
    mem_write32(arg0 + 0x04, val);
}
} // namespace lift_007C9E50

// [0x007CC5D0]
namespace lift_007CC5D0 {
// @name allocAndInit_007CC5D0
// @summary Allocates a 16-byte object (16-byte aligned) via allocator at +0xb0/+0x8 and initializes it with sub_007CC200
// @field Obj +0xb0 uint32_t allocatorPtr


extern uint32_t mem_read32(uint32_t addr);
extern uint32_t ext_007CC200(uint32_t obj, uint32_t arg);

uint32_t fn_007CC5D0(uint32_t arg0) {
    uint32_t allocator = mem_read32(arg0 + 0xb0);
    uint32_t alloc_fn = mem_read32(allocator + 0x8);
    uint32_t obj = ((uint32_t (*)(uint32_t, uint32_t))(uintptr_t)alloc_fn)(0x10, 0x10);
    if (obj == 0) {
        return 0;
    }
    return ext_007CC200(obj, arg0);
}
} // namespace lift_007CC5D0

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

// [0x007CA750]
namespace lift_007CA750 {
// @name allocateAndInitObject
// @summary Allocates 20 bytes (16-byte aligned) via object+0xB0->0x8 and initializes it with sub_007CA340
// @field Obj +0xB0 uint32_t allocatorPtr


extern uint32_t mem_read32(uint32_t addr);
extern uint32_t ext_007CA340(uint32_t a1, uint32_t a2, float a3);

extern uint32_t fn_007CA750(uint32_t a1, float a2) {
    uint32_t alloc_obj = mem_read32(a1 + 0xb0);
    uint32_t alloc_fn_addr = mem_read32(alloc_obj + 0x8);
    using AllocFn = uint32_t(*)(uint32_t, uint32_t);
    AllocFn alloc_fn = reinterpret_cast<AllocFn>(static_cast<uintptr_t>(alloc_fn_addr));
    uint32_t ptr = alloc_fn(0x14, 0x10);
    if (!ptr) {
        return 0;
    }
    return ext_007CA340(ptr, a1, a2);
}
} // namespace lift_007CA750

// [0x007CC930]
namespace lift_007CC930 {
extern uint32_t& mem_u32(uint32_t addr);
extern int32_t& mem_i32(uint32_t addr);

// @name unlinkListNode
// @summary Unlinks a node from a circular doubly-linked list and decrements the list count.
// @field ListNode +0x04 uint32_t prev
// @field ListNode +0x08 uint32_t next
// @field ListNode +0x0C uint32_t list
// @field List +0x0C uint32_t head
// @field List +0x1C int32_t count
void __cdecl sub_007CC930(uint32_t node) {
    uint32_t list = mem_u32(node + 0xC);
    if (node == mem_u32(list + 0xC)) {
        uint32_t new_head = (node == mem_u32(node + 0x4)) ? 0u : mem_u32(node + 0x8);
        mem_u32(list + 0xC) = new_head;
    }
    uint32_t next = mem_u32(node + 0x8);
    uint32_t prev = mem_u32(node + 0x4);
    mem_u32(next + 0x4) = prev;
    mem_u32(prev + 0x8) = next;
    mem_i32(list + 0x1C) = mem_i32(list + 0x1C) - 1;
}
} // namespace lift_007CC930

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

// [0x007CDBC0]
namespace lift_007CDBC0 {
// @name clearIndexedSlots
// @summary Zeroes three indexed 32-bit array elements referenced by pointer/index pairs in the struct.
// @field struct +0x70 uint32_t* field_0x70
// @field struct +0x74 uint32_t field_0x74
// @field struct +0x7c uint32_t* field_0x7c
// @field struct +0x80 uint32_t field_0x80
// @field struct +0x88 uint32_t* field_0x88
// @field struct +0x8c uint32_t field_0x8c


uint32_t mem_read32(uint32_t addr);
void mem_write32(uint32_t addr, uint32_t val);

void sub_007CDBC0(uint32_t arg0) {
    uint32_t idx_80 = mem_read32(arg0 + 0x80);
    uint32_t ptr_7c = mem_read32(arg0 + 0x7c);
    mem_write32(ptr_7c + 4 * idx_80, 0);

    uint32_t idx_8c = mem_read32(arg0 + 0x8c);
    uint32_t ptr_88 = mem_read32(arg0 + 0x88);
    mem_write32(ptr_88 + 4 * idx_8c, 0);

    uint32_t idx_74 = mem_read32(arg0 + 0x74);
    uint32_t ptr_70 = mem_read32(arg0 + 0x70);
    mem_write32(ptr_70 + 4 * idx_74, 0);
}
} // namespace lift_007CDBC0

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
