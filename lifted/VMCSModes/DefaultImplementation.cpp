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

// [0x004F9C40]
namespace lift_004F9C40 {
void ext_00530290(void* self, uint32_t arg0);

// @name VMCSModes::DefaultImplementation::vfunc_54
// @class VMCSModes::DefaultImplementation
// @summary Calls vtable slot 0xB4 on the object reached via this->+0x8->+0x14->+0x30; if it returns non-null, calls ext_00530290(result, 0).
// @field VMCSModes::DefaultImplementation +0x08 void* field_0x08

void fn_004F9C40(void* self) {
    // this->+0x08 -> +0x14 -> +0x30 (intermediate objects have unrecovered layouts)
    void* a = lift_field<void*>(self, 0x08);
    void* b = lift_field<void*>(a, 0x14);
    void* obj = lift_field<void*>(b, 0x30);

    // Virtual call: vtable = *obj; slot byte offset 0xB4 (call [vtable+0xB4] with ecx = obj)
    void* vt = lift_field<void*>(obj, 0);
    using VirtFn = void* (*)(void*);
    VirtFn slot = reinterpret_cast<VirtFn>(lift_field<void*>(vt, 0xB4));
    void* r = slot(obj);

    if (r != nullptr) {
        ext_00530290(r, 0);
    }
}
} // namespace lift_004F9C40

// [0x004F9C10] VMCSModes::DefaultImplementation::vfunc_53 (33 bytes)
namespace lift_004F9C10 {
// Known callee 0x00530290: Unknown::selectIndex3Adjusted (Selects index arg0 (remapping 3 to 7 when the field at +0x88 already equals 3), stores it at +0x70, updates the container at +0x38, then invokes vtable slot 0x154 on the object at +0x10.)
extern void ext_00530290(void* self, uint32_t arg0);

// @name VMCSModes::DefaultImplementation::vfunc_53
// @class VMCSModes::DefaultImplementation
// @summary Walks self->+0x8->+0x14->+0x30, calls vtable slot 0xB4 on that object, and if the result is non-null calls selectIndex(result, 1).
// @field VMCSModes::DefaultImplementation +0x08 void* field_0x08
void fn_004F9C10(void* self) {
    // Object chain: self+0x8 -> +0x14 -> +0x30 (the receiver for the virtual call).
    void* p8 = lift_field<void*>(self, 0x08);
    void* p14 = lift_field<void*>(p8, 0x14);
    void* obj = lift_field<void*>(p14, 0x30);

    // Virtual call through vtable slot at byte offset 0xB4 (slot 45), this = obj.
    void* vtable = *static_cast<void**>(obj);
    using SlotFn = void* (*)(void*);
    auto slot = reinterpret_cast<SlotFn>(lift_field<void*>(vtable, 0xB4));
    void* result = slot(obj);

    if (result != nullptr) {
        ext_00530290(result, 1);
    }
}
} // namespace lift_004F9C10

