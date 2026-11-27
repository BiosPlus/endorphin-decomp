// Lifted C++ translation unit: lifted/Primitives/Sensor.cpp
#include "lift_compat.h"
// External callee: Primitives::Plane::vfunc_25 (0x0053A610).
// Takes `self` in ECX plus three stack arguments; callee cleans up.
void ext_0053A610(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);

// [0x0053D810] Primitives::Sensor::vfunc_25 (91 bytes)
// @name Primitives::Sensor::vfunc_25
// @class Primitives::Sensor
// @summary Forwards three args to Plane::vfunc_25, normalises flag bits at +0x1C (clear 0x1 and 0x2, set 0x4 and 0x40000), then stores arg3 at +0x08.
// @field Primitives::Sensor +0x08 uint32_t field_0x08
// @field Primitives::Sensor +0x1C uint32_t field_0x1c
void fn_0053D810(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    ext_0053A610(self, arg1, arg2, arg3);

    auto* base = static_cast<uint8_t*>(self);
    uint32_t flags;
    std::memcpy(&flags, base + 0x1C, sizeof(flags));

    flags &= ~0x2u;        // clear bit 1
    flags |= 0x4u;         // set bit 2
    flags |= 0x40000u;     // set bit 18
    flags &= ~0x1u;        // clear bit 0

    std::memcpy(base + 0x1C, &flags, sizeof(flags));
    std::memcpy(base + 0x08, &arg3, sizeof(arg3));
}

// [0x0053C8D0]
// @name Primitives::Sensor::vfunc_29
// @class Primitives::Sensor
// @summary Resets the base animation state, then releases and clears the owned object at +0x3C.
// @field Primitives::Sensor +0x3C void* field_0x3c

void ext_0053AD10(void* self);

void fn_0053C8D0(void* self) {
    ext_0053AD10(self);

    void* owned = lift_field<void*>(self, 0x3C);
    if (owned != nullptr) {
        // Slot 0 of the owned object's vtable is the deleting destructor; arg 1 = free memory.
        void** vtbl = *reinterpret_cast<void***>(owned);
        reinterpret_cast<void (*)(void*, int)>(vtbl[0])(owned, 1);
    }
    lift_field<void*>(self, 0x3C) = nullptr;
}

// [0x0053B7A0]
namespace lift_0053B7A0 {
// @name Primitives::Sensor::vfunc_23
// @class Primitives::Sensor
// @summary If the sub-object at +0x20 fails the check via sub_006A6DE0, sets flag +0x4, then forwards arg2 as a tagged record to Primitives::Animation::vfunc_23.
// @field Primitives::Sensor +0x4 uint8_t field_0x04
// @field Primitives::Sensor +0x20 void* field_0x20

struct AnimCallArg {
    uint32_t vtable;  // 0x93A444
    uint32_t value;   // second stack argument of the caller
};

// sub_005B11D0: thiscall on sub-object, one stack arg (1); returns float*.
extern float* ext_005B11D0(void* self, int32_t arg);
// sub_006A6DE0: returns nonzero on success; receiver assumed to be the sub-object.
extern uint32_t ext_006A6DE0(void* self);
// Primitives::Animation::vfunc_23: thiscall, receives a pointer to the tagged record.
extern void ext_0053ADD0(void* self, const AnimCallArg* arg);

void Primitives_Sensor_vfunc_23(void* self, uint32_t arg1, uint32_t arg2) {
    (void)arg1;  // first stack argument is not read by this routine

    void* sub = lift_field<void*>(self, 0x20);
    if (sub != nullptr) {
        float* p = ext_005B11D0(sub, 1);
        (void)*p;  // loaded to x87 stack in the original; value is not consumed here

        if (ext_006A6DE0(sub) == 0) {
            lift_field<uint8_t>(self, 0x04) = 1;
        }
    }

    AnimCallArg rec{0x0093A444u, arg2};
    ext_0053ADD0(self, &rec);
}
} // namespace lift_0053B7A0

// [0x0053D870] Primitives::Sensor::vfunc_28 (232 bytes)
namespace lift_0053D870 {
extern void __thiscall ext_0053D3C0(void* self);
// Known callee 0x005B11D0: UnknownClass::getElementPtr (Returns a pointer to the 32-bit element at the given index in an inline array at offset 0x10.)
extern uint32_t* __thiscall ext_005B11D0(uintptr_t self, uint32_t index);
extern uint32_t ext_006A6DE0();
extern int mem_00925414;
extern int mem_00925404;
extern int mem_009254CC;
extern int mem_00955A30;
extern int mem_00955D14;
extern int mem_00955D10;

// @name Primitives::Sensor::vfunc_28
// @class Primitives::Sensor
// @summary Pushes GL matrix, applies one of five fixed axis-aligned rotations chosen by ext_006A6DE0(), forwards arg to the child object's vfunc at +0x58, then pops the matrix.
// @field Primitives::Sensor +0x20 void* field_0x20
// @field Primitives::Sensor +0x3c void* field_0x3c
float __thiscall fn_0053D870(void* self, uint32_t arg) {
    void* obj20 = lift_field<void*>(self, 0x20);
    if (obj20 == nullptr) {
        return 0.0f; // asm leaves st(0) untouched on this path
    }

    uint32_t* elem = ext_005B11D0(reinterpret_cast<uintptr_t>(obj20), 2);
    // Value stays on the x87 stack (st(0)) and is returned to the caller.
    float f = *reinterpret_cast<float*>(elem);

    uint32_t idx = ext_006A6DE0();
    ext_0053D3C0(self);

    auto glPushMatrix = *reinterpret_cast<void(__stdcall**)()>(&mem_00925414);
    auto glPopMatrix = *reinterpret_cast<void(__stdcall**)()>(&mem_00925404);
    auto glRotatef = *reinterpret_cast<void(__stdcall**)(float, float, float, float)>(&mem_009254CC);

    glPushMatrix();

    if (idx <= 5) {
        const float deg90 = *reinterpret_cast<const float*>(&mem_00955A30);
        const float degNeg90 = *reinterpret_cast<const float*>(&mem_00955D14);
        const float deg180 = *reinterpret_cast<const float*>(&mem_00955D10);

        float angle = 0.0f, x = 0.0f, y = 0.0f, z = 0.0f;
        switch (idx) {
            case 0: angle = deg90;    x = 0.0f; y = 1.0f; z = 0.0f; break;
            case 1: angle = degNeg90; x = 1.0f; y = 0.0f; z = 0.0f; break;
            case 2: // table entry not recovered from binary; mapped to the same block as case 3
            case 3: angle = degNeg90; x = 0.0f; y = 1.0f; z = 0.0f; break;
            case 4: angle = deg90;    x = 1.0f; y = 0.0f; z = 0.0f; break;
            default: angle = deg180;  x = 0.0f; y = 1.0f; z = 0.0f; break; // case 5
        }
        glRotatef(angle, x, y, z);
    }

    void* obj3c = lift_field<void*>(self, 0x3c);
    if (obj3c != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj3c);
        auto child = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vtbl[0x58 / sizeof(void*)]);
        child(obj3c, arg);
    }

    glPopMatrix();
    return f;
}
} // namespace lift_0053D870
