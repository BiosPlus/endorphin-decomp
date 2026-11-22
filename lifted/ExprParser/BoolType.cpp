// Lifted C++ translation unit: lifted/ExprParser/BoolType.cpp
#include "lift_compat.h"
extern "C" uint32_t __thiscall ext_0041CF50(uint32_t self, uint32_t arg);
// RTTI type lookup (MSVCR80 __RTtypeid); returns the type_info pointer for the object.
extern "C" void* __cdecl ext_006A724A(void* obj);

extern "C" void* __cdecl ext_006A724A(void* obj);
// @name ExprParser::BoolType::vfunc_34
// @class ExprParser::BoolType
// @summary Auto-lifted identical-shape clone of 0x0066B0B0 (ExprParser::RealType::vfunc_8).
uint32_t __stdcall fn_0067A6E0(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_0041CF50(first, second);
}
// Callee 0x00698A90 (thiscall, one stack argument): second-stage helper.
extern "C" uint32_t __thiscall ext_00698A90(uint32_t self, uint32_t arg);

extern "C" uint32_t __thiscall ext_00698A90(uint32_t self, uint32_t arg);
// @name ExprParser::BoolType::vfunc_51
// @class ExprParser::BoolType
// @summary Returns the RTTI type_info pointer for this object by forwarding to __RTtypeid.
void* __thiscall fn_0046C430(void* self) {
    return ext_006A724A(self);
}
// Callee 0x006720A0 (thiscall, one stack argument, callee pops 4 bytes).
extern "C" void __thiscall ext_006720A0(void* self, uint8_t flag);

extern "C" void __thiscall ext_006720A0(void* self, uint8_t flag);
// @name ExprParser::BoolType::vfunc_33
// @class ExprParser::BoolType
// @summary Calls virtual slot 29 on this with out (result discarded), then stores ext_00698A90(a2, a3) into *out.
void __thiscall fn_0067A6B0(void* self, void* out, uint32_t a2, uint32_t a3) {
    // Virtual slot 29 (vtable offset 0x74); its return value is discarded.
    void** vtbl = *reinterpret_cast<void***>(self);
    reinterpret_cast<void (__thiscall*)(void*, void*)>(vtbl[29])(self, out);
    *reinterpret_cast<uint32_t*>(out) = ext_00698A90(a2, a3);
}

// [0x0066AE90] ExprParser::BoolType::vfunc_0 (36 bytes)
// @name ExprParser::BoolType::vfunc_0
// @class ExprParser::BoolType
// @summary Reads the byte flag at *flagPtr, applies it to obj via ext_006720A0, and returns obj.
void* __stdcall fn_0066AE90(void* obj, const uint8_t* flagPtr) {
    uint8_t flag = *flagPtr;
    ext_006720A0(obj, flag);
    return obj;
}

// [0x0066B1A0] ExprParser::BoolType::vfunc_42 (46 bytes)
// @name ExprParser::BoolType::vfunc_42
// @class ExprParser::BoolType
// @summary Returns 1 if sub->vfn3(obj) equals sub->vfn3(obj) where sub = obj->field_0x04 (both calls identical); the second argument is unused.
// @field Unknown +0x04 void* field_0x04
uint8_t __stdcall fn_0066B1A0(void* obj, void* other) {
    (void)other;
    void* sub = lift_field<void*>(obj, 4);
    using VFn3 = uint8_t (__thiscall*)(void*, void*);
    void** vtbl = *reinterpret_cast<void***>(sub);
    uint8_t lhs = reinterpret_cast<VFn3>(vtbl[3])(sub, obj);
    sub = lift_field<void*>(obj, 4);
    vtbl = *reinterpret_cast<void***>(sub);
    uint8_t rhs = reinterpret_cast<VFn3>(vtbl[3])(sub, obj);
    return lhs == rhs ? 1 : 0;
}

// [0x0066B1D0] ExprParser::BoolType::vfunc_43 (48 bytes)
// @name ExprParser::BoolType::vfunc_43
// @class ExprParser::BoolType
// @summary Sets *flag to 1 if it is already nonzero or if sub->vfn3(other) is nonzero (sub = other->field_0x04); otherwise sets *flag to 0.
// @field Unknown +0x04 void* field_0x04
void __stdcall fn_0066B1D0(uint8_t* flag, void* other) {
    if (*flag != 0) {
        *flag = 1;
        return;
    }
    void* sub = lift_field<void*>(other, 4);
    using VFn3 = uint8_t (__thiscall*)(void*, void*);
    void** vtbl = *reinterpret_cast<void***>(sub);
    uint8_t r = reinterpret_cast<VFn3>(vtbl[3])(sub, other);
    *flag = (r != 0) ? 1 : 0;
}

