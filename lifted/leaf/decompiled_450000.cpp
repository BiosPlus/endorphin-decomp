// Lifted C++ translation unit: lifted/leaf/decompiled_450000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00450A80] sub_00450A80 (8 bytes)
namespace lift_00450A80 {
extern void ext_0044F780(uint32_t arg);

// @name sub_00450A80
// @summary Auto-lifted identical-shape clone of 0x0043CB80 (call_MFC80_ord_1903_ret8).
namespace lift_0043CB80 {
// @name call_MFC80_ord_1903_ret8
// @summary Calls thunk_MFC80_ord_1903 and returns, cleaning 8 bytes of stack arguments.


extern void ext_0044F780(void);

extern void fn_00450A80(uint32_t arg1, uint32_t arg2) {
    (void)arg1;
    (void)arg2;
    ext_0044F780();
}
} // namespace lift_0043CB80
} // namespace lift_00450A80

// [0x0045E4A0] sub_0045E4A0 (14 bytes)
namespace lift_0045E4A0 {
// Thunk to MFC80!ord_6090 (IAT jump). Original call passes ecx and pushes 0.
extern void ext_006A5E72(void* self, int arg);

// @name CBase::forwardToMfcOrd6090
// @class CBase
// @summary Loads the pointer stored at +0x2D0 and forwards it, with a zero argument, to the MFC80 ord_6090 thunk.
// @field CBase +0x2D0 void* field_0x2D0
void fn_0045E4A0(void* self) {
    void* inner = lift_field<void*>(self, 0x2D0);
    ext_006A5E72(inner, 0);
}
} // namespace lift_0045E4A0
