// Lifted C++ translation unit: lifted/leaf/decompiled_5E0000.cpp
#include "lift_compat.h"

// [0x005E2770] sub_005E2770 (27 bytes)
namespace lift_005E2770 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name descriptiveName_005E2770
// @summary Calls vtable slot 0x11C on the object at self+0x17C, then returns float index 0 of the result's +0x08 sub-object array.
// @field Unknown +0x17C void* field_0x17c
float fn_005E2770(void* self) {
    uintptr_t ecx = lift_field<uintptr_t>(self, 0x17C);
    uintptr_t vtbl = lift_field<uintptr_t>(reinterpret_cast<void*>(ecx), 0);
    uintptr_t slot = lift_field<uintptr_t>(reinterpret_cast<void*>(vtbl), 0x11C);
    using VFn = uintptr_t(__thiscall*)(uintptr_t);
    uintptr_t eax = reinterpret_cast<VFn>(slot)(ecx);
    return ext_005B11E0(static_cast<uint32_t>(eax + 0x08), 0);
}
} // namespace lift_005E2770

// [0x005E2810] sub_005E2810 (27 bytes)
namespace lift_005E2810 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name descriptiveName_005E2810
// @summary Calls vtable slot 0x11C on the object at self+0x17C, then returns float index 2 of the result's +0x08 sub-object array.
// @field Unknown +0x17C void* field_0x17c
float fn_005E2810(void* self) {
    uintptr_t ecx = lift_field<uintptr_t>(self, 0x17C);
    uintptr_t vtbl = lift_field<uintptr_t>(reinterpret_cast<void*>(ecx), 0);
    uintptr_t slot = lift_field<uintptr_t>(reinterpret_cast<void*>(vtbl), 0x11C);
    using VFn = uintptr_t(__thiscall*)(uintptr_t);
    uintptr_t eax = reinterpret_cast<VFn>(slot)(ecx);
    return ext_005B11E0(static_cast<uint32_t>(eax + 0x08), 2);
}
} // namespace lift_005E2810

// [0x005E2860] sub_005E2860 (27 bytes)
namespace lift_005E2860 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
// Signature: float __thiscall(this = ecx, index on stack)
extern float ext_005B11E0(uintptr_t ecx, uint32_t index);

// @name getChildSubobjectFloat3_005E2860
// @summary Fetches child object at +0x17C, calls its vtable slot +0x11C to get a sub-object, and returns float index 3 from that sub-object's array.
// @field Unknown +0x17C void* field_0x17c
float fn_005E2860(void* self) {
    // mov ecx, [self+0x17c]
    void* child = lift_field<void*>(self, 0x17c);

    // mov eax, [ecx]            ; vtable pointer
    // mov edx, [eax+0x11c]      ; vtable slot at byte offset 0x11C
    // call edx                  ; thiscall, this = child, result in eax
    void** vtbl = *reinterpret_cast<void***>(child);
    using VSlotFn = void* (*)(void*);
    VSlotFn slot = reinterpret_cast<VSlotFn>(
        *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + 0x11c));
    void* sub = slot(child);

    // lea ecx, [eax+0x8]; push 3; call getFloatAt   ; this = sub+8, index = 3
    return ext_005B11E0(reinterpret_cast<uintptr_t>(sub) + 0x8, 3);
}
} // namespace lift_005E2860

// [0x005E28B0] sub_005E28B0 (27 bytes)
namespace lift_005E28B0 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(void* self, uint32_t index);

// @name getFloatFromSubobject_005E28B0
// @summary Fetches the sub-object at this+0x17c, calls its virtual slot 0x124 to obtain a child object, and returns float index 0 from that child's array.
// @field <unknown> +0x17c void* field_0x17c
float fn_005E28B0(void* self) {
    // mov ecx, [self+0x17c]
    void* sub = lift_field<void*>(self, 0x17c);

    // mov eax, [ecx]; mov edx, [eax+0x124]; call edx   (thiscall, this = sub, result in eax)
    void** vtbl = lift_field<void**>(sub, 0);
    using VirtGetFn = void* (*)(void* thisPtr);
    VirtGetFn getChild = lift_field<VirtGetFn>(vtbl, 0x124);
    void* child = getChild(sub);

    // lea ecx, [eax+0x8]; push 0; call getFloatAt   (this = child+8, index = 0)
    return ext_005B11E0(static_cast<uint8_t*>(child) + 0x8, 0u);
}
} // namespace lift_005E28B0

// [0x005E27C0] sub_005E27C0 (27 bytes)
namespace lift_005E27C0 {
// @name sub_005E27C0
// @summary Auto-lifted identical-shape clone of 0x005E2770 (descriptiveName_005E2770).
namespace lift_005E2770 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name descriptiveName_005E2770
// @summary Calls vtable slot 0x11C on the object at self+0x17C, then returns float index 0 of the result's +0x08 sub-object array.
// @field Unknown +0x17C void* field_0x17c
float fn_005E27C0(void* self) {
    uintptr_t ecx = lift_field<uintptr_t>(self, 0x17C);
    uintptr_t vtbl = lift_field<uintptr_t>(reinterpret_cast<void*>(ecx), 1);
    uintptr_t slot = lift_field<uintptr_t>(reinterpret_cast<void*>(vtbl), 0x11C);
    using VFn = uintptr_t(__thiscall*)(uintptr_t);
    uintptr_t eax = reinterpret_cast<VFn>(slot)(ecx);
    return ext_005B11E0(static_cast<uint32_t>(eax + 0x08), 1);
}
} // namespace lift_005E2770
} // namespace lift_005E27C0

