// Lifted C++ translation unit: lifted/leaf/tiny_680000.cpp
#include "lift_compat.h"
extern "C" uintptr_t mem_00924FDC;
extern "C" void __fastcall ext_00682FD0(void* self);
extern "C" uintptr_t mem_00924FF4;
extern "C" void __fastcall ext_00508680(void* self);

// [0x00682ED0] sub_00682ED0 (5 bytes)
// @name VirtualSlot9Thunk
// @class Object (unidentified; receiver is passed in ecx)
// @summary Virtual dispatch thunk: loads the vtable pointer from the receiver and returns the code address stored at vtable byte offset 0x24 (slot 9 on x86). The original tail-jumps to that address with the same this; this lift returns the target so the caller performs the call.
// @field Object +0x00 void** vptr
//
// Notes:
// - Original: mov eax, [ecx] / jmp [eax + 0x24]. No stack adjustment, so the
//   callee's arguments and return address are untouched by the thunk.
// - Pass-through is expressed as a call with the same this; the callee's
//   signature is unknown, so the result is returned as void*.
void* fn_00682ED0(void* self) {
    // mov eax, [ecx]        ; eax = self->vtable
    void** vtable = *reinterpret_cast<void***>(self);
    // jmp [eax + 0x24]      ; tail-jump to vtable slot 9 (byte offset 0x24), this still in ecx
    using SlotFn = void*(__fastcall*)(void* self);
    SlotFn target = reinterpret_cast<SlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(vtable) + 0x24));
    return target(self);
}

// [0x00682990] sub_00682990 (9 bytes)
// @name sub_00682990
// @summary This-adjustor thunk: adjusts `this` by +0x6C and forwards through mem_00924FDC.
extern "C" void __fastcall fn_00682990(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x6C);
}

// [0x00682E00] sub_00682E00 (9 bytes)
// @name sub_00682E00
// @summary This-adjustor thunk: adjusts `this` by +0x50 and forwards through mem_00924FDC.
extern "C" void __fastcall fn_00682E00(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x50);
}

// [0x006830F0] sub_006830F0 (8 bytes)
// @name sub_006830F0
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_00682FD0.
extern "C" void __fastcall fn_006830F0(void* self) {
    ext_00682FD0(static_cast<char*>(self) + 0x4);
}

// [0x00687210] sub_00687210 (9 bytes)
// @name sub_00687210
// @summary This-adjustor thunk: adjusts `this` by +0x8 and forwards through mem_00924FF4.
extern "C" void __fastcall fn_00687210(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FF4);
    target(static_cast<char*>(self) + 0x8);
}

// [0x00687220] sub_00687220 (9 bytes)
// @name sub_00687220
// @summary This-adjustor thunk: adjusts `this` by +0x10 and forwards through mem_00924FF4.
extern "C" void __fastcall fn_00687220(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FF4);
    target(static_cast<char*>(self) + 0x10);
}

// [0x0068BBF0] sub_0068BBF0 (8 bytes)
// @name sub_0068BBF0
// @summary This-adjustor thunk: adjusts `this` by +0x10 and tail-calls sub_00508680.
extern "C" void __fastcall fn_0068BBF0(void* self) {
    ext_00508680(static_cast<char*>(self) + 0x10);
}

// [0x006872C0]
namespace lift_006872C0 {
uint32_t mem_read32(uint32_t addr);
uint8_t mem_read8(uint32_t addr);

// @name getTableFlagAt0x48
// @summary Reads a 32-bit index at +0x48 and returns the byte at 0x00AA2FAC + index.
// @field Self +0x48 uint32_t field_0x48
uint8_t sub_006872C0(uint32_t self) {
    uint32_t idx = mem_read32(self + 0x48u);
    return mem_read8(idx + 0x00AA2FACu);
}
} // namespace lift_006872C0

// [0x006829D0]
namespace lift_006829D0 {
extern uint32_t mem_00B5ACC8;

// @name setGlobal00B5ACC8
// @summary Stores the 32-bit argument into global mem_00B5ACC8.

void sub_006829D0(uint32_t val) {
    mem_00B5ACC8 = val;
}
} // namespace lift_006829D0

// [0x006872D0]
namespace lift_006872D0 {
extern uint32_t mem_read32(uint32_t addr);
extern uint8_t mem_read8(uint32_t addr);

// @name sub_006872D0
// @summary Reads a byte from a table at 0x00AA2FC8 indexed by the 32-bit field at offset 0x48.
// @field unknown +0x48 uint32_t field_0x48

uint8_t __thiscall sub_006872D0(uint32_t self) {
    uint32_t index = mem_read32(self + 0x48);
    return mem_read8(index + 0x00AA2FC8);
}
} // namespace lift_006872D0
