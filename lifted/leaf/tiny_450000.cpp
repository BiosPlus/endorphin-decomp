// Lifted C++ translation unit: lifted/leaf/tiny_450000.cpp
#include "lift_compat.h"
extern "C" int mem_00935E44;
extern "C" int mem_00935E98;
extern "C" int mem_00936C08;
extern "C" int mem_0093652C;
extern "C" void __fastcall ext_00455EB0(void* self);

extern "C" void __fastcall ext_00455EB0(void* self);
// @name sub_004543E0
// @summary Returns the address of the read-only constant mem_00935E44 (initialised to 0x006A5FCE).
extern "C" const int* fn_004543E0() {
    return &mem_00935E44;
}
extern "C" int mem_00936CA0;
extern "C" int mem_00936F50;
extern "C" int mem_0093712C;
extern "C" void __fastcall ext_00454BA0(void* self);

extern "C" void __fastcall ext_00454BA0(void* self);
// @name GetConstantAddress_00935E98
// @summary Returns the address of the constant global mem_00935E98 (0x00935E98) in eax.
extern "C" void* fn_00454510() {
    return &mem_00935E98;
}
extern "C" int mem_00937394;
extern "C" void __fastcall ext_004584B0(void* self);
extern "C" int mem_009375C8;
extern "C" int mem_00937924;
extern "C" void __fastcall ext_0043BBD0(void* self);

extern "C" void __fastcall ext_0043BBD0(void* self);
// @name sub_00455BD0
// @summary Returns the address of the read-only constant mem_00936C08 (initialised to 0x006A5FCE).
extern "C" const int* fn_00455BD0() {
    return &mem_00936C08;
}
extern "C" int mem_00937934;
extern "C" void __fastcall ext_004406C0(void* self);

extern "C" void __fastcall ext_004406C0(void* self);
// @name sub_00454BA0
// @summary Destructor tail-call: restores vtable mem_0093652C and tail-calls base destructor sub_00455EB0.
extern "C" void __fastcall fn_00454BA0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093652C;
    ext_00455EB0(self);
}
extern "C" int mem_0093794C;
extern "C" int mem_00937BEC;
extern "C" int mem_00937D4C;
extern "C" void __fastcall ext_006A681A(void* self);

extern "C" void __fastcall ext_006A681A(void* self);
// @name sub_00455450
// @summary Virtual dispatch thunk: forwards to vtable slot at +0x164.
extern "C" void __fastcall fn_00455450(void* self) {
    typedef void (__fastcall* VFunc)(void*);
    void* vtable = lift_field<void*>(self, 0x0);
    VFunc target = lift_field<VFunc>(vtable, 0x164);
    target(self);
}
extern "C" int mem_00937E88;
extern "C" int mem_00937FC8;
extern "C" void __fastcall ext_0045E700(void* self);
extern "C" void __fastcall ext_0045E690(void* self);
#include <cstdint>
#include <string>

// [0x00455BE0] sub_00455BE0 (6 bytes)
// @name sub_00455BE0
// @summary Returns address of global mem_00936CA0.
extern "C" void* __cdecl fn_00455BE0(void) {
    return &mem_00936CA0;
}

// [0x00457F50] sub_00457F50 (6 bytes)
// @name sub_00457F50
// @summary Returns address of global mem_00936F50.
extern "C" void* __cdecl fn_00457F50(void) {
    return &mem_00936F50;
}

// [0x00458200] sub_00458200 (11 bytes)
// @name sub_00458200
// @summary Destructor tail-call: restores vtable mem_0093712C and tail-calls base destructor sub_00454BA0.
extern "C" void __fastcall fn_00458200(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093712C;
    ext_00454BA0(self);
}

// [0x004584E0] sub_004584E0 (7 bytes)
// @name sub_004584E0
// @summary Stores address of mem_00937394 into field at offset +0x0.
extern "C" void __fastcall fn_004584E0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00937394;
}

// [0x00458690] sub_00458690 (8 bytes)
// @name sub_00458690
// @summary Member forwarding thunk: loads subobject pointer at +0x54 and tail-calls sub_004584B0.
extern "C" void __fastcall fn_00458690(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x54);
    ext_004584B0(delegate_obj);
}

