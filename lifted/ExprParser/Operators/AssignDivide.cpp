// Lifted C++ translation unit: lifted/ExprParser/Operators/AssignDivide.cpp
#include "lift_compat.h"

// [0x006A10F0] ExprParser::Operators::AssignDivide::vfunc_3 (324 bytes)
namespace lift_006A10F0 {
// Virtual dispatch helper. byteOffset is the 32-bit vtable offset seen in the disassembly
// (e.g. 0x30 -> slot 12); it is converted to a slot index so the helper is valid for any pointer width.
template <typename R, typename... Args>
static R vcall(void* obj, uintptr_t byteOffset, Args... args) {
    void* const* vtable = *reinterpret_cast<void* const* const*>(obj);
    using Fn = R (*)(void*, Args...);
    return reinterpret_cast<Fn>(vtable[byteOffset / 4])(obj, args...);
}

// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (Self-assignment guarded copy: if other differs, releases the current field_0x04 via vtable slot 0x78, copies other's field_0x04, then sets field_0x00 to the value written by other's field_0x04 vtable slot 0x70 (0 when that pointer is null). Returns self.)
// Signature: void* __thiscall fn_0041CF50(void* self, void* other)
extern void* __thiscall ext_0041CF50(void* self, void* other);
// Known callee 0x004ECB40: sub_004ECB40 (247B). Inferred: thiscall, one out-pointer argument, returns a token pointer.
extern void* __thiscall ext_004ECB40(void* self, void* out);
// Known callee 0x00672040: sub_00672040 (Auto-lifted identical-shape clone of 0x0052EF20 (CompoundRenderable::vfunc_7).)
// Signature: void __thiscall fn_00672040(void* self)
extern void __thiscall ext_00672040(void* self);
// Known callee 0x00672080: sub_00672080 (18B). Inferred: thiscall on a temp token buffer with one float argument.
extern void __thiscall ext_00672080(void* self, float value);

// @name ExprParser::Operators::AssignDivide::vfunc_3
// @class ExprParser::Operators::AssignDivide
// @summary Computes lhs / rhs (0 when rhs == 0) and assigns it to the lhs token, using a temp-token path when the lhs type code is 0xF.
// @field ExprParser::Operators::AssignDivide +0x04 void* lhs
extern void __stdcall fn_006A10F0(void* self, void* other) {
    // self+0x04: lhs token. All dispatch below goes through its vtable.
    void* lhs = lift_field<void*>(self, 0x04);

    // rhs / quotient: rhs = other->field_0x04->vfunc_1(other); lhs part = lhs->vfunc_1(self).
    auto quotient = [&]() -> float {
        void* rhsObj = lift_field<void*>(other, 0x04);
        const float rhs = vcall<float>(rhsObj, 0x04, other);
        if (rhs == 0.0f) {
            return 0.0f;
        }
        const float num = vcall<float>(lhs, 0x04, self);
        return num / rhs;
    };

    if (vcall<int32_t>(lhs, 0x30) == 0x0F) {
        alignas(8) unsigned char tmp1[8] = {};
        const float value = quotient();
        ext_00672080(tmp1, value);
        vcall<void>(lhs, 0xA4, self, static_cast<void*>(tmp1));
        void* p1 = lift_field<void*>(tmp1, 0x04);
        if (p1 != nullptr) {
            vcall<void>(p1, 0x78, static_cast<void*>(tmp1));
        }
    } else {
        ext_00672040(self);
        const float value = quotient();
        vcall<void>(lhs, 0x1C, self, value);
    }

    alignas(8) unsigned char tmp2[8] = {};
    void* assigned = ext_004ECB40(self, tmp2);
    ext_0041CF50(self, assigned);
    void* p2 = lift_field<void*>(tmp2, 0x04);
    if (p2 != nullptr) {
        vcall<void>(p2, 0x78, static_cast<void*>(tmp2));
    }
}
} // namespace lift_006A10F0
