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
extern "C" void __fastcall ext_0058AF80(void* self);
extern "C" void __fastcall ext_004773D0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name NMData::ForceEventData::vfunc_1_off_C
// @class NMData::ForceEventData
// @summary This-adjustor thunk: rebases this by -0xC (to the primary base subobject) and tail-forwards to vfunc_0.
void fn_004C65B0(void* self) {
    ext_004C6850(static_cast<char*>(self) - 0xC);
}
extern "C" void __fastcall ext_0047DBC0(void* self);
extern "C" void __fastcall ext_005B0D90(void* self);
extern "C" void __fastcall ext_0048DE70(void* self);
extern "C" void __fastcall ext_004869D0(void* self);
extern "C" void __fastcall ext_00487B00(void* self);
extern "C" void __fastcall ext_0048DC60(void* self);
extern "C" void __fastcall ext_00499CC0(void* self);
extern "C" void __fastcall ext_00499BA0(void* self);
extern "C" void __fastcall ext_00682FD0(void* self);
extern "C" void __fastcall ext_0049BE50(void* self);
extern "C" void __fastcall ext_004A0130(void* self);
extern "C" void __fastcall ext_0049ABC0(void* self);
extern "C" void __fastcall ext_0049F8D0(void* self);
extern "C" void __fastcall ext_004AC730(void* self);
extern "C" void __fastcall ext_004AB9D0(void* self);
extern "C" void __fastcall ext_004AC0D0(void* self);
extern "C" void __fastcall ext_004AD080(void* self);
extern "C" void __fastcall ext_004B5610(void* self);
extern "C" void __fastcall ext_004BC430(void* self);
extern "C" void __fastcall ext_00501C50(void* self);
extern "C" void __fastcall ext_004BED60(void* self);
extern "C" void __fastcall ext_004C24A0(void* self);
extern "C" void __fastcall ext_004C1DE0(void* self);
extern "C" void __fastcall ext_004C2330(void* self);
extern "C" void __fastcall ext_004C24C0(void* self);
extern "C" void __fastcall ext_004C4E00(void* self);
extern "C" void __fastcall ext_004C6990(void* self);
extern "C" void __fastcall ext_004C71C0(void* self);
extern "C" void __fastcall ext_004C81F0(void* self);
extern "C" void __fastcall ext_004C80A0(void* self);
extern "C" void __fastcall ext_004C8210(void* self);
extern "C" void __fastcall ext_004CD3A0(void* self);
extern "C" void __fastcall ext_004CA6A0(void* self);
extern "C" void __fastcall ext_004CCF10(void* self);
extern "C" void __fastcall ext_004CD4A0(void* self);
extern "C" void __fastcall ext_004CE740(void* self);
extern "C" void __fastcall ext_004CFE00(void* self);
extern "C" void __fastcall ext_004CE5F0(void* self);
extern "C" void __fastcall ext_004CFB90(void* self);
extern "C" void __fastcall ext_004D3350(void* self);
extern "C" void __fastcall ext_004D0BB0(void* self);
extern "C" void __fastcall ext_004D0E10(void* self);
extern "C" void __fastcall ext_004D3290(void* self);
extern "C" void __fastcall ext_004D95A0(void* self);
extern "C" void __fastcall ext_00495250(void* self);
extern "C" void __fastcall ext_004DB920(void* self);
extern "C" void __fastcall ext_004D4310(void* self);
extern "C" void __fastcall ext_004DADE0(void* self);
extern "C" void __fastcall ext_004DBE80(void* self);
extern "C" void __fastcall ext_004E7350(void* self);
extern "C" void __fastcall ext_004DDF00(void* self);
extern "C" void __fastcall ext_004E4ED0(void* self);
extern "C" void __fastcall ext_004E6E90(void* self);
extern "C" void __fastcall ext_004EC640(void* self);
extern "C" void __fastcall ext_004EC580(void* self);
extern "C" void __fastcall ext_005052F0(void* self);
extern "C" void __fastcall ext_00526BE0(void* self);
extern "C" void __fastcall ext_005086E0(void* self);
extern "C" void __fastcall ext_00508790(void* self);
extern "C" void __fastcall ext_0050D290(void* self);
extern "C" void __fastcall ext_004BEB50(void* self);
extern "C" void __fastcall ext_004BE680(void* self);
extern "C" void __fastcall ext_00515820(void* self);
extern "C" void __fastcall ext_00519CE0(void* self);
extern "C" void __fastcall ext_00526960(void* self);
extern "C" void __fastcall ext_0055E2B0(void* self);
extern "C" void __fastcall ext_005EF450(void* self);
extern "C" void __fastcall ext_00585250(void* self);
extern "C" void __fastcall ext_005F09E0(void* self);
extern "C" void __fastcall ext_006200A0(void* self);
extern "C" void __fastcall ext_00587D50(void* self);
extern "C" void __fastcall ext_00870A50(void* self);
extern "C" void __fastcall ext_00587FA0(void* self);
extern "C" void __fastcall ext_005A7B10(void* self);
extern "C" void __fastcall ext_005A7120(void* self);
extern "C" void __fastcall ext_005A7280(void* self);
extern "C" void __fastcall ext_005A9D30(void* self);
extern "C" void __fastcall ext_005A2FB0(void* self);
extern "C" void __fastcall ext_005A9960(void* self);
extern "C" void __fastcall ext_005A9970(void* self);
extern "C" void __fastcall ext_005C1D30(void* self);
extern "C" void __fastcall ext_005C1250(void* self);
extern "C" void __fastcall ext_005CC1E0(void* self);
extern "C" void __fastcall ext_005CC370(void* self);
extern "C" void __fastcall ext_005CC5A0(void* self);
extern "C" void __fastcall ext_005C83D0(void* self);
extern "C" void __fastcall ext_005C8650(void* self);
extern "C" void __fastcall ext_005C88B0(void* self);
extern "C" void __fastcall ext_005CF2B0(void* self);
extern "C" void __fastcall ext_005DCD80(void* self);
extern "C" void __fastcall ext_005DC6C0(void* self);
extern "C" void __fastcall ext_005DCA20(void* self);
extern "C" void __fastcall ext_005F18B0(void* self);
extern "C" void __fastcall ext_005F18D0(void* self);
extern "C" void __fastcall ext_005F18F0(void* self);
extern "C" void __fastcall ext_005F1910(void* self);
extern "C" void __fastcall ext_005EFAF0(void* self);
extern "C" void __fastcall ext_005EFFB0(void* self);
extern "C" void __fastcall ext_005F05E0(void* self);
extern "C" void __fastcall ext_005F0F60(void* self);
extern "C" void __fastcall ext_006096D0(void* self);
extern "C" void __fastcall ext_0060B2B0(void* self);
extern "C" void __fastcall ext_0060BA10(void* self);
extern "C" void __fastcall ext_0060BCC0(void* self);
extern "C" void __fastcall ext_0060C4C0(void* self);
extern "C" void __fastcall ext_0060EE90(void* self);
extern "C" void __fastcall ext_0060EB90(void* self);
extern "C" void __fastcall ext_0060F170(void* self);
extern "C" void __fastcall ext_0060ED60(void* self);
extern "C" void __fastcall ext_0060F970(void* self);
extern "C" void __fastcall ext_0060F5E0(void* self);
extern "C" void __fastcall ext_0060FE90(void* self);
extern "C" void __fastcall ext_0060FBE0(void* self);
extern "C" void __fastcall ext_00610D10(void* self);
extern "C" void __fastcall ext_0061E910(void* self);
extern "C" void __fastcall ext_0061ECB0(void* self);
extern "C" void __fastcall ext_0061D380(void* self);
extern "C" void __fastcall ext_0061D990(void* self);
extern "C" void __fastcall ext_006268F0(void* self);
// Table of 32-bit entries in the image data section (contents not recovered here).
extern DWORD mem_0095F750[];

