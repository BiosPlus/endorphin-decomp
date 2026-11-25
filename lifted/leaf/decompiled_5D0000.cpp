// Lifted C++ translation unit: lifted/leaf/decompiled_5D0000.cpp
#include "lift_compat.h"

// [0x005D06D0] sub_005D06D0 (14 bytes)
namespace lift_005D06D0 {
// @name sub_005D06D0
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_005D06D0(uint32_t ecx) {
    return ext_005B11E0(ecx + 0x210u, 0u);
}
} // namespace lift_00611160
} // namespace lift_005D06D0

// [0x005D07E0] sub_005D07E0 (12 bytes)
namespace lift_005D07E0 {
extern uint32_t ext_005CFCB0();
// Known callee 0x005CFCC0: sub_005CFCC0 (Auto-lifted identical-shape clone of 0x004CE810 (Unknown::GetRecordByIndex).)
extern void* ext_005CFCC0(uint32_t index);

// @name Unknown::GetRecordByCurrentIndex
// @class Unknown
// @summary Obtains an index from helper 0x005CFCB0 and returns the record at that index via 0x005CFCC0.
void* fn_005D07E0() {
    uint32_t index = ext_005CFCB0();
    return ext_005CFCC0(index);
}
} // namespace lift_005D07E0

// [0x005DF270]
namespace lift_005DF270 {
extern void ext_006A5C5C(void* ptr);

// @name Tree_eraseSubtree
// @class Tree
// @summary Recursively erases and frees all non-nil nodes in a red-black tree subtree
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x08 uint32_t right
// @field TreeNode +0x15 uint8_t isNil
extern void __thiscall fn_005DF270(void* self, uint32_t node) {
    uint32_t edi = node;
    if (*reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(edi) + 0x15) == 0) {
        uint32_t esi = edi;
        do {
            fn_005DF270(self, *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(esi) + 0x8));
            esi = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(esi));
            ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(edi)));
            edi = esi;
        } while (*reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(esi) + 0x15) == 0);
    }
}
} // namespace lift_005DF270

// [0x005D9EF0] sub_005D9EF0 (56 bytes)
namespace lift_005D9EF0 {
extern uint32_t ext_00480920(uint32_t value);
extern int mem_00B40644;
extern int mem_00965D08;

// @name CObject::InitTimerFloor
// @class CObject
// @summary If the flag at +0x1f1 is clear, forward a global value through a helper and a virtual call on the object at +0x04, then store the float constant 5.0 at +0x1f4.
// @field CObject +0x04 void* field_0x04
// @field CObject +0x1f1 uint8_t field_0x1f1
// @field CObject +0x1f4 float field_0x1f4
void fn_005D9EF0(void* self) {
    using VirtualFn = void (*)(void* self, uint32_t arg0, int32_t arg1);

    if (lift_field<uint8_t>(self, 0x1f1) != 0) {
        return;
    }

    const uint32_t global_value = static_cast<uint32_t>(mem_00B40644);
    void* const obj = lift_field<void*>(self, 0x04);
    const uint32_t helper_result = ext_00480920(global_value);

    // Virtual call through slot 0 of the object at +0x04, with `this` = &self->field_0x04.
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto fn = reinterpret_cast<VirtualFn>(vtbl[0]);
    fn(reinterpret_cast<uint8_t*>(self) + 0x04, helper_result, 0);

    // 0x40A00000 is the IEEE-754 bit pattern of 5.0f (mem_00965D08).
    lift_field<float>(self, 0x1f4) = 5.0f;
}
} // namespace lift_005D9EF0

// [0x005D9F30] sub_005D9F30 (81 bytes)
namespace lift_005D9F30 {
// Known callee 0x005D14A0: ResetOwnedObject (If the object at +0x04 is non-null, call its vtable slot 0 with flag 1 (deleting destructor), then clear the pointer.)
extern void ext_005D14A0(void* self);

// @name ReleaseOwnedObjectScope
// @class <unknown owner> (member; owner class not recovered)
// @summary Calls ResetOwnedObject on self, then if self+0x04 is still non-null, invokes its vtable slot 0 with flag 1 (deleting destructor).
// @field Self +0x04 void* ownedObject
void fn_005D9F30(void* self) {
    // The original wraps this in an SEH unwind frame (state -1, cookie handler 0x008A562B).
    // That frame only performs cleanup on unwind; the normal path below is unchanged.
    ext_005D14A0(self);

    void* obj = lift_field<void*>(self, 0x04);
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot0 = reinterpret_cast<void (*)(void*, int)>(vtbl[0]);
        slot0(obj, 1);
    }
}
} // namespace lift_005D9F30

// [0x005DC930] sub_005DC930 (37 bytes)
namespace lift_005DC930 {
// Known callee 0x005D9F30: ReleaseOwnedObjectScope (ECX = self; thiscall, one pointer argument)
extern void ext_005D9F30(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk to MFC80!ord_764; cdecl, one argument pushed)
extern void ext_006A5C5C(void* arg);

// @name ClearOwnedObjectAt0x44
// @summary If the owned pointer at +0x44 is non-null, release its scope, pass it to MFC80!ord_764, then clear the slot.
// @field UnknownClass +0x44 void* field_0x44

void fn_005DC930(void* self) {
    auto* base = static_cast<std::uint8_t*>(self);
    auto** slot = reinterpret_cast<void**>(base + 0x44);

    void* owned = *slot;
    if (owned != nullptr) {
        ext_005D9F30(owned);
        ext_006A5C5C(owned);
    }
    *slot = nullptr;
}
} // namespace lift_005DC930
