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
