// Lifted C++ translation unit: lifted/Chromosome/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00505830(void* self);
extern "C" void __fastcall ext_00504B80(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name Chromosome::Descriptor::vfunc_0_off_4
// @class Chromosome::Descriptor
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls Chromosome::Descriptor::vfunc_0.
extern "C" void __fastcall fn_00505820(void* self) {
    ext_00505830(static_cast<char*>(self) - 0x4);
}

// [0x00505830] Chromosome::Descriptor::vfunc_0 (30 bytes)
// @name Chromosome::Descriptor::vfunc_0
// @class Chromosome::Descriptor
// @summary MSVC scalar deleting destructor: calls sub_00504B80 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00505830(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00504B80(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
