// Lifted C++ translation unit: lifted/ExprParser/ExpressionContainerType.cpp
#include "lift_compat.h"
extern "C" void* ext_006999B0(void* arg);
// Helper sub_006999B0 (60 bytes): takes one stack argument, returns an object pointer in eax.
// Callee-cleans its single argument (stdcall-style), inferred from the caller not adjusting esp.
extern "C" void* __stdcall ext_006999B0(void* arg);

// Callee-cleans its single argument (stdcall-style), inferred from the caller not adjusting esp.
extern "C" void* __stdcall ext_006999B0(void* arg);
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
extern "C" void* ext_006999B0(void* self);

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

// [0x00670CD0] ExprParser::ExpressionContainerType::vfunc_2 (24 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_2
// @class ExprParser::ExpressionContainerType
// @summary Resolves arg via ext_006999B0, then tail-calls vtable slot 2 of the result's +0x04 subobject with the result as argument.
// @field Unknown +0x04 void* field_0x04
void* fn_00670CD0(void* a) {
    void* r = ext_006999B0(a);

    // r->+0x04 is a subobject pointer (SymbolSource base); its vtable slot 2 (+0x08) is the target.
    char* sub = *reinterpret_cast<char**>(static_cast<char*>(r) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);

    using VFn = void* (__thiscall*)(void* self, void* arg);
    return reinterpret_cast<VFn>(vtbl[2])(sub, r);
}

// [0x00670D40] ExprParser::ExpressionContainerType::vfunc_5 (24 bytes)
// @name ExprParser::ExpressionContainerType::vfunc_5
// @class ExprParser::ExpressionContainerType
// @summary Resolves self via ext_006999B0, then tail-dispatches to vtable slot 5 of the sub-object at +0x04.
// @field ExprParser::ExpressionContainerType +0x00 void* vtable (not accessed directly by this function)
// @field <unknown: returned by ext_006999B0> +0x04 void* field_0x04 (sub-object pointer)
// @field <unknown: returned by ext_006999B0> +0x00 void* field_0x00 (sub-object vtable; slot 5 at +0x14 is called)
void* fn_00670D40(void* self) {
    // push self; call ext_006999B0 -> eax
    void* obj = ext_006999B0(self);

    // ecx = obj->+0x04 (sub-object); edx = sub-object's vtable
    void* sub = lift_field<void*>(obj, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);

    // [esp+4] = obj; jmp vtbl[5] with ecx == sub (thiscall-style tail call)
    using Slot5Fn = void* (*)(void* self_this, void* arg);
    auto slot5 = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return slot5(sub, obj);
}

// [0x00670CF0]
// @name ExprParser::ExpressionContainerType::vfunc_3
// @class ExprParser::ExpressionContainerType
// @summary Resolves a helper object from self, then tail-dispatches vtable slot 3 on its sub-object at +0x04 with the helper as argument.
// @field ExprParser::ExpressionContainerType +0x04 void* field_0x04 (type of ext_006999B0 result unknown; +0x04 sub-object pointer used as this)
void* fn_00670CF0(void* self) {
    void* r = ext_006999B0(self);
    void* obj = lift_field<void*>(r, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    auto slot3 = reinterpret_cast<void* (*)(void*, void*)>(lift_field<void*>(vtbl, 0x0c));
    return slot3(obj, r);
}

// [0x00670D60]
// @name ExprParser::ExpressionContainerType::vfunc_6
// @class ExprParser::ExpressionContainerType
// @summary Resolves a helper object from self, then tail-dispatches vtable slot 6 on its sub-object at +0x04 with the helper as argument.
// @field ExprParser::ExpressionContainerType +0x04 void* field_0x04 (type of ext_006999B0 result unknown; +0x04 sub-object pointer used as this)
void* fn_00670D60(void* self) {
    void* r = ext_006999B0(self);
    void* obj = lift_field<void*>(r, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    auto slot6 = reinterpret_cast<void* (*)(void*, void*)>(lift_field<void*>(vtbl, 0x18));
    return slot6(obj, r);
}

// [0x00699220] ExprParser::ExpressionContainerType::vfunc_29 (49 bytes)
namespace lift_00699220 {
// Known callee 0x00699180: sub_00699180 (17B). Takes `this` in ecx, returns it in eax.
extern void* ext_00699180(void* self);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Called cdecl with one size argument (push 0xC; add esp,4); returns allocated pointer in eax.
extern void* ext_006A5C62(size_t size);

// @name ExprParser::ExpressionContainerType::vfunc_29
// @class ExprParser::ExpressionContainerType
// @summary Allocates a 12-byte object, runs its initializer, and stores it into the out-slot with a ref count of +1 (null slot if allocation fails).
void fn_00699220(void* self, void** out) {
    (void)self; // ecx is not read by the original function.

    void* obj = ext_006A5C62(12);
    if (obj != nullptr) {
        ext_00699180(obj);
        // Original increments the refcount stored at obj+0x04 on the new object.
        lift_field<int32_t>(obj, 0x04) += 1;
        *out = obj;
    } else {
        // Original falls through to `add [eax+4], 1` with eax == 0 here, which
        // faults on the real target. That fault is not reproduced; the slot is cleared.
        *out = nullptr;
    }
}
} // namespace lift_00699220
