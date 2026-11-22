// Lifted C++ translation unit: lifted/MultiTrackView/TriggeredEventView.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Callee sub_0043DCF0 (99B): single stack arg (-1), no caller cleanup, returns a pointer in eax.
extern "C" void* ext_0043DCF0(int32_t arg);

extern "C" void* ext_0043DCF0(int32_t arg);
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
// Callees use MSVC thiscall (ecx = member object, one stack argument).
// Portable form: the object is passed explicitly as the first parameter.
extern "C" void ext_00460540(void* self, void* arg);
// Known callee 0x006A5E72: thunk_MFC80_ord_6090 (IAT jump thunk forwarding to MFC80!ord_6090.)
extern "C" void ext_006A5E72(void* self, uint32_t arg);

// Portable form: the object is passed explicitly as the first parameter.
extern "C" void ext_00460540(void* self, void* arg);
// Known callee 0x006A5E72: thunk_MFC80_ord_6090 (IAT jump thunk forwarding to MFC80!ord_6090.)
extern "C" void ext_006A5E72(void* self, uint32_t arg);
// @field MultiTrackView::TriggeredEventView +0x00 (unused) self is not dereferenced
void fn_0045D8B0(void* self, void* ret_slot) {
    (void)self;
    void* obj = ext_0043DCF0(-1);
    int32_t value = lift_field<int32_t>(obj, 0x4C);
    lift_field<uint32_t>(ret_slot, 0) = 0u;
    lift_field<int32_t>(ret_slot, 4) = value + 9;
}

// [0x0045E470] MultiTrackView::TriggeredEventView::vfunc_80 (36 bytes)
// @name MultiTrackView::TriggeredEventView::ForwardToMemberWithArg
// @class MultiTrackView::TriggeredEventView
// @summary Forwards the argument to the member object at +0x2D0 via ext_00460540, then calls ext_006A5E72 on that member with 5.
// @field MultiTrackView::TriggeredEventView +0x2D0 void* field_0x2D0
void fn_0045E470(void* self, void* arg) {
    void* member = lift_field<void*>(self, 0x2D0);
    ext_00460540(member, arg);
    member = lift_field<void*>(self, 0x2D0);
    ext_006A5E72(member, 5u);
}
