// Lifted C++ translation unit: lifted/NMData/auto_tiny.cpp
#include "lift_compat.h"
// AnimatableTransform::vfunc_9 (0x004F97F0), reached by tail call. Takes its
// `this` pointer in ecx (__fastcall); this thunk supplies the adjusted pointer.
extern "C" void __fastcall ext_004F97F0(void* self);
extern "C" void ext_004C6850(void* self);
extern "C" int mem_00924FDC;
#include <cstring>
#include <cstdint>

#include <cstdint>
// @name NMData::State::vfunc_9_off_10
// @class NMData::State
// @summary This-adjustor thunk: rebases `this` from the secondary base subobject (-0x8) and tail-calls AnimatableTransform::vfunc_9.
void fn_00499B40(void* self) {
    void* primary_this = reinterpret_cast<uint8_t*>(self) - 0x8;
    ext_004F97F0(primary_this);
}

// [0x004C65B0] NMData::ForceEventData::vfunc_1_off_C (8 bytes)
// @name NMData::ForceEventData::vfunc_1_off_C
// @class NMData::ForceEventData
// @summary This-adjustor thunk: rebases this by -0xC (to the primary base subobject) and tail-forwards to vfunc_0.
void fn_004C65B0(void* self) {
    ext_004C6850(static_cast<char*>(self) - 0xC);
}

// [0x006744A0] NMData::State::vfunc_7 (9 bytes)
// @name NMData::State::vfunc_7
// @class NMData::State
// @summary This-adjustor thunk: offsets this by 0x1c and forwards the call to the function pointer stored at mem_00924FDC.
// @field NMData::State +0x1c void* adjusted_base
extern "C" void __fastcall fn_006744A0(void* self) {
    typedef void (__fastcall* ForwardFn)(void* self);
    char* adjusted = static_cast<char*>(self) + 0x1c;
    ForwardFn target = reinterpret_cast<ForwardFn>(static_cast<uintptr_t>(mem_00924FDC));
    target(adjusted);
}

// [0x004CE8C0] NMData::IncarnationEventData::vfunc_88 (10 bytes)
// @name NMData::IncarnationEventData::vfunc_88
// @class NMData::IncarnationEventData
// @summary Forwards the call to the virtual method at vtable byte offset 0x158 on the same object.
// @field NMData::IncarnationEventData +0x00 void* vtable

// Forwarding target signature: the original thunk does not know or touch the
// callee's arguments; it only swaps in the vtable slot and jumps. The C++
// stand-in takes only `self`, so the callee's extra arguments are not forwarded.
typedef void (*VirtualForwardFn)(void* self);

void fn_004CE8C0(void* self) {
    // vtable pointer is the first dword of the object.
    char* vtable = *reinterpret_cast<char**>(self);
    // Slot at byte offset 0x158 inside the vtable.
    VirtualForwardFn target =
        *reinterpret_cast<VirtualForwardFn*>(vtable + 0x158);
    target(self);
}

// [0x00622320] NMData::SkeletalCalibrationVariables::vfunc_19 (10 bytes)
// @name NMData::SkeletalCalibrationVariables::vfunc_19
// @class NMData::SkeletalCalibrationVariables
// @summary Stores a single float argument into the object at offset +0x10 (thiscall-style setter, callee pops 4 bytes).
// @field NMData::SkeletalCalibrationVariables +0x10 float field_0x10
void fn_00622320(void* self, int /*edx_unused*/, float value) {
    std::uint8_t* base = static_cast<std::uint8_t*>(self);
    std::memcpy(base + 0x10, &value, sizeof(float));
}

// [0x00622330] NMData::SkeletalCalibrationVariables::vfunc_20 (10 bytes)
// @name NMData::SkeletalCalibrationVariables::vfunc_20
// @class NMData::SkeletalCalibrationVariables
// @summary Stores the single float argument into the object's field at +0x14.
// @field NMData::SkeletalCalibrationVariables +0x14 float field_0x14
extern "C" void __fastcall fn_00622330(void* self, int edx_unused, float value) {
    (void)edx_unused;
    *reinterpret_cast<float*>(static_cast<unsigned char*>(self) + 0x14) = value;
}

