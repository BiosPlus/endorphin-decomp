// Lifted C++ translation unit: lifted/leaf/tiny_400000.cpp
#include "lift_compat.h"
extern "C" int mem_00929A44;
extern "C" int mem_00928A98;
extern "C" int mem_0092A0E0;
extern "C" const unsigned int mem_0092A510;
// @name GetConstant_00409060
// @summary Returns the address of the constant u32 0x006A60A6 stored in .rdata at mem_0092A510.

// @name GetConstant_00409060
// @summary Returns the address of the constant u32 0x006A60A6 stored in .rdata at mem_0092A510.
// @summary Returns the address of the .rdata constant 0x006A5ED2.
extern "C" int* __cdecl fn_00404C40() {
    return &mem_00929A44;
}
extern "C" const unsigned int mem_0092A794;
extern "C" const unsigned int mem_0092B4B4;
extern "C" int mem_0092B0F4;
extern "C" int mem_0092B968;
extern "C" int mem_0092BB20;
extern "C" int mem_00928EC0;
extern "C" uintptr_t mem_009251C0;

extern "C" uintptr_t mem_009251C0;
// @name sub_00401840
// @class (none)
// @summary Returns the address of the read-only string constant at 0x00928A98.
// (no field offsets accessed)
const char* fn_00401840() {
    return reinterpret_cast<const char*>(&mem_00928A98);
}
extern "C" int mem_00928F28;
extern "C" void __fastcall ext_00401BB0(void* self);

extern "C" void __fastcall ext_00401BB0(void* self);
// @name sub_004076E0
// @class (none)
// @summary Returns the address of the .rdata constant 0x006A5FCE at 0x0092A0E0.
// (no field offsets accessed)
extern "C" int* __cdecl fn_004076E0() {
    return &mem_0092A0E0;
}
extern "C" int mem_0092979C;
extern "C" void __fastcall ext_006A5E84(void* self);

extern "C" void __fastcall ext_006A5E84(void* self);
extern "C" const unsigned int* __cdecl fn_00409060() {
    return reinterpret_cast<const unsigned int*>(&mem_0092A510);
}
extern "C" int mem_0092A23C;
extern "C" void __fastcall ext_006A5FF2(void* self);

extern "C" void __fastcall ext_006A5FF2(void* self);
// @name GetConstant_00409630
// @summary Returns the address of the .rdata constant u32 0x00458430 stored at mem_0092A794.
// (no field offsets accessed)
extern "C" const unsigned int* __cdecl fn_00409630() {
    return &mem_0092A794;
}
extern "C" void __fastcall ext_006A60D0(void* self);
extern "C" int mem_0092B1AC;
extern "C" void __fastcall ext_0040C1D0(void* self);

extern "C" void __fastcall ext_0040C1D0(void* self);
// @name GetConstant_0040D9B0
// @summary Returns the address of the read-only .rdata u32 constant at mem_0092B4B4 (value 0x0040CDF0).
// (no field offsets accessed)
extern "C" const unsigned int* __cdecl fn_0040D9B0() {
    return &mem_0092B4B4;
}
extern "C" int mem_0092B50C;
extern "C" int mem_0092B7F4;
extern "C" void __fastcall ext_006A5DFA(void* self);

extern "C" void __fastcall ext_006A5DFA(void* self);
// @name sub_0040D4D0
// @summary Returns the address of the read-only global mem_0092B0F4 (.rdata slot holding 0x0040CDF0) in eax; no other side effects.
int* fn_0040D4D0(void) {
    return &mem_0092B0F4;
}
extern "C" int mem_0092B9D4;
#include <cstdint>

// [0x0040F5C0] sub_0040F5C0 (6 bytes)
// @name sub_0040F5C0
// @summary Returns the address of the read-only string constant at mem_0092B968 (".rdata" "$aj").
extern "C" const void* fn_0040F5C0() {
    return &mem_0092B968;
}

// [0x0040FED0] sub_0040FED0 (6 bytes)
// @name sub_0040FED0
// @class (none)
// @summary Returns the address of the read-only string constant "$aj" at 0x0092BB20.
// (no field offsets accessed)
extern "C" const char* fn_0040FED0() {
    return reinterpret_cast<const char*>(&mem_0092BB20);
}

