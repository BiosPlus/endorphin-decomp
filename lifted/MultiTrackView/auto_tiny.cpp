// Lifted C++ translation unit: lifted/MultiTrackView/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void ext_0045F5F0();
extern "C" void __fastcall ext_00411590(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name MultiTrackView::TriggeredEventView::vfunc_0_off_24C
// @class MultiTrackView::TriggeredEventView
// @summary Secondary-base thunk: rebases this from the ContainerObserver<TriggeredEventData> subobject (+0x24C) to the +0x248 subobject and tail-calls the primary implementation.
void fn_00460300(void* self) {
    // Adjust 'this' back by 4 bytes (-0x24C -> -0x248 subobject), then forward
    // the call with the adjusted pointer as the implicit (__fastcall/ecx) argument.
    typedef void(__fastcall * ThisImpl)(void* self);
    void* adjusted = static_cast<char*>(self) - 4;
    reinterpret_cast<ThisImpl>(ext_0045F5F0)(adjusted);
}
extern "C" void __fastcall ext_00413480(void* self);
extern "C" void __fastcall ext_0043BBD0(void* self);
extern "C" void __fastcall ext_0043C620(void* self);
extern "C" void __fastcall ext_0043E800(void* self);
extern "C" void __fastcall ext_004406C0(void* self);
extern "C" void __fastcall ext_004409F0(void* self);
extern "C" void __fastcall ext_00440A00(void* self);
extern "C" void __fastcall ext_00440A10(void* self);
extern "C" void __fastcall ext_00440ED0(void* self);
extern "C" void __fastcall ext_0043CD80(void* self);
extern "C" void __fastcall ext_00442980(void* self);
extern "C" void __fastcall ext_00459250(void* self);
extern "C" void __fastcall ext_00459E80(void* self);
extern "C" void __fastcall ext_0045F150(void* self);
extern "C" void __fastcall ext_00460450(void* self);
extern "C" void __fastcall ext_0045F600(void* self);
extern "C" void __fastcall ext_00460310(void* self);
// USER32 import: BOOL InvalidateRect(HWND hWnd, const RECT* lpRect, BOOL bErase)
extern "C" BOOL __stdcall InvalidateRect(HWND hWnd, const RECT* lpRect, BOOL bErase);

extern "C" BOOL __stdcall InvalidateRect(HWND hWnd, const RECT* lpRect, BOOL bErase);
// @name MultiTrackView::TimeRuler::vfunc_0_off_54
// @class MultiTrackView::TimeRuler
// @summary Secondary-base thunk: rebases this from the RuntimeEngineStopEventListener subobject (+0x54) to the pointer stored at TimeRuler +0x30 and sets that object's byte at +0x190 to 1.
// @field MultiTrackView::TimeRuler +0x30 void* field_0x30
void fn_004591A0(void* self) {
    // ecx = self (subobject at +0x54); the 0x24 adjustment lands on TimeRuler +0x30.
    uint8_t* owner = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(self) - 0x24);
    owner[0x190] = 1;
}
#include <cstdint>
// USER32!InvalidateRect, imported through IAT slot mem_00925688.
extern "C" BOOL __stdcall ext_InvalidateRect(HWND hWnd, const RECT* lpRect, BOOL bErase);

extern "C" BOOL __stdcall ext_InvalidateRect(HWND hWnd, const RECT* lpRect, BOOL bErase);
// @name MultiTrackView::CompositeEventTrack::vfunc_0
// @class MultiTrackView::CompositeEventTrack
// @summary MSVC scalar deleting destructor: calls sub_00411590 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00411660(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00411590(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
// USER32!SetCursorPos, reached through the import address slot at 0x009256DC.
using SetCursorPosFn = int(__stdcall*)(int32_t x, int32_t y);
extern "C" SetCursorPosFn mem_009256DC;

using SetCursorPosFn = int(__stdcall*)(int32_t x, int32_t y);
extern "C" SetCursorPosFn mem_009256DC;
// @class MultiTrackView::CompositeMarkerTrack
// @summary MSVC scalar deleting destructor: calls sub_00413480 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004136E0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00413480(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
// Known callee 0x006A60D0: thunk_MFC80_ord_5833 (IAT jump thunk forwarding to MFC80!ord_5833.)
extern "C" void ext_006A60D0();