// [0x0067A930] ExprParser::BoolType::vfunc_47 (64 bytes)
// @name ExprParser::BoolType::vfunc_47
// @class ExprParser::BoolType
// @summary Reads float x = sub->vfn1(obj) with sub = obj->field_0x04; if x < 0 calls sub->vfn7(obj, -x), otherwise returns without calling.
// @field Unknown +0x04 void* field_0x04
void __stdcall fn_0067A930(void* self) {
    void* sub = lift_field<void*>(self, 4);
    void** vtbl = *reinterpret_cast<void***>(sub);
    float x = reinterpret_cast<float (__thiscall*)(void*, void*)>(vtbl[1])(sub, self);
    // Matches the original: x >= 0 or NaN takes the early-return path.
    if (!(x < 0.0f)) {
        return;
    }
    sub = lift_field<void*>(self, 4);
    vtbl = *reinterpret_cast<void***>(sub);
    reinterpret_cast<void (__thiscall*)(void*, void*, float)>(vtbl[7])(sub, self, -x);
}

// [0x0067AA50] ExprParser::BoolType::vfunc_46 (79 bytes)
// @name ExprParser::BoolType::vfunc_46
// @class ExprParser::BoolType
// @summary Calls slot 1 of the object at +0x04 twice, combines the two float results with pow, then passes the result to slot 7 of that object.
// @field ExprParser::BoolType +0x04 void* field_0x04

// Slot 1 (offset 0x04): receiver is the inner object, arg is self; float result (ST(0)).
typedef float (*Slot1Fn)(void* inner, void* self);
// Slot 7 (offset 0x1C): receiver is the inner object, args are self and the float value.
typedef uint32_t (*Slot7Fn)(void* inner, void* self, float value);

uint32_t fn_0067AA50(void* /*unused*/, void* self) {
    // First slot-1 call: first = inner->slot1(self)
    void* inner = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(inner);
    float first = reinterpret_cast<Slot1Fn>(vtbl[1])(inner, self);

    // Second slot-1 call on the same field: second = inner->slot1(self)
    inner = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x04);
    vtbl = *reinterpret_cast<void***>(inner);
    float second = reinterpret_cast<Slot1Fn>(vtbl[1])(inner, self);

    // CIpow(ST(1)=second, ST(0)=first) -> single-precision result
    float value = std::pow(second, first);

    // Slot 7 of the inner object with (self, value); its eax is returned.
    inner = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x04);
    vtbl = *reinterpret_cast<void***>(inner);
    return reinterpret_cast<Slot7Fn>(vtbl[7])(inner, self, value);
}

// [0x0067A820] ExprParser::BoolType::vfunc_44 (80 bytes)
// @name ExprParser::BoolType::vfunc_44
// @class ExprParser::BoolType
// @summary Computes the difference between a float getter on a0->+4 and a float getter on a1->+4, then forwards that difference to a0->+4's vfunc_7 and returns its result.
// @field ExprParser::BoolType +0x04 void* field_0x04
//
// Note: a1 is also read at +0x04 (its own +0x04 object is vcalled through slot 1); the class of a1 is not known here.

namespace {

// Returns the virtual slot `index` of `obj` (raw vtable lookup, slot = pointer-sized entry).
inline void* vslot(void* obj, std::size_t index) {
    void** vtable = *static_cast<void***>(obj);
    return vtable[index];
}

}  // namespace

float fn_0067A820(void* a0, void* a1) {
    // Object held at a0+0x04.
    void* b = lift_field<void*>(a0, 4);
    // Slot 1 of b: float getter called with a0 as its stack argument.
    using GetterWithArg = float (*)(void* self, void* arg);
    const float v1 = reinterpret_cast<GetterWithArg>(vslot(b, 1))(b, a0);

    // Object held at a1+0x04; slot 1 float getter called with a1 as its argument.
    void* c = lift_field<void*>(a1, 4);
    const float v2 = reinterpret_cast<GetterWithArg>(vslot(c, 1))(c, a1);

    // Difference computed in double precision (x87 fsubr on the loaded values).
    const float diff = static_cast<float>(static_cast<double>(v1) - static_cast<double>(v2));

    // Slot 7 (+0x1c) of b: float method taking a0 and the difference; its result is returned.
    using ApplyFn = float (*)(void* self, void* ctx, float value);
    return reinterpret_cast<ApplyFn>(vslot(b, 7))(b, a0, diff);
}
