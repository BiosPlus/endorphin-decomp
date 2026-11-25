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
#include <iostream>
#include <streambuf>

#include <streambuf>
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
#include <stdexcept>
#include <cstdint>

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

// [0x00410290] sub_00410290 (57 bytes)
namespace lift_00410290 {
// @name Unknown::forwardFieldsToArg1AndReturnSubfield
// @class Unknown
// @summary Calls vtable slot 13 then slot 14 of arg1 with this+0x5C and this+0x60; returns dword at this+0x58 (or 0 if this+0x54 is null).
// @field Unknown +0x58 uint32_t field_0x58
// @field Unknown +0x5C uint32_t field_0x5C
// @field Unknown +0x60 uint32_t field_0x60
extern uint32_t __thiscall fn_00410290(void* self, void* arg1, uint32_t stackArgUnused) {
    (void)stackArgUnused; // second stack argument, cleaned by ret 8 but never read

    auto* obj = static_cast<uint8_t*>(self);

    // lea eax, [self+0x54]; test eax, eax; jne ... ; ebx = [eax+4] = self+0x58
    uint32_t result = 0;
    if (reinterpret_cast<uintptr_t>(obj) + 0x54 != 0) {
        result = lift_field<uint32_t>(obj, 0x58);
    }

    // First virtual call: vtable[0x34 / 4] (slot 13) with arg = self+0x5C.
    void* vtable = lift_field<void*>(arg1, 0);
    void* slot13 = static_cast<void**>(vtable)[13];
    auto call13 = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(slot13);
    call13(arg1, lift_field<uint32_t>(obj, 0x5C));

    // Second virtual call: vtable[0x38 / 4] (slot 14) with arg = self+0x60.
    void* slot14 = static_cast<void**>(vtable)[14];
    auto call14 = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(slot14);
    call14(arg1, lift_field<uint32_t>(obj, 0x60));

    return result;
}
} // namespace lift_00410290

// [0x0041B540]
namespace lift_0041B540 {
// @name fn_0041B540
// @summary Sets transparent background mode and white text color on a CDC, then returns a brush handle from this+0x114
// @field this +0x114 uint32_t field_0x114
// @field this +0x118 uint32_t field_0x118


extern void __thiscall ext_006A6010(void* pThis, uint32_t mode);
extern uint32_t mem_0093A0E4;

uint32_t __thiscall fn_0041B540(void* pThis, void* pDC, void* pWnd, uint32_t nCtlColor) {
    (void)pWnd;
    (void)nCtlColor;

    ext_006A6010(pDC, 1);

    uint32_t color = mem_0093A0E4;
    uintptr_t vtable = *reinterpret_cast<const uintptr_t*>(pDC);
    using SetTextColorFn = void(__thiscall*)(void*, uint32_t);
    auto setTextColor = *reinterpret_cast<const SetTextColorFn*>(vtable + 0x38);
    setTextColor(pDC, color);

    uintptr_t brushPtr = reinterpret_cast<uintptr_t>(pThis) + 0x114;
    if (brushPtr != 0) {
        return *reinterpret_cast<const uint32_t*>(brushPtr + 4);
    }
    return 0;
}
} // namespace lift_0041B540

// [0x004155A0] sub_004155A0 (60 bytes)
namespace lift_004155A0 {
// IAT slot holding KERNEL32!WideCharToMultiByte (loaded at runtime).
extern uintptr_t mem_009241F8;

using WideCharToMultiByteFn = int(__stdcall*)(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr,
                                              int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte,
                                              LPCSTR lpDefaultChar, BOOL* lpUsedDefaultChar);

// @name descriptiveName: wideStringToAnsiBuffer
// @summary Converts a NUL-terminated wide string to the ANSI code page (CP_ACP) into dst, including the terminator; returns dst.
char* fn_004155A0(LPCWSTR src, LPSTR dst) {
    // Length in wide chars including the terminating NUL.
    int count = 0;
    while (src[count] != L'\0') {
        ++count;
    }
    count += 1;

    reinterpret_cast<WideCharToMultiByteFn>(mem_009241F8)(0, 0, src, count, dst, count, nullptr, nullptr);
    return dst;
}
} // namespace lift_004155A0

// [0x00418830] sub_00418830 (62 bytes)
namespace lift_00418830 {
// Known callee 0x006A5FDA: thunk_MFC80_ord_2164 (IAT jump thunk forwarding to MFC80!ord_2164.)
// Thiscall-style: receiver in ecx, one stack argument.
extern void ext_006A5FDA(void* self, int arg);
// IAT slot for USER32!SendMessageA; holds the import address at runtime.
extern uintptr_t mem_00925694;

// @name CheckButtonStateAndNotifyChildren
// @class UnknownClass
// @summary Queries a button's check state via BM_GETCHECK (0xF0) and forwards the boolean result to two child sub-objects.
// @field UnknownClass +0x808 void* field_0x808
// @field UnknownClass +0x85C void* field_0x85c
// @field UnknownClass +0x8D0 HWND hwnd
void fn_00418830(void* self) {
    HWND hwnd = lift_field<HWND>(self, 0x8D0);
    auto send_message = reinterpret_cast<LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM)>(mem_00925694);

    // BM_GETCHECK returns BST_CHECKED (1) when checked.
    int checked = (send_message(hwnd, 0xF0, 0, 0) == 1) ? 1 : 0;

    ext_006A5FDA(lift_field<void*>(self, 0x808), checked);
    ext_006A5FDA(lift_field<void*>(self, 0x85C), checked);
}
} // namespace lift_00418830

