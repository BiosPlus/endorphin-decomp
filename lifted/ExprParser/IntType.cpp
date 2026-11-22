// Lifted C++ translation unit: lifted/ExprParser/IntType.cpp
#include "lift_compat.h"
extern "C" void __thiscall ext_006720C0(void* self, int32_t value);

// [0x0066AE10] ExprParser::IntType::vfunc_0 (35 bytes)
// @name ExprParser::IntType::vfunc_0
// @class ExprParser::IntType
// @summary Loads the int32 stored at the second stack argument, passes it to sub_006720C0 on the first argument, and returns the first argument (stdcall, ret 8).
// @field ExprParser::IntType +0x00 int32_t field_0x00
void* fn_0066AE10(void* target, const void* src) {
    const int32_t value = lift_field<int32_t>(src, 0x00);
    ext_006720C0(target, value);
    return target;
}