// [0x005E2900] sub_005E2900 (27 bytes)
namespace lift_005E2900 {
// @name sub_005E2900
// @summary Auto-lifted identical-shape clone of 0x005E2770 (descriptiveName_005E2770).
namespace lift_005E2770 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name descriptiveName_005E2770
// @summary Calls vtable slot 0x11C on the object at self+0x17C, then returns float index 0 of the result's +0x08 sub-object array.
// @field Unknown +0x17C void* field_0x17c
float fn_005E2900(void* self) {
    uintptr_t ecx = lift_field<uintptr_t>(self, 0x17C);
    uintptr_t vtbl = lift_field<uintptr_t>(reinterpret_cast<void*>(ecx), 1);
    uintptr_t slot = lift_field<uintptr_t>(reinterpret_cast<void*>(vtbl), 0x124);
    using VFn = uintptr_t(__thiscall*)(uintptr_t);
    uintptr_t eax = reinterpret_cast<VFn>(slot)(ecx);
    return ext_005B11E0(static_cast<uint32_t>(eax + 0x08), 1);
}
} // namespace lift_005E2770
} // namespace lift_005E2900

// [0x005E2950] sub_005E2950 (27 bytes)
namespace lift_005E2950 {
// @name sub_005E2950
// @summary Auto-lifted identical-shape clone of 0x005E2770 (descriptiveName_005E2770).
namespace lift_005E2770 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name descriptiveName_005E2770
// @summary Calls vtable slot 0x11C on the object at self+0x17C, then returns float index 0 of the result's +0x08 sub-object array.
// @field Unknown +0x17C void* field_0x17c
float fn_005E2950(void* self) {
    uintptr_t ecx = lift_field<uintptr_t>(self, 0x17C);
    uintptr_t vtbl = lift_field<uintptr_t>(reinterpret_cast<void*>(ecx), 2);
    uintptr_t slot = lift_field<uintptr_t>(reinterpret_cast<void*>(vtbl), 0x124);
    using VFn = uintptr_t(__thiscall*)(uintptr_t);
    uintptr_t eax = reinterpret_cast<VFn>(slot)(ecx);
    return ext_005B11E0(static_cast<uint32_t>(eax + 0x08), 2);
}
} // namespace lift_005E2770
} // namespace lift_005E2950

// [0x005E29A0] sub_005E29A0 (27 bytes)
namespace lift_005E29A0 {
// @name sub_005E29A0
// @summary Auto-lifted identical-shape clone of 0x005E2770 (descriptiveName_005E2770).
namespace lift_005E2770 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_005B11E0(uint32_t ecx, uint32_t index);

// @name descriptiveName_005E2770
// @summary Calls vtable slot 0x11C on the object at self+0x17C, then returns float index 0 of the result's +0x08 sub-object array.
// @field Unknown +0x17C void* field_0x17c
float fn_005E29A0(void* self) {
    uintptr_t ecx = lift_field<uintptr_t>(self, 0x17C);
    uintptr_t vtbl = lift_field<uintptr_t>(reinterpret_cast<void*>(ecx), 3);
    uintptr_t slot = lift_field<uintptr_t>(reinterpret_cast<void*>(vtbl), 0x124);
    using VFn = uintptr_t(__thiscall*)(uintptr_t);
    uintptr_t eax = reinterpret_cast<VFn>(slot)(ecx);
    return ext_005B11E0(static_cast<uint32_t>(eax + 0x08), 3);
}
} // namespace lift_005E2770
} // namespace lift_005E29A0

// [0x005ED330]
namespace lift_005ED330 {
// @name std_Tree_Erase
// @summary Recursively erases a red-black tree subtree in post-order (right child recursively, then left spine iteratively).
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x08 uint32_t right
// @field TreeNode +0x51 uint8_t isNil


extern uint8_t mem_read8(uint32_t addr);
extern uint32_t mem_read32(uint32_t addr);
extern void ext_006A5C5C(uint32_t ptr);

void __thiscall fn_005ED330(uint32_t self, uint32_t node) {
    while (mem_read8(node + 0x51) == 0) {
        fn_005ED330(self, mem_read32(node + 0x8));
        uint32_t left = mem_read32(node);
        ext_006A5C5C(node);
        node = left;
    }
}
} // namespace lift_005ED330