// [0x0041CB00] sub_0041CB00 (64 bytes)
namespace lift_0041CB00 {
// Known callee 0x006AD180: getDerefField0x4 (Reads a pointer at offset 0x4 and returns the dereferenced 32-bit value.)
extern uint32_t __thiscall ext_006AD180(void* self);

// @name Unknown::DispatchDerefPair
// @class Unknown
// @summary Derefs arg1 (and arg2 when nonzero) via ext_006AD180, then calls vtable slot 4 of the object at self+0x4 with (y, x), where y is deref(arg2) or 0 and x is deref(arg1).
// @field Unknown +0x04 void* field_0x04
extern uint32_t __thiscall fn_0041CB00(void* self, uint32_t arg1, uint32_t arg2) {
    const uint32_t x = ext_006AD180(reinterpret_cast<void*>(static_cast<uintptr_t>(arg1)));

    uint32_t y = 0;
    if (arg2 != 0) {
        y = ext_006AD180(reinterpret_cast<void*>(static_cast<uintptr_t>(arg2)));
    }

    void* obj = lift_field<void*>(self, 0x4);
    void** vtable = *reinterpret_cast<void***>(obj);

    using SlotFn = uint32_t(__thiscall*)(void* self_, uint32_t a, uint32_t b);
    SlotFn target = reinterpret_cast<SlotFn>(vtable[4]);
    return target(obj, y, x);
}
} // namespace lift_0041CB00

// [0x0041CAB0] sub_0041CAB0 (68 bytes)
namespace lift_0041CAB0 {
// Known callee 0x006AD180: getDerefField0x4 (Reads a pointer at offset 0x4 and returns the dereferenced 32-bit value.)
uint32_t __thiscall ext_006AD180(void* self);

// @name Unknown::setFlagAndDispatch
// @class Unknown
// @summary Sets this+0x2c to 1, dereferences a and b (b optional, 0 if null) via getDerefField0x4, then calls vtable slot 3 of the object at this+0x4 with the two results.
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x2c uint8_t field_0x2c
void __thiscall fn_0041CAB0(void* self, void* a, void* b) {
    auto* self_bytes = static_cast<uint8_t*>(self);
    self_bytes[0x2c] = 1;

    const uint32_t da = ext_006AD180(a);
    uint32_t db = 0;
    if (b != nullptr) {
        db = ext_006AD180(b);
    }

    const uint32_t obj = *reinterpret_cast<uint32_t*>(self_bytes + 0x04);
    const uint32_t vtbl = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(obj));
    const uint32_t method = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(vtbl) + 0x0C);

    using VirtualSlot3 = void(__thiscall*)(void* self, uint32_t first, uint32_t second);
    auto fn = reinterpret_cast<VirtualSlot3>(static_cast<uintptr_t>(method));
    fn(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)), da, db);
}
} // namespace lift_0041CAB0

// [0x0041C660] sub_0041C660 (68 bytes)
namespace lift_0041C660 {
// @name forwardScaledVirtualCall_0041C660
// @class Unknown
// @summary If this->+0x08 is non-null, calls its vtable slot 13 with (arg1, arg2 / 120, arg3, arg4); otherwise returns 0.
// @field Unknown +0x08 void* field_0x08

namespace {
// Slot 13 of the vtable at byte offset 0x34 (0x34 / sizeof(void*) on 32-bit = 13).
using VirtualSlot13Fn = uint8_t(__thiscall*)(void* self, int32_t arg1, int32_t scaled, int32_t arg3, int32_t arg4);
}

uint8_t __thiscall fn_0041C660(void* self, int32_t arg1, int16_t arg2, int32_t arg3, int32_t arg4) {
    void* target = lift_field<void*>(self, 0x08);
    if (target == nullptr) {
        return 0;
    }

    // Signed 16-bit arg2 divided by 120 (compiled as a magic-number multiply in the original).
    const int32_t scaled = static_cast<int32_t>(arg2) / 120;

    void** vtable = *reinterpret_cast<void***>(target);
    auto fn = reinterpret_cast<VirtualSlot13Fn>(vtable[13]);
    return fn(target, arg1, scaled, arg3, arg4);
}
} // namespace lift_0041C660

// [0x004141D0] sub_004141D0 (70 bytes)
namespace lift_004141D0 {
// Known callee 0x006A6010: thunk_MFC80_ord_5731 (IAT jump thunk forwarding to MFC80!ord_5731.)
// Arity inferred from the call site: ecx = arg1 (thiscall receiver), one stack push of 1.
extern void ext_006A6010(uint32_t arg0, int arg1);
extern int mem_0093A0CC;  // .rdata dword 0x00FFFFFF (loaded and pushed as a value)
extern int mem_0093A0C4;  // .rdata "bfu" (dword loaded and pushed as a value)

// @name Unknown::configureAndReadLink
// @class Unknown
// @summary Calls ext_006A6010(arg1, 1), invokes vtable slots +0x38 and +0x34 on arg1 with two constants, then returns the dword at this+0x1B8 (or 0 when this+0x1B4 is null). Callee pops 12 bytes; the two trailing stack args are unused.
// @field Unknown +0x1B4 uint8_t field_0x1b4[]
// @field Unknown +0x1B8 uint32_t field_0x1b8
uint32_t fn_004141D0(void* self, void* arg1) {
    using ThisCall1 = void(__thiscall*)(void* self, uint32_t arg);

    // push 1; ecx = arg1; call thunk_MFC80_ord_5731
    ext_006A6010(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(arg1)), 1);

    // push [0x0093A0CC]; ecx = arg1; call [vtbl(arg1) + 0x38]
    void* vtbl = lift_field<void*>(arg1, 0);
    auto slot38 = reinterpret_cast<ThisCall1>(lift_field<void*>(vtbl, 0x38));
    slot38(arg1, static_cast<uint32_t>(mem_0093A0CC));

