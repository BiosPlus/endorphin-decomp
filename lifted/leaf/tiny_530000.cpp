// Lifted C++ translation unit: lifted/leaf/tiny_530000.cpp
#include "lift_compat.h"
extern "C" int32_t mem_00A44B84;
extern "C" void __fastcall ext_00531AE0(void* self);
extern "C" int mem_00954474;
extern "C" void __fastcall ext_00532B40(void* self);
extern "C" void __fastcall ext_00541000(void* self);
extern "C" void __fastcall ext_00533CF0(void* self);
#include <cstdint>

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

// [0x00533D40] sub_00533D40 (13 bytes)
namespace lift_00533D40 {
// @name SetField498
// @class <ClassName> (unknown; `this` is passed in ECX)
// @summary Stores the second stack argument (DWORD) into this+0x498 and returns, popping 8 bytes of arguments.
// @field <ClassName> +0x498 DWORD field_0x498
void fn_00533D40(void* self, DWORD arg0, DWORD value) {
    (void)arg0;
    *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x498) = value;
}
} // namespace lift_00533D40

// [0x00532B80]
namespace lift_00532B80 {
// @name dispatch_global_obj_vfunc1
// @summary Loads the global object pointer, fetches its vtable, and forwards the call to vtable slot 1 with the object as `this`.
// @field object +0x00 void* vtable (read via global mem_00AEED24)

// Global pointer to an object whose first dword is its vtable pointer.
extern uint32_t mem_00AEED24;

// Portable model of the tail-jump: the original `jmp edx` forwards the caller's
// stack arguments untouched, so the forwarding callee signature is unknown here.
// It is modelled as a thiscall-style function taking only `this`.
using VFunc1Fn = void (*)(void* self);

void fn_00532B80() {
    // mov ecx, [mem_00AEED24]  -> ecx = object pointer
    void* self = reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00AEED24));
    // mov eax, [ecx]            -> eax = vtable pointer
    uintptr_t vtable = *reinterpret_cast<uintptr_t*>(self);
    // mov edx, [eax + 4]        -> edx = vtable[1]
    uintptr_t slot1 = *reinterpret_cast<uint32_t*>(vtable + 0x04);
    // jmp edx                   -> tail-call vtable[1] with this = self
    reinterpret_cast<VFunc1Fn>(slot1)(self);
}
} // namespace lift_00532B80

// [0x00530690] sub_00530690 (14 bytes)
namespace lift_00530690 {
// @name sub_00530690
// @summary Auto-lifted identical-shape clone of 0x00515840 (sub_00511290).
namespace lift_00515840 {
// Known callee 0x00508BA0: sub_00508BA0 (Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).)
extern int __thiscall ext_00540D00(void* self);

// @name getChannelCountAt0xA4
// @summary Loads the pointer at this+0x04 and tail-calls ext_00508BA0 with (that pointer + 0xA4) as this; returns its result.
// @field unknown +0x04 void* field_0x04
extern int __thiscall fn_00530690(void* self) {
    void* inner = lift_field<void*>(self, 0x10);
    return ext_00540D00(static_cast<uint8_t*>(inner) + 0x9C);
}
} // namespace lift_00515840
} // namespace lift_00530690

// [0x00530720] sub_00530720 (14 bytes)
namespace lift_00530720 {
// @name sub_00530720
// @summary Auto-lifted identical-shape clone of 0x00515840 (sub_00511290).
namespace lift_00515840 {
// Known callee 0x00508BA0: sub_00508BA0 (Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).)
extern int __thiscall ext_00542FE0(void* self);

// @name getChannelCountAt0xA4
// @summary Loads the pointer at this+0x04 and tail-calls ext_00508BA0 with (that pointer + 0xA4) as this; returns its result.
// @field unknown +0x04 void* field_0x04
extern int __thiscall fn_00530720(void* self) {
    void* inner = lift_field<void*>(self, 0x10);
    return ext_00542FE0(static_cast<uint8_t*>(inner) + 0x9C);
}
} // namespace lift_00515840
} // namespace lift_00530720

// [0x00530730] sub_00530730 (14 bytes)
namespace lift_00530730 {
// @name sub_00530730
// @summary Auto-lifted identical-shape clone of 0x00515840 (sub_00511290).
namespace lift_00515840 {
// Known callee 0x00508BA0: sub_00508BA0 (Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).)
extern int __thiscall ext_00542740(void* self);

// @name getChannelCountAt0xA4
// @summary Loads the pointer at this+0x04 and tail-calls ext_00508BA0 with (that pointer + 0xA4) as this; returns its result.
// @field unknown +0x04 void* field_0x04
extern int __thiscall fn_00530730(void* self) {
    void* inner = lift_field<void*>(self, 0x10);
    return ext_00542740(static_cast<uint8_t*>(inner) + 0x9C);
}
} // namespace lift_00515840
} // namespace lift_00530730

// [0x005304A0]
namespace lift_005304A0 {
// @name Unknown::SetByteAt1D8
// @class Unknown
// @summary Stores a byte argument into the sub-object at this->+0x10 at offset +0x1D8.
// @field Unknown +0x10 void* field_0x10
// @field Unknown +0x1D8 uint8_t field_0x1D8

struct Unknown {
    uint8_t pad_0000[0x10];
    uint8_t* field_0x10;
};

void __thiscall fn_005304A0(Unknown* self, uint8_t value) {
    uint8_t* sub = self->field_0x10;
    sub[0x1D8] = value;
}
} // namespace lift_005304A0

