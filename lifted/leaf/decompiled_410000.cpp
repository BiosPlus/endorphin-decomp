// Lifted C++ translation unit: lifted/leaf/decompiled_410000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_0041A4F0 {
extern void (*mem_00925134)();

// @name sub_0041A4F0
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_0048EF80(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_0041A4F0(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x54;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_0048EF80(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_0041A4F0

// [0x0041FD10]
namespace lift_0041FD10 {
extern void fn_006A608E(void);

// @name sub_0041FD10
// @summary Forwards to MFC80!ord_6236 with a zero argument and cleans up 8 bytes of stack arguments
void __stdcall fn_0041FD10(uint32_t arg0, uint32_t arg1) {
    (void)arg0;
    (void)arg1;
    fn_006A608E();
}
} // namespace lift_0041FD10

// [0x004137F0] sub_004137F0 (23 bytes)
namespace lift_004137F0 {
// Known callee 0x00454BA0: sub_00454BA0 (Destructor tail-call: restores vtable mem_0093652C and tail-calls base destructor sub_00455EB0.)
// Imported slot at 0x009242F4 (MFC80 ordinal 578); the IAT entry holds an unresolved ordinal thunk at file level.
extern void __fastcall ext_00454BA0(void* self);
extern void* mem_009242F4;

// @name CleanupEmbeddedAt12CAndChainBaseDtor
// @summary Calls an MFC80 import (ord 578) on the embedded object at +0x12C, then tail-calls the base destructor.
// @field Unknown +0x12C embedded_object field_0x12C
void fn_004137F0(void* self) {
    auto* embedded = reinterpret_cast<uint8_t*>(self) + 0x12C;
    auto import578 = reinterpret_cast<void(__fastcall*)(void*)>(mem_009242F4);
    import578(embedded);
    ext_00454BA0(self);
}
} // namespace lift_004137F0

// [0x0041FF10] sub_0041FF10 (26 bytes)
namespace lift_0041FF10 {
// Known callee 0x006A5E00: thunk_MFC80_ord_2372 (IAT jump thunk forwarding to MFC80!ord_2372.)
// Takes one argument (the SendMessageA result), pushed before the call.
extern void ext_006A5E00(LRESULT result);
// IAT slot for USER32!SendMessageA (value at 0x00925694).
extern uintptr_t mem_00925694;

// @name fn_0041FF10_sendMsg1018ThenForward
// @summary Sends message 0x1018 (wParam=0, lParam=0) to the handle stored at self+0x20, then forwards the SendMessageA result to ext_006A5E00.
// @field Unknown +0x20 HWND hwnd
void fn_0041FF10(void* self) {
    HWND hwnd = *reinterpret_cast<HWND*>(static_cast<uint8_t*>(self) + 0x20);
    using SendMessageAFn = LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM);
    auto sendMessageA = reinterpret_cast<SendMessageAFn>(mem_00925694);
    LRESULT result = sendMessageA(hwnd, 0x1018, 0, 0);
    ext_006A5E00(result);
}
} // namespace lift_0041FF10

// [0x0041CBD0] sub_0041CBD0 (27 bytes)
namespace lift_0041CBD0 {
// Known callee 0x006AD180: getDerefField0x4 (Reads a pointer at offset 0x4 and returns the dereferenced 32-bit value.)
extern uint32_t ext_006AD180(void* self);

namespace {

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

} // namespace

// @name Unknown::DelegateVfunc5ToField4
// @class Unknown
// @summary Passes arg through ext_006AD180, then tail-dispatches to vtable slot 5 (+0x14) of the object stored at self+0x4, passing the result as its argument.
// @field Unknown +0x04 uint32_t field_0x04
uint32_t fn_0041CBD0(void* self, uint32_t arg) {
    // mov ecx, [esp+8] ; call ext_006AD180  -> eax
    const uint32_t r = ext_006AD180(as_ptr(arg));

    // mov ecx, [esi+4]  -> object pointer
    void* const obj = as_ptr(lift_field<uint32_t>(self, 0x4));

    // mov edx, [ecx]  -> object's vtable
    const uint32_t vtbl = lift_field<uint32_t>(obj, 0x0);

    // mov [esp+4], eax ; mov eax, [edx+0x14] ; jmp eax  (tail call, this = obj, arg = r)
    const uint32_t slot = lift_field<uint32_t>(as_ptr(vtbl), 0x14);
    using VFn = uint32_t (*)(void* self_, uint32_t arg_);
    return reinterpret_cast<VFn>(as_ptr(slot))(obj, r);
}
} // namespace lift_0041CBD0

// [0x0041DE10] sub_0041DE10 (27 bytes)
namespace lift_0041DE10 {
// @name sub_0041DE10
// @summary Auto-lifted identical-shape clone of 0x005694F0 (DestroyRangeForward_005694F0).
namespace lift_005694F0 {
extern void __cdecl ext_0041DD40(int a1, int a2, void* self, int a4);

// @name DestroyRangeForward_005694F0
// @class (none)
// @summary Forwards two stack arguments plus the incoming ECX value to ext_005693E0 (range destroy helper).
void fn_0041DE10(void* self, int edx_unused, int a1, int a2) {
    // Original: push a2, push ecx, push a2, push a1, call ext_005693E0(a1, a2, self, a2).
    ext_0041DD40(a1, a2, self, a2);
}
} // namespace lift_005694F0
} // namespace lift_0041DE10

// [0x00415F97]
namespace lift_00415F97 {
// @name getSysColorOrField
// @summary Returns system color COLOR_3DFACE (0xF) if eax is non-zero and [ecx+0x54] == -1, otherwise branches to 0x415FB3/0x415FBA
// @field Unknown +0x54 int32_t field_0x54

extern uint32_t __stdcall GetSysColor(int32_t nIndex);

uint32_t __fastcall sub_00415F97(void* ecx_val, uint32_t eax_val) {
    if (eax_val != 0) {
        int32_t val = *reinterpret_cast<int32_t*>(reinterpret_cast<uint8_t*>(ecx_val) + 0x54);
        if (val == -1) {
            return GetSysColor(0xF);
        }
    }
    return 0;
}
} // namespace lift_00415F97

// [0x00419990]
namespace lift_00419990 {
// @name setFieldAndMaybeCall
// @summary Stores arg0 into field_0x04 of arg3, calls ext_00419960(arg3) if arg1 == 1, and returns 0.
// @field Object +0x04 uint32_t field_0x04


extern void __thiscall ext_00419960(uintptr_t self);

uint32_t __stdcall sub_00419990(uint32_t arg0, uint32_t arg1, uint32_t arg2, uintptr_t arg3) {
    (void)arg2;
    *reinterpret_cast<uint32_t*>(arg3 + 0x4) = arg0;
    if (arg1 == 1) {
        ext_00419960(arg3);
    }
    return 0;
}
} // namespace lift_00419990

// [0x0041CCA0] sub_0041CCA0 (29 bytes)
namespace lift_0041CCA0 {
extern void __fastcall ext_00454BA0(void* self);
extern uint32_t mem_009242F4; // .rdata IAT slot holding MFC80 ord_578

// @name ReleaseSubobjectAndChainDestructor
// @summary Sets the object vtable, calls MFC80 ord_578 on the subobject at +0x12c, then tail-calls the base destructor.
// @field Unknown +0x00 u32 field_0x00
// @field Unknown +0x12c u8 field_0x12c
void fn_0041CCA0(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x0092DD84u;

    auto release = reinterpret_cast<void (__thiscall*)(void*)>(
        static_cast<uintptr_t>(mem_009242F4));
    release(static_cast<uint8_t*>(self) + 0x12c);

    ext_00454BA0(self);
}
} // namespace lift_0041CCA0

// [0x0041FEF0] sub_0041FEF0 (31 bytes)
namespace lift_0041FEF0 {
// Known callee 0x006A5E00: thunk_MFC80_ord_2372 (IAT jump thunk forwarding to MFC80!ord_2372.)
extern void ext_006A5E00();
// IAT slot 0x00925694 holding USER32!SendMessageA (value is a function address at runtime).
extern int mem_00925694;

// @name SendUserMessage_WM_USER_17_ForwardArg
// @class <none> (uses this as a plain pointer; see field below)
// @summary Sends WM_USER+0x17 with the stack argument as LPARAM to the window at this+0x20, then tail-forwards to ext_006A5E00.
// @field <Unknown> +0x20 HWND hwnd
void fn_0041FEF0(void* self, DWORD arg) {
    // SendMessageA(hwnd, WM_USER + 0x17, 0, arg)
    HWND hwnd = lift_field<HWND>(self, 0x20);
    using SendMessageAFn = LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM);
    auto send = reinterpret_cast<SendMessageAFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00925694)));
    LRESULT result = send(hwnd, 0x1017u, 0, static_cast<LPARAM>(arg));
    // Original code overwrites the stack argument slot with the result, then jmp's to
    // ext_006A5E00, so the tail callee observes the SendMessageA result as its argument.
    // Portable form cannot express the raw stack-slot hand-off; the tail call is preserved.
    (void)result;
    ext_006A5E00();
}
} // namespace lift_0041FEF0