    // push [0x0093A0C4]; ecx = arg1; call [vtbl(arg1) + 0x34]
    auto slot34 = reinterpret_cast<ThisCall1>(lift_field<void*>(vtbl, 0x34));
    slot34(arg1, static_cast<uint32_t>(mem_0093A0C4));

    // lea eax, [self + 0x1B4]; test; if non-null return dword at [eax + 4]
    uint8_t* sub = static_cast<uint8_t*>(self) + 0x1B4;
    if (sub != nullptr) {
        return lift_field<uint32_t>(sub, 4);
    }
    return 0;
}
} // namespace lift_004141D0

// [0x0041CB80] sub_0041CB80 (72 bytes)
namespace lift_0041CB80 {
extern uint32_t ext_006AD180(void* self);
extern void ext_006616C0(void* self);
extern void* ext_006A6E9E(void* pVoid, int32_t offset, const void* src, const void* dst, int32_t isReference);
extern int32_t ext_00465B30(void);
extern void ext_00469080(void* self);
extern void ext_00469020(void* self);
extern int mem_00A2EFEC;
extern int mem_00A2E2D8;

static void* lift_ptr(uint32_t value) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(value));
}

// @name Unknown::DispatchSubobjectDynamicCast
// @class Unknown
// @summary Forwards to subobject at +0x10 of the object returned by ext_006AD180, then
//          dynamic-casts the returned pointer and, on success, calls the two helpers.
// @field Unknown +0x04 void* field_0x04 (read indirectly via ext_006AD180, not directly here)
void fn_0041CB80(void* self) {
    const uint32_t inner = ext_006AD180(self);
    ext_006616C0(lift_ptr(inner + 0x10));

    // Assumes eax still holds `inner` after the void call above; the original reads eax
    // as the dynamic-cast source. Flagged for verification.
    void* casted = ext_006A6E9E(lift_ptr(inner), 0,
                                reinterpret_cast<const void*>(&mem_00A2E2D8),
                                reinterpret_cast<const void*>(&mem_00A2EFEC),
                                0);
    if (casted == nullptr) {
        return;
    }

    // Original pushes eax before the first call to ext_00465B30, which is declared
    // with no parameters; that stray push is not modelled here.
    const int32_t first = ext_00465B30();
    ext_00469080(lift_ptr(static_cast<uint32_t>(first)));

    const int32_t second = ext_00465B30();
    ext_00469020(lift_ptr(static_cast<uint32_t>(second)));
}
} // namespace lift_0041CB80

// [0x0041CF00] sub_0041CF00 (76 bytes)
namespace lift_0041CF00 {
// @name Unknown::CopyFromSource_0041CF00
// @class Unknown
// @summary Copies a (value, object) pair into self; value comes from virtual slot 0x70 of the source object, or 0 if there is no object.
// @field Unknown +0x00 uint32_t value
// @field Unknown +0x04 void* object

namespace {

// 32-bit thiscall signature of the virtual slot at vtable+0x70 (index 28).
// self arrives in ecx, the scratch out-slot and source pointer are stack args.
using VirtualQuerySlot = void* (__thiscall*)(void* self, uint32_t* out, void* src);

}  // namespace

void* fn_0041CF00(void* self, void* src) {
    uint8_t* dst = static_cast<uint8_t*>(self);
    uint8_t* srcBytes = static_cast<uint8_t*>(src);

    uint32_t value = 0;
    void* object = lift_field<void*>(srcBytes, 0x4);

    if (object != nullptr) {
        void* const* vtable = *reinterpret_cast<void* const* const*>(object);
        auto slot = reinterpret_cast<VirtualQuerySlot>(vtable[0x70 / 4]);

        uint32_t scratch = 0;
        void* result = slot(object, &scratch, src);
        value = *static_cast<uint32_t*>(result);
    }

    lift_field<uint32_t>(dst, 0x0) = value;
    lift_field<void*>(dst, 0x4) = lift_field<void*>(srcBytes, 0x4);
    return dst;
}
} // namespace lift_0041CF00

// [0x00419B90] sub_00419B90 (81 bytes)
namespace lift_00419B90 {
// Known callee 0x006A6304: thunk_MFC80_ord_1191 (IAT jump thunk forwarding to MFC80!ord_1191.)
extern void ext_006A6304();
// IAT slot holding SHELL32!SHGetMalloc
extern int mem_00925540;

// @name CSomething::ReleaseBuffer
// @class CSomething
// @summary Frees the buffer at +0x60 via an IMalloc (fetching SHGetMalloc if none given), then clears it.
// @field CSomething +0x60 void* field_0x60
void fn_00419B90(void* self, void* pMalloc) {
    auto* obj = static_cast<unsigned char*>(self);
    void** pField = reinterpret_cast<void**>(obj + 0x60);
    if (*pField == nullptr) {
        return;
    }

    bool acquired = false;
    if (pMalloc == nullptr) {
        acquired = true;
        using GetMallocFn = HRESULT(__stdcall*)(void**);
        auto getMalloc = reinterpret_cast<GetMallocFn>(static_cast<uintptr_t>(mem_00925540));
        HRESULT hr = getMalloc(&pMalloc);
        if (hr < 0) {
            ext_006A6304();
        }
    }

    // IMalloc vtable: [0]=QueryInterface, [2]=Release, [5]=Free
    void** vtbl = *reinterpret_cast<void***>(pMalloc);
    using FreeFn = void(__stdcall*)(void*, void*);
    reinterpret_cast<FreeFn>(vtbl[5])(pMalloc, *pField);

    if (acquired) {
        using ReleaseFn = unsigned long(__stdcall*)(void*);
        reinterpret_cast<ReleaseFn>(vtbl[2])(pMalloc);
    }

    *pField = nullptr;
}
} // namespace lift_00419B90