// [0x00532DB0] sub_00532DB0 (26 bytes)
namespace lift_00532DB0 {
// @name sub_00532DB0
// @summary Auto-lifted identical-shape clone of 0x00537A00 (CompoundRenderable::vfunc_3).
namespace lift_00537A00 {
extern void ext_0054C6E0(void* self, void* arg);

// @name CompoundRenderable::vfunc_3
// @class CompoundRenderable
// @summary If arg is non-null, forward it to ext_0054C6E0 on the subobject at this+0x18; otherwise do nothing.
// @field CompoundRenderable +0x18 uint32_t* field_0x18 (address only: this+0x18 is passed on, not dereferenced here)
void fn_00532DB0(void* self, void* arg) {
    if (arg == nullptr) {
        return;
    }
    // Original is a tail jump (jmp) to ext_0054C6E0 with ecx = self + 0x18 and the same stack argument.
    ext_0054C6E0(static_cast<char*>(self) + 0x224, arg);
}
} // namespace lift_00537A00
} // namespace lift_00532DB0

// [0x00532E00] sub_00532E00 (26 bytes)
namespace lift_00532E00 {
// @name sub_00532E00
// @summary Auto-lifted identical-shape clone of 0x00537A00 (CompoundRenderable::vfunc_3).
namespace lift_00537A00 {
extern void ext_0054C6E0(void* self, void* arg);

// @name CompoundRenderable::vfunc_3
// @class CompoundRenderable
// @summary If arg is non-null, forward it to ext_0054C6E0 on the subobject at this+0x18; otherwise do nothing.
// @field CompoundRenderable +0x18 uint32_t* field_0x18 (address only: this+0x18 is passed on, not dereferenced here)
void fn_00532E00(void* self, void* arg) {
    if (arg == nullptr) {
        return;
    }
    // Original is a tail jump (jmp) to ext_0054C6E0 with ecx = self + 0x18 and the same stack argument.
    ext_0054C6E0(static_cast<char*>(self) + 0x250, arg);
}
} // namespace lift_00537A00
} // namespace lift_00532E00

// [0x00532E20] sub_00532E20 (26 bytes)
namespace lift_00532E20 {
// @name sub_00532E20
// @summary Auto-lifted identical-shape clone of 0x00537A00 (CompoundRenderable::vfunc_3).
namespace lift_00537A00 {
extern void ext_0054C6E0(void* self, void* arg);

// @name CompoundRenderable::vfunc_3
// @class CompoundRenderable
// @summary If arg is non-null, forward it to ext_0054C6E0 on the subobject at this+0x18; otherwise do nothing.
// @field CompoundRenderable +0x18 uint32_t* field_0x18 (address only: this+0x18 is passed on, not dereferenced here)
void fn_00532E20(void* self, void* arg) {
    if (arg == nullptr) {
        return;
    }
    // Original is a tail jump (jmp) to ext_0054C6E0 with ecx = self + 0x18 and the same stack argument.
    ext_0054C6E0(static_cast<char*>(self) + 0x27C, arg);
}
} // namespace lift_00537A00
} // namespace lift_00532E20

// [0x00532E40] sub_00532E40 (26 bytes)
namespace lift_00532E40 {
// @name sub_00532E40
// @summary Auto-lifted identical-shape clone of 0x00537A00 (CompoundRenderable::vfunc_3).
namespace lift_00537A00 {
extern void ext_0054C6E0(void* self, void* arg);

// @name CompoundRenderable::vfunc_3
// @class CompoundRenderable
// @summary If arg is non-null, forward it to ext_0054C6E0 on the subobject at this+0x18; otherwise do nothing.
// @field CompoundRenderable +0x18 uint32_t* field_0x18 (address only: this+0x18 is passed on, not dereferenced here)
void fn_00532E40(void* self, void* arg) {
    if (arg == nullptr) {
        return;
    }
    // Original is a tail jump (jmp) to ext_0054C6E0 with ecx = self + 0x18 and the same stack argument.
    ext_0054C6E0(static_cast<char*>(self) + 0x2A8, arg);
}
} // namespace lift_00537A00
} // namespace lift_00532E40

// [0x00538CF0] sub_00538CF0 (24 bytes)
namespace lift_00538CF0 {
// @name Unknown::SetFloatsFields18_1C_20
// @class Unknown
// @summary Stores three stack float arguments into this+0x20, this+0x18 and this+0x1C (callee-cleans 12 bytes).
// @field Unknown +0x18 float field_0x18
// @field Unknown +0x1C float field_0x1c
// @field Unknown +0x20 float field_0x20
void __fastcall fn_00538CF0(void* self, void* /*edx, unused*/, float arg1, float arg2, float arg3) {
    // fld dword ptr [esp+4] / fstp dword ptr [ecx+0x20]
    lift_field<float>(self, 0x20) = arg1;
    // fld dword ptr [esp+8] / fstp dword ptr [ecx+0x18]
    lift_field<float>(self, 0x18) = arg2;
    // fld dword ptr [esp+0xc] / fstp dword ptr [ecx+0x1c]
    lift_field<float>(self, 0x1C) = arg3;
    // ret 0xc: stdcall-style stack cleanup is implied by the __fastcall parameter list
}
} // namespace lift_00538CF0