// [0x004589E0] sub_004589E0 (6 bytes)
// @name sub_004589E0
// @summary Returns address of global mem_009375C8.
extern "C" void* __cdecl fn_004589E0(void) {
    return &mem_009375C8;
}

// [0x00459250] sub_00459250 (11 bytes)
// @name sub_00459250
// @summary Destructor tail-call: restores vtable mem_00937924 and tail-calls base destructor sub_0043BBD0.
extern "C" void __fastcall fn_00459250(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00937924;
    ext_0043BBD0(self);
}

// [0x004592F0] sub_004592F0 (11 bytes)
// @name sub_004592F0
// @summary Destructor tail-call: restores vtable mem_00937934 and tail-calls base destructor sub_004406C0.
extern "C" void __fastcall fn_004592F0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00937934;
    ext_004406C0(self);
}

// [0x004593A0] sub_004593A0 (11 bytes)
// @name sub_004593A0
// @summary Destructor tail-call: restores vtable mem_0093794C and tail-calls base destructor sub_004406C0.
extern "C" void __fastcall fn_004593A0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0093794C;
    ext_004406C0(self);
}

// [0x0045B670] sub_0045B670 (6 bytes)
// @name sub_0045B670
// @summary Returns address of global mem_00937BEC.
extern "C" void* __cdecl fn_0045B670(void) {
    return &mem_00937BEC;
}

// [0x0045B6B0] sub_0045B6B0 (11 bytes)
// @name sub_0045B6B0
// @summary Destructor tail-call: restores vtable mem_00937D4C and tail-calls base destructor thunk_MFC80_ord_754.
extern "C" void __fastcall fn_0045B6B0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00937D4C;
    ext_006A681A(self);
}

// [0x0045C2C0] sub_0045C2C0 (6 bytes)
// @name sub_0045C2C0
// @summary Returns address of global mem_00937E88.
extern "C" void* __cdecl fn_0045C2C0(void) {
    return &mem_00937E88;
}

// [0x0045E4B0] sub_0045E4B0 (6 bytes)
// @name sub_0045E4B0
// @summary Returns address of global mem_00937FC8.
extern "C" void* __cdecl fn_0045E4B0(void) {
    return &mem_00937FC8;
}

// [0x0045E920] sub_0045E920 (11 bytes)
// @name sub_0045E920
// @summary This-adjustor thunk: adjusts `this` by +0x258 and tail-calls sub_0045E700.
extern "C" void __fastcall fn_0045E920(void* self) {
    ext_0045E700(static_cast<char*>(self) + 0x258);
}

// [0x0045E930] sub_0045E930 (11 bytes)
// @name sub_0045E930
// @summary This-adjustor thunk: adjusts `this` by +0x258 and tail-calls sub_0045E690.
extern "C" void __fastcall fn_0045E930(void* self) {
    ext_0045E690(static_cast<char*>(self) + 0x258);
}

// [0x00455BB0] sub_00455BB0 (22 bytes)
namespace lift_00455BB0 {
extern void ext_00455B50();

// @name sub_00455BB0
// @summary Auto-lifted identical-shape clone of 0x004554C0 (MultiTrackView::Frame::vfunc_106).
void fn_00455BB0(void* self) {
    // The original tail-jumps (jmp) to ext_006A60D0; the portable form is a plain call followed by return.
    // Pointers are modeled as 32-bit handles (the target is a 32-bit binary).
    auto* base = static_cast<uint8_t*>(self);
    const uint32_t target = *reinterpret_cast<uint32_t*>(base + 0x144);
    if (target == 0) {
        return;
    }
    // Inner object field at +0x20 (type unknown; field_0x20 by convention).
    auto* obj = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(target));
    if (*reinterpret_cast<uint32_t*>(obj + 0x20) != 0) {
        ext_00455B50();
    }
}
} // namespace lift_00455BB0

// [0x00454E70] sub_00454E70 (13 bytes)
namespace lift_00454E70 {
// @name ZeroThreeDwordFields_00454E70
// @summary Zeroes the dwords at self+0x0, self+0x4 and self+0x10 and returns self (thiscall, self in ECX).
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x10 uint32_t field_0x10
void* fn_00454E70(void* self) {
    lift_field<uint32_t>(self, 0x04) = 0;
    lift_field<uint32_t>(self, 0x00) = 0;
    lift_field<uint32_t>(self, 0x10) = 0;
    return self;
}
} // namespace lift_00454E70

