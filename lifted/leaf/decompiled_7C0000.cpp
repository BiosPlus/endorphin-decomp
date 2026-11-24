// Lifted C++ translation unit: lifted/leaf/decompiled_7C0000.cpp
#include "lift_compat.h"
#include <cstdint>

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
