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

// [0x005324E0] HasCustomBufferedTMPtr::vfunc_2 (34 bytes)
namespace lift_005324E0 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern uint32_t ext_00661B50(void* self, uint32_t index);

// @name HasCustomBufferedTMPtr::vfunc_2
// @class HasCustomBufferedTMPtr
// @summary Fetches a 64-byte element via the wrapper at +0x8 (indexed by +0x4) and copies it to dest.
// @field HasCustomBufferedTMPtr +0x04 uint32_t field_0x4
// @field HasCustomBufferedTMPtr +0x08 uint32_t field_0x8
void fn_005324E0(void* self, void* dest) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint32_t index = *reinterpret_cast<uint32_t*>(base + 0x4);
    void* wrapper = reinterpret_cast<void*>(static_cast<uintptr_t>(*reinterpret_cast<uint32_t*>(base + 0x8)));

    uint32_t srcAddr = ext_00661B50(wrapper, index);
    const uint32_t* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(srcAddr));
    uint32_t* dst = static_cast<uint32_t*>(dest);

    // Equivalent of: mov ecx,0x10 / rep movsd  (16 dwords = 64 bytes)
    for (int i = 0; i < 16; ++i) {
        dst[i] = src[i];
    }
}
} // namespace lift_005324E0

// [0x00532530] HasCustomBufferedTMPtr::vfunc_13 (44 bytes)
namespace lift_00532530 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern void* ext_00661B50(void* this_ptr, uint32_t index);
extern int mem_009253D0;

// @name HasCustomBufferedTMPtr::vfunc_13
// @class HasCustomBufferedTMPtr
// @summary Fetches a 3-float translation from the wrapper returned by ext_00661B50 and calls glTranslatef with it
// @field HasCustomBufferedTMPtr +0x04 uint32_t field_0x4
// @field HasCustomBufferedTMPtr +0x08 uint32_t field_0x8
void fn_00532530(void* self) {
    // Original: index = [self+0x4]; wrapper = [self+0x8]; p = ext_00661B50(wrapper, index)
    const uint32_t index = lift_field<uint32_t>(self, 0x4);
    const uint32_t wrapper = lift_field<uint32_t>(self, 0x8);
    void* p = ext_00661B50(reinterpret_cast<void*>(static_cast<uintptr_t>(wrapper)), index);

    // Translation components are read from p+0x30 (x), p+0x34 (y), p+0x38 (z).
    const float x = lift_field<float>(p, 0x30);
    const float y = lift_field<float>(p, 0x34);
    const float z = lift_field<float>(p, 0x38);

    // glTranslatef is imported through the pointer slot at mem_009253D0.
    using GlTranslatefFn = void (*)(float, float, float);
    auto glTranslatef = *reinterpret_cast<GlTranslatefFn*>(&mem_009253D0);
    glTranslatef(x, y, z);
}
} // namespace lift_00532530

// [0x00532720] HasCustomBufferedTMPtr::vfunc_3 (69 bytes)
namespace lift_00532720 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern uint32_t ext_00661B50(void* this_ptr, uint32_t index);
// Known callee 0x0067DAD0: sub_0067DAD0
extern void ext_0067DAD0(void* this_ptr);

// @name HasCustomBufferedTMPtr::vfunc_3
// @class HasCustomBufferedTMPtr
// @summary Writes a fixed float template (1.0/0.0 pattern) into the out buffer, then calls sub_00661B50 and sub_0067DAD0 using this+4/this+8; returns out.
// @field HasCustomBufferedTMPtr +0x04 uint32_t field_0x4
// @field HasCustomBufferedTMPtr +0x08 uint32_t field_0x8
void* fn_00532720(void* self, void* out) {
    // Out buffer (float fields): +0x00=1.0, +0x04=0.0, +0x08=0.0, +0x0C=0.0,
    // +0x10=1.0, +0x14=0.0, +0x18=0.0, +0x1C=0.0, +0x20=1.0
    lift_field<float>(out, 0x08) = 0.0f;
    lift_field<float>(out, 0x04) = 0.0f;
    lift_field<float>(out, 0x00) = 1.0f;
    lift_field<float>(out, 0x10) = 1.0f;
    lift_field<float>(out, 0x14) = 0.0f;
    lift_field<float>(out, 0x0C) = 0.0f;
    lift_field<float>(out, 0x20) = 1.0f;
    lift_field<float>(out, 0x1C) = 0.0f;
    lift_field<float>(out, 0x18) = 0.0f;

    // eax = [self+4] (index); ecx = [self+8] (this for callee)
    const uint32_t index = lift_field<uint32_t>(self, 0x04);
    const uint32_t wrapper = lift_field<uint32_t>(self, 0x08);

    const uint32_t element = ext_00661B50(
        reinterpret_cast<void*>(static_cast<uintptr_t>(wrapper)), index);

    ext_0067DAD0(reinterpret_cast<void*>(static_cast<uintptr_t>(element)));

    return out;
}
} // namespace lift_00532720

// [0x00532700] HasCustomBufferedTMPtr::vfunc_1 (31 bytes)
namespace lift_00532700 {
// Known callee 0x00661B50: sub_00661B50 (Dereferences an iterator-like wrapper to access a 64-byte element or invoke a virtual getter at index)
extern void* ext_00661B50(void* this_ptr, uint32_t index, uint32_t arg);
// Known callee 0x004F9950: Unknown::copyVec3WithZeroW_004F9950 (Copies three floats from self+0x30..0x38 to out[0..2] and sets out[3] = 0.0f (Vec3 -> Vec4 with w = 0).)
extern void ext_004F9950(void* self);

// @name HasCustomBufferedTMPtr::vfunc_1
// @class HasCustomBufferedTMPtr
// @summary Forwards a stack argument through ext_00661B50 using self->field_0x4 as index and self->field_0x8 as the this pointer, then calls ext_004F9950 on the result; returns the stack argument.
// @field HasCustomBufferedTMPtr +0x4 uint32_t field_0x4
// @field HasCustomBufferedTMPtr +0x8 uint32_t field_0x8
uint32_t __thiscall fn_00532700(void* self, uint32_t arg) {
    const uint32_t index = lift_field<uint32_t>(self, 0x4);
    const uint32_t thisVal = lift_field<uint32_t>(self, 0x8);

    void* result = ext_00661B50(reinterpret_cast<void*>(static_cast<uintptr_t>(thisVal)), index, arg);
    ext_004F9950(result);

    return arg;
}
} // namespace lift_00532700
