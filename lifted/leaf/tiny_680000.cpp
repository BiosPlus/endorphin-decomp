// Lifted C++ translation unit: lifted/leaf/tiny_680000.cpp
#include "lift_compat.h"
extern "C" uintptr_t mem_00924FDC;
extern "C" void __fastcall ext_00682FD0(void* self);
extern "C" uintptr_t mem_00924FF4;
extern "C" void __fastcall ext_00508680(void* self);
#include <cstring>
#include <cstdint>

#include <cstdint>
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

// [0x00687250] sub_00687250 (13 bytes)
namespace lift_00687250 {
// @name SubObject::getActiveSubobject
// @class SubObject
// @summary Returns the address of the +0x10 subobject when the flag at +0x68 is zero, otherwise the +0x54 subobject.
// @field SubObject +0x68 DWORD field_0x68
void* fn_00687250(void* self) {
    // cmp dword ptr [self+0x68], 0 ; lea eax,[self+0x10] ; je ret ; lea eax,[self+0x54]
    if (lift_field<DWORD>(self, 0x68) == 0) {
        return reinterpret_cast<uint8_t*>(self) + 0x10;
    }
    return reinterpret_cast<uint8_t*>(self) + 0x54;
}
} // namespace lift_00687250

// [0x00681FE0] sub_00681FE0 (17 bytes)
namespace lift_00681FE0 {
// @name sub_00681FE0
// @summary Auto-lifted identical-shape clone of 0x005B1830 (initVtableAndZeroFields_005B1830).
namespace lift_005B1830 {
// @name initVtableAndZeroFields_005B1830
// @summary Thiscall initializer: stores the vtable address 0x0095F83C at [this+0], zeroes [this+4] and [this+8], and returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void* fn_00681FE0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x98CDA4u; // immediate address, not a load from mem_0095F83C
    lift_field<uint32_t>(self, 0x04) = 0u;
    lift_field<uint32_t>(self, 0x08) = 0u;
    return self;
}
} // namespace lift_005B1830
} // namespace lift_00681FE0

// [0x00682DE0] sub_00682DE0 (19 bytes)
namespace lift_00682DE0 {
// @name sub_00682DE0
// @summary Auto-lifted identical-shape clone of 0x0041C710 (descriptiveName_0041C710 (delegateToChildVirtual19)).
namespace lift_0041C710 {
// @name descriptiveName_0041C710 (delegateToChildVirtual19)
// @summary If the pointer at +0x08 is null return 0; otherwise tail-call virtual slot 19 (vtable +0x4C) of that child object and return its result.
// @field Unknown +0x08 void* child

namespace {
// Callee signature for the child's virtual slot; result is returned in the low byte.
using ChildVirtual19 = uint8_t (*)(void* self);
}

uint8_t fn_00682DE0(void* self) {
    // cmp dword ptr [ecx+8], 0 / je -> return 0
    void* child = lift_field<void*>(self, 0x28);
    if (child == nullptr) {
        return 0;
    }

    // mov ecx, [ecx+8]; mov eax, [ecx]; mov edx, [eax+0x4c]; jmp edx
    // Vtable is read using the original 32-bit layout (slot at +0x4C).
    void* vtbl = lift_field<void*>(child, 0x00);
    const uintptr_t target = static_cast<uintptr_t>(lift_field<uint32_t>(vtbl, 0x58));
    auto fn = reinterpret_cast<ChildVirtual19>(target);
    return fn(child);
}
} // namespace lift_0041C710
} // namespace lift_00682DE0

// [0x0068EE60] sub_0068EE60 (23 bytes)
namespace lift_0068EE60 {
// @name sub_0068EE60
// @summary Auto-lifted identical-shape clone of 0x004CE810 (Unknown::GetRecordByIndex).
namespace lift_004CE810 {
// Table of 28-byte records at 0x00AE5290.
extern uint8_t mem_00B5AE40[];

// @name Unknown::GetRecordByIndex
// @summary Returns the address of record `index` in the 28-byte-stride table at 0x00AE5290 (stdcall, ret 4).
// (no @class / @field: the function touches no struct fields)
void* __stdcall fn_0068EE60(uint32_t index) {
    // ecx = 8*eax - eax = 7*index; eax = 4*ecx + 0xAE5290 = 28*index + 0xAE5290
    return mem_00B5AE40 + static_cast<size_t>(index) * 28u;
}
} // namespace lift_004CE810
} // namespace lift_0068EE60

// [0x00687280]
namespace lift_00687280 {
// @name writeIfFlagClear
// @summary Writes a 32-bit value to out if (this->field_0x150 & mask) == 0
// @field Self +0x150 uint32_t field_0x150


void __thiscall sub_00687280(void* this_ptr, uint32_t val, uint32_t* out, uint32_t mask) {
    if ((*reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(this_ptr) + 0x150) & mask) == 0) {
        *out = val;
    }
}
} // namespace lift_00687280

// [0x006872A0]
namespace lift_006872A0 {
// @name writeByteIfFlagClear
// @summary Conditionally writes a byte to an output pointer if a bitmask at offset 0x150 is clear
// @field unknown +0x150 uint32_t field_0x150


void __thiscall sub_006872A0(uint8_t* self, uint8_t val, uint8_t* out, uint32_t mask) {
    if ((*reinterpret_cast<const uint32_t*>(self + 0x150) & mask) == 0) {
        *out = val;
    }
}
} // namespace lift_006872A0

// [0x00687230] sub_00687230 (30 bytes)
namespace lift_00687230 {
// @name conditionalSetFlagB0IfModeNot19Or20
// @summary If the pointer at +0xA8 is non-null and the mode at +0x48 is neither 0x13 nor 0x14, sets the byte at +0xB0 to 1.
// @field field_0x48 int32 mode (class not identified)
// @field field_0xA8 int32 gate (class not identified; tested against 0)
// @field field_0xB0 uint8 flag (class not identified)
void fn_00687230(void* self) {
    if (lift_field<int32_t>(self, 0xA8) == 0) {
        return;
    }
    int32_t mode = lift_field<int32_t>(self, 0x48);
    if (mode == 0x13 || mode == 0x14) {
        return;
    }
    lift_field<uint8_t>(self, 0xB0) = 1;
}
} // namespace lift_00687230
