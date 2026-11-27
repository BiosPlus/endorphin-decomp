// Lifted C++ translation unit: lifted/classes/ToolEngine.cpp
#include "lift_compat.h"

// [0x004800C0] ToolEngine::vfunc_16 (11 bytes)
namespace lift_004800C0 {
// @name ToolEngine::vfunc_16
// @class ToolEngine
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_004AFC60(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_004800C0(uint32_t ecx) {
    return ext_004AFC60(ecx + 0x8u, 0u);
}
} // namespace lift_00611160
} // namespace lift_004800C0

// [0x00480100]
namespace lift_00480100 {
// @name ToolEngine::vfunc_26
// @class ToolEngine
// @summary Broadcasts a scalar float to a 3-element float vector and forwards it to vfunc_25 (vtable +0x64).
// @field ToolEngine +0x00 void* vptr


void __thiscall fn_00480100(void* self, float val) {
    float vec[3] = { val, val, val };
    void** vtable = *reinterpret_cast<void***>(self);
    using VFunc25 = void(__thiscall*)(void*, const float*);
    auto vfunc_25 = reinterpret_cast<VFunc25>(vtable[0x64 / sizeof(void*)]);
    vfunc_25(self, vec);
}
} // namespace lift_00480100

// [0x00480160] ToolEngine::vfunc_27 (54 bytes)
namespace lift_00480160 {
// @name ToolEngine::vfunc_27
// @class ToolEngine
// @summary If the engine's tool at +0x3B0 reports success via vtable slot 0xB4, marks the result object at +0x86 as set.
// @field ToolEngine +0x3B0 void* field_0x3B0

// Thiscall-style virtual method taking only `this`; returns a 32-bit value.
typedef uint32_t (__thiscall* LiftVMethodU32)(void* self);
// Thiscall-style virtual method taking only `this`; returns an object pointer.
typedef void* (__thiscall* LiftVMethodPtr)(void* self);

// Calls the virtual method at byte offset 0xB4 of the object's vtable.
static inline void* lift_vtable_slot_b4(void* obj) {
    void** vtable = *reinterpret_cast<void***>(obj);
    return *reinterpret_cast<void* const*>(reinterpret_cast<const uint8_t*>(vtable) + 0xB4);
}

void fn_00480160(void* self) {
    // Object pointer stored at this+0x3B0.
    void* first = lift_field<void*>(self, 0x3B0);
    // Sub-object at first+0x30 (its own vtable dispatches slot 0xB4).
    void* firstSub = lift_field<void*>(first, 0x30);
    auto firstCheck = reinterpret_cast<LiftVMethodU32>(lift_vtable_slot_b4(firstSub));
    if (firstCheck(firstSub) == 0) {
        return;
    }

    // Same chain again, this time keeping the pointer from this+0x3B0.
    void* second = lift_field<void*>(self, 0x3B0);
    void* secondSub = lift_field<void*>(second, 0x30);
    auto secondGet = reinterpret_cast<LiftVMethodPtr>(lift_vtable_slot_b4(secondSub));
    void* result = secondGet(secondSub);
    lift_field<uint8_t>(result, 0x86) = 1;
}
} // namespace lift_00480160

// [0x00480060]
namespace lift_00480060 {
extern void* ext_00494000(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);

// @name ToolEngine::vfunc_17
// @class ToolEngine
// @summary Initializes a 3-DWORD tuple (-1, 0, 0) and invokes vfunc at +0x60 on subobject +0x10
// @field ToolEngine +0x10 void* field_0x10

uint32_t fn_00480060(void* self, uint32_t arg1) {
    uint32_t tuple[3];
    ext_00494000(tuple, 0xFFFFFFFFu, 0u, 0u);

    uint8_t* subobj = static_cast<uint8_t*>(self) + 0x10;
    uint32_t vtable = *reinterpret_cast<uint32_t*>(subobj);
    uint32_t vfunc_addr = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vtable) + 0x60);

    using VFunc = uint32_t(__thiscall*)(void*, uint32_t, uint32_t, void*, uint32_t);
    auto vfunc = reinterpret_cast<VFunc>(static_cast<uintptr_t>(vfunc_addr));
    return vfunc(subobj, arg1, 3u, tuple, 1u);
}
} // namespace lift_00480060

