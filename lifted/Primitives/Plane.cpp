// Lifted C++ translation unit: lifted/Primitives/Plane.cpp
#include "lift_compat.h"
// Known callee 0x00661A80: sub_00661A80 (Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0065E440.)
// Called thiscall on the global object with one stack argument; returns a pointer.
extern "C" void* ext_00661A80(void* self, void* arg);
extern "C" void* mem_00AEE8A8;

// [0x0053A610] Primitives::Plane::vfunc_25 (55 bytes)
// @name Primitives::Plane::vfunc_25
// @class Primitives::Plane
// @summary If global mem_00AEE8A8 is set, stores ext_00661A80(global, self+0x14 or null) into +0x30; then sets +0x08 = arg3, +0x20 = 0, and +0x04 = 1.
// @field Primitives::Plane +0x04 uint8_t field_0x04
// @field Primitives::Plane +0x08 uint32_t field_0x08
// @field Primitives::Plane +0x20 uint32_t field_0x20
// @field Primitives::Plane +0x30 void* field_0x30
// arg1 and arg2 are unused by this body; the callee cleans them (ret 0xC).
void fn_0053A610(void* self, uint32_t /*arg1*/, uint32_t /*arg2*/, uint32_t arg3) {
    void* global = mem_00AEE8A8;
    if (global != nullptr) {
        void* subobject = (self != nullptr) ? reinterpret_cast<uint8_t*>(self) + 0x14 : nullptr;
        void* result = ext_00661A80(global, subobject);
        lift_field<void*>(self, 0x30) = result;
    }

    lift_field<uint32_t>(self, 0x08) = arg3;
    lift_field<uint32_t>(self, 0x20) = 0;
    lift_field<uint8_t>(self, 0x04) = 1;
}

// [0x0053B590] Primitives::Plane::vfunc_28 (277 bytes)
namespace lift_0053B590 {
// Callee: Primitives accessor; returns float* to element `index` of the object it is called on.
extern float* __thiscall ext_005B11D0(void* self, uint32_t index);

// OpenGL entry points, reached through IAT slots (OPENGL32!*).
extern void (__stdcall* mem_00925404)(void);                          // glPopMatrix
extern void (__stdcall* mem_00925414)(void);                          // glPushMatrix
extern void (__stdcall* mem_00925418)(GLenum cap);                    // glEnable
extern void (__stdcall* mem_00925438)(GLenum cap);                    // glDisable
extern void (__stdcall* mem_00925488)(void);                          // glEnd
extern void (__stdcall* mem_00925490)(GLenum mode);                   // glBegin
extern void (__stdcall* mem_0092548C)(GLfloat x, GLfloat y, GLfloat z); // glVertex3f
extern void (__stdcall* mem_009254AC)(GLfloat nx, GLfloat ny, GLfloat nz); // glNormal3f
extern void (__stdcall* mem_009254D4)(const GLfloat* uv);             // glTexCoord2fv
extern void (__stdcall* mem_009254D8)(GLdouble x, GLdouble y, GLdouble z); // glScaled

// Read-only .rdata texcoord pairs (2 x float each) used by glTexCoord2fv.
extern const float mem_00955610[2];
extern const float mem_00955618[2];
extern const float mem_00955620[2];
extern const float mem_00955628[2];

// GL_RESCALE_NORMAL (0x803A), passed to glEnable/glDisable.
constexpr GLenum kGlRescaleNormal = 0x803A;
// GL_QUADS
constexpr GLenum kGlQuads = 7;

// @name Primitives::Plane::vfunc_28
// @class Primitives::Plane
// @summary Draws a unit quad (-0.5..0.5 in X/Y, Z=0, normal +Z) under a scaled matrix, where the X/Y scale comes from float elements 0 and 2 of the object at +0x20, with rescale-normal enabled.
// @field Primitives::Plane +0x20 void* field_0x20
void fn_0053B590(void* self, uint32_t arg1) {
    (void)arg1; // ret 4: one stack argument, not read by the body

    mem_00925414();                       // glPushMatrix
    mem_00925418(kGlRescaleNormal);       // glEnable

    // Element 2 then element 0 of the object at +0x20.
    float* elem2 = ext_005B11D0(lift_field<void*>(self, 0x20), 2);
    float* elem0 = ext_005B11D0(lift_field<void*>(self, 0x20), 0);
    mem_009254D8(static_cast<GLdouble>(*elem0),
                 static_cast<GLdouble>(*elem2),
                 0.0);                    // glScaled

    mem_00925490(kGlQuads);               // glBegin(GL_QUADS)
    mem_009254AC(0.0f, 0.0f, 1.0f);       // glNormal3f
    mem_009254D4(mem_00955610);
    mem_0092548C(-0.5f, -0.5f, 0.0f);     // glVertex3f
    mem_009254D4(mem_00955618);
    mem_0092548C(0.5f, -0.5f, 0.0f);
    mem_009254D4(mem_00955620);
    mem_0092548C(0.5f, 0.5f, 0.0f);
    mem_009254D4(mem_00955628);
    mem_0092548C(-0.5f, 0.5f, 0.0f);
    mem_00925488();                       // glEnd

    mem_00925438(kGlRescaleNormal);       // glDisable
    mem_00925404();                       // glPopMatrix
}
} // namespace lift_0053B590
