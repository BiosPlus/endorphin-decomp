// Lifted C++ translation unit: lifted/leaf/tiny_420000.cpp
#include "lift_compat.h"
extern "C" int mem_0092E4B8;
extern "C" int mem_0092EA38;
extern "C" int mem_0092ECB8;
extern "C" uintptr_t mem_00924FF4;
extern "C" int mem_0092E8F4;
extern "C" void __fastcall ext_006A5DFA(void* self);

extern "C" void __fastcall ext_006A5DFA(void* self);
// @name sub_00421AB0
// @summary Returns the address of the global constant mem_0092E4B8 (initialised to 0x006A5FCE).
extern "C" int* fn_00421AB0() {
    return &mem_0092E4B8;
}
extern "C" void __fastcall ext_00584A10(void* self);
#include <new>
#include <string>

#include <string>
// @name sub_00422C60
// @summary Returns the address of the global constant mem_0092EA38 (string "$aj").
extern "C" int* fn_00422C60() {
    return &mem_0092EA38;
}
#include <cstdint>

// [0x00425D80] sub_00425D80 (6 bytes)
// @name sub_00425D80
// @summary Returns the address of the global constant mem_0092ECB8 (initialised to 0x006A5FCE).
extern "C" int* fn_00425D80() {
    return &mem_0092ECB8;
}

// [0x00421C00] sub_00421C00 (9 bytes)
// @name sub_00421C00
// @summary This-adjustor thunk: adjusts `this` by +0x4 and forwards through mem_00924FF4.
extern "C" void __fastcall fn_00421C00(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FF4);
    target(static_cast<char*>(self) + 0x4);
}

// [0x004225D0] sub_004225D0 (11 bytes)
// @name sub_004225D0
// @summary Destructor tail-call: restores vtable mem_0092E8F4 and tail-calls base destructor thunk_MFC80_ord_587.
extern "C" void __fastcall fn_004225D0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092E8F4;
    ext_006A5DFA(self);
}

// [0x0042F750] sub_0042F750 (8 bytes)
// @name sub_0042F750
// @summary This-adjustor thunk: adjusts `this` by +0x4 and tail-calls sub_00584A10.
extern "C" void __fastcall fn_0042F750(void* self) {
    ext_00584A10(static_cast<char*>(self) + 0x4);
}

// [0x00422CE0]
namespace lift_00422CE0 {
// @name SetFieldAndOffsetField78
// @class Unknown
// @summary Stores the argument at this+0x74 and stores argument + 0x5C at this+0x78 (__thiscall, ret 4).
// @field Unknown +0x74 DWORD field_0x74
// @field Unknown +0x78 DWORD field_0x78
void fn_00422CE0(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x74) = value;
    lift_field<DWORD>(self, 0x78) = value + 0x5C;
}
} // namespace lift_00422CE0