// [0x005E27E0]
namespace lift_005E27E0 {
// Known callee 0x006123C0: UnknownClass::setElement1AndNotify
extern void ext_006123C0(uintptr_t self, float value);

// @name UnknownClass::forwardValueToSubobjectAt17C
// @class UnknownClass
// @summary Loads the subobject pointer at +0x17C, calls its vtable slot 0x120 with the float argument, and forwards the returned object plus the same float to setElement1AndNotify (0x006123C0). Stack arg is popped by callee (ret 4).
// @field UnknownClass +0x17C uintptr_t subobject
// @field UnknownClass +0x0 uint32_t vtable

using VCall120Fn = uintptr_t (*)(uintptr_t self, float value);

void fn_005E27E0(uintptr_t self, float value) {
    uintptr_t sub = lift_field<uintptr_t>(reinterpret_cast<void*>(self), 0x17C);
    uint32_t vtbl = lift_field<uint32_t>(reinterpret_cast<void*>(sub), 0x0);
    uint32_t slotAddr = lift_field<uint32_t>(reinterpret_cast<void*>(vtbl), 0x120);
    VCall120Fn slot = reinterpret_cast<VCall120Fn>(static_cast<uintptr_t>(slotAddr));
    uintptr_t result = slot(sub, value);
    ext_006123C0(result, value);
}
} // namespace lift_005E27E0

// [0x005E2790] sub_005E2790 (34 bytes)
namespace lift_005E2790 {
// @name sub_005E2790
// @summary Auto-lifted identical-shape clone of 0x005E27E0 (UnknownClass::forwardValueToSubobjectAt17C).
namespace lift_005E27E0 {
// Known callee 0x006123C0: UnknownClass::setElement1AndNotify
extern void ext_00612370(uintptr_t self, float value);

// @name UnknownClass::forwardValueToSubobjectAt17C
// @class UnknownClass
// @summary Loads the subobject pointer at +0x17C, calls its vtable slot 0x120 with the float argument, and forwards the returned object plus the same float to setElement1AndNotify (0x006123C0). Stack arg is popped by callee (ret 4).
// @field UnknownClass +0x17C uintptr_t subobject
// @field UnknownClass +0x0 uint32_t vtable

using VCall120Fn = uintptr_t (*)(uintptr_t self, float value);

void fn_005E2790(uintptr_t self, float value) {
    uintptr_t sub = lift_field<uintptr_t>(reinterpret_cast<void*>(self), 0x17C);
    uint32_t vtbl = lift_field<uint32_t>(reinterpret_cast<void*>(sub), 0x0);
    uint32_t slotAddr = lift_field<uint32_t>(reinterpret_cast<void*>(vtbl), 0x120);
    VCall120Fn slot = reinterpret_cast<VCall120Fn>(static_cast<uintptr_t>(slotAddr));
    uintptr_t result = slot(sub, value);
    ext_00612370(result, value);
}
} // namespace lift_005E27E0
} // namespace lift_005E2790

// [0x005E2830] sub_005E2830 (34 bytes)
namespace lift_005E2830 {
// @name sub_005E2830
// @summary Auto-lifted identical-shape clone of 0x005E27E0 (UnknownClass::forwardValueToSubobjectAt17C).
namespace lift_005E27E0 {
// Known callee 0x006123C0: UnknownClass::setElement1AndNotify
extern void ext_00612410(uintptr_t self, float value);

// @name UnknownClass::forwardValueToSubobjectAt17C
// @class UnknownClass
// @summary Loads the subobject pointer at +0x17C, calls its vtable slot 0x120 with the float argument, and forwards the returned object plus the same float to setElement1AndNotify (0x006123C0). Stack arg is popped by callee (ret 4).
// @field UnknownClass +0x17C uintptr_t subobject
// @field UnknownClass +0x0 uint32_t vtable

using VCall120Fn = uintptr_t (*)(uintptr_t self, float value);

void fn_005E2830(uintptr_t self, float value) {
    uintptr_t sub = lift_field<uintptr_t>(reinterpret_cast<void*>(self), 0x17C);
    uint32_t vtbl = lift_field<uint32_t>(reinterpret_cast<void*>(sub), 0x0);
    uint32_t slotAddr = lift_field<uint32_t>(reinterpret_cast<void*>(vtbl), 0x120);
    VCall120Fn slot = reinterpret_cast<VCall120Fn>(static_cast<uintptr_t>(slotAddr));
    uintptr_t result = slot(sub, value);
    ext_00612410(result, value);
}
} // namespace lift_005E27E0
} // namespace lift_005E2830