// [0x004FAAB0]
namespace lift_004FAAB0 {
// @name VMCSModes::DefaultImplementation::vfunc_72
// @class VMCSModes::DefaultImplementation
// @summary Looks up a range via this->+0x8->+0x14->+0x34 renderer chain; returns fn_00477FA0(field 0x26C of global object, first element of range) if the range is non-empty, else false.
// @field VMCSModes::DefaultImplementation +0x08 void* field_0x08

extern void* __thiscall ext_005B11F0(void* self);            // OglRenderer::vfunc_118
extern int32_t __cdecl ext_00594000(void);                    // returns global int32 (mem_00B40D08)
extern bool __thiscall ext_00477FA0(void* self, uint32_t arg); // Unknown::findEntryWithField168Match
extern int mem_00925134;                                     // _invalid_parameter_noinfo slot (metadata reference only)

using VFnGetRange = void* (__thiscall*)(void* self);

bool VMCSModes_DefaultImplementation_vfunc_72(void* self) {
    uint8_t* s = static_cast<uint8_t*>(self);
    uint8_t* p1 = *reinterpret_cast<uint8_t**>(s + 0x08);
    uint8_t* p2 = *reinterpret_cast<uint8_t**>(p1 + 0x14);
    void* obj = *reinterpret_cast<void**>(p2 + 0x34);

    uint8_t* esi = static_cast<uint8_t*>(ext_005B11F0(obj));

    (void)&mem_00925134;
    uint8_t* g = reinterpret_cast<uint8_t*>(
        static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000())));
    void* ebx = *reinterpret_cast<void**>(g + 0x26C);

    void** vt = *reinterpret_cast<void***>(esi);
    auto getRange = reinterpret_cast<VFnGetRange>(vt[7]);
    uint8_t* r = static_cast<uint8_t*>(getRange(esi));

    uint32_t begin = *reinterpret_cast<uint32_t*>(r + 0x4);
    if (begin == 0) {
        return false;
    }
    uint32_t end = *reinterpret_cast<uint32_t*>(r + 0x8);
    if ((static_cast<int32_t>(end - begin) >> 2) == 0) {
        return false;
    }

    vt = *reinterpret_cast<void***>(esi);
    getRange = reinterpret_cast<VFnGetRange>(vt[7]);
    uint8_t* v = static_cast<uint8_t*>(getRange(esi));

    uint32_t cur = *reinterpret_cast<uint32_t*>(v + 0x4);
    uint32_t elem = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(cur));

    return ext_00477FA0(ebx, elem);
}
} // namespace lift_004FAAB0

// [0x004FADD0] VMCSModes::DefaultImplementation::vfunc_17 (27 bytes)
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FADD0(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 3);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x44));
    return slot(q);
}
} // namespace lift_004FADD0

// [0x004FADB0] VMCSModes::DefaultImplementation::vfunc_14 (27 bytes)
namespace lift_004FADB0 {
extern void ext_004667A0(void* self, int32_t arg);

typedef uintptr_t (*lift_vfn_t)(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_14
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0 on this->field_0x04 with arg 2, then forwards to vtable slot 14 (offset 0x38) of the object at field_0x04->field_0x0C, passing that object as `this`, and returns its result.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uintptr_t fn_004FADB0(void* self) {
    ext_004667A0(lift_field<void*>(self, 0x04), 2);

    // Re-read field_0x04 after the call, as the original does.
    void* owner  = lift_field<void*>(self, 0x04);
    void* target = lift_field<void*>(owner, 0x0C);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x38));
    return fn(target);
}
} // namespace lift_004FADB0

// [0x004FADF0] VMCSModes::DefaultImplementation::vfunc_19 (27 bytes)
namespace lift_004FADF0 {
// @name VMCSModes::DefaultImplementation::vfunc_19
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FADF0(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 3);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x4C));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FADF0

// [0x004FAE10] VMCSModes::DefaultImplementation::vfunc_20 (27 bytes)
namespace lift_004FAE10 {
// @name VMCSModes::DefaultImplementation::vfunc_20
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FAE10(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x50));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FAE10

// [0x004FAE30] VMCSModes::DefaultImplementation::vfunc_21 (27 bytes)
namespace lift_004FAE30 {
// @name VMCSModes::DefaultImplementation::vfunc_21
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FAE30(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x54));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FAE30

// [0x004FAE50] VMCSModes::DefaultImplementation::vfunc_15 (27 bytes)
namespace lift_004FAE50 {
// @name VMCSModes::DefaultImplementation::vfunc_15
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FAE50(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 2);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x3C));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FAE50

// [0x004FAEA0] VMCSModes::DefaultImplementation::vfunc_43 (30 bytes)
namespace lift_004FAEA0 {
// @name VMCSModes::DefaultImplementation::vfunc_43
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FAEA0(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0xAC));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FAEA0

// [0x004FAF50] VMCSModes::DefaultImplementation::vfunc_25 (27 bytes)
namespace lift_004FAF50 {
// @name VMCSModes::DefaultImplementation::vfunc_25
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FAF50(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x64));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FAF50

// [0x004FAF70] VMCSModes::DefaultImplementation::vfunc_26 (27 bytes)
namespace lift_004FAF70 {
// @name VMCSModes::DefaultImplementation::vfunc_26
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FAF70(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x68));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FAF70

