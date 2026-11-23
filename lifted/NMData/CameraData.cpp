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