// [0x0041A070]
namespace lift_0041A070 {
// @name Unknown::validateAndSubtractSecond
// @class Unknown
// @summary Checks that the first dword of both objects is non-zero and equal (else calls invalid-parameter handler), then returns self.+0x04 - other.+0x04.
// @field Unknown +0x00 DWORD field_0x00 (first dword; compared for equality against other)
// @field Unknown +0x04 DWORD field_0x04 (second dword; subtracted)

extern void ext_MSVCR80_invalid_parameter_noinfo(void);

int __thiscall sub_0041A070(void* self, void* other) {
    DWORD self_first = lift_field<DWORD>(self, 0x00);
    DWORD other_first = lift_field<DWORD>(other, 0x00);

    if (self_first == 0 || self_first != other_first) {
        ext_MSVCR80_invalid_parameter_noinfo();
    }

    DWORD self_second = lift_field<DWORD>(self, 0x04);
    DWORD other_second = lift_field<DWORD>(other, 0x04);
    return static_cast<int>(self_second - other_second);
}
} // namespace lift_0041A070

// [0x0041CEB0] sub_0041CEB0 (35 bytes)
namespace lift_0041CEB0 {
// @name UnknownClass::forwardToSubobjectSlot4
// @class UnknownClass
// @summary Calls vtable slot 4 of the subobject at +0x04 with (arg1, self, 0, 0), then returns arg1.
// @field UnknownClass +0x04 void* field_0x04
// Note: the original pushes the caller's saved ESI into the callee's 3rd stack slot;
// that is a register-preservation artifact with no portable meaning, so it is passed as 0.
// The callee's calling convention is not confirmed; the signature below is a portable approximation.
using SubobjectSlot4Fn = uint32_t (*)(void* subobject, uint32_t arg1, void* owner, uint32_t spill, uint32_t zero);

uint32_t fn_0041CEB0(void* self, uint32_t arg1) {
    uint32_t subobjectAddr = lift_field<uint32_t>(self, 0x04);
    uint32_t vtableAddr = lift_field<uint32_t>(reinterpret_cast<void*>(subobjectAddr), 0x00);
    uint32_t slot4Addr = lift_field<uint32_t>(reinterpret_cast<void*>(vtableAddr), 0x10);
    auto slot4 = reinterpret_cast<SubobjectSlot4Fn>(static_cast<uintptr_t>(slot4Addr));
    slot4(reinterpret_cast<void*>(static_cast<uintptr_t>(subobjectAddr)), arg1, self, 0u, 0u);
    return arg1;
}
} // namespace lift_0041CEB0

