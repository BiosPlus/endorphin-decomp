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

// [0x00407750]
namespace lift_00407750 {
// @name BottomPanel::vfunc_81
// @class BottomPanel
// @summary Forwards message/update to base handlers and updates three child controls' enabled state
// @field BottomPanel +0x198 uint8_t field_0x198
// @field BottomPanel +0x1ec uint8_t field_0x1ec
// @field BottomPanel +0x240 uint8_t field_0x240


void __thiscall ext_006A5FE6(void* self, uint32_t arg1, uint32_t arg2);
void __thiscall ext_006A5FE0(void* self, uint32_t arg1, uint32_t arg2);
void* __cdecl ext_00465B40(void);
void __thiscall ext_006A5FDA(void* self, uint32_t enabled);
void ext_006A5E00(void);
void ext_006A600A(void);
extern uint32_t mem_00925650;
extern uint32_t mem_00925654;
extern uint32_t mem_00925694;

void __thiscall fn_00407750(void* self, uint32_t arg1, uint32_t arg2) {
    (void)ext_006A5E00;
    (void)ext_006A600A;
    (void)mem_00925650;
    (void)mem_00925654;
    (void)mem_00925694;

    ext_006A5FE6(self, arg1, arg2);
    ext_006A5FE0(self, arg1, arg2);

    static constexpr uintptr_t kOffsets[] = {0x198, 0x1ec, 0x240};
    for (uintptr_t offset : kOffsets) {
        void* obj = ext_00465B40();
        auto vtable = *reinterpret_cast<uintptr_t**>(obj);
        auto vfunc = reinterpret_cast<uint8_t(__thiscall*)(void*)>(vtable[0x12c / sizeof(uintptr_t)]);
        uint32_t enabled = static_cast<uint32_t>(vfunc(obj));
        ext_006A5FDA(reinterpret_cast<uint8_t*>(self) + offset, enabled);
    }
}
} // namespace lift_00407750
