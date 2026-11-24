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

// [0x007C9370] sub_007C9370 (34 bytes)
namespace lift_007C9370 {
// Known callee 0x007CA120: sub_007CA120 (121 bytes), cdecl, 4 stack args.
extern uint32_t ext_007CA120(void* a0, void* a1, uint32_t a2, uint32_t a3);

// @name Unknown::forwardWithSubobject
// @class Unknown
// @summary Calls ext_007CA120 with this->+0x98 as first argument, this+0x12C as second, 0 as third, and arg2 as fourth; returns its result.
// @field Unknown +0x98 void* field_0x98
// @field Unknown +0x12C void* field_0x12C
uint32_t fn_007C9370(void* self, uint32_t arg2) {
    void* handle = lift_field<void*>(self, 0x98);
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x12C;
    return ext_007CA120(handle, sub, 0, arg2);
}
} // namespace lift_007C9370