// [0x005E2880] sub_005E2880 (34 bytes)
namespace lift_005E2880 {
// @name sub_005E2880
// @summary Auto-lifted identical-shape clone of 0x005E27E0 (UnknownClass::forwardValueToSubobjectAt17C).
namespace lift_005E27E0 {
// Known callee 0x006123C0: UnknownClass::setElement1AndNotify
extern void ext_00612460(uintptr_t self, float value);

// @name UnknownClass::forwardValueToSubobjectAt17C
// @class UnknownClass
// @summary Loads the subobject pointer at +0x17C, calls its vtable slot 0x120 with the float argument, and forwards the returned object plus the same float to setElement1AndNotify (0x006123C0). Stack arg is popped by callee (ret 4).
// @field UnknownClass +0x17C uintptr_t subobject
// @field UnknownClass +0x0 uint32_t vtable

using VCall120Fn = uintptr_t (*)(uintptr_t self, float value);

void fn_005E2880(uintptr_t self, float value) {
    uintptr_t sub = lift_field<uintptr_t>(reinterpret_cast<void*>(self), 0x17C);
    uint32_t vtbl = lift_field<uint32_t>(reinterpret_cast<void*>(sub), 0x0);
    uint32_t slotAddr = lift_field<uint32_t>(reinterpret_cast<void*>(vtbl), 0x120);
    VCall120Fn slot = reinterpret_cast<VCall120Fn>(static_cast<uintptr_t>(slotAddr));
    uintptr_t result = slot(sub, value);
    ext_00612460(result, value);
}
} // namespace lift_005E27E0
} // namespace lift_005E2880

// [0x005E28D0] sub_005E28D0 (34 bytes)
namespace lift_005E28D0 {
// @name sub_005E28D0
// @summary Auto-lifted identical-shape clone of 0x005E27E0 (UnknownClass::forwardValueToSubobjectAt17C).
namespace lift_005E27E0 {
// Known callee 0x006123C0: UnknownClass::setElement1AndNotify
extern void ext_00612370(uintptr_t self, float value);

// @name UnknownClass::forwardValueToSubobjectAt17C
// @class UnknownClass
// @summary Loads the subobject pointer at +0x17C, calls its vtable slot 0x120 with the float argument, and forwards the returned object plus the same float to setElement1AndNotify (0x006123C0). Stack arg is popped by callee (ret 4).
// @field UnknownClass +0x17C uintptr_t subobject
// @field UnknownClass +0x0 uint32_t vtable

using VCall120Fn = uintptr_t (*)(uintptr_t self, float value);

void fn_005E28D0(uintptr_t self, float value) {
    uintptr_t sub = lift_field<uintptr_t>(reinterpret_cast<void*>(self), 0x17C);
    uint32_t vtbl = lift_field<uint32_t>(reinterpret_cast<void*>(sub), 0x0);
    uint32_t slotAddr = lift_field<uint32_t>(reinterpret_cast<void*>(vtbl), 0x128);
    VCall120Fn slot = reinterpret_cast<VCall120Fn>(static_cast<uintptr_t>(slotAddr));
    uintptr_t result = slot(sub, value);
    ext_00612370(result, value);
}
} // namespace lift_005E27E0
} // namespace lift_005E28D0

// [0x005E2920] sub_005E2920 (34 bytes)
namespace lift_005E2920 {
// @name sub_005E2920
// @summary Auto-lifted identical-shape clone of 0x005E27E0 (UnknownClass::forwardValueToSubobjectAt17C).
namespace lift_005E27E0 {
// Known callee 0x006123C0: UnknownClass::setElement1AndNotify
extern void ext_006123C0(uintptr_t self, float value);

// @name UnknownClass::forwardValueToSubobjectAt17C
// @class UnknownClass
// @summary Loads the subobject pointer at +0x17C, calls its vtable slot 0x120 with the float argument, and forwards the returned object plus the same float to setElement1AndNotify (0x006123C0). Stack arg is popped by callee (ret 4).
// @field UnknownClass +0x17C uintptr_t subobject
// @field UnknownClass +0x0 uint32_t vtable

using VCall120Fn = uintptr_t (*)(uintptr_t self, float value);

void fn_005E2920(uintptr_t self, float value) {
    uintptr_t sub = lift_field<uintptr_t>(reinterpret_cast<void*>(self), 0x17C);
    uint32_t vtbl = lift_field<uint32_t>(reinterpret_cast<void*>(sub), 0x0);
    uint32_t slotAddr = lift_field<uint32_t>(reinterpret_cast<void*>(vtbl), 0x128);
    VCall120Fn slot = reinterpret_cast<VCall120Fn>(static_cast<uintptr_t>(slotAddr));
    uintptr_t result = slot(sub, value);
    ext_006123C0(result, value);
}
} // namespace lift_005E27E0
} // namespace lift_005E2920

// [0x005E2970] sub_005E2970 (34 bytes)
namespace lift_005E2970 {
// @name sub_005E2970
// @summary Auto-lifted identical-shape clone of 0x005E27E0 (UnknownClass::forwardValueToSubobjectAt17C).
namespace lift_005E27E0 {
// Known callee 0x006123C0: UnknownClass::setElement1AndNotify
extern void ext_00612410(uintptr_t self, float value);

// @name UnknownClass::forwardValueToSubobjectAt17C
// @class UnknownClass
// @summary Loads the subobject pointer at +0x17C, calls its vtable slot 0x120 with the float argument, and forwards the returned object plus the same float to setElement1AndNotify (0x006123C0). Stack arg is popped by callee (ret 4).
// @field UnknownClass +0x17C uintptr_t subobject
// @field UnknownClass +0x0 uint32_t vtable

using VCall120Fn = uintptr_t (*)(uintptr_t self, float value);

void fn_005E2970(uintptr_t self, float value) {
    uintptr_t sub = lift_field<uintptr_t>(reinterpret_cast<void*>(self), 0x17C);
    uint32_t vtbl = lift_field<uint32_t>(reinterpret_cast<void*>(sub), 0x0);
    uint32_t slotAddr = lift_field<uint32_t>(reinterpret_cast<void*>(vtbl), 0x128);
    VCall120Fn slot = reinterpret_cast<VCall120Fn>(static_cast<uintptr_t>(slotAddr));
    uintptr_t result = slot(sub, value);
    ext_00612410(result, value);
}
} // namespace lift_005E27E0
} // namespace lift_005E2970

