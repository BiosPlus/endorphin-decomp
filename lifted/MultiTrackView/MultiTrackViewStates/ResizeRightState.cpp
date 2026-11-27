// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/ResizeRightState.cpp
#include "lift_compat.h"

// [0x004441E0] MultiTrackView::MultiTrackViewStates::ResizeRightState::vfunc_12 (213 bytes)
namespace lift_004441E0 {
// Known callee 0x00441040: Unknown::addConstantAndTruncateToInt (Adds the double constant at mem_0092BD70 to the double at this+0x58 and returns the result converted to a 32-bit int (round-to-nearest, INT32_MIN on overflow).)
extern int32_t ext_00441040(void* self);
// Known callee 0x0043CDD0: pixelToTime (Converts a horizontal pixel coordinate in the client area to a non-negative time/value using the view's range and left margin)
extern double ext_0043CDD0(void* self, int32_t x);
// Callee 0x0043F520 (643B, unknown): called as thiscall(view, &tmp, 1).
extern void ext_0043F520(void* self, void* out, int32_t flag);
// Known callee 0x004408B0: Unknown::clampStoreIfEnabled_004408B0 (If the flag at +0x8D is set, stores max(f+0x50, arg) into +0x58 (clearing the flag at +0x89 when arg < f+0x50); otherwise does nothing. Takes one double argument, callee-cleans 8 bytes.)
extern void ext_004408B0(void* self, double arg);
// Callee 0x0041A920 (106B, unknown): called as thiscall(&tmp, &slot) where slot holds the object pointer.
extern void ext_0041A920(void* self, void** out);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.) Called cdecl with one pointer argument.
extern void ext_006A5C5C(void* p);
// USER32!InvalidateRect IAT slot.
extern void* mem_00925688;

// Stack temporary passed by address to ext_0041A920 / ext_0043F520.
// field_0x00 is never read; field_0x04 is the out pointer checked and released at the end.
struct ResizeTmp {
    uint32_t field_0x00;
    void* field_0x04;
    uint32_t field_0x08;
    uint32_t field_0x0c;
};

// @name MultiTrackView::MultiTrackViewStates::ResizeRightState::vfunc_12
// @class MultiTrackView::MultiTrackViewStates::ResizeRightState
// @summary Pixel-to-time update of the right-resize drag: recomputes the value from x, clamps it, and if the rounded value changed invalidates the owning view's window and releases any temporary returned by the helper.
// @field MultiTrackView::MultiTrackViewStates::ResizeRightState +0x08 void* field_0x08
bool fn_004441E0(void* self, uint32_t arg_04, int32_t x, uint32_t arg_0c) {
    (void)arg_04;
    (void)arg_0c;

    // this->view (offset 0x08); view->obj (offset 0xA0) is the object used by the int/clamp helpers.
    void* view = lift_field<void*>(self, 0x08);
    void* obj = lift_field<void*>(view, 0xA0);

    // Round-to-int reading of obj's value, kept as double for the comparison below.
    int32_t a1 = ext_00441040(obj);
    double d1 = static_cast<double>(a1);

    // Convert pixel x to time and clamp-store it into obj.
    double r = ext_0043CDD0(view, x);
    ext_004408B0(obj, r);

    // Re-read the rounded value; if it changed, notify the window.
    int32_t a2 = ext_00441040(obj);
    if (static_cast<double>(a2) != d1) {
        ResizeTmp tmp{};
        void* slot = obj;
        ext_0041A920(&tmp, &slot);
        ext_0043F520(view, &tmp, 1);

        // InvalidateRect(view->hwnd (offset 0x20), NULL, TRUE)
        HWND hwnd = lift_field<HWND>(view, 0x20);
        auto invalidate = reinterpret_cast<BOOL(__stdcall*)(HWND, const RECT*, BOOL)>(
            reinterpret_cast<uintptr_t>(mem_00925688));
        invalidate(hwnd, nullptr, TRUE);

        if (tmp.field_0x04 != nullptr) {
            ext_006A5C5C(tmp.field_0x04);
        }
    }
    return true;
}
} // namespace lift_004441E0
