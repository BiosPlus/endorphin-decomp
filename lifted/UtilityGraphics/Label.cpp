// Lifted C++ translation unit: lifted/UtilityGraphics/Label.cpp
#include "lift_compat.h"

// [0x00539340] UtilityGraphics::Label::vfunc_22 (101 bytes)
namespace lift_00539340 {
// Known callee 0x0054C800: glPrintFormatted (Formats a string with vsprintf and renders it using OpenGL display lists)
extern void ext_0054C800(const char* fmt, ...);
// OpenGL32 import slots (IAT) used by the original call sites
extern int mem_009254A8;   // glColor4fv
extern int mem_00925414;   // glPushMatrix
extern int mem_009254A0;   // glRasterPos2f
extern int mem_00925404;   // glPopMatrix
extern float mem_00954350; // 0.02f

typedef void(__stdcall* GlColor4fvFn)(const float*);
typedef void(__stdcall* GlNoArgFn)(void);
typedef void(__stdcall* GlRasterPos2fFn)(float, float);
typedef void(__thiscall* VirtualNoArgFn)(void*);

// @name UtilityGraphics::Label::vfunc_22
// @class UtilityGraphics::Label
// @summary Draws the label: if enabled and mode != 2, sets the color, pushes the matrix, runs the attached object's vmethod +0x2C, draws the text at raster position (0.02, 0) using the format string at +0x14, then pops the matrix.
// @field UtilityGraphics::Label +0x0C BYTE field_0x0C
// @field UtilityGraphics::Label +0x14 DWORD field_0x14
// @field UtilityGraphics::Label +0x18 DWORD field_0x18
// @field UtilityGraphics::Label +0x1C DWORD field_0x1C
void fn_00539340(void* self, DWORD mode) {
    if (lift_field<BYTE>(self, 0x0C) == 0) {
        return;
    }
    if (mode == 2) {
        return;
    }

    DWORD colorPtr = lift_field<DWORD>(self, 0x18);
    if (colorPtr != 0) {
        const float* color = reinterpret_cast<const float*>(static_cast<uintptr_t>(colorPtr) + 8);
        (*reinterpret_cast<GlColor4fvFn*>(&mem_009254A8))(color);
    }

    (*reinterpret_cast<GlNoArgFn*>(&mem_00925414))();

    DWORD objPtr = lift_field<DWORD>(self, 0x1C);
    if (objPtr != 0) {
        void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(objPtr));
        void** vtbl = *reinterpret_cast<void***>(obj);
        // vmethod at vtable offset 0x2C (index 11)
        VirtualNoArgFn method = reinterpret_cast<VirtualNoArgFn>(vtbl[11]);
        method(obj);
    }

    (*reinterpret_cast<GlRasterPos2fFn*>(&mem_009254A0))(mem_00954350, 0.0f);

    DWORD fmtPtr = lift_field<DWORD>(self, 0x14);
    ext_0054C800(reinterpret_cast<const char*>(static_cast<uintptr_t>(fmtPtr)));

    (*reinterpret_cast<GlNoArgFn*>(&mem_00925404))();
}
} // namespace lift_00539340