extern DWORD mem_0095F750[];
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

// [0x00499B30] NMData::Transition::vfunc_17 (11 bytes)
// @name NMData::Transition::vfunc_17
// @class NMData::Transition
// @summary Returns the address of the subobject at offset +0x08 of this, or null when this is null.
void* fn_00499B30(void* self) {
    if (self == 0) {
        return 0;
    }
    return static_cast<char*>(self) + 0x8;
}

// [0x004C65A0] NMData::ForceEventData::vfunc_0_off_158 (11 bytes)
// @name NMData::ForceEventData::vfunc_0_off_158
// @class NMData::ForceEventData
// @summary Non-virtual-thunk adjustor: rebases this from the LoadableFromXML subobject (+0x158) to the ForceEventData object and tail-calls ForceEventData::vfunc_0.
void fn_004C65A0(void* self) {
    // sub ecx, 0x158 ; jmp ForceEventData::vfunc_0
    ext_004C6850(static_cast<char*>(self) - 0x158);
}

// [0x004973A0] NMData::Transition::vfunc_0_off_C (14 bytes)
// @name NMData::Transition::getAndClearField_B4
// @class NMData::Transition
// @summary Returns the byte at this+0xB4 and resets it to zero.
// @field NMData::Transition +0xB4 uint8_t field_0xB4
uint8_t fn_004973A0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    uint8_t value = base[0xB4];
    base[0xB4] = 0;
    return value;
}

// [0x00402100] NMData::AnimationEventData::vfunc_0_off_150 (11 bytes)
// @name NMData::AnimationEventData::vfunc_0_off_150
// @class NMData::AnimationEventData
// @summary This-adjustor thunk: adjusts `this` by +0xFFFFFEB0 and tail-calls sub_0058AF80.
extern "C" void __fastcall fn_00402100(void* self) {
    ext_0058AF80(static_cast<char*>(self) + 0xFFFFFEB0);
}

// [0x00477450] NMData::MaterialPair::vfunc_0 (30 bytes)
// @name NMData::MaterialPair::vfunc_0
// @class NMData::MaterialPair
// @summary MSVC scalar deleting destructor: calls sub_004773D0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00477450(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004773D0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0047FF80] NMData::SceneData::vfunc_0 (30 bytes)
// @name NMData::SceneData::vfunc_0
// @class NMData::SceneData
// @summary MSVC scalar deleting destructor: calls sub_0047DBC0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0047FF80(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0047DBC0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0048C150] NMData::PoseData::vfunc_0 (30 bytes)
// @name NMData::PoseData::vfunc_0
// @class NMData::PoseData
// @summary MSVC scalar deleting destructor: calls sub_005B0D90 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0048C150(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005B0D90(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0048DA70] NMData::DesiredPoseEventData::vfunc_0_off_158 (11 bytes)
// @name NMData::DesiredPoseEventData::vfunc_0_off_158
// @class NMData::DesiredPoseEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::DesiredPoseEventData::vfunc_0.
extern "C" void __fastcall fn_0048DA70(void* self) {
    ext_0048DE70(static_cast<char*>(self) - 0x158);
}

// [0x0048DA80] NMData::DesiredPoseEventData::vfunc_1_off_C (8 bytes)
// @name NMData::DesiredPoseEventData::vfunc_1_off_C
// @class NMData::DesiredPoseEventData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::DesiredPoseEventData::vfunc_0.
extern "C" void __fastcall fn_0048DA80(void* self) {
    ext_0048DE70(static_cast<char*>(self) - 0xC);
}

// [0x0048DA90] NMData::DesiredPoseEventData::vfunc_3_off_158 (11 bytes)
// @name NMData::DesiredPoseEventData::vfunc_3_off_158
// @class NMData::DesiredPoseEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::DesiredPoseEventData::vfunc_22.
extern "C" void __fastcall fn_0048DA90(void* self) {
    ext_004869D0(static_cast<char*>(self) - 0x158);
}

// [0x0048DAA0] NMData::DesiredPoseEventData::vfunc_1_off_158 (11 bytes)
// @name NMData::DesiredPoseEventData::vfunc_1_off_158
// @class NMData::DesiredPoseEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::DesiredPoseEventData::vfunc_21.
extern "C" void __fastcall fn_0048DAA0(void* self) {
    ext_00487B00(static_cast<char*>(self) - 0x158);
}

// [0x0048DE70] NMData::DesiredPoseEventData::vfunc_0 (30 bytes)
// @name NMData::DesiredPoseEventData::vfunc_0
// @class NMData::DesiredPoseEventData
// @summary MSVC scalar deleting destructor: calls sub_0048DC60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0048DE70(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0048DC60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00499B50] NMData::Transition::vfunc_0_off_10 (8 bytes)
// @name NMData::Transition::vfunc_0_off_10
// @class NMData::Transition
// @summary This-adjustor thunk: adjusts `this` by -0x10 and tail-calls NMData::Transition::vfunc_0.
extern "C" void __fastcall fn_00499B50(void* self) {
    ext_00499CC0(static_cast<char*>(self) - 0x10);
}

// [0x00499B60] NMData::Transition::vfunc_0_off_8 (8 bytes)
// @name NMData::Transition::vfunc_0_off_8
// @class NMData::Transition
// @summary This-adjustor thunk: adjusts `this` by -0x8 and tail-calls NMData::Transition::vfunc_0.
extern "C" void __fastcall fn_00499B60(void* self) {
    ext_00499CC0(static_cast<char*>(self) - 0x8);
}

// [0x00499CC0] NMData::Transition::vfunc_0 (30 bytes)
// @name NMData::Transition::vfunc_0
// @class NMData::Transition
// @summary MSVC scalar deleting destructor: calls sub_00499BA0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00499CC0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00499BA0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0049BE50] NMData::ValuePtrData::vfunc_0 (30 bytes)
// @name NMData::ValuePtrData::vfunc_0
// @class NMData::ValuePtrData
// @summary MSVC scalar deleting destructor: calls sub_00682FD0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0049BE50(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00682FD0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0049BE70] NMData::ValuePtrData::vfunc_0_off_8 (8 bytes)
// @name NMData::ValuePtrData::vfunc_0_off_8
// @class NMData::ValuePtrData
// @summary This-adjustor thunk: adjusts `this` by -0x8 and tail-calls NMData::ValuePtrData::vfunc_0.
extern "C" void __fastcall fn_0049BE70(void* self) {
    ext_0049BE50(static_cast<char*>(self) - 0x8);
}

// [0x0049FB20] NMData::State::vfunc_0_off_10 (8 bytes)
// @name NMData::State::vfunc_0_off_10
// @class NMData::State
// @summary This-adjustor thunk: adjusts `this` by -0x10 and tail-calls NMData::State::vfunc_0.
extern "C" void __fastcall fn_0049FB20(void* self) {
    ext_004A0130(static_cast<char*>(self) - 0x10);
}

