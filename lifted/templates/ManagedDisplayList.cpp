// Lifted C++ translation unit: lifted/templates/ManagedDisplayList.cpp
#include "lift_compat.h"

// [0x00533E90] sub_00533E90 (54 bytes)
namespace lift_00533E90 {
// Known callee 0x00532B40: Unknown::dtor_00532B40 (Sets vtable to 0x009543E4 and unlinks peer at +0x08 if it points back to this at +0x04.)
extern void ext_00532B40(void* self);

// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; used as operator delete(this) when flag bit 0 is set.)
extern void ext_006A5C5C(void* p);

// IAT slot 0x009253E8 -> OPENGL32!glDeleteLists
extern void (*mem_009253E8)(GLuint list, GLsizei range);

// @name ManagedDisplayList<UtilityGraphics::Grid>::vfunc_0
// @class ManagedDisplayList<UtilityGraphics::Grid>
// @summary Scalar deleting destructor: releases the GL display list, runs the base dtor, optionally frees the object, and returns this.
// @field ManagedDisplayList<UtilityGraphics::Grid> +0x00 void* vptr
// @field ManagedDisplayList<UtilityGraphics::Grid> +0x30 GLuint displayList
void* fn_00533E90(void* self, uint32_t flags) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(self);

    // mov dword ptr [esi], 0x9547FC  (vptr reset to ManagedDisplayList vtable)
    *reinterpret_cast<void**>(obj + 0x00) = reinterpret_cast<void*>(static_cast<uintptr_t>(0x009547FCu));

    GLuint list = lift_field<GLuint>(obj, 0x30);
    if (list != 0) {
        mem_009253E8(list, 1);
    }

    // Base-class destructor (Renderable / DirtyOrCleanBase chain).
    ext_00532B40(self);

    if (flags & 1) {
        ext_006A5C5C(self);
    }

    return self;
}
} // namespace lift_00533E90
