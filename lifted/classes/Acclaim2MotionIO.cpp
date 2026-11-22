// Lifted C++ translation unit: lifted/classes/Acclaim2MotionIO.cpp
#include "lift_compat.h"
// Virtual dispatch helper: calls vtable slot `Slot` of `obj`, passing obj as the implicit this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}

// [0x0055BBF0] Acclaim2MotionIO::vfunc_48 (42 bytes)
// @name Acclaim2MotionIO::vfunc_48
// @class Acclaim2MotionIO
// @summary If self->vfunc_57() returns true, tail-forwards to the sub-object at +0x584 via its vfunc_48; otherwise returns false.
// @field Acclaim2MotionIO +0x00 void* vtable
// @field Acclaim2MotionIO +0x584 void* field_0x584
bool fn_0055BBF0(void* self) {
    if (!lift_vcall<bool, 57>(self)) // vtable +0xE4
        return false;
    void* sub = lift_field<void*>(self, 0x584);
    return lift_vcall<bool, 48>(sub); // vtable +0xC0 (tail call)
}
