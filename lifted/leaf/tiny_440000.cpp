// Lifted C++ translation unit: lifted/leaf/tiny_440000.cpp
#include "lift_compat.h"
extern "C" int mem_0093226C;
extern "C" int mem_00932B50;
extern "C" int mem_00932E14;
extern "C" int mem_009331C8;
extern "C" int mem_009334E0;
extern "C" int mem_00933C08;
extern "C" int mem_00934294;
extern "C" int mem_00934DB4;
// Read-only .rdata string "`KE" (0x009355EC).
extern "C" const char mem_009355EC[];

extern "C" const char mem_009355EC[];
// @name GetStringLiteral_00440680
// @summary Returns the address of the read-only string "$aj" in .rdata.
extern "C" const char* __cdecl fn_00440680() {
    return reinterpret_cast<const char*>(&mem_0093226C);
}
extern "C" int mem_00932424;
extern "C" void __fastcall ext_004406C0(void* self);

extern "C" void __fastcall ext_004406C0(void* self);
// @name GetStringLiteral_004473D0
// @summary Returns the address of the read-only string "`KE" in .rdata.
extern "C" const char* __cdecl fn_004473D0() {
    return reinterpret_cast<const char*>(&mem_00932B50);
}
extern "C" int mem_0093243C;
extern "C" int mem_00932454;
extern "C" int mem_00932484;
extern "C" int mem_009324DC;
extern "C" void __fastcall ext_0041C790(void* self);

extern "C" void __fastcall ext_0041C790(void* self);
// @name GetStringLiteral_00447DA0
// @summary Returns the address of the read-only string literal ",bj" (mem_00932E14).
const char* fn_00447DA0(void) {
    return reinterpret_cast<const char*>(&mem_00932E14);
}
extern "C" void __fastcall ext_0045C220(void* self);
extern "C" void __fastcall ext_0045C240(void* self);
extern "C" int mem_0093333C;
extern "C" void __fastcall ext_006B0C60(void* self);

extern "C" void __fastcall ext_006B0C60(void* self);
// @name GetConstantAddress_00447F90
// @summary Returns the address of the read-only 32-bit constant at mem_009331C8 (.rdata).
extern "C" const unsigned int* __cdecl fn_00447F90() {
    return reinterpret_cast<const unsigned int*>(&mem_009331C8);
}
extern "C" void __fastcall ext_006A5FFE(void* self);
extern "C" void __fastcall ext_00530720(void* self);
extern "C" void __fastcall ext_00530690(void* self);
extern "C" uintptr_t mem_00924FDC;
#include <cstdint>

// [0x00448F20] sub_00448F20 (6 bytes)
// @name GetStringLiteral_00448F20
// @summary Returns the address of the read-only string "$aj" in .rdata.
extern "C" const char* __cdecl fn_00448F20() {
    return reinterpret_cast<const char*>(&mem_009334E0);
}

// [0x00449FB0] sub_00449FB0 (6 bytes)
// @name GetConstantAddress_00449FB0
// @summary Returns the address of the read-only .rdata u32 constant 0x006A5FCE at 0x00933C08.
extern "C" void* __cdecl fn_00449FB0() {
    return reinterpret_cast<void*>(&mem_00933C08);
}

// [0x0044AF30] sub_0044AF30 (6 bytes)
// @name GetStringLiteral_0044AF30
// @summary Returns the address of the read-only string literal ",bj" (mem_00934294) in .rdata.
extern "C" const char* __cdecl fn_0044AF30() {
    return reinterpret_cast<const char*>(&mem_00934294);
}

// [0x0044CB80] sub_0044CB80 (6 bytes)
// @name sub_0044CB80
// @summary Returns the address of the read-only string literal "6gj" (.rdata at 0x00934DB4).
// (no object fields accessed)
extern "C" const char* fn_0044CB80() {
    return reinterpret_cast<const char*>(&mem_00934DB4);
}

// [0x0044D0B0] sub_0044D0B0 (6 bytes)
// @name sub_0044D0B0
// @summary Returns the address of the read-only string constant mem_009355EC ("`KE"); takes no arguments and touches no state.
extern "C" const char* __cdecl fn_0044D0B0(void) {
    return mem_009355EC;
}

// [0x004409F0] sub_004409F0 (11 bytes)
// @name sub_004409F0
// @summary Destructor tail-call: restores vtable mem_00932424 and tail-calls base destructor sub_004406C0.
extern "C" void __fastcall fn_004409F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00932424;
    ext_004406C0(self);
}

// [0x00440A00] sub_00440A00 (11 bytes)
// @name sub_00440A00
// @summary Destructor tail-call: restores vtable mem_0093243C and tail-calls base destructor sub_004406C0.
extern "C" void __fastcall fn_00440A00(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093243C;
    ext_004406C0(self);
}

