// Lifted C++ translation unit: lifted/classes/CameraTool.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>

// [0x00543470] CameraTool::vfunc_32 (71 bytes)
namespace lift_00543470 {
// Virtual dispatch stand-ins. The original code calls through vtable slots:
//   ext_vfunc_0x78: CameraTool vtable[0x78 / 4] (no args), returns a 64-byte block pointer.
//   ext_vfunc_0x18: sub-object vtable[0x18 / 4] (one arg), returns a 64-byte block pointer.
extern const void* (*ext_vfunc_0x78)(void* self);
extern const void* (*ext_vfunc_0x18)(void* self, const void* arg);

// @name CameraTool::vfunc_32
// @class CameraTool
// @summary Fetches a 64-byte block via two virtual calls, copies it into this+0x04, then duplicates it into this+0x44.
// @field CameraTool +0x04 uint8_t[64] field_0x04
// @field CameraTool +0x44 uint8_t[64] field_0x44
// @field CameraTool +0x88 void* field_0x88
void fn_00543470(void* self) {
    if (lift_field<void*>(self, 0x88) == nullptr) {
        return;
    }

    const void* src = ext_vfunc_0x78(self);
    void* sub = lift_field<void*>(self, 0x88);
    const void* block = ext_vfunc_0x18(sub, src);

    std::memcpy(static_cast<uint8_t*>(self) + 0x04, block, 64);
    std::memcpy(static_cast<uint8_t*>(self) + 0x44, static_cast<uint8_t*>(self) + 0x04, 64);
}
} // namespace lift_00543470

// [0x005433F0]
namespace lift_005433F0 {
extern uint32_t mem_r32(const void* base, int32_t offset);
extern uint32_t mem_r32(uint32_t base, int32_t offset);
extern float mem_rf32(uint32_t base, int32_t offset);
extern void mem_wf32(void* base, int32_t offset, float val);

// @name CameraTool::vfunc_33
// @class CameraTool
// @summary Copies translation vector from the associated target's transform into two internal 4D vectors.
// @field CameraTool +0x00 void* vtable
// @field CameraTool +0x34 float field_0x34
// @field CameraTool +0x38 float field_0x38
// @field CameraTool +0x3c float field_0x3c
// @field CameraTool +0x40 float field_0x40
// @field CameraTool +0x74 float field_0x74
// @field CameraTool +0x78 float field_0x78
// @field CameraTool +0x7c float field_0x7c
// @field CameraTool +0x80 float field_0x80
// @field CameraTool +0x88 void* field_0x88
void __thiscall fn_005433F0(void* self) {
    uint32_t obj = mem_r32(self, 0x88);
    if (obj == 0) {
        return;
    }

    uint32_t self_vtable = mem_r32(self, 0x00);
    uint32_t obj_vtable = mem_r32(obj, 0x00);

    using GetIndexFn = uint32_t(__thiscall*)(void*);
    auto get_index = reinterpret_cast<GetIndexFn>(mem_r32(self_vtable, 0x78));
    uint32_t idx = get_index(self);

    using GetTransformFn = uint32_t(__thiscall*)(uint32_t, uint32_t);
    auto get_transform = reinterpret_cast<GetTransformFn>(mem_r32(obj_vtable, 0x18));
    uint32_t transform = get_transform(obj, idx);

    float x = mem_rf32(transform, 0x30);
    float y = mem_rf32(transform, 0x34);
    float z = mem_rf32(transform, 0x38);

    mem_wf32(self, 0x34, x);
    mem_wf32(self, 0x38, y);
    mem_wf32(self, 0x3c, z);
    mem_wf32(self, 0x40, 1.0f);

    mem_wf32(self, 0x74, x);
    mem_wf32(self, 0x78, y);
    mem_wf32(self, 0x7c, z);
    mem_wf32(self, 0x80, 1.0f);
}
} // namespace lift_005433F0
