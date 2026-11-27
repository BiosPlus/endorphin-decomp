// Lifted C++ translation unit: lifted/classes/GWCRGBPropertiesFactory.cpp
#include "lift_compat.h"

// [0x006B1250]
namespace lift_006B1250 {
// @name GWCRGBPropertiesFactory::vfunc_1
// @class GWCRGBPropertiesFactory
// @summary Creates and initializes an RGB properties object when type matches 0x64
// @field GWCRGBPropertiesFactory +0x00 void* vtable


extern void* __cdecl ext_006A5C62(uint32_t size);
extern void* __thiscall ext_006B3A90(void* self, DWORD arg1, DWORD arg2);
extern uint32_t mem_009919B4;

extern void* __thiscall fn_006B1250(void* self, DWORD arg1, DWORD arg2, DWORD arg3) {
    (void)self;
    if (arg2 != mem_009919B4) {
        return nullptr;
    }

    void* mem = ext_006A5C62(0x44);
    void* obj = nullptr;
    if (mem != nullptr) {
        obj = ext_006B3A90(mem, arg1, arg2);
    }

    uint32_t* vtable = *reinterpret_cast<uint32_t**>(obj);
    using vfunc_t = void(__thiscall*)(void*, DWORD, uint32_t);
    auto vfunc = reinterpret_cast<vfunc_t>(vtable[0x14 / 4]);
    vfunc(obj, arg3, (arg3 == 0) ? 1u : 0u);

    return obj;
}
} // namespace lift_006B1250
