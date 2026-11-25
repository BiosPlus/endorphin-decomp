// Lifted C++ translation unit: lifted/classes/ObjectNode.cpp
#include "lift_compat.h"

// [0x00584A80] ObjectNode::vfunc_13_off_4 (91 bytes)
namespace lift_00584A80 {
// Global dword at 0x00B40640 (passed as an argument to the virtual calls below).
extern uint32_t mem_00B40640;

// Portable virtual dispatch: reads the vtable pointer at offset 0 of `self`
// and invokes the slot located at byte offset `slotOffset` within that table.
template <typename R, typename... Args>
static R lift_vcall(void* self, ptrdiff_t slotOffset, Args... args) {
    uintptr_t vt = lift_field<uint32_t>(self, 0);
    uintptr_t fn = lift_field<uint32_t>(reinterpret_cast<void*>(vt), slotOffset);
    return reinterpret_cast<R (*)(void*, Args...)>(fn)(self, args...);
}

// @name ObjectNode::vfunc_13_off_4
// @class ObjectNode
// @summary Queries a 16-dword block from a virtual getter, copies it into a second virtual-returned buffer, then notifies via vtable slot 1.
void fn_00584A80(void* self, uint32_t arg) {
    // Original code uses ebp = (arg == 3) ? 3 : 2.
    uint32_t mode = (arg == 3) ? 3u : 2u;

    // vtable slot +0x10: src = self->getBlock(&tmp, mode, mem_00B40640)
    uint32_t tmp[16] = {};
    void* src = lift_vcall<void*>(self, 0x10, static_cast<void*>(tmp), mode, mem_00B40640);

    // vtable slot +0x0C: dst = self->getTarget(mem_00B40640)
    void* dst = lift_vcall<void*>(self, 0x0C, mem_00B40640);

    // Copy 16 dwords (64 bytes).
    std::memcpy(dst, src, 16 * sizeof(uint32_t));

    // vtable slot +0x04: self->notify(mode)
    lift_vcall<void>(self, 0x04, mode);
}
} // namespace lift_00584A80
