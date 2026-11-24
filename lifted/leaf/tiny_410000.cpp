// Lifted C++ translation unit: lifted/leaf/tiny_410000.cpp
#include "lift_compat.h"
extern "C" int mem_0092BD10;
extern "C" int mem_0092C6E8;
extern "C" DWORD mem_0092D020;
extern "C" int mem_0092D778;
extern "C" int mem_0092DA8C;
extern "C" int mem_0092BD7C;
extern "C" void __fastcall ext_006A6166(void* self);

extern "C" void __fastcall ext_006A6166(void* self);
// @name GetStringConstant_00410350
// @summary Returns the address of the read-only string constant "$aj".
extern "C" const char* __cdecl fn_00410350() {
    return reinterpret_cast<const char*>(&mem_0092BD10);
}
extern "C" uintptr_t mem_009244D4;
extern "C" void __fastcall ext_00406940(void* self);
extern "C" int mem_0092C5AC;
extern "C" void __fastcall ext_006A5F38(void* self);

extern "C" void __fastcall ext_006A5F38(void* self);
// @name sub_00414240
// @summary Returns the address of the constant string "`KE" stored in .rdata (mem_0092C418).
extern "C" const char* __cdecl fn_00414240() {
    return reinterpret_cast<const char*>(0x0092C418);
}
extern "C" int mem_0092C764;
extern "C" void __fastcall ext_00404650(void* self);

extern "C" void __fastcall ext_00404650(void* self);
// @name sub_00415580
// @summary Returns the address of the read-only string constant "$aj" stored in .rdata (mem_0092C6E8).
extern "C" const char* __cdecl fn_00415580() {
    return reinterpret_cast<const char*>(&mem_0092C6E8);
}
extern "C" int mem_0092DB1C;
#include <cstring>
#include <cstdint>

#include <cstdint>
#include "lift_compat.h"

// @name GetStringConstant_00416B60
// @summary Returns the address of the static string constant ",bj" (mem_0092CAEC).
extern "C" const char* __cdecl fn_00416B60() {
    return ",bj";
}

// [0x00417300] Returns a pointer to the constant string ",bj" in .rdata.
#include "lift_compat.h"

// @name GetStringConstant_00417300
// @summary Returns the address of the constant string ",bj" (mem_0092CD54).
extern "C" const char* fn_00417300() {
    return reinterpret_cast<const char*>(0x0092CD54);
}

// [0x00419700] sub_00419700 (6 bytes)
// @name sub_00419700
// @summary Returns the address of the read-only global mem_0092D020 (initialised to 0x006A5FCE); leaf getter with no side effects.
extern "C" const DWORD* fn_00419700(void) {
    return &mem_0092D020;
}

// [0x0041B580] sub_0041B580 (6 bytes)
// @name sub_0041B580
// @summary Returns the address of the read-only string constant ".cj" stored in .rdata (mem_0092D778).
extern "C" const char* __cdecl fn_0041B580() {
    return reinterpret_cast<const char*>(&mem_0092D778);
}

// [0x0041BFA0] sub_0041BFA0 (6 bytes)
// @name GetStringConstant_0041BFA0
// @summary Returns the address of the read-only string constant ",bj" stored in .rdata (mem_0092DA8C).
extern "C" const char* __cdecl fn_0041BFA0() {
    return reinterpret_cast<const char*>(&mem_0092DA8C);
}

// [0x00410510] sub_00410510 (11 bytes)
// @name sub_00410510
// @summary Destructor tail-call: restores vtable mem_0092BD7C and tail-calls base destructor thunk_MFC80_ord_1955.
extern "C" void __fastcall fn_00410510(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092BD7C;
    ext_006A6166(self);
}

// [0x00412C10] sub_00412C10 (9 bytes)
// @name sub_00412C10
// @summary This-adjustor thunk: adjusts `this` by +0x1C and forwards through mem_009244D4.
extern "C" void __fastcall fn_00412C10(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_009244D4);
    target(static_cast<char*>(self) + 0x1C);
}

// [0x00413700] sub_00413700 (8 bytes)
// @name sub_00413700
// @summary This-adjustor thunk: adjusts `this` by +0x20 and tail-calls sub_00406940.
extern "C" void __fastcall fn_00413700(void* self) {
    ext_00406940(static_cast<char*>(self) + 0x20);
}

// [0x004153D0] sub_004153D0 (11 bytes)
// @name sub_004153D0
// @summary Destructor tail-call: restores vtable mem_0092C5AC and tail-calls base destructor thunk_MFC80_ord_620.
extern "C" void __fastcall fn_004153D0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092C5AC;
    ext_006A5F38(self);
}

