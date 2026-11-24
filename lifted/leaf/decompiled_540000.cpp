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
