// Lifted C++ translation unit: lifted/leaf/decompiled_540000.cpp
#include "lift_compat.h"

// [0x005478B0] sub_005478B0 (14 bytes)
namespace lift_005478B0 {
// @name sub_005478B0
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005478B0(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 5u);
}
} // namespace lift_00611160
} // namespace lift_005478B0

// [0x005478C0] sub_005478C0 (14 bytes)
namespace lift_005478C0 {
// @name sub_005478C0
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005478C0(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 3u);
}
} // namespace lift_00611160
} // namespace lift_005478C0

// [0x005478D0] sub_005478D0 (14 bytes)
namespace lift_005478D0 {
// @name sub_005478D0
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005478D0(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 4u);
}
} // namespace lift_00611160
} // namespace lift_005478D0

// [0x00543530] sub_00543530 (21 bytes)
namespace lift_00543530 {
// @name VTableDispatch::ClearFlagsAndTailCallSlot16
// @class VTableDispatch
// @summary Sets the byte flags at +0x90 to 1 and +0x93 to 0, then tail-jumps through vtable slot at byte offset 0x40 (index 16) with the same this pointer.
// @field VTableDispatch +0x00 uint32_t vtable_ptr // object's vtable pointer (dereferenced via [ecx])
// @field VTableDispatch +0x90 uint8_t flag_0x90
// @field VTableDispatch +0x93 uint8_t flag_0x93
uint32_t fn_00543530(void* self) {
    // mov eax,[ecx]            ; eax = vtable
    const uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov byte [ecx+0x90],1
    lift_field<uint8_t>(self, 0x90) = 1;
    // mov byte [ecx+0x93],0
    lift_field<uint8_t>(self, 0x93) = 0;
    // mov eax,[eax+0x40]       ; eax = vtable[16]
    const uint32_t target = lift_field<uint32_t>(reinterpret_cast<const void*>(static_cast<uintptr_t>(vtable)), 0x40);
    // jmp eax                  ; tail call (modelled as call + return of its result)
    using Thiscall = uint32_t (*)(void*);
    return reinterpret_cast<Thiscall>(static_cast<uintptr_t>(target))(self);
}
} // namespace lift_00543530

// [0x00543580] sub_00543580 (21 bytes)
namespace lift_00543580 {
// @name sub_00543580
// @summary Auto-lifted identical-shape clone of 0x00543530 (VTableDispatch::ClearFlagsAndTailCallSlot16).
namespace lift_00543530 {
// @name VTableDispatch::ClearFlagsAndTailCallSlot16
// @class VTableDispatch
// @summary Sets the byte flags at +0x90 to 1 and +0x93 to 0, then tail-jumps through vtable slot at byte offset 0x40 (index 16) with the same this pointer.
// @field VTableDispatch +0x00 uint32_t vtable_ptr // object's vtable pointer (dereferenced via [ecx])
// @field VTableDispatch +0x90 uint8_t flag_0x90
// @field VTableDispatch +0x93 uint8_t flag_0x93
uint32_t fn_00543580(void* self) {
    // mov eax,[ecx]            ; eax = vtable
    const uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov byte [ecx+0x90],1
    lift_field<uint8_t>(self, 0x91) = 1;
    // mov byte [ecx+0x93],0
    lift_field<uint8_t>(self, 0x94) = 0;
    // mov eax,[eax+0x40]       ; eax = vtable[16]
    const uint32_t target = lift_field<uint32_t>(reinterpret_cast<const void*>(static_cast<uintptr_t>(vtable)), 0x4C);
    // jmp eax                  ; tail call (modelled as call + return of its result)
    using Thiscall = uint32_t (*)(void*);
    return reinterpret_cast<Thiscall>(static_cast<uintptr_t>(target))(self);
}
} // namespace lift_00543530
} // namespace lift_00543580