// [0x00401B10] sub_00401B10 (12 bytes)
// @name sub_00401B10
// @summary Destructor tail-call: restores vtable mem_00928EC0 and tail-calls MSVCR80!??1exception@std@@UAE@XZ.
extern "C" void __fastcall fn_00401B10(void* self) {
    typedef void (__fastcall* DtorFn)(void*);
    lift_field<void*>(self, 0x0) = &mem_00928EC0;
    DtorFn base_dtor = reinterpret_cast<DtorFn>(mem_009251C0);
    base_dtor(self);
}

// [0x00401DA0] sub_00401DA0 (11 bytes)
// @name sub_00401DA0
// @summary Destructor tail-call: restores vtable mem_00928F28 and tail-calls base destructor sub_00401BB0.
extern "C" void __fastcall fn_00401DA0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00928F28;
    ext_00401BB0(self);
}

// [0x00404650] sub_00404650 (11 bytes)
// @name sub_00404650
// @summary Destructor tail-call: restores vtable mem_0092979C and tail-calls base destructor thunk_MFC80_ord_748.
extern "C" void __fastcall fn_00404650(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092979C;
    ext_006A5E84(self);
}

// [0x004090E0] sub_004090E0 (11 bytes)
// @name sub_004090E0
// @summary Destructor tail-call: restores vtable mem_0092A23C and tail-calls base destructor thunk_MFC80_ord_1934.
extern "C" void __fastcall fn_004090E0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092A23C;
    ext_006A5FF2(self);
}

// [0x0040AE10] sub_0040AE10 (11 bytes)
// @name sub_0040AE10
// @summary This-adjustor thunk: adjusts `this` by +0x84 and tail-calls thunk_MFC80_ord_5833.
extern "C" void __fastcall fn_0040AE10(void* self) {
    ext_006A60D0(static_cast<char*>(self) + 0x84);
}

// [0x0040BC30] sub_0040BC30 (10 bytes)
// @name sub_0040BC30
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x168.
extern "C" void __fastcall fn_0040BC30(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x168);
    target(self);
}

// [0x0040D500] sub_0040D500 (11 bytes)
// @name sub_0040D500
// @summary Destructor tail-call: restores vtable mem_0092B1AC and tail-calls base destructor sub_0040C1D0.
extern "C" void __fastcall fn_0040D500(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092B1AC;
    ext_0040C1D0(self);
}

// [0x0040D9E0] sub_0040D9E0 (11 bytes)
// @name sub_0040D9E0
// @summary Destructor tail-call: restores vtable mem_0092B50C and tail-calls base destructor sub_0040C1D0.
extern "C" void __fastcall fn_0040D9E0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092B50C;
    ext_0040C1D0(self);
}

// [0x0040EF90] sub_0040EF90 (11 bytes)
// @name sub_0040EF90
// @summary Destructor tail-call: restores vtable mem_0092B7F4 and tail-calls base destructor thunk_MFC80_ord_587.
extern "C" void __fastcall fn_0040EF90(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092B7F4;
    ext_006A5DFA(self);
}

// [0x0040FD00] sub_0040FD00 (11 bytes)
// @name sub_0040FD00
// @summary Destructor tail-call: restores vtable mem_0092B9D4 and tail-calls base destructor thunk_MFC80_ord_587.
extern "C" void __fastcall fn_0040FD00(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092B9D4;
    ext_006A5DFA(self);
}

// [0x00401970]
namespace lift_00401970 {
extern uint32_t mem_read32(const void* base, uint32_t offset);

// @name sub_00401970
// @summary Tail-calls a callback function pointer stored at offset 0x14 if non-null
// @field Class +0x14 void* field_0x14
void __thiscall sub_00401970(void* self) {
    uint32_t fn = mem_read32(self, 0x14);
    if (fn != 0) {
        ((void (*)())(uintptr_t)fn)();
    }
}
} // namespace lift_00401970

