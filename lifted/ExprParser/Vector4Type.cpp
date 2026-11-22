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

// [0x0066B860] ExprParser::Vector4Type::vfunc_43 (57 bytes)
// @name ExprParser::Vector4Type::vfunc_43
// @class ExprParser::Vector4Type
// @summary Component-wise add: *dst += src, where src is obtained by calling vtable slot 6 on the source's inner object; stdcall, cleans 8 bytes.
// @field Unknown +0x00 float* field_0x00            (arg1: dereferenced to get dst Vector4*)
// @field Unknown +0x04 void* field_0x04             (arg2: inner object pointer whose vtable slot 6 yields src)
// @field Vector4 +0x00 float field_0x00             (dst component 0)
// @field Vector4 +0x04 float field_0x04             (dst component 1)
// @field Vector4 +0x08 float field_0x08             (dst component 2)
// @field Vector4 +0x0C float field_0x0C             (dst component 3)
void fn_0066B860(void* dstHolder, void* srcHolder) {
    // arg2 -> inner object (+0x04); its vtable slot 6 (+0x18) returns src Vector4*
    void* inner = lift_field<void*>(srcHolder, 0x04);
    using GetVecFn = float* (__thiscall*)(void* self, void* arg);
    GetVecFn getVec = reinterpret_cast<GetVecFn>(
        lift_field<void**>(inner, 0x00)[0x18 / sizeof(void*)]);
    float* src = getVec(inner, srcHolder);

    // arg1 -> dst Vector4*
    float* dst = lift_field<float*>(dstHolder, 0x00);

    dst[0] += src[0];
    dst[1] += src[1];
    dst[2] += src[2];
    dst[3] += src[3];
}
