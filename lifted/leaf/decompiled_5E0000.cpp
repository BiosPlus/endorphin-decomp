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
