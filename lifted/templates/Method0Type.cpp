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
extern "C" void ext_0048A9F0(void* self);
extern "C" void ext_0048ABB0(void* self);
extern "C" void ext_0048ABF0(void* self);
extern "C" void ext_004CCAF0(void* self);
extern "C" void ext_004CCB00(void* self);
extern "C" void ext_004CCDE0(void* self);
extern "C" void ext_005B72E0(void* self);
extern "C" void ext_005C3170(void* self);
extern "C" void ext_0068BC50(void* self);
extern "C" void ext_00692D90(void* self);
extern "C" void __fastcall ext_0048ABB0(void* self);
extern "C" void __fastcall ext_0048ABF0(void* self);
extern "C" void __fastcall ext_004CCB00(void* self);
extern "C" void __fastcall ext_004CCDE0(void* self);
extern "C" void __fastcall ext_005B72E0(void* self);
extern "C" void __fastcall ext_00692D90(void* self);
// Helper sub_0048ABB0 (22B): thiscall-style, ECX = target object.
extern "C" void ext_004CCAF0(void* target);
// Callee takes its single argument in ECX (thiscall-style), so it is declared __fastcall.
// Callee takes its single argument in ECX (thiscall-style), so it is declared __fastcall.
extern "C" void __thiscall ext_0068BC50(void* self);
#include <cstdint>

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

