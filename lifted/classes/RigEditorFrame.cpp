// Lifted C++ translation unit: lifted/classes/RigEditorFrame.cpp
#include "lift_compat.h"

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