// [0x0041CF50] sub_0041CF50 (85 bytes)
namespace lift_0041CF50 {
// @name Unknown::assignFromOther_0041CF50
// @class Unknown
// @summary Self-assignment guarded copy: if other differs, releases the current field_0x04 via vtable slot 0x78, copies other's field_0x04, then sets field_0x00 to the value written by other's field_0x04 vtable slot 0x70 (0 when that pointer is null). Returns self.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 void* field_0x04
void* __thiscall fn_0041CF50(void* self, void* other) {
    if (self == other) {
        return self;
    }

    // Release the current field_0x04 object (vtable slot 0x78, arg = self).
    void* old = lift_field<void*>(self, 0x04);
    if (old != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(old);
        using ReleaseFn = void(__thiscall*)(void* self_, void* owner);
        reinterpret_cast<ReleaseFn>(vtbl[0x78 / 4])(old, self);
    }

    // Copy other's field_0x04 into self.
    lift_field<void*>(self, 0x04) = lift_field<void*>(other, 0x04);

    // Fetch a value from the copied object (vtable slot 0x70) into an out-slot.
    uint32_t out = 0;
    void* src = lift_field<void*>(other, 0x04);
    if (src != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(src);
        using FetchFn = void(__thiscall*)(void* self_, uint32_t* out_, void* other_);
        reinterpret_cast<FetchFn>(vtbl[0x70 / 4])(src, &out, other);
    }
    lift_field<uint32_t>(self, 0x00) = out;

    return self;
}
} // namespace lift_0041CF50

// [0x0041C820] sub_0041C820 (86 bytes)
namespace lift_0041C820 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762).
// Allocator: called cdecl with a byte count (0x10 here); returns NULL on failure.
extern void* __cdecl ext_006A5C62(size_t size);

// @name Unknown::ctorAllocNode_0041C820
// @class Unknown
// @summary Sets the vtable word, allocates a 0x10-byte node (zeroing its +0x4/+0x8/+0xC words) and stores it at +0x04 (or NULL if allocation fails); returns this.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 void* field_0x04
// @field Unknown +0x08 uint32_t field_0x08
void* fn_0041C820(void* self) {
    // Original MSVC SEH frame (fs:[0] push/pop) is compiler scaffolding and is omitted.
    lift_field<uint32_t>(self, 0x00) = 0x0092DB90u;
    lift_field<uint32_t>(self, 0x08) = 0u;

    void* node = ext_006A5C62(0x10);
    if (node != nullptr) {
        lift_field<uint32_t>(node, 0x04) = 0u;
        lift_field<uint32_t>(node, 0x08) = 0u;
        lift_field<uint32_t>(node, 0x0C) = 0u;
    }

    lift_field<void*>(self, 0x04) = node;
    return self;
}
} // namespace lift_0041C820

// [0x00414D30]
namespace lift_00414D30 {
// @name Rect2D::initNormalized
// @class Rect2D
// @summary Initializes a 2D bounding box from four floats and normalizes min/max X and Y
// @field Rect2D +0x00 float minX
// @field Rect2D +0x04 float minY
// @field Rect2D +0x08 float maxX
// @field Rect2D +0x0c float maxY


void* __thiscall sub_00414D30(void* self, float x0, float y0, float x1, float y1) {
    float* rect = static_cast<float*>(self);
    rect[0] = x0;
    rect[1] = y0;
    rect[2] = x1;
    rect[3] = y1;

    if (x1 < x0) {
        rect[0] = rect[2];
        rect[2] = x0;
    }

    if (rect[3] < rect[1]) {
        float tmp = rect[1];
        rect[1] = rect[3];
        rect[3] = tmp;
    }

    return self;
}
} // namespace lift_00414D30

// [0x00410390]
namespace lift_00410390 {
// @name sub_00410390
// @summary Checks virtual predicate at +0x28 and compares string at +0x458 against three known values
// @field unknown +0x00 void* vtable
// @field unknown +0x458 std::string field_0x458


extern uint32_t mem_00924FC0;
extern uint32_t mem_00924FC4;

uint8_t __fastcall sub_00410390(uint32_t self) {
    uint32_t vtable = *reinterpret_cast<uint32_t*>(self);
    using VFunc0x28 = uint8_t(__fastcall*)(uint32_t);
    auto vfunc = reinterpret_cast<VFunc0x28>(*reinterpret_cast<uint32_t*>(vtable + 0x28));
    if (vfunc(self) != 0) {
        return 0;
    }

    uint32_t str_ptr = self + 0x458;

    using StrEqCStr = uint8_t(__cdecl*)(uint32_t, uint32_t);
    auto eq_cstr = reinterpret_cast<StrEqCStr>(mem_00924FC0);
    if (eq_cstr(str_ptr, 0x00928B5Du) != 0) {
        return 1;
    }

    using StrEqStr = uint8_t(__cdecl*)(uint32_t, uint32_t);
    auto eq_str = reinterpret_cast<StrEqStr>(mem_00924FC4);
    if (eq_str(str_ptr, 0x00B41B9Cu) != 0) {
        return 1;
    }

    if (eq_str(str_ptr, 0x00B41B80u) != 0) {
        return 1;
    }

    return 0;
}
} // namespace lift_00410390