// [0x0049FB30] NMData::State::vfunc_0_off_8 (8 bytes)
// @name NMData::State::vfunc_0_off_8
// @class NMData::State
// @summary This-adjustor thunk: adjusts `this` by -0x8 and tail-calls NMData::State::vfunc_0.
extern "C" void __fastcall fn_0049FB30(void* self) {
    ext_004A0130(static_cast<char*>(self) - 0x8);
}

// [0x0049FB40] NMData::State::vfunc_0_off_14 (8 bytes)
// @name NMData::State::vfunc_0_off_14
// @class NMData::State
// @summary This-adjustor thunk: adjusts `this` by -0x14 and tail-calls sub_0049ABC0.
extern "C" void __fastcall fn_0049FB40(void* self) {
    ext_0049ABC0(static_cast<char*>(self) - 0x14);
}

// [0x004A0130] NMData::State::vfunc_0 (30 bytes)
// @name NMData::State::vfunc_0
// @class NMData::State
// @summary MSVC scalar deleting destructor: calls sub_0049F8D0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004A0130(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0049F8D0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004AC240] NMData::BehaviourData::vfunc_0_off_158 (11 bytes)
// @name NMData::BehaviourData::vfunc_0_off_158
// @class NMData::BehaviourData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::BehaviourData::vfunc_0.
extern "C" void __fastcall fn_004AC240(void* self) {
    ext_004AC730(static_cast<char*>(self) - 0x158);
}

// [0x004AC250] NMData::BehaviourData::vfunc_1_off_C (8 bytes)
// @name NMData::BehaviourData::vfunc_1_off_C
// @class NMData::BehaviourData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::BehaviourData::vfunc_0.
extern "C" void __fastcall fn_004AC250(void* self) {
    ext_004AC730(static_cast<char*>(self) - 0xC);
}

// [0x004AC260] NMData::BehaviourData::vfunc_3_off_158 (11 bytes)
// @name NMData::BehaviourData::vfunc_3_off_158
// @class NMData::BehaviourData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::BehaviourData::vfunc_22.
extern "C" void __fastcall fn_004AC260(void* self) {
    ext_004AB9D0(static_cast<char*>(self) - 0x158);
}

// [0x004AC730] NMData::BehaviourData::vfunc_0 (30 bytes)
// @name NMData::BehaviourData::vfunc_0
// @class NMData::BehaviourData
// @summary MSVC scalar deleting destructor: calls sub_004AC0D0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004AC730(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004AC0D0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004AD760] NMData::BehaviourData::vfunc_1_off_158 (11 bytes)
// @name NMData::BehaviourData::vfunc_1_off_158
// @class NMData::BehaviourData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::BehaviourData::vfunc_21.
extern "C" void __fastcall fn_004AD760(void* self) {
    ext_004AD080(static_cast<char*>(self) - 0x158);
}

// [0x004B58A0] NMData::GraphEngineData::vfunc_0 (30 bytes)
// @name NMData::GraphEngineData::vfunc_0
// @class NMData::GraphEngineData
// @summary MSVC scalar deleting destructor: calls sub_004B5610 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004B58A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004B5610(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004BC8E0] NMData::EngineData::vfunc_0 (30 bytes)
// @name NMData::EngineData::vfunc_0
// @class NMData::EngineData
// @summary MSVC scalar deleting destructor: calls sub_004BC430 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004BC8E0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004BC430(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004BED60] NMData::EvolveEngineData::vfunc_0 (30 bytes)
// @name NMData::EvolveEngineData::vfunc_0
// @class NMData::EvolveEngineData
// @summary MSVC scalar deleting destructor: calls sub_00501C50 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004BED60(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00501C50(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004BED80] NMData::EvolveEngineData::vfunc_0_off_8 (8 bytes)
// @name NMData::EvolveEngineData::vfunc_0_off_8
// @class NMData::EvolveEngineData
// @summary This-adjustor thunk: adjusts `this` by -0x8 and tail-calls NMData::EvolveEngineData::vfunc_0.
extern "C" void __fastcall fn_004BED80(void* self) {
    ext_004BED60(static_cast<char*>(self) - 0x8);
}

// [0x004C23E0] NMData::TriggeredEventData::vfunc_0_off_158 (11 bytes)
// @name NMData::TriggeredEventData::vfunc_0_off_158
// @class NMData::TriggeredEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::TriggeredEventData::vfunc_0.
extern "C" void __fastcall fn_004C23E0(void* self) {
    ext_004C24A0(static_cast<char*>(self) - 0x158);
}

// [0x004C23F0] NMData::TriggeredEventData::vfunc_1_off_C (8 bytes)
// @name NMData::TriggeredEventData::vfunc_1_off_C
// @class NMData::TriggeredEventData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::TriggeredEventData::vfunc_0.
extern "C" void __fastcall fn_004C23F0(void* self) {
    ext_004C24A0(static_cast<char*>(self) - 0xC);
}

// [0x004C2400] NMData::TriggeredEventData::vfunc_3_off_158 (11 bytes)
// @name NMData::TriggeredEventData::vfunc_3_off_158
// @class NMData::TriggeredEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::TriggeredEventData::vfunc_22.
extern "C" void __fastcall fn_004C2400(void* self) {
    ext_004C1DE0(static_cast<char*>(self) - 0x158);
}

// [0x004C24A0] NMData::TriggeredEventData::vfunc_0 (30 bytes)
// @name NMData::TriggeredEventData::vfunc_0
// @class NMData::TriggeredEventData
// @summary MSVC scalar deleting destructor: calls sub_004C2330 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004C24A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004C2330(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004C28B0] NMData::TriggeredEventData::vfunc_1_off_158 (11 bytes)
// @name NMData::TriggeredEventData::vfunc_1_off_158
// @class NMData::TriggeredEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::TriggeredEventData::vfunc_21.
extern "C" void __fastcall fn_004C28B0(void* self) {
    ext_004C24C0(static_cast<char*>(self) - 0x158);
}

// [0x004C6590] NMData::ForceEventData::vfunc_3_off_158 (11 bytes)
// @name NMData::ForceEventData::vfunc_3_off_158
// @class NMData::ForceEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::ForceEventData::vfunc_22.
extern "C" void __fastcall fn_004C6590(void* self) {
    ext_004C4E00(static_cast<char*>(self) - 0x158);
}

// [0x004C6BE0] NMData::ForceEventData::vfunc_1_off_158 (11 bytes)
// @name NMData::ForceEventData::vfunc_1_off_158
// @class NMData::ForceEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::ForceEventData::vfunc_21.
extern "C" void __fastcall fn_004C6BE0(void* self) {
    ext_004C6990(static_cast<char*>(self) - 0x158);
}

// [0x004C8070] NMData::SeverEventData::vfunc_3_off_158 (11 bytes)
// @name NMData::SeverEventData::vfunc_3_off_158
// @class NMData::SeverEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::SeverEventData::vfunc_22.
extern "C" void __fastcall fn_004C8070(void* self) {
    ext_004C71C0(static_cast<char*>(self) - 0x158);
}

// [0x004C8080] NMData::SeverEventData::vfunc_0_off_158 (11 bytes)
// @name NMData::SeverEventData::vfunc_0_off_158
// @class NMData::SeverEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::SeverEventData::vfunc_0.
extern "C" void __fastcall fn_004C8080(void* self) {
    ext_004C81F0(static_cast<char*>(self) - 0x158);
}

// [0x004C8090] NMData::SeverEventData::vfunc_1_off_C (8 bytes)
// @name NMData::SeverEventData::vfunc_1_off_C
// @class NMData::SeverEventData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::SeverEventData::vfunc_0.
extern "C" void __fastcall fn_004C8090(void* self) {
    ext_004C81F0(static_cast<char*>(self) - 0xC);
}

