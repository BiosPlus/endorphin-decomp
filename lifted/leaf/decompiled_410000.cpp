// Lifted C++ translation unit: lifted/leaf/decompiled_410000.cpp
#include "lift_compat.h"

// [0x0041A4F0] sub_0041A4F0 (60 bytes)
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