// [0x004FAFB0] VMCSModes::DefaultImplementation::vfunc_110 (30 bytes)
namespace lift_004FAFB0 {
// @name VMCSModes::DefaultImplementation::vfunc_110
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FAFB0(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x1B8));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FAFB0

// [0x004FAFD0] VMCSModes::DefaultImplementation::vfunc_111 (30 bytes)
namespace lift_004FAFD0 {
// @name VMCSModes::DefaultImplementation::vfunc_111
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FAFD0(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x1BC));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FAFD0

// [0x004FAFF0] VMCSModes::DefaultImplementation::vfunc_112 (30 bytes)
namespace lift_004FAFF0 {
// @name VMCSModes::DefaultImplementation::vfunc_112
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FAFF0(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x1C0));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FAFF0

// [0x004FB010] VMCSModes::DefaultImplementation::vfunc_113 (30 bytes)
namespace lift_004FB010 {
// @name VMCSModes::DefaultImplementation::vfunc_113
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FB010(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x1C4));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FB010

// [0x004FB3E0] VMCSModes::DefaultImplementation::vfunc_118 (30 bytes)
namespace lift_004FB3E0 {
// @name VMCSModes::DefaultImplementation::vfunc_118
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FB3E0(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x1D8));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FB3E0

// [0x004FB420] VMCSModes::DefaultImplementation::vfunc_114 (30 bytes)
namespace lift_004FB420 {
// @name VMCSModes::DefaultImplementation::vfunc_114
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADB0 (VMCSModes::DefaultImplementation::vfunc_14).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADB0 {
extern void ext_004667A0(void* self, int32_t arg);

typedef uintptr_t (*lift_vfn_t)(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_14
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0 on this->field_0x04 with arg 2, then forwards to vtable slot 14 (offset 0x38) of the object at field_0x04->field_0x0C, passing that object as `this`, and returns its result.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uintptr_t fn_004FB420(void* self) {
    ext_004667A0(lift_field<void*>(self, 0x04), 1);

    // Re-read field_0x04 after the call, as the original does.
    void* owner  = lift_field<void*>(self, 0x04);
    void* target = lift_field<void*>(owner, 0x0C);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x1C8));
    return fn(target);
}
} // namespace lift_004FADB0
} // namespace lift_004FB420

// [0x004FB440] VMCSModes::DefaultImplementation::vfunc_115 (30 bytes)
namespace lift_004FB440 {
// @name VMCSModes::DefaultImplementation::vfunc_115
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADB0 (VMCSModes::DefaultImplementation::vfunc_14).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADB0 {
extern void ext_004667A0(void* self, int32_t arg);

typedef uintptr_t (*lift_vfn_t)(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_14
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0 on this->field_0x04 with arg 2, then forwards to vtable slot 14 (offset 0x38) of the object at field_0x04->field_0x0C, passing that object as `this`, and returns its result.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uintptr_t fn_004FB440(void* self) {
    ext_004667A0(lift_field<void*>(self, 0x04), 1);

    // Re-read field_0x04 after the call, as the original does.
    void* owner  = lift_field<void*>(self, 0x04);
    void* target = lift_field<void*>(owner, 0x0C);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x1CC));
    return fn(target);
}
} // namespace lift_004FADB0
} // namespace lift_004FB440

// [0x004FB460] VMCSModes::DefaultImplementation::vfunc_116 (30 bytes)
namespace lift_004FB460 {
// @name VMCSModes::DefaultImplementation::vfunc_116
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADB0 (VMCSModes::DefaultImplementation::vfunc_14).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADB0 {
extern void ext_004667A0(void* self, int32_t arg);

typedef uintptr_t (*lift_vfn_t)(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_14
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0 on this->field_0x04 with arg 2, then forwards to vtable slot 14 (offset 0x38) of the object at field_0x04->field_0x0C, passing that object as `this`, and returns its result.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uintptr_t fn_004FB460(void* self) {
    ext_004667A0(lift_field<void*>(self, 0x04), 1);

    // Re-read field_0x04 after the call, as the original does.
    void* owner  = lift_field<void*>(self, 0x04);
    void* target = lift_field<void*>(owner, 0x0C);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x1D0));
    return fn(target);
}
} // namespace lift_004FADB0
} // namespace lift_004FB460

