// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/SelectOrMoveState.cpp
#include "lift_compat.h"

// [0x004435D0]
namespace lift_004435D0 {
// @name MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_4
// @class MultiTrackView::MultiTrackViewStates::SelectOrMoveState
// @summary Kills owner timer, updates selection/move state if active, invalidates view, and notifies field_0x04.
// @field MultiTrackView::MultiTrackViewStates::SelectOrMoveState +0x04 void* field_0x04
// @field MultiTrackView::MultiTrackViewStates::SelectOrMoveState +0x08 void* delegate_0x8


extern void ext_0043CD80(void* self);
extern void __stdcall ext_0043F490(void* arg);
extern void __stdcall ext_0043F460(void* arg);
extern uintptr_t ext_0043C9B0(void* self, void* arg);
extern void ext_0041C880(void* self, int arg);

using InvalidateRect_t = int(__stdcall*)(void* hWnd, const void* lpRect, int bErase);
extern uintptr_t mem_00925688;

uint8_t fn_004435D0(void* self, uintptr_t arg0, uintptr_t /*arg1*/, uintptr_t /*arg2*/) {
    auto* base = static_cast<uint8_t*>(self);
    void* delegate = *reinterpret_cast<void**>(base + 0x8);
    ext_0043CD80(delegate);

    delegate = *reinterpret_cast<void**>(base + 0x8);
    void* objA0 = *reinterpret_cast<void**>(static_cast<uint8_t*>(delegate) + 0xA0);
    if (objA0 != nullptr) {
        if ((arg0 & 0x8) != 0) {
            ext_0043F490(objA0);
        } else {
            ext_0043F460(objA0);
        }

        delegate = *reinterpret_cast<void**>(base + 0x8);
        ext_0043C9B0(delegate, reinterpret_cast<void*>(arg0));

        delegate = *reinterpret_cast<void**>(base + 0x8);
        void* hwnd = *reinterpret_cast<void**>(static_cast<uint8_t*>(delegate) + 0x20);
        auto invalidateRect = reinterpret_cast<InvalidateRect_t>(mem_00925688);
        invalidateRect(hwnd, nullptr, 1);
    }

    void* field04 = *reinterpret_cast<void**>(base + 0x4);
    ext_0041C880(field04, 0);
    return 1;
}
} // namespace lift_004435D0