// [0x004586C0] sub_004586C0 (18 bytes)
namespace lift_004586C0 {
// IAT slot holding the address of USER32!KillTimer (.rdata 0x00925660).
extern uint32_t mem_00925660;

// @name KillOwnerTimerWithId
// @class Unknown
// @summary Kills the timer identified by the argument, owned by the window handle at self+0x20.
// @field Unknown +0x20 HWND field_0x20
BOOL fn_004586C0(void* self, UINT_PTR timerId) {
    HWND hwnd = lift_field<HWND>(self, 0x20);

    using KillTimerFn = BOOL(__stdcall*)(HWND, UINT_PTR);
    auto killTimer = reinterpret_cast<KillTimerFn>(static_cast<uintptr_t>(mem_00925660));
    return killTimer(hwnd, timerId);
}
} // namespace lift_004586C0

// [0x00458FE0] sub_00458FE0 (18 bytes)
namespace lift_00458FE0 {
// Known callee 0x00458E10: SendMessageToFieldWindow (Sends the global message id to the window handle stored in self+0x1c, passing self as lParam and 0 as wParam; returns the LRESULT.)
extern int32_t __fastcall ext_00458E10(void* self);
extern int mem_0093785C;

// @name Unknown::SetVtableAndSendIfWindow
// @class Unknown
// @summary Sets the vtable to mem_0093785C; if the window handle at +0x1c is non-null, tail-calls SendMessageToFieldWindow, otherwise returns.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x1c void* hwnd
extern int32_t __fastcall fn_00458FE0(void* self) {
    // cmp [self+0x1c], 0 ; mov [self], vtable ; je .ret ; jmp ext_00458E10
    // Note: the original leaves eax untouched on the early-return path; 0 is returned here as the closest portable equivalent.
    void* hwnd = lift_field<void*>(self, 0x1c);
    lift_field<void*>(self, 0x0) = &mem_0093785C;
    if (hwnd == nullptr) {
        return 0;
    }
    return ext_00458E10(self);
}
} // namespace lift_00458FE0

// [0x00458DF0] sub_00458DF0 (26 bytes)
namespace lift_00458DF0 {
extern int mem_009255BC;
extern int mem_0093785C;

// @name descriptiveName: initObjectWithVtableAndZeroedTail
// @summary Stores a vtable pointer at +0x00, a global value at +0x14, and zeroes +0x18 and +0x1c.
// @field field_0x00 uint32_t vtable pointer (0x0093785C)
// @field field_0x14 uint32_t copied from mem_009255BC
// @field field_0x18 uint32_t zeroed
// @field field_0x1c uint32_t zeroed
void fn_00458DF0(void* self) {
    lift_field<uint32_t>(self, 0x14) = static_cast<uint32_t>(mem_009255BC);
    lift_field<uint32_t>(self, 0x00) = 0x0093785Cu;
    lift_field<uint32_t>(self, 0x18) = 0u;
    lift_field<uint32_t>(self, 0x1c) = 0u;
}
} // namespace lift_00458DF0

// [0x00455240] sub_00455240 (27 bytes)
namespace lift_00455240 {
// IAT slot holding MSVCP80 std::basic_string<char>::copy(char*, size_type, size_type).
extern uint32_t mem_00925104;

// @name CopyStringPrefixReturnZero
// @summary Calls std::string::copy(dst, count, 0) on the string object and returns 0.
using StringCopyFn = uint32_t(__thiscall*)(void* self, char* dst, uint32_t count, uint32_t pos);

uint32_t __stdcall fn_00455240(void* self, char* dst, uint32_t count, uint32_t unused) {
    (void)unused;
    auto copy = reinterpret_cast<StringCopyFn>(static_cast<uintptr_t>(mem_00925104));
    (void)copy(self, dst, count, 0u);
    return 0;
}
} // namespace lift_00455240