// [0x0048B020] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::capturePoseForBlend(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::capturePoseForBlend(void), 0}>::vfunc_0
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::capturePoseForBlend(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_0048B020(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_0048A9F0(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x0048B0C0] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>::vfunc_0
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_0048B0C0(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_0048ABB0(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x0048B160] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>::vfunc_0
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_0048B160(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_0048ABF0(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x004CCC80] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>::vfunc_0
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_004CCC80(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_004CCAF0(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x004CCD20] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}>::vfunc_0
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_004CCD20(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_004CCB00(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x004CD730] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::clearMetaBodiesFromFSM(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::clearMetaBodiesFromFSM(void), 0}>::vfunc_0
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::clearMetaBodiesFromFSM(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_004CD730(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_004CCDE0(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x005BB2D0] ExprParser::Method0Type<NMData::MetaBodyData, {public: void __thiscall NMData::MetaBodyData::resetForcesAndImpulses(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NMData::MetaBodyData, {public: void __thiscall NMData::MetaBodyData::resetForcesAndImpulses(void), 0}>::vfunc_0
// @class ExprParser::Method0Type<NMData::MetaBodyData, {public: void __thiscall NMData::MetaBodyData::resetForcesAndImpulses(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_005BB2D0(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_005B72E0(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x005C61B0] ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>::vfunc_0
// @class ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_005C61B0(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_005C3170(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x0066DCB0] ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_0
// @class ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_0066DCB0(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_0067B860(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x0068BF80] ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>::vfunc_0
// @class ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_0068BF80(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_0068BC50(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x00693040] ExprParser::Method0Type<ValuePtrArrayObject, {public: void __thiscall ValuePtrArrayObject::clear(void), 0}>::vfunc_0 (41 bytes)
// @name ExprParser::Method0Type<ValuePtrArrayObject, {public: void __thiscall ValuePtrArrayObject::clear(void), 0}>::vfunc_0
// @class ExprParser::Method0Type<ValuePtrArrayObject, {public: void __thiscall ValuePtrArrayObject::clear(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x00489540 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_00693040(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_00692D90(target);
    ext_006720C0(out, 0);
    return out;
}

// [0x0048B120] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>::vfunc_4 (40 bytes)
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>::vfunc_4
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DD10 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_0048B120(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_0048ABB0(target);
    ext_006290D8(out);
    return out;
}

// [0x0048B1C0] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>::vfunc_4 (40 bytes)
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>::vfunc_4
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DD10 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_0048B1C0(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_0048ABF0(target);
    ext_006290D8(out);
    return out;
}

// [0x004CCCE0] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>::vfunc_4 (40 bytes)
// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>::vfunc_4
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DD10 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_004CCCE0(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_004CCAF0(target);
    ext_006290D8(out);
    return out;
}

// [0x004CCD80] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}>::vfunc_4 (40 bytes)
// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}>::vfunc_4
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DD10 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_004CCD80(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_004CCB00(target);
    ext_006290D8(out);
    return out;
}

// [0x004CD790] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::clearMetaBodiesFromFSM(void), 0}>::vfunc_4 (40 bytes)
// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::clearMetaBodiesFromFSM(void), 0}>::vfunc_4
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::clearMetaBodiesFromFSM(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DD10 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_004CD790(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_004CCDE0(target);
    ext_006290D8(out);
    return out;
}

// [0x005BB330] ExprParser::Method0Type<NMData::MetaBodyData, {public: void __thiscall NMData::MetaBodyData::resetForcesAndImpulses(void), 0}>::vfunc_4 (40 bytes)
// @name ExprParser::Method0Type<NMData::MetaBodyData, {public: void __thiscall NMData::MetaBodyData::resetForcesAndImpulses(void), 0}>::vfunc_4
// @class ExprParser::Method0Type<NMData::MetaBodyData, {public: void __thiscall NMData::MetaBodyData::resetForcesAndImpulses(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DD10 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_005BB330(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_005B72E0(target);
    ext_006290D8(out);
    return out;
}

// [0x005C6210] ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>::vfunc_4 (40 bytes)
// @name ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>::vfunc_4
// @class ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DD10 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_005C6210(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_005C3170(target);
    ext_006290D8(out);
    return out;
}

// [0x0068BFE0] ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>::vfunc_4 (40 bytes)
// @name ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>::vfunc_4
// @class ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DD10 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_0068BFE0(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_0068BC50(target);
    ext_006290D8(out);
    return out;
}

// [0x006930A0] ExprParser::Method0Type<ValuePtrArrayObject, {public: void __thiscall ValuePtrArrayObject::clear(void), 0}>::vfunc_4 (40 bytes)
// @name ExprParser::Method0Type<ValuePtrArrayObject, {public: void __thiscall ValuePtrArrayObject::clear(void), 0}>::vfunc_4
// @class ExprParser::Method0Type<ValuePtrArrayObject, {public: void __thiscall ValuePtrArrayObject::clear(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0066DD10 (ExprParser::Method0Type<NMData::DisabledCollisionPairList>::vfunc_2).
void* fn_006930A0(void* unused, void* out) {
    (void)unused;
    void* target = lift_field<void*>(out, 0x00);
    ext_00692D90(target);
    ext_006290D8(out);
    return out;
}

// [0x0048B150] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>::vfunc_41 (14 bytes)
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, fire>::vfunc_41
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>
// @summary Reads the target object pointer from the proxy's first dword and forwards it to ext_0048ABB0 (fire helper); callee pops 8 bytes of args.
// @field ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}> +0x00 void* field_0x00
void fn_0048B150(void* proxy, void* unused) {
    (void)unused;
    void* target = *static_cast<void**>(proxy);
    ext_0048ABB0(target);
}

// [0x0048B0B0]
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, capturePoseForBlend>::vfunc_41
// @class ExprParser::Method0Type
// @summary Reads the first dword of the stack-supplied object and forwards it to helper sub_0048A9F0; pops 8 bytes on return.
// @field ExprParser::Method0Type +0x00 void* field_0x00

// Helper at 0x0048A9F0 consumes the value passed in ECX (thiscall-style).
extern void ext_0048A9F0(void* ecx_this);

void fn_0048B0B0(void* a1, uint32_t a2) {
    (void)a2;
    void* ecx = *reinterpret_cast<void**>(a1);
    ext_0048A9F0(ecx);
}

// [0x0048B1F0] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>::vfunc_41 (14 bytes)
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, endEvent>::vfunc_41
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>
// @summary Stdcall (ret 8) proxy: loads the target pointer stored at the proxy's first dword and forwards it to ext_0048ABF0 in ECX; the second stack argument is ignored.
// @field ExprParser::ValuePtrType +0x00 void* field_0x00
extern "C" void __stdcall fn_0048B1F0(void* self, void* unused) {
    (void)unused;
    void* target = *static_cast<void**>(self);
    ext_0048ABF0(target);
}

// [0x004CD7C0]
// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData, clearMetaBodiesFromFSM>::vfunc_41
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, clearMetaBodiesFromFSM>
// @summary Loads the first stack argument's pointee into ECX and tail-calls sub_004CCDE0 (clearMetaBodiesFromFSM helper); callee pops 8 bytes.
// @field ExprParser::Method0Type<NMData::MetaBodyConstraintData, clearMetaBodiesFromFSM> +0x00 void* field_0x00

extern void ext_004CCDE0(uint32_t ecx);
extern uint32_t mem_u32(uint32_t addr);

void fn_004CD7C0(uint32_t arg0, uint32_t arg1) {
    (void)arg1;
    uint32_t ecx = mem_u32(arg0);
    ext_004CCDE0(ecx);
}

// [0x0068C010] ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>::vfunc_41 (14 bytes)
// @name ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>::vfunc_41
// @class ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0048B150 (ExprParser::Method0Type<NMData::DesiredPoseEventData, fire>::vfunc_41).
void fn_0068C010(void* proxy, void* unused) {
    (void)unused;
    void* target = *static_cast<void**>(proxy);
    ext_0068BC50(target);
}

// [0x006930D0] ExprParser::Method0Type<ValuePtrArrayObject, {public: void __thiscall ValuePtrArrayObject::clear(void), 0}>::vfunc_41 (14 bytes)
// @name ExprParser::Method0Type<ValuePtrArrayObject, {public: void __thiscall ValuePtrArrayObject::clear(void), 0}>::vfunc_41
// @class ExprParser::Method0Type<ValuePtrArrayObject, {public: void __thiscall ValuePtrArrayObject::clear(void), 0}>
// @summary Auto-lifted identical-shape clone of 0x0048B150 (ExprParser::Method0Type<NMData::DesiredPoseEventData, fire>::vfunc_41).
void fn_006930D0(void* proxy, void* unused) {
    (void)unused;
    void* target = *static_cast<void**>(proxy);
    ext_00692D90(target);
}

// [0x004CCCC0]
// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData, fireEnable>::vfunc_2
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>
// @summary Reads the wrapped object pointer from the first argument and forwards its vtable-side pointer to ext_004CCAF0; always returns 0.
// @field ExprParser::ValuePtrType +0x00 void* field_0x00

extern void ext_004CCAF0(void* self);

int32_t fn_004CCCC0(void* arg) {
    void* obj = *reinterpret_cast<void**>(arg);
    ext_004CCAF0(obj);
    return 0;
}

// [0x004CCCD0] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>::vfunc_3 (16 bytes)
// @name ExprParser::Method0Type<MetaBodyConstraintData, fireEnable>::vfunc_3
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>
// @summary Forwards the wrapped value pointer at +0x00 to ext_004CCAF0 and returns false.
// @field ExprParser::Method0Type +0x00 void* field_0x00
bool fn_004CCCD0(void* self) {
    void* target = *static_cast<void**>(self);
    ext_004CCAF0(target);
    return false;
}

// [0x004CCD70] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}>::vfunc_3 (16 bytes)
// @name ExprParser::Method0Type<MetaBodyConstraintData, fireDisable>::vfunc_3
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}>
// @summary Loads the first dword of the object pointed to by the stack argument, passes it to ext_004CCB00 (fireDisable helper), and returns false.
// @field ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}> +0x00 void* vtable
bool fn_004CCD70(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_004CCB00(inner);
    return false;
}

// [0x005C61F0] ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>::vfunc_2 (16 bytes)
// @name ExprParser::Method0Type<CollisionModelDataBase, resetForcesAndImpulses>::vfunc_2
// @class ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>
// @summary Loads the first dword of the object pointed to by the stack argument, passes it to ext_005C3170 (resetForcesAndImpulses helper), and returns false.
// @field ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}> +0x00 void* vtable
bool fn_005C61F0(void* self) {
    void* inner = lift_field<void*>(self, 0x00);
    ext_005C3170(inner);
    return false;
}

// [0x0048B060] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::capturePoseForBlend(void), 0}>::vfunc_2 (16 bytes)
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, capturePoseForBlend>::vfunc_2
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::capturePoseForBlend(void), 0}>
// @summary Stdcall (ret 4) thunk: loads the target pointer stored at the proxy's first dword, calls ext_0048A9F0 on it (ECX = target), and returns 0.
// @field ExprParser::Method0Type +0x00 void* target

// Helper (thiscall, ECX = DesiredPoseEventData*) that performs the pose capture.
extern "C" void __fastcall ext_0048A9F0(void* self);

extern "C" int __stdcall fn_0048B060(void* self) {
    void* target = *static_cast<void**>(self);
    ext_0048A9F0(target);
    return 0;
}

// [0x0068BFD0]
// @name ExprParser::Method0Type<Randomizer, Randomizer::applySeed>::vfunc_3
// @class ExprParser::Method0Type<Randomizer, Randomizer::applySeed>
// @summary Reads a pointer from the first stack argument's first dword, passes it as `this` to ext_0068BC50, and returns false (al = 0).
// @field ExprParser::Method0Type<Randomizer, Randomizer::applySeed> +0x00 void* field_0x00
unsigned char fn_0068BFD0(void* arg) {
    void* inner = *reinterpret_cast<void**>(arg);
    ext_0068BC50(inner);
    return 0;
}

// [0x0068BFC0] ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>::vfunc_2 (16 bytes)
// @name ExprParser::Method0Type<Randomizer>::applySeed::vfunc_2
// @class ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}>
// @summary Stdcall (ret 4) thunk: loads the pointer stored in the proxy's first dword, passes it to ext_0068BC50, and returns 0.
// @field ExprParser::Method0Type<Randomizer, {public: void __thiscall Randomizer::applySeed(void), 0}> +0x00 void* field_0x00
extern "C" int __stdcall fn_0068BFC0(void* self) {
    void* target = *static_cast<void**>(self);
    ext_0068BC50(target);
    return 0;
}

// [0x00487DB0] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>::vfunc_40 (122 bytes)
namespace lift_00487DB0 {
extern void ext_0067A670();
extern int mem_00AD9DE0;
extern int mem_00AD9DDC;

// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, fire>::vfunc_40
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::fire(void), 0}>
// @summary Lazily constructs a function-local static object (guarded by bit 0 of mem_00AD9DE0) and stores its address into this+0x04.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04
void fn_00487DB0(void* self) {
    // Original SEH frame setup/teardown (fs:[0] push/pop) is omitted; it has no
    // semantic effect in the portable lift.

    // One-time initialization guard for the static object at 0x00AD9DDC.
    if ((mem_00AD9DE0 & 1) == 0) {
        mem_00AD9DE0 |= 1;
        ext_0067A670();                 // constructor call for the static object (ecx = 0x00AD9DDC)
        mem_00AD9DDC = 0x0093CBB4;      // vtable pointer of the static object
    }

    // this->field_0x04 = &static_object
    lift_field<uint32_t>(self, 0x04) = 0x00AD9DDCu;
}
} // namespace lift_00487DB0

// [0x00487D30] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::capturePoseForBlend(void), 0}>::vfunc_40 (122 bytes)
namespace lift_00487D30 {
// Guest-global one-time-init guard and static instance (32-bit guest addresses).
extern uint32_t mem_00AD9DD8;
extern uint32_t mem_00AD9DD4;
// Callee 0x0067A670: thiscall(ecx = object address) with one stack argument.
extern void ext_0067A670(uint32_t ecx_this, int32_t arg0);

// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, capturePoseForBlend>::vfunc_40
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::capturePoseForBlend(void), 0}>
// @summary Lazily initializes the static pose-capture helper object (once, guarded by a bit flag) and stores its guest address into the caller-supplied ValuePtr slot at +0x4.
// @field ExprParser::ValuePtrType +0x04 uint32_t valuePtr
void fn_00487D30(void* self) {
    // Guard: the first time through, mark initialized, run the helper's
    // constructor, and install its vtable into the static instance.
    if ((mem_00AD9DD8 & 1u) == 0u) {
        mem_00AD9DD8 |= 1u;
        ext_0067A670(0x00AD9DD4u, 0);
        mem_00AD9DD4 = 0x0093CADCu; // vtable pointer for the static instance
    }
    // Publish the static instance's guest address into self+0x4.
    *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x4) = 0x00AD9DD4u;
}
} // namespace lift_00487D30

// [0x00487CB0]
namespace lift_00487CB0 {
// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, thunk vcall{352}>::vfunc_40
// @class ExprParser::Method0Type
// @summary Lazily initializes the static vtable-backed object at mem_00AD9DCC (guarded by flag mem_00AD9DD0), then stores its address into the caller-supplied out object at +0x4.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04

extern "C++" {
// Callee sub_0067A670: ecx = object (0x00AD9DCC), one stack argument (0).
void ext_0067A670(uint32_t self, uint32_t arg);
}

// Static guard flag (bit 0 = initialized).
extern uint32_t mem_00AD9DD0;
// Static object storage; first dword receives vtable 0x0093CA04.
extern uint32_t mem_00AD9DCC;

void __stdcall lift_00487CB0(void* out) {
    if ((mem_00AD9DD0 & 1u) == 0) {
        mem_00AD9DD0 |= 1u;
        ext_0067A670(0x00AD9DCCu, 0u);
        mem_00AD9DCC = 0x0093CA04u;
    }
    lift_field<uint32_t>(out, 0x4) = 0x00AD9DCCu;
}
} // namespace lift_00487CB0

// [0x00487E30] ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>::vfunc_40 (122 bytes)
namespace lift_00487E30 {
extern void ext_0067A670(void* self, int arg0);
extern int mem_00AD9DE8;
extern int mem_00AD9DE4;

// @name ExprParser::Method0Type<NMData::DesiredPoseEventData, endEvent>::vfunc_40
// @class ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}>
// @summary One-time guarded init of the static object at mem_00AD9DE4 (vtable 0x0093CC8C, via ext_0067A670), then stores its address at self+0x04.
// @field ExprParser::Method0Type<NMData::DesiredPoseEventData, {public: void __thiscall NMData::DesiredPoseEventData::endEvent(void), 0}> +0x04 void* field_0x04
void fn_00487E30(void* self) {
    uint32_t& guard = lift_field<uint32_t>(&mem_00AD9DE8, 0);
    if ((guard & 1u) == 0) {
        guard |= 1u;
        ext_0067A670(&mem_00AD9DE4, 0);
        lift_field<uint32_t>(&mem_00AD9DE4, 0) = 0x0093CC8Cu;
    }
    lift_field<uint32_t>(self, 0x04) = 0x00AD9DE4u;
}
} // namespace lift_00487E30

// [0x004CA7D0]
namespace lift_004CA7D0 {
extern void ext_0067A670(void* self, uint32_t flag);
extern uint32_t mem_00AE448C;
extern uint32_t mem_00AE4488;

// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData, fireEnable>::vfunc_40
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireEnable(void), 0}>
// @summary One-time lazy init of the static fireEnable value-pointer object, then stores its address into the argument's +0x04 slot.
// @field ExprParser::ValuePtrType +0x04 void* valuePtr
void fn_004CA7D0(void* out) {
    uint8_t* out_bytes = static_cast<uint8_t*>(out);

    if ((mem_00AE448C & 1u) == 0) {
        mem_00AE448C |= 1u;
        ext_0067A670(&mem_00AE4488, 0);
        mem_00AE4488 = 0x009463F4u;  // vtable for the static object
    }

    const uint32_t addr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00AE4488));
    std::memcpy(out_bytes + 0x04, &addr, sizeof(addr));
}
} // namespace lift_004CA7D0