// [0x00412E60]
namespace lift_00412E60 {
// @name getVectorElementAt
// @summary Returns the 32-bit element at the given index from a vector-like container, or 0 if out of bounds.
// @field Container +0x08 uint32_t* begin
// @field Container +0x0c uint32_t* end


extern uint32_t mem_00925134;

uint32_t __thiscall sub_00412E60(void* self, int32_t index) {
    if (index < 0) {
        return 0;
    }

    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t begin = *reinterpret_cast<uint32_t*>(base + 0x8);
    int32_t count = 0;
    if (begin != 0) {
        uint32_t end = *reinterpret_cast<uint32_t*>(base + 0xc);
        count = static_cast<int32_t>(end - begin) >> 2;
    }

    if (index > count - 1) {
        return 0;
    }

    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint32_t ptr = begin;
    if (ptr > *reinterpret_cast<uint32_t*>(base + 0xc)) {
        invalid_param();
    }

    ptr += static_cast<uint32_t>(index) * 4;
    if (ptr > *reinterpret_cast<uint32_t*>(base + 0xc) || ptr < *reinterpret_cast<uint32_t*>(base + 0x8)) {
        invalid_param();
    }
    if (ptr >= *reinterpret_cast<uint32_t*>(base + 0xc)) {
        invalid_param();
    }

    return *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(ptr));
}
} // namespace lift_00412E60

// [0x00415ED0] sub_00415ED0 (20 bytes)
namespace lift_00415ED0 {
// Known callee 0x00404BE0: InitWithMode (Initializes the object's vtable and state fields, applies mode via sub_00404720, and returns self.)
extern void* ext_00404BE0(void* self, uint32_t mode);

// @name InitWithDefaultMode
// @summary Calls InitWithMode(self, 0), then stores the constant 0x0092C764 into the first dword of self (vtable slot), and returns self.
// @field Unknown +0x00 DWORD field_0x00
void* fn_00415ED0(void* self) {
    ext_00404BE0(self, 0);
    lift_field<uint32_t>(self, 0x00) = 0x0092C764;
    return self;
}
} // namespace lift_00415ED0

// [0x0041D980] sub_0041D980 (95 bytes)
namespace lift_0041D980 {
// Known callee 0x0066AD10: sub_0066AD10 (Auto-lifted identical-shape clone of 0x00497860 (forwardMakeBoolString).)
// Called cdecl as (&mem_00ACC524, 0xA2F0CC); the second argument is passed through as a raw word.
extern void* ext_0066AD10(void* out_str, uintptr_t arg);
// Called cdecl with one word argument: the address 0x00914BB0 (registered as a teardown hook).
extern void ext_006A6C87(uintptr_t fn);

// Init-guard bitfield and the function-local static object.
extern uint32_t mem_00ACC540;
extern int mem_00ACC524;

// @name GetStaticObject_0041D980
// @summary Lazily constructs a function-local static at mem_00ACC524 on first call (guard bit 0 in mem_00ACC540), registers its teardown, and returns its address.
void* fn_0041D980() {
    if ((mem_00ACC540 & 1u) == 0) {
        mem_00ACC540 |= 1u;
        ext_0066AD10(reinterpret_cast<void*>(&mem_00ACC524), static_cast<uintptr_t>(0x00A2F0CCu));
        ext_006A6C87(static_cast<uintptr_t>(0x00914BB0u));
    }
    return reinterpret_cast<void*>(&mem_00ACC524);
}
} // namespace lift_0041D980

// [0x0041DD40]
namespace lift_0041DD40 {
// @name destroyStringPairRange
// @summary Destroys a range [begin, end) of 0x38-byte elements, each containing two std::string fields at +0x00 and +0x1C.


extern uint32_t mem_00924FF4;

void sub_0041DD40(uint32_t begin, uint32_t end) {
    uint32_t cur = begin;
    while (cur != end) {
        reinterpret_cast<void(__thiscall*)(uint32_t)>(mem_00924FF4)(cur + 0x1C);
        reinterpret_cast<void(__thiscall*)(uint32_t)>(mem_00924FF4)(cur);
        cur += 0x38;
    }
}
} // namespace lift_0041DD40

// [0x00415430] sub_00415430 (100 bytes)
namespace lift_00415430 {
// Known callee 0x006A5E00: thunk_MFC80_ord_2372 (IAT jump thunk forwarding to MFC80!ord_2372.)
// Used as CWnd::FromHandle(HWND) -> CWnd*.
extern void* ext_006A5E00(HWND hwnd);
// Known callee 0x006A5EC0: thunk_MFC80_ord_2654 (IAT jump thunk forwarding to MFC80!ord_2654.)
// Used as CWnd::GetDlgCtrlID() (thiscall, ecx = this) -> UINT.
extern UINT ext_006A5EC0(void* self);
// IAT slots for USER32 imports (GetParent, IsWindow, SendMessageA).
extern void* mem_00925650;
extern void* mem_0092561C;
extern void* mem_00925694;

// @name Unknown::notifyParentWithCtrlId
// @class Unknown
// @summary Sends WM_NOTIFY (code NM_RETURN) to the parent window of this control if that parent is still a valid window.
// @field Unknown +0x20 HWND field_0x20
// @field Unknown +0x38 HWND field_0x38
void fn_00415430(void* self) {
    // Prefer the explicit override at +0x38; otherwise use the parent of the control's window.
    HWND hwnd = lift_field<HWND>(self, 0x38);
    if (hwnd == nullptr) {
        HWND own = lift_field<HWND>(self, 0x20);
        hwnd = reinterpret_cast<HWND(__stdcall*)(HWND)>(mem_00925650)(own);  // GetParent
    }

    void* pWnd = ext_006A5E00(hwnd);
    if (pWnd == nullptr) {
        return;
    }

    HWND parentHwnd = lift_field<HWND>(pWnd, 0x20);
    if (reinterpret_cast<BOOL(__stdcall*)(HWND)>(mem_0092561C)(parentHwnd) == FALSE) {  // IsWindow
        return;
    }

    UINT ctrlId = ext_006A5EC0(self);

    struct NotifyHdr {
        HWND hwndFrom;
        UINT_PTR idFrom;
        UINT code;
    } nm{};
    nm.hwndFrom = lift_field<HWND>(self, 0x20);
    nm.idFrom = ctrlId;
    nm.code = static_cast<UINT>(-4);  // NM_RETURN

    // SendMessageA(parentHwnd, WM_NOTIFY (0x4E), ctrlId, &nm)
    reinterpret_cast<LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM)>(mem_00925694)(
        parentHwnd, 0x4E, static_cast<WPARAM>(ctrlId), reinterpret_cast<LPARAM>(&nm));
}
} // namespace lift_00415430

