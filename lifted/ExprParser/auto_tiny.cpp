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

// [0x0066AE40] ExprParser::IntType::vfunc_1 (9 bytes)
// @name ExprParser::IntType::vfunc_1
// @class ExprParser::IntType
// @summary Reads the 32-bit signed integer that the pointer argument refers to and returns it as a floating-point value.
// @field ExprParser::IntType +0x00 int32_t field_0x00
extern "C" double __stdcall fn_0066AE40(void* self) {
    const int32_t value = *static_cast<const int32_t*>(self);
    return static_cast<double>(value);
}

// [0x0049AE80] ExprParser::PrimitiveProxyType<bool>::vfunc_3 (11 bytes)
// @name ExprParser::PrimitiveProxyType<bool>::vfunc_3
// @class ExprParser::PrimitiveProxyType<bool>
// @summary Stdcall (ret 4) accessor: follows the proxy's first-dword value pointer and returns the bool byte stored there.
// @field ExprParser::PrimitiveProxyType<bool> +0x00 const uint8_t* value_ptr
uint8_t __stdcall fn_0049AE80(const uint8_t* const* self) {
    const uint8_t* value = *self;
    return *value;
}