// [0x004CA850]
namespace lift_004CA850 {
extern void ext_0067A670();
extern int mem_00AE4494;
extern int mem_00AE4490;

// @name Method0Type<MetaBodyConstraintData, fireDisable>::vfunc_40
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}>
// @summary One-time initializes the static function-object at 0x00AE4490 (guarded by bit 0 of 0x00AE4494), then points self+0x04 at it.
// @field ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::fireDisable(void), 0}> +0x04 uint32_t field_0x04
void fn_004CA850(void* self) {
    constexpr uint32_t kStaticObjAddr = 0x00AE4490u;
    constexpr uint32_t kStaticVTable  = 0x009464CCu;

    if ((mem_00AE4494 & 1) == 0) {
        mem_00AE4494 |= 1;
        ext_0067A670();
        mem_00AE4490 = static_cast<int>(kStaticVTable);
    }

    lift_field<uint32_t>(self, 4) = kStaticObjAddr;
}
} // namespace lift_004CA850

// [0x004CA750] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {[thunk]: __thiscall NMData::MetaBodyConstraintData::`vcall'{352, {flat}}, 0}>::vfunc_40 (122 bytes)
namespace lift_004CA750 {
// Callee 0x0067A670: thiscall (ecx = object address) with one stack argument (0).
extern void ext_0067A670(uint32_t self, int32_t arg0);
// One-time init guard for the static object (bit 0 = initialized).
extern uint32_t mem_00AE4484;
// Static object storage; first dword receives vtable 0x0094631C.
extern uint32_t mem_00AE4480;

// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData>::vfunc_40
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {[thunk]: __thiscall NMData::MetaBodyConstraintData::`vcall'{352, {flat}}, 0}>
// @summary Lazily initializes the static object at mem_00AE4480 (guarded by bit 0 of mem_00AE4484, vtable 0x0094631C) and stores its address into the out object at +0x04.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04
void fn_004CA750(void* out) {
    // Original SEH frame setup/teardown (fs:[0] push/pop) has no semantic effect in the portable lift.
    if ((mem_00AE4484 & 1u) == 0u) {
        mem_00AE4484 |= 1u;
        ext_0067A670(0x00AE4480u, 0);
        mem_00AE4480 = 0x0094631Cu; // vtable pointer of the static object
    }
    lift_field<uint32_t>(out, 0x04) = 0x00AE4480u;
}
} // namespace lift_004CA750

// [0x004CA9F0] ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::clearMetaBodiesFromFSM(void), 0}>::vfunc_40 (122 bytes)
namespace lift_004CA9F0 {
extern void ext_0067A670();
extern int mem_00AE449C;
extern int mem_00AE4498;

// @name ExprParser::Method0Type<NMData::MetaBodyConstraintData>::vfunc_40
// @class ExprParser::Method0Type<NMData::MetaBodyConstraintData, {public: void __thiscall NMData::MetaBodyConstraintData::clearMetaBodiesFromFSM(void), 0}>
// @summary One-time guarded init of the static Method0Type instance at mem_00AE4498, then stores its address into the caller-supplied output's +0x04 slot.
// @field ExprParser::Method0Type<NMData::MetaBodyConstraintData> +0x04 uint32_t field_0x04
void fn_004CA9F0(void* out) {
    // Function-local static guard: run the one-time initializer only on first use.
    if ((mem_00AE449C & 1) == 0) {
        mem_00AE449C |= 1;
        ext_0067A670();
        mem_00AE4498 = 0x009465A4;  // vtable pointer for the static instance
    }
    lift_field<uint32_t>(out, 0x04) = 0x00AE4498u;
}
} // namespace lift_004CA9F0

// [0x005B8020]
namespace lift_005B8020 {
// @name ExprParser::Method0Type<NMData::MetaBodyData, resetForcesAndImpulses>::vfunc_40
// @class ExprParser::Method0Type
// @summary Lazily initializes a static helper object and stores its address into arg0 + 0x4.


extern uint32_t mem_00B43C98;
extern uint32_t mem_00B43C94;

extern void __thiscall ext_0067A670(void* ecx);

void __thiscall fn_005B8020(void* self, void* arg0) {
    (void)self;
    if ((mem_00B43C98 & 1u) == 0u) {
        mem_00B43C98 |= 1u;
        ext_0067A670(&mem_00B43C94);
        mem_00B43C94 = 0x00960A2Cu;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(arg0) + 0x4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_00B43C94));
}
} // namespace lift_005B8020

// [0x0060A160] ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::removeSelectedCollisionModels(void), 0}>::vfunc_40 (122 bytes)
namespace lift_0060A160 {
// Callee 0x0067A670: thiscall (ecx = object address) with one stack argument (0).
extern void ext_0067A670(uint32_t ecx_this, int32_t arg0);
// One-time-init guard flag (bit 0) and static object storage at 0x00B478C4.
extern uint32_t mem_00B478C8;
extern uint32_t mem_00B478C4;

// @name ExprParser::Method0Type<NMData::DisabledCollisionPairList, removeSelectedCollisionModels>::vfunc_40
// @class ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::removeSelectedCollisionModels(void), 0}>
// @summary Lazily constructs a function-local static object (guarded by bit 0 of mem_00B478C8) and stores its address into this+0x04.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04
void fn_0060A160(void* self) {
    // The original fs:[0] SEH frame setup/teardown has no semantic effect in the portable lift.

    // One-time initialization guard for the static object at 0x00B478C4.
    if ((mem_00B478C8 & 1u) == 0u) {
        mem_00B478C8 |= 1u;
        ext_0067A670(0x00B478C4u, 0);   // constructor call for the static object (ecx = 0x00B478C4)
        mem_00B478C4 = 0x00971DE4u;     // vtable pointer of the static object
    }

    // this->field_0x04 = &static_object
    lift_field<uint32_t>(self, 0x04) = 0x00B478C4u;
}
} // namespace lift_0060A160

// [0x0060A0D0] ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>::vfunc_40 (122 bytes)
namespace lift_0060A0D0 {
extern void ext_0067A670(void* self, int arg);
extern uint32_t mem_00B478C0;   // init guard flag (bit 0)
extern uint32_t mem_00B478BC;   // function-local static object storage

// @name ExprParser::Method0Type<DisabledCollisionPairList, addSelectedCollisionModels>::vfunc_40
// @class ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>
// @summary Lazily initializes a function-local static (guarded by bit 0 of mem_00B478C0) and stores its address into the output object at +0x04.
// @field ExprParser::ValuePtrType +0x04 uint32_t field_0x04
void fn_0060A0D0(void* out) {
    if ((mem_00B478C0 & 1u) == 0) {
        // First call: mark initialized, run the static's constructor, then set its vtable.
        mem_00B478C0 |= 1u;
        ext_0067A670(&mem_00B478BC, 0);
        mem_00B478BC = 0x00971D0Cu;  // vtable address
    }
    // Both paths publish the static's address to out->field_0x04.
    lift_field<uint32_t>(out, 0x04) = 0x00B478BCu;
}
} // namespace lift_0060A0D0

// [0x005C6250]
namespace lift_005C6250 {
extern uint8_t mem_00B44454[];
extern uint8_t mem_00B44450[];

extern void __thiscall ext_0067A670(void* self);

// @name ExprParser::Method0Type::vfunc_40
// @class ExprParser::Method0Type<NMData::CollisionModelDataBase, {protected: void __thiscall NMData::CollisionModelDataBase::resetForcesAndImpulses(void), 0}>
// @summary Lazily initializes a static singleton and stores its pointer at arg0 + 0x4.
// @field ExprParser::ValuePtrType +0x4 uint32_t field_0x4
void __thiscall fn_005C6250(void* self, void* arg0) {
    (void)self;
    if ((*reinterpret_cast<uint32_t*>(mem_00B44454) & 1u) == 0u) {
        *reinterpret_cast<uint32_t*>(mem_00B44454) |= 1u;
        ext_0067A670(mem_00B44450);
        *reinterpret_cast<uint32_t*>(mem_00B44450) = 0x0096331Cu;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(arg0) + 4) =
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B44450));
}
} // namespace lift_005C6250
