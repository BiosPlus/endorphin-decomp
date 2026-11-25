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

// [0x004585B0]
namespace lift_004585B0 {
// @name SpinButtonStates::DragSpinState::vfunc_8
// @class SpinButtonStates::DragSpinState
// @summary Handles mouse drag movement on a spin button, stepping value up/down and resetting cursor position.
// @field SpinButtonStates::DragSpinState +0x04 void* field_0x04
// @field SpinButtonStates::DragSpinState +0x08 void* field_0x08
// @field SpinButtonStates::DragSpinState +0x0C void* field_0x0C
// @field SpinButtonStates::DragSpinState +0x10 uint32_t field_0x10
// @field SpinButtonStates::DragSpinState +0x14 uint8_t field_0x14


extern uint32_t __thiscall ext_006A5EC0(void* self);
extern void* mem_009256DC;

extern void __thiscall fn_004585B0(void* self, void* arg1, uint32_t arg2) {
    (void)arg2;
    auto* base = static_cast<uint8_t*>(self);
    if (base[0x14] != 0) {
        base[0x14] = 0;
        return;
    }

    int32_t y_arg = *reinterpret_cast<int32_t*>(static_cast<uint8_t*>(arg1) + 0x04);
    auto* obj_c = *reinterpret_cast<uint8_t**>(base + 0x0C);
    int32_t y_obj = *reinterpret_cast<int32_t*>(obj_c + 0x18);

    if (y_arg != y_obj) {
        void* obj_4 = *reinterpret_cast<void**>(base + 0x04);
        void* obj_8 = *reinterpret_cast<void**>(base + 0x08);
        uint32_t val = ext_006A5EC0(obj_8);
        auto** vtbl = *reinterpret_cast<void***>(obj_4);
        using StepFn = void(__thiscall*)(void*, uint32_t);
        auto fn = reinterpret_cast<StepFn>(y_arg > y_obj ? vtbl[1] : vtbl[0]);
        fn(obj_4, val);
    }

    uint32_t packed_pt = *reinterpret_cast<uint32_t*>(base + 0x10);
    int32_t x = static_cast<int16_t>(packed_pt & 0xFFFF);
    int32_t y = static_cast<int16_t>(packed_pt >> 16);
    using SetCursorPosFn = int32_t(__stdcall*)(int32_t, int32_t);
    reinterpret_cast<SetCursorPosFn>(mem_009256DC)(x, y);

    base[0x14] = 1;
}
} // namespace lift_004585B0
