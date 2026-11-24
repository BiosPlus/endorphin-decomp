// Lifted C++ translation unit: lifted/classes/GettingStartedDialog.cpp
#include "lift_compat.h"

// [0x0041B3C0] GettingStartedDialog::vfunc_71 (16 bytes)
namespace lift_0041B3C0 {
// Known callee 0x006A5DBE: thunk_MFC80_ord_5152 (IAT jump thunk forwarding to MFC80!ord_5152.)
extern void ext_006A5DBE();
// Tail-jump target 0x004349D0: sub_004349D0. Receives ECX as its implicit first argument.
extern void ext_004349D0(uint32_t ecx);
extern int32_t mem_00ACDB40;

// @name GettingStartedDialog::vfunc_71
// @class GettingStartedDialog
// @summary Calls the MFC80 thunk, then tail-calls sub_004349D0 with the global at 0x00ACDB40 as its ECX argument.
void fn_0041B3C0(void* self) {
    (void)self;
    ext_006A5DBE();
    const uint32_t ecx = static_cast<uint32_t>(mem_00ACDB40);
    ext_004349D0(ecx);
}
} // namespace lift_0041B3C0