// [0x004FB480] VMCSModes::DefaultImplementation::vfunc_117 (30 bytes)
namespace lift_004FB480 {
// @name VMCSModes::DefaultImplementation::vfunc_117
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADB0 (VMCSModes::DefaultImplementation::vfunc_14).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADB0 {
extern void ext_004667A0(void* self, int32_t arg);

typedef uintptr_t (*lift_vfn_t)(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_14
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0 on this->field_0x04 with arg 2, then forwards to vtable slot 14 (offset 0x38) of the object at field_0x04->field_0x0C, passing that object as `this`, and returns its result.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uintptr_t fn_004FB480(void* self) {
    ext_004667A0(lift_field<void*>(self, 0x04), 1);

    // Re-read field_0x04 after the call, as the original does.
    void* owner  = lift_field<void*>(self, 0x04);
    void* target = lift_field<void*>(owner, 0x0C);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x1D4));
    return fn(target);
}
} // namespace lift_004FADB0
} // namespace lift_004FB480

// [0x004FB4A0] VMCSModes::DefaultImplementation::vfunc_121 (30 bytes)
namespace lift_004FB4A0 {
// @name VMCSModes::DefaultImplementation::vfunc_121
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADB0 (VMCSModes::DefaultImplementation::vfunc_14).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADB0 {
extern void ext_004667A0(void* self, int32_t arg);

typedef uintptr_t (*lift_vfn_t)(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_14
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0 on this->field_0x04 with arg 2, then forwards to vtable slot 14 (offset 0x38) of the object at field_0x04->field_0x0C, passing that object as `this`, and returns its result.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uintptr_t fn_004FB4A0(void* self) {
    ext_004667A0(lift_field<void*>(self, 0x04), 1);

    // Re-read field_0x04 after the call, as the original does.
    void* owner  = lift_field<void*>(self, 0x04);
    void* target = lift_field<void*>(owner, 0x0C);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x1E4));
    return fn(target);
}
} // namespace lift_004FADB0
} // namespace lift_004FB4A0

// [0x004FB4C0] VMCSModes::DefaultImplementation::vfunc_122 (30 bytes)
namespace lift_004FB4C0 {
// @name VMCSModes::DefaultImplementation::vfunc_122
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADB0 (VMCSModes::DefaultImplementation::vfunc_14).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADB0 {
extern void ext_004667A0(void* self, int32_t arg);

typedef uintptr_t (*lift_vfn_t)(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_14
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0 on this->field_0x04 with arg 2, then forwards to vtable slot 14 (offset 0x38) of the object at field_0x04->field_0x0C, passing that object as `this`, and returns its result.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uintptr_t fn_004FB4C0(void* self) {
    ext_004667A0(lift_field<void*>(self, 0x04), 1);

    // Re-read field_0x04 after the call, as the original does.
    void* owner  = lift_field<void*>(self, 0x04);
    void* target = lift_field<void*>(owner, 0x0C);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x1E8));
    return fn(target);
}
} // namespace lift_004FADB0
} // namespace lift_004FB4C0

// [0x004FB4E0] VMCSModes::DefaultImplementation::vfunc_123 (30 bytes)
namespace lift_004FB4E0 {
// @name VMCSModes::DefaultImplementation::vfunc_123
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADB0 (VMCSModes::DefaultImplementation::vfunc_14).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADB0 {
extern void ext_004667A0(void* self, int32_t arg);

typedef uintptr_t (*lift_vfn_t)(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_14
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0 on this->field_0x04 with arg 2, then forwards to vtable slot 14 (offset 0x38) of the object at field_0x04->field_0x0C, passing that object as `this`, and returns its result.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uintptr_t fn_004FB4E0(void* self) {
    ext_004667A0(lift_field<void*>(self, 0x04), 1);

    // Re-read field_0x04 after the call, as the original does.
    void* owner  = lift_field<void*>(self, 0x04);
    void* target = lift_field<void*>(owner, 0x0C);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x1EC));
    return fn(target);
}
} // namespace lift_004FADB0
} // namespace lift_004FB4E0