// [0x005E29C0] sub_005E29C0 (34 bytes)
namespace lift_005E29C0 {
// @name sub_005E29C0
// @summary Auto-lifted identical-shape clone of 0x005E27E0 (UnknownClass::forwardValueToSubobjectAt17C).
namespace lift_005E27E0 {
// Known callee 0x006123C0: UnknownClass::setElement1AndNotify
extern void ext_00612460(uintptr_t self, float value);

// @name UnknownClass::forwardValueToSubobjectAt17C
// @class UnknownClass
// @summary Loads the subobject pointer at +0x17C, calls its vtable slot 0x120 with the float argument, and forwards the returned object plus the same float to setElement1AndNotify (0x006123C0). Stack arg is popped by callee (ret 4).
// @field UnknownClass +0x17C uintptr_t subobject
// @field UnknownClass +0x0 uint32_t vtable

using VCall120Fn = uintptr_t (*)(uintptr_t self, float value);

void fn_005E29C0(uintptr_t self, float value) {
    uintptr_t sub = lift_field<uintptr_t>(reinterpret_cast<void*>(self), 0x17C);
    uint32_t vtbl = lift_field<uint32_t>(reinterpret_cast<void*>(sub), 0x0);
    uint32_t slotAddr = lift_field<uint32_t>(reinterpret_cast<void*>(vtbl), 0x128);
    VCall120Fn slot = reinterpret_cast<VCall120Fn>(static_cast<uintptr_t>(slotAddr));
    uintptr_t result = slot(sub, value);
    ext_00612460(result, value);
}
} // namespace lift_005E27E0
} // namespace lift_005E29C0

// [0x005E4D90] sub_005E4D90 (74 bytes)
namespace lift_005E4D90 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
// Used as an allocator: called with 0x54 (cdecl), result pointer returned in eax.
extern void* ext_006A5C62(size_t size);

// @name CreateRecordFromArgs_005E4D90
// @class Unknown
// @summary Allocates a 0x54-byte record and fills it from five stdcall arguments; returns it or null.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10[16]
// @field Unknown +0x50 uint8_t field_0x50
// @field Unknown +0x51 uint8_t field_0x51
void* fn_005E4D90(uint32_t a1, uint32_t a2, uint32_t a3, const void* a4, uint8_t a5) {
    void* obj = ext_006A5C62(0x54);
    if (obj == nullptr) {
        return nullptr;
    }

    lift_field<uint32_t>(obj, 0x00) = a1;
    lift_field<uint32_t>(obj, 0x04) = a2;
    lift_field<uint32_t>(obj, 0x08) = a3;
    lift_field<uint32_t>(obj, 0x0C) = lift_field<const uint32_t>(a4, 0);
    std::memcpy(static_cast<uint8_t*>(obj) + 0x10,
                static_cast<const uint8_t*>(a4) + 4,
                16 * sizeof(uint32_t));
    lift_field<uint8_t>(obj, 0x50) = a5;
    lift_field<uint8_t>(obj, 0x51) = 0;
    return obj;
}
} // namespace lift_005E4D90

// [0x005ECDC0] sub_005ECDC0 (82 bytes)
namespace lift_005ECDC0 {
// Import slot 0x00925134: MSVCR80!_invalid_parameter_noinfo (called on bounds failure).
extern void (*mem_00925134)();

// @name Unknown::MarkVectorElementsFlag4
// @class Unknown
// @summary Walks the pointer vector at this+0x204..+0x208 and sets byte +4 of each pointed-to object to 1.
// @field Unknown +0x204 DWORD vecBegin
// @field Unknown +0x208 DWORD vecEnd
void fn_005ECDC0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    auto* words = reinterpret_cast<uint32_t*>(base + 0x200);
    // words[0] is the iterator-debug proxy slot at +0x200 (self-compare in the
    // original is always equal, so the associated debug check is omitted).
    uint32_t begin = words[1];
    uint32_t end = words[2];

    // Bounds sanity: begin must not be past end.
    if (begin > end) {
        mem_00925134();
    }

    uint32_t cur = begin;
    while (cur != end) {
        if (cur >= end) {
            mem_00925134();
        }
        // Element is a 32-bit pointer to an object; set its byte at +0x04 to 1.
        uint32_t obj = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(cur));
        auto* target = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(obj));
        target[4] = 1;
        if (cur >= end) {
            mem_00925134();
        }
        cur += 4;
    }
}
} // namespace lift_005ECDC0

