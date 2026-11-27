// Lifted C++ translation unit: lifted/classes/HasCustomBufferedTMPtr.cpp
#include "lift_compat.h"

// [0x00532510] HasCustomBufferedTMPtr::vfunc_11 (20 bytes)
namespace lift_00532510 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern uint32_t ext_00661B50(void* this_ptr, uint32_t index);
// Imported GL function pointer slot (OPENGL32!glMultMatrixf), read through the IAT at 0x009253C8
extern uintptr_t mem_009253C8;

// @name HasCustomBufferedTMPtr::vfunc_11
// @class HasCustomBufferedTMPtr
// @summary Fetches the value at +0x4 as an index into the wrapper at +0x8 and passes the resolved element to glMultMatrixf
// @field HasCustomBufferedTMPtr +0x04 uint32_t field_0x4
// @field HasCustomBufferedTMPtr +0x08 uint32_t field_0x8
void fn_00532510(void* self) {
    uint32_t index = lift_field<uint32_t>(self, 0x4);
    void* wrapper = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x8)));
    uint32_t matrix = ext_00661B50(wrapper, index);
    auto gl_mult_matrixf = reinterpret_cast<void(__stdcall*)(uint32_t)>(mem_009253C8);
    gl_mult_matrixf(matrix);
}
} // namespace lift_00532510

// [0x00532560] HasCustomBufferedTMPtr::vfunc_10 (33 bytes)
namespace lift_00532560 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern uint32_t ext_00661B50(void* this_ptr, uint32_t index);

// @name HasCustomBufferedTMPtr::vfunc_10
// @class HasCustomBufferedTMPtr
// @summary Fetches field_0x4 and field_0x8, resolves an element via ext_00661B50, then forwards it to the vtable slot at +0x10 of the argument object.
// @field HasCustomBufferedTMPtr +0x04 uint32_t field_0x4
// @field HasCustomBufferedTMPtr +0x08 uint32_t field_0x8
uint32_t fn_00532560(void* self, void* arg) {
    uint32_t index = *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x4);
    void* owner    = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x8);

    uint32_t element = ext_00661B50(owner, index);

    void** vtbl = *reinterpret_cast<void***>(arg);
    using VirtFn = uint32_t (__thiscall*)(void* this_ptr, uint32_t value);
    VirtFn fn = reinterpret_cast<VirtFn>(vtbl[4]);
    return fn(arg, element);
}
} // namespace lift_00532560