// [0x00401930] sub_00401930 (13 bytes)
namespace lift_00401930 {
// @name CallFirstFieldIfNonNull
// @summary If the dword at offset 0 is non-zero, tail-dispatch to it with the same this; otherwise return 0.
// @field Unknown +0x00 uint32_t field_0x00
uint32_t fn_00401930(void* self) {
    const uint32_t target = lift_field<uint32_t>(self, 0);
    if (target == 0) {
        return 0;
    }
    using Target = uint32_t (*)(void* self);
    return reinterpret_cast<Target>(static_cast<uintptr_t>(target))(self);
}
} // namespace lift_00401930

// [0x0040FD90] sub_0040FD90 (13 bytes)
namespace lift_0040FD90 {
// @name CallVirtualSlot148
// @class (none: generic thiscall thunk, owner class unknown)
// @summary Calls the virtual method at vtable byte offset 0x148 on self with no arguments; the two stack args are discarded (ret 8).
// @field Object +0x00 void* vptr (vtable pointer, dereferenced to find slot 0x148)
void fn_0040FD90(void* self, DWORD /*discarded_arg0*/, DWORD /*discarded_arg1*/) {
    // mov eax, [ecx]          -> vtable = self->vptr
    uint8_t* vtbl = *reinterpret_cast<uint8_t**>(self);
    // mov edx, [eax + 0x148]  -> fn = vtable[0x148] (byte offset, 32-bit layout)
    using VirtFn = void (*)(void*);
    VirtFn fn = *reinterpret_cast<VirtFn*>(vtbl + 0x148);
    // call edx                -> thiscall with ecx = self, no pushed args
    fn(self);
    // ret 0x8                 -> caller's 8 bytes of args are dropped (handled by signature)
}
} // namespace lift_0040FD90

// [0x00401730] sub_00401730 (16 bytes)
namespace lift_00401730 {
// @name sub_00401730
// @summary Auto-lifted identical-shape clone of 0x00545610 (PoseTool::vfunc_14).
namespace lift_00545610 {
// @name PoseTool::vfunc_14
// @class PoseTool
// @summary Forwards the call to the virtual method at vtable slot 14 (offset 0x38) of the object stored at this+0xA0, passing that object as `this`, and returns its result.
// @field PoseTool +0xA0 void* field_0xa0

typedef uintptr_t (*lift_vfn_t)(void* self);

uintptr_t fn_00401730(void* self) {
    void* target = lift_field<void*>(self, 0xAC);
    void* vtable = lift_field<void*>(target, 0);
    lift_vfn_t fn = reinterpret_cast<lift_vfn_t>(lift_field<void*>(vtable, 0x16C));
    return fn(target);
}
} // namespace lift_00545610
} // namespace lift_00401730

// [0x00401940] sub_00401940 (14 bytes)
namespace lift_00401940 {
// @name Dispatch::ForwardToField4
// @class Dispatch
// @summary If the pointer at this+0x04 is non-null, forward the call (this, arg) to it and return its result; otherwise return 0. Thiscall with one 4-byte stack arg (callee pops, ret 4).
// @field Unknown +0x04 void* field_0x04

// Portable form of the original tail-jump: the target is invoked as a
// thiscall taking the object pointer and the forwarded argument.
// Returns the target's result, or 0 when the pointer is null.
// Not a true tail call (no frame reuse); the returned value is preserved.
DWORD fn_00401940(void* self, DWORD arg) {
    using target_fn = DWORD(__thiscall*)(void* self, DWORD arg);
    void* target = lift_field<void*>(self, 0x04);
    if (target == nullptr) {
        return 0;
    }
    return reinterpret_cast<target_fn>(target)(self, arg);
}
} // namespace lift_00401940

