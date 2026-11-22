// Lifted C++ translation unit: lifted/ExprParser/auto_tiny.cpp
#include "lift_compat.h"

// [0x0049C000] ExprParser::BoolType::vfunc_14 (9 bytes)
// @name ExprParser::BoolType::vfunc_14
// @class ExprParser::BoolType
// @summary Stdcall leaf (ret 4): takes one pointer argument and returns the 32-bit value stored at its first dword.
// @field ExprParser::BoolType +0x00 uint32_t first_dword
extern "C" uint32_t __stdcall fn_0049C000(const uint32_t* self) {
    return *self;
}

// [0x0066AD70] ExprParser::RealType::vfunc_1 (9 bytes)
// @name ExprParser::RealType::vfunc_1
// @class ExprParser::RealType
// @summary Returns the single-precision float stored at the pointed-to value slot (stdcall, one stack argument).
// @field ExprParser::RealType +0x00 float field_0x00
float __stdcall fn_0066AD70(void* self) {
    return lift_field<float>(self, 0x00);
}

// [0x0066AF00] ExprParser::BoolType::vfunc_3 (9 bytes)
// @name ExprParser::BoolType::vfunc_3
// @class ExprParser::BoolType
// @summary Reads the byte at the pointer passed as the single stack argument and returns it as the result (low byte of eax).
// (No BoolType field offsets are accessed; the only load is through the argument pointer at +0x0, whose pointee type is not recovered.)
uint8_t __stdcall fn_0066AF00(const uint8_t* value) {
    return *value;
}
