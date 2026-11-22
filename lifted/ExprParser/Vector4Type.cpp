// Lifted C++ translation unit: lifted/ExprParser/Vector4Type.cpp
#include "lift_compat.h"
extern "C" void ext_00672150(void* self, const char* src, int flag);

// [0x006710B0] ExprParser::Vector4Type::vfunc_0 (35 bytes)
// @name ExprParser::Vector4Type::vfunc_0
// @class ExprParser::Vector4Type
// @summary Auto-lifted identical-shape clone of 0x00497900 (ExprParser::PrimitiveProxyType<std::string>::vfunc_0).
void* fn_006710B0(void* self, void* src) {
    const char* s = *static_cast<const char* const*>(src);
    ext_00672150(self, s, 0);
    return self;
}