// [0x00414880] sub_00414880 (38 bytes)
namespace lift_00414880 {
// MSVCR80!_invalid_parameter_noinfo, reached through the import slot at 0x925134.
extern void ext_invalid_parameter_noinfo(void);

// @name descriptiveName: fn_00414880 (ElementCountDelta)
// @summary Verifies both operands share the same first-word owner (unless it is null) and returns (self.field_0x04 - other.field_0x04) / 8 as a signed element count.
// @field field_0x00 int32_t (owner/tag word; compared against other.field_0x00 when non-zero)
// @field field_0x04 int32_t (position word; differenced against other.field_0x04)
//
// Calling convention: __thiscall (this in ecx), one stack argument `other`, ret 4.
int32_t fn_00414880(void* self, void* other) {
    auto* lhs = static_cast<int32_t*>(self);
    auto* rhs = static_cast<int32_t*>(other);

    const int32_t owner = lhs[0];
    if (owner != 0 && owner != rhs[0]) {
        ext_invalid_parameter_noinfo();
    }

    const int32_t delta = lhs[1] - rhs[1];
    return delta >> 3; // arithmetic shift, elements are 8 bytes
}
} // namespace lift_00414880

// [0x0041C5A0]
namespace lift_0041C5A0 {
// @name sub_0041C5A0
// @summary Forwards a 3-argument virtual call (vtable +0x14) to field_0x8 if non-null, returning false otherwise.
// @field Unknown +0x08 uint32_t field_0x08


extern uint32_t mem_read32(uint32_t addr);

bool __thiscall sub_0041C5A0(uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint32_t target = mem_read32(self + 0x8);
    if (target == 0) {
        return false;
    }
    uint32_t vtable = mem_read32(target);
    uint32_t fn_addr = mem_read32(vtable + 0x14);
    using FnType = bool(__thiscall*)(uint32_t, uint32_t, uint32_t, uint32_t);
    return reinterpret_cast<FnType>(static_cast<uintptr_t>(fn_addr))(target, arg1, arg2, arg3);
}
} // namespace lift_0041C5A0