extern "C" void ext_006A60D0();
// @name MultiTrackView::MarkerTrack::vfunc_0
// @class MultiTrackView::MarkerTrack
// @summary MSVC scalar deleting destructor: calls sub_0043BBD0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0043BEE0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0043BBD0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0043CC40] MultiTrackView::Frame::vfunc_1 (30 bytes)
// @name MultiTrackView::Frame::vfunc_1
// @class MultiTrackView::Frame
// @summary MSVC scalar deleting destructor: calls sub_0043C620 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0043CC40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0043C620(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0043F2A0] MultiTrackView::View::vfunc_1 (30 bytes)
// @name MultiTrackView::View::vfunc_1
// @class MultiTrackView::View
// @summary MSVC scalar deleting destructor: calls sub_0043E800 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0043F2A0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0043E800(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00441000] MultiTrackView::Marker::vfunc_0 (30 bytes)
// @name MultiTrackView::Marker::vfunc_0
// @class MultiTrackView::Marker
// @summary MSVC scalar deleting destructor: calls sub_004406C0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00441000(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004406C0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004413C0] MultiTrackView::TriangleMarker::vfunc_0 (30 bytes)
// @name MultiTrackView::TriangleMarker::vfunc_0
// @class MultiTrackView::TriangleMarker
// @summary MSVC scalar deleting destructor: calls sub_004409F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004413C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_004409F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x004416C0] MultiTrackView::DiamondMarker::vfunc_0 (30 bytes)
// @name MultiTrackView::DiamondMarker::vfunc_0
// @class MultiTrackView::DiamondMarker
// @summary MSVC scalar deleting destructor: calls sub_00440A00 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_004416C0(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00440A00(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00441A40] MultiTrackView::SimpleRangeMarker::vfunc_0 (30 bytes)
// @name MultiTrackView::SimpleRangeMarker::vfunc_0
// @class MultiTrackView::SimpleRangeMarker
// @summary MSVC scalar deleting destructor: calls sub_00440A10 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00441A40(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00440A10(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00441D20] MultiTrackView::RangeMarker::vfunc_0 (30 bytes)
// @name MultiTrackView::RangeMarker::vfunc_0
// @class MultiTrackView::RangeMarker
// @summary MSVC scalar deleting destructor: calls sub_00440ED0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00441D20(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00440ED0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00442C00] MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_2 (8 bytes)
// @name MultiTrackView::MultiTrackViewStates::SelectOrMoveState::vfunc_2
// @class MultiTrackView::MultiTrackViewStates::SelectOrMoveState
// @summary Member forwarding thunk: loads subobject pointer at +0x8 and tail-calls sub_0043CD80.
// @field MultiTrackView::MultiTrackViewStates::SelectOrMoveState +0x8 void* delegate_0x8
extern "C" void __fastcall fn_00442C00(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x8);
    ext_0043CD80(delegate_obj);
}

// [0x00443370] MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_0 (30 bytes)
// @name MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_0
// @class MultiTrackView::MultiTrackViewStates::DragSelectState
// @summary MSVC scalar deleting destructor: calls sub_00442980 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00443370(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00442980(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00459900] MultiTrackView::TimeRulerMarkerTrack::vfunc_0 (30 bytes)
// @name MultiTrackView::TimeRulerMarkerTrack::vfunc_0
// @class MultiTrackView::TimeRulerMarkerTrack
// @summary MSVC scalar deleting destructor: calls sub_00459250 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00459900(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00459250(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x00459F00] MultiTrackView::TimeRuler::vfunc_0 (30 bytes)
// @name MultiTrackView::TimeRuler::vfunc_0
// @class MultiTrackView::TimeRuler
// @summary MSVC scalar deleting destructor: calls 0x00459E80 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00459F00(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00459E80(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0045F600] MultiTrackView::TriggeredEventView::vfunc_1_off_248 (11 bytes)
// @name MultiTrackView::TriggeredEventView::vfunc_1_off_248
// @class MultiTrackView::TriggeredEventView
// @summary This-adjustor thunk: adjusts `this` by +0xFFFFFDB8 and tail-calls sub_0045F150.
extern "C" void __fastcall fn_0045F600(void* self) {
    ext_0045F150(static_cast<char*>(self) + 0xFFFFFDB8);
}

