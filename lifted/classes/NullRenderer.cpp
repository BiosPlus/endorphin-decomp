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
