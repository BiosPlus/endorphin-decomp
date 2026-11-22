// Lifted C++ translation unit: lifted/ToolGraphics/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_005498E0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);
extern "C" void __fastcall ext_00549920(void* self);
extern "C" void __fastcall ext_005499E0(void* self);
extern "C" void __fastcall ext_0054A0E0(void* self);

// [0x0054A3B0] ToolGraphics::RotateHandleGraphic::vfunc_0 (30 bytes)
// @name ToolGraphics::RotateHandleGraphic::vfunc_0
// @class ToolGraphics::RotateHandleGraphic
// @summary MSVC scalar deleting destructor: calls sub_005498E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0054A3B0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005498E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0054A8D0] ToolGraphics::TranslateHandleGraphic::vfunc_0 (30 bytes)
// @name ToolGraphics::TranslateHandleGraphic::vfunc_0
// @class ToolGraphics::TranslateHandleGraphic
// @summary MSVC scalar deleting destructor: calls sub_00549920 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0054A8D0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00549920(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0054B010] ToolGraphics::ResizeHandleGraphic::vfunc_0 (30 bytes)
// @name ToolGraphics::ResizeHandleGraphic::vfunc_0
// @class ToolGraphics::ResizeHandleGraphic
// @summary MSVC scalar deleting destructor: calls sub_005499E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0054B010(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_005499E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0054B760] ToolGraphics::ForceApplicatorHandleGraphic::vfunc_0 (30 bytes)
// @name ToolGraphics::ForceApplicatorHandleGraphic::vfunc_0
// @class ToolGraphics::ForceApplicatorHandleGraphic
// @summary MSVC scalar deleting destructor: calls sub_0054A0E0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0054B760(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0054A0E0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