// [0x00480EA0]
namespace lift_00480EA0 {
// @name ToolEngine::vfunc_49
// @class ToolEngine
// @summary Calls vtable slot 11 of the subobject at +0x10 to get a range, bounds-checks its current element, and forwards that element to the delegate at +0x3B4.
// @field ToolEngine +0x10 void* field_0x10
// @field ToolEngine +0x3B4 void* delegate_0x3B4

// Callee at 0x004A66D0: thiscall, this = delegate, one 32-bit argument.
extern void __thiscall ext_004A66D0(void* self, uint32_t value);

// Invalid-parameter handler pointer loaded from the import slot at 0x00925134.
extern void (*mem_00925134)(void);

extern void __thiscall fn_00480EA0(void* self) {
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x10;

    // vtable of the subobject at +0x10 (its value is stored in field_0x10).
    void* vtbl = lift_field<void*>(self, 0x10);
    // Virtual slot 11 (offset 0x2C) is called with this = sub.
    void* slot = lift_field<void*>(vtbl, 0x2C);
    using RangeGetter = uint32_t* (__thiscall*)(void* self);
    auto getRange = reinterpret_cast<RangeGetter>(slot);
    uint32_t* range = getRange(sub);

    // range layout: +0x4 = current element address, +0x8 = end address.
    uint32_t cur = lift_field<uint32_t>(range, 0x4);
    uint32_t end = lift_field<uint32_t>(range, 0x8);
    if (cur > end) {
        mem_00925134();
    }
    if (!(cur < end)) {
        mem_00925134();
    }

    uint32_t value = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(cur)), 0);

    void* delegate = lift_field<void*>(self, 0x3B4);
    ext_004A66D0(delegate, value);
}
} // namespace lift_00480EA0

// [0x004812B0]
namespace lift_004812B0 {
// @name ToolEngine::vfunc_10
// @class ToolEngine
// @summary Dispatches vfunc_0 on the first element's +0x0C subobject if the +0x10 subobject's vector has exactly one element, otherwise returns 4.
// @field ToolEngine +0x10 void* field_0x10


extern uint32_t mem_00925134;

uint32_t __thiscall ToolEngine_vfunc_10(void* self) {
    uint8_t* sub = reinterpret_cast<uint8_t*>(self) + 0x10;
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(sub);
    using GetVecFn = void* (__thiscall*)(void*);
    auto get_vec = reinterpret_cast<GetVecFn>(vtable[3]);
    uint8_t* vec = reinterpret_cast<uint8_t*>(get_vec(sub));

    uint32_t* first = *reinterpret_cast<uint32_t**>(vec + 0x4);
    if (!first) {
        return 4;
    }

    uint32_t* last = *reinterpret_cast<uint32_t**>(vec + 0x8);
    int32_t count = static_cast<int32_t>(reinterpret_cast<uintptr_t>(last) - reinterpret_cast<uintptr_t>(first)) >> 2;
    if (count != 1) {
        return 4;
    }

    using InvalidParamFn = void (__cdecl*)();
    auto invalid_param = reinterpret_cast<InvalidParamFn>(mem_00925134);
    if (first > last) {
        invalid_param();
    }
    last = *reinterpret_cast<uint32_t**>(vec + 0x8);
    if (first >= last) {
        invalid_param();
    }

    uint8_t* elem = reinterpret_cast<uint8_t*>(*first);
    uint8_t* elem_sub = elem + 0xC;
    uint32_t* elem_vtable = *reinterpret_cast<uint32_t**>(elem_sub);
    using TargetFn = uint32_t (__thiscall*)(void*);
    auto target_fn = reinterpret_cast<TargetFn>(elem_vtable[0]);
    return target_fn(elem_sub);
}
} // namespace lift_004812B0

// [0x00480E40]
namespace lift_00480E40 {
// @name ToolEngine::vfunc_9
// @class ToolEngine
// @summary Checks if any item in the subobject's list satisfies sub_00584C00
// @field ToolEngine +0x10 void* field_0x10


extern uint8_t __thiscall ext_00584C00(uint32_t self);
extern uint32_t mem_00925134;

uint8_t __thiscall fn_00480E40(uint32_t self) {
    uint32_t subobj = self + 0x10;
    uint32_t vtable = *reinterpret_cast<uint32_t*>(subobj);
    using GetListFn = uint32_t(__thiscall*)(uint32_t);
    auto get_list = reinterpret_cast<GetListFn>(*reinterpret_cast<uint32_t*>(vtable + 0xC));
    uint32_t list_ptr = get_list(subobj);

    using InvalidParamFn = void(__cdecl*)();
    auto invalid_param = reinterpret_cast<InvalidParamFn>(mem_00925134);

    uint32_t it = *reinterpret_cast<uint32_t*>(list_ptr + 0x4);
    if (it > *reinterpret_cast<uint32_t*>(list_ptr + 0x8)) {
        invalid_param();
    }

    for (;;) {
        uint32_t end = *reinterpret_cast<uint32_t*>(list_ptr + 0x8);
        if (*reinterpret_cast<uint32_t*>(list_ptr + 0x4) > end) {
            invalid_param();
        }
        if (it == end) {
            return 0;
        }
        if (it >= *reinterpret_cast<uint32_t*>(list_ptr + 0x8)) {
            invalid_param();
        }
        uint32_t item = *reinterpret_cast<uint32_t*>(it);
        if (ext_00584C00(item) != 0) {
            return 1;
        }
        if (it >= *reinterpret_cast<uint32_t*>(list_ptr + 0x8)) {
            invalid_param();
        }
        it += 4;
    }
}
} // namespace lift_00480E40

