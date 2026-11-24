// Lifted C++ translation unit: lifted/classes/CompoundRenderable.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00537CA0]
namespace lift_00537CA0 {
// @name CompoundRenderable::vfunc_2
// @class CompoundRenderable
// @summary Calls virtual slot 2 on the object at +0x14 (if non-null), then tail-calls virtual slot 2 on the object at +0x18 with this+0x18 as the receiver.
// @field CompoundRenderable +0x14 void* field_0x14
// @field CompoundRenderable +0x18 uint32_t* field_0x18

extern void CompoundRenderable_vfunc_2(void* self) {
    // mov ecx, [esi+0x14]; if (ecx) ecx->vtbl[2]();
    void* obj14 = lift_field<void*>(self, 0x14);
    if (obj14 != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj14);
        using Fn = void (*)(void*);
        reinterpret_cast<Fn>(vtbl[2])(obj14);
    }

    // eax = [esi+0x18]; edx = eax->vtbl[2]; ecx = esi+0x18; jmp edx
    void* obj18 = lift_field<void*>(self, 0x18);
    void** vtbl18 = *reinterpret_cast<void***>(obj18);
    using Fn = void (*)(void*);
    reinterpret_cast<Fn>(vtbl18[2])(&lift_field<void*>(self, 0x18));
}
} // namespace lift_00537CA0

// [0x00537D60] CompoundRenderable::vfunc_24 (29 bytes)
namespace lift_00537D60 {
// @name CompoundRenderable::vfunc_24
// @class CompoundRenderable
// @summary Calls vfunc slot 24 on the sub-renderable at +0x14 (if present), then tail-calls slot 24 on the object at +0x18 with this = &field_0x18.
// @field CompoundRenderable +0x14 void* field_0x14
// @field CompoundRenderable +0x18 void* field_0x18
void fn_00537D60(void* self) {
    // Slot 24 (byte offset 0x60) of the vtable.
    using VFunc = void (*)(void*);

    void* first = lift_field<void*>(self, 0x14);
    if (first != nullptr) {
        void** vt = *reinterpret_cast<void***>(first);
        reinterpret_cast<VFunc>(vt[24])(first);
    }

    void* second = lift_field<void*>(self, 0x18);
    void** vt2 = *reinterpret_cast<void***>(second);
    // The callee receives the address of the field itself (lea ecx, [esi+0x18]),
    // while the vtable is taken from the object stored at +0x18.
    reinterpret_cast<VFunc>(vt2[24])(static_cast<uint8_t*>(self) + 0x18);
}
} // namespace lift_00537D60

// [0x00537B80]
namespace lift_00537B80 {
// @name CompoundRenderable::vfunc_22
// @class CompoundRenderable
// @summary Forwards a single-argument call to vtable slot 22 of the object held at +0x14 (if non-null) and of the embedded subobject at +0x18.
// @field CompoundRenderable +0x14 void* field_0x14
// @field CompoundRenderable +0x18 void* field_0x18

namespace {

// Invokes vtable slot 22 (byte offset 0x58) on `obj`, passing `arg` as the single stack argument.
inline void call_vslot22(void* obj, uint32_t arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vtbl[22]);
    fn(obj, arg);
}

}  // namespace

void CompoundRenderable_vfunc_22(void* self, uint32_t arg) {
    // Child object pointer at +0x14: notify only if present.
    void* child = lift_field<void*>(self, 0x14);
    if (child != nullptr) {
        call_vslot22(child, arg);
    }

    // Embedded subobject at +0x18: its address is `this` for the call.
    call_vslot22(static_cast<uint8_t*>(self) + 0x18, arg);
}
} // namespace lift_00537B80

// [0x00537C70]
namespace lift_00537C70 {
// @name CompoundRenderable::vfunc_1
// @class CompoundRenderable
// @summary Forwards arg to virtual slot 1 of the object at +0x14 (if non-null), then to virtual slot 1 of the embedded object at +0x18 (receiver = this+0x18).
// @field CompoundRenderable +0x14 void* field_0x14
// @field CompoundRenderable +0x18 void* field_0x18
void fn_00537C70(void* self, void* arg) {
    // mov ecx, [esi+0x14]; if (ecx) ecx->vtbl[1](arg);
    void* obj14 = lift_field<void*>(self, 0x14);
    if (obj14 != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj14);
        using Fn = void (*)(void* self_, void* arg_);
        reinterpret_cast<Fn>(vtbl[1])(obj14, arg);
    }

    // eax = [esi+0x18]; edx = eax->vtbl[1]; ecx = esi+0x18; push arg; call edx
    void* obj18 = lift_field<void*>(self, 0x18);
    void** vtbl18 = *reinterpret_cast<void***>(obj18);
    using Fn = void (*)(void* self_, void* arg_);
    reinterpret_cast<Fn>(vtbl18[1])(&lift_field<void*>(self, 0x18), arg);
}
} // namespace lift_00537C70

