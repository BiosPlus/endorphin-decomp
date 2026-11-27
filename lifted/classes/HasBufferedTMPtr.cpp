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

// [0x00532450] HasBufferedTMPtr::vfunc_13 (47 bytes)
namespace lift_00532450 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern uint32_t __thiscall ext_00661B50(void* this_ptr, uint32_t index);
extern void* mem_00AEE8A8;
extern int mem_009253D0;

// @name HasBufferedTMPtr::vfunc_13
// @class HasBufferedTMPtr
// @summary Looks up element at self->index via the wrapper in mem_00AEE8A8 and issues glTranslatef with its (x, y, z) at +0x30/+0x34/+0x38.
// @field HasBufferedTMPtr +0x04 uint32_t index
void fn_00532450(void* self) {
    uint32_t index = lift_field<uint32_t>(self, 0x04);
    void* wrapper = mem_00AEE8A8;
    uint8_t* elem = reinterpret_cast<uint8_t*>(
        static_cast<uintptr_t>(ext_00661B50(wrapper, index)));

    float x = lift_field<float>(elem, 0x30);
    float y = lift_field<float>(elem, 0x34);
    float z = lift_field<float>(elem, 0x38);

    using glTranslatef_fn = void(__stdcall*)(float, float, float);
    auto glTranslatef = reinterpret_cast<glTranslatef_fn>(
        static_cast<uintptr_t>(mem_009253D0));
    glTranslatef(x, y, z);
}
} // namespace lift_00532450
