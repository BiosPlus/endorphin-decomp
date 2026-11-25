// Lifted C++ translation unit: lifted/UtilityGraphics/StippledLine.cpp
#include "lift_compat.h"

// [0x00538E90] UtilityGraphics::StippledLine::vfunc_22 (68 bytes)
namespace lift_00538E90 {
// Known callee 0x00538E40: UtilityGraphics::Line::vfunc_22 (Draws a GL_LINES segment from the origin to (0, 0, field_0x14).)
// The caller pushes one stack argument before the call, so it is forwarded here.
extern void ext_00538E40(void* self, int arg);

// OpenGL 1.1 entry points (WINAPI / stdcall on Win32).
extern void __stdcall glPushAttrib(GLbitfield mask);
extern void __stdcall glPopAttrib(void);
extern void __stdcall glLineStipple(GLint factor, GLushort pattern);
extern void __stdcall glEnable(GLenum cap);
extern void __stdcall glDisable(GLenum cap);

static constexpr GLbitfield kGL_LINE_BIT     = 0x00000004u; // GL_LINE_BIT
static constexpr GLenum     kGL_LINE_STIPPLE = 0x00000B24u; // GL_LINE_STIPPLE
static constexpr GLint      kStippleFactor   = 2;
static constexpr GLushort   kStipplePattern  = 0xAAAAu;

// @name UtilityGraphics::StippledLine::vfunc_22
// @class UtilityGraphics::StippledLine
// @summary Draws the base line segment with a dotted line stipple (GL_LINE_STIPPLE, factor 2, pattern 0xAAAA), restoring GL line state afterwards.
void fn_00538E90(void* self, int arg) {
    glPushAttrib(kGL_LINE_BIT);
    glLineStipple(kStippleFactor, kStipplePattern);
    glEnable(kGL_LINE_STIPPLE);
    ext_00538E40(self, arg);
    glDisable(kGL_LINE_STIPPLE);
    glPopAttrib();
}
} // namespace lift_00538E90