// [0x00415EF0] sub_00415EF0 (11 bytes)
// @name sub_00415EF0
// @summary Destructor tail-call: restores vtable mem_0092C764 and tail-calls base destructor sub_00404650.
extern "C" void __fastcall fn_00415EF0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092C764;
    ext_00404650(self);
}

// [0x0041C790] sub_0041C790 (7 bytes)
// @name sub_0041C790
// @summary Stores address of mem_0092DB1C into field at offset +0x0.
extern "C" void __fastcall fn_0041C790(void* self) {
    lift_field<void*>(self, 0x0) = &mem_0092DB1C;
}

// [0x00410520] sub_00410520 (19 bytes)
// @name sub_00410520
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_00410520(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x18);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x1C);
    const int32_t diff = end - begin;
    return diff >> 2;
}

// [0x00412CC0] sub_00412CC0 (19 bytes)
// @name sub_00412CC0
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_00412CC0(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x8);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0xC);
    const int32_t diff = end - begin;
    return diff >> 2;
}

// [0x0041CD60] sub_0041CD60 (19 bytes)
// @name sub_0041CD60
// @summary Auto-lifted identical-shape clone of 0x0051BED0 (NMData::RealChannel::vfunc_9).
extern "C" int __thiscall fn_0041CD60(void* self) {
    const int32_t begin = lift_field<int32_t>(self, 0x4);
    if (begin == 0) {
        return 0;
    }
    const int32_t end = lift_field<int32_t>(self, 0x8);
    const int32_t diff = end - begin;
    return diff >> 2;
}

// [0x0041B3B0]
namespace lift_0041B3B0 {
// @name callGlobalThunk00430D40
// @summary Loads global pointer at 0x00ACDB40 into ECX and tail-calls 0x00430D40.


extern uint32_t mem_00ACDB40;
extern void ext_00430D40(void);

extern void fn_0041B3B0(void) {
    (void)mem_00ACDB40;
    ext_00430D40();
}
} // namespace lift_0041B3B0

// [0x0041603E] sub_0041603E (14 bytes)
namespace lift_0041603E {
// @name sub_0041603E
// @summary Auto-lifted identical-shape clone of 0x00404670 (CBaseTabCtrl::vfunc_85).
namespace lift_00404670 {
// USER32!GetSysColor, reached through the IAT slot at mem_00925680.
extern DWORD ext_GetSysColor(int nIndex);
extern int mem_00925680;

// @name CBaseTabCtrl::vfunc_85
// @class CBaseTabCtrl
// @summary Returns GetSysColor(COLOR_BTNFACE); the incoming stack argument is overwritten with 8 before tail-jumping to USER32!GetSysColor.
DWORD fn_0041603E(void* self) {
    (void)self;
    return ext_GetSysColor(15);
}
} // namespace lift_00404670
} // namespace lift_0041603E

// [0x00415FF6]
namespace lift_00415FF6 {
// Imported from USER32.dll (resolved through the IAT slot at mem_00925680).
extern DWORD ext_GetSysColor(int nIndex);

// @name GetSysColorBtnFace_TailThunk
// @summary Returns GetSysColor(COLOR_BTNFACE); the incoming stack argument is overwritten with 0xF before tail-jumping to USER32!GetSysColor.
// (No class fields are accessed.)
DWORD fn_00415FF6(void* self, int /*ignored stack arg, overwritten with 0xF*/) {
    (void)self;
    // pop esi; pop ebx; mov [esp+4], 0Fh; jmp GetSysColor  -> tail call with COLOR_BTNFACE (15)
    return ext_GetSysColor(15);
}
} // namespace lift_00415FF6

// [0x00417630] sub_00417630 (18 bytes)
namespace lift_00417630 {
// @name sub_00417630
// @summary Auto-lifted identical-shape clone of 0x00422CE0 (sub_00421AB0).
namespace lift_00422CE0 {
// @name SetFieldAndOffsetField78
// @class Unknown
// @summary Stores the argument at this+0x74 and stores argument + 0x5C at this+0x78 (__thiscall, ret 4).
// @field Unknown +0x74 DWORD field_0x74
// @field Unknown +0x78 DWORD field_0x78
void fn_00417630(void* self, DWORD value) {
    lift_field<DWORD>(self, 0x74) = value;
    lift_field<DWORD>(self, 0x78) = value + 0x16C;
}
} // namespace lift_00422CE0
} // namespace lift_00417630

// [0x0041CEE0] sub_0041CEE0 (18 bytes)
namespace lift_0041CEE0 {
extern int mem_00B599BC;

// @name initZeroAndCopyGlobalToSelf
// @summary Zeroes the first dword of self and stores the global mem_00B599BC into self+4.
// @field self +0x00 uint32_t field_0x00
// @field self +0x04 int32_t field_0x04
void fn_0041CEE0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0;
    lift_field<int32_t>(self, 0x04) = static_cast<int32_t>(mem_00B599BC);
}
} // namespace lift_0041CEE0