// [0x005E0BB0] sub_005E0BB0 (91 bytes)
namespace lift_005E0BB0 {
// @name Unknown::isLengthWithinOfUnit
// @class Unknown
// @summary Returns TRUE when the Euclidean length of the 3-float vector at this is within tol of 1.0 (|len - 1| <= tol); FALSE otherwise, including NaN.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
BOOL fn_005E0BB0(void* self, float tol) {
    const double x = lift_field<float>(self, 0x00);
    const double y = lift_field<float>(self, 0x04);
    const double z = lift_field<float>(self, 0x08);

    // The original stores the length as a 32-bit float before comparing.
    const float len = static_cast<float>(std::sqrt(x * x + y * y + z * z));

    const double lo = 1.0 - static_cast<double>(tol);
    const double hi = 1.0 + static_cast<double>(tol);

    // Unordered (NaN) comparisons are false, matching the FPU "jne"/"jp" exits.
    if (!(static_cast<double>(len) >= lo)) {
        return FALSE;
    }
    return (static_cast<double>(len) <= hi) ? TRUE : FALSE;
}
} // namespace lift_005E0BB0

// [0x005EB060] sub_005EB060 (87 bytes)
namespace lift_005EB060 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self; stores the stack argument into the first DWORD of self; returns that value).
extern void ext_0067A670(void* self, DWORD value);
extern DWORD mem_00B45F34; // init-guard flags (bit 0 = initialization started)
extern DWORD mem_00B45F30; // static object storage (first DWORD = vtable pointer)

// @name getOrInitStaticObject_005EB060
// @summary One-time initializer for a static object at mem_00B45F30; returns its address.
void* fn_005EB060() {
    if ((mem_00B45F34 & 1) == 0) {
        mem_00B45F34 |= 1;
        ext_0067A670(reinterpret_cast<void*>(&mem_00B45F30), 0);
        mem_00B45F30 = 0x009695A4;
    }
    return reinterpret_cast<void*>(&mem_00B45F30);
}
} // namespace lift_005EB060

// [0x005EB000] sub_005EB000 (87 bytes)
namespace lift_005EB000 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern int mem_00B45F2C;
extern int mem_00B45F28;

// @name getOrInitStaticObject_005EB000
// @summary One-time initializer for the static object at mem_00B45F28: sets guard bit 0 of mem_00B45F2C, runs the init callee on the object, writes the vtable pointer 0x009693F4, and returns the object's address. The original SEH frame (fs:[0] push/restore, handler 0x008A64DE) is not reproduced.
void* fn_005EB000(void) {
    if ((mem_00B45F2C & 1) == 0) {
        mem_00B45F2C |= 1;
        ext_0067A670(&mem_00B45F28, 0);
        mem_00B45F28 = 0x009693F4;
    }
    return &mem_00B45F28;
}
} // namespace lift_005EB000

// [0x005EAEE0] sub_005EAEE0 (87 bytes)
namespace lift_005EAEE0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00B45F14;
extern DWORD mem_00B45F10;

// @name lazyInitStaticVtableObject_005EAEE0
// @summary One-time lazy init of the static object at 0x00B45F10 (guard bit 0 of 0x00B45F14); sets its first DWORD to 0x00968EE4 and returns its address.
// @field <unknown> +0x00 DWORD field_0x00
void* fn_005EAEE0() {
    // The original wraps this in an MSVC SEH frame (fs:[0] push/pop, handler 0x008A647E)
    // for exception safety around the init call; that is EH plumbing, not program logic.
    if ((mem_00B45F14 & 1u) == 0) {
        mem_00B45F14 |= 1u;
        ext_0067A670(&mem_00B45F10, 0u);
        mem_00B45F10 = 0x00968EE4u;
    }
    return reinterpret_cast<void*>(&mem_00B45F10);
}
} // namespace lift_005EAEE0

// [0x005EAF40] sub_005EAF40 (87 bytes)
namespace lift_005EAF40 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self, one stack argument; calls ext_00672000 on self, stores the argument into the first DWORD of self, returns it).
extern void ext_0067A670();
extern DWORD mem_00B45F1C; // init-guard flags word (bit 0 = initialized/in-progress)
extern DWORD mem_00B45F18; // static object storage

// @name getOrInitStaticObject_005EAF40
// @class unknown
// @summary Lazily initializes a static object at mem_00B45F18 once (guarded by bit 0 of mem_00B45F1C) via ext_0067A670(obj, 0), then sets its vptr to 0x969094 and returns the object's address.
// @field unknown +0x00 DWORD field_0x00
void* fn_005EAF40() {
    // Guard: only the first caller runs the initializer. The original SEH frame
    // (fs:[0] push/pop) is a compiler-generated try/catch wrapper and is not
    // needed for the logic.
    if ((mem_00B45F1C & 1u) == 0) {
        mem_00B45F1C |= 1u;

        void* obj = reinterpret_cast<void*>(&mem_00B45F18);
        using InitFn = void(__thiscall*)(void*, DWORD);
        reinterpret_cast<InitFn>(reinterpret_cast<void*>(&ext_0067A670))(obj, 0u);

        mem_00B45F18 = 0x969094u;
    }
    return reinterpret_cast<void*>(&mem_00B45F18);
}
} // namespace lift_005EAF40

