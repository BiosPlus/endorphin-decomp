// Lifted C++ translation unit: lifted/UtilityGraphics/Line.cpp
#include "lift_compat.h"

// [0x00538E40]
namespace lift_00538E40 {
// @name UtilityGraphics::Line::vfunc_22
// @class UtilityGraphics::Line
// @summary Renders a line along the Z axis from the origin to field_0x14 using OpenGL.
// @field UtilityGraphics::Line +0x14 float field_0x14


extern void (__stdcall* mem_00925490)(uint32_t mode);
extern void (__stdcall* mem_0092548C)(float x, float y, float z);
extern void (__stdcall* mem_00925488)();

void __thiscall fn_00538E40(void* this_ptr, uint32_t /*unused*/) {
    mem_00925490(1);
    mem_0092548C(0.0f, 0.0f, 0.0f);
    mem_0092548C(0.0f, 0.0f, lift_field<float>(this_ptr, 0x14));
    mem_00925488();
}
} // namespace lift_00538E40
