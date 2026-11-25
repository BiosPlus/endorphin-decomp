// Lifted C++ translation unit: lifted/UtilityGraphics/Line.cpp
#include "lift_compat.h"

// [0x00538E40] UtilityGraphics::Line::vfunc_22 (68 bytes)
namespace lift_00538E40 {
// Imported OpenGL entry points (resolved via OPENGL32.dll at runtime).
extern void ext_glBegin(GLenum mode);
extern void ext_glVertex3f(GLfloat x, GLfloat y, GLfloat z);
extern void ext_glEnd(void);

// GL_LINES
static constexpr GLenum kGL_LINES = 0x0001;

// @name UtilityGraphics::Line::vfunc_22
// @class UtilityGraphics::Line
// @summary Draws a GL_LINES segment from the origin to (0, 0, field_0x14).
// @field UtilityGraphics::Line +0x14 float field_0x14
void fn_00538E40(void* self) {
    ext_glBegin(kGL_LINES);
    ext_glVertex3f(0.0f, 0.0f, 0.0f);
    const GLfloat z = lift_field<GLfloat>(self, 0x14);
    ext_glVertex3f(0.0f, 0.0f, z);
    ext_glEnd();
}
} // namespace lift_00538E40
