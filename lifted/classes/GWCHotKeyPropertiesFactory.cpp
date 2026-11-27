// Lifted C++ translation unit: lifted/classes/GWCHotKeyPropertiesFactory.cpp
#include "lift_compat.h"

// [0x006B1840]
namespace lift_006B1840 {
// @name GWCHotKeyPropertiesFactory::vfunc_1
// @class GWCHotKeyPropertiesFactory
// @summary Creates a hot key properties object if the type ID matches 0x12C and initializes it via vfunc_5.
// @field GWCHotKeyPropertiesFactory +0x0 void** vtable


extern void* ext_006A5C62(uint32_t size);
extern void* __thiscall ext_006B3C90(void* self, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_009919E4;

extern void* __thiscall fn_006B1840(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    (void)self;
    if (arg2 != mem_009919E4) {
        return nullptr;
    }

    void* mem = ext_006A5C62(0x44);
    void* obj = mem ? ext_006B3C90(mem, arg1, arg2) : nullptr;

    uint8_t is_null = (arg3 == 0) ? 1 : 0;
    void** vtable = *reinterpret_cast<void***>(obj);
    using VFunc5 = void(__thiscall*)(void*, uint32_t, uint8_t);
    reinterpret_cast<VFunc5>(vtable[0x14 / 4])(obj, arg3, is_null);

    return obj;
}
} // namespace lift_006B1840
