// Lifted C++ translation unit: lifted/Primitives/Cuboid.cpp
#include "lift_compat.h"

// [0x0053B4F0]
namespace lift_0053B4F0 {
// @name Primitives::Cuboid::render
// @class Primitives::Cuboid
// @summary Renders the cuboid using OpenGL immediate-mode quads if field_0x20 is non-null.
// @field Primitives::Cuboid +0x20 int32_t field_0x20
// @field Primitives::Cuboid +0x3C float[3] field_0x3C


extern void __thiscall ext_0053B4B0(void* self);

extern uint32_t mem_00925488;
extern uint32_t mem_00925490;
extern uint32_t mem_00925498;
extern uint32_t mem_0092549C;
extern uint32_t mem_009254D4;

extern uint8_t mem_009555C8[];
extern uint8_t mem_00955610[];
extern uint8_t mem_00955630[];

void __thiscall fn_0053B4F0(void* self, int32_t /*unused*/) {
    if (lift_field<int32_t>(self, 0x20) == 0) {
        return;
    }

    ext_0053B4B0(self);

    using GlBeginFn = void(__stdcall*)(uint32_t);
    using GlEndFn = void(__stdcall*)();
    using GlVecFn = void(__stdcall*)(const float*);

    auto glBeginFn = reinterpret_cast<GlBeginFn>(static_cast<uintptr_t>(mem_00925490));
    auto glTexCoord2fvFn = reinterpret_cast<GlVecFn>(static_cast<uintptr_t>(mem_009254D4));
    auto glVertex3fvFn = reinterpret_cast<GlVecFn>(static_cast<uintptr_t>(mem_00925498));
    auto glNormal3fvFn = reinterpret_cast<GlVecFn>(static_cast<uintptr_t>(mem_0092549C));
    auto glEndFn = reinterpret_cast<GlEndFn>(static_cast<uintptr_t>(mem_00925488));

    glBeginFn(7);

    const int8_t* index_ptr = reinterpret_cast<const int8_t*>(mem_00955630);
    const uint8_t* normal_ptr = mem_009555C8;

    while (normal_ptr < mem_00955610) {
        glNormal3fvFn(reinterpret_cast<const float*>(normal_ptr));

        const uint8_t* tex_ptr = mem_00955610;
        while (tex_ptr < mem_00955630) {
            glTexCoord2fvFn(reinterpret_cast<const float*>(tex_ptr));

            int32_t idx = static_cast<int32_t>(*index_ptr);
            const float* vertex_ptr = reinterpret_cast<const float*>(
                static_cast<const uint8_t*>(self) + 0x3C + idx * 12);
            glVertex3fvFn(vertex_ptr);

            tex_ptr += 8;
            index_ptr += 1;
        }

        normal_ptr += 12;
    }

    glEndFn();
}
} // namespace lift_0053B4F0