// [0x0041C750] sub_0041C750 (18 bytes)
namespace lift_0041C750 {
extern int mem_0092DB1C;

// @name sub_0041C750
// @class Unknown
// @summary Constructor-style init: stores vtable mem_0092DB1C at +0x0 and the single stack argument at +0x4.
// @field Unknown +0x00 void* vptr
// @field Unknown +0x04 uint32_t field_0x04
extern void __fastcall fn_0041C750(void* self, int edx_unused, uint32_t arg) {
    lift_field<void*>(self, 0x0) = &mem_0092DB1C;
    lift_field<uint32_t>(self, 0x4) = arg;
}
} // namespace lift_0041C750

// [0x0041C710] sub_0041C710 (19 bytes)
namespace lift_0041C710 {
// @name descriptiveName_0041C710 (delegateToChildVirtual19)
// @summary If the pointer at +0x08 is null return 0; otherwise tail-call virtual slot 19 (vtable +0x4C) of that child object and return its result.
// @field Unknown +0x08 void* child

namespace {
// Callee signature for the child's virtual slot; result is returned in the low byte.
using ChildVirtual19 = uint8_t (*)(void* self);
}

uint8_t fn_0041C710(void* self) {
    // cmp dword ptr [ecx+8], 0 / je -> return 0
    void* child = lift_field<void*>(self, 0x08);
    if (child == nullptr) {
        return 0;
    }

    // mov ecx, [ecx+8]; mov eax, [ecx]; mov edx, [eax+0x4c]; jmp edx
    // Vtable is read using the original 32-bit layout (slot at +0x4C).
    void* vtbl = lift_field<void*>(child, 0x00);
    const uintptr_t target = static_cast<uintptr_t>(lift_field<uint32_t>(vtbl, 0x4C));
    auto fn = reinterpret_cast<ChildVirtual19>(target);
    return fn(child);
}
} // namespace lift_0041C710

// [0x00419940] sub_00419940 (20 bytes)
namespace lift_00419940 {
// MFC80 import thunk slot (ordinal 297, IMAGE_ORDINAL_FLAG | 0x129).
extern uint32_t mem_00924494;
// MFC80 ordinal 297 import; its signature is not recovered, so it takes one
// DWORD argument and its return value is ignored.
extern void ext_MFC80_ord297(uint32_t arg);

// @name ThisPassthrough_CallMfc80Ord297
// @summary Forwards its single stack argument to MFC80 ordinal 297 and returns this unchanged.
void* fn_00419940(void* self, uint32_t arg) {
    ext_MFC80_ord297(arg);
    return self;
}
} // namespace lift_00419940

// [0x0041C380] sub_0041C380 (20 bytes)
namespace lift_0041C380 {
// @name JumpToEsiTrampoline
// @summary Trampoline: push esi; ret. Pops ESI as a return address, i.e. an indirect jump to the address held in ESI. The jump target is passed in as esi; the transfer itself cannot be expressed in portable C++ and is not performed here.
// @field none (no memory or object fields accessed)
void fn_0041C380(uintptr_t esi) {
    // Models only the stack effect of `push esi`; the subsequent `ret`
    // transfers control to `esi`, which portable C++ cannot express.
    (void)esi;
}
} // namespace lift_0041C380

// [0x0041C6B0] sub_0041C6B0 (21 bytes)
namespace lift_0041C6B0 {
// @name Dispatch::ForwardSlot14IfChild
// @summary If field +0x08 is non-null, tail-forward the call to its vtable slot 14 (+0x38) with the same args; otherwise return 0.
// @field Unknown +0x08 void* field_0x08

namespace {
// Callee signature for vtable slot 14 is unknown; assumed thiscall with three
// dword stack args (the original epilogue is `ret 0xc`, i.e. callee pops 12 bytes).
using ChildSlot14Fn = uint32_t (__thiscall*)(void* self, uint32_t a0, uint32_t a1, uint32_t a2);
}  // namespace

// Original: cmp [ecx+8],0 / je -> xor al,al; ret 0xc / mov ecx,[ecx+8]; jmp [[ecx]+0x38]
uint32_t fn_0041C6B0(void* self, uint32_t a0, uint32_t a1, uint32_t a2) {
    void* child = lift_field<void*>(self, 0x08);
    if (child == nullptr) {
        return 0;  // original clears only AL; upper EAX bits are not modeled
    }
    void** vtable = *reinterpret_cast<void***>(child);
    auto target = reinterpret_cast<ChildSlot14Fn>(vtable[0x38 / sizeof(void*)]);
    // Original is a tail jump; the return value of `target` becomes ours unchanged.
    return target(child, a0, a1, a2);
}
} // namespace lift_0041C6B0