// [0x00455CB0] sub_00455CB0 (29 bytes)
namespace lift_00455CB0 {
// @name sub_00455CB0
// @summary Auto-lifted identical-shape clone of 0x004090C0 (sub_004090C0).
namespace lift_004090C0 {
// @name sub_004090C0
// @class (none)
// @summary Returns 1 if the int at self+0xF4 equals 0xE81C or 0xE81D, otherwise 0.
// @field Unknown +0xF4 int field_0xF4
extern int __fastcall fn_00455CB0(void* self) {
    const int v = lift_field<int>(self, 0xF4);
    if (v == 0xE81B || v == 0xE81E) {
        return 1;
    }
    return 0;
}
} // namespace lift_004090C0
} // namespace lift_00455CB0

// [0x004584A0] sub_004584A0 (10 bytes)
namespace lift_004584A0 {
// @name sub_004584A0
// @summary Auto-lifted identical-shape clone of 0x005455F0 (PoseTool::vfunc_28).
namespace lift_005455F0 {
// @name PoseTool::vfunc_28
// @class PoseTool
// @summary Forwards the call to virtual slot +0x70 of the object held at PoseTool +0xA0, returning its result.
// @field PoseTool +0xA0 void* field_0xA0
void* fn_004584A0(void* self) {
    // mov ecx, [self+0xA0]; mov eax, [ecx]; mov eax, [eax+0x70]; jmp eax
    // Tail-call: the callee's return value (eax) is passed straight through.
    void* obj = lift_field<void*>(self, 0x10);
    void* vtbl = lift_field<void*>(obj, 0);
    using VFn = void* (*)(void* self);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0x14));
    return target(obj);
}
} // namespace lift_005455F0
} // namespace lift_004584A0

// [0x004584B0] sub_004584B0 (10 bytes)
namespace lift_004584B0 {
// @name sub_004584B0
// @summary Auto-lifted identical-shape clone of 0x005455F0 (PoseTool::vfunc_28).
namespace lift_005455F0 {
// @name PoseTool::vfunc_28
// @class PoseTool
// @summary Forwards the call to virtual slot +0x70 of the object held at PoseTool +0xA0, returning its result.
// @field PoseTool +0xA0 void* field_0xA0
void* fn_004584B0(void* self) {
    // mov ecx, [self+0xA0]; mov eax, [ecx]; mov eax, [eax+0x70]; jmp eax
    // Tail-call: the callee's return value (eax) is passed straight through.
    void* obj = lift_field<void*>(self, 0x10);
    void* vtbl = lift_field<void*>(obj, 0);
    using VFn = void* (*)(void* self);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0xC));
    return target(obj);
}
} // namespace lift_005455F0
} // namespace lift_004584B0

// [0x0045BBE0] sub_0045BBE0 (15 bytes)
namespace lift_0045BBE0 {
// USER32!GetKeyState, imported through the IAT slot at 0x009255F4.
extern uint32_t mem_009255F4;

// @name IsControlKeyDown
// @summary Returns 1 if the Ctrl key (VK_CONTROL, 0x11) is currently held down, else 0.
int fn_0045BBE0(void) {
    using GetKeyStateFn = int16_t(__stdcall*)(int);
    auto get_key_state = reinterpret_cast<GetKeyStateFn>(static_cast<uintptr_t>(mem_009255F4));
    const uint16_t state = static_cast<uint16_t>(get_key_state(0x11));
    return static_cast<int>(state >> 15);
}
} // namespace lift_0045BBE0

// [0x00458E10] sub_00458E10 (21 bytes)
namespace lift_00458E10 {
extern DWORD mem_00AD3E2C;
// IAT slot for USER32!SendMessageA
extern LRESULT(__stdcall* mem_00925694)(HWND, UINT, WPARAM, LPARAM);

// @name Unknown::sendMessageToWindow
// @class Unknown
// @summary Sends the global message id mem_00AD3E2C to the window handle stored at +0x1C, passing self as lParam and 0 as wParam.
// @field Unknown +0x1C HWND field_0x1C
void __thiscall fn_00458E10(void* self) {
    HWND hwnd = lift_field<HWND>(self, 0x1C);
    UINT msg = static_cast<UINT>(mem_00AD3E2C);
    mem_00925694(hwnd, msg, 0, reinterpret_cast<LPARAM>(self));
}
} // namespace lift_00458E10
