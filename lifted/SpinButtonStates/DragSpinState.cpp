// Lifted C++ translation unit: lifted/SpinButtonStates/DragSpinState.cpp
#include "lift_compat.h"

// [0x00458810]
namespace lift_00458810 {
// @name SpinButtonStates::DragSpinState::vfunc_1
// @class SpinButtonStates::DragSpinState
// @summary Captures mouse, hides cursor, and records initial message position on drag start
// @field SpinButtonStates::DragSpinState +0x08 void* field_0x08
// @field SpinButtonStates::DragSpinState +0x10 uint32_t field_0x10


    extern uint32_t (*mem_0092569C)(void);
    extern int32_t (*mem_009256A0)(int32_t);
    extern uint32_t (*mem_009256D8)(uint32_t);
    void* ext_006A5E00(uint32_t);

void* __thiscall fn_00458810(void* self) {
    uint8_t* pThis = static_cast<uint8_t*>(self);
    uint32_t pos = mem_0092569C();
    *reinterpret_cast<uint32_t*>(pThis + 0x10) = pos;
    mem_009256A0(0);
    uint8_t* pWnd = *reinterpret_cast<uint8_t**>(pThis + 0x08);
    uint32_t hWnd = *reinterpret_cast<uint32_t*>(pWnd + 0x20);
    uint32_t prevCapture = mem_009256D8(hWnd);
    return ext_006A5E00(prevCapture);
}
} // namespace lift_00458810

// [0x00458990] SpinButtonStates::DragSpinState::vfunc_5 (77 bytes)
namespace lift_00458990 {
// @name SpinButtonStates::DragSpinState::vfunc_5
// @class SpinButtonStates::DragSpinState
// @summary Warps the cursor to the packed (x,y) point at +0x10, shows the cursor, releases mouse capture, then calls into the element at +0x4 (vtable slot 2) and resets the current element at +0xC to index 0.
// @field SpinButtonStates::DragSpinState +0x04 void* field_0x04
// @field SpinButtonStates::DragSpinState +0x08 void* field_0x08
// @field SpinButtonStates::DragSpinState +0x0C void* field_0x0C
// @field SpinButtonStates::DragSpinState +0x10 uint32_t field_0x10

// Known callee 0x006A5EC0: thunk_MFC80_ord_2654 (IAT jump thunk forwarding to MFC80!ord_2654.)
// Argument is passed in ecx; result is returned in eax.
extern uint32_t ext_006A5EC0(void* ecx_arg);

// Known callee 0x00458860: Unknown::setCurrentByIndex (selects element `index` and makes it current).
extern void ext_00458860(void* self, uint32_t index);

// USER32 imports called directly by this routine.
extern int user32_SetCursorPos(int x, int y);
extern int user32_ShowCursor(int show);
extern int user32_ReleaseCapture();

void fn_00458990(void* self) {
    // Packed point: low 16 bits = x, high 16 bits = y (both signed).
    const uint32_t packed = lift_field<uint32_t>(self, 0x10);
    const int x = static_cast<int16_t>(packed & 0xFFFFu);
    const int y = static_cast<int16_t>(packed >> 16);

    user32_SetCursorPos(x, y);
    user32_ShowCursor(1);
    user32_ReleaseCapture();

    // Element at +0x4: read its vtable before any further calls.
    void* element = lift_field<void*>(self, 0x04);
    void** vtable = *static_cast<void***>(element);

    const uint32_t r = ext_006A5EC0(lift_field<void*>(self, 0x08));

    // Virtual slot 2 (byte offset 0x08 on 32-bit) on the element, passing r.
    using SlotFn = void (*)(void* self_obj, uint32_t arg);
    auto slot2 = reinterpret_cast<SlotFn>(vtable[2]);
    slot2(element, r);

    ext_00458860(lift_field<void*>(self, 0x0C), 0);
}
} // namespace lift_00458990
