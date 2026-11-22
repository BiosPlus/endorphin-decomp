// Lifted C++ translation unit: lifted/Primitives/Sensor2.cpp
#include "lift_compat.h"
// Known callee 0x0053AD10: Primitives::Animation::vfunc_29 (Resets animation state: clears counters, sets flag bits 0x2 and 0x1000 in +0x1C, sets +0x30 to INT_MAX, releases the object at +0x38 via its vtable slot 0 (deleting dtor, arg 1), then marks the DirtyOrCleanBase byte at +0x04 as dirty.)
extern "C" void ext_0053AD10(void* self);

extern "C" void ext_0053AD10(void* self);
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

// [0x0053CA10] Primitives::Sensor2::vfunc_29 (44 bytes)
// @name Primitives::Sensor2::vfunc_29
// @class Primitives::Sensor2
// @summary Resets the animation base, releases the object at +0x5C via its deleting dtor, sets +0x60 to 1.0f and clears +0x5C and +0x3C.
// @field Primitives::Sensor2 +0x3C void* field_0x3c
// @field Primitives::Sensor2 +0x5C void* field_0x5c
// @field Primitives::Sensor2 +0x60 float field_0x60
void fn_0053CA10(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    // Call base-class reset (thiscall with this = self).
    ext_0053AD10(self);

    // Release the owned object at +0x5C via vtable slot 0 with arg 1 (deleting dtor).
    void* obj = *reinterpret_cast<void**>(base + 0x5C);
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        using DeletingDtor = void(__thiscall*)(void*, int);
        auto dtor = reinterpret_cast<DeletingDtor>(vtbl[0]);
        dtor(obj, 1);
    }

    // Store 1.0f at +0x60, then clear +0x5C and +0x3C.
    *reinterpret_cast<float*>(base + 0x60) = 1.0f;
    *reinterpret_cast<void**>(base + 0x5C) = nullptr;
    *reinterpret_cast<void**>(base + 0x3C) = nullptr;
}