// [0x0042FC20] sub_0042FC20 (16 bytes)
namespace lift_0042FC20 {
// @name sub_0042FC20
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_0044B5E0(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_0042FC20(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x100);
    if (sub != 0) {
        ext_0044B5E0(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_0042FC20

// [0x0042FEC0] sub_0042FEC0 (16 bytes)
namespace lift_0042FEC0 {
// @name sub_0042FEC0
// @summary Auto-lifted identical-shape clone of 0x005B72E0 (Unknown::ForwardToSubobject158).
namespace lift_005B72E0 {
extern void ext_0044B6B0(void* self);

// @name Unknown::ForwardToSubobject158
// @class Unknown
// @summary Loads the DWORD at +0x158; if non-zero, tail-forwards to ext_005CE9B0 with it as self.
// @field Unknown +0x158 DWORD field_0x158
void fn_0042FEC0(void* self) {
    DWORD sub = *reinterpret_cast<DWORD*>(static_cast<unsigned char*>(self) + 0x100);
    if (sub != 0) {
        ext_0044B6B0(reinterpret_cast<void*>(static_cast<uintptr_t>(sub)));
    }
}
} // namespace lift_005B72E0
} // namespace lift_0042FEC0

// [0x0042FAA0] sub_0042FAA0 (17 bytes)
namespace lift_0042FAA0 {
// @name Unknown::toggleFlagF5
// @class Unknown
// @summary Logically negates the byte flag at this+0xF5 in place (sets it to 1 if it was 0, otherwise 0).
// @field Unknown +0xF5 uint8_t field_0xF5
void fn_0042FAA0(void* self) {
    uint8_t& flag = lift_field<uint8_t>(self, 0xF5);
    flag = static_cast<uint8_t>(flag == 0);
}
} // namespace lift_0042FAA0

// [0x00426960] sub_00426960 (18 bytes)
namespace lift_00426960 {
extern int mem_00928B5D;

// @name std::string::basic_string(const char*) [empty-literal ctor]
// @class std::string
// @summary Constructs *self as std::string from the empty C literal at mem_00928B5D and returns self.
std::string* fn_00426960(std::string* self) {
    new (self) std::string(reinterpret_cast<const char*>(&mem_00928B5D));
    return self;  // original: mov eax, esi
}
} // namespace lift_00426960

// [0x0042EA50] sub_0042EA50 (21 bytes)
namespace lift_0042EA50 {
extern int ext_ReleaseDC(HWND hWnd, HDC hDC);

// @name Unknown::ReleaseDCFromArg
// @class Unknown
// @summary Releases the device context stored at this+0x20 using the window handle stored at arg+4; returns ReleaseDC's result.
// @field Unknown +0x20 HDC hdc
// @field arg +0x04 HWND hwnd
int fn_0042EA50(void* self, void* arg) {
    HWND hwnd = lift_field<HWND>(arg, 4);
    HDC hdc = lift_field<HDC>(self, 0x20);
    return ext_ReleaseDC(hwnd, hdc);
}
} // namespace lift_0042EA50

// [0x004271F0] sub_004271F0 (23 bytes)
namespace lift_004271F0 {
extern const char* mem_00ACD9E0;

// std::operator!=(const std::basic_string<char>&, const char*) from MSVCP80.
extern bool __cdecl ext_operator_ne_string_cstr(const void* lhs, const char* rhs);

// @name IsArgStringNotEqualToGlobalName
// @summary Stdcall (callee pops 4): compares the std::string passed on the stack against the global C-string at mem_00ACD9E0 via operator!=, returning the bool result.
extern bool __stdcall fn_004271F0(const void* str) {
    return ext_operator_ne_string_cstr(str, mem_00ACD9E0);
}
} // namespace lift_004271F0

// [0x00420590] sub_00420590 (27 bytes)
namespace lift_00420590 {
// @name sub_00420590
// @summary Auto-lifted identical-shape clone of 0x00401AF0 (FindPredecessorOfFlagged).
namespace lift_00401AF0 {
// @name FindPredecessorOfFlagged
// @summary Walks the first-word link chain from arg and returns the node just before the first node whose byte at +0x15 is nonzero (returns arg if arg->next is already flagged).
// @field Node +0x00 void* field_0x00
// @field Node +0x15 uint8_t field_0x15
void* fn_00420590(void* arg) {
    void* prev = arg;
    void* cur = lift_field<void*>(arg, 0x00);
    while (lift_field<uint8_t>(cur, 0x59) == 0) {
        prev = cur;
        cur = lift_field<void*>(cur, 0x00);
    }
    return prev;
}
} // namespace lift_00401AF0
} // namespace lift_00420590

// [0x00422E00]
namespace lift_00422E00 {
extern uint32_t mem_00925694;

// @name TreeCtrl::sendExpandMessage
// @class TreeCtrl
// @summary Sends a TVM_EXPAND (0x1102) message to the window handle at this+0x20.
// @field TreeCtrl +0x20 uint32_t hWnd
int32_t __thiscall sub_00422E00(void* self, uint32_t lParam, uint32_t wParam) {
    uint32_t hWnd = *reinterpret_cast<const uint32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x20);
    using SendMessageAFn = int32_t(__stdcall*)(uint32_t hWnd, uint32_t Msg, uint32_t wParam, uint32_t lParam);
    auto fn = reinterpret_cast<SendMessageAFn>(static_cast<uintptr_t>(mem_00925694));
    return fn(hWnd, 0x1102u, wParam, lParam);
}
} // namespace lift_00422E00

// [0x00427370]
namespace lift_00427370 {
uint8_t mem_read8(uintptr_t addr);
uint32_t mem_read32(uintptr_t addr);

// @name findLastBeforeFlaggedChild
// @summary Walks +0x08 pointers until the next node has a non-zero byte at +0x59, returning the preceding node.
// @field Node +0x08 uintptr_t field_0x08
// @field Node +0x59 uint8_t field_0x59
uintptr_t sub_00427370(uintptr_t node) {
    uintptr_t cur = node;
    uintptr_t next = mem_read32(cur + 0x08);
    while (mem_read8(next + 0x59) == 0) {
        cur = next;
        next = mem_read32(cur + 0x08);
    }
    return cur;
}
} // namespace lift_00427370
