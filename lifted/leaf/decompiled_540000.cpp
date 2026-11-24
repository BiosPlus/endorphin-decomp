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