// [0x00440A10] sub_00440A10 (11 bytes)
// @name sub_00440A10
// @summary Destructor tail-call: restores vtable mem_00932454 and tail-calls base destructor sub_004406C0.
extern "C" void __fastcall fn_00440A10(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00932454;
    ext_004406C0(self);
}

// [0x00440ED0] sub_00440ED0 (11 bytes)
// @name sub_00440ED0
// @summary Destructor tail-call: restores vtable mem_00932484 and tail-calls base destructor sub_004406C0.
extern "C" void __fastcall fn_00440ED0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00932484;
    ext_004406C0(self);
}

// [0x00442980] sub_00442980 (11 bytes)
// @name sub_00442980
// @summary Destructor tail-call: restores vtable mem_009324DC and tail-calls base destructor sub_0041C790.
extern "C" void __fastcall fn_00442980(void* self) {
    lift_field<void*>(self, 0x0) = &mem_009324DC;
    ext_0041C790(self);
}

// [0x00444480] sub_00444480 (11 bytes)
// @name sub_00444480
// @summary This-adjustor thunk: adjusts `this` by +0x15C and tail-calls sub_0045C220.
extern "C" void __fastcall fn_00444480(void* self) {
    ext_0045C220(static_cast<char*>(self) + 0x15C);
}

// [0x004444B0] sub_004444B0 (11 bytes)
// @name sub_004444B0
// @summary This-adjustor thunk: adjusts `this` by +0x15C and tail-calls sub_0045C240.
extern "C" void __fastcall fn_004444B0(void* self) {
    ext_0045C240(static_cast<char*>(self) + 0x15C);
}

// [0x004482A0] sub_004482A0 (11 bytes)
// @name sub_004482A0
// @summary Destructor tail-call: restores vtable mem_0093333C and tail-calls base destructor sub_006B0C60.
extern "C" void __fastcall fn_004482A0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093333C;
    ext_006B0C60(self);
}

// [0x00448410] sub_00448410 (11 bytes)
// @name sub_00448410
// @summary This-adjustor thunk: adjusts `this` by +0xD8 and tail-calls thunk_MFC80_ord_1280.
extern "C" void __fastcall fn_00448410(void* self) {
    ext_006A5FFE(static_cast<char*>(self) + 0xD8);
}

// [0x0044BC40] sub_0044BC40 (8 bytes)
// @name sub_0044BC40
// @summary Member forwarding thunk: loads subobject pointer at +0x68 and tail-calls sub_00530720.
extern "C" void __fastcall fn_0044BC40(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x68);
    ext_00530720(delegate_obj);
}

// [0x0044BC50] sub_0044BC50 (8 bytes)
// @name sub_0044BC50
// @summary Member forwarding thunk: loads subobject pointer at +0x68 and tail-calls sub_00530690.
extern "C" void __fastcall fn_0044BC50(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x68);
    ext_00530690(delegate_obj);
}

// [0x0044CFC0] sub_0044CFC0 (9 bytes)
// @name sub_0044CFC0
// @summary This-adjustor thunk: adjusts `this` by +0x78 and forwards through mem_00924FDC.
extern "C" void __fastcall fn_0044CFC0(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x78);
}

// [0x0044CFD0] sub_0044CFD0 (12 bytes)
// @name sub_0044CFD0
// @summary This-adjustor thunk: adjusts `this` by +0x94 and forwards through mem_00924FDC.
extern "C" void __fastcall fn_0044CFD0(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x94);
}

// [0x0044D080] sub_0044D080 (8 bytes)
// @name sub_0044D080
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1B0.
extern "C" void __fastcall fn_0044D080(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1B0);
    target(self);
}

// [0x0044D090] sub_0044D090 (8 bytes)
// @name sub_0044D090
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x168.
extern "C" void __fastcall fn_0044D090(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x168);
    target(self);
}

// [0x0044D0A0] sub_0044D0A0 (8 bytes)
// @name sub_0044D0A0
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x1AC.
extern "C" void __fastcall fn_0044D0A0(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x1AC);
    target(self);
}

// [0x004490B0] sub_004490B0 (23 bytes)
// @name sub_004490B0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_004490B0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x138) = a0;
    lift_field<uint32_t>(self, 0x130) = a1;
}

// [0x004490D0] sub_004490D0 (23 bytes)
// @name sub_004490D0
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_004490D0(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0x13C) = a0;
    lift_field<uint32_t>(self, 0x134) = a1;
}

