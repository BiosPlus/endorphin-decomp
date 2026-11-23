// Lifted C++ translation unit: lifted/ExprParser/Vector4Type.cpp
#include "lift_compat.h"
extern "C" void ext_00672150(void* self, const char* src, int flag);
extern "C" void ext_0053B470();

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

// [0x0066B8E0] ExprParser::Vector4Type::vfunc_45 (167 bytes)
// @name ExprParser::Vector4Type::vfunc_45
// @class ExprParser::Vector4Type
// @summary Dot-products the ctx float4 with the source operand's float4 and pushes it via vslot 7; otherwise evaluates the source scalar and stores the transformed vector into *arg1.
// @field ExprParser::Vector4Type +0x00 float* field_0x00
// @field ExprParser::Vector4Type +0x04 void* field_0x04
void fn_0066B8E0(void* ecx_unused, void* arg1, void* ctx) {
    (void)ecx_unused;

    void* src = lift_field<void*>(ctx, 0x04);
    void** srcVt = *reinterpret_cast<void***>(src);

    using BoolFn  = bool (*)(void*, void*);
    using FloatFn = float (*)(void*, void*);
    using Vec4Fn  = float* (*)(void*, void*);
    using SetFn   = void (*)(void*, void*, float);
    using ExtFn   = float* (*)(void*, float*, float);

    // Slot 0x3C: predicate on the source operand.
    if (reinterpret_cast<BoolFn>(srcVt[0x3c / 4])(src, ctx)) {
        // Slot 0x18: source operand's float4 (4 floats).
        float* d = reinterpret_cast<Vec4Fn>(srcVt[0x18 / 4])(src, ctx);
        float* s = lift_field<float*>(ctx, 0x00);
        float dot = s[1] * d[1];
        dot += s[0] * d[0];
        dot += s[2] * d[2];
        dot += s[3] * d[3];
        // Slot 0x1C: consume the dot product.
        reinterpret_cast<SetFn>(srcVt[0x1c / 4])(src, ctx, dot);
    } else {
        // Slot 0x04: scalar from the source operand.
        float f = reinterpret_cast<FloatFn>(srcVt[0x04 / 4])(src, ctx);
        float* dst = *reinterpret_cast<float**>(arg1);
        float tmp[4];
        float* r = reinterpret_cast<ExtFn>(&ext_0053B470)(dst, tmp, f);
        for (int i = 0; i < 4; ++i) {
            dst[i] = r[i];
        }
    }
}

// [0x0066D190] ExprParser::Vector4Type::vfunc_50 (49 bytes)
namespace lift_0066D190 {
extern void ext_004D02B0(void* self, float* dst, const float* src, const char* name);
extern const char mem_0098B18C[];

// @name ExprParser::Vector4Type::vfunc_50
// @class ExprParser::Vector4Type
// @summary Fetches float[4] from the source operand and the destination operand via their vtable slot 6, then forwards both plus the "Vector4Value" name to ext_004D02B0; stdcall, cleans 16 bytes.
// @field ExprParser::Vector4Type +0x04 void* field_0x04 (source operand holder; inner object's vtable slot 6 returns const float* to 4 floats)
// @field Unknown +0x04 void* field_0x04 (destination operand holder; inner object's vtable slot 6 returns float* to 4 floats)
void fn_0066D190(void* dstHolder, void* srcHolder, void* c, void* d) {
    (void)d;

    // Source: srcHolder->field_0x04 is the inner operand; its vtable slot 6 (+0x18)
    // is called with srcHolder as the argument.
    void* srcInner = lift_field<void*>(srcHolder, 0x04);
    using GetVec4Fn = float* (*)(void* obj, void* arg);
    GetVec4Fn getSrc = reinterpret_cast<GetVec4Fn>(
        lift_field<void**>(srcInner, 0x00)[0x18 / sizeof(void*)]);
    float* src = getSrc(srcInner, srcHolder);

    // Destination: dstHolder->field_0x04 is the inner operand; same slot-6 protocol.
    void* dstInner = lift_field<void*>(dstHolder, 0x04);
    GetVec4Fn getDst = reinterpret_cast<GetVec4Fn>(
        lift_field<void**>(dstInner, 0x00)[0x18 / sizeof(void*)]);
    float* dst = getDst(dstInner, dstHolder);

    // Hand off to the helper; the original passes the address of the third
    // argument slot as its implicit `this`.
    ext_004D02B0(&c, dst, src, mem_0098B18C);
}
} // namespace lift_0066D190

// [0x0066B990]
namespace lift_0066B990 {
// @name ExprParser::Vector4Type::vfunc_46
// @class ExprParser::Vector4Type
// @summary Fetches the source operand's 4-float value (inner object vfunc 6, then sub_00547820) and copies it into this->data.
// @field ExprParser::Vector4Type +0x00 float* data

// sub_00547820: thiscall (ecx = dst float*), stack args: &temp, source value; returns const float* to 4 floats.
extern float* ext_00547820(float* self, float* temp, const float* value);

// Stdcall: arg1 = this (Vector4Type*), arg2 = source operand; ret 8.
// Source operand field +0x04 is the inner object whose vtable slot 6 (+0x18) yields a const float*.
void __stdcall ExprParser_Vector4Type_vfunc_46(void* self, void* src) {
    void* inner = lift_field<void*>(src, 0x04);

    void** vtbl = *reinterpret_cast<void***>(inner);
    using Slot6Fn = const float* (*)(void* self, void* arg);
    const float* value = reinterpret_cast<Slot6Fn>(vtbl[6])(inner, src);

    float* dst = lift_field<float*>(self, 0x00);
    float temp[4];
    const float* result = ext_00547820(dst, temp, value);

    for (int i = 0; i < 4; ++i) {
        dst[i] = result[i];
    }
}
} // namespace lift_0066B990