// [0x0041C600]
namespace lift_0041C600 {
// @name forwardVtableCall7
// @summary Forwards a 3-argument virtual call at vtable offset 0x1C on field_0x8 if non-null, returning false otherwise.
// @field Unknown +0x08 uint32_t field_0x08
uint8_t __thiscall sub_0041C600(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint32_t target = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0x08);
    if (target == 0) {
        return 0;
    }
    uint32_t vtable = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(target));
    uint32_t fn_addr = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(vtable) + 0x1C);
    using VFunc = uint8_t(__thiscall*)(void*, uint32_t, uint32_t, uint32_t);
    auto fn = reinterpret_cast<VFunc>(static_cast<uintptr_t>(fn_addr));
    return fn(reinterpret_cast<void*>(static_cast<uintptr_t>(target)), arg1, arg2, arg3);
}
} // namespace lift_0041C600

// [0x0041C570]
namespace lift_0041C570 {
// @name forward_0x10_3args
// @summary Forwards a 3-argument virtual call at vtable +0x10 to field_0x08 if non-null, otherwise returns 0
// @field Self +0x08 uint32_t field_0x08


extern uint32_t mem_read32(uint32_t addr);

uint8_t sub_0041C570(uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint32_t target = mem_read32(self + 0x08);
    if (target == 0) {
        return 0;
    }
    uint32_t vtable = mem_read32(target);
    uint32_t fn_addr = mem_read32(vtable + 0x10);
    using Fn = uint8_t(*)(uint32_t, uint32_t, uint32_t, uint32_t);
    return reinterpret_cast<Fn>(static_cast<uintptr_t>(fn_addr))(target, arg1, arg2, arg3);
}
} // namespace lift_0041C570

// [0x00413990] sub_00413990 (40 bytes)
namespace lift_00413990 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* arg);
// KERNEL32!DeleteCriticalSection, called through IAT slot at 0x009242E4.
extern void ext_DeleteCriticalSection(void* cs);
// MSVCP80 basic_streambuf<char> destructor, tail-jumped through IAT slot at 0x00924F9C.
extern void ext_MSVCP80_basic_streambuf_dtor(void* self);
extern int mem_009242E4;
extern int mem_00924F9C;

// @name StreambufDerived::~StreambufDerived
// @class StreambufDerived
// @summary Reset vptr, delete embedded CRITICAL_SECTION at +0x44, release the resource at +0x3c via ext_006A5C5C, then tail-call the base streambuf destructor.
// @field StreambufDerived +0x00 void* vptr
// @field StreambufDerived +0x3c void* field_0x3c
// @field StreambufDerived +0x44 CRITICAL_SECTION cs
void fn_00413990(void* self) {
    auto* obj = static_cast<unsigned char*>(self);
    *reinterpret_cast<const void**>(obj + 0x00) = reinterpret_cast<const void*>(0x0092c1f4);
    ext_DeleteCriticalSection(obj + 0x44);
    ext_006A5C5C(*reinterpret_cast<void**>(obj + 0x3c));
    ext_MSVCP80_basic_streambuf_dtor(self);
}
} // namespace lift_00413990

// [0x00413C40] sub_00413C40 (40 bytes)
namespace lift_00413C40 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
// cdecl, one argument (pushed from [this+0x3c]).
extern void ext_006A5C5C(void* arg);
extern int mem_00924F48;  // IAT slot: MSVCP80 basic_streambuf dtor (base-class tail jump)
extern int mem_009242E4;  // IAT slot: KERNEL32!DeleteCriticalSection (stdcall)

// @name UnknownClass::teardown_00413C40
// @class UnknownClass
// @summary Destructor-style teardown: resets vptr to 0x92c230, deletes the CRITICAL_SECTION at +0x44, calls ext_006A5C5C(+0x3c), then tail-jumps to the MSVCP80 basic_streambuf dtor with the same this.
// @field UnknownClass +0x00 uint32_t vptr
// @field UnknownClass +0x3c void* field_0x3c
// @field UnknownClass +0x44 CRITICAL_SECTION field_0x44
extern void __thiscall fn_00413C40(void* self) {
    using StdcallVoidFn = void(__stdcall*)(void*);
    using ThiscallVoidFn = void(__thiscall*)(void*);

    // mov dword ptr [esi], 0x92c230
    lift_field<uint32_t>(self, 0x00) = 0x0092C230u;

    // push (this+0x44); call [KERNEL32!DeleteCriticalSection]
    auto deleteCriticalSection = reinterpret_cast<StdcallVoidFn>(mem_009242E4);
    deleteCriticalSection(&lift_field<uint8_t>(self, 0x44));

    // push [this+0x3c]; call thunk_MFC80_ord_764; add esp, 4
    ext_006A5C5C(lift_field<void*>(self, 0x3c));

    // mov ecx, esi; pop esi; jmp [MSVCP80 basic_streambuf dtor]
    auto baseDtor = reinterpret_cast<ThiscallVoidFn>(mem_00924F48);
    baseDtor(self);
}
} // namespace lift_00413C40

