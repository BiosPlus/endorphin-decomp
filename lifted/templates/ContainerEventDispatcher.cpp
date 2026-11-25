// Lifted C++ translation unit: lifted/templates/ContainerEventDispatcher.cpp
#include "lift_compat.h"

// [0x0047AF80]
namespace lift_0047AF80 {
extern uint32_t mem_00925134;
extern void __thiscall ext_00678D70(uint8_t* self, uint32_t arg1);

// @name ContainerEventDispatcher::vfunc_1
// @class ContainerEventDispatcher
// @summary Dispatches an event to each element in the container and forwards to BaseEventDispatcher::vfunc_1.
// @field ContainerEventDispatcher +0x14 uint8_t* container_begin
// @field ContainerEventDispatcher +0x18 uint32_t container_first
// @field ContainerEventDispatcher +0x1c uint32_t container_last
void __thiscall fn_0047AF80(uint8_t* self, uint32_t arg1) {
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);
    uint8_t* vec = self + 0x14;
    uint32_t it = *reinterpret_cast<uint32_t*>(vec + 0x4);
    if (it > *reinterpret_cast<uint32_t*>(vec + 0x8)) {
        invalid_param();
    }

    for (;;) {
        uint32_t end = *reinterpret_cast<uint32_t*>(vec + 0x8);
        if (*reinterpret_cast<uint32_t*>(vec + 0x4) > end) {
            invalid_param();
        }
        if (it == end) {
            break;
        }
        if (it >= *reinterpret_cast<uint32_t*>(vec + 0x8)) {
            invalid_param();
        }

        uint8_t* elem = *reinterpret_cast<uint8_t**>(static_cast<uintptr_t>(it));
        uint32_t* vtable = *reinterpret_cast<uint32_t**>(elem);
        auto vfunc_0 = reinterpret_cast<void(__thiscall*)(uint8_t*, uint32_t)>(vtable[0]);
        vfunc_0(elem, arg1);

        if (it >= *reinterpret_cast<uint32_t*>(vec + 0x8)) {
            invalid_param();
        }
        it += 4;
    }

    ext_00678D70(self, arg1);
}
} // namespace lift_0047AF80
