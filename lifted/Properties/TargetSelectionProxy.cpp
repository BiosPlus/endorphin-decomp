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
