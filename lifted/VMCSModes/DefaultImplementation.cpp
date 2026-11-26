// Lifted C++ translation unit: lifted/VMCSModes/DefaultImplementation.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x004F9E50] VMCSModes::DefaultImplementation::vfunc_133 (16 bytes)
namespace lift_004F9E50 {
// @name VMCSModes::DefaultImplementation::vfunc_133
// @class VMCSModes::DefaultImplementation
// @summary Forwards the call to virtual slot 7 (+0x1c) of the object at this->+0x8->+0x14->+0x34 and returns its result.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
uintptr_t fn_004F9E50(void* self) {
    // Walk the delegate chain: this->delegate_0x8->field_0x14->field_0x34
    void* delegate = lift_field<void*>(self, 0x08);
    void* middle = lift_field<void*>(delegate, 0x14);
    void* target = lift_field<void*>(middle, 0x34);

    // Virtual dispatch on target: vtable slot 7 (0x1c / sizeof(void*) on the 32-bit build)
    void* vtable = lift_field<void*>(target, 0x00);
    uintptr_t slot = lift_field<uintptr_t>(vtable, 0x1c);

    // Original is a tail jump (jmp eax) with target in ecx (thiscall); no stack args are touched here.
    using Fn = uintptr_t (*)(void*);
    return reinterpret_cast<Fn>(slot)(target);
}
} // namespace lift_004F9E50

// [0x004F9D00] VMCSModes::DefaultImplementation::vfunc_97 (19 bytes)
namespace lift_004F9D00 {
// @name VMCSModes::DefaultImplementation::vfunc_97
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004F9E50 (VMCSModes::DefaultImplementation::vfunc_133).
// @field VMCSModes::DefaultImplementation +0x8 void* delegate_0x8
namespace lift_004F9E50 {
// @name VMCSModes::DefaultImplementation::vfunc_133
// @class VMCSModes::DefaultImplementation
// @summary Forwards the call to virtual slot 7 (+0x1c) of the object at this->+0x8->+0x14->+0x34 and returns its result.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
uintptr_t fn_004F9D00(void* self) {
    // Walk the delegate chain: this->delegate_0x8->field_0x14->field_0x34
    void* delegate = lift_field<void*>(self, 0x08);
    void* middle = lift_field<void*>(delegate, 0x14);
    void* target = lift_field<void*>(middle, 0x34);

    // Virtual dispatch on target: vtable slot 7 (0x1c / sizeof(void*) on the 32-bit build)
    void* vtable = lift_field<void*>(target, 0x00);
    uintptr_t slot = lift_field<uintptr_t>(vtable, 0xCC);

    // Original is a tail jump (jmp eax) with target in ecx (thiscall); no stack args are touched here.
    using Fn = uintptr_t (*)(void*);
    return reinterpret_cast<Fn>(slot)(target);
}
} // namespace lift_004F9E50
} // namespace lift_004F9D00

