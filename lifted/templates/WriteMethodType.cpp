// Lifted C++ translation unit: lifted/templates/WriteMethodType.cpp
#include "lift_compat.h"
// Known callee 0x006036A0: VirtualSlot20Thunk (Virtual dispatch thunk: loads the object's vtable and tail-calls slot 20 (offset +0x50) with the same this pointer; the callee's result is passed through.)
extern "C" void ext_006036A0(void* self, uint32_t value);
// Known callee 0x00649080: sub_00649080 (38B), not yet named.
extern "C" void ext_00649080(void* self, uint32_t value);

extern "C" void ext_00649080(void* self, uint32_t value);
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x18 / 4, arg);
    ext_006036A0(target, value);
}
// Known callee 0x00648E30: sub_00648E30 (13B), not yet named.
extern "C" void ext_00648E30(void* self, uint32_t value);

extern "C" void ext_00648E30(void* self, uint32_t value);
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x0C / 4, arg);
    ext_00649080(target, value);
}
// Known callee 0x0064DDE0: sub_0064DDE0 (20B), not yet named.
extern "C" void ext_0064DDE0(void* self, uint32_t value);

extern "C" void ext_0064DDE0(void* self, uint32_t value);
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x0C / 4, arg);
    ext_00648E30(target, value);
}
// Known callee 0x00402040: AVIIO::vfunc_1 (3B). Called here as a plain (self, value) forwarder.
extern "C" void ext_00402040(void* self, uint32_t value);

extern "C" void ext_00402040(void* self, uint32_t value);
    void* target = *reinterpret_cast<void**>(self);
    void* sub = lift_field<void*>(arg, 0x04);
    uint32_t value = vcall_word(sub, 0x14 / 4, arg);
    ext_0064DDE0(target, value);
}
// Known callee 0x0064F900: VirtualSlot21Thunk (Virtual dispatch thunk: loads the object's vtable and tail-calls slot 21 (offset +0x54) with the same this pointer; the callee's result is passed through.)
extern "C" void ext_0064F900(void* self, uint32_t value);

extern "C" void ext_0064F900(void* self, uint32_t value);
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
// Known callee 0x0062A580: VirtualDispatchThunk_Slot17.
// Returns the code address stored at vtable offset 0x44 of `self`; the caller performs the call.
extern "C" void* __thiscall ext_0062A580(void* self);
// Calling-convention-tagged signature for a vtable slot taking (this, arg) and returning a pointer.
using ThisCallFn = void* (__thiscall*)(void* self, void* arg);
// Reads the code pointer at vtable byte offset `byteOffset` of object `obj`.
static inline void* vtable_entry(void* obj, ptrdiff_t byteOffset) {
    void* vt = lift_field<void*>(obj, 0);
    return lift_field<void*>(vt, byteOffset);
}

// Returns the code address stored at vtable offset 0x44 of `self`; the caller performs the call.
extern "C" void* __thiscall ext_0062A580(void* self);
// Calling-convention-tagged signature for a vtable slot taking (this, arg) and returning a pointer.
using ThisCallFn = void* (__thiscall*)(void* self, void* arg);
// Reads the code pointer at vtable byte offset `byteOffset` of object `obj`.
static inline void* vtable_entry(void* obj, ptrdiff_t byteOffset) {
    void* vt = lift_field<void*>(obj, 0);
    return lift_field<void*>(vt, byteOffset);
}
    uint32_t value = reinterpret_cast<uint32_t (*)(void*, void*)>(vtbl[0x0C / 4])(sub, arg);
    ext_00649080(target, value);
}
// Known callee 0x00603680: VirtualSlot19Thunk.
// Tail-jumps to slot 19 (offset +0x4C) of the object in `self`, passing `arg` on the stack.
extern "C" void __thiscall ext_00603680(void* self, void* arg);
// Reads the code pointer at vtable byte offset `byteOffset` of object `obj`.
static inline void* vtable_entry(void* obj, ptrdiff_t byteOffset) {
    void* vt = lift_field<void*>(obj, 0);
    return lift_field<void*>(vt, byteOffset);
}
// Calling-convention-tagged signature for a vtable slot taking (this, arg) and returning a pointer.