// [0x005435D0] sub_005435D0 (21 bytes)
namespace lift_005435D0 {
// @name sub_005435D0
// @summary Auto-lifted identical-shape clone of 0x00543530 (VTableDispatch::ClearFlagsAndTailCallSlot16).
namespace lift_00543530 {
// @name VTableDispatch::ClearFlagsAndTailCallSlot16
// @class VTableDispatch
// @summary Sets the byte flags at +0x90 to 1 and +0x93 to 0, then tail-jumps through vtable slot at byte offset 0x40 (index 16) with the same this pointer.
// @field VTableDispatch +0x00 uint32_t vtable_ptr // object's vtable pointer (dereferenced via [ecx])
// @field VTableDispatch +0x90 uint8_t flag_0x90
// @field VTableDispatch +0x93 uint8_t flag_0x93
uint32_t fn_005435D0(void* self) {
    // mov eax,[ecx]            ; eax = vtable
    const uint32_t vtable = lift_field<uint32_t>(self, 0x00);
    // mov byte [ecx+0x90],1
    lift_field<uint8_t>(self, 0x92) = 1;
    // mov byte [ecx+0x93],0
    lift_field<uint8_t>(self, 0x95) = 0;
    // mov eax,[eax+0x40]       ; eax = vtable[16]
    const uint32_t target = lift_field<uint32_t>(reinterpret_cast<const void*>(static_cast<uintptr_t>(vtable)), 0x54);
    // jmp eax                  ; tail call (modelled as call + return of its result)
    using Thiscall = uint32_t (*)(void*);
    return reinterpret_cast<Thiscall>(static_cast<uintptr_t>(target))(self);
}
} // namespace lift_00543530
} // namespace lift_005435D0

// [0x00540D00] sub_00540D00 (24 bytes)
namespace lift_00540D00 {
// Virtual slot 7 (vtable offset 0x1C) on a child object, called thiscall with no extra args.
typedef DWORD(__thiscall* ChildSlot7Fn)(void* self);

// @name Unknown::ForwardToIndexedChildSlot7
// @class Unknown
// @summary Picks child [self+0x08 + 60*index] where index = [self+0xF8], then tail-forwards the call to that child's vtable slot 7 and returns its result.
// @field Unknown +0x08 void* field_0x08 (child pointer table base; element i at +0x08 + 60*i)
// @field Unknown +0xF8 DWORD field_0xF8 (element index)
DWORD fn_00540D00(void* self) {
    // edx = index * 15; address = self + 4*edx + 8 = self + 8 + 60*index
    DWORD index = lift_field<DWORD>(self, 0xF8);
    DWORD slotOffset = index * 60u + 8u;
    void* child = lift_field<void*>(self, static_cast<ptrdiff_t>(slotOffset));

    // vtable = *child; target = vtable[7] (offset 0x1C)
    void** vtable = *reinterpret_cast<void***>(child);
    ChildSlot7Fn target = reinterpret_cast<ChildSlot7Fn>(vtable[7]);

    return target(child);
}
} // namespace lift_00540D00

// [0x005434C0]
namespace lift_005434C0 {
// @name sub_005434C0
// @summary Returns 1 if this->field_0x88 is null; otherwise tail-dispatches vtable slot 8 (+0x20) on the object at field_0x88 and returns its result.
// @field Unknown +0x88 ptr field_0x88 (pointer to child object; owner class not identified)

uint8_t sub_005434C0(void* self) {
    auto* child = lift_field<unsigned char*>(self, 0x88);
    if (child == nullptr) {
        return 1;
    }
    using VSlot8Fn = uint8_t (__thiscall*)(void*);
    auto* vtable = *reinterpret_cast<void***>(child);
    auto fn = reinterpret_cast<VSlot8Fn>(vtable[8]);
    return fn(child);
}
} // namespace lift_005434C0

// [0x00548240] sub_00548240 (27 bytes)
namespace lift_00548240 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(void* self, uint32_t index);