// [0x004FA1B0] VMCSModes::DefaultImplementation::vfunc_136 (58 bytes)
namespace lift_004FA1B0 {
extern void* ext_005B11F0(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_136
// @class VMCSModes::DefaultImplementation
// @summary Returns true when the container reached via this->field_0x08 -> ... -> vcall(+0x14) has a non-null begin pointer and a non-empty (end - begin) range.
// @field VMCSModes::DefaultImplementation +0x08 void* field_0x08
bool fn_004FA1B0(void* self) {
    // owner = this->field_0x08
    void* owner = lift_field<void*>(self, 0x08);
    // a = owner->field_0x14
    void* a = lift_field<void*>(owner, 0x14);
    // b = a->field_0x34 (passed as 'this' to OglRenderer::vfunc_118)
    void* b = lift_field<void*>(a, 0x34);
    void* obj = ext_005B11F0(b);

    // Virtual call through vtable slot 5 (offset 0x14 / 4) on obj.
    using VSlotFn = void* (*)(void* self_ptr);
    void** vtable = *reinterpret_cast<void***>(obj);
    VSlotFn slot5 = reinterpret_cast<VSlotFn>(vtable[5]);
    void* inner = slot5(obj);

    // inner layout: +0x4 begin, +0x8 end (32-bit pointers, element size 4).
    uint32_t begin = lift_field<uint32_t>(inner, 0x04);
    if (begin == 0) {
        return false;
    }
    uint32_t end = lift_field<uint32_t>(inner, 0x08);
    int32_t count = static_cast<int32_t>(end - begin) >> 2;
    return count != 0;
}
} // namespace lift_004FA1B0

// [0x004F9AA0] VMCSModes::DefaultImplementation::vfunc_71 (58 bytes)
namespace lift_004F9AA0 {
extern void* ext_005B11F0(void* self);

// @name VMCSModes::DefaultImplementation::isVectorEmpty
// @class VMCSModes::DefaultImplementation
// @summary Returns true when the vector reached via this->field_0x8 -> ->0x14 -> ->0x34 -> OglRenderer::vfunc_118 -> vtable[7] is empty (begin == nullptr or begin == end).
// @field VMCSModes::DefaultImplementation +0x08 void* field_0x8
bool fn_004F9AA0(void* self) {
    using VFn = void* (*)(void*);

    auto ptr = [](uint32_t addr) -> void* {
        return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
    };

    uint32_t a = lift_field<uint32_t>(self, 0x8);
    uint32_t b = lift_field<uint32_t>(ptr(a), 0x14);
    uint32_t c = lift_field<uint32_t>(ptr(b), 0x34);

    void* d = ext_005B11F0(ptr(c));

    void** vtbl = *reinterpret_cast<void***>(d);
    void* e = reinterpret_cast<VFn>(vtbl[0x1c / sizeof(void*)])(d);

    uint32_t begin = lift_field<uint32_t>(e, 0x4);
    uint32_t end = lift_field<uint32_t>(e, 0x8);

    if (begin == 0) {
        return true;
    }
    return begin == end;
}
} // namespace lift_004F9AA0

// [0x004FA1F0] VMCSModes::DefaultImplementation::vfunc_137 (58 bytes)
namespace lift_004FA1F0 {
// OglRenderer::vfunc_118 (thiscall, this in ecx, result in eax)
extern void* ext_005B11F0(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_137
// @class VMCSModes::DefaultImplementation
// @summary Returns true if the vector reached via this->+0x8 -> +0x14 -> +0x34 -> vfunc(+0x18) has a non-zero begin and end != begin.
// @field VMCSModes::DefaultImplementation +0x08 void* delegate_0x8
bool fn_004FA1F0(void* self) {
    // eax = this->delegate (+0x8); ecx = delegate->field_0x14; ecx = field->field_0x34
    void* delegate = lift_field<void*>(self, 0x08);
    void* middle = lift_field<void*>(delegate, 0x14);
    void* renderer_src = lift_field<void*>(middle, 0x34);

    // eax = ext_005B11F0(ecx): OglRenderer::vfunc_118 returns an object pointer
    void* obj = ext_005B11F0(renderer_src);

    // Virtual call: vtable slot at +0x18 (index 6), invoked with obj in ecx, result in eax
    void* vtable = lift_field<void*>(obj, 0x00);
    using VFn = void* (*)(void*);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x18));
    void* vec = slot(obj);

    // vec layout (std::vector-like): begin at +0x4, end at +0x8
    void* begin = lift_field<void*>(vec, 0x04);
    if (begin == nullptr) {
        return false;
    }
    void* end = lift_field<void*>(vec, 0x08);
    // (end - begin) >> 2 != 0 : true when the element count is non-zero
    std::ptrdiff_t diff = reinterpret_cast<uint8_t*>(end) - reinterpret_cast<uint8_t*>(begin);
    return (diff >> 2) != 0;
}
} // namespace lift_004FA1F0

// [0x004FA230] VMCSModes::DefaultImplementation::vfunc_134 (58 bytes)
namespace lift_004FA230 {
extern void* ext_005B11F0(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_134
// @class VMCSModes::DefaultImplementation
// @summary Returns true when the container returned by vtable slot 9 of the object obtained via OglRenderer::vfunc_118 is non-empty.
// @field VMCSModes::DefaultImplementation +0x08 void* field_0x08
bool fn_004FA230(void* self) {
    uint8_t* const base = reinterpret_cast<uint8_t*>(self);
    void* const p = *reinterpret_cast<void**>(base + 0x08);
    void* const q = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(p) + 0x14);
    void* const obj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(q) + 0x34);

    void* const r = ext_005B11F0(obj);

    using Method0x24 = void* (*)(void*);
    void* const vtbl = *reinterpret_cast<void**>(r);
    Method0x24 method = reinterpret_cast<Method0x24>(*reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + 0x24));
    uint8_t* const container = reinterpret_cast<uint8_t*>(method(r));

    void* const begin = *reinterpret_cast<void**>(container + 0x04);
    if (begin == nullptr) {
        return false;
    }
    const intptr_t end = reinterpret_cast<intptr_t>(*reinterpret_cast<void**>(container + 0x08));
    const int32_t count = static_cast<int32_t>(end - reinterpret_cast<intptr_t>(begin)) >> 2;
    return count != 0;
}
} // namespace lift_004FA230

