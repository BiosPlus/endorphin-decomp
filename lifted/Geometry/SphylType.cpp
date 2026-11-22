// Lifted C++ translation unit: lifted/Geometry/SphylType.cpp
#include "lift_compat.h"
extern "C" uint32_t __thiscall ext_006484A0(uint32_t self, uint32_t arg);

// [0x005B1070] Geometry::SphylType::vfunc_2 (17 bytes)
// @name Geometry::SphylType::vfunc_2
// @class Geometry::SphylType
// @summary Auto-lifted identical-shape clone of 0x0066B0B0 (ExprParser::RealType::vfunc_8).
uint32_t __stdcall fn_005B1070(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_006484A0(first, second);
}