// [0x0041A160]
namespace lift_0041A160 {
extern int (__cdecl* mem_009251EC)(void* dest, size_t destsz, const void* src, size_t count);

// @name copyBackwardBytes
// @summary Copies a byte range backward into a destination buffer ending at destEnd using memmove_s.
void* __cdecl sub_0041A160(const void* first, const void* last, void* destEnd) {
    int32_t count = static_cast<int32_t>(
        reinterpret_cast<uintptr_t>(last) - reinterpret_cast<uintptr_t>(first));
    uintptr_t dest = reinterpret_cast<uintptr_t>(destEnd) - static_cast<uintptr_t>(count);
    if (count > 0) {
        size_t size = static_cast<size_t>(count);
        mem_009251EC(reinterpret_cast<void*>(dest), size, first, size);
    }
    return reinterpret_cast<void*>(dest);
}
} // namespace lift_0041A160

// [0x00410D10] sub_00410D10 (42 bytes)
namespace lift_00410D10 {
extern int mem_00925134;
extern void ext_invalid_parameter_noinfo();

// @name makeRangeFromBounds
// @class (none)
// @summary Writes {this, this->+0x08} into the out-pointer after checking this->+0x04 <= this->+0x08; returns out (thiscall, callee pops 4).
// @field Range +0x04 uint32_t field_0x04
// @field Range +0x08 uint32_t field_0x08
void* fn_00410D10(void* self, void* out) {
    uint32_t begin = lift_field<uint32_t>(self, 0x04);
    uint32_t end = lift_field<uint32_t>(self, 0x08);

    lift_field<uint32_t>(out, 0x00) = 0;
    if (begin > end) {
        ext_invalid_parameter_noinfo();
    }
    lift_field<uint32_t>(out, 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
    lift_field<uint32_t>(out, 0x04) = end;
    return out;
}
} // namespace lift_00410D10

// [0x00414EC0]
namespace lift_00414EC0 {
// @name sub_00414EC0
// @summary Forwards arguments with a zeroed flag byte to sub_004148F0

extern uint32_t __cdecl ext_004148F0(
    uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6);

uint32_t __thiscall sub_00414EC0(
    uint32_t self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5)
{
    (void)a1;
    (void)a3;
    return ext_004148F0(a2, a4, a5, self, a5, 0);
}
} // namespace lift_00414EC0

// [0x0041FEC0]
namespace lift_0041FEC0 {
// @name ListView::getNextSelectedItem
// @class ListView
// @summary Queries the next selected list-view item via SendMessageA(LVM_GETNEXTITEM), updates the cursor, and returns the 0-based index.
// @field ListView +0x20 uint32_t hwnd


extern uint32_t (__stdcall *mem_00925694)(uint32_t hWnd, uint32_t Msg, uint32_t wParam, uint32_t lParam);

uint32_t __thiscall sub_0041FEC0(void* this_ptr, int32_t* pIndex) {
    uint32_t hwnd = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(this_ptr) + 0x20);
    int32_t prev = *pIndex - 1;
    uint32_t next = mem_00925694(hwnd, 0x100c, static_cast<uint32_t>(prev), 2);
    *pIndex = static_cast<int32_t>(next) + 1;
    return static_cast<uint32_t>(prev);
}
} // namespace lift_0041FEC0

// [0x0041DDE0] sub_0041DDE0 (41 bytes)
namespace lift_0041DDE0 {
// @name sub_0041DDE0
// @summary Auto-lifted identical-shape clone of 0x0044C4D0 (DWORD_RangeCopy_thiscall).
namespace lift_0044C4D0 {
// @name DWORD_RangeCopy_thiscall
// @summary Copies DWORDs from [first, last) to out via ext_0044C2A0 and returns out + count.

extern DWORD* ext_00472870(const DWORD* first, const DWORD* last, DWORD* out);

DWORD* __thiscall fn_0041DDE0(void* self, const DWORD* first, const DWORD* last, DWORD* out) {
    (void)self;
    return ext_00472870(first, last, out);
}
} // namespace lift_0044C4D0
} // namespace lift_0041DDE0