// @name sub_00548240
// @class <unknown>
// @summary Returns 1.0f if this+0xA0 is null; otherwise returns ext_005B11E0(this+0xA0+0x210, 5), i.e. element 5 of the float array of the sub-object at +0xA0.
// @field <unknown> +0xA0 void* field_0xa0
float fn_00548240(void* self) {
    void* child = lift_field<void*>(self, 0xa0);
    if (child == nullptr) {
        return 1.0f;
    }
    void* sub = static_cast<char*>(child) + 0x210;
    return ext_005B11E0(sub, 5);
}
} // namespace lift_00548240

// [0x005481C0] Unknown::GetFloatFromChildOrDouble (31 bytes)
namespace lift_005481C0 {
// Callee: sub_005B11E0 (getFloatAt) — float __thiscall(this, uint32_t index)
float ext_005B11E0(void* self, uint32_t index);

// @name Unknown::GetFloatFromChildOrDouble
// @class Unknown
// @summary If the pointer at +0xA0 is set, return child float [3] (child at +0x210); otherwise return the double at +0xD0.
// @field Unknown +0xA0 void* field_0xA0
// @field Unknown +0xD0 double field_0xD0
double fn_005481C0(void* self) {
    void* child = lift_field<void*>(self, 0xA0);
    if (child != nullptr) {
        void* sub = reinterpret_cast<uint8_t*>(child) + 0x210;
        return static_cast<double>(ext_005B11E0(sub, 3));
    }
    return lift_field<double>(self, 0xD0);
}
} // namespace lift_005481C0

// [0x00540E10] sub_00540E10 (34 bytes)
namespace lift_00540E10 {
extern void ext_00548110(int32_t height, int32_t width);

// @name Unknown::setValueAndNotifyExtent
// @class Unknown
// @summary Stores the argument at self+0; if it is nonzero, passes the (bottom-top, right-left) extent of the 16-byte block at self+4..self+0x10 to ext_00548110.
// @field Unknown +0x00 int32_t field_0x00
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x08 int32_t field_0x08
// @field Unknown +0x0C int32_t field_0x0C
// @field Unknown +0x10 int32_t field_0x10
void fn_00540E10(void* self, int32_t value) {
    lift_field<int32_t>(self, 0x00) = value;
    if (value != 0) {
        const int32_t width  = lift_field<int32_t>(self, 0x10) - lift_field<int32_t>(self, 0x08);
        const int32_t height = lift_field<int32_t>(self, 0x0C) - lift_field<int32_t>(self, 0x04);
        ext_00548110(height, width);
    }
}
} // namespace lift_00540E10

// [0x005498E0]
namespace lift_005498E0 {
// @name QuadricRenderer::destroy
// @class QuadricRenderer
// @summary Destroys two GLU quadrics and delegates to base destructor.
// @field QuadricRenderer +0x00 void* vftable
// @field QuadricRenderer +0x18 void* quadric1
// @field QuadricRenderer +0x1C void* quadric2


extern uint8_t mem_00956CE4[];
extern void __stdcall ext_0063E006(void* quad);
extern void __fastcall ext_00552850(void* self);

extern void __fastcall fn_005498E0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* quad1 = *reinterpret_cast<void**>(obj + 0x18);
    *reinterpret_cast<void**>(obj + 0x0) = mem_00956CE4;
    ext_0063E006(quad1);
    void* quad2 = *reinterpret_cast<void**>(obj + 0x1C);
    ext_0063E006(quad2);
    ext_00552850(self);
}
} // namespace lift_005498E0

