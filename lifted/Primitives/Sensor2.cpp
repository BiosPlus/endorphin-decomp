// Lifted C++ translation unit: lifted/Primitives/Sensor2.cpp
#include "lift_compat.h"

// [0x0053D9E0] Primitives::Sensor2::vfunc_28 (89 bytes)
// @name Primitives::Sensor2::vfunc_28
// @class Primitives::Sensor2
// @summary Ignores arg 2; otherwise dispatches virtual calls on sub-objects (+0x38/+0x3c/+0x40/+0x5c) depending on whether +0x5c is set.
// @field Primitives::Sensor2 +0x38 void* field_0x38
// @field Primitives::Sensor2 +0x3c void* field_0x3c
// @field Primitives::Sensor2 +0x40 void* field_0x40
// @field Primitives::Sensor2 +0x5c void* field_0x5c
void __thiscall fn_0053D9E0(void* self, int arg)
{
    if (arg == 2) {
        return;
    }

    void* embedded = reinterpret_cast<uint8_t*>(self) + 0x40;

    if (lift_field<void*>(self, 0x5C) != nullptr) {
        // vtable slot 11 on +0x38
        void* obj38 = lift_field<void*>(self, 0x38);
        void** vt38 = *reinterpret_cast<void***>(obj38);
        reinterpret_cast<void(__thiscall*)(void*)>(vt38[11])(obj38);

        // vtable slot 22 on embedded object at +0x40, arg 1
        void** vtEmb = *reinterpret_cast<void***>(embedded);
        reinterpret_cast<void(__thiscall*)(void*, int)>(vtEmb[22])(embedded, 1);

        // vtable slot 22 on +0x5c, forwarding arg
        void* obj5c = lift_field<void*>(self, 0x5C);
        void** vt5c = *reinterpret_cast<void***>(obj5c);
        reinterpret_cast<void(__thiscall*)(void*, int)>(vt5c[22])(obj5c, arg);
    } else {
        // vtable slot 13 on +0x3c
        void* obj3c = lift_field<void*>(self, 0x3C);
        void** vt3c = *reinterpret_cast<void***>(obj3c);
        reinterpret_cast<void(__thiscall*)(void*)>(vt3c[13])(obj3c);

        // vtable slot 22 on embedded object at +0x40, arg 1 (tail call in original)
        void** vtEmb = *reinterpret_cast<void***>(embedded);
        reinterpret_cast<void(__thiscall*)(void*, int)>(vtEmb[22])(embedded, 1);
    }
}
