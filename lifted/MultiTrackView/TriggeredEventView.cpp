// Lifted C++ translation unit: lifted/MultiTrackView/TriggeredEventView.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004602B0] MultiTrackView::TriggeredEventView::vfunc_6_off_254 (34 bytes)
// @name MultiTrackView::TriggeredEventView::GetTypeName
// @class MultiTrackView::TriggeredEventView
// @summary Constructs std::string "TriggeredEventView" in the caller's return slot and returns that slot (self is unused).
// @field MultiTrackView::TriggeredEventView +0x00 (unused) self is not dereferenced
void* fn_004602B0(void* self, void* ret_slot) {
    (void)self;
    std::string* out = static_cast<std::string*>(ret_slot);
    new (out) std::string("TriggeredEventView");
    return out;
}
