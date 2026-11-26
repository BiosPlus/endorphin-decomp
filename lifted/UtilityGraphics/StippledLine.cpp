// Lifted C++ translation unit: lifted/UtilityGraphics/StippledLine.cpp
#include "lift_compat.h"

// [0x00538E90]
namespace lift_00538E90 {
extern void (__stdcall *mem_0092546C)(uint32_t mask);       // glPushAttrib
extern void (__stdcall *mem_00925494)(int32_t factor, uint16_t pattern); // glLineStipple
extern void (__stdcall *mem_00925418)(uint32_t cap);        // glEnable
extern void (__stdcall *mem_00925438)(uint32_t cap);        // glDisable
extern void (__stdcall *mem_0092552C)(void);                // glPopAttrib

extern void __thiscall ext_00538E40(void* this_ptr, uint32_t arg); // UtilityGraphics::Line::vfunc_22

// @name UtilityGraphics::StippledLine::vfunc_22
// @class UtilityGraphics::StippledLine
// @summary Enables line stippling, delegates to UtilityGraphics::Line::vfunc_22, and restores OpenGL attributes.
void __thiscall fn_00538E90(void* this_ptr, uint32_t arg) {
    mem_0092546C(0x4);
    mem_00925494(2, 0xaaaa);
    mem_00925418(0xb24);
    ext_00538E40(this_ptr, arg);
    mem_00925438(0xb24);
    mem_0092552C();
}
} // namespace lift_00538E90
