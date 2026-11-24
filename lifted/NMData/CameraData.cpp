// Lifted C++ translation unit: lifted/NMData/CameraData.cpp
#include "lift_compat.h"
#include <string>
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005DCDA0(void* self, void* owner);
// Callee 0x005CFD60: classifies the argument; called with the object as thiscall `this` (ecx) and the argument on the stack.
extern "C" uint32_t __thiscall ext_005CFD60(void* self, uint32_t arg);
// Callee 0x0058A3C0: AnimatableTransform::vfunc_57, thiscall with one stack argument.
extern "C" void* __thiscall ext_0058A3C0(void* self, uint32_t arg);

extern "C" uint32_t __thiscall ext_005CFD60(void* self, uint32_t arg);
// Callee 0x0058A3C0: AnimatableTransform::vfunc_57, thiscall with one stack argument.
extern "C" void* __thiscall ext_0058A3C0(void* self, uint32_t arg);
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005DCFB0(void* self) {
    void* mem = ext_006A5C62(0x2C8);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005DCDA0(mem, owner);
}

// [0x005D06E0] NMData::CameraData::vfunc_57 (44 bytes)
// @name NMData::CameraData::vfunc_57
// @class NMData::CameraData
// @summary Classifies the argument via 0x005CFD60; if the result is 3, forwards to AnimatableTransform::vfunc_57, otherwise returns a pointer into the 8-byte-stride table at this+0x264 indexed by the result.
// @field NMData::CameraData +0x264 uint8_t field_0x264
void* __thiscall fn_005D06E0(void* self, uint32_t arg) {
    uint32_t kind = ext_005CFD60(self, arg);
    if (kind == 3) {
        return ext_0058A3C0(self, arg);
    }
    auto* base = reinterpret_cast<uint8_t*>(self);
    return base + 0x264 + static_cast<uintptr_t>(kind) * 8;
}

// [0x005CFC20]
namespace lift_005CFC20 {
// @name NMData::CameraData::vfunc_14
// @class NMData::CameraData
// @summary Handles property/message 0x1b9 on CameraData by calling sub_00661650 or sub_0046F7D0, otherwise delegates to NMData::AxisDefineSensorData::vfunc_14.
// @field NMData::CameraData +0x1a8 uint8_t field_0x1a8
// @field NMData::CameraData +0x1f0 uint8_t field_0x1f0

extern void* __thiscall ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
extern void __thiscall ext_00661650(void* self, void* arg1);
extern void __cdecl ext_0046F7D0(void* arg1);

void* __thiscall fn_005CFC20(void* self, void* arg1, uint32_t arg2) {
    if (arg2 != 0x1b9) {
        ext_0058F6B0(self, arg1, arg2);
        return arg1;
    }

    auto* base = static_cast<uint8_t*>(self);
    if (base[0x1f0] != 0) {
        ext_00661650(arg1, base + 0x1a8);
    } else {
        ext_0046F7D0(arg1);
    }
    return arg1;
}
} // namespace lift_005CFC20

// [0x005D13B0] NMData::CameraData::vfunc_7_off_C (115 bytes)
namespace lift_005D13B0 {
// Known callee 0x005B11D0: sub_005B11D0 (Returns a pointer to the 32-bit element at the given index in an inline array at offset 0x10.)
extern uint32_t* ext_005B11D0(uintptr_t self, uint32_t index);
// Global guard byte set to 1 while this function runs and cleared to 0 on exit.
extern uint8_t mem_00B3F200;

// @name NMData::CameraData::vfunc_7_off_C
// @class NMData::CameraData
// @summary Sets the guard flag, queries a float via vtable slot 1 of the object at +0x25C, stores it into the element at +0x204, and marks +0x208 as set.
// @field NMData::CameraData +0x204 uint8_t field_0x204
// @field NMData::CameraData +0x208 uint8_t field_0x208
// @field NMData::CameraData +0x258 float field_0x258
// @field NMData::CameraData +0x25C void* field_0x25c
void fn_005D13B0(void* self) {
    mem_00B3F200 = 1;

    // Query the float through vtable slot 1 (offset 4) of the object at +0x25C.
    void* obj = lift_field<void*>(self, 0x25C);
    void** vtbl = *reinterpret_cast<void***>(obj);
    using QueryFn = float(__thiscall*)(void* self, float* out);
    auto query = reinterpret_cast<QueryFn>(vtbl[1]);
    float value = query(obj, &lift_field<float>(self, 0x258));

    // Store the value into the element at index 0 of the inline array at +0x204.
    uint32_t* elem = ext_005B11D0(reinterpret_cast<uintptr_t>(self) + 0x204, 0);
    *reinterpret_cast<float*>(elem) = value;

    lift_field<uint8_t>(self, 0x208) = 1;
    mem_00B3F200 = 0;
}
} // namespace lift_005D13B0