// [0x004FA2B0] VMCSModes::DefaultImplementation::vfunc_138 (58 bytes)
namespace lift_004FA2B0 {
extern void* ext_005B11F0(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_138
// @class VMCSModes::DefaultImplementation
// @summary Returns true when the vector reached through this->field_0x08 chain is non-empty (begin != null and end != begin).
// @field VMCSModes::DefaultImplementation +0x08 void* field_0x08
BOOLEAN fn_004FA2B0(void* self) {
    void* delegate = lift_field<void*>(self, 0x08);
    void* mid      = lift_field<void*>(delegate, 0x14);
    void* owner    = lift_field<void*>(mid, 0x34);

    void* obj  = ext_005B11F0(owner);
    void** vtbl = lift_field<void**>(obj, 0x0);
    using GetVec = void* (*)(void*);
    GetVec getVec = reinterpret_cast<GetVec>(lift_field<void*>(vtbl, 0x2c));
    void* vec = getVec(obj);

    uintptr_t begin = lift_field<uintptr_t>(vec, 0x04);
    if (begin == 0) {
        return 0;
    }
    uintptr_t end = lift_field<uintptr_t>(vec, 0x08);
    int32_t diff = static_cast<int32_t>(end - begin);
    return (diff >> 2) != 0;
}
} // namespace lift_004FA2B0

// [0x004F9E60]
namespace lift_004F9E60 {
// @name VMCSModes::DefaultImplementation::vfunc_70
// @class VMCSModes::DefaultImplementation
// @summary Returns true when this mode's virtual check (slot 39) passes and the object obtained via slot 45 of the chain at +0x8 -> +0x14 -> +0x30 has field +0x38 equal to 6.
// @field VMCSModes::DefaultImplementation +0x08 void* field_0x08

// Callee at 0x004F9E60's chain: virtual slot 45 (offset 0xB4) on the object at ((this->field_0x08)->+0x14)->+0x30.
// Virtual slot 39 (offset 0x9C) on this.

extern bool __thiscall fn_004F9E60(void* self) {
    // Load delegate chain: this->field_0x08 -> +0x14 -> +0x30.
    void* d8 = lift_field<void*>(self, 0x08);
    void* d14 = lift_field<void*>(d8, 0x14);
    void* obj = lift_field<void*>(d14, 0x30);

    // Virtual call slot 45 (offset 0xB4) on obj, thiscall with this = obj.
    void* vtbl = lift_field<void*>(obj, 0);
    void* slot45 = lift_field<void*>(vtbl, 0xB4);
    using Slot45Fn = void* (__thiscall*)(void* self);
    void* result = reinterpret_cast<Slot45Fn>(slot45)(obj);

    // Virtual call slot 39 (offset 0x9C) on self, thiscall with this = self.
    void* selfVtbl = lift_field<void*>(self, 0);
    void* slot39 = lift_field<void*>(selfVtbl, 0x9C);
    using Slot39Fn = uint32_t (__thiscall*)(void* self);
    uint32_t check = reinterpret_cast<Slot39Fn>(slot39)(self);

    if (check == 0) {
        return false;
    }
    if (result == nullptr) {
        return false;
    }
    // Field +0x38 of the object returned by slot 45 must equal 6.
    uint32_t state = lift_field<uint32_t>(result, 0x38);
    return state == 6;
}
} // namespace lift_004F9E60

// [0x004FA170]
namespace lift_004FA170 {
// @name VMCSModes::DefaultImplementation::vfunc_106
// @class VMCSModes::DefaultImplementation
// @summary Checks whether the vector at +0x3CC of the nested object is non-empty.
// @field VMCSModes::DefaultImplementation +0x8 void* field_0x8


bool __thiscall fn_004FA170(void* self) {
    void* obj1 = lift_field<void*>(self, 0x8);
    void* obj2 = lift_field<void*>(obj1, 0x14);
    uint8_t* obj3 = lift_field<uint8_t*>(obj2, 0x34);

    uint32_t first = lift_field<uint32_t>(obj3, 0x3D0);
    if (first == 0) {
        return false;
    }

    uint32_t last = lift_field<uint32_t>(obj3 + 0x3CC, 0x8);
    int32_t count = static_cast<int32_t>(last - first) >> 2;
    return count != 0;
}
} // namespace lift_004FA170