// Tail-jumps to slot 19 (offset +0x4C) of the object in `self`, passing `arg` on the stack.
extern "C" void __thiscall ext_00603680(void* self, void* arg);
// Reads the code pointer at vtable byte offset `byteOffset` of object `obj`.
static inline void* vtable_entry(void* obj, ptrdiff_t byteOffset) {
    void* vt = lift_field<void*>(obj, 0);
    return lift_field<void*>(vt, byteOffset);
}
// Calling-convention-tagged signature for a vtable slot taking (this, arg) and returning a pointer.
    void** vtbl = *reinterpret_cast<void***>(sub);
    uint32_t value = reinterpret_cast<uint32_t (*)(void*, void*)>(vtbl[0x0C / 4])(sub, arg);
    ext_00648E30(target, value);
}
// Known callee 0x006036A0: VirtualSlot20Thunk (Virtual dispatch thunk: loads the object's vtable and tail-calls slot 20 (offset +0x50) with the same this pointer; the callee's result is passed through.)
// Known callee 0x0064F920: sub_0064F920 (virtual dispatch thunk: forwards to vtable slot at +0x84).
// Called as thiscall(target) with one stack argument (the value returned by the vcall below).
extern "C" void ext_0064F920(void* self, void* arg);

// Called as thiscall(target) with one stack argument (the value returned by the vcall below).
extern "C" void ext_0064F920(void* self, void* arg);
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
// Known callee 0x006B0C30: sub_006B0C30 (10 bytes; Randomizer::setSeed-style body).
// Called as thiscall(target) with one stack argument (the int value returned by the vcall below).
extern "C" void ext_006B0C30(void* self, int32_t seed);

// Called as thiscall(target) with one stack argument (the int value returned by the vcall below).
extern "C" void ext_006B0C30(void* self, int32_t seed);
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
extern "C" void ext_0064DDE0(void* self, void* value);
extern "C" void ext_00402040(void* self, void* value);
// Known callee 0x0062A580: VirtualDispatchThunk_Slot17 (returns the code address stored at vtable offset 0x44 of self; the caller performs the call).
extern "C" void* ext_0062A580(void* self);

extern "C" void* ext_0062A580(void* self);
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
extern "C" void ext_0064F900(void* self, int32_t value);
// Known callee 0x00603680: VirtualSlot19Thunk (loads the object's vtable and tail-calls slot 19 (offset +0x4C) with the same this pointer; the callee's result is passed through).
extern "C" void* ext_00603680(void* self, void* value);

extern "C" void* ext_00603680(void* self, void* value);
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
extern "C" void __fastcall ext_0064F920(void* self, void* edx, void* value);

// [0x0068BC60] ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>::vfunc_41 (34 bytes)
// @name ExprParser::WriteMethodType::vfunc_41 (Randomizer::setSeed)
// @class ExprParser::WriteMethodType<Randomizer, int, {public: void __thiscall Randomizer::setSeed(int), 0}>
// @summary Queries the argument's object through its vtable slot +0x08 for an int, then forwards it to ext_006B0C30 on the bound Randomizer target.
// @field ExprParser::WriteMethodType +0x00 void* field_0x00
// @field ExprParser::ValuePtrType +0x04 void* field_0x04
void fn_0068BC60(void* self, void* arg) {
    void* target = lift_field<void*>(self, 0x00);
    void* obj = lift_field<void*>(arg, 0x04);
    void* vtbl = lift_field<void*>(obj, 0x00);
    auto query = reinterpret_cast<int32_t (*)(void*, void*)>(lift_field<void*>(vtbl, 0x08));
    int32_t seed = query(obj, arg);
    ext_006B0C30(target, seed);
}