// [0x004809E0] ToolEngine::vfunc_7 (35 bytes)
namespace lift_004809E0 {
// @name ToolEngine::vfunc_7
// @class ToolEngine
// @summary Returns 1 if the object's uint32 range at +0x18..+0x1C is absent or empty, or the byte flag at +0x30 is set; otherwise returns 0.
// @field ToolEngine +0x18 uint32_t field_0x18
// @field ToolEngine +0x1C uint32_t field_0x1C
// @field ToolEngine +0x30 uint8_t field_0x30
int fn_004809E0(void* self) {
    const uint32_t begin = lift_field<uint32_t>(self, 0x18);
    if (begin == 0) {
        return 1;
    }
    const uint32_t end = lift_field<uint32_t>(self, 0x1C);
    const int32_t count = (static_cast<int32_t>(end - begin)) >> 2;
    if (count == 0) {
        return 1;
    }
    if (lift_field<uint8_t>(self, 0x30) != 0) {
        return 1;
    }
    return 0;
}
} // namespace lift_004809E0

// [0x004800E0] ToolEngine::vfunc_13 (29 bytes)
namespace lift_004800E0 {
// Known callee 0x00530290: Unknown::selectIndex3Adjusted (Selects index arg0 (remapping 3 to 7 when the field at +0x88 already equals 3), stores it at +0x70, updates the container at +0x38, then invokes vtable slot 0x154 on the object at +0x10.)
extern void ext_00530290(void* self);

// @name ToolEngine::vfunc_13
// @class ToolEngine
// @summary Calls vtable slot 0xB4 on the object at this->+0x3B0->+0x30 with argument 3, then forwards the result as `this` to Unknown::selectIndex3Adjusted.
// @field ToolEngine +0x3B0 void* field_0x3B0
void fn_004800E0(void* self) {
    // p = this->+0x3B0; q = p->+0x30 (type not yet recovered, read as opaque pointer)
    void* p = lift_field<void*>(self, 0x3B0);
    void* q = lift_field<void*>(p, 0x30);

    // Virtual call: vtable(q)[0xB4] (thiscall-style, argument 3), result in eax.
    void* vt = lift_field<void*>(q, 0);
    using VSlot = void* (*)(void* self, uint32_t arg);
    VSlot slot = reinterpret_cast<VSlot>(lift_field<void*>(vt, 0xB4));
    void* r = slot(q, 3u);

    // Tail: ecx = eax; call selectIndex3Adjusted with ecx as `this`.
    ext_00530290(r);
}
} // namespace lift_004800E0

// [0x00480F60] ToolEngine::vfunc_19 (154 bytes)
namespace lift_00480F60 {
// Known callee 0x00594000: ext_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t ext_00594000(void);
// Known callee 0x0065D120: sub_0065D120 (16B), thiscall on the sub-object at eax+0xFC.
extern void ext_0065D120(void* self);
// IAT slot for MSVCR80!_invalid_parameter_noinfo (debug iterator range checks).
extern int mem_00925134;

// @name ToolEngine::vfunc_19
// @class ToolEngine
// @summary Calls ext_0065D120 on a sub-object of a global-derived pointer, iterates a pointer range stored at this+0x10 (via its vtable slot 4) and invokes each element's vtable slot 2 with arg, then sets this+0x108 and calls the virtual slot 0 of this+0x04 if non-null.
// @field ToolEngine +0x04 void* field_0x04
// @field ToolEngine +0x10 void* field_0x10
// @field ToolEngine +0x108 uint8_t field_0x108
void fn_00480F60(void* self, uint32_t arg) {
    // Metadata-only: CRT range-check calls through mem_00925134 are omitted.
    (void)&mem_00925134;

    // Global int32 -> base pointer; sub-object at +0xFC is passed as this.
    int32_t base = ext_00594000();
    ext_0065D120(reinterpret_cast<void*>(
        static_cast<uintptr_t>(static_cast<uint32_t>(base)) + 0xFC));

    // Embedded object at this+0x10: vtable slot 4 returns a range container.
    uint8_t* embedded = static_cast<uint8_t*>(self) + 0x10;
    void** embeddedVtbl = *reinterpret_cast<void***>(embedded);
    auto getRange = reinterpret_cast<void* (__thiscall*)(void*)>(embeddedVtbl[4]);
    uint8_t* range = static_cast<uint8_t*>(getRange(embedded));

    // Range container: [+4] = begin, [+8] = end (re-read end each iteration).
    uintptr_t cur = *reinterpret_cast<uint32_t*>(range + 0x04);
    while (cur != *reinterpret_cast<uint32_t*>(range + 0x08)) {
        uint8_t* element = reinterpret_cast<uint8_t*>(
            static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(cur)));
        uint8_t* sub = element + 0x0C;
        void** subVtbl = *reinterpret_cast<void***>(sub);
        auto invoke = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(subVtbl[2]);
        invoke(sub, arg);
        cur += 4;
    }

    // Flag this+0x108, then virtual slot 0 on this+0x04 if it is non-null.
    void* field04 = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x04);
    *(static_cast<uint8_t*>(self) + 0x108) = 1;
    if (field04 != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(field04);
        auto dtor = reinterpret_cast<void(__thiscall*)(void*)>(vtbl[0]);
        dtor(field04);
    }
}
} // namespace lift_00480F60
