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