// [0x00401960] sub_00401960 (14 bytes)
namespace lift_00401960 {
// @name ForwardToHandlerOrZero
// @summary If this->field_0x0c is non-null, tail-forward to it (passing the stack arg and returning its result); otherwise return 0.
// @field ForwardToHandlerOrZero +0x0c void* field_0x0c
//
// Original: thiscall-style (this in ecx) with one stack argument, `ret 4`.
// The tail `jmp eax` is modelled as a direct call whose result is returned;
// portable C++ cannot reproduce the stack-frame reuse of the jump itself.
// Note: `xor al, al` only clears the low byte, so the upper bits of eax are
// not guaranteed zero on the fallback path; the return type is 32-bit to match eax.
using HandlerFn = uint32_t (*)(void* self, uint32_t arg);

uint32_t fn_00401960(void* self, uint32_t arg) {
    void* handler = lift_field<void*>(self, 0x0c);
    if (handler != nullptr) {
        return reinterpret_cast<HandlerFn>(handler)(self, arg);
    }
    return 0;
}
} // namespace lift_00401960

// [0x00401950] sub_00401950 (14 bytes)
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

extern DWORD __thiscall fn_00401950(void* self, DWORD arg) {
    const auto target = *reinterpret_cast<Fn_00401950_Callback*>(
        reinterpret_cast<unsigned char*>(self) + 0x08);
    if (target == nullptr) {
        return 0;
    }
    return target(self, arg);
}
} // namespace lift_00401950

// [0x00401920]
namespace lift_00401920 {
// IAT slot holding KERNEL32!FreeLibrary (import at VA 0x009241DC).
extern void* mem_009241DC;

// @name freeLibraryAtField1C
// @class Unknown
// @summary If the HMODULE stored at this+0x1C is non-null, calls FreeLibrary on it; otherwise does nothing.
// @field Unknown +0x1C HMODULE hModule

// Original is a member-style routine: `this` arrives in ecx and is the only input.
void sub_00401920(void* self) {
    HMODULE h = lift_field<HMODULE>(self, 0x1C);
    if (h != nullptr) {
        using FreeLibraryFn = BOOL (*)(HMODULE);
        auto freeLibrary = reinterpret_cast<FreeLibraryFn>(mem_009241DC);
        freeLibrary(h);
    }
}
} // namespace lift_00401920

// [0x0040BEE0] sub_0040BEE0 (20 bytes)
namespace lift_0040BEE0 {
extern int mem_00925694;
extern int32_t __stdcall ext_SendMessageA(uint32_t hWnd, uint32_t msg, uint32_t wParam, uint32_t lParam);

// @name Window::sendMessage_0x18B
// @class Window
// @summary Sends message 0x18B with zero wParam/lParam to the window handle stored in this->+0x20.
// @field Window +0x20 uint32_t hWnd
void fn_0040BEE0(void* self) {
    const uint32_t hWnd = lift_field<uint32_t>(self, 0x20);
    ext_SendMessageA(hWnd, 0x18B, 0, 0);
}
} // namespace lift_0040BEE0

// [0x00401CC0]
namespace lift_00401CC0 {
// @name FwdChildVfunc_78
// @summary If the sub-object at +0x04 is non-null, invokes its vtable slot at +0x78 with the sub-object as this and the original object as one stack argument; otherwise returns.
void fn_00401CC0(void* self) {
    // child = self->field_0x04 (32-bit pointer)
    uint32_t child = lift_field<uint32_t>(self, 4);
    if (child == 0) {
        return;
    }

    // vtbl = *(void**)child ; slot = vtbl[+0x78]
    void* childPtr = reinterpret_cast<void*>(static_cast<uintptr_t>(child));
    uint32_t vtbl = lift_field<uint32_t>(childPtr, 0);
    void* vtblPtr = reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl));
    uint32_t slot = lift_field<uint32_t>(vtblPtr, 0x78);

    // Callee is thiscall-style: this = child, one stack argument = original self
    // (the original pushes ecx before the call; the callee pops it with ret 4).
    using VFn = void (*)(void* thisp, void* arg);
    VFn fn = reinterpret_cast<VFn>(static_cast<uintptr_t>(slot));
    fn(childPtr, self);
}
} // namespace lift_00401CC0

