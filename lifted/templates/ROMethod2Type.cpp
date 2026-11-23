// Lifted C++ translation unit: lifted/templates/ROMethod2Type.cpp
#include "lift_compat.h"
extern "C" void ext_00671F30(uint32_t);

// [0x006922F0]
// @name ExprParser::ROMethod2Type::vfunc_49
// @class ExprParser::ROMethod2Type
// @summary Forwards arg1 to ext_00671F30 (one stack argument, caller-cleaned) and returns arg1 unchanged.

uint32_t __stdcall fn_006922F0(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    (void)arg2;
    (void)arg3;
    (void)arg4;
    ext_00671F30(arg1);
    return arg1;
}
