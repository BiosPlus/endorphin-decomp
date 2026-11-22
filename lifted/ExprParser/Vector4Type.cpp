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

// [0x0066B8A0]
// @name ExprParser::Vector4Type::vfunc_44
// @class ExprParser::Vector4Type
// @summary Component-wise subtracts the float[4] value returned by the source operand's virtual getter (vtable slot 6) from the destination float[4] in place.
// @field ExprParser::Vector4Type +0x04 void* field_0x04 (source operand; its vtable slot 6 returns float* to 4 floats)
void fn_0066B8A0(void* dst, void* self) {
    // self->field_0x04 is the inner operand; its vtable slot 6 (offset 0x18) is called with self as the argument.
    void* inner = lift_field<void*>(self, 0x04);
    using GetVec4Fn = float* (*)(void* obj, void* arg);
    void** vtbl = *reinterpret_cast<void***>(inner);
    GetVec4Fn getVec4 = reinterpret_cast<GetVec4Fn>(vtbl[6]);
    float* rhs = getVec4(inner, self);

    // dst points at a holder whose first dword is the float[4] destination.
    float* lhs = lift_field<float*>(dst, 0x00);
    lhs[0] = lhs[0] - rhs[0];
    lhs[1] = lhs[1] - rhs[1];
    lhs[2] = lhs[2] - rhs[2];
    lhs[3] = lhs[3] - rhs[3];
}

// [0x0066B7F0] ExprParser::Vector4Type::vfunc_42 (108 bytes)
// @name ExprParser::Vector4Type::vfunc_42
// @class ExprParser::Vector4Type
// @summary Compares two Vector4 operands (each resolved via vtable slot 6 to float[4]) component-wise for exact equality; returns 1 if all four match, else 0.
// @field ExprParser::Vector4Type +0x04 void* field_0x04
int32_t __stdcall fn_0066B7F0(void* unused_arg, void* rhs_operand) {
    (void)unused_arg;

    // Slot 6 (byte offset 0x18) of an operand's vtable yields a float* to 4 floats.
    using Slot6Fn = float* (__thiscall*)(void* self, void* operand);

    auto resolve = [](void* operand) -> float* {
        void* source = *reinterpret_cast<void**>(static_cast<uint8_t*>(operand) + 0x04);
        void** vtbl = *reinterpret_cast<void***>(source);
        auto fn = reinterpret_cast<Slot6Fn>(vtbl[6]);
        return fn(source, operand);
    };

    float* lhs = resolve(rhs_operand);
    float* rhs = resolve(rhs_operand);

    for (int i = 0; i < 4; ++i) {
        if (lhs[i] != rhs[i]) {
            return 0;
        }
    }
    return 1;
}
