// Lifted C++ translation unit: lifted/RuntimeEngine/auto_tiny.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_00661E80(void* self);
extern "C" void __fastcall ext_0046FD40(void* self);
extern "C" void __fastcall ext_00472E30(void* self);
extern "C" void __fastcall ext_00472EB0(void* self);
extern "C" void __fastcall ext_0067B1F0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

extern "C" void __cdecl ext_006A5C5C(void* ptr);
// @name RuntimeEngine::AdvanceVisibleFrameTicker::vfunc_0
// @class RuntimeEngine::AdvanceVisibleFrameTicker
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_00661E80.
// @field RuntimeEngine::AdvanceVisibleFrameTicker +0x4 void* delegate_0x4
extern "C" void __fastcall fn_0046FF70(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_00661E80(delegate_obj);
}

// [0x0046FF80] RuntimeEngine::TickFrameBufferForPlaybackTicker::vfunc_0 (8 bytes)
// @name RuntimeEngine::TickFrameBufferForPlaybackTicker::vfunc_0
// @class RuntimeEngine::TickFrameBufferForPlaybackTicker
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_0046FD40.
// @field RuntimeEngine::TickFrameBufferForPlaybackTicker +0x4 void* delegate_0x4
extern "C" void __fastcall fn_0046FF80(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_0046FD40(delegate_obj);
}

// [0x00473C50] RuntimeEngine::SimulationTicker::vfunc_0 (8 bytes)
// @name RuntimeEngine::SimulationTicker::vfunc_0
// @class RuntimeEngine::SimulationTicker
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_00472E30.
// @field RuntimeEngine::SimulationTicker +0x4 void* delegate_0x4
extern "C" void __fastcall fn_00473C50(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_00472E30(delegate_obj);
}

// [0x00473C60] RuntimeEngine::PlaybackTicker::vfunc_0 (8 bytes)
// @name RuntimeEngine::PlaybackTicker::vfunc_0
// @class RuntimeEngine::PlaybackTicker
// @summary Member forwarding thunk: loads subobject pointer at +0x4 and tail-calls sub_00472EB0.
// @field RuntimeEngine::PlaybackTicker +0x4 void* delegate_0x4
extern "C" void __fastcall fn_00473C60(void* self) {
    void* delegate_obj = lift_field<void*>(self, 0x4);
    ext_00472EB0(delegate_obj);
}

// [0x0067B260] RuntimeEngine::NullThread::vfunc_0 (30 bytes)
// @name RuntimeEngine::NullThread::vfunc_0
// @class RuntimeEngine::NullThread
// @summary MSVC scalar deleting destructor: calls sub_0067B1F0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_0067B260(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_0067B1F0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}
