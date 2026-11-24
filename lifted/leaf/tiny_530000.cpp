// Lifted C++ translation unit: lifted/leaf/tiny_530000.cpp
#include "lift_compat.h"
extern "C" int32_t mem_00A44B84;
extern "C" void __fastcall ext_00531AE0(void* self);
extern "C" int mem_00954474;
extern "C" void __fastcall ext_00532B40(void* self);
extern "C" void __fastcall ext_00541000(void* self);
extern "C" void __fastcall ext_00533CF0(void* self);

// [0x0053F894] sub_0053F894 (5 bytes)
// @name sub_0053F894
// @summary Epilogue tail: discards two saved stack slots and returns, removing a 4-byte argument from the caller's stack (stdcall-style cleanup).
// @field Unknown +0x00 uint32_t field_0x00
//
// Machine code: pop esi; pop ecx; ret 4. The two pops restore nothing
// observable from C++; they only unwind the stack frame of the caller's
// epilogue. The portable equivalent is a stdcall function taking one
// 4-byte argument that is never read.
void __stdcall fn_0053F894(uint32_t arg_unused) {
    (void)arg_unused;
}

// [0x00530640] sub_00530640 (6 bytes)
// @name sub_00530640
// @summary Returns global int32 value from mem_00A44B84.
extern "C" int32_t __cdecl fn_00530640(void) {
    return mem_00A44B84;
}

// [0x00531B60] sub_00531B60 (8 bytes)
// @name sub_00531B60
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_00531AE0.
extern "C" void __fastcall fn_00531B60(void* self) {
    ext_00531AE0(static_cast<char*>(self) + 0x4);
}

// [0x00532B90] sub_00532B90 (7 bytes)
// @name sub_00532B90
// @summary Stores address of mem_00954474 into field at offset +0x0.
extern "C" void __fastcall fn_00532B90(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00954474;
}

// [0x00532C70] sub_00532C70 (8 bytes)
// @name sub_00532C70
// @summary This-adjustor thunk: adjusts `this` by +0x18 and tail-calls sub_00532B40.
extern "C" void __fastcall fn_00532C70(void* self) {
    ext_00532B40(static_cast<char*>(self) + 0x18);
}

// [0x00532C90] sub_00532C90 (11 bytes)
// @name sub_00532C90
// @summary This-adjustor thunk: adjusts `this` by +0x9C and tail-calls sub_00541000.
extern "C" void __fastcall fn_00532C90(void* self) {
    ext_00541000(static_cast<char*>(self) + 0x9C);
}

// [0x0053F690] sub_0053F690 (11 bytes)
// @name sub_0053F690
// @summary Member forwarding thunk: loads subobject pointer at +0xB4 and tail-calls sub_00533CF0.
extern "C" void __fastcall fn_0053F690(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0xB4);
    ext_00533CF0(delegate_obj);
}

// [0x0053F550]
namespace lift_0053F550 {
// @name sub_0053F550
// @summary Sets the vtable pointer at offset 0 of the object in ecx and returns this.
// @field Object +0x00 uint32_t vftable


extern uint8_t mem_00955D6C[];

uint32_t __thiscall sub_0053F550(uint32_t self) {
    *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(self)) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00955D6C));
    return self;
}
} // namespace lift_0053F550

// [0x005314C0]
namespace lift_005314C0 {
uint32_t mem_r32(uint32_t addr);

// @name getNestedField_0x10_0x1b0
// @summary Reads a 32-bit value at offset +0x1b0 from a sub-object pointer at +0x10.
// @field Self +0x10 uint32_t field_0x10
uint32_t __thiscall sub_005314C0(uint32_t this_ptr) {
    uint32_t obj = mem_r32(this_ptr + 0x10u);
    return mem_r32(obj + 0x1b0u);
}
} // namespace lift_005314C0

// [0x00530650] sub_00530650 (12 bytes)
namespace lift_00530650 {
extern int32_t mem_00A44B84;

// @name sub_00530650
// @summary Auto-lifted identical-shape clone of 0x004A24A0 (setGlobalU32FromArg).
namespace lift_004A24A0 {
extern uint32_t mem_00A44B84;

// @name setGlobalU32FromArg
// @summary Stores its single stack argument (stdcall, callee pops 4 bytes) into the global mem_00A35B7C.
void fn_00530650(uint32_t value) {
    // mov eax, [esp+4]     -> eax = first argument
    // mov [0xa35b7c], eax  -> mem_00A35B7C = eax
    mem_00A44B84 = value;
    // ret 4                -> stdcall epilogue; handled by the calling convention
}
} // namespace lift_004A24A0
} // namespace lift_00530650
