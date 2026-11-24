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
