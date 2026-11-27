// Lifted C++ translation unit: lifted/templates/EventDispatcherWithArgs.cpp
#include "lift_compat.h"

// [0x00466C20] EventDispatcherWithArgs<FrameBufferIterator, FrameBufferPlaybackEventListener, &[thunk]: __thiscall FrameBufferTickEventListener::`vcall'{0, {flat}}>::vfunc_2 (10 bytes)
namespace lift_00466C20 {
// Known callee 0x00466BA0: DispatchRangeWithDefault (Dispatches arg1 (or self->+0x24 when arg1 is 0) to every object pointer in the [+0x18, +0x1C) range, then forwards arg2 to ext_00678D70.)
extern void ext_00466BA0(void* self, uint32_t arg1, uint32_t arg2);

// @name EventDispatcherWithArgs::vfunc_2
// @class EventDispatcherWithArgs<FrameBufferIterator, FrameBufferPlaybackEventListener, &[thunk]: __thiscall FrameBufferTickEventListener::`vcall'{0, {flat}}>
// @summary Dispatches a tick with both arguments zeroed to the dispatcher's range via DispatchRangeWithDefault.
void fn_00466C20(void* self) {
    ext_00466BA0(self, 0u, 0u);
}
} // namespace lift_00466C20

// [0x004B01E0] EventDispatcherWithArgs<FrameBufferIterator, FrameBufferPlaybackEventListener, &[thunk]: __thiscall FrameBufferTickEventListener::`vcall'{0, {flat}}>::vfunc_1 (15 bytes)
namespace lift_004B01E0 {
// Known callee 0x00466BA0: DispatchRangeWithDefault (Dispatches arg1 (or self->+0x24 when arg1 is 0) to every object pointer in the [+0x18, +0x1C) range, then forwards arg2 to ext_00678D70.)
extern void ext_00466BA0();

// @name EventDispatcherWithArgs::vfunc_1
// @class EventDispatcherWithArgs<FrameBufferIterator, FrameBufferPlaybackEventListener, &[thunk]: __thiscall FrameBufferTickEventListener::`vcall'{0, {flat}}>
// @summary Dispatches a tick with arg as the second argument and zero as the first to the dispatcher's range via DispatchRangeWithDefault.
// @field EventDispatcherWithArgs +0x18 uint32_t rangeBegin
// @field EventDispatcherWithArgs +0x1C uint32_t rangeEnd
// @field EventDispatcherWithArgs +0x24 uint32_t defaultArg
void fn_004B01E0(void* self, uint32_t arg) {
    // Original pushes eax (arg) then 0, so the callee sees arg1 = 0, arg2 = arg.
    reinterpret_cast<void (*)(void*, uint32_t, uint32_t)>(&ext_00466BA0)(self, 0u, arg);
}
} // namespace lift_004B01E0
