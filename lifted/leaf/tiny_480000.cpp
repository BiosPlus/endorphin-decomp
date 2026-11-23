// Lifted C++ translation unit: lifted/leaf/tiny_480000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_004A66D0(void* self);
extern "C" void __fastcall ext_004A6710(void* self);
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name sub_004805E0
// @summary Member forwarding thunk: loads subobject pointer at +0x3B4 and tail-calls sub_004A66D0.
extern "C" void __fastcall fn_004805E0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x3B4);
    ext_004A66D0(delegate_obj);
}

// [0x004806C0] sub_004806C0 (11 bytes)
// @name sub_004806C0
// @summary Member forwarding thunk: loads subobject pointer at +0x3B4 and tail-calls sub_004A6710.
extern "C" void __fastcall fn_004806C0(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x3B4);
    ext_004A6710(delegate_obj);
}

// [0x00486C10] sub_00486C10 (13 bytes)
// @name sub_00486C10
// @summary Setter storing float argument into field at offset +0x220.
extern "C" void __fastcall fn_00486C10(void* self, int edx_unused, float value) {
    (void)edx_unused;
    lift_field<float>(self, 0x220) = value;
}

// [0x00488260] sub_00488260 (8 bytes)
// @name sub_00488260
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x144.
extern "C" void __fastcall fn_00488260(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x144);
    target(self);
}

// [0x0048FB60] sub_0048FB60 (19 bytes)
// @name sub_0048FB60
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_0048FB60(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x4);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x8);
    const int32_t diff = end - begin;
    return diff >> 3;
}

// [0x0048FB00]
namespace lift_0048FB00 {
extern uint32_t mem_read32(uintptr_t);
extern uint8_t mem_read8(uintptr_t);

// @name sub_0048FB00
// @summary Reads byte at offset +0x1 from the pointer at this+0x4
// @field unknown +0x04 uint32_t field_0x04
uint8_t __thiscall sub_0048FB00(void* self) {
    uint32_t ptr = mem_read32(reinterpret_cast<uintptr_t>(self) + 0x4);
    return mem_read8(static_cast<uintptr_t>(ptr) + 0x1);
}
} // namespace lift_0048FB00

// [0x00486AF0] sub_00486AF0 (17 bytes)
namespace lift_00486AF0 {
// @name sub_00486AF0
// @summary Auto-lifted identical-shape clone of 0x00402050 (AnimatableTransform::vfunc_37).
namespace lift_00402050 {
extern uint32_t mem_read32(uint32_t addr);

// @name AnimatableTransform::vfunc_37
// @class AnimatableTransform
// @summary Forwards virtual call to RenderObjectOwner/Updateable subobject vtable slot +0x10
// @field AnimatableTransform +0x0C uint32_t* renderObjectOwner_vtable

uint32_t __thiscall fn_00486AF0(uint32_t self) {
    uint32_t subobj = self + 0x19C;
    uint32_t vtable = mem_read32(subobj);
    uint32_t target = mem_read32(vtable + 0x1C);
    using Fn = uint32_t(__thiscall*)(uint32_t);
    return reinterpret_cast<Fn>(static_cast<uintptr_t>(target))(subobj);
}
} // namespace lift_00402050
} // namespace lift_00486AF0

// [0x0048FB10]
namespace lift_0048FB10 {
// @name sub_0048FB10
// @summary Loads a double from offset +0x58 of this and returns it as a float
// @field Unknown +0x58 double field_0x58


float __thiscall sub_0048FB10(void* self) {
    return static_cast<float>(*reinterpret_cast<const double*>(reinterpret_cast<const uint8_t*>(self) + 0x58));
}
} // namespace lift_0048FB10
