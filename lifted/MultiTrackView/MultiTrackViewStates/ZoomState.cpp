// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/ZoomState.cpp
#include "lift_compat.h"

// [0x00443390] MultiTrackView::MultiTrackViewStates::ZoomState::vfunc_1 (49 bytes)
namespace lift_00443390 {
// Known callee 0x0043C900: sub_0043C900 (21 bytes). Caller pushes one argument (3) and
// performs no cleanup afterwards, so the callee is assumed to pop it.
extern void ext_0043C900(DWORD arg0);
// Known callee 0x006A5E00: thunk_MFC80_ord_2372 (IAT jump thunk forwarding to MFC80!ord_2372).
// Called with one stack argument: the HWND returned by SetCapture.
extern void ext_006A5E00(DWORD arg0);
// IAT slot for USER32!SetCapture.
extern int mem_009256D8;

// @name MultiTrackView::MultiTrackViewStates::ZoomState::vfunc_1
// @class MultiTrackView::MultiTrackViewStates::ZoomState
// @summary Stores (owner+0xF0 - owner+0xE8) into this+0x10, then captures the mouse on the owner's window.
// @field MultiTrackView::MultiTrackViewStates::ZoomState +0x08 void* owner
// @field MultiTrackView::MultiTrackViewStates::ZoomState +0x10 double range
// @field owner +0x20 DWORD hwnd
// @field owner +0xE8 double field_0xE8
// @field owner +0xF0 double field_0xF0
void fn_00443390(void* self) {
    void* owner = lift_field<void*>(self, 0x08);
    double hi = lift_field<double>(owner, 0xF0);
    double lo = lift_field<double>(owner, 0xE8);
    lift_field<double>(self, 0x10) = hi - lo;

    ext_0043C900(3);

    owner = lift_field<void*>(self, 0x08);
    DWORD hwnd = lift_field<DWORD>(owner, 0x20);

    using SetCaptureFn = DWORD(__stdcall*)(DWORD);
    auto set_capture = reinterpret_cast<SetCaptureFn>(static_cast<uintptr_t>(mem_009256D8));
    DWORD prev = set_capture(hwnd);

    ext_006A5E00(prev);
}
} // namespace lift_00443390

// [0x004433D0]
namespace lift_004433D0 {
extern void __thiscall ext_0043DD60(void* self, double start, double end);
extern uint32_t mem_00925688;

// @name MultiTrackView::MultiTrackViewStates::ZoomState::vfunc_12
// @class MultiTrackView::MultiTrackViewStates::ZoomState
// @summary Applies horizontal zoom to the owner MultiTrackView based on drag delta and invalidates its window
// @field MultiTrackView::MultiTrackViewStates::ZoomState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::ZoomState +0x08 void* owner
// @field MultiTrackView::MultiTrackViewStates::ZoomState +0x10 double range
uint8_t __thiscall fn_004433D0(void* self, uint32_t arg1, int32_t arg2, uint32_t arg3) {
    (void)arg1;
    (void)arg3;
    uint8_t* self_bytes = reinterpret_cast<uint8_t*>(self);
    uint8_t* owner = *reinterpret_cast<uint8_t**>(self_bytes + 0x8);
    int32_t origin_x = *reinterpret_cast<int32_t*>(owner + 0xfc);

    uint8_t* state_data = *reinterpret_cast<uint8_t**>(self_bytes + 0x4);
    int32_t start_x = *reinterpret_cast<int32_t*>(state_data + 0xc);

    int32_t diff1 = start_x - origin_x;
    int32_t diff2 = arg2 - origin_x;

    if (diff1 > 0 && diff2 > 5) {
        double range = *reinterpret_cast<double*>(self_bytes + 0x10);
        double base_start = *reinterpret_cast<double*>(owner + 0xe8);
        double new_end = base_start + (static_cast<double>(diff1) * range) / static_cast<double>(diff2);

        ext_0043DD60(owner, base_start, new_end);

        uint8_t* owner_after = *reinterpret_cast<uint8_t**>(self_bytes + 0x8);
        void* hwnd = *reinterpret_cast<void**>(owner_after + 0x20);
        using InvalidateRectFn = int32_t(__stdcall*)(void*, const void*, int32_t);
        reinterpret_cast<InvalidateRectFn>(static_cast<uintptr_t>(mem_00925688))(hwnd, nullptr, 1);
    }

    return 1;
}
} // namespace lift_004433D0