// [0x00537D00]
namespace lift_00537D00 {
// @name CompoundRenderable::vfunc_11
// @class CompoundRenderable
// @summary Forwards vfunc_11(arg1, arg2) to optional child renderable at +0x14 and embedded object at +0x18.
// @field CompoundRenderable +0x14 void* field_0x14
// @field CompoundRenderable +0x18 void* field_0x18


void __thiscall fn_00537D00(void* self, uint32_t arg1, uint32_t arg2) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* child = *reinterpret_cast<void**>(obj + 0x14);
    if (child != nullptr) {
        uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(child);
        auto fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t)>(vtable[0x2c / 4]);
        fn(child, arg1, arg2);
    }
    void* embedded = obj + 0x18;
    uintptr_t* embedded_vtable = *reinterpret_cast<uintptr_t**>(embedded);
    auto embedded_fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t)>(embedded_vtable[0x2c / 4]);
    embedded_fn(embedded, arg1, arg2);
}
} // namespace lift_00537D00

// [0x00537D30]
namespace lift_00537D30 {
// @name CompoundRenderable::vfunc_14
// @class CompoundRenderable
// @summary Forwards vfunc_14 to field_0x14 if non-null, then to the embedded subobject at +0x18.
// @field CompoundRenderable +0x14 void* field_0x14
// @field CompoundRenderable +0x18 void* field_0x18


void __thiscall fn_00537D30(void* self, uint32_t arg1, uint32_t arg2) {
    auto* base = static_cast<uint8_t*>(self);

    void* child = *reinterpret_cast<void**>(base + 0x14);
    if (child != nullptr) {
        auto* vtable = *reinterpret_cast<uint32_t**>(child);
        auto fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t)>(vtable[0x38 / 4]);
        fn(child, arg1, arg2);
    }

    void* embedded = base + 0x18;
    auto* vtable2 = *reinterpret_cast<uint32_t**>(embedded);
    auto fn2 = reinterpret_cast<void(__thiscall*)(void*, uint32_t, uint32_t)>(vtable2[0x38 / 4]);
    fn2(embedded, arg1, arg2);
}
} // namespace lift_00537D30

// [0x00537BB0]
namespace lift_00537BB0 {
// Known callees (virtual dispatch through embedded/owned objects):
//   ext_vcall_0x3C: calls vtable slot 0x3C (index 15) of the object at `obj`, passing `obj` as this; returns al.
//   ext_vcall_0x44: reads the vtable pointer stored at `thisp` (the embedded object at self+0x18),
//                   calls its vtable slot 0x44 (index 17) with ecx = thisp; returns eax.
extern uint8_t ext_vcall_0x3C(void* obj);
extern int32_t ext_vcall_0x44(void* thisp);

// @name CompoundRenderable::vfunc_17
// @class CompoundRenderable
// @summary If the object at +0x14 is non-null and its slot 0x3C returns true, returns slot 0x44 of the embedded object at +0x18 plus 1; otherwise returns slot 0x44 of that object directly.
// @field CompoundRenderable +0x14 void* field_0x14
// @field CompoundRenderable +0x18 void* field_0x18

namespace lift_00537BB0 {
int32_t fn_00537BB0(void* self) {
    void* obj = lift_field<void*>(self, 0x14);
    void* thisp = reinterpret_cast<uint8_t*>(self) + 0x18;

    if (obj != nullptr && ext_vcall_0x3C(obj) != 0) {
        return ext_vcall_0x44(thisp) + 1;
    }
    return ext_vcall_0x44(thisp);
}
} // namespace lift_00537BB0
} // namespace lift_00537BB0

// [0x00537CC0] CompoundRenderable::vfunc_12 (56 bytes)
namespace lift_00537CC0 {
// @name CompoundRenderable::vfunc_12
// @class CompoundRenderable
// @summary Forwards (a1, a2, a3) to virtual slot 12 of the optional child at +0x14, then to the embedded subobject at +0x18.
// @field CompoundRenderable +0x14 void* field_0x14
// @field CompoundRenderable +0x18 void* field_0x18

// Invokes virtual slot 12 of the object at `obj` (obj is the `this` pointer).
static void call_vslot12(void* obj, uint32_t a1, uint32_t a2, uint32_t a3) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto fn = reinterpret_cast<void (*)(void*, uint32_t, uint32_t, uint32_t)>(vtbl[12]);
    fn(obj, a1, a2, a3);
}

void fn_00537CC0(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    // Optional child object pointer at +0x14.
    void* child = lift_field<void*>(self, 0x14);
    if (child != nullptr) {
        call_vslot12(child, a1, a2, a3);
    }

    // Embedded subobject at +0x18; its vptr lives at +0x18, and `this` passed is &field_0x18.
    call_vslot12(static_cast<uint8_t*>(self) + 0x18, a1, a2, a3);
}
} // namespace lift_00537CC0
