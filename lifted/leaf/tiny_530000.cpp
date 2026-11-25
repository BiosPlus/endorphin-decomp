// Lifted C++ translation unit: lifted/leaf/tiny_530000.cpp
#include "lift_compat.h"
extern "C" int32_t mem_00A44B84;
extern "C" void __fastcall ext_00531AE0(void* self);
extern "C" int mem_00954474;
extern "C" void __fastcall ext_00532B40(void* self);
extern "C" void __fastcall ext_00541000(void* self);
extern "C" void __fastcall ext_00533CF0(void* self);
#include <cstdint>
#include <cstring>

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

// [0x00538550] sub_00538550 (24 bytes)
namespace lift_00538550 {
// @name Unknown::SetFloatAndFlagBytes
// @class Unknown
// @summary Stores a float at +0x14 and two byte values at +0x18 and +0x19 of self (thiscall, callee pops 12 bytes).
// @field Unknown +0x14 float field_0x14
// @field Unknown +0x18 uint8_t field_0x18
// @field Unknown +0x19 uint8_t field_0x19
void fn_00538550(void* self, float value, uint8_t byteA, uint8_t byteB) {
    auto* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x14, &value, sizeof(float));
    base[0x19] = byteA;
    base[0x18] = byteB;
}
} // namespace lift_00538550

// [0x00532B60]
namespace lift_00532B60 {
// @name Unknown::initVtableAndFlags
// @class Unknown
// @summary Stores the vtable address at +0x00, sets flag bytes at +0x04 and +0x0C to 1, and zeroes the dwords at +0x08 and +0x10.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint8_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint8_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
void fn_00532B60(void* self) {
    auto* p = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(p + 0x00) = 0x009543E4u; // vtable address (mem_009543E4)
    *(p + 0x04) = 1;
    *reinterpret_cast<uint32_t*>(p + 0x08) = 0;
    *(p + 0x0C) = 1;
    *reinterpret_cast<uint32_t*>(p + 0x10) = 0;
}
} // namespace lift_00532B60

// [0x00533CF0] sub_00533CF0 (27 bytes)
namespace lift_00533CF0 {
// @name descriptiveName_00533CF0
// @summary Loads this->field_0x194 as an index i, then copies the DWORD at this+0xdc+4*(i*15) into this->field_0x498.
// @field <Class> +0x194 DWORD field_0x194
// @field <Class> +0xdc DWORD field_0xdc (array; element stride 4, indexed by field_0x194*15)
// @field <Class> +0x498 DWORD field_0x498
void fn_00533CF0(void* self) {
    auto* base = static_cast<unsigned char*>(self);

    std::uint32_t index = 0;
    std::memcpy(&index, base + 0x194, sizeof(index));

    const std::uint32_t elementIndex = index * 15u; // edx = eax*16 - eax
    std::uint32_t value = 0;
    std::memcpy(&value, base + 0xdc + static_cast<std::size_t>(elementIndex) * 4u, sizeof(value));

    std::memcpy(base + 0x498, &value, sizeof(value));
}
} // namespace lift_00533CF0

// [0x00532C50] sub_00532C50 (30 bytes)
namespace lift_00532C50 {
// @name fn_00532C50
// @class <unknown>
// @summary Copies four floats from self+0x38..self+0x44 into the caller-provided 16-byte output (returned by hidden pointer).
// @field <unknown> +0x38 float field_0x38
// @field <unknown> +0x3C float field_0x3C
// @field <unknown> +0x40 float field_0x40
// @field <unknown> +0x44 float field_0x44
void fn_00532C50(const void* self, void* out) {
    const auto* src = static_cast<const std::byte*>(self);
    auto* dst = static_cast<std::byte*>(out);
    for (std::size_t i = 0; i < 4; ++i) {
        float v;
        std::memcpy(&v, src + 0x38 + i * 4, sizeof(float));
        std::memcpy(dst + i * 4, &v, sizeof(float));
    }
}
} // namespace lift_00532C50

// [0x00538FA0] sub_00538FA0 (31 bytes)
namespace lift_00538FA0 {
// @name SetFloatPairAndDwordPair
// @summary Stores two float arguments at +0x28/+0x2C and two dword arguments at +0x20/+0x24 of this (thiscall, ECX = this, callee pops 0x10 bytes).
// @field Unknown +0x20 DWORD field_0x20
// @field Unknown +0x24 DWORD field_0x24
// @field Unknown +0x28 float field_0x28
// @field Unknown +0x2C float field_0x2C
void fn_00538FA0(void* self, float f0, float f1, DWORD d0, DWORD d1) {
    lift_field<float>(self, 0x28) = f0;
    lift_field<float>(self, 0x2C) = f1;
    lift_field<DWORD>(self, 0x20) = d0;
    lift_field<DWORD>(self, 0x24) = d1;
}
} // namespace lift_00538FA0

// [0x005314C0] sub_005314C0 (10 bytes)
namespace lift_005314C0 {
// @name sub_005314C0
// @summary Auto-lifted identical-shape clone of 0x004023C0 (AVIIO::vfunc_23).
namespace lift_004023C0 {
// @name AVIIO::vfunc_23
// @class AVIIO
// @summary Returns the dword at offset 0xD8 of the object referenced by this->+0x470.
// @field AVIIO +0x470 uint32_t field_0x470
// @field Unknown +0xD8 uint32_t field_0xD8
uint32_t fn_005314C0(void* self) {
    // Pointer at +0x470 is a 32-bit guest address; widen via uintptr_t for host-side typing.
    const uint32_t inner = lift_field<uint32_t>(self, 0x10);
    const void* inner_ptr = reinterpret_cast<const void*>(static_cast<uintptr_t>(inner));
    return lift_field<uint32_t>(inner_ptr, 0x1B0);
}
} // namespace lift_004023C0
} // namespace lift_005314C0
