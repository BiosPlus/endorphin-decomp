// Lifted C++ translation unit: lifted/classes/NullRenderer.cpp
#include "lift_compat.h"

// [0x0053F570] NullRenderer::vfunc_118 (90 bytes)
namespace lift_0053F570 {
extern void ext_0065C5F0(void* thisptr);
extern void ext_006A6C87(const void* arg);
extern int mem_00AF0BA0;
extern int mem_00AF0B9C;

// @name NullRenderer::vfunc_118
// @class NullRenderer
// @summary Lazily initializes a static object on first call (guarded by bit 0 of mem_00AF0BA0) and returns its address.
void* fn_0053F570(void* self) {
    (void)self;
    if ((mem_00AF0BA0 & 1) == 0) {
        mem_00AF0BA0 |= 1;
        ext_0065C5F0(&mem_00AF0B9C);
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x0091AA90u)));
    }
    return &mem_00AF0B9C;
}
} // namespace lift_0053F570

// [0x0052EE20] NullRenderer::vfunc_102 (139 bytes)
namespace lift_0052EE20 {
// Known callee 0x00537A30: Unknown::ctor_00537A30 (Constructor: runs base init, writes vtable, clears +0x14, constructs embedded subobject at +0x18, and stores self at +0x10.)
extern void __thiscall ext_00537A30(void* self);
// Known callee 0x00537B10: Unknown::ctor_00537B10 (Base-initializes self, stores vtable and owner link, constructs embedded subobject at +0x18, and registers self as back-reference on the owner.)
extern void* __thiscall ext_00537B10(void* self, void* owner);
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762 — allocator, called cdecl with size in bytes.)
extern void* __cdecl ext_006A5C62(size_t size);

// @name NullRenderer::createInstance
// @class NullRenderer
// @summary Allocates a 0x44-byte NullRenderer; constructs it with an owner back-reference when owner is non-null, otherwise with the plain constructor. Returns null if allocation fails.
void* __stdcall fn_0052EE20(void* owner) {
    void* self = ext_006A5C62(0x44);
    if (self == nullptr) {
        return nullptr;
    }
    if (owner == nullptr) {
        ext_00537A30(self);
    } else {
        ext_00537B10(self, owner);
    }
    return self;
}
} // namespace lift_0052EE20
