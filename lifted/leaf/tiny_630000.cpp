// Lifted C++ translation unit: lifted/leaf/tiny_630000.cpp
#include "lift_compat.h"
extern "C" int mem_0097CC34;

// [0x0063E970] sub_0063E970 (7 bytes)
// @name sub_0063E970
// @summary Stores address of mem_0097CC34 into field at offset +0x0.
extern "C" void __fastcall fn_0063E970(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0097CC34;
}

// [0x0063E960]
namespace lift_0063E960 {
extern uint8_t mem_0097CC34[];

// @name sub_0063E960_ctor
// @summary Initializes object vtable pointer at +0x00 to 0x0097CC34 and returns this.
// @field Object +0x00 uint32_t vftable
uint32_t __thiscall sub_0063E960(uint32_t this_ptr) {
    *reinterpret_cast<uint32_t*>(this_ptr) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_0097CC34));
    return this_ptr;
}
} // namespace lift_0063E960

// [0x0063FFE0]
namespace lift_0063FFE0 {
extern uint32_t mem_0097CC34;

// @name sub_0063FFE0
// @summary Sets vtable pointer at +0x0 to 0x0097CC34 and returns this.
// @field Unknown +0x00 void* vtable
void* __thiscall sub_0063FFE0(void* self, uint32_t /*unused*/) {
    *reinterpret_cast<void**>(self) = &mem_0097CC34;
    return self;
}
} // namespace lift_0063FFE0

// [0x00630560] sub_00630560 (24 bytes)
namespace lift_00630560 {
// @name sub_00630560
// @summary Auto-lifted identical-shape clone of 0x00602F00 (UnknownClass::GetSubobject14ViaVirtual28).
namespace lift_00602F00 {
// @name UnknownClass::GetSubobject14ViaVirtual28
// @class UnknownClass
// @summary Calls the vtable slot at +0x28 of the object pointed to by this+0x04, passing the address this+0x14 as its single argument (callee pops), then returns this+0x14; thiscall.
// @field UnknownClass +0x04 void* field_0x04
void* fn_00630560(void* self) {
    void* subobject = static_cast<uint8_t*>(self) + 0x12C;
    void* obj = lift_field<void*>(self, 0x04);
    void* vtable = lift_field<void*>(obj, 0x00);
    using Slot28Fn = void (*)(void* thisPtr, void* arg);
    auto fn = reinterpret_cast<Slot28Fn>(lift_field<void*>(vtable, 0x3C));
    fn(obj, subobject);
    return subobject;
}
} // namespace lift_00602F00
} // namespace lift_00630560

// [0x006305C0] sub_006305C0 (24 bytes)
namespace lift_006305C0 {
// @name sub_006305C0
// @summary Auto-lifted identical-shape clone of 0x00602F00 (UnknownClass::GetSubobject14ViaVirtual28).
namespace lift_00602F00 {
// @name UnknownClass::GetSubobject14ViaVirtual28
// @class UnknownClass
// @summary Calls the vtable slot at +0x28 of the object pointed to by this+0x04, passing the address this+0x14 as its single argument (callee pops), then returns this+0x14; thiscall.
// @field UnknownClass +0x04 void* field_0x04
void* fn_006305C0(void* self) {
    void* subobject = static_cast<uint8_t*>(self) + 0x120;
    void* obj = lift_field<void*>(self, 0x04);
    void* vtable = lift_field<void*>(obj, 0x00);
    using Slot28Fn = void (*)(void* thisPtr, void* arg);
    auto fn = reinterpret_cast<Slot28Fn>(lift_field<void*>(vtable, 0x34));
    fn(obj, subobject);
    return subobject;
}
} // namespace lift_00602F00
} // namespace lift_006305C0

// [0x006305E0] sub_006305E0 (24 bytes)
namespace lift_006305E0 {
// @name sub_006305E0
// @summary Auto-lifted identical-shape clone of 0x00602F00 (UnknownClass::GetSubobject14ViaVirtual28).
namespace lift_00602F00 {
// @name UnknownClass::GetSubobject14ViaVirtual28
// @class UnknownClass
// @summary Calls the vtable slot at +0x28 of the object pointed to by this+0x04, passing the address this+0x14 as its single argument (callee pops), then returns this+0x14; thiscall.
// @field UnknownClass +0x04 void* field_0x04
void* fn_006305E0(void* self) {
    void* subobject = static_cast<uint8_t*>(self) + 0x138;
    void* obj = lift_field<void*>(self, 0x04);
    void* vtable = lift_field<void*>(obj, 0x00);
    using Slot28Fn = void (*)(void* thisPtr, void* arg);
    auto fn = reinterpret_cast<Slot28Fn>(lift_field<void*>(vtable, 0x40));
    fn(obj, subobject);
    return subobject;
}
} // namespace lift_00602F00
} // namespace lift_006305E0

// [0x00630580] sub_00630580 (26 bytes)
namespace lift_00630580 {
// @name Self::GetSubobjectAndNotify
// @class Self
// @summary Calls vtable slot 12 of the object at self+0x04 with (self+0x114, 0), then returns self+0x114.
// @field Self +0x04 void* field_04
// @field Self +0x114 void* field_114
void* fn_00630580(void* self) {
    // Object pointer stored at self+0x04.
    void* obj = lift_field<void*>(self, 0x04);

    // Address of the embedded subobject at self+0x114.
    void* sub = static_cast<unsigned char*>(self) + 0x114;

    // Virtual slot 12 (offset 0x30) of obj's vtable, called as (obj, sub, 0).
    void** vtbl = *reinterpret_cast<void***>(obj);
    using SlotFn = void (__thiscall*)(void* self, void* arg, int flag);
    auto slot = reinterpret_cast<SlotFn>(vtbl[12]);
    slot(obj, sub, 0);

    return sub;
}
} // namespace lift_00630580

// [0x006305A0] sub_006305A0 (26 bytes)
namespace lift_006305A0 {
// @name fn_006305A0_ForwardSlot30AndReturnSub114
// @summary Calls virtual slot 0x30 on the object at self+0x04 with (self+0x114, 1); returns self+0x114.
// @field Unknown +0x04 void* child
// @field Unknown +0x114 void* sub114
//
// Calling convention (from asm): self arrives in ECX (thiscall), no stack cleanup
// by the caller. Virtual call args are pushed as (sub114, 1), so the callee receives
// (this = child, sub114, 1) with the callee popping its own arguments.
using ForwardSlotFn = void(__thiscall*)(void* self, void* arg, int flag);

void* fn_006305A0(void* self) {
    void* sub114 = static_cast<uint8_t*>(self) + 0x114;
    void* child = lift_field<void*>(self, 0x04);

    // vtable = *(child); slot at +0x30 = vtable[0x30 / sizeof(void*)] on 32-bit
    auto* vtable = *reinterpret_cast<void* const* const*>(child);
    auto slot = reinterpret_cast<ForwardSlotFn>(const_cast<void*>(vtable[0x30 / 4]));

    slot(child, sub114, 1);
    return sub114;
}
} // namespace lift_006305A0
