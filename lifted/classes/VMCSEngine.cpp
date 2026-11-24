// Lifted C++ translation unit: lifted/classes/VMCSEngine.cpp
#include "lift_compat.h"

// [0x00468690] VMCSEngine::vfunc_1 (16 bytes)
namespace lift_00468690 {
// @name VMCSEngine::vfunc_1
// @class VMCSEngine
// @summary Tail-forwards to virtual slot +0xAC of the object at this->+0x18->+0xC, returning its result.
// @field VMCSEngine +0x18 void* field_0x18
uint32_t fn_00468690(void* self) {
    // Read a 32-bit guest-layout pointer stored at base+offset and convert it to a host pointer.
    auto ptr_at = [](const void* base, ptrdiff_t offset) -> void* {
        uint32_t value = lift_field<uint32_t>(base, offset);
        return reinterpret_cast<void*>(static_cast<uintptr_t>(value));
    };

    void* obj = ptr_at(self, 0x18);                      // mov eax, [ecx+0x18]
    void* sub = ptr_at(obj, 0x0C);                       // mov ecx, [eax+0xc]
    void* vtbl = ptr_at(sub, 0);                         // mov edx, [ecx]
    uint32_t target = lift_field<uint32_t>(vtbl, 0xAC);  // mov eax, [edx+0xac]

    // jmp eax: call the resolved method with `sub` as `this` and return its result.
    using Method = uint32_t(__thiscall*)(void*);
    auto fn = reinterpret_cast<Method>(static_cast<uintptr_t>(target));
    return fn(sub);
}
} // namespace lift_00468690

// [0x00468670]
namespace lift_00468670 {
// @name VMCSEngine::vfunc_0
// @class VMCSEngine
// @summary Sets a flag on a global subobject and delegates to sub_00480130 on a nested field.
// @field VMCSEngine +0x14 void* field_0x14


extern int32_t __cdecl ext_00594000(void);
void __thiscall ext_00480130(void* this_);

void __thiscall fn_00468670(void* this_) {
    uint8_t* base = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_00594000())));
    uint8_t* obj = *reinterpret_cast<uint8_t**>(base + 0x26c);
    obj[0x4] = 1;

    uint8_t* self = static_cast<uint8_t*>(this_);
    uint8_t* field14 = *reinterpret_cast<uint8_t**>(self + 0x14);
    void* target = *reinterpret_cast<void**>(field14 + 0x34);
    ext_00480130(target);
}
} // namespace lift_00468670
