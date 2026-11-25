// Lifted C++ translation unit: lifted/UtilityGraphics/Label.cpp
#include "lift_compat.h"

// [0x00539340] UtilityGraphics::Label::vfunc_22 (101 bytes)
namespace lift_00539340 {
// Imported OpenGL entry points (resolved via OPENGL32.dll at runtime).
extern void ext_glColor4fv(const GLfloat* v);
extern void ext_glPushMatrix(void);
extern void ext_glRasterPos2f(GLfloat x, GLfloat y);
extern void ext_glPopMatrix(void);

// Known callee 0x0054C800: drawFormattedBitmapText (printf-style formatting into a 256-byte buffer, then draws it).
extern void ext_0054C800(const char* fmt, ...);

// @name UtilityGraphics::Label::vfunc_22
// @class UtilityGraphics::Label
// @summary Draws the label text at a fixed raster position inside a push/pop matrix, optionally setting a color and invoking a child's virtual slot 11 first.
// @field UtilityGraphics::Label +0x0C BYTE field_0x0C
// @field UtilityGraphics::Label +0x14 DWORD field_0x14
// @field UtilityGraphics::Label +0x18 DWORD field_0x18
// @field UtilityGraphics::Label +0x1C DWORD field_0x1C
void fn_00539340(void* self, int mode) {
    // Gate: field_0x0C must be non-zero, and mode must not be 2.
    if (lift_field<BYTE>(self, 0x0C) == 0) {
        return;
    }
    if (mode == 2) {
        return;
    }

    // Optional color: pointer at +0x18, RGBA floats located at +8 of the pointee.
    const DWORD colorAddr = lift_field<DWORD>(self, 0x18);
    if (colorAddr != 0) {
        ext_glColor4fv(reinterpret_cast<const GLfloat*>(static_cast<uintptr_t>(colorAddr) + 8));
    }

    ext_glPushMatrix();

    // Optional child object at +0x1C: invoke its virtual slot at byte offset 0x2C (index 11).
    const DWORD childAddr = lift_field<DWORD>(self, 0x1C);
    if (childAddr != 0) {
        void* child = reinterpret_cast<void*>(static_cast<uintptr_t>(childAddr));
        void** vtable = *reinterpret_cast<void***>(child);
        using VirtualFn = void (*)(void*);
        reinterpret_cast<VirtualFn>(vtable[11])(child);
    }

    // Raster position (0.02f, 0.0f); 0.02f is the float constant at 0x00954350.
    ext_glRasterPos2f(0.02f, 0.0f);

    // Text: the pointer stored at +0x14 is passed as the format string.
    const DWORD textAddr = lift_field<DWORD>(self, 0x14);
    ext_0054C800(reinterpret_cast<const char*>(static_cast<uintptr_t>(textAddr)));

    ext_glPopMatrix();
}
} // namespace lift_00539340
