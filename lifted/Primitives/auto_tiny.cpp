// Lifted C++ translation unit: lifted/Primitives/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_0053A810(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name Primitives::Marker::vfunc_30
// @class Primitives::Marker
// @summary Returns the buffered unsigned int at +0x24 offset by 8.
// @field Primitives::Marker +0x24 DWORD bufferedValue
DWORD fn_0053B790(const void* self) {
    const BYTE* base = static_cast<const BYTE*>(self);
    DWORD value = *reinterpret_cast<const DWORD*>(base + 0x24);
    return value + 8;
}
extern "C" void __fastcall ext_0052F920(void* self);
extern "C" void __fastcall ext_0052FB80(void* self);
extern "C" void __fastcall ext_0052F710(void* self);
extern "C" void __fastcall ext_0053B710(void* self);
extern "C" void __fastcall ext_0053B850(void* self);
extern "C" void __fastcall ext_0053BA10(void* self);
extern "C" void __fastcall ext_0053BBF0(void* self);
extern "C" void __fastcall ext_0053BCA0(void* self);
extern "C" void __fastcall ext_0053BE80(void* self);
extern "C" void __fastcall ext_0053C060(void* self);
extern "C" void __fastcall ext_0053C9A0(void* self);
extern "C" UINT __stdcall glGenLists(UINT range);
extern "C" int mem_00AEE8A8;
// Virtual-call target: (this, arg1, arg2, arg3), callee cleans its own stack args.
using Animation_VirtualSlot12Fn = void (*)(void* self, uint32_t a, uint32_t b, uint32_t c);

// Virtual-call target: (this, arg1, arg2, arg3), callee cleans its own stack args.
using Animation_VirtualSlot12Fn = void (*)(void* self, uint32_t a, uint32_t b, uint32_t c);
// @class Primitives::Sensor2
// @summary Loads a float through the pointer argument and stores it at this+0x60 (thiscall, one stack arg, ret 4).
// @field Primitives::Sensor2 +0x60 float field_0x60
void fn_0053C970(void* self, const float* src) {
    // mov eax, [esp+4] ; fld dword ptr [eax] ; fstp dword ptr [ecx+0x60] ; ret 4
    lift_field<float>(self, 0x60) = *src;
}

// [0x0052F670] Primitives::Animation::vfunc_0 (30 bytes)
// @name Primitives::Animation::vfunc_0
// @class Primitives::Animation
// @summary MSVC scalar deleting destructor: calls sub_0053A810 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0052F670(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0053A810(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0052F9A0] Primitives::Hinge::vfunc_0 (30 bytes)
// @name Primitives::Hinge::vfunc_0
// @class Primitives::Hinge
// @summary MSVC scalar deleting destructor: calls sub_0052F920 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0052F9A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0052F920(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0052FBF0] Primitives::RPRO::vfunc_0 (30 bytes)
// @name Primitives::RPRO::vfunc_0
// @class Primitives::RPRO
// @summary MSVC scalar deleting destructor: calls sub_0052FB80 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0052FBF0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0052FB80(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00530050] Primitives::Sensor::vfunc_0 (30 bytes)
// @name Primitives::Sensor::vfunc_0
// @class Primitives::Sensor
// @summary MSVC scalar deleting destructor: calls sub_0052F710 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00530050(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0052F710(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0053C8B0] Primitives::Sphere::vfunc_0 (30 bytes)
// @name Primitives::Sphere::vfunc_0
// @class Primitives::Sphere
// @summary MSVC scalar deleting destructor: calls sub_0053B710 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0053C8B0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0053B710(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0053CA40] Primitives::Sphyl::vfunc_0 (30 bytes)
// @name Primitives::Sphyl::vfunc_0
// @class Primitives::Sphyl
// @summary MSVC scalar deleting destructor: calls sub_0053B850 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0053CA40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0053B850(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0053CA60] Primitives::Cylinder::vfunc_0 (30 bytes)
// @name Primitives::Cylinder::vfunc_0
// @class Primitives::Cylinder
// @summary MSVC scalar deleting destructor: calls sub_0053BA10 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0053CA60(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0053BA10(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0053CA80] Primitives::Frustum::vfunc_0 (30 bytes)
// @name Primitives::Frustum::vfunc_0
// @class Primitives::Frustum
// @summary MSVC scalar deleting destructor: calls sub_0053BBF0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0053CA80(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0053BBF0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0053CB40] Primitives::File::vfunc_0 (30 bytes)
// @name Primitives::File::vfunc_0
// @class Primitives::File
// @summary MSVC scalar deleting destructor: calls sub_0053BCA0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0053CB40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0053BCA0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0053D0B0] Primitives::SkeletalJoint::vfunc_0 (30 bytes)
// @name Primitives::SkeletalJoint::vfunc_0
// @class Primitives::SkeletalJoint
// @summary MSVC scalar deleting destructor: calls sub_0053BE80 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0053D0B0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0053BE80(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0053D970] Primitives::Sensor2::vfunc_0 (30 bytes)
// @name Primitives::Sensor2::vfunc_0
// @class Primitives::Sensor2
// @summary MSVC scalar deleting destructor: calls sub_0053C9A0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0053D970(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0053C9A0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0052F5F0] Primitives::Animation::vfunc_19 (15 bytes)
// @name Primitives::Animation::vfunc_19
// @class Primitives::Animation
// @summary Returns 1 if the 0x20 flag bit in the dword at +0x1C is set, otherwise 0.
// @field Primitives::Animation +0x1C uint32_t field_0x1C
uint32_t fn_0052F5F0(void* self) {
    const uint32_t flags = *reinterpret_cast<const uint32_t*>(static_cast<const char*>(self) + 0x1C);
    return (flags & 0x20u) == 0x20u ? 1u : 0u;
}

