// Lifted C++ translation unit: lifted/leaf/decompiled_7C0000.cpp
#include "lift_compat.h"

// [0x007C97A0]
namespace lift_007C97A0 {
// @name Unknown::setField44IfBit0Clear
// @class Unknown
// @summary Sets the 32-bit field at +0x44 if bit 0 of +0x9C is clear.
// @field Unknown +0x44 uint32_t field_0x44


extern uint32_t ext_007C9260(void* self);

void fn_007C97A0(void* self, uint32_t value) {
    if (ext_007C9260(self) == 0) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x44) = value;
    }
}
} // namespace lift_007C97A0

// [0x007C9930]
namespace lift_007C9930 {
// @name Unknown::CallHelperThenDispatchAt15C
// @summary Calls ext_007C98C0 on the argument, then calls the indirect target in mem_00AB28C8 with (this+0x40+0x15C, this, this).
// @field Unknown +0x40 DWORD field_0x40

extern void ext_007C98C0(void* self);
extern DWORD mem_00AB28C8;

extern void __cdecl sub_007C9930(void* self) {
    ext_007C98C0(self);
    using DispatchFn = void(__cdecl*)(DWORD, void*, void*);
    auto target = reinterpret_cast<DispatchFn>(mem_00AB28C8);
    DWORD arg = lift_field<DWORD>(self, 0x40) + 0x15C;
    target(arg, self, self);
}
} // namespace lift_007C9930