// [0x00543550] sub_00543550 (40 bytes)
namespace lift_00543550 {
// @name forwardVtableSlot17AndClearFlags
// @class <ClassName> (unknown; no class context recovered)
// @summary Forwards two stack args to virtual slot 17 (vtable+0x44) on self, then clears the byte flags at self+0x90 and self+0x93.
// @field <ClassName> +0x90 uint8_t field_0x90
// @field <ClassName> +0x93 uint8_t field_0x93
void fn_00543550(void* self, uint32_t arg0, uint32_t arg1) {
    // Virtual call: vtable slot 17 (byte offset 0x44), thiscall with (arg0, arg1); callee cleans the stack.
    // Slot is addressed by byte offset (0x44) so it is correct on both 32- and 64-bit hosts.
    uint8_t* vtable = *reinterpret_cast<uint8_t**>(self);
    using VSlot17 = void(__thiscall*)(void*, uint32_t, uint32_t);
    auto slot17 = *reinterpret_cast<VSlot17*>(vtable + 0x44);
    slot17(self, arg0, arg1);

    lift_field<uint8_t>(self, 0x90) = 0;
    lift_field<uint8_t>(self, 0x93) = 0;
}
} // namespace lift_00543550

// [0x005435F0] sub_005435F0 (40 bytes)
namespace lift_005435F0 {
// @name UnknownClass::forwardVirtual58AndClearFlags
// @class UnknownClass
// @summary Forwards two args to virtual slot +0x58 on self, then clears byte flags at +0x92 and +0x95.
// @field UnknownClass +0x92 uint8_t field_0x92
// @field UnknownClass +0x95 uint8_t field_0x95

using VirtualSlot58Fn = void (__thiscall*)(void* self, uint32_t a, uint32_t b);

void fn_005435F0(void* self, uint32_t a, uint32_t b) {
    void* vtable = lift_field<void*>(self, 0);
    void* slot58 = lift_field<void*>(vtable, 0x58);
    reinterpret_cast<VirtualSlot58Fn>(slot58)(self, a, b);
    lift_field<uint8_t>(self, 0x92) = 0;
    lift_field<uint8_t>(self, 0x95) = 0;
}
} // namespace lift_005435F0

// [0x005435A0] sub_005435A0 (40 bytes)
namespace lift_005435A0 {
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write8(uint32_t addr, uint8_t value);

// @name Object::dispatchVirtualSlot14AndClearFlags
// @summary Calls virtual slot 0x50 on this with two stack arguments, then clears the byte flags at +0x91 and +0x94.
// @field Object +0x00 void** vtable
// @field Object +0x91 uint8_t field_0x91
// @field Object +0x94 uint8_t field_0x94
void __thiscall fn_005435A0(uint32_t self, uint32_t a1, uint32_t a2) {
    uint32_t vtable = mem_read32(self);
    uint32_t fn_ptr = mem_read32(vtable + 0x50);
    using VMethod = void(__thiscall*)(uint32_t, uint32_t, uint32_t);
    reinterpret_cast<VMethod>(static_cast<uintptr_t>(fn_ptr))(self, a1, a2);
    mem_write8(self + 0x91, 0);
    mem_write8(self + 0x94, 0);
}
} // namespace lift_005435A0

// [0x00547E80]
namespace lift_00547E80 {
// @name Object::copyVec3IfFlagClearAndNotify
// @class Object
// @summary If field_0xa0 is zero, copies a 3-float vector from the argument into fields 0x68..0x70 and invokes vtable slot 17 on self.
// @field Object +0x68 float field_0x68
// @field Object +0x6c float field_0x6c
// @field Object +0x70 float field_0x70
// @field Object +0xa0 uint32_t field_0xa0


void __thiscall fn_00547E80(void* self, const float* src) {
    if (lift_field<uint32_t>(self, 0xA0) != 0) {
        return;
    }

    lift_field<float>(self, 0x68) = src[0];
    lift_field<float>(self, 0x6C) = src[1];
    lift_field<float>(self, 0x70) = src[2];

    void** vtable = *reinterpret_cast<void***>(self);
    using Slot17Fn = void(__thiscall*)(void*);
    auto slot17 = reinterpret_cast<Slot17Fn>(vtable[0x44 / 4]);
    slot17(self);
}
} // namespace lift_00547E80
