// Lifted C++ translation unit: lifted/ExprParser/ExpressionContainerType.cpp
#include "lift_compat.h"
extern "C" void* ext_006999B0(void* arg);

// [0x00699100]
// @name ExprParser::ExpressionContainerType::vfunc_31
// @class ExprParser::ExpressionContainerType
// @summary Gets object via vfunc_24, dynamic_casts it, and invokes vfunc_1 if non-null
#include "lift_compat.h"

extern "C" void* __cdecl ext_006A6E9E(void* ptr, int32_t vfDelta, void* srcType, void* dstType, int32_t isReference);

void __thiscall fn_00699100(void* self, void* arg0, void* arg1) {
    void** vtable = *reinterpret_cast<void***>(self);
    using VFunc24 = void*(__thiscall*)(void*, void*);
    void* obj = reinterpret_cast<VFunc24>(vtable[0x60 / 4])(self, arg0);

    void* casted = ext_006A6E9E(
        obj,
        0,
        reinterpret_cast<void*>(0x00A2E2F8),
        reinterpret_cast<void*>(0x00A2E1FC),
        0
    );
    if (casted) {
        void** casted_vt = *reinterpret_cast<void***>(casted);
        using VFunc1 = void(__thiscall*)(void*, void*);
        reinterpret_cast<VFunc1>(casted_vt[1])(casted, arg1);
    }
}

// [0x00699140]
// @name ExprParser::ExpressionContainerType::vfunc_32
// @class ExprParser::ExpressionContainerType
// @summary Gets object via vfunc_24, dynamic_casts it, and invokes vfunc_3 if non-null
#include "lift_compat.h"

extern "C" void* __cdecl ext_006A6E9E(void* ptr, int32_t vfDelta, void* srcType, void* dstType, int32_t isReference);

void __thiscall fn_00699140(void* self, void* arg0, void* arg1) {
    void** vtable = *reinterpret_cast<void***>(self);
    using VFunc24 = void*(__thiscall*)(void*, void*);
    void* obj = reinterpret_cast<VFunc24>(vtable[0x60 / 4])(self, arg0);

    void* casted = ext_006A6E9E(
        obj,
        0,
        reinterpret_cast<void*>(0x00A2E2F8),
        reinterpret_cast<void*>(0x00A2E1FC),
        0
    );
    if (casted) {
        void** casted_vt = *reinterpret_cast<void***>(casted);
        using VFunc3 = void(__thiscall*)(void*, void*);
        reinterpret_cast<VFunc3>(casted_vt[3])(casted, arg1);
    }
}

// [0x0067A7D0] ExprParser::ExpressionContainerType::vfunc_43 (66 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_43
// @class ExprParser::ExpressionContainerType
// @summary Sums vfunc_1 results of self->+0x04 (on self) and arg->+0x04 (on arg), then passes the sum to self->+0x04 vfunc_7 along with self.
// @field ExprParser::ExpressionContainerType +0x04 void* field_0x04
// @field Unknown +0x04 void* field_0x04
void fn_0067A7D0(void* self, void* arg) {
    using FloatGetter = float (*)(void* thisObj, void* a);
    using FloatSetter = void (*)(void* thisObj, void* a, float value);

    // Read vtable slot `idx` of the object at `obj`.
    auto vslot = [](void* obj, size_t idx) -> void* {
        return (*static_cast<void***>(obj))[idx];
    };

    // a = self->+0x04->vfunc_1(self)
    void* selfSub = lift_field<void*>(self, 0x04);
    float a = reinterpret_cast<FloatGetter>(vslot(selfSub, 1))(selfSub, self);

    // b = arg->+0x04->vfunc_1(arg)
    void* argSub = lift_field<void*>(arg, 0x04);
    float b = reinterpret_cast<FloatGetter>(vslot(argSub, 1))(argSub, arg);

    float sum = b + a;

    // Tail call in the original: self->+0x04->vfunc_7(self, sum).
    // The original returns whatever that callee leaves in st0; that value is not modelled here.
    void* selfSubAgain = lift_field<void*>(self, 0x04);
    reinterpret_cast<FloatSetter>(vslot(selfSubAgain, 7))(selfSubAgain, self, sum);
}

// [0x00670CB0] ExprParser::ExpressionContainerType::vfunc_1 (24 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_1
// @class ExprParser::ExpressionContainerType
// @summary Resolves arg via ext_006999B0, then tail-dispatches to vtable slot 1 of the result's +0x04 object, passing the result as the argument.
// @field Unknown +0x04 void* field_0x04
void* fn_00670CB0(void* a1) {
    // Helper returns the resolved object; its +0x04 member is the dispatch target.
    void* x = ext_006999B0(a1);
    void* obj = lift_field<void*>(x, 0x04);
    // Original is a tail jump (jmp eax) through vtable slot 1 (offset 0x04).
    void** vtbl = *static_cast<void***>(obj);
    auto fn = reinterpret_cast<void* (*)(void*, void*)>(vtbl[1]);
    return fn(obj, x);
}