// [0x00419BF0]
namespace lift_00419BF0 {
// @name getShellFolderPidl
// @summary Resolves a CSIDL shell folder id to an ITEMIDLIST via SHGetFolderLocation; returns the pidl (or the input unchanged when 0 or on failure), calling the MFC80 error thunk on failure.

// IAT slot for SHELL32!SHGetFolderLocation; its stored value is the import address.
extern const uint32_t mem_0092553C;

// IAT jump thunk forwarding to MFC80!ord_1191 (error path).
extern void fn_006A6304(void);

extern uint32_t fn_00419BF0(uint32_t csidl) {
    if (csidl == 0) {
        return csidl;
    }

    using SHGetFolderLocation_t = HRESULT(__stdcall*)(HWND, int32_t, HANDLE, uint32_t, uint32_t*);
    auto SHGetFolderLocation = reinterpret_cast<SHGetFolderLocation_t>(
        static_cast<uintptr_t>(mem_0092553C));

    uint32_t pidl = csidl;
    HRESULT hr = SHGetFolderLocation(nullptr, static_cast<int32_t>(csidl), nullptr, 0, &pidl);
    if (hr < 0) {
        fn_006A6304();
    }
    return pidl;
}
} // namespace lift_00419BF0

// [0x0041C5D0]
namespace lift_0041C5D0 {
// @name sub_0041C5D0
// @summary Stores two 32-bit fields on this and forwards the call to vtable+0x18 on field_0x08 if non-null
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0c
// @field Unknown +0x10 uint32_t field_0x10
uint8_t __thiscall sub_0041C5D0(uintptr_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    *reinterpret_cast<uint32_t*>(self + 0x0c) = arg2;
    *reinterpret_cast<uint32_t*>(self + 0x10) = arg3;
    uintptr_t child = *reinterpret_cast<uint32_t*>(self + 0x08);
    if (!child) {
        return 0;
    }
    uintptr_t vtable = *reinterpret_cast<uint32_t*>(child);
    using Fn = uint8_t(__thiscall*)(uintptr_t, uint32_t, uint32_t, uint32_t);
    Fn fn = reinterpret_cast<Fn>(*reinterpret_cast<uint32_t*>(vtable + 0x18));
    return fn(child, arg1, arg2, arg3);
}
} // namespace lift_0041C5D0

// [0x0041C540]
namespace lift_0041C540 {
// @name sub_0041C540
// @summary Stores two parameters at +0x0c and +0x10 and forwards all three arguments to child vtable+0x0c if present.
// @field Self +0x08 void* field_0x08
// @field Self +0x0c uint32_t field_0x0c
// @field Self +0x10 uint32_t field_0x10


bool __thiscall sub_0041C540(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x0c) = arg2;
    *reinterpret_cast<uint32_t*>(base + 0x10) = arg3;

    void* child = *reinterpret_cast<void**>(base + 0x08);
    if (!child) {
        return false;
    }

    using VFunc = bool(__thiscall*)(void*, uint32_t, uint32_t, uint32_t);
    auto* vtable = *reinterpret_cast<uintptr_t**>(child);
    auto fn = reinterpret_cast<VFunc>(vtable[3]);
    return fn(child, arg1, arg2, arg3);
}
} // namespace lift_0041C540

// [0x0041C630]
namespace lift_0041C630 {
// @name sub_0041C630
// @summary Stores two 32-bit values at +0x14 and +0x18 and forwards the call to child->vtable[0x30] if child (+0x08) is non-null.
// @field unknown +0x08 uint32_t field_0x08
// @field unknown +0x14 uint32_t field_0x14
// @field unknown +0x18 uint32_t field_0x18


uint32_t mem_read32(uint32_t addr);
void mem_write32(uint32_t addr, uint32_t val);

uint8_t __thiscall sub_0041C630(uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    mem_write32(self + 0x14, arg2);
    mem_write32(self + 0x18, arg3);
    uint32_t child = mem_read32(self + 0x08);
    if (!child) {
        return 0;
    }
    uint32_t vtable = mem_read32(child);
    uint32_t fn_addr = mem_read32(vtable + 0x30);
    using VMethod = uint8_t(__thiscall*)(uint32_t, uint32_t, uint32_t, uint32_t);
    return reinterpret_cast<VMethod>(static_cast<uintptr_t>(fn_addr))(child, arg1, arg2, arg3);
}
} // namespace lift_0041C630

// [0x004152D0]
namespace lift_004152D0 {
extern uint32_t mem_009241E4;
extern uint32_t mem_009241E0;

// @name MappedFile::close
// @class MappedFile
// @summary Unmaps the file view and closes the file mapping and file handles if open.
// @field MappedFile +0x24 uint32_t hFile
// @field MappedFile +0x28 uint32_t hMapping
// @field MappedFile +0x2C uint32_t lpBaseAddress
void __thiscall sub_004152D0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint32_t hFile = *reinterpret_cast<uint32_t*>(obj + 0x24);
    if (hFile == 0) {
        return;
    }