// [0x004C81F0] NMData::SeverEventData::vfunc_0 (30 bytes)
// @name NMData::SeverEventData::vfunc_0
// @class NMData::SeverEventData
// @summary MSVC scalar deleting destructor: calls sub_004C80A0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004C81F0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004C80A0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004C9370] NMData::SeverEventData::vfunc_1_off_158 (11 bytes)
// @name NMData::SeverEventData::vfunc_1_off_158
// @class NMData::SeverEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::SeverEventData::vfunc_21.
extern "C" void __fastcall fn_004C9370(void* self) {
    ext_004C8210(static_cast<char*>(self) - 0x158);
}

// [0x004CCEE0] NMData::MetaBodyConstraintData::vfunc_0_off_158 (11 bytes)
// @name NMData::MetaBodyConstraintData::vfunc_0_off_158
// @class NMData::MetaBodyConstraintData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::MetaBodyConstraintData::vfunc_0.
extern "C" void __fastcall fn_004CCEE0(void* self) {
    ext_004CD3A0(static_cast<char*>(self) - 0x158);
}

// [0x004CCEF0] NMData::MetaBodyConstraintData::vfunc_1_off_C (8 bytes)
// @name NMData::MetaBodyConstraintData::vfunc_1_off_C
// @class NMData::MetaBodyConstraintData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::MetaBodyConstraintData::vfunc_0.
extern "C" void __fastcall fn_004CCEF0(void* self) {
    ext_004CD3A0(static_cast<char*>(self) - 0xC);
}

// [0x004CCF00] NMData::MetaBodyConstraintData::vfunc_3_off_158 (11 bytes)
// @name NMData::MetaBodyConstraintData::vfunc_3_off_158
// @class NMData::MetaBodyConstraintData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::MetaBodyConstraintData::vfunc_22.
extern "C" void __fastcall fn_004CCF00(void* self) {
    ext_004CA6A0(static_cast<char*>(self) - 0x158);
}

// [0x004CD3A0] NMData::MetaBodyConstraintData::vfunc_0 (30 bytes)
// @name NMData::MetaBodyConstraintData::vfunc_0
// @class NMData::MetaBodyConstraintData
// @summary MSVC scalar deleting destructor: calls sub_004CCF10 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004CD3A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004CCF10(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004CD7D0] NMData::MetaBodyConstraintData::vfunc_1_off_158 (11 bytes)
// @name NMData::MetaBodyConstraintData::vfunc_1_off_158
// @class NMData::MetaBodyConstraintData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::MetaBodyConstraintData::vfunc_21.
extern "C" void __fastcall fn_004CD7D0(void* self) {
    ext_004CD4A0(static_cast<char*>(self) - 0x158);
}

// [0x004CFA50] NMData::IncarnationEventData::vfunc_3_off_158 (11 bytes)
// @name NMData::IncarnationEventData::vfunc_3_off_158
// @class NMData::IncarnationEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::IncarnationEventData::vfunc_22.
extern "C" void __fastcall fn_004CFA50(void* self) {
    ext_004CE740(static_cast<char*>(self) - 0x158);
}

// [0x004CFA60] NMData::IncarnationEventData::vfunc_0_off_158 (11 bytes)
// @name NMData::IncarnationEventData::vfunc_0_off_158
// @class NMData::IncarnationEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::IncarnationEventData::vfunc_0.
extern "C" void __fastcall fn_004CFA60(void* self) {
    ext_004CFE00(static_cast<char*>(self) - 0x158);
}

// [0x004CFA70] NMData::IncarnationEventData::vfunc_1_off_158 (11 bytes)
// @name NMData::IncarnationEventData::vfunc_1_off_158
// @class NMData::IncarnationEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::IncarnationEventData::vfunc_21.
extern "C" void __fastcall fn_004CFA70(void* self) {
    ext_004CE5F0(static_cast<char*>(self) - 0x158);
}

// [0x004CFA80] NMData::IncarnationEventData::vfunc_1_off_C (8 bytes)
// @name NMData::IncarnationEventData::vfunc_1_off_C
// @class NMData::IncarnationEventData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::IncarnationEventData::vfunc_0.
extern "C" void __fastcall fn_004CFA80(void* self) {
    ext_004CFE00(static_cast<char*>(self) - 0xC);
}

// [0x004CFE00] NMData::IncarnationEventData::vfunc_0 (30 bytes)
// @name NMData::IncarnationEventData::vfunc_0
// @class NMData::IncarnationEventData
// @summary MSVC scalar deleting destructor: calls sub_004CFB90 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004CFE00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004CFB90(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004D2DD0] NMData::TransitionEventData::vfunc_0_off_158 (11 bytes)
// @name NMData::TransitionEventData::vfunc_0_off_158
// @class NMData::TransitionEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::TransitionEventData::vfunc_0.
extern "C" void __fastcall fn_004D2DD0(void* self) {
    ext_004D3350(static_cast<char*>(self) - 0x158);
}

// [0x004D2DE0] NMData::TransitionEventData::vfunc_1_off_C (8 bytes)
// @name NMData::TransitionEventData::vfunc_1_off_C
// @class NMData::TransitionEventData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::TransitionEventData::vfunc_0.
extern "C" void __fastcall fn_004D2DE0(void* self) {
    ext_004D3350(static_cast<char*>(self) - 0xC);
}

// [0x004D2DF0] NMData::TransitionEventData::vfunc_3_off_158 (11 bytes)
// @name NMData::TransitionEventData::vfunc_3_off_158
// @class NMData::TransitionEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::TransitionEventData::vfunc_22.
extern "C" void __fastcall fn_004D2DF0(void* self) {
    ext_004D0BB0(static_cast<char*>(self) - 0x158);
}

// [0x004D2E00] NMData::TransitionEventData::vfunc_1_off_158 (11 bytes)
// @name NMData::TransitionEventData::vfunc_1_off_158
// @class NMData::TransitionEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::TransitionEventData::vfunc_21.
extern "C" void __fastcall fn_004D2E00(void* self) {
    ext_004D0E10(static_cast<char*>(self) - 0x158);
}

// [0x004D3350] NMData::TransitionEventData::vfunc_0 (30 bytes)
// @name NMData::TransitionEventData::vfunc_0
// @class NMData::TransitionEventData
// @summary MSVC scalar deleting destructor: calls sub_004D3290 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004D3350(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004D3290(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004D9580] NMData::RigNode::vfunc_1_off_C (8 bytes)
// @name NMData::RigNode::vfunc_1_off_C
// @class NMData::RigNode
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::RigNode::vfunc_0.
extern "C" void __fastcall fn_004D9580(void* self) {
    ext_004D95A0(static_cast<char*>(self) - 0xC);
}

// [0x004D95A0] NMData::RigNode::vfunc_0 (30 bytes)
// @name NMData::RigNode::vfunc_0
// @class NMData::RigNode
// @summary MSVC scalar deleting destructor: calls sub_00495250 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004D95A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00495250(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004DAB50] NMData::RigEventData::vfunc_0_off_158 (11 bytes)
// @name NMData::RigEventData::vfunc_0_off_158
// @class NMData::RigEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::RigEventData::vfunc_0.
extern "C" void __fastcall fn_004DAB50(void* self) {
    ext_004DB920(static_cast<char*>(self) - 0x158);
}