// [0x004FB500] VMCSModes::DefaultImplementation::vfunc_124 (30 bytes)
namespace lift_004FB500 {
// @name VMCSModes::DefaultImplementation::vfunc_124
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADB0 (VMCSModes::DefaultImplementation::vfunc_14).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADB0 {
extern void ext_004667A0(void* self, int32_t arg);

typedef uintptr_t (*lift_vfn_t)(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_14
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0 on this->field_0x04 with arg 2, then forwards to vtable slot 14 (offset 0x38) of the object at field_0x04->field_0x0C, passing that object as `this`, and returns its result.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uintptr_t fn_004FB500(void* self) {
    ext_004667A0(lift_field<void*>(self, 0x04), 1);

    // Re-read field_0x04 after the call, as the original does.
    void* owner  = lift_field<void*>(self, 0x04);
    void* target = lift_field<void*>(owner, 0x0C);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x1F0));
    return fn(target);
}
} // namespace lift_004FADB0
} // namespace lift_004FB500

// [0x004FB5E0] VMCSModes::DefaultImplementation::vfunc_129 (30 bytes)
namespace lift_004FB5E0 {
// @name VMCSModes::DefaultImplementation::vfunc_129
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FB5E0(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x204));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FB5E0

// [0x004FB600] VMCSModes::DefaultImplementation::vfunc_130 (30 bytes)
namespace lift_004FB600 {
// @name VMCSModes::DefaultImplementation::vfunc_130
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADB0 (VMCSModes::DefaultImplementation::vfunc_14).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADB0 {
extern void ext_004667A0(void* self, int32_t arg);

typedef uintptr_t (*lift_vfn_t)(void* self);

// @name VMCSModes::DefaultImplementation::vfunc_14
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0 on this->field_0x04 with arg 2, then forwards to vtable slot 14 (offset 0x38) of the object at field_0x04->field_0x0C, passing that object as `this`, and returns its result.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uintptr_t fn_004FB600(void* self) {
    ext_004667A0(lift_field<void*>(self, 0x04), 1);

    // Re-read field_0x04 after the call, as the original does.
    void* owner  = lift_field<void*>(self, 0x04);
    void* target = lift_field<void*>(owner, 0x0C);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x208));
    return fn(target);
}
} // namespace lift_004FADB0
} // namespace lift_004FB600

// [0x004FB620] VMCSModes::DefaultImplementation::vfunc_131 (30 bytes)
namespace lift_004FB620 {
// @name VMCSModes::DefaultImplementation::vfunc_131
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FB620(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x20C));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FB620

// [0x004FB640] VMCSModes::DefaultImplementation::vfunc_120 (30 bytes)
namespace lift_004FB640 {
// @name VMCSModes::DefaultImplementation::vfunc_120
// @class VMCSModes::DefaultImplementation
// @summary Auto-lifted identical-shape clone of 0x004FADD0 (VMCSModes::DefaultImplementation::vfunc_17).
// @field VMCSModes::DefaultImplementation +0x4 void* field_0x04
namespace lift_004FADD0 {
extern void ext_004667A0(void* self, uint32_t arg);

// @name VMCSModes::DefaultImplementation::vfunc_17
// @class VMCSModes::DefaultImplementation
// @summary Calls ext_004667A0(this->+0x4, 3), then tail-dispatches vtable slot 17 (+0x44) of the object at this->+0x4->+0xC with that object as 'this'.
// @field VMCSModes::DefaultImplementation +0x04 void* field_0x04
uint32_t fn_004FB640(void* self) {
    // ecx = this->+0x4; push 3; call ext_004667A0
    void* p = lift_field<void*>(self, 0x04);
    ext_004667A0(p, 1);

    // eax = this->+0x4 (reloaded after the call); ecx = eax->+0xC
    void* q = lift_field<void*>(lift_field<void*>(self, 0x04), 0x0C);

    // edx = [ecx] (vtable); eax = [edx + 0x44] (slot 17); jmp eax with ecx = q
    void* vtable = lift_field<void*>(q, 0x00);
    using VFn = uint32_t (__thiscall*)(void* self_ptr);
    VFn slot = reinterpret_cast<VFn>(lift_field<void*>(vtable, 0x1E0));
    return slot(q);
}
} // namespace lift_004FADD0
} // namespace lift_004FB640