// [0x0041A190] sub_0041A190 (105 bytes)
namespace lift_0041A190 {
// Guest-address helpers. Guest pointers are 32-bit VA values stored in the
// original image; they are dereferenced through host pointers here.
static inline uint32_t guest_u32(uint32_t addr, ptrdiff_t off) {
    return lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(addr)), off);
}

static inline uint8_t guest_u8(uint32_t addr, ptrdiff_t off) {
    return lift_field<uint8_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(addr)), off);
}

// Result pair written through the hidden return pointer (EAX on return).
struct LowerBoundResult {
    uint32_t tree;  // the owning container (this)
    uint32_t node;  // found node, or the header node when not found
};

// @name Unknown::LowerBoundNode
// @class Unknown
// @summary Tree lower_bound on a 32-bit unsigned key: returns {this, node} for the first node whose key is not less than the argument, or {this, header} when none matches.
// @field Unknown +0x04 uint32_t field_0x04
// @field TreeNode +0x00 uint32_t left
// @field TreeNode +0x04 uint32_t parent
// @field TreeNode +0x08 uint32_t right
// @field TreeNode +0x0C uint32_t key
// @field TreeNode +0x15 uint8_t isnil
LowerBoundResult* fn_0041A190(void* self, LowerBoundResult* out, uint32_t key_addr) {
    const uint32_t head = lift_field<uint32_t>(self, 0x04);   // header node
    uint32_t y = head;                                        // candidate (lower bound)
    uint32_t x = guest_u32(head, 0x04);                       // root (header->_Parent)

    const uint32_t key = guest_u32(key_addr, 0x00);

    // Descend the tree; stop at the nil sentinel (isnil at +0x15).
    while (guest_u8(x, 0x15) == 0) {
        if (guest_u32(x, 0x0C) >= key) {
            y = x;                       // node key not less than key: candidate
            x = guest_u32(x, 0x00);      // go left
        } else {
            x = guest_u32(x, 0x08);      // go right
        }
    }

    // No candidate, or key is strictly less than candidate: not found.
    if (y == head || key < guest_u32(y, 0x0C)) {
        out->tree = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
        out->node = head;
    } else {
        out->tree = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));
        out->node = y;
    }

    return out;
}
} // namespace lift_0041A190

// [0x00416C30] sub_00416C30 (107 bytes)
namespace lift_00416C30 {
// Known callee 0x006A5F4A: thunk_MFC80_ord_3761 (IAT jump thunk forwarding to MFC80!ord_3761.)
extern void ext_006A5F4A();
// IAT slots (hold import addresses at runtime; not data constants).
extern void* mem_009242FC;  // MFC80!ord_310  (string construct)
extern void* mem_00924300;  // MFC80!ord_876  (string -> const char*)
extern void* mem_009251E4;  // MSVCR80!atoi
extern void* mem_009242F4;  // MFC80!ord_578  (string destruct)

// @name readIntFromAccessor
// @summary Fetches a string through thunk_MFC80_ord_3761 into a temporary string object and returns atoi() of it.
int fn_00416C30(void* obj) {
    // Opaque storage for the temporary MFC string; real layout/size not recovered.
    alignas(16) unsigned char tmp[32] = {};

    using Fn0 = void (*)(void* self);
    using Fn1 = void (*)(void* self, void* out);
    using StrFn = const char* (*)(void* self);
    using AtoiFn = int (*)(const char*);

    reinterpret_cast<Fn0>(mem_009242FC)(tmp);
    reinterpret_cast<Fn1>(&ext_006A5F4A)(obj, tmp);
    const char* text = reinterpret_cast<StrFn>(mem_00924300)(tmp);
    int value = reinterpret_cast<AtoiFn>(mem_009251E4)(text);
    reinterpret_cast<Fn0>(mem_009242F4)(tmp);
    return value;
}
} // namespace lift_00416C30

// [0x00419F50] sub_00419F50 (108 bytes)
namespace lift_00419F50 {
// @name sub_00419F50
// @summary Auto-lifted identical-shape clone of 0x005E0B20 (TreeIterator::increment).
namespace lift_005E0B20 {
// MSVCR80!_invalid_parameter_noinfo, loaded through IAT slot mem_00925134.
extern void (*mem_00925134)(void);

// @name TreeIterator::increment
// @class TreeIterator
// @summary Advances a binary-tree iterator to its in-order successor (red-black tree style, nil sentinel at node+0x51).
// @field TreeIterator +0x00 void* field_0x00
// @field TreeIterator +0x04 uint8_t* node
void fn_00419F50(void* self) {
    // Node layout used here: +0x00 left, +0x04 parent, +0x08 right, +0x51 isNil (byte).
    // Iterator layout: +0x00 owner (null-checked), +0x04 current node.
    auto* it = static_cast<uint8_t*>(self);

    auto load_ptr = [](const uint8_t* base, std::size_t off) -> uint8_t* {
        uint8_t* p;
        std::memcpy(&p, base + off, sizeof p);
        return p;
    };
    auto store_ptr = [](uint8_t* base, std::size_t off, uint8_t* v) {
        std::memcpy(base + off, &v, sizeof v);
    };
    auto is_nil = [](const uint8_t* n) -> bool {
        return n[0x15] != 0;
    };
    auto invalid_parameter = []() {
        if (mem_00925134) {
            mem_00925134();
        }
    };

    if (load_ptr(it, 0x00) == nullptr) {
        invalid_parameter();
    }

    uint8_t* node = load_ptr(it, 0x04);
    if (is_nil(node)) {
        invalid_parameter();
        return;
    }

    uint8_t* right = load_ptr(node, 0x08);
    if (!is_nil(right)) {
        // Successor is the leftmost node of the right subtree.
        uint8_t* leftChild = load_ptr(right, 0x00);
        if (is_nil(leftChild)) {
            store_ptr(it, 0x04, right);
            return;
        }
        uint8_t* cur = right;
        do {
            cur = leftChild;
            leftChild = load_ptr(cur, 0x00);
        } while (!is_nil(leftChild));
        store_ptr(it, 0x04, cur);
        return;
    }

    // No right subtree: climb while we are a right child; stop at a left-child link.
    uint8_t* p = load_ptr(node, 0x04);
    if (is_nil(p)) {
        store_ptr(it, 0x04, p);
        return;
    }
    for (;;) {
        uint8_t* cur = load_ptr(it, 0x04);
        if (load_ptr(p, 0x08) != cur) {
            break;
        }
        store_ptr(it, 0x04, p);
        uint8_t* grand = load_ptr(p, 0x04);
        p = grand;
        if (is_nil(grand)) {
            break;
        }
    }
    store_ptr(it, 0x04, p);
}
} // namespace lift_005E0B20
} // namespace lift_00419F50

