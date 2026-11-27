// Lifted C++ translation unit: lifted/classes/HasBufferedTMPtr.cpp
#include "lift_compat.h"
#include <cstring>

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

// [0x005324B0] HasBufferedTMPtr::vfunc_12 (33 bytes)
namespace lift_005324B0 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern uint32_t ext_00661B50(void* this_ptr, uint32_t index);
extern void* mem_00AEE8A8;

// @name HasBufferedTMPtr::vfunc_12
// @class HasBufferedTMPtr
// @summary Calls sub_00661B50 with this->field_0x04 as index, adds 0x30 to the result, then forwards to virtual slot 7 of the argument object.
// @field HasBufferedTMPtr +0x04 uint32_t field_0x04
uint32_t fn_005324B0(void* self, void* arg) {
    uint32_t index = lift_field<uint32_t>(self, 0x4);
    uint32_t value = ext_00661B50(mem_00AEE8A8, index) + 0x30;

    // Tail-jump in the original (jmp eax) becomes an ordinary virtual call
    // through vtable slot 7 (offset 0x1C) of arg, with value as the argument.
    void** vtbl = *reinterpret_cast<void***>(arg);
    using VFn = uint32_t (*)(void* this_ptr, uint32_t);
    VFn fn = reinterpret_cast<VFn>(vtbl[7]);
    return fn(arg, value);
}
} // namespace lift_005324B0

// [0x00532400] HasBufferedTMPtr::vfunc_2 (37 bytes)
namespace lift_00532400 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern uint32_t ext_00661B50(void* this_ptr, uint32_t index);
extern uint32_t mem_00AEE8A8;
extern int mem_009253D0; // .rdata ">sb"; not accessed by code, referenced only for metadata

// @name HasBufferedTMPtr::CopyBufferedElement
// @class HasBufferedTMPtr
// @summary Fetches the element at this->index via the global buffer wrapper and copies its 64 bytes (16 dwords) into dst.
// @field HasBufferedTMPtr +0x04 uint32_t index
void __thiscall fn_00532400(void* self, void* dst) {
    (void)&mem_009253D0;
    const uint32_t index = lift_field<uint32_t>(self, 0x4);
    void* wrapper = reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00AEE8A8));
    const uint32_t src_addr = ext_00661B50(wrapper, index);
    const void* src = reinterpret_cast<const void*>(static_cast<uintptr_t>(src_addr));
    std::memcpy(dst, src, 16 * sizeof(uint32_t));
}
} // namespace lift_00532400

// [0x00532680] HasBufferedTMPtr::vfunc_1 (34 bytes)
namespace lift_00532680 {
// Known callee 0x004F9950: Unknown::copyVec3WithZeroW_004F9950 (Copies three floats from self+0x30..0x38 to out[0..2] and sets out[3] = 0.0f (Vec3 -> Vec4 with w = 0).)
extern void __thiscall ext_004F9950(void* self, float* out);
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern uint32_t __thiscall ext_00661B50(void* this_ptr, uint32_t index);
extern int mem_00AEE8A8;

// @name HasBufferedTMPtr::vfunc_1
// @class HasBufferedTMPtr
// @summary Looks up an element via the global owner at mem_00AEE8A8 using this->+0x04 as index, then copies its Vec3 into out as Vec4 (w = 0); returns out.
// @field HasBufferedTMPtr +0x04 uint32_t index
float* __thiscall fn_00532680(void* self, float* out) {
    const uint32_t index = lift_field<uint32_t>(self, 0x04);
    void* owner = reinterpret_cast<void*>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_00AEE8A8)));
    const uint32_t elem = ext_00661B50(owner, index);
    ext_004F9950(reinterpret_cast<void*>(static_cast<uintptr_t>(elem)), out);
    return out;
}
} // namespace lift_00532680

// [0x00532480] HasBufferedTMPtr::vfunc_10 (36 bytes)
namespace lift_00532480 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern uint32_t __thiscall ext_00661B50(void* this_ptr, uint32_t index);
extern uint32_t mem_00AEE8A8;

// @name HasBufferedTMPtr::vfunc_10
// @class HasBufferedTMPtr
// @summary Reads the index at +0x04, fetches the global-owned object via ext_00661B50 using that index, then calls vtable slot 4 of the stack argument with the result.
// @field HasBufferedTMPtr +0x04 uint32_t field_0x04

using VFn = void (__thiscall*)(void* self, uint32_t value);

void __thiscall fn_00532480(void* self, void* arg) {
    uint32_t index = lift_field<uint32_t>(self, 0x04);
    void* global_this = reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00AEE8A8));
    uint32_t value = ext_00661B50(global_this, index);
    void** vtbl = *reinterpret_cast<void***>(arg);
    VFn vfn = reinterpret_cast<VFn>(vtbl[4]);
    vfn(arg, value);
}
} // namespace lift_00532480
