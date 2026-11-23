// Lifted C++ translation unit: lifted/Primitives/Sphyl.cpp
#include "lift_compat.h"
// Known callee 0x0053A610: Primitives::Plane::vfunc_25 (If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30; then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.)
extern "C" void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
// std::string::operator[](size_t) const (MSVCP80), reached through the IAT slot mem_00924FFC whose .rdata value is 0x0062B156.
extern "C" const char& ext_0062B156(const void* self, uint32_t pos);

// [0x0053DA40] Primitives::Sphyl::vfunc_25 (90 bytes)
// @name Primitives::Sphyl::vfunc_25
// @class Primitives::Sphyl
// @summary Forwards three args to Plane::vfunc_25, sets self+0x1C bit 0x40, copies three dwords and the first char of the string at arg2+0x9C into self.
// @field Primitives::Sphyl +0x1C uint32_t field_0x1C
// @field Primitives::Sphyl +0x3C uint32_t field_0x3C
// @field Primitives::Sphyl +0x40 uint32_t field_0x40
// @field Primitives::Sphyl +0x44 uint32_t field_0x44
// @field Primitives::Sphyl +0x48 uint8_t field_0x48
// Source object (arg2) reads, not Sphyl fields: +0x84 uint32, +0x88 uint32, +0x8C uint32, +0x9C std::string.
void fn_0053DA40(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    void* const src = reinterpret_cast<void*>(static_cast<uintptr_t>(arg2));

    ext_0053A610(self, arg1, arg2, arg3);

    uint32_t& flags = lift_field<uint32_t>(self, 0x1C);
    if ((flags & 0x40u) == 0) {
        flags ^= 0x40u;
    }

    lift_field<uint32_t>(self, 0x3C) = lift_field<uint32_t>(src, 0x88);
    lift_field<uint32_t>(self, 0x40) = lift_field<uint32_t>(src, 0x8C);
    lift_field<uint32_t>(self, 0x44) = lift_field<uint32_t>(src, 0x84);

    const char& first = ext_0062B156(static_cast<const uint8_t*>(src) + 0x9C, 0);
    lift_field<uint8_t>(self, 0x48) = static_cast<uint8_t>(first);
}

// [0x0053B8A0] Primitives::Sphyl::vfunc_28 (278 bytes)
namespace lift_0053B8A0 {
// OpenGL / GLU entry points imported by the original (glPushMatrix, glPopMatrix,
// glTranslatef, gluSphere, gluCylinder, gluQuadricOrientation). Declared here so
// the lift compiles without <GL/gl.h> or <GL/glu.h>.
struct GLUquadric;
extern void glPushMatrix();
extern void glPopMatrix();
extern void glTranslatef(GLfloat x, GLfloat y, GLfloat z);
extern void gluSphere(GLUquadric* qobj, GLdouble radius, GLint slices, GLint stacks);
extern void gluCylinder(GLUquadric* qobj, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks);
extern void gluQuadricOrientation(GLUquadric* qobj, GLenum orientation);

// Accessor at 0x005B11D0 (__thiscall, one stack arg): given the sub-object at +0x20 and an index, returns a float* into it.
extern float* ext_005B11D0(void* self, int index);

// @name Primitives::Sphyl::vfunc_28
// @class Primitives::Sphyl
// @summary Draws the sphyl as a GLU sphere, a GLU cylinder body and a second sphere, with a Z-offset translation between them.
// @field Primitives::Sphyl +0x20 void* field_0x20
// @field Primitives::Sphyl +0x3C uint32_t field_0x3C
// @field Primitives::Sphyl +0x40 uint32_t field_0x40
// @field Primitives::Sphyl +0x44 uint32_t field_0x44
// @field Primitives::Sphyl +0x4C GLUquadric* field_0x4C
void fn_0053B8A0(void* self) {
    constexpr GLenum GLU_OUTSIDE = 100020; // 0x186B4

    void* const accessor = lift_field<void*>(self, 0x20);
    GLUquadric* const quadric = lift_field<GLUquadric*>(self, 0x4C);
    const GLint slices = static_cast<GLint>(lift_field<uint32_t>(self, 0x3C));
    const GLint sphere_stacks = static_cast<GLint>(lift_field<uint32_t>(self, 0x44));
    const GLint cylinder_stacks = static_cast<GLint>(lift_field<uint32_t>(self, 0x40));

    glPushMatrix();

    // Translate back along Z by half of the value at accessor[1].
    const float half_back = *ext_005B11D0(accessor, 1);
    glTranslatef(0.0f, 0.0f, static_cast<GLfloat>(-half_back * 0.5));

    // First sphere, radius from accessor[0].
    const float sphere_radius = *ext_005B11D0(accessor, 0);
    gluSphere(quadric, static_cast<GLdouble>(sphere_radius), slices, sphere_stacks);
    gluQuadricOrientation(quadric, GLU_OUTSIDE);

    // Cylinder: base/top/height from accessor values (fetched in call order, read afterwards).
    const float* const height_src = ext_005B11D0(accessor, 1);
    const float* const top_src = ext_005B11D0(accessor, 0);
    const float* const base_src = ext_005B11D0(accessor, 0);
    gluCylinder(quadric,
                static_cast<GLdouble>(*base_src),
                static_cast<GLdouble>(*top_src),
                static_cast<GLdouble>(*height_src),
                slices, cylinder_stacks);

    // Translate forward by accessor[1], then second sphere with radius accessor[0].
    const float offset = *ext_005B11D0(accessor, 1);
    glTranslatef(0.0f, 0.0f, offset);

    const float end_radius = *ext_005B11D0(accessor, 0);
    gluSphere(quadric, static_cast<GLdouble>(end_radius), slices, sphere_stacks);

    glPopMatrix();
}
} // namespace lift_0053B8A0
