// Lifted C++ translation unit: lifted/classes/SceneNotesFrame.cpp
#include "lift_compat.h"

// [0x004552A0] SceneNotesFrame::vfunc_108 (52 bytes)
namespace lift_004552A0 {
// Known callee 0x004564A0: ForwardToFirstChildWindow (If flag 0x20 is set on self, looks up the first child HWND of self->+0x20 via GetWindow(GW_CHILD) and forwards to the MFC80 wrapper pair, passing the two stack arguments.)
// Stack-arg callee; the caller pushes (a0, a1, a2) so the callee sees them in reverse order.
extern void ext_004564A0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2);
// Known callee 0x006A5E4E: thunk_MFC80_ord_6065 (IAT jump thunk forwarding to MFC80!ord_6065.)
// Receives `this` in ecx and six stack words (pushed 4, a2, a1, 0, 0, 0).
extern void ext_006A5E4E(void* ecx, uint32_t s0, uint32_t s1, uint32_t s2,
                             uint32_t s3, uint32_t s4, uint32_t s5);

// @name SceneNotesFrame::vfunc_108
// @class SceneNotesFrame
// @summary Forwards three stack arguments to the child-window helper, then calls the MFC80 thunk with this->+0x144 as the receiver.
// @field SceneNotesFrame +0x144 uint32_t field_0x144
void fn_004552A0(void* self, uint32_t a0, uint32_t a1, uint32_t a2) {
    ext_004564A0(self, a2, a1, a0);

    uint32_t target = *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x144);
    ext_006A5E4E(reinterpret_cast<void*>(static_cast<uintptr_t>(target)),
                 0, 0, 0, a1, a2, 4);
}
} // namespace lift_004552A0
