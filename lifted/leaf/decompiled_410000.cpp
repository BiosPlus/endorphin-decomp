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