// [0x004DAB60] NMData::RigEventData::vfunc_1_off_C (8 bytes)
// @name NMData::RigEventData::vfunc_1_off_C
// @class NMData::RigEventData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::RigEventData::vfunc_0.
extern "C" void __fastcall fn_004DAB60(void* self) {
    ext_004DB920(static_cast<char*>(self) - 0xC);
}

// [0x004DAB70] NMData::RigEventData::vfunc_3_off_158 (11 bytes)
// @name NMData::RigEventData::vfunc_3_off_158
// @class NMData::RigEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::RigEventData::vfunc_22.
extern "C" void __fastcall fn_004DAB70(void* self) {
    ext_004D4310(static_cast<char*>(self) - 0x158);
}

// [0x004DB920] NMData::RigEventData::vfunc_0 (30 bytes)
// @name NMData::RigEventData::vfunc_0
// @class NMData::RigEventData
// @summary MSVC scalar deleting destructor: calls sub_004DADE0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004DB920(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004DADE0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004DC700] NMData::RigEventData::vfunc_1_off_158 (11 bytes)
// @name NMData::RigEventData::vfunc_1_off_158
// @class NMData::RigEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::RigEventData::vfunc_21.
extern "C" void __fastcall fn_004DC700(void* self) {
    ext_004DBE80(static_cast<char*>(self) - 0x158);
}

// [0x004E6900] NMData::AnimationEventData::vfunc_0_off_158 (11 bytes)
// @name NMData::AnimationEventData::vfunc_0_off_158
// @class NMData::AnimationEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::AnimationEventData::vfunc_0.
extern "C" void __fastcall fn_004E6900(void* self) {
    ext_004E7350(static_cast<char*>(self) - 0x158);
}

// [0x004E6910] NMData::AnimationEventData::vfunc_3_off_158 (11 bytes)
// @name NMData::AnimationEventData::vfunc_3_off_158
// @class NMData::AnimationEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::AnimationEventData::vfunc_22.
extern "C" void __fastcall fn_004E6910(void* self) {
    ext_004DDF00(static_cast<char*>(self) - 0x158);
}

// [0x004E6920] NMData::AnimationEventData::vfunc_1_off_C (8 bytes)
// @name NMData::AnimationEventData::vfunc_1_off_C
// @class NMData::AnimationEventData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::AnimationEventData::vfunc_0.
extern "C" void __fastcall fn_004E6920(void* self) {
    ext_004E7350(static_cast<char*>(self) - 0xC);
}

// [0x004E6930] NMData::AnimationEventData::vfunc_1_off_158 (11 bytes)
// @name NMData::AnimationEventData::vfunc_1_off_158
// @class NMData::AnimationEventData
// @summary This-adjustor thunk: adjusts `this` by -0x158 and tail-calls NMData::AnimationEventData::vfunc_21.
extern "C" void __fastcall fn_004E6930(void* self) {
    ext_004E4ED0(static_cast<char*>(self) - 0x158);
}

// [0x004E7350] NMData::AnimationEventData::vfunc_0 (30 bytes)
// @name NMData::AnimationEventData::vfunc_0
// @class NMData::AnimationEventData
// @summary MSVC scalar deleting destructor: calls sub_004E6E90 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004E7350(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004E6E90(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004EC560] NMData::TopLevelState::vfunc_0_off_10 (8 bytes)
// @name NMData::TopLevelState::vfunc_0_off_10
// @class NMData::TopLevelState
// @summary This-adjustor thunk: adjusts `this` by -0x10 and tail-calls NMData::TopLevelState::vfunc_0.
extern "C" void __fastcall fn_004EC560(void* self) {
    ext_004EC640(static_cast<char*>(self) - 0x10);
}

// [0x004EC570] NMData::TopLevelState::vfunc_0_off_8 (8 bytes)
// @name NMData::TopLevelState::vfunc_0_off_8
// @class NMData::TopLevelState
// @summary This-adjustor thunk: adjusts `this` by -0x8 and tail-calls NMData::TopLevelState::vfunc_0.
extern "C" void __fastcall fn_004EC570(void* self) {
    ext_004EC640(static_cast<char*>(self) - 0x8);
}

// [0x004EC640] NMData::TopLevelState::vfunc_0 (30 bytes)
// @name NMData::TopLevelState::vfunc_0
// @class NMData::TopLevelState
// @summary MSVC scalar deleting destructor: calls sub_004EC580 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004EC640(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004EC580(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00505340] NMData::VariableValue::vfunc_0 (30 bytes)
// @name NMData::VariableValue::vfunc_0
// @class NMData::VariableValue
// @summary MSVC scalar deleting destructor: calls sub_005052F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00505340(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005052F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00507430] NMData::NetworkConnectorData::vfunc_0 (30 bytes)
// @name NMData::NetworkConnectorData::vfunc_0
// @class NMData::NetworkConnectorData
// @summary MSVC scalar deleting destructor: calls sub_00526BE0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00507430(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00526BE0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00508930] NMData::TaskTemplateParam::vfunc_0 (30 bytes)
// @name NMData::TaskTemplateParam::vfunc_0
// @class NMData::TaskTemplateParam
// @summary MSVC scalar deleting destructor: calls sub_005086E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00508930(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005086E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00508A30] NMData::TaskParam::vfunc_0 (30 bytes)
// @name NMData::TaskParam::vfunc_0
// @class NMData::TaskParam
// @summary MSVC scalar deleting destructor: calls sub_00508790 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00508A30(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00508790(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0050D280] NMData::TaskManager::vfunc_0_off_4 (8 bytes)
// @name NMData::TaskManager::vfunc_0_off_4
// @class NMData::TaskManager
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls NMData::TaskManager::vfunc_0.
extern "C" void __fastcall fn_0050D280(void* self) {
    ext_0050D290(static_cast<char*>(self) - 0x4);
}

// [0x0050D290] NMData::TaskManager::vfunc_0 (30 bytes)
// @name NMData::TaskManager::vfunc_0
// @class NMData::TaskManager
// @summary MSVC scalar deleting destructor: calls sub_004BEB50 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0050D290(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004BEB50(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0050E4C0] NMData::PopulationData::vfunc_0 (30 bytes)
// @name NMData::PopulationData::vfunc_0
// @class NMData::PopulationData
// @summary MSVC scalar deleting destructor: calls sub_004BE680 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0050E4C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004BE680(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00515870] NMData::EvolverRuntimeOptions::vfunc_0 (30 bytes)
// @name NMData::EvolverRuntimeOptions::vfunc_0
// @class NMData::EvolverRuntimeOptions
// @summary MSVC scalar deleting destructor: calls sub_00515820 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00515870(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00515820(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00519EA0] NMData::Channel::vfunc_0 (30 bytes)
// @name NMData::Channel::vfunc_0
// @class NMData::Channel
// @summary MSVC scalar deleting destructor: calls sub_00519CE0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00519EA0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00519CE0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00526C60] NMData::NetworkConnectorData::vfunc_28 (8 bytes)
// @name NMData::NetworkConnectorData::vfunc_28
// @class NMData::NetworkConnectorData
// @summary This-adjustor thunk: adjusts `this` by +0x60 and tail-calls sub_00526960.
extern "C" void __fastcall fn_00526C60(void* self) {
    ext_00526960(static_cast<char*>(self) + 0x60);
}

