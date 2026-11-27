// Lifted C++ translation unit: lifted/classes/HasBufferedTMPtr.cpp
#include "lift_compat.h"

// [0x00532430]
namespace lift_00532430 {
// @name HasBufferedTMPtr::vfunc_11
// @class HasBufferedTMPtr
// @summary Reads a field from this, fetches a value from a global object via ext_00661B50, and passes it to glMultMatrixf.
// @field HasBufferedTMPtr +0x04 uint32_t field_0x04

extern uint32_t ext_00661B50(void* this_ptr, uint32_t index);
extern uint32_t mem_00AEE8A8;
extern void* mem_009253C8;

void HasBufferedTMPtr_vfunc_11(void* self) {
    uint32_t index = *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x4);
    uint32_t obj = mem_00AEE8A8;
    uint32_t result = ext_00661B50(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)), index);
    using GlMultMatrixfFn = void (*)(const float*);
    reinterpret_cast<GlMultMatrixfFn>(mem_009253C8)(
        reinterpret_cast<const float*>(static_cast<uintptr_t>(result)));
}
} // namespace lift_00532430