    using UnmapViewOfFileFn = int32_t(__stdcall*)(uint32_t);
    using CloseHandleFn = int32_t(__stdcall*)(uint32_t);

    auto unmapViewOfFile = reinterpret_cast<UnmapViewOfFileFn>(static_cast<uintptr_t>(mem_009241E4));
    auto closeHandle = reinterpret_cast<CloseHandleFn>(static_cast<uintptr_t>(mem_009241E0));

    uint32_t lpBaseAddress = *reinterpret_cast<uint32_t*>(obj + 0x2C);
    unmapViewOfFile(lpBaseAddress);

    uint32_t hMapping = *reinterpret_cast<uint32_t*>(obj + 0x28);
    closeHandle(hMapping);

    closeHandle(*reinterpret_cast<uint32_t*>(obj + 0x24));
    *reinterpret_cast<uint32_t*>(obj + 0x24) = 0;
}
} // namespace lift_004152D0

// [0x0041DDA0] sub_0041DDA0 (50 bytes)
namespace lift_0041DDA0 {
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);
// .rdata slot 0x00924FF4 holds the address of the MSVCP80 basic_string destructor.
extern int mem_00924FF4;

// @name Unknown::resetPtrAndStringMembers
// @class Unknown
// @summary Frees the pointer at +0x24 if set, zeroes +0x24/+0x28/+0x2C, then destroys the std::string at +0x04.
// @field Unknown +0x04 std::string strMember
// @field Unknown +0x24 void* ptrMember
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x2C uint32_t field_0x2C
void fn_0041DDA0(void* self) {
    auto* base = reinterpret_cast<uint8_t*>(self);

    void* ptr = lift_field<void*>(base, 0x24);
    if (ptr != nullptr) {
        ext_006A5C5C(ptr);
    }

    lift_field<void*>(base, 0x24) = nullptr;
    lift_field<uint32_t>(base, 0x28) = 0;
    lift_field<uint32_t>(base, 0x2C) = 0;

    // Tail-jump to basic_string::~basic_string on this+0x04 (thiscall).
    using DtorFn = void (__thiscall*)(void*);
    auto dtor = reinterpret_cast<DtorFn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924FF4)));
    dtor(base + 0x04);
}
} // namespace lift_0041DDA0

// [0x00414260]
namespace lift_00414260 {
// @name sub_00414260
// @summary Forwards two MFC80 ord_2902/ord_876 results from arg3 along with arg1 and arg2 to vtable+0x64
// @field Self +0x00 uint32_t* vtable

extern uint32_t (__thiscall *mem_0092431C)(uint32_t);
extern uint32_t (__thiscall *mem_00924300)(uint32_t);

uint32_t __thiscall sub_00414260(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(self);
    uint32_t r1 = mem_0092431C(arg3);
    uint32_t r2 = mem_00924300(arg3);
    using vfn_t = uint32_t(__thiscall*)(void*, uint32_t, uint32_t, uint32_t, uint32_t);
    vfn_t fn = reinterpret_cast<vfn_t>(vtable[0x64 / 4]);
    return fn(self, arg1, arg2, r2, r1);
}
} // namespace lift_00414260

// [0x004142A0]
namespace lift_004142A0 {
extern uint32_t mem_0092431C;
extern uint32_t mem_00924300;

// @name sub_004142A0
// @summary Calls MFC80!ord_2902 and MFC80!ord_876 on arg1, then dispatches result to this->vtable+0x70
// @field Self +0x00 void** vtable
uint32_t __thiscall sub_004142A0(void* self, void* arg1, uint32_t arg2, uint32_t arg3) {
    auto vtable = *reinterpret_cast<void***>(self);
    auto fn_2902 = reinterpret_cast<uint32_t(__thiscall*)(void*, uint32_t, uint32_t)>(mem_0092431C);
    uint32_t r1 = fn_2902(arg1, arg2, arg3);
    auto fn_876 = reinterpret_cast<uint32_t(__thiscall*)(void*, uint32_t)>(mem_00924300);
    uint32_t r2 = fn_876(arg1, r1);
    auto vfn = reinterpret_cast<uint32_t(__thiscall*)(void*, uint32_t)>(vtable[0x70 / 4]);
    return vfn(self, r2);
}
} // namespace lift_004142A0

// [0x0041CB40]
namespace lift_0041CB40 {
// @name dynamicCastSubobject0x10
// @summary Dereferences an object wrapper, forwards virtual call at +0x10, and dynamic_casts the result.


uint32_t __thiscall ext_006AD180(void* self);
void* __thiscall ext_006616C0(void* self);
void* __cdecl ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);

