// Lifted C++ translation unit: lifted/UtilityGraphics/Arrow.cpp
#include "lift_compat.h"

// [0x00538F20]
namespace lift_00538F20 {
// @name UtilityGraphics::Arrow::vfunc_22
// @class UtilityGraphics::Arrow
// @summary Draws the arrow shaft via Line::vfunc_22 and renders a cone tip at 0.8 * length using gluCylinder.
// @field UtilityGraphics::Arrow +0x14 float field_0x14
// @field UtilityGraphics::Arrow +0x18 void* field_0x18


extern void __thiscall ext_00538E40(void* self, uint32_t arg0);
extern void __stdcall ext_0063E02A(void* quad, double base, double top, double height, int32_t slices, int32_t stacks);

extern void (__stdcall *mem_00925414)();
extern void (__stdcall *mem_009253D0)(float x, float y, float z);
extern void (__stdcall *mem_00925404)();
extern double mem_00996D08;
extern double mem_00996CB8;
extern double mem_009520D8;

void __thiscall fn_00538F20(void* self, uint32_t arg0) {
    ext_00538E40(self, arg0);

    mem_00925414();

    float length = *(float*)((uint8_t*)self + 0x14);
    float offset_z = (float)((double)length * mem_00996D08);
    mem_009253D0(0.0f, 0.0f, offset_z);

    void* quad = *(void**)((uint8_t*)self + 0x18);
    double base_radius = (double)length * mem_009520D8;
    double height = (double)length * mem_00996CB8;
    ext_0063E02A(quad, base_radius, 0.0, height, 8, 1);

    mem_00925404();
}
} // namespace lift_00538F20
