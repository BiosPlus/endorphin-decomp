// Lifted C++ translation unit: lifted/templates/Method0Type.cpp
#include "lift_compat.h"
extern "C" void ext_00493D90();
void ext_00493D90(void* self);
extern "C" void __fastcall ext_0067B860(void* self);
// @name ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2
// @class ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>
// @summary Forwards the object's first dword to ext_00493D90 and returns 0 (stdcall, one arg).
// @field ExprParser::Method0Type +0x00 void* field_0x00
int fn_0060A070(void* self) {
    void* first = lift_field<void*>(self, 0x00);
    (void)first;
    ext_00493D90();
    return 0;
}
// Callee receives the object's vtable pointer in ECX (thiscall-style); see body.
void ext_00493D90(void* vtbl);

void ext_00493D90(void* vtbl);
// @name ExprParser::Method0Type<NMData::DisabledCollisionPairList, addSelectedCollisionModels>::vfunc_3
// @class ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>
// @summary Forwards the pointer stored at the object's first field to ext_00493D90 and returns false.
// @field ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}> +0x00 void* field_0x00

bool ExprParser_Method0Type_DisabledCollisionPairList_vfunc_3(void* self) {
    void* inner = *reinterpret_cast<void**>(self);
    ext_00493D90(inner);
    return false;
}
void ext_00493D90(void* self);
// ECX carries the object's vtable pointer (thiscall-style).
void ext_00493D90(void* self);

void ext_00493D90(void* self);
// @name ExprParser::Method0Type<NM::Vector3, NM::Vector3::normalize2>::vfunc_1
// @class ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>
// @summary Stdcall (ret 4) thunk: loads the target pointer stored at the proxy's first dword, calls the helper on it with it in ecx, and returns 0.0f.
// @field ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)> +0x00 void* field_0x00
extern "C" float __stdcall fn_0066DCE0(void* self) {
    void* target = *static_cast<void**>(self);
    ext_0067B860(target);
    return 0.0f;
}
extern "C" void __fastcall ext_0048A9F0(void* self);
extern "C" void __fastcall ext_004CCAF0(void* self);
extern "C" void __fastcall ext_005C3170(void* self);
extern "C" void __fastcall ext_0068BC50(void* self);
extern "C" void ext_00671100(int selector, void* arg);
// Helper (thiscall, ECX = target object) that operates on the Vector3 pointed to by the out-param.
extern "C" void ext_0067B860(void* self);
// MSVCP80 std::string default constructor (IAT slot mem_00924FE8 -> 0x006290D8).
extern "C" void ext_006290D8(void* self);

extern "C" void ext_0067B860(void* self);
// MSVCP80 std::string default constructor (IAT slot mem_00924FE8 -> 0x006290D8).
extern "C" void ext_006290D8(void* self);
// @summary Stdcall (ret 4) thunk: loads the pointer stored at the object's first field, passes it to ext_00493D90, and returns false.
// @field ExprParser::Method0Type +0x00 void* field_0x00
bool fn_0060A080(void* self) {
    void* inner = *static_cast<void**>(self);
    ext_00493D90(inner);
    return false;
}
// Known callee 0x004CA560: sub_004CA560 (Virtual dispatch thunk: forwards to vtable slot at +0x160.)
extern "C" void ext_004CA560(void* self);
// Helper sub_006720C0 (thiscall: ECX = object, one stack int arg).
extern "C" void ext_006720C0(void* self, int flag);

extern "C" void ext_004CA560(void* self);
// Helper sub_006720C0 (thiscall: ECX = object, one stack int arg).
extern "C" void ext_006720C0(void* self, int flag);
// @summary Forwards the object's vtable pointer to AddCharacterDialog::vfunc_3 (ext_00493D90) and returns 0.0f.
// @field ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}> +0x00 void* vtable
float fn_0060A150(void* self) {
    void* vtbl = lift_field<void*>(self, 0x00);
    ext_00493D90(vtbl);
    return 0.0f;
}
// AddCharacterDialog::vfunc_3 (1B stub), called with the target object.
void ext_00493D90(void* self);
// Helper sub_006720C0 (thiscall: ECX = object, one stack int arg).

