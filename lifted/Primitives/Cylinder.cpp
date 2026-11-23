// Lifted C++ translation unit: lifted/Primitives/Cylinder.cpp
#include "lift_compat.h"
#include <string>

// [0x0053DAA0]
// @name Primitives::Cylinder::vfunc_25
// @class Primitives::Cylinder
// @summary Forwards three args to Plane::vfunc_25, sets flag 0x40 at +0x1c, copies two fields from arg2 and the first char of its string at +0x9c into self.
// @field Primitives::Cylinder +0x1c uint32_t field_0x1c
// @field Primitives::Cylinder +0x3c uint32_t field_0x3c
// @field Primitives::Cylinder +0x40 uint32_t field_0x40
// @field Primitives::Cylinder +0x44 uint8_t field_0x44
// @field Primitives::Cylinder +0x45 uint8_t field_0x45
// @field Unknown +0x88 uint32_t field_0x88
// @field Unknown +0x8c uint32_t field_0x8c
// @field Unknown +0x9c std::string field_0x9c

void ext_0053A610(void* self, uint32_t a1, uint32_t a2, uint32_t a3);

void fn_0053DAA0(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    ext_0053A610(self, a1, a2, a3);

    uint32_t& flags = lift_field<uint32_t>(self, 0x1c);
    if ((flags & 0x40) == 0) {
        flags ^= 0x40;
    }

    uint8_t* other = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(a2));
    lift_field<uint32_t>(self, 0x3c) = lift_field<uint32_t>(other, 0x88);
    lift_field<uint32_t>(self, 0x40) = lift_field<uint32_t>(other, 0x8c);
    lift_field<uint8_t>(self, 0x44) = 1;
    lift_field<uint8_t>(self, 0x45) = lift_field<std::string>(other, 0x9c)[0];
}

// [0x0053BA60] Primitives::Cylinder::vfunc_28 (308 bytes)
namespace lift_0053BA60 {
// Known callee 0x005B11D0: sub_005B11D0 (thiscall on the object at +0x20, one stack arg; returns float* into that object)
extern float* ext_005B11D0(void* obj, int flag);
// Known callee 0x0063E01E: thunk_GLU32_gluQuadricOrientation (IAT jump thunk forwarding to GLU32!gluQuadricOrientation.)
extern void ext_0063E01E(void* quad, GLenum orientation);
// Known callee 0x0063E024: thunk_GLU32_gluDisk (IAT jump thunk forwarding to GLU32!gluDisk.)
extern void ext_0063E024(void* quad, GLdouble inner, GLdouble outer, GLint slices, GLint loops);
// Known callee 0x0063E02A: thunk_GLU32_gluCylinder (IAT jump thunk forwarding to GLU32!gluCylinder.)
extern void ext_0063E02A(void* quad, GLdouble base, GLdouble top, GLdouble height, GLint slices, GLint stacks);

// IAT slots (OPENGL32 imports) and rdata constant used by this function.
extern void (*mem_00925414)(void);                        // OPENGL32!glPushMatrix
extern void (*mem_009253D0)(GLfloat, GLfloat, GLfloat);   // OPENGL32!glTranslatef
extern void (*mem_00925404)(void);                        // OPENGL32!glPopMatrix
extern const double mem_00993828;                         // .rdata double 0.5

// @name Primitives::Cylinder::vfunc_28
// @class Primitives::Cylinder
// @summary Draws the cylinder via GLU (translated by half its height, optional end caps when +0x44 is set), wrapped in a matrix push/pop.
// @field Primitives::Cylinder +0x20 void* field_0x20
// @field Primitives::Cylinder +0x3c uint32_t field_0x3c
// @field Primitives::Cylinder +0x40 uint32_t field_0x40
// @field Primitives::Cylinder +0x44 uint8_t field_0x44
// @field Primitives::Cylinder +0x48 void* field_0x48
void fn_0053BA60(void* self, uint32_t stack_arg) {
    (void)stack_arg; // the 'ret 4' implies one stack argument, which the body never reads

    void* const part = lift_field<void*>(self, 0x20);
    const uint8_t caps = lift_field<uint8_t>(self, 0x44);
    void* const quad = lift_field<void*>(self, 0x48);
    const GLint slices = static_cast<GLint>(lift_field<uint32_t>(self, 0x3c));
    const GLint stacks = static_cast<GLint>(lift_field<uint32_t>(self, 0x40));

    mem_00925414(); // glPushMatrix

    // Translate by -height/2 along Z so the cylinder is centred.
    {
        const double h = static_cast<double>(*ext_005B11D0(part, 1));
        const double half = mem_00993828;
        mem_009253D0(0.0f, 0.0f, static_cast<GLfloat>(-h * half));
    }

    if (caps != 0) {
        ext_0063E01E(quad, 100021); // GLU_INSIDE
        const double r = static_cast<double>(*ext_005B11D0(part, 0));
        ext_0063E024(quad, 0.0, r, slices, 1);
        ext_0063E01E(quad, 100020); // GLU_OUTSIDE
    }

    // Fetch height (flag 1), then top and base radii (flag 0), in that call order.
    float* const height_p = ext_005B11D0(part, 1);
    float* const top_p = ext_005B11D0(part, 0);
    float* const base_p = ext_005B11D0(part, 0);
    ext_0063E02A(quad,
                 static_cast<GLdouble>(*base_p),
                 static_cast<GLdouble>(*top_p),
                 static_cast<GLdouble>(*height_p),
                 slices,
                 stacks);

    if (caps != 0) {
        // Translate to the top end (+height) and draw the top cap.
        const double h = static_cast<double>(*ext_005B11D0(part, 1));
        mem_009253D0(0.0f, 0.0f, static_cast<GLfloat>(h));
        const double r = static_cast<double>(*ext_005B11D0(part, 0));
        ext_0063E024(quad, 0.0, r, slices, 1);
    }

    mem_00925404(); // glPopMatrix
}
} // namespace lift_0053BA60