// [0x0041C6D0] sub_0041C6D0 (21 bytes)
namespace lift_0041C6D0 {
// @name Unknown::ForwardVirtual44 (descriptive; owner class not yet identified)
// @summary Forwards the call to the object at self+0x08 via its vtable slot at +0x44; returns 0 if that object is null.
// @field Unknown +0x08 void* field_0x08
uint32_t fn_0041C6D0(void* self) {
    // Original is a tail jump (jmp eax) that reuses the caller's stack args,
    // with the stdcall-style "ret 4" epilogue on the null path. C++ cannot
    // express the tail jump directly, so the forwarded call is written as an
    // ordinary call returning the callee's result.
    void* child = lift_field<void*>(self, 0x08);
    if (child == nullptr) {
        return 0;  // xor al, al; ret 4
    }
    void* vtable = lift_field<void*>(child, 0);
    auto target = reinterpret_cast<uint32_t (*)(void*)>(lift_field<void*>(vtable, 0x44));
    return target(child);
}
} // namespace lift_0041C6D0

// [0x0041C6F0] sub_0041C6F0 (21 bytes)
namespace lift_0041C6F0 {
// @name sub_0041C6F0
// @summary Auto-lifted identical-shape clone of 0x0041C6D0 (Unknown::ForwardVirtual44 (descriptive; owner class not yet identified)).
namespace lift_0041C6D0 {
// @name Unknown::ForwardVirtual44 (descriptive; owner class not yet identified)
// @summary Forwards the call to the object at self+0x08 via its vtable slot at +0x44; returns 0 if that object is null.
// @field Unknown +0x08 void* field_0x08
uint32_t fn_0041C6F0(void* self) {
    // Original is a tail jump (jmp eax) that reuses the caller's stack args,
    // with the stdcall-style "ret 4" epilogue on the null path. C++ cannot
    // express the tail jump directly, so the forwarded call is written as an
    // ordinary call returning the callee's result.
    void* child = lift_field<void*>(self, 0x08);
    if (child == nullptr) {
        return 0;  // xor al, al; ret 4
    }
    void* vtable = lift_field<void*>(child, 0);
    auto target = reinterpret_cast<uint32_t (*)(void*)>(lift_field<void*>(vtable, 0x48));
    return target(child);
}
} // namespace lift_0041C6D0
} // namespace lift_0041C6F0

// [0x0041C730] sub_0041C730 (21 bytes)
namespace lift_0041C730 {
// @name sub_0041C730
// @summary Auto-lifted identical-shape clone of 0x0041C6D0 (Unknown::ForwardVirtual44 (descriptive; owner class not yet identified)).
namespace lift_0041C6D0 {
// @name Unknown::ForwardVirtual44 (descriptive; owner class not yet identified)
// @summary Forwards the call to the object at self+0x08 via its vtable slot at +0x44; returns 0 if that object is null.
// @field Unknown +0x08 void* field_0x08
uint32_t fn_0041C730(void* self) {
    // Original is a tail jump (jmp eax) that reuses the caller's stack args,
    // with the stdcall-style "ret 4" epilogue on the null path. C++ cannot
    // express the tail jump directly, so the forwarded call is written as an
    // ordinary call returning the callee's result.
    void* child = lift_field<void*>(self, 0x08);
    if (child == nullptr) {
        return 0;  // xor al, al; ret 4
    }
    void* vtable = lift_field<void*>(child, 0);
    auto target = reinterpret_cast<uint32_t (*)(void*)>(lift_field<void*>(vtable, 0x50));
    return target(child);
}
} // namespace lift_0041C6D0
} // namespace lift_0041C730

// [0x00414510] std::string operator+ forwarder (22 bytes)
namespace lift_00414510 {
// Import slot 0x00924EF4: MSVCP80 std::operator+(const std::basic_string<char>&, const std::basic_string<char>&)
// Called via indirect `call dword ptr [0x924ef4]` with two cdecl stack arguments.
extern uint32_t (*mem_00924EF4)(uint32_t lhs, uint32_t rhs);

// @name std::operator+ (basic_string<char> forwarder)
// @summary Forwards its two string-operand arguments in order to MSVCP80 std::operator+ and returns the callee's result.
// @field (none) — no struct fields accessed; operands are opaque handles passed through.
uint32_t fn_00414510(uint32_t lhs, uint32_t rhs) {
    return mem_00924EF4(lhs, rhs);
}
} // namespace lift_00414510
