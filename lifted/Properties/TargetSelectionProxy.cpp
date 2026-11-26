// Lifted C++ translation unit: lifted/Properties/TargetSelectionProxy.cpp
#include "lift_compat.h"

// [0x004EF4A0]
namespace lift_004EF4A0 {
// @name Properties::TargetSelectionProxy::vfunc_1
// @class Properties::TargetSelectionProxy
// @summary Iterates over a vector of child objects and invokes vfunc_1 on each with the given argument.
// @field Properties::TargetSelectionProxy +0x10 uint32_t field_0x10
// @field Properties::TargetSelectionProxy +0x14 uint32_t field_0x14


extern uint32_t mem_00925134;

void __thiscall fn_004EF4A0(uint32_t self, uint32_t arg0) {
    uint32_t begin = *(uint32_t*)(self + 0x10);
    if (begin == 0) {
        return;
    }
    uint32_t end = *(uint32_t*)(self + 0x14);
    if (((int32_t)(end - begin) >> 2) == 0) {
        return;
    }

    auto invalid_param = (void(__cdecl*)())mem_00925134;
    uint32_t i = 0;
    while (true) {
        uint32_t cur_begin = *(uint32_t*)(self + 0x10);
        if (cur_begin == 0) {
            break;
        }
        uint32_t cur_end = *(uint32_t*)(self + 0x14);
        uint32_t count = (uint32_t)((int32_t)(cur_end - cur_begin) >> 2);
        if (i >= count) {
            break;
        }
        if (cur_begin == 0 || i >= (uint32_t)((int32_t)(*(uint32_t*)(self + 0x14) - cur_begin) >> 2)) {
            invalid_param();
        }
        uint32_t vec_ptr = *(uint32_t*)(self + 0x10);
        uint32_t obj = *(uint32_t*)(vec_ptr + 4 * i);
        uint32_t vtable = *(uint32_t*)obj;
        auto vfunc_1 = (void(__thiscall*)(uint32_t, uint32_t))(*(uint32_t*)(vtable + 0x4));
        vfunc_1(obj, arg0);
        i += 1;
    }
}
} // namespace lift_004EF4A0

// [0x004EF460] Properties::TargetSelectionProxy::vfunc_0 (61 bytes)
namespace lift_004EF460 {
// MSVCR80!_invalid_parameter_noinfo import slot. Only reached by the original
// code when the vector begin/count checks below are bypassed, which they never
// are (begin != 0 and count != 0 are both guaranteed before the forward), so it
// is kept for reference only.
extern uint32_t mem_00925134;

// @name Properties::TargetSelectionProxy::vfunc_0
// @class Properties::TargetSelectionProxy
// @summary Forwards the call to the first element of the child vector via its vtable slot 0 (tail jump); returns the vector begin pointer when the vector is empty.
// @field Properties::TargetSelectionProxy +0x10 uint32_t field_0x10
// @field Properties::TargetSelectionProxy +0x14 uint32_t field_0x14
uint32_t __thiscall fn_004EF460(uint32_t self, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t begin = *(uint32_t*)(self + 0x10);
    if (begin == 0) {
        return begin;
    }
    uint32_t end = *(uint32_t*)(self + 0x14);
    if (((int32_t)(end - begin) >> 2) == 0) {
        return begin;
    }

    // Unreachable: the original asm only calls _invalid_parameter_noinfo when
    // begin == 0 or the recomputed count == 0, both already excluded above.
    if (begin == 0xFFFFFFFFu) {
        auto invalid_param = (void(__cdecl*)())mem_00925134;
        invalid_param();
    }

    // first element of the vector
    uint32_t elem = *(uint32_t*)begin;
    // vtable of the element, then its slot 0
    uint32_t vtbl = *(uint32_t*)elem;
    uint32_t target = *(uint32_t*)vtbl;

    using Slot0 = uint32_t(__thiscall*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
    return reinterpret_cast<Slot0>(target)(elem, a0, a1, a2, a3);
}
} // namespace lift_004EF460
