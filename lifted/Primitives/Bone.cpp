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
// @name Primitives::Bone::vfunc_28
// @class Primitives::Bone
// @summary Draws the bone as GL_LINES from the origin to four points offset around the bone axis, scaled by value3.
// @field Primitives::Bone +0x3C float value0
// @field Primitives::Bone +0x40 float value1
// @field Primitives::Bone +0x44 float value2
// @field Primitives::Bone +0x48 float value3

extern void ext_0053C895();
extern void ext_0053C84D();
extern double ext_006A7250(double x);
extern void __thiscall ext_0067B860(float* vec3);
extern void __thiscall ext_0067BF50(float* vec3, float* out3);
extern void __stdcall ext_00401000(void* base, std::int32_t stride, std::int32_t count, void (*callback)(void*));

extern void (*mem_0092546C)(GLbitfield mask);     // OPENGL32!glPushAttrib
extern void (*mem_00925520)(GLfloat width);       // OPENGL32!glLineWidth
extern void (*mem_00925490)(GLenum mode);         // OPENGL32!glBegin
extern void (*mem_0092548C)(GLfloat x, GLfloat y, GLfloat z); // OPENGL32!glVertex3f
extern const double mem_00955648;                 // .rdata double 0.001

void fn_0053C520(void* self) {
    using VFn = bool(__thiscall*)(void* self, std::uint32_t flags);
    void** vtbl = lift_field<void**>(self, 0);
    if (!reinterpret_cast<VFn>(vtbl[21])(self, 0x80000u)) {
        ext_0053C895();
        return;
    }

    mem_0092546C(4);     // glPushAttrib(GL_LINE_BIT)
    mem_00925520(1.0f);  // glLineWidth(1.0f)

    float d[3] = {
        lift_field<float>(self, 0x3C),
        lift_field<float>(self, 0x40),
        lift_field<float>(self, 0x44),
    };
    const float s = lift_field<float>(self, 0x48);

    const float len = static_cast<float>(
        ext_006A7250(static_cast<double>(d[0] * d[0] + d[1] * d[1] + d[2] * d[2])));
    if (static_cast<double>(len) <= mem_00955648) {
        ext_0053C84D();
        return;
    }

    ext_0067B860(d);          // normalize d in place

    float p[3] = {0.0f, 0.0f, 0.0f};
    ext_0067BF50(d, p);
    ext_0067B860(p);

    float q[3] = {
        d[1] * p[2] - d[2] * p[1],
        d[2] * p[0] - d[0] * p[2],
        d[0] * p[1] - d[1] * p[0],
    };
    ext_0067B860(q);

    // Four corners around the axis d: d+p, d+q, d-p, d-q, each scaled by s.
    float corners[4][3];
    for (int k = 0; k < 3; ++k) {
        const float t = d[k] * s;
        corners[0][k] = t + p[k] * s;
        corners[1][k] = t + q[k] * s;
        corners[2][k] = t - p[k] * s;
        corners[3][k] = t - q[k] * s;
    }

    // 0x0044CCC0 is pushed as an immediate callback address (not called directly).
    using Callback = void (*)(void*);
    ext_00401000(corners, 12, 4, reinterpret_cast<Callback>(static_cast<std::uintptr_t>(0x0044CCC0)));

    mem_00925490(1);     // glBegin(GL_LINES)
    for (int i = 0; i < 4; ++i) {
        mem_0092548C(0.0f, 0.0f, 0.0f);
        mem_0092548C(corners[i][0], corners[i][1], corners[i][2]);
    }
}
} // namespace lift_0053C520
