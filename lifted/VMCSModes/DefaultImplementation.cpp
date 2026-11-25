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

// [0x004FA170]
namespace lift_004FA170 {
namespace lift_004FA170 {
// @name VMCSModes::DefaultImplementation::vfunc_106
// @class VMCSModes::DefaultImplementation
// @summary Returns true if the vector at (object reached via this->+0x8 -> +0x14 -> +0x34)+0x3D0 is non-empty (end != begin, nonzero begin); false otherwise.
// @field VMCSModes::DefaultImplementation +0x8 void* field_0x8

extern uint32_t mem_read32(uint32_t guest_addr);

// Guest-address convention: `self` is the guest address of the object.
//   p = *(self + 0x08)
//   s = *(p + 0x14)
//   t = *(s + 0x34)
//   begin = *(t + 0x3D0)
//   if begin == 0: return false
//   end = *(t + 0x3D4)
//   return ((int32_t)(end - begin) >> 2) != 0
extern bool __fastcall fn_004FA170(uint32_t self, int edx_unused) {
    (void)edx_unused;
    uint32_t p = mem_read32(self + 0x08u);
    uint32_t s = mem_read32(p + 0x14u);
    uint32_t t = mem_read32(s + 0x34u);
    uint32_t begin = mem_read32(t + 0x3D0u);
    if (begin == 0) {
        return false;
    }
    uint32_t end = mem_read32(t + 0x3D4u);
    int32_t count = static_cast<int32_t>(end - begin) >> 2;
    return count != 0;
}
} // namespace lift_004FA170
} // namespace lift_004FA170

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
