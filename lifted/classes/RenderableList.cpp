// Lifted C++ translation unit: lifted/classes/RenderableList.cpp
#include "lift_compat.h"

// [0x0054C160]
namespace lift_0054C160 {
// @name RenderableList::vfunc_22
// @class RenderableList
// @summary Iterates over child renderables when enabled, bracketed by global renderer vfunc_2/vfunc_3 calls, invoking vfunc_22 on each.
// @field RenderableList +0x0C uint8_t field_0x0C
// @field RenderableList +0x18 uint32_t* field_0x18
// @field RenderableList +0x1C uint32_t* field_0x1C


extern void (__cdecl* const mem_00925134)();
extern uintptr_t mem_00AEED24;

void __thiscall fn_0054C160(void* self, uint32_t arg1) {
    if (lift_field<uint8_t>(self, 0x0C) == 0) {
        return;
    }

    uint8_t* vec = static_cast<uint8_t*>(self) + 0x14;
    uint32_t* it = lift_field<uint32_t*>(vec, 0x04);
    if (it > lift_field<uint32_t*>(vec, 0x08)) {
        mem_00925134();
    }

    for (;;) {
        uint32_t* end = lift_field<uint32_t*>(vec, 0x08);
        if (lift_field<uint32_t*>(vec, 0x04) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }

        void* global_obj = reinterpret_cast<void*>(mem_00AEED24);
        void** global_vtable = *reinterpret_cast<void***>(global_obj);
        reinterpret_cast<void (__thiscall*)(void*)>(global_vtable[2])(global_obj);

        if (it >= lift_field<uint32_t*>(vec, 0x08)) {
            mem_00925134();
        }

        void* item = reinterpret_cast<void*>(*it);
        void** item_vtable = *reinterpret_cast<void***>(item);
        reinterpret_cast<void (__thiscall*)(void*, uint32_t)>(item_vtable[22])(item, arg1);

        global_obj = reinterpret_cast<void*>(mem_00AEED24);
        global_vtable = *reinterpret_cast<void***>(global_obj);
        reinterpret_cast<void (__thiscall*)(void*)>(global_vtable[3])(global_obj);

        if (it >= lift_field<uint32_t*>(vec, 0x08)) {
            mem_00925134();
        }

        ++it;
    }
}
} // namespace lift_0054C160