// [0x00414E00] sub_00414E00 (94 bytes)
namespace lift_00414E00 {
// Known callee 0x004153A0: sub_004153A0 (Pure jump thunk forwarding to sub_00415300.)
extern void ext_004153A0(void* node);
// Known callee 0x00673C20: advanceTreeIterator (Advances a red-black tree iterator to its in-order successor: goes to the leftmost node of the right subtree if one exists, otherwise climbs parents while the current node is a right child; reports an invalid parameter when the iterator is null or already at the end.)
extern void ext_00673C20(void** iter);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* node);
// IAT slot holding the MSVCR80 invalid-parameter handler (called through when a check fails).
extern void* mem_00925134;

static void invalid_parameter() {
    reinterpret_cast<void (*)()>(mem_00925134)();
}

// @name TreeRange::releaseChainUntil_00414E00
// @class TreeRange
// @summary Walks tree iterator a1 toward a3, releasing each a2 node's +0x28 chain via fn_004153A0 and MFC80 ord_764, and returns once a2 equals a4.
// @field TreeNode +0x04 void* field_0x04
// @field TreeNode +0x28 void* field_0x28
void fn_00414E00(void* a1, void* a2, void* a3, void* a4) {
    for (;;) {
        void* esi = a1;
        if (esi == nullptr || esi != a3) {
            invalid_parameter();
        }

        void* edi = a2;
        if (edi == a4) {
            return;
        }

        ext_00673C20(&a1);

        if (esi == nullptr) {
            invalid_parameter();
        }
        if (edi == lift_field<void*>(esi, 0x04)) {
            invalid_parameter();
        }

        edi = lift_field<void*>(edi, 0x28);
        if (edi == nullptr) {
            continue;
        }

        ext_004153A0(edi);
        ext_006A5C5C(edi);
    }
}
} // namespace lift_00414E00

// [0x00414E60] sub_00414E60 (94 bytes)
namespace lift_00414E60 {
// Known callee 0x004153A0: sub_004153A0 (Pure jump thunk forwarding to sub_00415300.)
// Takes its single argument in ECX.
extern void ext_004153A0(void* thisPtr);
// Known callee 0x00419F50: sub_00419F50 (Auto-lifted TreeIterator::increment clone.)
// Takes a pointer to the iterator slots in ECX.
extern void ext_00419F50(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);
// IAT slot holding the invalid-parameter handler (MSVCR80!_invalid_parameter_noinfo).
extern void (*mem_00925134)();

// Iterator slots as laid out on the stack: the increment helper advances `node` in place.
struct TreeIterSlot {
    uint32_t owner; // +0x00
    uint32_t node;  // +0x04
};

static inline void* as_ptr(uint32_t addr) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(addr));
}

static inline uint32_t field32(uint32_t base, ptrdiff_t offset) {
    return lift_field<uint32_t>(as_ptr(base), offset);
}

static inline void invalid_parameter() {
    if (mem_00925134) {
        mem_00925134();
    }
}

// @name TreeIterator::releaseChildrenUntil
// @class TreeIterator
// @summary Walks an iterator from `node` until it reaches `end`, advancing it with TreeIterator::increment; for each visited node with a non-null +0x10 pointer, forwards that pointer to ext_004153A0 and ext_006A5C5C. Invalid-parameter handler is called on owner/expectation mismatches.
// @field TreeIterator +0x00 uint32_t owner
// @field TreeIterator +0x04 uint32_t node
// @field <unknown> +0x04 uint32_t field_0x04
// @field <unknown> +0x10 uint32_t field_0x10
void __stdcall fn_00414E60(uint32_t owner, uint32_t node, uint32_t expectedOwner, uint32_t end) {
    TreeIterSlot it{owner, node};

    for (;;) {
        const uint32_t curOwner = it.owner;
        if (curOwner == 0 || curOwner != expectedOwner) {
            invalid_parameter();
        }

        const uint32_t cur = it.node;
        if (cur == end) {
            return;
        }

        ext_00419F50(&it); // advances it.node to the in-order successor

        if (curOwner == 0) {
            invalid_parameter();
        } else if (cur == field32(curOwner, 0x04)) {
            invalid_parameter();
        }

        const uint32_t child = field32(cur, 0x10);
        if (child == 0) {
            continue;
        }

        ext_004153A0(as_ptr(child));
        ext_006A5C5C(as_ptr(child));
    }
}
} // namespace lift_00414E60

