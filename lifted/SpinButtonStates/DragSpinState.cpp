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

// [0x00458990] SpinButtonStates::DragSpinState::vfunc_5 (77 bytes)
namespace lift_00458990 {
// Known callee 0x006A5EC0: thunk_MFC80_ord_2654 (IAT jump thunk forwarding to MFC80!ord_2654.)
// Takes its argument in ecx and returns a value in eax.
extern uint32_t ext_006A5EC0(void* ecx);
// Known callee 0x00458860: sub_00458860 (Releases current item at +0x10, bounds-checks index against vector at +0x4/+0x8, selects new item, and invokes vtable[1])
// thiscall: self in ecx, one stack argument.
extern void ext_00458860(void* self, uint32_t index);

// IAT slots for USER32 imports (called through pointers, as the original did via [mem_]).
extern int (*mem_009256DC)(int x, int y);  // USER32!SetCursorPos
extern int (*mem_009256A0)(int show);      // USER32!ShowCursor
extern int (*mem_009256E0)(void);          // USER32!ReleaseCapture

// @name SpinButtonStates::DragSpinState::vfunc_5
// @class SpinButtonStates::DragSpinState
// @summary Warps the cursor to the packed (x,y) point at +0x10, shows the cursor, releases capture, then notifies the object at +0x4 via vtable[2] and runs sub_00458860(+0xC, 0).
// @field SpinButtonStates::DragSpinState +0x04 uint32_t field_0x04 (32-bit pointer to object; its vtable slot 2 is invoked)
// @field SpinButtonStates::DragSpinState +0x08 uint32_t field_0x08 (argument passed to ext_006A5EC0)
// @field SpinButtonStates::DragSpinState +0x0C uint32_t field_0x0C (32-bit this for ext_00458860)
// @field SpinButtonStates::DragSpinState +0x10 uint32_t field_0x10 (packed cursor point: low word x, high word y)
void fn_00458990(void* self, uint32_t /*stackArg0*/, uint32_t /*stackArg1*/) {
    // Cursor position: low 16 bits = x, high 16 bits = y, both sign-extended.
    const uint32_t packed = lift_field<uint32_t>(self, 0x10);
    const int x = static_cast<int16_t>(static_cast<uint16_t>(packed & 0xFFFFu));
    const int y = static_cast<int16_t>(static_cast<uint16_t>(packed >> 16));

    mem_009256DC(x, y);
    mem_009256A0(1);
    mem_009256E0();

    // Object pointer at +0x4; read its vtable pointer.
    const uint32_t obj = lift_field<uint32_t>(self, 0x04);
    const uint32_t vtable = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(obj));

    const uint32_t arg = ext_006A5EC0(
        reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x08))));

    // vtable[2] of the object at +0x4, thiscall(obj, arg).
    using VirtualFn = void (*)(void* self, uint32_t arg);
    const uint32_t slot2 = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable + 0x8));
    auto fn = reinterpret_cast<VirtualFn>(static_cast<uintptr_t>(slot2));
    fn(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)), arg);

    ext_00458860(
        reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x0C))),
        0);
}
} // namespace lift_00458990
