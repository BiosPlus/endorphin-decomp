// Lifted C++ translation unit: lifted/classes/SnapTranslateTool.cpp
#include "lift_compat.h"

// [0x00544CE0]
namespace lift_00544CE0 {
extern uint32_t ext_00543530(void* self, uint32_t arg1, uint32_t arg2);

// @name SnapTranslateTool::vfunc_16
// @class SnapTranslateTool
// @summary Delegates to subobject at +0x164 via ext_00543530; if non-negative, forwards to vtable slot 16 of subobject at +0x9C, else returns 1.
// @field SnapTranslateTool +0x9C void* field_0x9C
// @field SnapTranslateTool +0x164 uint8_t field_0x164
uint32_t fn_00544CE0(void* self, uint32_t arg1, uint32_t arg2) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t res = ext_00543530(base + 0x164, arg1, arg2);
    if (static_cast<int32_t>(res) < 0) {
        return 1;
    }
    void* subobj = base + 0x9C;
    uintptr_t vtable = *reinterpret_cast<uintptr_t*>(subobj);
    using VFunc16 = uint32_t(*)(void*, uint32_t, uint32_t);
    VFunc16 fn = *reinterpret_cast<VFunc16*>(vtable + 0x40);
    return fn(subobj, arg1, arg2);
}
} // namespace lift_00544CE0

// [0x00544D30]
namespace lift_00544D30 {
// @name SnapTranslateTool::vfunc_17
// @class SnapTranslateTool
// @summary Dispatches vfunc_17 to subobject at +0x164, falling back to +0x9C if it returns 0, and returns 1.
// @field SnapTranslateTool +0x9C void* field_0x9C
// @field SnapTranslateTool +0x164 void* field_0x164


uint32_t __thiscall fn_00544D30(void* self, uint32_t arg1, uint32_t arg2) {
    uint8_t* base = static_cast<uint8_t*>(self);

    void* sub1 = base + 0x164;
    auto vtbl1 = *reinterpret_cast<uintptr_t**>(sub1);
    using VFunc17 = uint32_t(__thiscall*)(void*, uint32_t, uint32_t);
    auto fn1 = reinterpret_cast<VFunc17>(vtbl1[0x44 / sizeof(uintptr_t)]);
    if (fn1(sub1, arg1, arg2) == 0) {
        void* sub2 = base + 0x9C;
        auto vtbl2 = *reinterpret_cast<uintptr_t**>(sub2);
        auto fn2 = reinterpret_cast<VFunc17>(vtbl2[0x44 / sizeof(uintptr_t)]);
        fn2(sub2, arg1, arg2);
    }

    return 1;
}
} // namespace lift_00544D30

// [0x00544C70]
namespace lift_00544C70 {
// @name SnapTranslateTool::vfunc_18_off_98
// @class SnapTranslateTool
// @summary Forwards (a, b) to the object at this-0x10 (vslot 18), or, when the flag at +0x1c9 is set, first queries it (vslot 50) with a zeroed float[4] out-vector; on success it sets flag +0x1c8 and notifies it (vslot 19) with that vector.
// @field SnapTranslateTool +0x1c8 uint8_t field_0x1c8
// @field SnapTranslateTool +0x1c9 uint8_t field_0x1c9
// Note: the function reads the object pointer at this-0x10 (not a declared field) and dispatches through its vtable.

namespace lift_00544C70 {

using VSlotVoidAB = void (*)(void* self, uint32_t a, uint32_t b);
using VSlotBoolAOut = bool (*)(void* self, uint32_t a, float* out);
using VSlotVoidOut = void (*)(void* self, float* out);

// Fetch function pointer for vtable slot `index` of `obj`.
template <typename Fn>
inline Fn vslot(void* obj, std::size_t index) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[index]);
}

void __thiscall fn_00544C70(void* self, uint32_t a, uint32_t b) {
    float out[4] = {0.0f, 0.0f, 0.0f, 0.0f};

    void* target = lift_field<void*>(self, -0x10);

    if (lift_field<uint8_t>(self, 0x1c9) == 0) {
        vslot<VSlotVoidAB>(target, 18)(target, a, b);
        return;
    }

    if (vslot<VSlotBoolAOut>(target, 50)(target, a, out)) {
        lift_field<uint8_t>(self, 0x1c8) = 1;
        vslot<VSlotVoidOut>(target, 19)(target, out);
    }
}

} // namespace lift_00544C70
} // namespace lift_00544C70

// [0x00544D80] SnapTranslateTool::vfunc_26 (31 bytes)
namespace lift_00544D80 {
// @name SnapTranslateTool::vfunc_26
// @class SnapTranslateTool
// @summary Calls virtual slot 0x80 on this, then tail-dispatches virtual slot 0x68 on the subobject at +0x9C with this = &field_0x9C.
// @field SnapTranslateTool +0x00 void** vptr
// @field SnapTranslateTool +0x9C void* field_0x9C
void fn_00544D80(void* self) {
    // push esi / mov esi, ecx      ; esi = this (ecx is the thiscall receiver)
    // mov eax, [esi]               ; eax = this->vptr
    void** vptr = lift_field<void**>(self, 0x00);

    // mov edx, [eax + 0x80] / call edx   ; this->vptr[0x80 / 4]() with ecx = this
    using VFn = void(__fastcall*)(void* self);
    VFn slot80 = reinterpret_cast<VFn>(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(vptr) + 0x80));
    slot80(self);

    // mov eax, [esi + 0x9c]        ; eax = this->field_0x9C (subobject)
    void* sub = lift_field<void*>(self, 0x9C);

    // mov edx, [eax + 0x68]        ; edx = sub->vptr[0x68]
    // lea ecx, [esi + 0x9c]        ; ecx = &this->field_0x9C
    // pop esi / jmp edx            ; tail-jump with ecx as receiver
    void** subVptr = *reinterpret_cast<void***>(sub);
    VFn target = reinterpret_cast<VFn>(
        *reinterpret_cast<void**>(reinterpret_cast<char*>(subVptr) + 0x68));
    void* subThis = reinterpret_cast<char*>(self) + 0x9C;
    target(subThis);
}
} // namespace lift_00544D80
