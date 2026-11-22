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

// [0x0043BEE0] MultiTrackView::MarkerTrack::vfunc_0 (30 bytes)
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

// [0x00460450] MultiTrackView::TriggeredEventView::vfunc_1 (30 bytes)
// @name MultiTrackView::TriggeredEventView::vfunc_1
// @class MultiTrackView::TriggeredEventView
// @summary MSVC scalar deleting destructor: calls sub_00460310 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_00460450(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_00460310(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x0043CEE0] MultiTrackView::View::vfunc_81 (15 bytes)
// @name MultiTrackView::View::vfunc_81
// @class MultiTrackView::View
// @summary Invalidates the view's window (InvalidateRect with a NULL rect and erase=TRUE, i.e. the whole client area is repainted).
// @field MultiTrackView::View +0x20 HWND field_0x20
void fn_0043CEE0(void* self) {
    HWND hWnd = lift_field<HWND>(self, 0x20);
    InvalidateRect(hWnd, nullptr, TRUE);
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

// [0x00443500] MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_12 (22 bytes)
// @name MultiTrackView::MultiTrackViewStates::DragSelectState::vfunc_12
// @class MultiTrackView::MultiTrackViewStates::DragSelectState
// @summary Invalidates the owning view's window (full client area, erase background) and returns TRUE.
// @field MultiTrackView::MultiTrackViewStates::DragSelectState +0x08 void* field_0x08
BOOLEAN fn_00443500(void* self) {
    void* owner = lift_field<void*>(self, 0x08);
    HWND hwnd = lift_field<HWND>(owner, 0x20);
    ext_InvalidateRect(hwnd, nullptr, TRUE);
    return TRUE;
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