// [0x0044D010] sub_0044D010 (23 bytes)
// @name sub_0044D010
// @summary Auto-lifted identical-shape clone of 0x0052EFA0 (Primitives::Animation::vfunc_14).
void fn_0044D010(void* self, uint32_t a0, uint32_t a1) {
    lift_field<uint32_t>(self, 0xCC) = a0;
    lift_field<uint32_t>(self, 0xD0) = a1;
}

// [0x0044CF80]
namespace lift_0044CF80 {
// @name hasField0x74
// @summary Checks whether the 32-bit field at offset 0x74 is non-zero.
// @field Unknown +0x74 uint32_t field_0x74


extern uint32_t mem_read32(uint32_t addr);

uint32_t __thiscall sub_0044CF80(uint32_t self) {
    return mem_read32(self + 0x74) != 0 ? 1u : 0u;
}
} // namespace lift_0044CF80

// [0x004474E0]
namespace lift_004474E0 {
uint32_t mem_r32(uintptr_t addr);

// @name invokeCallbackOrReturn
// @summary Invokes a non-null callback pointer stored at offset 0 of this, or returns.
// @field Unknown +0x00 uint32_t field_0x00
void __thiscall sub_004474E0(void* self, uint32_t arg1) {
    uint32_t fn = mem_r32(reinterpret_cast<uintptr_t>(self));
    if (fn != 0) {
        using FnType = void(__thiscall*)(void*, uint32_t);
        reinterpret_cast<FnType>(static_cast<uintptr_t>(fn))(self, arg1);
    }
}
} // namespace lift_004474E0

// [0x004474F0]
namespace lift_004474F0 {
// @name invokeCallbackIfSet
// @summary Invokes a member callback at +0x04 if non-null, passing one argument
// @field Unknown +0x04 uint32_t field_0x04


extern uint32_t mem_read32(uint32_t addr);

uint32_t __thiscall sub_004474F0(uint32_t ecx, uint32_t arg1) {
    uint32_t fn_ptr = mem_read32(ecx + 0x4);
    if (fn_ptr != 0) {
        using fn_t = uint32_t(__thiscall*)(uint32_t, uint32_t);
        return reinterpret_cast<fn_t>(static_cast<uintptr_t>(fn_ptr))(ecx, arg1);
    }
    return 0;
}
} // namespace lift_004474F0

// [0x00447500]
namespace lift_00447500 {
// @name invokeCallbackOrNull
// @summary Tail-calls the callback stored at this+0x8 with arg0 if non-null, otherwise returns 0.
// @field Class +0x08 uint32_t field_0x08

extern uint32_t mem_read32(uint32_t addr);

uint32_t __thiscall sub_00447500(uint32_t self, uint32_t arg0) {
    uint32_t fn = mem_read32(self + 0x8u);
    if (fn != 0u) {
        using fn_t = uint32_t (__thiscall *)(uint32_t, uint32_t);
        return reinterpret_cast<fn_t>(static_cast<uintptr_t>(fn))(self, arg0);
    }
    return 0u;
}
} // namespace lift_00447500

// [0x00447510]
namespace lift_00447510 {
// @name sub_00447510
// @summary Tail-calls callback at this+0x0C if non-null, otherwise returns
// @field unknown +0x0C uint32_t field_0x0C


void __thiscall sub_00447510(void* self, uint32_t arg1) {
    uint32_t fn_ptr = *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x0C);
    if (fn_ptr != 0) {
        using fn_t = void(__thiscall*)(void*, uint32_t);
        reinterpret_cast<fn_t>(static_cast<uintptr_t>(fn_ptr))(self, arg1);
    }
}
} // namespace lift_00447510

// [0x00447520]
namespace lift_00447520 {
// @name invokeCallback0x10
// @summary Tail-calls the 2-arg __thiscall function pointer at this+0x10 if non-null
// @field struct_0 +0x10 uint32_t field_0x10


uint32_t mem_read32(uintptr_t addr);

void __thiscall sub_00447520(void* self, uint32_t arg1, uint32_t arg2) {
    uint32_t fn_addr = mem_read32(reinterpret_cast<uintptr_t>(self) + 0x10);
    if (fn_addr != 0) {
        using FnType = void(__thiscall*)(void*, uint32_t, uint32_t);
        reinterpret_cast<FnType>(static_cast<uintptr_t>(fn_addr))(self, arg1, arg2);
    }
}
} // namespace lift_00447520

// [0x0044CCC0] sub_0044CCC0 (13 bytes)
namespace lift_0044CCC0 {
// @name ZeroFloatTriple_0044CCC0
// @class (none)
// @summary Zeroes three consecutive floats at this+0x00, +0x04, +0x08 and returns this (eax).
// @field (unknown) +0x00 float field_0x00
// @field (unknown) +0x04 float field_0x04
// @field (unknown) +0x08 float field_0x08
void* fn_0044CCC0(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);
    const float zero = 0.0f;
    std::memcpy(base + 0x08, &zero, sizeof(float));
    std::memcpy(base + 0x04, &zero, sizeof(float));
    std::memcpy(base + 0x00, &zero, sizeof(float));
    return self;
}
} // namespace lift_0044CCC0

