// Lifted C++ translation unit: lifted/UtilityGraphics/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00537E70(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_00538CD0(void* self);
extern "C" void __fastcall ext_00538F00(void* self);
extern "C" void __fastcall ext_00539900(void* self);

// [0x005394F0] UtilityGraphics::Locator::vfunc_0 (30 bytes)
// @name UtilityGraphics::Locator::vfunc_0
// @class UtilityGraphics::Locator
// @summary MSVC scalar deleting destructor: calls sub_00537E70 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005394F0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00537E70(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x005396C0] UtilityGraphics::FancyArrow::vfunc_0 (30 bytes)
// @name UtilityGraphics::FancyArrow::vfunc_0
// @class UtilityGraphics::FancyArrow
// @summary MSVC scalar deleting destructor: calls sub_00538CD0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_005396C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00538CD0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00539720] UtilityGraphics::Arrow::vfunc_0 (30 bytes)
// @name UtilityGraphics::Arrow::vfunc_0
// @class UtilityGraphics::Arrow
// @summary MSVC scalar deleting destructor: calls sub_00538F00 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00539720(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00538F00(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00539B30] UtilityGraphics::SpiralArrow::vfunc_0 (30 bytes)
// @name UtilityGraphics::SpiralArrow::vfunc_0
// @class UtilityGraphics::SpiralArrow
// @summary MSVC scalar deleting destructor: calls sub_00539900 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00539B30(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00539900(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