// [0x005EAFA0] sub_005EAFA0 (87 bytes)
namespace lift_005EAFA0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self; stores its single stack argument into the first DWORD of self and returns it).
extern void ext_0067A670(void* self, DWORD value);
extern DWORD mem_00B45F24;  // init guard flags; bit 0 = initialized/in-progress
extern DWORD mem_00B45F20;  // static object storage; first DWORD is its vtable pointer

// @name getOrInitStaticObject_005EAFA0
// @summary Lazily constructs the static object at 0x00B45F20 once (guarded by bit 0 of 0x00B45F24), then returns its address.
// @field <unnamed> +0x00 DWORD vtbl
void* fn_005EAFA0() {
    // The original wraps the init in an MSVC SEH frame (fs:[0] push/restore,
    // try-state -1 -> 0). That is runtime-specific and not portable, so it is
    // dropped here; only the guard logic and the calls are kept.
    if ((mem_00B45F24 & 1u) == 0) {
        mem_00B45F24 |= 1u;
        // The disassembly passes a stack slot as the single argument; its value
        // is overwritten by the vtable store below, so 0 is used here.
        ext_0067A670(&mem_00B45F20, 0);
        mem_00B45F20 = 0x00969244u;  // vtable pointer
    }
    return &mem_00B45F20;
}
} // namespace lift_005EAFA0

// [0x005EB0C0] sub_005EB0C0 (87 bytes)
namespace lift_005EB0C0 {
namespace lift_005EB0C0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self; calls ext_00672000 on self, stores the stack argument into the first DWORD of self; returns that value).
extern void ext_0067A670(void* self, DWORD value);
extern DWORD mem_00B45F3C; // init-guard flags (bit 0 = initialization started)
extern DWORD mem_00B45F38; // static object storage (first DWORD = vtable pointer)

// @name getOrInitStaticObject_005EB0C0
// @summary One-time initializer for the static object at mem_00B45F38; returns its address.
void* fn_005EB0C0() {
    if ((mem_00B45F3C & 1) == 0) {
        mem_00B45F3C |= 1;
        ext_0067A670(reinterpret_cast<void*>(&mem_00B45F38), 0);
        mem_00B45F38 = 0x00969754;
    }
    return reinterpret_cast<void*>(&mem_00B45F38);
}
} // namespace lift_005EB0C0
} // namespace lift_005EB0C0

// [0x005EB1E0] sub_005EB1E0 (87 bytes)
namespace lift_005EB1E0 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00B45F54;
extern DWORD mem_00B45F50;

// @name lazyInitStaticVtableObject_005EB1E0
// @summary One-time lazy init of the static object at mem_00B45F50 (vtable 0x969C64); guarded by bit 0 of mem_00B45F54; returns the object's address.
void* fn_005EB1E0() {
    // Init guard: bit 0 of mem_00B45F54 marks the object as initialized.
    if ((mem_00B45F54 & 1u) == 0) {
        mem_00B45F54 |= 1u;
        ext_0067A670(&mem_00B45F50, 0);
        mem_00B45F50 = 0x969c64u;
    }
    return &mem_00B45F50;
}
} // namespace lift_005EB1E0

// [0x005EB120] sub_005EB120 (87 bytes)
namespace lift_005EB120 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (thiscall, ECX = self; stores its stack argument into the first DWORD of self and returns it).
extern DWORD ext_0067A670(void* self, DWORD value);
extern DWORD mem_00B45F44; // init guard flags; bit 0 = constructed/in-progress
extern DWORD mem_00B45F40; // static object storage; first DWORD holds its vtable

// @name getOrInitStaticObject_005EB120
// @summary Thread-unsafe one-time initializer for the static object at 0xB45F40: on first call sets guard bit 0, runs ext_0067A670 on the object, writes vtable 0x00969904, and returns the object's address.
void* fn_005EB120() {
    // The original SEH frame setup (fs:[0] push/restore) has no portable equivalent and is omitted.
    if ((mem_00B45F44 & 1u) == 0) {
        mem_00B45F44 |= 1u;
        // The stack argument is the saved previous SEH frame, which is overwritten by the vtable store below; pass 0.
        ext_0067A670(&mem_00B45F40, 0);
        mem_00B45F40 = 0x00969904u;
    }
    return &mem_00B45F40;
}
} // namespace lift_005EB120

