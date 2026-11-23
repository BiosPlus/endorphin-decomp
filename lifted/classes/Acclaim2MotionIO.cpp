// Lifted C++ translation unit: lifted/classes/Acclaim2MotionIO.cpp
#include "lift_compat.h"
// Virtual dispatch helper: calls vtable slot `Slot` of `obj`, passing obj as the implicit this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}
// Known callee 0x00553720: NMFileIO::vfunc_3 (Forwards the single argument to sub_00552B00 on two embedded sub-objects (+0x5C and +0x16C) and returns it.)
extern "C" void* ext_00553720(void* self, void* arg);
// Callee 0x00640390: sub_00640390 (332B), thiscall on arg with two stack args (mem value, 0); returns a value in eax.
extern "C" void* ext_00640390(void* self, uint32_t value, uint32_t flags);
extern "C" uint32_t mem_00A9ECE8;

extern "C" void* ext_00553720(void* self, void* arg);
// Callee 0x00640390: sub_00640390 (332B), thiscall on arg with two stack args (mem value, 0); returns a value in eax.
extern "C" void* ext_00640390(void* self, uint32_t value, uint32_t flags);
extern "C" uint32_t mem_00A9ECE8;
// @field Acclaim2MotionIO +0x00 void* vtable
// @field Acclaim2MotionIO +0x584 void* field_0x584
bool fn_0055BBF0(void* self) {
    if (!lift_vcall<bool, 57>(self)) // vtable +0xE4
        return false;
    void* sub = lift_field<void*>(self, 0x584);
    return lift_vcall<bool, 48>(sub); // vtable +0xC0 (tail call)
}

// [0x00582B60] Acclaim2MotionIO::vfunc_3 (38 bytes)
// @name Acclaim2MotionIO::vfunc_3
// @class Acclaim2MotionIO
// @summary Looks up a result via sub_00640390 using the global at mem_00A9ECE8, passes it to NMFileIO::vfunc_3 on this, and returns the original argument.
// @field Acclaim2MotionIO +0x00 void* vtable (no direct field access in this function; self is only passed through to ext_00553720)
void* fn_00582B60(void* self, void* arg) {
    const uint32_t value = mem_00A9ECE8;
    void* result = ext_00640390(arg, value, 0);
    ext_00553720(self, result);
    return arg;
}
