// Lifted C++ translation unit: lifted/Primitives/Bone.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x0053E1C0] Primitives::Bone::vfunc_25 (123 bytes)
namespace lift_0053E1C0 {
// Known callee 0x0053A610: Primitives::Plane::vfunc_25
// (If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30;
//  then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.)
extern void ext_0053A610(void* self, void* arg1, uint32_t arg2, uint32_t arg3);

// Callee 0x005B11E0 (sub_005B11E0, 11 bytes): thiscall, one stack arg, returns float in st0.
extern float ext_005B11E0(void* self, uint32_t index);

// @name Primitives::Bone::vfunc_25
// @class Primitives::Bone
// @summary Forwards three args to Plane::vfunc_25, updates status bits in +0x1c (sets 0x4 and 0x40000, clears 0x1), then loads four floats (indices 0..3 via ext_005B11E0) into +0x3c..+0x48.
// @field Primitives::Bone +0x1c uint32_t flags
// @field Primitives::Bone +0x3c float value0
// @field Primitives::Bone +0x40 float value1
// @field Primitives::Bone +0x44 float value2
// @field Primitives::Bone +0x48 float value3
void fn_0053E1C0(void* self, void* arg1, uint32_t arg2, uint32_t arg3) {
    ext_0053A610(self, arg1, arg2, arg3);

    uint32_t& flags = lift_field<uint32_t>(self, 0x1c);
    flags |= 0x4u;
    flags |= 0x40000u;
    flags &= ~0x1u;

    lift_field<float>(self, 0x3c) = ext_005B11E0(arg1, 0);
    lift_field<float>(self, 0x40) = ext_005B11E0(arg1, 1);
    lift_field<float>(self, 0x44) = ext_005B11E0(arg1, 2);
    lift_field<float>(self, 0x48) = ext_005B11E0(arg1, 3);
}
} // namespace lift_0053E1C0

// [0x0053C520] Primitives::Bone::vfunc_28 (509 bytes)
namespace lift_0053C520 {
extern void ext_0053C895();
extern void ext_0053C84D();
// thiscall (ecx = vec3*): normalizes the vector in place.
extern void ext_0067B860(float* vec);
// thiscall (ecx = dir3*, stack arg = out vec3*): writes a vector perpendicular to dir.
extern void ext_0067BF50(float* dir, float* out);

// IAT slots holding OPENGL32.dll entry points.
extern int mem_0092546C; // glPushAttrib
extern int mem_00925520; // glLineWidth
extern int mem_00925490; // glBegin
extern int mem_0092548C; // glVertex3f

namespace {
// Reads an IAT slot and returns the imported function pointer stored there.
template <typename Fn>
inline Fn iat_slot(const int& slot) {
    return *reinterpret_cast<const Fn*>(&slot);
}
} // namespace

// @name Primitives::Bone::vfunc_28
// @class Primitives::Bone
// @summary Draws the bone as GL_LINES from the origin to four points around its normalized direction, scaled by +0x48, using an orthonormal side/across frame.
// @field Primitives::Bone +0x3c float value0
// @field Primitives::Bone +0x40 float value1
// @field Primitives::Bone +0x44 float value2
// @field Primitives::Bone +0x48 float value3
void fn_0053C520(void* self) {
    using VirtFn = uint8_t (__thiscall*)(void*, uint32_t);
    using GlPushAttribFn = void (__stdcall*)(uint32_t);
    using GlLineWidthFn = void (__stdcall*)(float);
    using GlBeginFn = void (__stdcall*)(uint32_t);
    using GlVertex3fFn = void (__stdcall*)(float, float, float);

    // Virtual gate: vtable slot at +0x54 (index 21) with flag 0x80000.
    void** vtable = *static_cast<void***>(self);
    if (!reinterpret_cast<VirtFn>(vtable[21])(self, 0x80000u)) {
        ext_0053C895();
        return;
    }

    iat_slot<GlPushAttribFn>(mem_0092546C)(0x4u); // GL_LINE_BIT
    iat_slot<GlLineWidthFn>(mem_00925520)(1.0f);

    float dir[3] = {
        lift_field<float>(self, 0x3c),
        lift_field<float>(self, 0x40),
        lift_field<float>(self, 0x44),
    };
    const float length = std::sqrt(dir[0] * dir[0] + dir[1] * dir[1] + dir[2] * dir[2]);
    if (!(static_cast<double>(length) > 0.001)) {
        ext_0053C84D();
        return;
    }
    ext_0067B860(dir);

    // side: unit vector perpendicular to dir.
    float side[3] = {0.0f, 0.0f, 0.0f};
    ext_0067BF50(dir, side);
    ext_0067B860(side);

    // across = normalize(cross(dir, side)).
    float across[3] = {
        dir[1] * side[2] - dir[2] * side[1],
        dir[2] * side[0] - dir[0] * side[2],
        dir[0] * side[1] - dir[1] * side[0],
    };
    ext_0067B860(across);

    const float scale = lift_field<float>(self, 0x48);

    // Four points: dir*s +/- side*s and dir*s +/- across*s.
    float verts[4][3];
    for (int k = 0; k < 4; ++k) {
        for (int i = 0; i < 3; ++i) {
            const float base = dir[i] * scale;
            switch (k) {
                case 0:  verts[k][i] = base + side[i] * scale; break;
                case 1:  verts[k][i] = base + across[i] * scale; break;
                case 2:  verts[k][i] = base - side[i] * scale; break;
                default: verts[k][i] = base - across[i] * scale; break;
            }
        }
    }

    iat_slot<GlBeginFn>(mem_00925490)(0x1u); // GL_LINES
    for (int j = 0; j < 4; ++j) {
        iat_slot<GlVertex3fFn>(mem_0092548C)(0.0f, 0.0f, 0.0f);
        iat_slot<GlVertex3fFn>(mem_0092548C)(verts[j][0], verts[j][1], verts[j][2]);
    }
}
} // namespace lift_0053C520