// [0x0055E280] NMData::NullRelationshipData::vfunc_1_off_C (8 bytes)
// @name NMData::NullRelationshipData::vfunc_1_off_C
// @class NMData::NullRelationshipData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::NullRelationshipData::vfunc_0.
extern "C" void __fastcall fn_0055E280(void* self) {
    ext_0055E2B0(static_cast<char*>(self) - 0xC);
}

// [0x0055E2B0] NMData::NullRelationshipData::vfunc_0 (30 bytes)
// @name NMData::NullRelationshipData::vfunc_0
// @class NMData::NullRelationshipData
// @summary MSVC scalar deleting destructor: calls sub_005EF450 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0055E2B0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005EF450(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00585090] NMData::RPROJointData::vfunc_1_off_C (8 bytes)
// @name NMData::RPROJointData::vfunc_1_off_C
// @class NMData::RPROJointData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::RPROJointData::vfunc_0.
extern "C" void __fastcall fn_00585090(void* self) {
    ext_00585250(static_cast<char*>(self) - 0xC);
}

// [0x00585250] NMData::RPROJointData::vfunc_0 (30 bytes)
// @name NMData::RPROJointData::vfunc_0
// @class NMData::RPROJointData
// @summary MSVC scalar deleting destructor: calls sub_005F09E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00585250(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005F09E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00587D50] NMData::GraphicData::vfunc_0 (30 bytes)
// @name NMData::GraphicData::vfunc_0
// @class NMData::GraphicData
// @summary MSVC scalar deleting destructor: calls sub_006200A0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00587D50(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006200A0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00587D70] NMData::GraphicData::vfunc_1_off_C (8 bytes)
// @name NMData::GraphicData::vfunc_1_off_C
// @class NMData::GraphicData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::GraphicData::vfunc_0.
extern "C" void __fastcall fn_00587D70(void* self) {
    ext_00587D50(static_cast<char*>(self) - 0xC);
}

// [0x00587FA0] NMData::Marker::vfunc_0 (30 bytes)
// @name NMData::Marker::vfunc_0
// @class NMData::Marker
// @summary MSVC scalar deleting destructor: calls sub_00870A50 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00587FA0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00870A50(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00587FC0] NMData::Marker::vfunc_1_off_C (8 bytes)
// @name NMData::Marker::vfunc_1_off_C
// @class NMData::Marker
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::Marker::vfunc_0.
extern "C" void __fastcall fn_00587FC0(void* self) {
    ext_00587FA0(static_cast<char*>(self) - 0xC);
}

// [0x005A7110] NMData::DesiredPoseData::vfunc_0_off_4 (8 bytes)
// @name NMData::DesiredPoseData::vfunc_0_off_4
// @class NMData::DesiredPoseData
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls NMData::DesiredPoseData::vfunc_0.
extern "C" void __fastcall fn_005A7110(void* self) {
    ext_005A7B10(static_cast<char*>(self) - 0x4);
}

// [0x005A7B10] NMData::DesiredPoseData::vfunc_0 (30 bytes)
// @name NMData::DesiredPoseData::vfunc_0
// @class NMData::DesiredPoseData
// @summary MSVC scalar deleting destructor: calls sub_005A7120 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005A7B10(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005A7120(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005A7D00] NMData::CalibrationData::vfunc_0 (30 bytes)
// @name NMData::CalibrationData::vfunc_0
// @class NMData::CalibrationData
// @summary MSVC scalar deleting destructor: calls sub_005A7280 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005A7D00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005A7280(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005A9930] NMData::BackGroundData::vfunc_1_off_10 (8 bytes)
// @name NMData::BackGroundData::vfunc_1_off_10
// @class NMData::BackGroundData
// @summary This-adjustor thunk: adjusts `this` by -0x10 and tail-calls NMData::BackGroundData::vfunc_0.
extern "C" void __fastcall fn_005A9930(void* self) {
    ext_005A9D30(static_cast<char*>(self) - 0x10);
}

// [0x005A9940] NMData::BackGroundData::vfunc_0_off_4 (8 bytes)
// @name NMData::BackGroundData::vfunc_0_off_4
// @class NMData::BackGroundData
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls NMData::BackGroundData::vfunc_0.
extern "C" void __fastcall fn_005A9940(void* self) {
    ext_005A9D30(static_cast<char*>(self) - 0x4);
}

// [0x005A9950] NMData::BackGroundData::vfunc_22_off_4 (8 bytes)
// @name NMData::BackGroundData::vfunc_22_off_4
// @class NMData::BackGroundData
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls NMData::BackGroundData::vfunc_3.
extern "C" void __fastcall fn_005A9950(void* self) {
    ext_005A2FB0(static_cast<char*>(self) - 0x4);
}

// [0x005A9D20] NMData::BackGroundData::vfunc_21_off_4 (8 bytes)
// @name NMData::BackGroundData::vfunc_21_off_4
// @class NMData::BackGroundData
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls NMData::BackGroundData::vfunc_1.
extern "C" void __fastcall fn_005A9D20(void* self) {
    ext_005A9960(static_cast<char*>(self) - 0x4);
}

// [0x005A9D30] NMData::BackGroundData::vfunc_0 (30 bytes)
// @name NMData::BackGroundData::vfunc_0
// @class NMData::BackGroundData
// @summary MSVC scalar deleting destructor: calls sub_005A9970 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005A9D30(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005A9970(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005C1050] NMData::MetaBodyData::vfunc_1_off_C (8 bytes)
// @name NMData::MetaBodyData::vfunc_1_off_C
// @class NMData::MetaBodyData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::MetaBodyData::vfunc_0.
extern "C" void __fastcall fn_005C1050(void* self) {
    ext_005C1D30(static_cast<char*>(self) - 0xC);
}

// [0x005C1D30] NMData::MetaBodyData::vfunc_0 (30 bytes)
// @name NMData::MetaBodyData::vfunc_0
// @class NMData::MetaBodyData
// @summary MSVC scalar deleting destructor: calls sub_005C1250 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005C1D30(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005C1250(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005C84A0] NMData::CollisionModelDataBase::vfunc_1_off_C (8 bytes)
// @name NMData::CollisionModelDataBase::vfunc_1_off_C
// @class NMData::CollisionModelDataBase
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::CollisionModelDataBase::vfunc_0.
extern "C" void __fastcall fn_005C84A0(void* self) {
    ext_005CC1E0(static_cast<char*>(self) - 0xC);
}

// [0x005C8690] NMData::CollisionModelData::vfunc_1_off_C (8 bytes)
// @name NMData::CollisionModelData::vfunc_1_off_C
// @class NMData::CollisionModelData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::CollisionModelData::vfunc_0.
extern "C" void __fastcall fn_005C8690(void* self) {
    ext_005CC370(static_cast<char*>(self) - 0xC);
}

// [0x005C88F0] NMData::FluidObjectData::vfunc_1_off_C (8 bytes)
// @name NMData::FluidObjectData::vfunc_1_off_C
// @class NMData::FluidObjectData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::FluidObjectData::vfunc_0.
extern "C" void __fastcall fn_005C88F0(void* self) {
    ext_005CC5A0(static_cast<char*>(self) - 0xC);
}

