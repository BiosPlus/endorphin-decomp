// Lifted C++ translation unit: lifted/classes/GWCPropertiesFactory.cpp
#include "lift_compat.h"

// [0x006B11B0]
namespace lift_006B11B0 {
extern void* __cdecl ext_006A5C62(uint32_t size);
extern void* __thiscall ext_006ADBF0(void* self, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_0099109C;

// @name GWCPropertiesFactory::vfunc_1
// @class GWCPropertiesFactory
// @summary Creates and initializes a properties object if the requested index/type is within bounds
extern void* __thiscall fn_006B11B0(void* self, uint32_t arg1, int32_t arg2, uint32_t arg3) {
    (void)self;
    if (arg2 > static_cast<int32_t>(mem_0099109C)) {
        return nullptr;
    }

    void* obj = ext_006A5C62(0x40);
    void* instance = nullptr;
    if (obj != nullptr) {
        instance = ext_006ADBF0(obj, arg1, static_cast<uint32_t>(arg2));
    }

    auto vtable = *reinterpret_cast<uintptr_t**>(instance);
    auto vfunc = reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t)>(vtable[0x14 / 4]);
    vfunc(instance, arg3, arg3 == 0 ? 1u : 0u);

    return instance;
}
} // namespace lift_006B11B0