// [0x0040F290] sub_0040F290 (23 bytes)
namespace lift_0040F290 {
// @name Unknown::ResetFieldsAndSetVtable
// @class Unknown
// @summary Installs the vtable pointer (0x0092B954) at offset 0 and zeroes the four dword fields at +0x04, +0x08, +0x0C, +0x10.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
void fn_0040F290(void* self) {
    // Original game VA of the vtable that is written into the object header.
    constexpr uint32_t kVtable = 0x0092B954u;

    lift_field<uint32_t>(self, 0x00) = kVtable;
    lift_field<uint32_t>(self, 0x04) = 0u;
    lift_field<uint32_t>(self, 0x10) = 0u;
    lift_field<uint32_t>(self, 0x0C) = 0u;
    lift_field<uint32_t>(self, 0x08) = 0u;
}
} // namespace lift_0040F290

// [0x0040B880]
namespace lift_0040B880 {
// @name callChildSlot148NonZero
// @summary Calls the function pointer stored at child+0x148 (child = self+0x428), passing &self->child as this; returns true if it yields nonzero.
// @field Unknown +0x428 void* field_0x428
bool fn_0040B880(void* self) {
    void* child = lift_field<void*>(self, 0x428);
    auto fn = lift_field<int32_t (*)(void*)>(child, 0x148);
    void* thisArg = static_cast<uint8_t*>(self) + 0x428;
    return fn(thisArg) != 0;
}
} // namespace lift_0040B880

// [0x0040B860] sub_0040B860 (26 bytes)
namespace lift_0040B860 {
// @name sub_0040B860
// @summary Auto-lifted identical-shape clone of 0x0040B880 (callChildSlot148NonZero).
namespace lift_0040B880 {
// @name callChildSlot148NonZero
// @summary Calls the function pointer stored at child+0x148 (child = self+0x428), passing &self->child as this; returns true if it yields nonzero.
// @field Unknown +0x428 void* field_0x428
bool fn_0040B860(void* self) {
    void* child = lift_field<void*>(self, 0x3B4);
    auto fn = lift_field<int32_t (*)(void*)>(child, 0x148);
    void* thisArg = static_cast<uint8_t*>(self) + 0x3B4;
    return fn(thisArg) != 0;
}
} // namespace lift_0040B880
} // namespace lift_0040B860

// [0x00401EF0]
namespace lift_00401EF0 {
// @name ExceptionCopyCtor
// @class Exception
// @summary Copy-constructs a std::exception subclass and sets its vtable pointer.
// @field Exception +0x00 uint32_t vftable

extern void* mem_009251C8;

using StdExceptionCopyCtor = void(__thiscall*)(void* self, const void* other);

void* __thiscall sub_00401EF0(void* self, const void* other) {
    reinterpret_cast<StdExceptionCopyCtor>(mem_009251C8)(self, other);
    *reinterpret_cast<uint32_t*>(self) = 0x00928EC0u;
    return self;
}
} // namespace lift_00401EF0

// [0x00401AF0] sub_00401AF0 (27 bytes)
namespace lift_00401AF0 {
// @name FindPredecessorOfFlagged
// @summary Walks the first-word link chain from arg and returns the node just before the first node whose byte at +0x15 is nonzero (returns arg if arg->next is already flagged).
// @field Node +0x00 void* field_0x00
// @field Node +0x15 uint8_t field_0x15
void* fn_00401AF0(void* arg) {
    void* prev = arg;
    void* cur = lift_field<void*>(arg, 0x00);
    while (lift_field<uint8_t>(cur, 0x15) == 0) {
        prev = cur;
        cur = lift_field<void*>(cur, 0x00);
    }
    return prev;
}
} // namespace lift_00401AF0

// [0x00404700]
namespace lift_00404700 {
// @name setValueAndInvalidate
// @summary Sets field_0x58 and invalidates the associated window if non-null.
// @field Window +0x20 uint32_t hwnd
// @field Window +0x58 uint32_t field_0x58


extern uint32_t mem_00925688; // USER32!InvalidateRect

using InvalidateRect_t = int32_t (__stdcall *)(uint32_t hWnd, uint32_t lpRect, int32_t bErase);

void __thiscall sub_00404700(void* self, uint32_t value) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(obj + 0x58) = value;
    uint32_t hwnd = *reinterpret_cast<uint32_t*>(obj + 0x20);
    if (hwnd != 0) {
        reinterpret_cast<InvalidateRect_t>(mem_00925688)(hwnd, 0, 1);
    }
}
} // namespace lift_00404700
