// Lifted C++ translation unit: lifted/MultiTrackView/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void ext_0045F5F0();

// [0x00460300] MultiTrackView::TriggeredEventView::vfunc_0_off_24C (8 bytes)
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

// [0x004591A0] MultiTrackView::TimeRuler::vfunc_0_off_54 (11 bytes)
// @name MultiTrackView::TimeRuler::vfunc_0_off_54
// @class MultiTrackView::TimeRuler
// @summary Secondary-base thunk: rebases this from the RuntimeEngineStopEventListener subobject (+0x54) to the pointer stored at TimeRuler +0x30 and sets that object's byte at +0x190 to 1.
// @field MultiTrackView::TimeRuler +0x30 void* field_0x30
void fn_004591A0(void* self) {
    // ecx = self (subobject at +0x54); the 0x24 adjustment lands on TimeRuler +0x30.
    uint8_t* owner = *reinterpret_cast<uint8_t**>(static_cast<uint8_t*>(self) - 0x24);
    owner[0x190] = 1;
}
