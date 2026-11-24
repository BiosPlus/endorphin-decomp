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

// [0x0063E0F0] sub_0063E0F0 (15 bytes)
namespace lift_0063E0F0 {
// @name sub_0063E0F0
// @summary Auto-lifted identical-shape clone of 0x00519CE0 (std::basic_string<char>::~basic_string (vtable-stamping thunk)).
namespace lift_00519CE0 {
extern void __thiscall ext_00628FF0(void* self);

// @name std::basic_string<char>::~basic_string (vtable-stamping thunk)
// @class <unknown> (this is in ecx; owning class not yet recovered)
// @summary Stamps the object's vtable pointer (0x0095219C) into its first dword, then tail-jumps to the MSVCP80 basic_string destructor on this+4.
// @field <unknown> +0x00 uint32_t field_0x00
void fn_0063E0F0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x97CB4Cu;   // mov dword ptr [ecx], 0x95219c
    ext_00628FF0(static_cast<uint8_t*>(self) + 4);    // add ecx, 4 ; jmp [0x924ff4] (MSVCP80 ~basic_string)
}
} // namespace lift_00519CE0
} // namespace lift_0063E0F0

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