// [0x0052EFA0] Primitives::Animation::vfunc_14 (17 bytes)
// @name Primitives::Animation::vfunc_14
// @class Primitives::Animation
// @summary Stores two 32-bit stack arguments into this->field_0x28 and this->field_0x2c (thiscall, callee pops 8).
// @field Primitives::Animation +0x28 uint32_t field_0x28
// @field Primitives::Animation +0x2C uint32_t field_0x2c
void fn_0052EFA0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x28) = a0;
    lift_field<uint32_t>(self, 0x2C) = a1;
}

// [0x0052F3A0] Primitives::Null::vfunc_25 (18 bytes)
// @name Primitives::Null::vfunc_25
// @class Primitives::Null
// @summary Resets Null state: stores stack arg 3 at +0x08, clears +0x20 (DWORD) and +0x04 (BYTE).
// @field Primitives::Null +0x04 BYTE field_0x04
// @field Primitives::Null +0x08 DWORD field_0x08
// @field Primitives::Null +0x20 DWORD field_0x20
// thiscall: `this` in ECX, three stack args popped by `ret 0xc`; only the third is read.
void fn_0052F3A0(void* self, DWORD arg1, DWORD arg2, DWORD arg3) {
    (void)arg1;
    (void)arg2;
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<DWORD*>(base + 0x08) = arg3;
    *reinterpret_cast<DWORD*>(base + 0x20) = 0;
    *reinterpret_cast<BYTE*>(base + 0x04) = 0;
}

// [0x0052FB60] Primitives::Hinge::vfunc_20 (20 bytes)
// @name Primitives::Hinge::vfunc_20
// @class Primitives::Hinge
// @summary Writes a 3-float vector {this->+0x3c, 0, 0} to the caller-supplied output buffer.
// @field Primitives::Hinge +0x3c float field_0x3c
void fn_0052FB60(void* self, float* out) {
    out[0] = lift_field<float>(self, 0x3C);
    out[1] = 0.0f;
    out[2] = 0.0f;
}

// [0x0052FA20] Primitives::Marker::vfunc_20 (20 bytes)
// @name Primitives::Marker::vfunc_20
// @class Primitives::Marker
// @summary Writes a 3-float vector to the out pointer: x = this+0x50, y = z = 0 (thiscall, one stack arg, ret 4).
// @field Primitives::Marker +0x50 float field_0x50
void fn_0052FA20(const void* self, float* out) {
    out[0] = lift_field<const float>(self, 0x50);
    out[1] = 0.0f;
    out[2] = 0.0f;
}

// [0x0053C980] Primitives::Sensor2::vfunc_20 (20 bytes)
// @name Primitives::Sensor2::vfunc_20
// @class Primitives::Sensor2
// @summary Writes a 3-float vector {field_0x60, 0, 0} to the caller-supplied out buffer and returns it.
// @field Primitives::Sensor2 +0x60 float field_0x60
float* fn_0053C980(void* self, float* out) {
    float v;
    std::memcpy(&v, static_cast<const unsigned char*>(self) + 0x60, sizeof v);
    out[0] = v;
    out[1] = 0.0f;
    out[2] = 0.0f;
    return out;
}

// [0x0053A8C0] Primitives::Animation::vfunc_21 (21 bytes)
// @name Primitives::Animation::vfunc_21
// @class Primitives::Animation
// @summary Returns true when every bit set in the argument is also set in the field at +0x1C.
// @field Primitives::Animation +0x1C uint32_t field_0x1C
uint8_t fn_0053A8C0(void* self, uint32_t mask) {
    uint32_t flags = lift_field<uint32_t>(self, 0x1C);
    return (flags & mask) == mask ? 1 : 0;
}

// [0x0052EF80] Primitives::Animation::vfunc_10 (24 bytes)
// @name Primitives::Animation::vfunc_10
// @class Primitives::Animation
// @summary Forwards to the object's vtable slot at +0x30 with (0x20, arg, mem_00AEE8A8) and returns, popping one stack argument.
// @field Primitives::Animation +0x00 void* vtable
void fn_0052EF80(void* self, uint32_t arg) {
    // The vtable pointer is the first dword of the object.
    char* vtable = *reinterpret_cast<char**>(self);
    // Slot at byte offset 0x30 inside the vtable (index 12).
    auto fn = *reinterpret_cast<Animation_VirtualSlot12Fn*>(vtable + 0x30);
    fn(self, 0x20u, arg, static_cast<uint32_t>(mem_00AEE8A8));
}