// [0x00622340] NMData::SkeletalCalibrationVariables::vfunc_21 (10 bytes)
// @name NMData::SkeletalCalibrationVariables::vfunc_21
// @class NMData::SkeletalCalibrationVariables
// @summary Stores the single float argument into the object's field at +0x18.
// @field NMData::SkeletalCalibrationVariables +0x18 float field_0x18
extern "C" void __fastcall fn_00622340(void* self, int /*edx_unused*/, float value) {
    std::uint8_t* base = static_cast<std::uint8_t*>(self);
    std::memcpy(base + 0x18, &value, sizeof(float));
}

// [0x00622350] NMData::SkeletalCalibrationVariables::vfunc_22 (10 bytes)
// @name NMData::SkeletalCalibrationVariables::vfunc_22
// @class NMData::SkeletalCalibrationVariables
// @summary Stores the single float argument into the object's field at +0x1c.
// @field NMData::SkeletalCalibrationVariables +0x1c float field_0x1c
extern "C" void __fastcall fn_00622350(void* self, int /*edx_unused*/, float value) {
    std::uint8_t* base = static_cast<std::uint8_t*>(self);
    std::memcpy(base + 0x1c, &value, sizeof(float));
}

// [0x00622360] NMData::SkeletalCalibrationVariables::vfunc_23 (10 bytes)
// @name NMData::SkeletalCalibrationVariables::vfunc_23
// @class NMData::SkeletalCalibrationVariables
// @summary Stores the single float argument into the object's field at +0x20.
// @field NMData::SkeletalCalibrationVariables +0x20 float field_0x20
extern "C" void __fastcall fn_00622360(void* self, int /*edx_unused*/, float value) {
    std::uint8_t* base = static_cast<std::uint8_t*>(self);
    std::memcpy(base + 0x20, &value, sizeof(float));
}

// [0x00622370] NMData::SkeletalCalibrationVariables::vfunc_24 (10 bytes)
// @name NMData::SkeletalCalibrationVariables::vfunc_24
// @class NMData::SkeletalCalibrationVariables
// @summary Stores the single float argument into the object's field at +0x24.
// @field NMData::SkeletalCalibrationVariables +0x24 float field_0x24
extern "C" void __fastcall fn_00622370(void* self, int /*edx_unused*/, float value) {
    std::uint8_t* base = static_cast<std::uint8_t*>(self);
    std::memcpy(base + 0x24, &value, sizeof(float));
}

// [0x00622780] NMData::HingeCalibrationVariables::vfunc_3 (10 bytes)
// @name NMData::HingeCalibrationVariables::vfunc_3
// @class NMData::HingeCalibrationVariables
// @summary Stores the single float argument into the object's field at +0x04.
// @field NMData::HingeCalibrationVariables +0x04 float field_0x04
extern "C" void __fastcall fn_00622780(void* self, int edx_unused, float value) {
    (void)edx_unused;
    float* field = reinterpret_cast<float*>(static_cast<char*>(self) + 0x04);
    *field = value;
}

// [0x00622790] NMData::HingeCalibrationVariables::vfunc_4 (10 bytes)
// @name NMData::HingeCalibrationVariables::vfunc_4
// @class NMData::HingeCalibrationVariables
// @summary Stores the single float argument into the object at offset +0x08 (thiscall, ret 4).
// @field NMData::HingeCalibrationVariables +0x08 float field_0x08
extern "C" void __fastcall fn_00622790(void* self, int edx_unused, float value) {
    (void)edx_unused;
    float* field = reinterpret_cast<float*>(static_cast<char*>(self) + 0x08);
    *field = value;
}

// [0x006227A0] Stores a float argument into the object at +0x0C.
// @name NMData::HingeCalibrationVariables::vfunc_5
// @class NMData::HingeCalibrationVariables
// @summary Sets the float at this+0x0C to the single float argument (stdcall-style ret 4 thiscall).
// @field NMData::HingeCalibrationVariables +0x0C float field_0x0C
extern "C" void __fastcall fn_006227A0(void* self, int edx_unused, float value) {
    (void)edx_unused;
    *reinterpret_cast<float*>(static_cast<unsigned char*>(self) + 0x0C) = value;
}
