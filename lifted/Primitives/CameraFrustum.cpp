// Lifted C++ translation unit: lifted/Primitives/CameraFrustum.cpp
#include "lift_compat.h"
// Known callee 0x0053A610: Primitives::Plane::vfunc_25
// (If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30;
//  then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.)
extern "C" void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);

// [0x0053E170] Primitives::CameraFrustum::vfunc_25 (78 bytes)
// @name CameraFrustum::vfunc_25
// @class Primitives::CameraFrustum
// @summary Forwards three arguments to Plane::vfunc_25, then normalizes flag bits at +0x1c
//          (sets 0x100 and 0x40000, clears 0x2).
// @field Primitives::CameraFrustum +0x1c uint32_t field_0x1c
void fn_0053E170(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    ext_0053A610(self, arg1, arg2, arg3);

    uint32_t* flags = reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x1c);

    *flags |= 0x100;
    *flags |= 0x40000;
    *flags &= ~0x2u;
}

// [0x0053C250] Primitives::CameraFrustum::vfunc_28 (621 bytes)
namespace lift_0053C250 {
extern float* ext_005B11D0(void* self, int index);

extern double mem_00A44978;                       // 1e-5 fallback for a non-positive ratio
extern const double mem_00955AD8;                 // 12.7 scale factor
extern void (*mem_00925414)(void);                // glPushMatrix
extern void (*mem_00925490)(GLenum);              // glBegin
extern void (*mem_0092548C)(float, float, float); // glVertex3f
extern void (*mem_00925488)(void);                // glEnd
extern void (*mem_00925404)(void);                // glPopMatrix

// @name Primitives::CameraFrustum::vfunc_28
// @class Primitives::CameraFrustum
// @summary Draws the camera frustum as a GL_QUAD_STRIP between near and far rectangles unless mode == 2.
// @field CameraFrustum +0x20 void* field_0x20
void fn_0053C250(void* self, int mode) {
    if (mode == 2) {
        return;
    }

    void* obj = lift_field<void*>(self, 0x20);

    // Source values are fetched through the accessor in the same order as the original code.
    float a1 = *ext_005B11D0(obj, 1);
    float a2 = *ext_005B11D0(obj, 2);
    float ratio = static_cast<float>(static_cast<double>(a1) / static_cast<double>(a2));
    float near_depth = *ext_005B11D0(obj, 3);
    float far_depth = *ext_005B11D0(obj, 4);
    if (ratio <= 0.0f) {
        ratio = static_cast<float>(mem_00A44978);
    }

    double scaled = static_cast<double>(*ext_005B11D0(obj, 1)) * mem_00955AD8;
    float tan_scale = static_cast<float>(scaled / static_cast<double>(*ext_005B11D0(obj, 0)));

    float near_span = tan_scale * near_depth;
    float near_half_h = near_span / ratio;
    float far_span = tan_scale * far_depth;
    float far_half_h = far_span / ratio;

    float width_scale = *ext_005B11D0(obj, 5);
    float near_half_w = near_span * width_scale;
    width_scale = *ext_005B11D0(obj, 5);
    float far_half_w = far_span * width_scale;

    mem_00925414();
    mem_00925490(8); // GL_QUAD_STRIP
    mem_0092548C(-near_half_w, -near_half_h, -near_depth);
    mem_0092548C(-far_half_w, -far_half_h, -far_depth);
    mem_0092548C(near_half_w, -near_half_h, -near_depth);
    mem_0092548C(far_half_w, -far_half_h, -far_depth);
    mem_0092548C(near_half_w, near_half_h, -near_depth);
    mem_0092548C(far_half_w, far_half_h, -far_depth);
    mem_0092548C(-near_half_w, near_half_h, -near_depth);
    mem_0092548C(-far_half_w, far_half_h, -far_depth);
    mem_0092548C(-near_half_w, -near_half_h, -near_depth);
    mem_0092548C(-far_half_w, -far_half_h, -far_depth);
    mem_00925488();
    mem_00925404();
}
} // namespace lift_0053C250
