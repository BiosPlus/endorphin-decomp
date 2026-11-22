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
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern "C" void* ext_006A6E9E(void* inptr, int32_t vfDelta, const void* srcType, const void* targetType, int32_t isReference);
// Type descriptors referenced by address (original: push 0xA303F4 / push 0xA30418).
extern "C" int mem_00A303F4;
extern "C" int mem_00A30418;

extern "C" void* ext_006A6E9E(void* inptr, int32_t vfDelta, const void* srcType, const void* targetType, int32_t isReference);
// Type descriptors referenced by address (original: push 0xA303F4 / push 0xA30418).
extern "C" int mem_00A303F4;
extern "C" int mem_00A30418;
void* fn_00499AF0(void* out) {
    const char* text = reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9F354)));
    new (out) std::string(text);
    return out;
}
// Callee sub_0049ED40: thiscall (ecx = object), one stack argument, callee-cleans (ret 4).
extern "C" uint32_t ext_0049ED40(void* ecx, void* arg);

extern "C" uint32_t ext_0049ED40(void* ecx, void* arg);
// @name NMData::Transition::vfunc_4_off_8
// @class NMData::Transition
// @summary Returns 0 when +0xB0 is null; otherwise calls vtable slot 4 of the object at +0xB0+0x10 with argument 0 and returns its result.
// @field NMData::Transition +0xB0 void* field_0xB0
uint32_t fn_00497000(void* self) {
    // The caller's single stack argument is overwritten with 0 in the original before the tail-jump, so it is not modelled.
    void* sub = lift_field<void*>(self, 0xB0);
    if (sub == nullptr) {
        return 0;
    }
    void* obj = static_cast<uint8_t*>(sub) + 0x10;
    void** vtbl = lift_field<void**>(obj, 0);
    using VFn = uint32_t (*)(void* obj, uint32_t arg);
    return reinterpret_cast<VFn>(vtbl[4])(obj, 0);
}

// [0x004972E0] NMData::Transition::vfunc_35 (53 bytes)
// @name NMData::Transition::vfunc_35
// @class NMData::Transition
// @summary dynamic_casts arg2 to the target type; if non-null calls that object's vtable slot 11 with (arg1, this) and returns its result, else returns 0.
uint32_t fn_004972E0(void* self, void* arg1, void* arg2) {
    void* target = ext_006A6E9E(arg2, 0, &mem_00A303F4, &mem_00A30418, 0);
    if (target == nullptr) {
        return 0;
    }
    void** vtbl = lift_field<void**>(target, 0);
    using VFn = uint32_t (*)(void* obj, void* a, void* b);
    return reinterpret_cast<VFn>(vtbl[11])(target, arg1, self);
}

// [0x00497680] NMData::Transition::vfunc_12 (66 bytes)
// @name NMData::Transition::vfunc_12
// @class NMData::Transition
// @summary Copies the 8-byte element at index from the array at +0x88 (end at +0x8C) into out and returns out; aborts on a null array or out-of-range index.
// @field NMData::Transition +0x88 void* field_0x88
// @field NMData::Transition +0x8C void* field_0x8C
void* fn_00497680(void* self, void* out, uint32_t index) {
    const void* begin = lift_field<void*>(self, 0x88);
    const void* end = lift_field<void*>(self, 0x8C);
    // Element size is 8 bytes; count is the arithmetic (signed) byte difference divided by 8.
    const int32_t count = static_cast<int32_t>(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin))) >> 3;
    if (begin == nullptr || index >= static_cast<uint32_t>(count)) {
        // Original calls _invalid_parameter_noinfo, which does not return.
        std::abort();
    }
    std::memcpy(out, static_cast<const uint8_t*>(begin) + 8u * static_cast<size_t>(index), 8);
    return out;
}

// [0x00497090] NMData::Transition::vfunc_37 (13 bytes)
// @name NMData::Transition::vfunc_37
// @class NMData::Transition
// @summary Calls sub_0049ED40 on the object at +0xB8 (as this) with self as its stack argument, and returns its result.
// @field NMData::Transition +0xB8 void* field_0xB8
uint32_t fn_00497090(void* self) {
    void* obj = lift_field<void*>(self, 0xB8);
    return ext_0049ED40(obj, self);
}
