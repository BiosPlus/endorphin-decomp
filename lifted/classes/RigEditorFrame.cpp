// Lifted C++ translation unit: lifted/classes/RigEditorFrame.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00453F40]
namespace lift_00453F40 {
extern void ext_00453E00(void* self);

// @name RigEditorFrame::vfunc_0_off_144
// @class RigEditorFrame
// @summary Forwards the virtual call at offset +0x144 to sub_00453E00 on delegate_0xC.
// @field RigEditorFrame +0xC void* delegate_0xC
void fn_00453F40(void* self, uint32_t /*unused*/) {
    void* delegate = *reinterpret_cast<void**>(static_cast<char*>(self) + 0xC);
    ext_00453E00(delegate);
}
} // namespace lift_00453F40

// [0x0044CD30]
namespace lift_0044CD30 {
namespace lift_0044CD30 {
// Known callee 0x004564A0: ForwardToFirstChildWindow (lifted as fn_004564A0).
extern void ext_004564A0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2);
// Known callee 0x006A5E4E: thunk_MFC80_ord_6065 (IAT jump thunk forwarding to MFC80!ord_6065).
extern void ext_006A5E4E(void* self, uint32_t a0, uint32_t a1, uint32_t a2,
                         uint32_t a3, uint32_t a4, uint32_t a5);

// @name RigEditorFrame::vfunc_108
// @class RigEditorFrame
// @summary Forwards its three stack arguments to ForwardToFirstChildWindow, then calls the MFC80 wrapper (ord_6065) on field +0x150 with arguments (0, 0, 0, arg2, arg1, 4).
// @field RigEditorFrame +0x150 uint32_t field_0x150
void fn_0044CD30(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2) {
    ext_004564A0(self, arg0, arg1, arg2);
    void* mfcThis = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x150)));
    ext_006A5E4E(mfcThis, 0, 0, 0, arg2, arg1, 4);
}
} // namespace lift_0044CD30
} // namespace lift_0044CD30
