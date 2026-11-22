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
// Known callee 0x006036A0: VirtualSlot20Thunk (Virtual dispatch thunk: loads the object's vtable and tail-calls slot 20 (offset +0x50) with the same this pointer; the callee's result is passed through.)
// Known callee 0x00649080: sub_00649080 (38B), not yet named.
// Known callee 0x00648E30: sub_00648E30 (13B), not yet named.
// Known callee 0x0064DDE0: sub_0064DDE0 (20B), not yet named.
// Known callee 0x00402040: AVIIO::vfunc_1 (3B). Called here as a plain (self, value) forwarder.
// Known callee 0x0064F920: sub_0064F920 (Virtual dispatch thunk: forwards to vtable slot at +0x84.)
extern "C" void ext_0064F920(void* self, void* value);

extern "C" void ext_0064F920(void* self, void* value);
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
// Known callee 0x0064F900: VirtualSlot21Thunk (Virtual dispatch thunk: loads the object's vtable and tail-calls slot 21 (offset +0x54) with the same this pointer; the callee's result is passed through.)
// Known callee 0x006B0C30: sub_006B0C30 (Randomizer::setSeed(int), 10B)
extern "C" void ext_006B0C30(void* self, int seed);

extern "C" void ext_006B0C30(void* self, int seed);
// @name WriteMethodType<EffectorBase, Vector4 const&>::vfunc_41
// @class ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{80, {flat}}>
// @summary Reads the target object from self, computes the value via arg's sub-object vtable slot 6, and forwards both to ext_006036A0.
// @field ExprParser::WriteMethodType +0x00 void* targetObj
void fn_00604C40(void* self, void* arg) {
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    uint32_t value = reinterpret_cast<uint32_t (*)(void*, void*)>(vtbl[0x18 / 4])(sub, arg);
    ext_006036A0(target, value);
}

// [0x006495F0] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<RelationshipRPROMagnet, bool>::applyCachedSettings::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>
// @summary Reads the target object from self, computes the bool value via arg's sub-object vtable slot 3, and forwards to ext_00649080.
// @field ExprParser::WriteMethodType +0x00 void* targetObj
void fn_006495F0(void* self, void* arg) {
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    uint32_t value = reinterpret_cast<uint32_t (*)(void*, void*)>(vtbl[0x0C / 4])(sub, arg);
    ext_00649080(target, value);
}

// [0x00649D50] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<RelationshipRPROMagnet, bool>::setRotationMode::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>
// @summary Reads the target object from self, computes the bool value via arg's sub-object vtable slot 3, and forwards to ext_00648E30.
// @field ExprParser::WriteMethodType +0x00 void* targetObj
void fn_00649D50(void* self, void* arg) {
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    uint32_t value = reinterpret_cast<uint32_t (*)(void*, void*)>(vtbl[0x0C / 4])(sub, arg);
    ext_00648E30(target, value);
}

// [0x0064F790] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<SkeletalJoint, Vector3 const&>::setDriveAngularVel::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads the target object from self, computes the Vector3 pointer via arg's sub-object vtable slot 5, and forwards to ext_0064DDE0.
// @field ExprParser::WriteMethodType +0x00 void* targetObj
void fn_0064F790(void* self, void* arg) {
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    uint32_t value = reinterpret_cast<uint32_t (*)(void*, void*)>(vtbl[0x14 / 4])(sub, arg);
    ext_0064DDE0(target, value);
}

// [0x0064F840] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<SkeletalJoint, Vector4 const&>::setDriveQuaternion::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>
// @summary Reads the target object from self, computes the Vector4 pointer via arg's sub-object vtable slot 6, and forwards to ext_00402040.
// @field ExprParser::WriteMethodType +0x00 void* targetObj
void fn_0064F840(void* self, void* arg) {
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    uint32_t value = reinterpret_cast<uint32_t (*)(void*, void*)>(vtbl[0x18 / 4])(sub, arg);
    ext_00402040(target, value);
}

// [0x006513E0] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &>::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}>
// @summary Reads a value from arg's reader via its vtable slot +0x14, then forwards it to the target via ext_0064F920.
// @field ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {[thunk]: __thiscall SkeletalJoint::`vcall'{132, {flat}}, 0}> +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* reader
void fn_006513E0(void* self, void* arg) {
    using ReadFn = void* (*)(void* self, void* arg);

    void* target = lift_field<void*>(self, 0);
    void* reader = lift_field<void*>(arg, 4);
    void* vtable = lift_field<void*>(reader, 0);
    ReadFn read = reinterpret_cast<ReadFn>(lift_field<void*>(vtable, 0x14));

    void* value = read(reader, arg);
    ext_0064F920(target, value);
}

// [0x00650D80] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<SkeletalJoint, int>::vcall84::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Reads the target object from self, computes the int value via arg's sub-object vtable slot 2, and forwards to ext_0064F900.
// @field ExprParser::WriteMethodType +0x00 void* targetObj
void fn_00650D80(void* self, void* arg) {
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    void** vtbl = *reinterpret_cast<void***>(sub);
    uint32_t value = reinterpret_cast<uint32_t (*)(void*, void*)>(vtbl[0x08 / 4])(sub, arg);
    ext_0064F900(target, value);
}

// [0x0068BC60] ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType<Randomizer, int>::vfunc_41
// @class ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>
// @summary Reads an int from arg's reader via its vtable slot +0x08, then forwards it to Randomizer::setSeed via ext_006B0C30.
// @field ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}> +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* reader
void fn_0068BC60(void* self, void* arg) {
    using ReadIntFn = int (*)(void* self, void* arg);

    void* target = lift_field<void*>(self, 0);
    void* reader = lift_field<void*>(arg, 4);
    void* vtable = lift_field<void*>(reader, 0);
    ReadIntFn read = reinterpret_cast<ReadIntFn>(lift_field<void*>(vtable, 0x08));

    int seed = read(reader, arg);
    ext_006B0C30(target, seed);
}
