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

    void* obj = ptr_at(self, 0x18);          // mov eax, [ecx+0x18]
    void* sub = ptr_at(obj, 0x0C);           // mov ecx, [eax+0xc]
    void* vtbl = ptr_at(sub, 0);             // mov edx, [ecx]
    uint32_t target = lift_field<uint32_t>(vtbl, 0xAC); // mov eax, [edx+0xac]

    // jmp eax: call the resolved method with `sub` as `this` and return its result.
    using Method = uint32_t(__thiscall*)(void*);
    auto fn = reinterpret_cast<Method>(static_cast<uintptr_t>(target));
    return fn(sub);
}
} // namespace lift_00468690