// [0x005CC1E0] NMData::CollisionModelDataBase::vfunc_0 (30 bytes)
// @name NMData::CollisionModelDataBase::vfunc_0
// @class NMData::CollisionModelDataBase
// @summary MSVC scalar deleting destructor: calls sub_005C83D0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005CC1E0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005C83D0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005CC370] NMData::CollisionModelData::vfunc_0 (30 bytes)
// @name NMData::CollisionModelData::vfunc_0
// @class NMData::CollisionModelData
// @summary MSVC scalar deleting destructor: calls sub_005C8650 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005CC370(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005C8650(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005CC5A0] NMData::FluidObjectData::vfunc_0 (30 bytes)
// @name NMData::FluidObjectData::vfunc_0
// @class NMData::FluidObjectData
// @summary MSVC scalar deleting destructor: calls sub_005C88B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005CC5A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005C88B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005CF480] NMData::InertialBodyData::vfunc_0 (30 bytes)
// @name NMData::InertialBodyData::vfunc_0
// @class NMData::InertialBodyData
// @summary MSVC scalar deleting destructor: calls sub_005CF2B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005CF480(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005CF2B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005DCAF0] NMData::CameraData::vfunc_1_off_C (8 bytes)
// @name NMData::CameraData::vfunc_1_off_C
// @class NMData::CameraData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::CameraData::vfunc_0.
extern "C" void __fastcall fn_005DCAF0(void* self) {
    ext_005DCD80(static_cast<char*>(self) - 0xC);
}

// [0x005DCD60] NMData::VideoPlaneData::vfunc_0 (30 bytes)
// @name NMData::VideoPlaneData::vfunc_0
// @class NMData::VideoPlaneData
// @summary MSVC scalar deleting destructor: calls sub_005DC6C0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005DCD60(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005DC6C0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005DCD80] NMData::CameraData::vfunc_0 (30 bytes)
// @name NMData::CameraData::vfunc_0
// @class NMData::CameraData
// @summary MSVC scalar deleting destructor: calls sub_005DCA20 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005DCD80(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005DCA20(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005EF8D0] NMData::HingeData::vfunc_1_off_C (8 bytes)
// @name NMData::HingeData::vfunc_1_off_C
// @class NMData::HingeData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::HingeData::vfunc_0.
extern "C" void __fastcall fn_005EF8D0(void* self) {
    ext_005F18B0(static_cast<char*>(self) - 0xC);
}

// [0x005EFFA0] NMData::FixedPathJointData::vfunc_1_off_C (8 bytes)
// @name NMData::FixedPathJointData::vfunc_1_off_C
// @class NMData::FixedPathJointData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::FixedPathJointData::vfunc_0.
extern "C" void __fastcall fn_005EFFA0(void* self) {
    ext_005F18D0(static_cast<char*>(self) - 0xC);
}

// [0x005F02E0] NMData::SkeletalJointData::vfunc_1_off_C (8 bytes)
// @name NMData::SkeletalJointData::vfunc_1_off_C
// @class NMData::SkeletalJointData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::SkeletalJointData::vfunc_0.
extern "C" void __fastcall fn_005F02E0(void* self) {
    ext_005F18F0(static_cast<char*>(self) - 0xC);
}

// [0x005F0D70] NMData::MagnetJointData::vfunc_1_off_C (8 bytes)
// @name NMData::MagnetJointData::vfunc_1_off_C
// @class NMData::MagnetJointData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::MagnetJointData::vfunc_0.
extern "C" void __fastcall fn_005F0D70(void* self) {
    ext_005F1910(static_cast<char*>(self) - 0xC);
}

// [0x005F18B0] NMData::HingeData::vfunc_0 (30 bytes)
// @name NMData::HingeData::vfunc_0
// @class NMData::HingeData
// @summary MSVC scalar deleting destructor: calls sub_005EFAF0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005F18B0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005EFAF0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005F18D0] NMData::FixedPathJointData::vfunc_0 (30 bytes)
// @name NMData::FixedPathJointData::vfunc_0
// @class NMData::FixedPathJointData
// @summary MSVC scalar deleting destructor: calls sub_005EFFB0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005F18D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005EFFB0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005F18F0] NMData::SkeletalJointData::vfunc_0 (30 bytes)
// @name NMData::SkeletalJointData::vfunc_0
// @class NMData::SkeletalJointData
// @summary MSVC scalar deleting destructor: calls sub_005F05E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005F18F0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005F05E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005F1910] NMData::MagnetJointData::vfunc_0 (30 bytes)
// @name NMData::MagnetJointData::vfunc_0
// @class NMData::MagnetJointData
// @summary MSVC scalar deleting destructor: calls sub_005F0F60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005F1910(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005F0F60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00609950] NMData::DisabledCollisionPair::vfunc_0 (30 bytes)
// @name NMData::DisabledCollisionPair::vfunc_0
// @class NMData::DisabledCollisionPair
// @summary MSVC scalar deleting destructor: calls sub_006096D0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00609950(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006096D0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0060B440] NMData::DisabledCollisionPairList::vfunc_0 (30 bytes)
// @name NMData::DisabledCollisionPairList::vfunc_0
// @class NMData::DisabledCollisionPairList
// @summary MSVC scalar deleting destructor: calls sub_0060B2B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0060B440(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0060B2B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0060C510] NMData::EffectorBaseData::vfunc_0 (30 bytes)
// @name NMData::EffectorBaseData::vfunc_0
// @class NMData::EffectorBaseData
// @summary MSVC scalar deleting destructor: calls sub_0060BA10 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0060C510(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0060BA10(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0060CD20] NMData::EffectorData::vfunc_0 (30 bytes)
// @name NMData::EffectorData::vfunc_0
// @class NMData::EffectorData
// @summary MSVC scalar deleting destructor: calls sub_0060BCC0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0060CD20(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0060BCC0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0060CDC0] NMData::EffectorWithModesData::vfunc_0 (30 bytes)
// @name NMData::EffectorWithModesData::vfunc_0
// @class NMData::EffectorWithModesData
// @summary MSVC scalar deleting destructor: calls sub_0060C4C0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0060CDC0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0060C4C0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0060EC20] NMData::SensorData::vfunc_1_off_C (8 bytes)
// @name NMData::SensorData::vfunc_1_off_C
// @class NMData::SensorData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::SensorData::vfunc_0.
extern "C" void __fastcall fn_0060EC20(void* self) {
    ext_0060EE90(static_cast<char*>(self) - 0xC);
}

// [0x0060EE90] NMData::SensorData::vfunc_0 (30 bytes)
// @name NMData::SensorData::vfunc_0
// @class NMData::SensorData
// @summary MSVC scalar deleting destructor: calls sub_0060EB90 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0060EE90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0060EB90(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0060F0A0] NMData::MetaBodySensorData::vfunc_1_off_C (8 bytes)
// @name NMData::MetaBodySensorData::vfunc_1_off_C
// @class NMData::MetaBodySensorData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::MetaBodySensorData::vfunc_0.
extern "C" void __fastcall fn_0060F0A0(void* self) {
    ext_0060F170(static_cast<char*>(self) - 0xC);
}

// [0x0060F170] NMData::MetaBodySensorData::vfunc_0 (30 bytes)
// @name NMData::MetaBodySensorData::vfunc_0
// @class NMData::MetaBodySensorData
// @summary MSVC scalar deleting destructor: calls sub_0060ED60 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0060F170(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0060ED60(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0060F540] NMData::CompoundSensorData::vfunc_1_off_C (8 bytes)
// @name NMData::CompoundSensorData::vfunc_1_off_C
// @class NMData::CompoundSensorData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::CompoundSensorData::vfunc_0.
extern "C" void __fastcall fn_0060F540(void* self) {
    ext_0060F970(static_cast<char*>(self) - 0xC);
}