// [0x004602E0] MultiTrackView::TriggeredEventView::vfunc_0_off_254 (11 bytes)
// @name MultiTrackView::TriggeredEventView::vfunc_0_off_254
// @class MultiTrackView::TriggeredEventView
// @summary This-adjustor thunk: adjusts `this` by -0x254 and tail-calls MultiTrackView::TriggeredEventView::vfunc_1.
extern "C" void __fastcall fn_004602E0(void* self) {
    ext_00460450(static_cast<char*>(self) - 0x254);
}

// [0x004602F0] MultiTrackView::TriggeredEventView::vfunc_1_off_24C (8 bytes)
// @name MultiTrackView::TriggeredEventView::vfunc_1_off_24C
// @class MultiTrackView::TriggeredEventView
// @summary This-adjustor thunk: adjusts `this` by -0x4 and tail-calls MultiTrackView::TriggeredEventView::vfunc_1_off_248.
extern "C" void __fastcall fn_004602F0(void* self) {
    ext_0045F600(static_cast<char*>(self) - 0x4);
}

// [0x0043EA80] MultiTrackView::View::vfunc_82 (20 bytes)
// @name MultiTrackView::View::vfunc_82
// @class MultiTrackView::View
// @summary Zeroes two consecutive 32-bit words at the start of the pointed-to 8-byte record (stdcall, one argument).
void fn_0043EA80(void* self) {
    // Argument is loaded from [esp+4] and popped with `ret 4`: stdcall, one pointer argument.
    // Zero the two dwords at offsets +0x00 and +0x04 of the record.
    auto* record = static_cast<std::uint32_t*>(self);
    record[0] = 0u;
    record[1] = 0u;
}

// [0x00442CD0] MultiTrackView::MultiTrackViewStates::ResizeLeftState::vfunc_7 (22 bytes)
// @name MultiTrackView::MultiTrackViewStates::ResizeLeftState::vfunc_7
// @class MultiTrackView::MultiTrackViewStates::ResizeLeftState
// @summary Warps the cursor to the (x, y) pair stored in this state and returns whether SetCursorPos succeeded.
// @field MultiTrackView::MultiTrackViewStates::ResizeLeftState +0x0C int32_t field_0x0C
// @field MultiTrackView::MultiTrackViewStates::ResizeLeftState +0x10 int32_t field_0x10
bool fn_00442CD0(void* self) {
    // The original epilogue is "ret 0xc", so the caller's three stack arguments are
    // discarded; they are not read here.
    auto* base = static_cast<uint8_t*>(self);
    const int32_t x = *reinterpret_cast<const int32_t*>(base + 0x0C);
    const int32_t y = *reinterpret_cast<const int32_t*>(base + 0x10);
    return mem_009256DC(x, y) != 0;
}

// [0x004554C0] MultiTrackView::Frame::vfunc_106 (22 bytes)
// @name MultiTrackView::Frame::vfunc_106
// @class MultiTrackView::Frame
// @summary Forwards to ext_006A60D0 when the object at Frame+0x144 is non-null and its +0x20 field is nonzero; otherwise returns.
// @field MultiTrackView::Frame +0x144 uint32_t field_0x144
void fn_004554C0(void* self) {
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
        ext_006A60D0();
    }
}

// [0x00460450] MultiTrackView::TriggeredEventView::vfunc_1 (30 bytes)
namespace lift_00460450 {
extern void __fastcall ext_00460310(void* self);
extern void __cdecl ext_006A5C5C(void* ptr);

// @name MultiTrackView::TriggeredEventView::vfunc_1
// @class MultiTrackView::TriggeredEventView
// @summary MSVC scalar deleting destructor: calls sub_00460310 and frees memory when (flags & 1) is set.
extern void* __fastcall fn_00460450(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00460310(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
} // namespace lift_00460450

// [0x0043CEE0]
namespace lift_0043CEE0 {
// @name MultiTrackView::View::vfunc_81
// @class MultiTrackView::View
// @summary Invalidates the view's window (HWND at +0x20) with erase=TRUE via USER32!InvalidateRect.
// @field MultiTrackView::View +0x20 HWND hwnd

// IAT slot at 0x00925688 holding USER32!InvalidateRect.
extern BOOL(__stdcall* mem_00925688)(HWND hWnd, const RECT* lpRect, BOOL bErase);

void __thiscall MultiTrackView_View_vfunc_81(void* self) {
    HWND hwnd = lift_field<HWND>(self, 0x20);
    mem_00925688(hwnd, nullptr, TRUE);
}
} // namespace lift_0043CEE0
