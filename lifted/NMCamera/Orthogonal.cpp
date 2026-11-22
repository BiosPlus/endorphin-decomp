// Lifted C++ translation unit: lifted/NMCamera/Orthogonal.cpp
#include "lift_compat.h"
extern "C" unsigned char __fastcall ext_00546520(void* self, void* edx_unused, void* arg);
extern "C" unsigned char __fastcall ext_00551960(void* self, void* edx_unused, void* arg);

// [0x00551AF0] NMCamera::Orthogonal::vfunc_8 (88 bytes)
// @name NMCamera::Orthogonal::vfunc_8
// @class NMCamera::Orthogonal
// @summary Returns 1 if the flag at +0xA0 is set, otherwise 1 only when both sub-checks pass and two float pairs are equal.
// @field NMCamera::Orthogonal +0x30 float field_0x30
// @field NMCamera::Orthogonal +0x34 float field_0x34
// @field NMCamera::Orthogonal +0x3C void* field_0x3c
// @field NMCamera::Orthogonal +0x58 void* field_0x58
// @field NMCamera::Orthogonal +0x68 float field_0x68
// @field NMCamera::Orthogonal +0x6C float field_0x6c
// @field NMCamera::Orthogonal +0x74 void* field_0x74
// @field NMCamera::Orthogonal +0x90 void* field_0x90
// @field NMCamera::Orthogonal +0xA0 int32_t field_0xa0
extern "C" int __fastcall fn_00551AF0(void* self, void* edx_unused) {
    (void)edx_unused;
    auto* base = static_cast<unsigned char*>(self);

    if (*reinterpret_cast<int32_t*>(base + 0xA0) != 0) {
        return 1;
    }

    if (ext_00546520(base + 0x90, nullptr, base + 0x58) == 0) {
        return 0;
    }

    if (ext_00551960(base + 0x74, nullptr, base + 0x3C) == 0) {
        return 0;
    }

    const float f68 = *reinterpret_cast<float*>(base + 0x68);
    const float f30 = *reinterpret_cast<float*>(base + 0x30);
    if (!(f68 == f30)) {
        return 0;
    }

    const float f6c = *reinterpret_cast<float*>(base + 0x6C);
    const float f34 = *reinterpret_cast<float*>(base + 0x34);
    if (!(f6c == f34)) {
        return 0;
    }

    return 1;
}