// [0x0060F970] NMData::CompoundSensorData::vfunc_0 (30 bytes)
// @name NMData::CompoundSensorData::vfunc_0
// @class NMData::CompoundSensorData
// @summary MSVC scalar deleting destructor: calls sub_0060F5E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0060F970(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0060F5E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0060FB60] NMData::AxisDefineSensorData::vfunc_1_off_C (8 bytes)
// @name NMData::AxisDefineSensorData::vfunc_1_off_C
// @class NMData::AxisDefineSensorData
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::AxisDefineSensorData::vfunc_0.
extern "C" void __fastcall fn_0060FB60(void* self) {
    ext_0060FE90(static_cast<char*>(self) - 0xC);
}

// [0x0060FE90] NMData::AxisDefineSensorData::vfunc_0 (30 bytes)
// @name NMData::AxisDefineSensorData::vfunc_0
// @class NMData::AxisDefineSensorData
// @summary MSVC scalar deleting destructor: calls sub_0060FBE0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0060FE90(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0060FBE0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x006122F0] NMData::TwistAndSwingLimit::vfunc_0 (30 bytes)
// @name NMData::TwistAndSwingLimit::vfunc_0
// @class NMData::TwistAndSwingLimit
// @summary MSVC scalar deleting destructor: calls sub_00610D10 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_006122F0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00610D10(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0061D370] NMData::HingeConstraint::vfunc_1_off_C (8 bytes)
// @name NMData::HingeConstraint::vfunc_1_off_C
// @class NMData::HingeConstraint
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::HingeConstraint::vfunc_0.
extern "C" void __fastcall fn_0061D370(void* self) {
    ext_0061E910(static_cast<char*>(self) - 0xC);
}

// [0x0061D980] NMData::PrimaryTwistAndSwingConstraint::vfunc_1_off_C (8 bytes)
// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_1_off_C
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary This-adjustor thunk: adjusts `this` by -0xC and tail-calls NMData::PrimaryTwistAndSwingConstraint::vfunc_0.
extern "C" void __fastcall fn_0061D980(void* self) {
    ext_0061ECB0(static_cast<char*>(self) - 0xC);
}

// [0x0061E910] NMData::HingeConstraint::vfunc_0 (30 bytes)
// @name NMData::HingeConstraint::vfunc_0
// @class NMData::HingeConstraint
// @summary MSVC scalar deleting destructor: calls sub_0061D380 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0061E910(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0061D380(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0061ECB0] NMData::PrimaryTwistAndSwingConstraint::vfunc_0 (30 bytes)
// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_0
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary MSVC scalar deleting destructor: calls sub_0061D990 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0061ECB0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0061D990(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00626E60] NMData::EffectorSkeletalData::vfunc_0 (30 bytes)
// @name NMData::EffectorSkeletalData::vfunc_0
// @class NMData::EffectorSkeletalData
// @summary MSVC scalar deleting destructor: calls sub_006268F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00626E60(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_006268F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00587D40] NMData::GraphicData::vfunc_0_off_C (14 bytes)
// @name NMData::GraphicData::vfunc_0_off_C
// @class NMData::GraphicData
// @summary Returns mem_0095F750[this->field_150], a per-instance table lookup keyed by the 32-bit index at +0x150.
// @field NMData::GraphicData +0x150 DWORD field_150
DWORD NMData_GraphicData_vfunc_0_off_C(const void* self) {
    const DWORD index = lift_field<DWORD>(self, 0x150);
    return mem_0095F750[index];
}

void fn_00587D40(void* self) {
    (void)NMData_GraphicData_vfunc_0_off_C(self);
}

// [0x0049FAB0] NMData::State::vfunc_17_off_8 (14 bytes)
// @name NMData::State::vfunc_17_off_8
// @class NMData::State
// @summary Returns this+8 for a non-null-adjusted this, or null when this == 8 (this-8 == 0).
void* fn_0049FAB0(void* self) {
    const uintptr_t p = reinterpret_cast<uintptr_t>(self);
    if (p - 8 == 0) {
        return nullptr;
    }
    return reinterpret_cast<void*>(p + 8);
}

// [0x00611C90] NMData::PrimaryTwistAndSwingConstraint::vfunc_76 (14 bytes)
// @name NMData::PrimaryTwistAndSwingConstraint::vfunc_76
// @class NMData::PrimaryTwistAndSwingConstraint
// @summary Returns the byte at this + index + 0x328 (index is the single stack argument, thiscall).
// @field NMData::PrimaryTwistAndSwingConstraint +0x328 uint8_t field_0x328
uint8_t fn_00611C90(void* self, uint32_t index) {
    const uint8_t* base = static_cast<const uint8_t*>(self);
    const uint32_t offset = index + 0x328u;
    return base[offset];
}

// [0x004CF310] NMData::IncarnationEventData::vfunc_1_off_154 (14 bytes)
// @name NMData::IncarnationEventData::vfunc_1_off_154
// @class NMData::IncarnationEventData
// @summary Virtual dispatcher: loads this->vtable[7] (offset 0x1C) and calls it with this, then pops the one stack argument.
// @field NMData::IncarnationEventData +0x00 void* vtable
extern "C" void fn_004CF310(void* self) {
    void* const* vt = *reinterpret_cast<void* const* const*>(self);
    using VFn = void (*)(void*);
    VFn target = reinterpret_cast<VFn>(vt[7]);
    target(self);
}

// [0x004CA3D0]
// @name NMData::MetaBodyConstraintData::vfunc_91
// @class NMData::MetaBodyConstraintData
// @summary Returns early when the state field at +0x184 equals 3; otherwise tail-calls ext_00493D90.
// @field NMData::MetaBodyConstraintData +0x184 int field_0x184

void ext_00493D90();

void NMData_MetaBodyConstraintData_vfunc_91(void* self) {
    if (*reinterpret_cast<int*>(static_cast<char*>(self) + 0x184) == 3) {
        return;
    }
    ext_00493D90();
}

// [0x004D3D30] NMData::RigEventData::vfunc_86 (16 bytes)
// @name NMData::RigEventData::vfunc_86
// @class NMData::RigEventData
// @summary Thunk: forwards to slot 0 of the embedded SelectionVariable::Listener at +0x180, passing that subobject as this.
// @field NMData::RigEventData +0x180 void* SelectionVariable::Listener::vptr
void fn_004D3D30(void* self) {
    // The embedded listener subobject lives at self + 0x180. Its vptr is at its
    // start; slot 0 is the target. Call it with the subobject as `this`
    // (the original was a tail jmp, so no stack arguments are touched).
    auto* listener = static_cast<unsigned char*>(self) + 0x180;
    void** vtbl = *reinterpret_cast<void***>(listener);
    auto target = reinterpret_cast<void (*)(void*)>(vtbl[0]);
    target(listener);
}

// [0x004A9B50] NMData::BehaviourData::vfunc_2_off_154 (17 bytes)
// @name NMData::BehaviourData::vfunc_2_off_154
// @class NMData::BehaviourData
// @summary Forwards virtual slot 2 of the embedded subobject at +0x228 (tail-call thunk).
// @field NMData::BehaviourData +0x228 void* field_0x228
void fn_004A9B50(void* self) {
    // Embedded subobject at +0x228; its first dword is its vtable pointer.
    void* sub = static_cast<uint8_t*>(self) + 0x228;
    void** vtbl = *reinterpret_cast<void***>(sub);
    // Slot 2 (byte offset 8) is invoked with this = sub.
    auto fn = reinterpret_cast<void (*)(void*)>(vtbl[2]);
    fn(sub);
}
