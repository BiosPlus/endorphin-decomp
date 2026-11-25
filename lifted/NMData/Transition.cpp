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
// Callee: takes its receiver in ecx (thiscall) plus one stack argument, pops it (ret 4).
extern "C" uint32_t __thiscall ext_00505F00(void* self, void* arg);

extern "C" uint32_t __thiscall ext_00505F00(void* self, void* arg);
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
#include <cstdlib>

// [0x00497090] NMData::Transition::vfunc_37 (13 bytes)
// @name NMData::Transition::vfunc_37
// @class NMData::Transition
// @summary Calls sub_0049ED40 on the object at +0xB8 (as this) with self as its stack argument, and returns its result.
// @field NMData::Transition +0xB8 void* field_0xB8
uint32_t fn_00497090(void* self) {
    void* obj = lift_field<void*>(self, 0xB8);
    return ext_0049ED40(obj, self);
}

// [0x00499CE0]
// @name NMData::Transition::vfunc_30
// @class NMData::Transition
// @summary Forwards the first argument as the receiver to ext_00505F00, passing the address of the sub-object at this+0x84 as its stack argument, and returns the callee's result.
// @field NMData::Transition +0x84 void* field_0x84
uint32_t __thiscall fn_00499CE0(void* self, void* a1) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    void* subobj = obj + 0x84;
    return ext_00505F00(a1, subobj);
}

// [0x004991A0] NMData::Transition::vfunc_15_off_8 (59 bytes)
namespace lift_004991A0 {
// Known callee 0x00499130: sub_00499130 (87B, not yet lifted). Called cdecl with (this+0x60, out).
extern void ext_00499130(void* sub, uint32_t* out);
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(uint32_t* out);

// @name NMData::Transition::vfunc_15_off_8
// @class NMData::Transition
// @summary If kind == 2, initialises out via ext_00671F30; otherwise forwards this+0x60 and out to ext_00499130. Returns out.
// @field NMData::Transition +0x60 uint8_t field_0x60
uint32_t* fn_004991A0(void* self, uint32_t* out, int32_t kind) {
    // The original's local slot (saved ecx) is zeroed and never read; ecx is not part of the result.
    if (kind == 2) {
        ext_00671F30(out);
    } else {
        ext_00499130(static_cast<uint8_t*>(self) + 0x60, out);
    }
    return out;
}
} // namespace lift_004991A0

// [0x00499AF0] NMData::Transition::vfunc_6_off_10 (35 bytes)
namespace lift_00499AF0 {
extern uint32_t mem_00A9F354;  // holds the address of the default C string (0x00928C00)
extern uint32_t mem_00924FE4;  // IAT slot for MSVCP80 basic_string<char>::basic_string(const char*, const Alloc&)

// @name NMData::Transition::vfunc_6_off_10
// @class NMData::Transition
// @summary Constructs a std::string from the default C string at mem_00A9F354 into the stack-passed object and returns it.
void* __stdcall fn_00499AF0(void* self) {
    using StrCtorFn = void(__thiscall*)(void* self, const char* s, const void* alloc);
    const char* s = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F354));
    auto ctor = reinterpret_cast<StrCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
    ctor(self, s, nullptr);
    return self;
}
} // namespace lift_00499AF0

// [0x00497680] NMData::Transition::vfunc_12 (66 bytes)
namespace lift_00497680 {
// Import slot for MSVCR80!_invalid_parameter_noinfo (original asm: call [0x925134]).
extern int mem_00925134;

// Failure path: the original calls _invalid_parameter_noinfo through mem_00925134 and never returns.
[[noreturn]] static void invalid_parameter() {
    (void)&mem_00925134;
    std::abort();
}

// @name NMData::Transition::vfunc_12
// @class NMData::Transition
// @summary Bounds-checked fetch of the 8-byte element at index from the element array (begin..end); copies it to out and returns out.
// @field NMData::Transition +0x88 void* field_0x88
// @field NMData::Transition +0x8C void* field_0x8C

namespace {
struct Pair64 {
    uint32_t lo;
    uint32_t hi;
};
} // namespace

// Original is __thiscall-style with two stack args: (uint32_t index, Pair64* out); returns out.
Pair64* fn_00497680(void* self, uint32_t index, Pair64* out) {
    void* begin = lift_field<void*>(self, 0x88);
    void* end = lift_field<void*>(self, 0x8C);

    if (begin == nullptr) {
        invalid_parameter();
    }
    uint32_t count = static_cast<uint32_t>(
        (reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin)) >> 3);
    if (index >= count) {
        invalid_parameter();
    }

    const Pair64* elems = static_cast<const Pair64*>(begin);
    out->lo = elems[index].lo;
    out->hi = elems[index].hi;
    return out;
}
} // namespace lift_00497680
