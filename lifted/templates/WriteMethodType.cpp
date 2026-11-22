// Lifted C++ translation unit: lifted/templates/WriteMethodType.cpp
#include "lift_compat.h"
// Known callee 0x006036A0: VirtualSlot20Thunk (Virtual dispatch thunk: loads the object's vtable and tail-calls slot 20 (offset +0x50) with the same this pointer; the callee's result is passed through.)
extern "C" void ext_006036A0(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    using Fn = uint32_t (*)(void* self, void* arg);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}
// Known callee 0x00649080: sub_00649080 (38B), not yet named.
extern "C" void ext_00649080(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}

extern "C" void ext_00649080(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x18 / 4, arg);
    ext_006036A0(target, value);
}
// Known callee 0x00648E30: sub_00648E30 (13B), not yet named.
extern "C" void ext_00648E30(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}

extern "C" void ext_00648E30(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x0C / 4, arg);
    ext_00649080(target, value);
}
// Known callee 0x0064DDE0: sub_0064DDE0 (20B), not yet named.
extern "C" void ext_0064DDE0(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}

extern "C" void ext_0064DDE0(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x0C / 4, arg);
    ext_00648E30(target, value);
}
// Known callee 0x00402040: AVIIO::vfunc_1 (3B). Called here as a plain (self, value) forwarder.
extern "C" void ext_00402040(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}

extern "C" void ext_00402040(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x14 / 4, arg);
    ext_0064DDE0(target, value);
}
// Known callee 0x0064F900: VirtualSlot21Thunk (Virtual dispatch thunk: loads the object's vtable and tail-calls slot 21 (offset +0x54) with the same this pointer; the callee's result is passed through.)
extern "C" void ext_0064F900(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}

extern "C" void ext_0064F900(void* self, uint32_t value);
// Call vtable slot `slot` on `obj` with one argument; returns the raw 32-bit result word.
static inline uint32_t vcall_word(void* obj, std::size_t slot, void* arg) {
    void** vtbl = *reinterpret_cast<void***>(obj);
    return reinterpret_cast<Fn>(vtbl[slot])(obj, arg);
}
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x18 / 4, arg);
    ext_00402040(target, value);
}

// [0x00650D80] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<SkeletalJoint, int>::vcall84::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Reads the target object from self, computes the int value via arg's sub-object vtable slot 2, and forwards to ext_0064F900.
// @field ExprParser::WriteMethodType +0x00 void* targetObj
void fn_00650D80(void* self, void* arg) {
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x08 / 4, arg);
    ext_0064F900(target, value);
}