// [0x005EB180] sub_005EB180 (87 bytes)
namespace lift_005EB180 {
// Known callee 0x0067A670: storeArgIntoFirstDword_006721B0 (Calls ext_00672000 on self (thiscall, ECX = self), then stores the single stack argument into the first DWORD of self; returns that value.)
extern DWORD ext_0067A670(void* self, DWORD value);
extern int mem_00B45F4C;
extern int mem_00B45F48;

// @name getOrInitStaticObject_005EB180
// @summary Lazily initializes the static object at 0xB45F48 once (guarded by a flag bit at 0xB45F4C) and returns its address.
void* fn_005EB180() {
    if ((mem_00B45F4C & 1) == 0) {
        // Set the init flag before running the constructor so re-entry is blocked.
        mem_00B45F4C |= 1;
        // Original passes the object in ECX and a stack argument; that stored value
        // is overwritten by the vtable store below, so 0 yields the same final state.
        ext_0067A670(&mem_00B45F48, 0);
        mem_00B45F48 = 0x969ab4;
    }
    return &mem_00B45F48;
}
} // namespace lift_005EB180

// [0x005EC950] sub_005EC950 (30 bytes)
namespace lift_005EC950 {
// Known callee 0x005EB060: getOrInitStaticObject_005EB060 (One-time initializer for the static object at 0x00B45F30; returns its address.)
extern void* ext_005EB060();

// @name getOrInitStaticObject_005EC950
// @class <ClassName> (optional)
// @summary Stores a DWORD value into out[0] and the static object address from ext_005EB060 into out[1].
// @field <ClassName> +0x00 <type> <fieldName>
void fn_005EC950(DWORD* out, DWORD value) {
    void* obj = ext_005EB060();
    out[0] = value;
    out[1] = static_cast<DWORD>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_005EC950

// [0x005EC930] sub_005EC930 (30 bytes)
namespace lift_005EC930 {
// Known callee 0x005EB000: getOrInitStaticObject_005EB000 (One-time initializer for the static object at mem_00B45F28: sets guard bit 0 of mem_00B45F2C, runs the init callee on the object, writes the vtable pointer 0x009693F4, and returns the object's address. The original SEH frame (fs:[0] push/restore, handler 0x008A64DE) is not reproduced.)
extern void* ext_005EB000();

// @name getOrInitStaticObjectAndStore_005EC930
// @summary Calls the static-object initializer, then stores the caller-supplied value at out+0 and the returned object pointer at out+4.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 void* field_0x04
void fn_005EC930(void* out, uint32_t value) {
    void* obj = ext_005EB000();
    lift_field<uint32_t>(out, 0x00) = value;
    lift_field<void*>(out, 0x04) = obj;
}
} // namespace lift_005EC930

// [0x005EC8D0] sub_005EC8D0 (30 bytes)
namespace lift_005EC8D0 {
// Known callee 0x005EAEE0: lazyInitStaticVtableObject_005EAEE0 (One-time lazy init of the static object at 0x00B45F10 (guard bit 0 of 0x00B45F14); sets its first DWORD to 0x00968EE4 and returns its address.)
extern void* ext_005EAEE0();

// @name storeValueAndStaticObject
// @summary Stores a DWORD value into dst[0] and the lazily-initialized static object's address into dst[1].
// @field  +0x00 DWORD field_0x00
// @field  +0x04 DWORD field_0x04
void fn_005EC8D0(DWORD* dst, DWORD value) {
    void* obj = ext_005EAEE0();
    dst[0] = value;
    dst[1] = static_cast<DWORD>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_005EC8D0

// [0x005EC910] sub_005EC910 (30 bytes)
namespace lift_005EC910 {
// Known callee 0x005EAFA0: getOrInitStaticObject_005EAFA0 (Lazily constructs the static object at 0x00B45F20 once (guarded by bit 0 of 0x00B45F24), then returns its address.)
extern void* ext_005EAFA0();

// @name fillPairWithStaticObject
// @summary Calls getOrInitStaticObject_005EAFA0 and stores the given value in dst[0] and the returned static object address in dst[1].
// @field Arg0 +0x00 uint32_t field_0x00
// @field Arg0 +0x04 uint32_t field_0x04
void fn_005EC910(uint32_t* dst, uint32_t value) {
    // The callee takes no meaningful arguments; the original's stack scratch write is dropped.
    void* obj = ext_005EAFA0();
    dst[0] = value;
    dst[1] = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(obj));
}
} // namespace lift_005EC910

// [0x005EC8F0] sub_005EC8F0 (30 bytes)
namespace lift_005EC8F0 {
// Known callee 0x005EAF40: getOrInitStaticObject_005EAF40
extern void* ext_005EAF40();

// Init-guard flags word and static object storage used by the callee.
extern DWORD mem_00B45F1C; // init-guard flags word (bit 0 = initialized/in-progress)
extern DWORD mem_00B45F18; // static object storage

// @name storeValueAndStaticObject
// @summary Writes a DWORD value into *out and the lazily-initialized static object's address into out[1].
// @field Unknown +0x00 DWORD field_0x00
// @field Unknown +0x04 DWORD field_0x04
void fn_005EC8F0(DWORD* out, DWORD value) {
    DWORD obj = static_cast<DWORD>(reinterpret_cast<uintptr_t>(ext_005EAF40()));
    out[0] = value;
    out[1] = obj;
}
} // namespace lift_005EC8F0