void ext_00493D90(void* self);
// Helper sub_006720C0 (thiscall: ECX = object, one stack int arg).
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::capturePoseForBlend(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DCE0 (ExprParser::Method0Type<NM::Vector3, NM::Vector3::normalize2>::vfunc_1).
extern "C" float __stdcall fn_0048B050(void* self) {
    void* target = *static_cast<void**>(self);
    ext_0048A9F0(target);
    return 0.0f;
}
// AddCharacterDialog::vfunc_3 (1B stub), called with the target object.
void ext_00493D90(void* self);
// Helper sub_006720C0 (thiscall: ECX = object, one stack int arg).

void ext_00493D90(void* self);
// Helper sub_006720C0 (thiscall: ECX = object, one stack int arg).
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DCE0 (ExprParser::Method0Type<NM::Vector3, NM::Vector3::normalize2>::vfunc_1).
extern "C" float __stdcall fn_004CCCB0(void* self) {
    void* target = *static_cast<void**>(self);
    ext_004CCAF0(target);
    return 0.0f;
}
// AddCharacterDialog::vfunc_3 (1B stub), called with the target object.
void ext_00493D90(void* self);
// Helper sub_006720C0 (thiscall: ECX = object, one stack int arg).

void ext_00493D90(void* self);
// Helper sub_006720C0 (thiscall: ECX = object, one stack int arg).
// @class ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DCE0 (ExprParser::Method0Type<NM::Vector3, NM::Vector3::normalize2>::vfunc_1).
extern "C" float __stdcall fn_005C61E0(void* self) {
    void* target = *static_cast<void**>(self);
    ext_005C3170(target);
    return 0.0f;
}
// AddCharacterDialog::vfunc_3 (1B stub), called with the target object.
void ext_00493D90(void* self);
// Helper sub_006720C0 (thiscall: ECX = object, one stack int arg).

void ext_00493D90(void* self);
// Helper sub_006720C0 (thiscall: ECX = object, one stack int arg).
// @class ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DCE0 (ExprParser::Method0Type<NM::Vector3, NM::Vector3::normalize2>::vfunc_1).
extern "C" float __stdcall fn_0068BFB0(void* self) {
    void* target = *static_cast<void**>(self);
    ext_0068BC50(target);
    return 0.0f;
}

// [0x004CB470] ExprParser::Method0Type<NMData::DesiredPoseEventData, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{352, {flat}}, 0}>::vfunc_41 (14 bytes)
#include "lift_compat.h"

// Known callee 0x004CA560: sub_004CA560 (Virtual dispatch thunk: forwards to vtable slot at +0x160.)
extern "C" void ext_004CA560(void* self);

// @name ExprParser::Method0Type<NMData::DesiredPoseEventData>::vfunc_41
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{352, {flat}}, 0}>
// @summary Loads the held object pointer at self+0 and forwards the call to its vtable slot +0x160 via ext_004CA560.
// @field ExprParser::ValuePtrType +0x00 void* field_0x00
void fn_004CB470(void* self) {
    void* target = *static_cast<void**>(self);
    ext_004CA560(target);
}

// [0x00487EB0] ExprParser::Method0Type<NMData::DesiredPoseEventData, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{352, {flat}}, 0}>::vfunc_16 (30 bytes)
#include "lift_compat.h"

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" void* ext_006A6E9E(void* inptr, long vfDelta, const void* srcType, const void* targetType, int isReference);
extern "C" int mem_00A2E93C;
extern "C" int mem_00A2E2F8;

// @name ExprParser::Method0Type<NMData::DesiredPoseEventData>::vfunc_16
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{352, {flat}}, 0}>
// @summary Runtime type check: dynamic-casts self to the type at mem_00A2E93C (source type mem_00A2E2F8) and returns the result or NULL.
void* fn_00487EB0(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A2E93C), 0);
}

// [0x004CA420] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {[thunk]: __thiscall NMData::MetaBodyConstraintData::`vcall'{352, {flat}}, 0}>::vfunc_16 (30 bytes)
#include "lift_compat.h"

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" void* ext_006A6E9E(void* inptr, long vfDelta, const void* srcType, const void* targetType, int isReference);
extern "C" int mem_00A32978;
extern "C" int mem_00A2E2F8;

// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData>::vfunc_16
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {[thunk]: __thiscall NMData::MetaBodyConstraintData::`vcall'{352, {flat}}, 0}>
// @summary Runtime type check: dynamic-casts self to the type at mem_00A32978 (source type mem_00A2E2F8) and returns the result or NULL.
void* fn_004CA420(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A32978), 0);
}

// [0x0066CBA0] ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_16 (30 bytes)
#include "lift_compat.h"

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" void* ext_006A6E9E(void* inptr, long vfDelta, const void* srcType, const void* targetType, int isReference);
extern "C" int mem_00A85538;
extern "C" int mem_00A2E2F8;

// @name ExprParser::Method0Type<NM::Vector3>::vfunc_16
// @class ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>
// @summary Runtime type check: dynamic-casts self to the type at mem_00A85538 (source type mem_00A2E2F8) and returns the result or NULL.
void* fn_0066CBA0(void* self) {
    return ext_006A6E9E(self, 0, reinterpret_cast<const void*>(&mem_00A2E2F8),
                        reinterpret_cast<const void*>(&mem_00A85538), 0);
}

// [0x004CB440] ExprParser::Method0Type<NMData::DesiredPoseEventData, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{352, {flat}}, 0}>::vfunc_4 (40 bytes)
#include "lift_compat.h"

// Known callee 0x004CA560: sub_004CA560 (Virtual dispatch thunk: forwards to vtable slot at +0x160.)
extern "C" void ext_004CA560(void* self);
// MSVCP80 std::basic_string<char> default constructor, reached via IAT slot mem_00924FE8 (value 0x006290D8).
extern "C" void ext_006290D8(void* self);
extern "C" int mem_00924FE8;

// @name ExprParser::Method0Type<NMData::DesiredPoseEventData>::vfunc_4
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{352, {flat}}, 0}>
// @summary Forwards to the object at *out via ext_004CA560, default-constructs the std::string at out, and returns out.
// @field std::string +0x00 void* field_0x00
void* fn_004CB440(void* unused, void* out) {
    (void)unused;
    ext_004CA560(*static_cast<void**>(out));
    ext_006290D8(out);
    return out;
}

// [0x0060A090] ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>::vfunc_4 (40 bytes)
#include "lift_compat.h"

// Known callee 0x00493D90: AddCharacterDialog::vfunc_3 (1 byte; body is effectively a bare return).
void ext_00493D90(void* self);
// MSVCP80 std::basic_string<char> default constructor, reached via IAT slot mem_00924FE8 (value 0x006290D8).
extern "C" void ext_006290D8(void* self);
extern "C" int mem_00924FE8;

// @name ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_4
// @class ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>
// @summary Forwards to the object at *out via ext_00493D90, default-constructs the std::string at out, and returns out.
// @field std::string +0x00 void* field_0x00
void* fn_0060A090(void* unused, void* out) {
    (void)unused;
    ext_00493D90(*static_cast<void**>(out));
    ext_006290D8(out);
    return out;
}

// [0x005C3380] ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_13 (13 bytes)
// @name ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_13
// @class ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>
// @summary Auto-lifted identical-shape clone of 0x0051A4D0 (ExprParser::ROWriteMethodType::vfunc_13 (EffectorBase vcall 76)).
void fn_005C3380(void* arg) {
    ext_00671100(16, arg);
}

// [0x0066DD10] ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_4 (40 bytes)
// @name ExprParser::Method0Type<NM::Vector3, NM::Vector3::normalize2>::vfunc_4
// @class ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>
// @summary Stdcall (ret 8) thunk: loads the target pointer from the out-param, calls the Vector3 helper on it, default-constructs the out-param as a std::string, and returns the out-param.
// @field ExprParser::Method0Type +0x00 void* field_0x00
void* fn_0066DD10(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_0067B860(target);
    ext_006290D8(out);
    return out;
}

// [0x00489540] ExprParser::Method0Type<NMData::DesiredPoseEventData, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{352, {flat}}, 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData>::vfunc_0
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {[thunk]: __thiscall NMData::DesiredPoseEventData::`vcall'{352, {flat}}, 0}>
// @summary Stdcall (ret 8) thunk: dispatches through the target object's vtable (slot +0x160) via ext_004CA560, then runs ext_006720C0 on the out-param with flag 0 and returns the out-param.
// @field ExprParser::Method0Type +0x00 void* field_0x00
void* fn_00489540(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_004CA560(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x0060A040] ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NMData::DisabledCollisionPairList, addSelectedCollisionModels>::vfunc_0
// @class ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>
// @summary Stdcall (ret 8) thunk: passes the target pointer stored in the out-param to ext_00493D90, runs ext_006720C0 on the out-param with flag 0, and returns the out-param.
// @field ExprParser::Method0Type +0x00 void* field_0x00
void* fn_0060A040(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_00493D90(target);
    ext_006720C0(out, 0);
    return out;
}