// [0x006495F0] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<RelationshipRPROMagnet, bool>::applyCachedSettings::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::applyCachedSettings(bool), 0}>
// @summary Reads a bool from arg's reader (vtable slot +0x0C) and forwards it to RelationshipRPROMagnet::applyCachedSettings on the target stored at self.
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* reader
void fn_006495F0(void* self, void* arg) {
    void* target = lift_field<void*>(self, 0x00);
    void* reader = lift_field<void*>(arg, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    auto read = reinterpret_cast<uint32_t (*)(void*, void*)>(lift_field<void*>(vtbl, 0x0C));
    uint32_t value = read(reader, arg);
    ext_00649080(target, value);
}

// [0x00649D50] ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<RelationshipRPROMagnet, bool>::setRotationMode::vfunc_41
// @class ExprParser::WriteMethodType<RelationshipRPROMagnet, bool, {public: void __thiscall RelationshipRPROMagnet::setRotationMode(bool), 0}>
// @summary Reads a bool from arg's reader (vtable slot +0x0C) and forwards it to RelationshipRPROMagnet::setRotationMode on the target stored at self.
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* reader
void fn_00649D50(void* self, void* arg) {
    void* target = lift_field<void*>(self, 0x00);
    void* reader = lift_field<void*>(arg, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    auto read = reinterpret_cast<uint32_t (*)(void*, void*)>(lift_field<void*>(vtbl, 0x0C));
    uint32_t value = read(reader, arg);
    ext_00648E30(target, value);
}

// [0x0064F790] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<SkeletalJoint, Vector3 const&>::setDriveAngularVel::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, {public: void __thiscall SkeletalJoint::setDriveAngularVel(class NM::Vector3 const &), 0}>
// @summary Reads a Vector3 const pointer from arg's reader (vtable slot +0x14) and forwards it to SkeletalJoint::setDriveAngularVel on the target stored at self.
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* reader
void fn_0064F790(void* self, void* arg) {
    void* target = lift_field<void*>(self, 0x00);
    void* reader = lift_field<void*>(arg, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    auto read = reinterpret_cast<void* (*)(void*, void*)>(lift_field<void*>(vtbl, 0x14));
    void* value = read(reader, arg);
    ext_0064DDE0(target, value);
}

// [0x0064F840] ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<SkeletalJoint, Vector4 const&>::setDriveQuaternion::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, NM::Vector4 const &, {public: void __thiscall SkeletalJoint::setDriveQuaternion(class NM::Vector4 const &), 0}>
// @summary Reads a Vector4 const pointer from arg's reader (vtable slot +0x18) and forwards it to SkeletalJoint::setDriveQuaternion on the target stored at self.
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* reader
void fn_0064F840(void* self, void* arg) {
    void* target = lift_field<void*>(self, 0x00);
    void* reader = lift_field<void*>(arg, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    auto read = reinterpret_cast<void* (*)(void*, void*)>(lift_field<void*>(vtbl, 0x18));
    void* value = read(reader, arg);
    ext_00402040(target, value);
}

// [0x00604930] ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>::vfunc_41 (34 bytes)
// @name WriteMethodType<EffectorBase, bool>::vcall68::vfunc_41
// @class ExprParser::WriteMethodType<EffectorBase, bool, &[thunk]: __thiscall EffectorBase::`vcall'{68, {flat}}>
// @summary Reads the target object from valuePtr, computes a 32-bit result via arg's sub-object vtable slot 3 (offset 0x0C), then dispatches that result to the target's vtable slot 17 (offset 0x44).
// @field ExprParser::ValuePtrType +0x00 void* targetObj
// @field Unknown +0x04 void* field_0x04
uint32_t fn_00604930(void* valuePtr, void* arg) {
    void* target = lift_field<void*>(valuePtr, 0x00);        // first field: target object
    void* sub = lift_field<void*>(arg, 0x04);                // sub-object interface at arg+0x04
    void* subVtbl = lift_field<void*>(sub, 0x00);            // sub's vtable pointer
    using SlotFn = uint32_t (__thiscall*)(void* self, void* arg);
    uint32_t r = reinterpret_cast<SlotFn>(lift_field<void*>(subVtbl, 0x0C))(sub, arg);
    void* code = ext_0062A580(target);                       // target's slot 17 code address
    using DispatchFn = uint32_t (__thiscall*)(void* self, uint32_t value);
    return reinterpret_cast<DispatchFn>(code)(target, r);
}

// [0x00650D80] ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>::vfunc_41 (34 bytes)
// @name WriteMethodType<SkeletalJoint, int>::vcall84::vfunc_41
// @class ExprParser::WriteMethodType<SkeletalJoint, int, {[thunk]: __thiscall SkeletalJoint::`vcall'{84, {flat}}, 0}>
// @summary Reads an int from arg's reader (vtable slot +0x08) and forwards it to the target's vcall{84} thunk (vtable slot +0x54) via ext_0064F900.
// @field ExprParser::WriteMethodType +0x00 void* target
// @field ExprParser::ValuePtrType +0x04 void* reader
void fn_00650D80(void* self, void* arg) {
    void* target = lift_field<void*>(self, 0x00);
    void* reader = lift_field<void*>(arg, 0x04);
    void* vtbl = lift_field<void*>(reader, 0x00);
    auto read = reinterpret_cast<int32_t (*)(void*, void*)>(lift_field<void*>(vtbl, 0x08));
    int32_t value = read(reader, arg);
    ext_0064F900(target, value);
}

// [0x00604BA0] ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>::vfunc_41 (34 bytes)
// @name WriteMethodType<EffectorBase, Vector4 const&>::vcall76::vfunc_41
// @class ExprParser::WriteMethodType<EffectorBase, NM::Vector4 const &, &[thunk]: __thiscall EffectorBase::`vcall'{76, {flat}}>
// @summary Reads the target object from valuePtr, computes a Vector4 pointer via arg's sub-object vtable slot 6 (offset 0x18), then forwards it to ext_00603680, which dispatches to the target's slot 19 (offset 0x4C).
// @field ExprParser::ValuePtrType +0x00 void* targetObj
// @field Unknown +0x04 void* field_0x04
void* fn_00604BA0(void* valuePtr, void* arg) {
    void* target = lift_field<void*>(valuePtr, 0x00);        // first field: target object
    void* sub = lift_field<void*>(arg, 0x04);                // sub-object interface at arg+0x04
    void* subVtbl = lift_field<void*>(sub, 0x00);            // sub's vtable pointer
    using SlotFn = void* (__thiscall*)(void* self, void* arg);
    void* r = reinterpret_cast<SlotFn>(lift_field<void*>(subVtbl, 0x18))(sub, arg);
    return ext_00603680(target, r);
}

// [0x006513E0]
// @name ExprParser::WriteMethodType<SkeletalJoint, NM::Vector3 const &, vcall132>::vfunc_41
// @class ExprParser::WriteMethodType
// @summary Fetches a value via vtable slot +0x14 of the object at arg2+0x4, then forwards it to the write thunk with the target from *arg1.
// @field ExprParser::WriteMethodType +0x04 void* field_0x04

struct VObj { void** vtable; };
struct Holder { int field_0x00; VObj* field_0x04; };

extern "C" void __stdcall fn_006513E0(void** target, Holder* src)
{
    void* self = *target;
    VObj* obj = src->field_0x04;
    typedef void* (__thiscall *Fn)(VObj*, Holder*);
    void* v = reinterpret_cast<Fn>(obj->vtable[5])(obj, src);
    ext_0064F920(self, nullptr, v);
}
