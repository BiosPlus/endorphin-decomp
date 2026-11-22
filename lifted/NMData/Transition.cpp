// Lifted C++ translation unit: lifted/NMData/Transition.cpp
#include "lift_compat.h"
// Tail-call target (original: jmp 0x4871D0 with ecx = this).
extern "C" uint32_t ext_004871D0(void* ecx);
#include <new>
#include <string>
// Global holding a const char* (original: mov eax, [0xA9F354]).
extern "C" int mem_00A9F354;

#include <string>
// Global holding a const char* (original: mov eax, [0xA9F354]).
extern "C" int mem_00A9F354;
// @summary Forwards to ext_004871D0 when +0xB0 is null; otherwise calls vtable slot 1 of the object at +0xB0+0x10 and returns its result.
// @field NMData::Transition +0xB0 void* field_0xB0
uint32_t fn_00496FE0(void* self) {
    void* sub = lift_field<void*>(self, 0xB0);
    if (sub == nullptr) {
        return ext_004871D0(self);
    }
    void* obj = static_cast<uint8_t*>(sub) + 0x10;
    void** vtbl = lift_field<void**>(obj, 0);
    using VFn = uint32_t (*)(void* obj);
    return reinterpret_cast<VFn>(vtbl[1])(obj);
}

// [0x00499AF0] NMData::Transition::vfunc_6_off_10 (35 bytes)
// @name NMData::Transition::vfunc_6_off_10
// @class NMData::Transition
// @summary Constructs a std::string in the caller-provided return slot from the C string referenced by mem_00A9F354 and returns that slot.
void* fn_00499AF0(void* out) {
    const char* text = reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9F354)));
    new (out) std::string(text);
    return out;
}