// [0x00447530] sub_00447530 (14 bytes)
namespace lift_00447530 {
// @name sub_00447530
// @summary Auto-lifted identical-shape clone of 0x00401950 (ForwardToCallbackOrZero).
namespace lift_00401950 {
// @name ForwardToCallbackOrZero
// @class Unknown
// @summary Tail-forwards the single stack argument to the function pointer at this+0x08; returns 0 if that pointer is null.
// @field Unknown +0x08 void* field_0x08

// Original: mov eax,[ecx+8]; test eax,eax; je +2; jmp eax; xor al,al; ret 4
// The original tail-jumps with the caller's stack frame intact; this portable
// form performs an ordinary call and returns its result, which is equivalent
// in observable behavior for a normal (non-stack-manipulating) callee.
using Fn_00401950_Callback = DWORD(__thiscall*)(void* self, DWORD arg);

extern DWORD __thiscall fn_00447530(void* self, DWORD arg) {
    const auto target = *reinterpret_cast<Fn_00401950_Callback*>(
        reinterpret_cast<unsigned char*>(self) + 0x14);
    if (target == nullptr) {
        return 0;
    }
    return target(self, arg);
}
} // namespace lift_00401950
} // namespace lift_00447530

// [0x00447540] sub_00447540 (14 bytes)
namespace lift_00447540 {
// @name sub_00447540
// @summary Auto-lifted identical-shape clone of 0x00401950 (ForwardToCallbackOrZero).
namespace lift_00401950 {
// @name ForwardToCallbackOrZero
// @class Unknown
// @summary Tail-forwards the single stack argument to the function pointer at this+0x08; returns 0 if that pointer is null.
// @field Unknown +0x08 void* field_0x08

// Original: mov eax,[ecx+8]; test eax,eax; je +2; jmp eax; xor al,al; ret 4
// The original tail-jumps with the caller's stack frame intact; this portable
// form performs an ordinary call and returns its result, which is equivalent
// in observable behavior for a normal (non-stack-manipulating) callee.
using Fn_00401950_Callback = DWORD(__thiscall*)(void* self, DWORD arg);

extern DWORD __thiscall fn_00447540(void* self, DWORD arg) {
    const auto target = *reinterpret_cast<Fn_00401950_Callback*>(
        reinterpret_cast<unsigned char*>(self) + 0x18);
    if (target == nullptr) {
        return 0;
    }
    return target(self, arg);
}
} // namespace lift_00401950
} // namespace lift_00447540

// [0x004407B0] sub_004407B0 (14 bytes)
namespace lift_004407B0 {
// @name GetPointerChainDword10
// @class <ClassName> (unknown; receiver type not yet identified)
// @summary Returns the DWORD at +0x10 of the pointer stored at self+0x44, or 0 if that pointer is null.
// @field <ClassName> +0x44 void* field_0x44
// @field void +0x10 DWORD field_0x10
DWORD fn_004407B0(void* self) {
    void* p = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x44);
    if (p == nullptr) {
        return 0;
    }
    return *reinterpret_cast<DWORD*>(static_cast<uint8_t*>(p) + 0x10);
}
} // namespace lift_004407B0

// [0x004474D0]
namespace lift_004474D0 {
extern BOOL ext_FreeLibrary(HMODULE hLibModule);

// @name ReleaseLibraryHandle_0x20
// @class Unknown
// @summary If the handle stored at this+0x20 is non-null, free it with FreeLibrary; always returns.
// @field Unknown +0x20 HMODULE field_0x20
void fn_004474D0(void* self) {
    HMODULE handle = lift_field<HMODULE>(self, 0x20);
    if (handle != nullptr) {
        ext_FreeLibrary(handle);
    }
}
} // namespace lift_004474D0

// [0x0044B6A0]
namespace lift_0044B6A0 {
extern void ext_005303F0(void* self);

// @name Unknown::forwardToChildIfFlagSet
// @class Unknown
// @summary If field_0x64 is nonzero, forwards the call to ext_005303F0 with field_0x68 as the receiver; otherwise does nothing.
// @field Unknown +0x64 int32_t field_0x64
// @field Unknown +0x68 void* field_0x68
void fn_0044B6A0(void* self) {
    if (lift_field<int32_t>(self, 0x64) != 0) {
        void* child = lift_field<void*>(self, 0x68);
        ext_005303F0(child);
    }
}
} // namespace lift_0044B6A0
