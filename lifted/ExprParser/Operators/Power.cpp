// Lifted C++ translation unit: lifted/ExprParser/Operators/Power.cpp
#include "lift_compat.h"

// [0x006A12C0] ExprParser::Operators::Power::vfunc_3 (190 bytes)
namespace lift_006A12C0 {
// Unnamed callee 0x004ECB40 (247 bytes): thiscall; takes an out-pointer, writes a DWORD pair through it,
// and returns a pointer to a DWORD pair owned by self.
extern void* ext_004ECB40(void* self, void* out);

// Calls virtual slot `offset` (byte offset into the vtable) on obj, passing obj as `this`.
template <typename R, typename... A>
inline R vcall(void* obj, std::size_t offset, A... args) {
    void** vtable = *reinterpret_cast<void***>(obj);
    using Fn = R(__thiscall*)(void*, A...);
    Fn fn = reinterpret_cast<Fn>(vtable[offset / sizeof(void*)]);
    return fn(obj, args...);
}

// Interprets a 32-bit object reference stored in a DWORD slot as a pointer.
inline void* dword_to_ptr(DWORD v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

// @name ExprParser::Operators::Power::vfunc_3
// @class ExprParser::Operators::Power
// @summary Takes the DWORD pair returned by ext_004ECB40 into locals (clearing its second word), releases the helper out-pair's second object, calls slot 0xB8 on the pair's second object with (&pair0, rhs), then stores the pair into self, releasing the previous self->field_0x04 via slot 0x78 when it was non-null.
// @field ExprParser::Operators::Power +0x00 DWORD field_0x00
// @field ExprParser::Operators::Power +0x04 DWORD field_0x04
void fn_006A12C0(void* self, void* rhs) {
    DWORD out[2] = {0, 0};
    void* p = ext_004ECB40(self, out);

    DWORD pair0 = lift_field<DWORD>(p, 0);
    DWORD pair1 = lift_field<DWORD>(p, 4);
    lift_field<DWORD>(p, 4) = 0;

    if (out[1]) {
        vcall<void>(dword_to_ptr(out[1]), 0x78, static_cast<void*>(&out[0]));
    }

    vcall<void>(dword_to_ptr(pair1), 0xB8, static_cast<void*>(&pair0), rhs);

    DWORD old = lift_field<DWORD>(self, 4);
    if (old) {
        vcall<void>(dword_to_ptr(old), 0x78, self);
    }

    lift_field<DWORD>(self, 4) = pair1;
    lift_field<DWORD>(self, 0) = pair0;
}
} // namespace lift_006A12C0