void* __stdcall fn_0041CB40(void* arg0) {
    if (!arg0) {
        return nullptr;
    }

    uint32_t obj = ext_006AD180(arg0);
    void* res = ext_006616C0(reinterpret_cast<void*>(obj + 0x10));
    return ext_006A6E9E(
        res,
        0,
        reinterpret_cast<void*>(0x00A2E2D8),
        reinterpret_cast<void*>(0x00A2EFEC),
        0
    );
}
} // namespace lift_0041CB40

// [0x00411590] sub_00411590 (54 bytes)
namespace lift_00411590 {
// @name sub_00411590
// @summary Auto-lifted identical-shape clone of 0x005FF040 (ResourceHolder::ReleaseAndReset).
namespace lift_005FF040 {
// @name ResourceHolder::ReleaseAndReset
// @class ResourceHolder
// @summary Sets the vtable, releases the handle at +0x08 via thunk_MFC80_ord_764 if non-null, zeroes +0x08/+0x0C/+0x10, then tail-calls base cleanup fn_0065F440(this).
// @field ResourceHolder +0x00 uint32_t vtable
// @field ResourceHolder +0x08 uint32_t field_0x08
// @field ResourceHolder +0x0C uint32_t field_0x0C
// @field ResourceHolder +0x10 uint32_t field_0x10

extern void ext_006A5C5C(void* arg);
extern void __fastcall ext_00413480(void* self);

extern void __fastcall fn_00411590(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    lift_field<uint32_t>(base, 0x00) = 0x92BE30;

    const uint32_t handle = lift_field<uint32_t>(base, 0x58);
    if (handle != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(handle)));
    }

    lift_field<uint32_t>(base, 0x58) = 0;
    lift_field<uint32_t>(base, 0x5C) = 0;
    lift_field<uint32_t>(base, 0x60) = 0;

    ext_00413480(self);
}
} // namespace lift_005FF040
} // namespace lift_00411590

// [0x0041CDE0] sub_0041CDE0 (57 bytes)
namespace lift_0041CDE0 {
// MSVC 2005 std::basic_string<char>::operator=(const basic_string&), reached via
// the import slot at 0x00924FDC. Thiscall: self in ECX, rhs on the stack.
extern void* ext_std_string_assign(void* self, const void* rhs);

namespace {
constexpr std::size_t kEntrySize = 0x20;
constexpr std::ptrdiff_t kEntryValueOffset = 0x1c;
}

// @name CopyEntryRangeForward
// @summary Copies each 0x20-byte entry in [first,last) to dest by assigning its leading std::string and copying the DWORD at +0x1c; returns dest end, or dest itself when the range is empty.
// @field Entry +0x1c uint32_t value
void* fn_0041CDE0(const void* first, const void* last, void* dest) {
    if (first == last) {
        return dest;
    }

    const auto* src = static_cast<const uint8_t*>(first);
    const auto* end = static_cast<const uint8_t*>(last);
    auto* out = static_cast<uint8_t*>(dest);

    do {
        ext_std_string_assign(out, src);
        lift_field<uint32_t>(out, kEntryValueOffset) =
            lift_field<uint32_t>(src, kEntryValueOffset);
        src += kEntrySize;
        out += kEntrySize;
    } while (src != end);

    return out;
}
} // namespace lift_0041CDE0

// [0x00412E20] sub_00412E20 (57 bytes)
namespace lift_00412E20 {
// Imported CRT handler called via the pointer at 0x00925134 (_invalid_parameter_noinfo).
extern void ext_invalid_parameter_noinfo(void);

// @name VectorFirstElementOrZero
// @class Unknown
// @summary Returns the first 32-bit element of the owner's [begin,end) array, or 0 if empty.
// @field Unknown +0x08 uint32_t begin
// @field Unknown +0x0C uint32_t end
uint32_t fn_00412E20(void* self) {
    const auto* owner = static_cast<const unsigned char*>(self);

    // Raw 32-bit slots: begin at +0x08, end at +0x0C.
    uint32_t begin = 0;
    uint32_t end = 0;
    std::memcpy(&begin, owner + 0x08, sizeof(begin));
    std::memcpy(&end, owner + 0x0C, sizeof(end));

    if (begin == 0) {
        return 0;
    }

    // Element count is (end - begin) >> 2; an empty array returns 0.
    if (static_cast<int32_t>(end - begin) >> 2 == 0) {
        return 0;
    }

    // Validity checks mirror the original: a failed check invokes the CRT
    // handler and then continues (the handler is expected to return here).
    if (begin > end) {
        ext_invalid_parameter_noinfo();
    }
    if (begin >= end) {
        ext_invalid_parameter_noinfo();
    }

    const auto* first = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(begin));
    return *first;
}
} // namespace lift_00412E20
