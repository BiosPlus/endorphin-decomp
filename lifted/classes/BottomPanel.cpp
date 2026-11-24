// Lifted C++ translation unit: lifted/classes/BottomPanel.cpp
#include "lift_compat.h"

// [0x004086A0] BottomPanel::vfunc_92 (19 bytes)
namespace lift_004086A0 {
// @name BottomPanel::vfunc_92
// @class BottomPanel
// @summary Virtual thunk: widens the 16-bit stack argument to 32 bits and forwards the call through vtable slot 93 (+0x174), returning its result.
// @field BottomPanel +0x00 void* vptr
uint32_t fn_004086A0(void* self, uint32_t unk_arg, uint16_t arg16) {
    // Read the vtable pointer stored at the start of the object.
    void* vtable = lift_field<void*>(self, 0x00);
    // Slot at +0x174 is vtable entry index 93 (0x174 / sizeof(void*) on 32-bit).
    auto target = reinterpret_cast<uint32_t (*)(void*, uint32_t, uint32_t)>(
        reinterpret_cast<void* const*>(vtable)[0x174 / sizeof(void*)]);
    // Forward with the 16-bit argument zero-extended to a 32-bit value.
    return target(self, unk_arg, static_cast<uint32_t>(arg16));
}
} // namespace lift_004086A0