// [0x0041DA50]
namespace lift_0041DA50 {
// @name getFirstVectorElementOrZero
// @summary Returns the first element of the vector returned by sub_00469170(sub_00465B30()), or 0 if sub_00660280() is 0 or the vector is empty.


extern int32_t __cdecl ext_00660280(void);
extern int32_t __cdecl ext_00465B30(void);
extern void* __fastcall ext_00469170(void* self);
extern void (__cdecl *mem_00925134)(void);

extern int32_t __cdecl fn_0041DA50(void) {
    if (ext_00660280() == 0) {
        return 0;
    }

    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_00465B30())));
    uint8_t* vec = reinterpret_cast<uint8_t*>(ext_00469170(obj));

    uint32_t begin_addr = *reinterpret_cast<uint32_t*>(vec + 0x4);
    if (begin_addr == 0) {
        return 0;
    }

    uint32_t end_addr = *reinterpret_cast<uint32_t*>(vec + 0x8);
    int32_t count = static_cast<int32_t>(end_addr - begin_addr) >> 2;
    if (count == 0) {
        return 0;
    }

    if (static_cast<uint32_t>(count) == 0) {
        mem_00925134();
    }

    int32_t* begin_ptr = reinterpret_cast<int32_t*>(static_cast<uintptr_t>(begin_addr));
    return *begin_ptr;
}
} // namespace lift_0041DA50

// [0x0041A530] sub_0041A530 (110 bytes)
namespace lift_0041A530 {
// Known callee 0x0041A190: Unknown::LowerBoundNode (Tree lower_bound on a 32-bit unsigned key: returns {this, node} for the first node whose key is not less than the argument, or {this, header} when none matches.)
// Calling convention: thiscall, ecx = tree; stack = (result_pair*, const uint32_t* key); callee pops 8.
extern void __thiscall ext_0041A190(void* self, uint32_t* out_pair, const uint32_t* key);
extern uint32_t mem_00925134; // guest slot holding the invalid-parameter handler pointer

static inline uint32_t guest_u32(uint32_t addr, ptrdiff_t off) {
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(addr) + static_cast<uintptr_t>(off));
}

// @name Unknown::lowerBoundValue_0041A530
// @class Unknown
// @summary Looks up the tree's lower_bound for a 32-bit key and returns the 32-bit value stored at node+0x10; returns 0 when the tree is empty or no node matches.
// @field Unknown +0x04 uint32_t header
// @field Unknown +0x08 uint32_t field_0x08
uint32_t __thiscall fn_0041A530(uint32_t self, uint32_t key) {
    using InvalidParamFn = void (*)();
    auto invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    if (guest_u32(self, 0x08) == 0) {
        return 0;
    }

    // result[0] = tree the search was performed on, result[1] = found node (or header).
    uint32_t result[2] = {};
    ext_0041A190(reinterpret_cast<void*>(static_cast<uintptr_t>(self)), result, &key);

    uint32_t tree = result[0];
    uint32_t node = result[1];

    if (tree == 0 || tree != self) {
        invalid_param();
    }

    uint32_t header = guest_u32(self, 0x04);
    if (node == header) {
        return 0;
    }

    if (tree == 0) {
        invalid_param();
    } else if (node == guest_u32(tree, 0x04)) {
        invalid_param();
    }

    return guest_u32(node, 0x10);
}
} // namespace lift_0041A530

// [0x0041C7C0]
namespace lift_0041C7C0 {
// @name Vector::at
// @class Vector
// @summary Bounds-checked element pointer access (std::vector::at) with MSVC checked-iterator validation.
// @field Vector +0x04 uint32_t begin
// @field Vector +0x08 uint32_t end


[[noreturn]] extern void ext_0067F5B0();
extern uint32_t mem_00925134;

uint32_t __thiscall fn_0041C7C0(uint32_t self, uint32_t index) {
    uint32_t begin = *reinterpret_cast<uint32_t*>(self + 0x4);
    uint32_t end = 0;

    if (begin == 0) {
        ext_0067F5B0();
    } else {
        end = *reinterpret_cast<uint32_t*>(self + 0x8);
        uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 2);
        if (count <= index) {
            ext_0067F5B0();
        }
    }

    auto invalid_param = reinterpret_cast<void (*)()>(mem_00925134);
    if (begin > end) {
        invalid_param();
    }

    uint32_t elem = begin + 4u * index;
    if (elem > *reinterpret_cast<uint32_t*>(self + 0x8) ||
        elem < *reinterpret_cast<uint32_t*>(self + 0x4)) {
        invalid_param();
    }
    if (elem >= *reinterpret_cast<uint32_t*>(self + 0x8)) {
        invalid_param();
    }

    return elem;
}
} // namespace lift_0041C7C0

// [0x00419840]
namespace lift_00419840 {
// @name Destructor_00419840
// @summary Destructor restoring primary/secondary vtables and tearing down member subobjects and base class.
// @field UnknownClass +0x00 uint32_t vtable_0x00
// @field UnknownClass +0x74 uint32_t vtable_0x74
// @field UnknownClass +0x114 uint32_t field_0x114
// @field UnknownClass +0x11c uint8_t field_0x11c


extern uint32_t mem_0092D1D4;
extern uint32_t mem_0092D1A4;
extern uint32_t mem_0092A23C;

extern void __fastcall ext_0040EF90(void* self);
extern void __fastcall ext_006A5FF2(void* self);
extern void __fastcall ext_006A624A(void* self);

extern void __fastcall fn_00419840(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x00) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0092D1D4));
    *reinterpret_cast<uint32_t*>(base + 0x74) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0092D1A4));

    ext_0040EF90(base + 0x11c);

    *reinterpret_cast<uint32_t*>(base + 0x114) = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0092A23C));
    ext_006A5FF2(base + 0x114);

    ext_006A624A(self);
}
} // namespace lift_00419840
