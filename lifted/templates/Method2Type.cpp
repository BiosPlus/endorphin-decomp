// Lifted C++ translation unit: lifted/templates/Method2Type.cpp
#include "lift_compat.h"

// [0x005B7E80]
namespace lift_005B7E80 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls virtual slot 5 twice on the object held by arg4 (first with 0, then with the first result), forwards the second result to the child at *arg2, zeroes the out buffer at arg2, and returns arg2.

extern void ext_005B7260(void* self, uint32_t stackArg0);
extern void ext_00671F30(uint32_t* out);

namespace {

using Slot5Fn = uint32_t (*)(void* self, uint32_t a, uint32_t b);

// Calls vtable slot 5 (offset 0x14) of the object at `obj`, passing (a, b).
uint32_t callSlot5(uint32_t obj, uint32_t a, uint32_t b)
{
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(obj));
    void** vtbl = *reinterpret_cast<void***>(self);
    Slot5Fn fn = reinterpret_cast<Slot5Fn>(vtbl[5]);
    return fn(self, a, b);
}

} // namespace

extern uint32_t fn_005B7E80(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)self;
    (void)a1;
    (void)a3;

    uint32_t* out = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a2));
    uint32_t wrapped = *out;

    uint32_t* argObj = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(a4));
    uint32_t obj = argObj[1];

    uint32_t r1 = callSlot5(obj, a4, 0);
    uint32_t r2 = callSlot5(obj, a4, r1);

    ext_005B7260(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapped)), r2);
    ext_00671F30(out);

    return a2;
}
} // namespace lift_005B7E80

// [0x005B7F50]
namespace lift_005B7F50 {
// @name ExprParser::Method2Type::vfunc_49
// @class ExprParser::Method2Type
// @summary Calls two virtual slot-5 methods on the argument objects, forwards the results to ext_005B72A0 on *arg2, then zeroes the out-buffer at arg2 via ext_00671F30 and returns arg2.
// @field Unknown +0x00 uintptr_t field_0x00
// @field Unknown +0x04 uintptr_t field_0x04

extern void __fastcall ext_005B72A0(void* self, void* edx, uintptr_t arg1, uintptr_t arg2);
extern void __cdecl ext_00671F30(uint32_t* out);
extern uint32_t mem_00B599BC;

using VSlot5ThreeArg = uintptr_t(__fastcall*)(void* self, void* edx, uintptr_t a, uintptr_t b, uintptr_t c);
using VSlot5TwoArg = uintptr_t(__fastcall*)(void* self, void* edx, uintptr_t a, uintptr_t b);

extern uintptr_t __stdcall fn_005B7F50(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4) {
    (void)arg1;
    (void)arg3;

    uintptr_t* A = reinterpret_cast<uintptr_t*>(arg2);
    uintptr_t* B = reinterpret_cast<uintptr_t*>(arg4);

    // r1 = B->field_0x04->vtbl[5](B, arg2_saved, 0)
    void* objB = reinterpret_cast<void*>(B[1]);
    uintptr_t* vtB = *reinterpret_cast<uintptr_t**>(objB);
    VSlot5ThreeArg fnB = reinterpret_cast<VSlot5ThreeArg>(vtB[5]);
    uintptr_t r1 = fnB(objB, nullptr, arg4, A[0], 0);

    // r2 = A->field_0x04->vtbl[5](A, r1)
    void* objA = reinterpret_cast<void*>(A[1]);
    uintptr_t* vtA = *reinterpret_cast<uintptr_t**>(objA);
    VSlot5TwoArg fnA = reinterpret_cast<VSlot5TwoArg>(vtA[5]);
    uintptr_t r2 = fnA(objA, nullptr, arg2, r1);

    // this = A->field_0x00 (object), forward r2 and A
    ext_005B72A0(reinterpret_cast<void*>(A[0]), nullptr, r2, arg2);

    // Zero out[0] and store mem_00B599BC into out[1]
    ext_00671F30(reinterpret_cast<uint32_t*>(arg2));

    return arg2;
}
} // namespace lift_005B7F50
