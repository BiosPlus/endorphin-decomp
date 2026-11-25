// Lifted C++ translation unit: lifted/classes/BaseEventDispatcher.cpp
#include "lift_compat.h"

// [0x00437AD0] BaseEventDispatcher::vfunc_3 (60 bytes)
namespace lift_00437AD0 {
extern void (*mem_00925134)();

// @name BaseEventDispatcher::vfunc_3
// @class BaseEventDispatcher
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
// @field BaseEventDispatcher +0x30 uint32_t begin
// @field BaseEventDispatcher +0x34 uint32_t end
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_00596660(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_00437AD0(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x4;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_00596660(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_00437AD0

// [0x00678D70]
namespace lift_00678D70 {
// @name BaseEventDispatcher::vfunc_1
// @class BaseEventDispatcher
// @summary Walks the dispatcher's pointer array at +0x8..+0xC and calls vtable slot 0 of each element with the given argument.
// @field BaseEventDispatcher +0x08 void** field_0x08
// @field BaseEventDispatcher +0x0C void** field_0x0C

extern void ext_invalid_parameter_noinfo(void);

// ecx = this (BaseEventDispatcher*), one stack argument (ret 4).
void BaseEventDispatcher_vfunc_1(void* self_ptr, void* arg) {
    uint8_t* self = static_cast<uint8_t*>(self_ptr);

    void** it = *reinterpret_cast<void***>(self + 0x08);
    if (!(it <= *reinterpret_cast<void***>(self + 0x0C))) {
        ext_invalid_parameter_noinfo();
    }

    for (;;) {
        void** end = *reinterpret_cast<void***>(self + 0x0C);
        if (it == end) {
            break;
        }
        if (!(it < end)) {
            ext_invalid_parameter_noinfo();
        }

        void* obj = *it;
        void** vtbl = *reinterpret_cast<void***>(obj);
        reinterpret_cast<void (*)(void*, void*)>(vtbl[0])(obj, arg);

        if (!(it < *reinterpret_cast<void***>(self + 0x0C))) {
            ext_invalid_parameter_noinfo();
        }
        it += 1;
    }
}
} // namespace lift_00678D70
