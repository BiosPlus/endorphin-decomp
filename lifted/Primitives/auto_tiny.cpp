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

// [0x0053C970]
// @name Primitives::Sensor2::vfunc_13
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

// [0x0053D260] Primitives::RadiusLimit::vfunc_0 (30 bytes)
// @name Primitives::RadiusLimit::vfunc_0
// @class Primitives::RadiusLimit
// @summary MSVC scalar deleting destructor: calls sub_0053C060 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0053D260(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0053C060(self);
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
