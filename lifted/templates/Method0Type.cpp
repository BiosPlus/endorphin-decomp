// Lifted C++ translation unit: lifted/templates/Method0Type.cpp
#include "lift_compat.h"
extern "C" void ext_00493D90();
void ext_00493D90(void* self);
extern "C" void __fastcall ext_0067B860(void* self);

// [0x0060A070] ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>::vfunc_2 (16 bytes)
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

// [0x0060A080]
// @name ExprParser::Method0Type<NMData::DisabledCollisionPairList, addSelectedCollisionModels>::vfunc_3
// @class ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}>
// @summary Forwards the pointer stored at the object's first field to ext_00493D90 and returns false.
// @field ExprParser::Method0Type<NMData::DisabledCollisionPairList, {public: void __thiscall NMData::DisabledCollisionPairList::addSelectedCollisionModels(void), 0}> +0x00 void* field_0x00

bool ExprParser_Method0Type_DisabledCollisionPairList_vfunc_3(void* self) {
    void* inner = *reinterpret_cast<void**>(self);
    ext_00493D90(inner);
    return false;
}

// [0x0066DCE0] ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>::vfunc_1 (16 bytes)
// @name ExprParser::Method0Type<NM::Vector3, NM::Vector3::normalize2>::vfunc_1
// @class ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)>
// @summary Stdcall (ret 4) thunk: loads the target pointer stored at the proxy's first dword, calls the helper on it with it in ecx, and returns 0.0f.
// @field ExprParser::Method0Type<NM::Vector3, &public: void __thiscall NM::Vector3::normalize2(void)> +0x00 void* field_0x00
extern "C" float __stdcall fn_0066DCE0(void* self) {
    void* target = *static_cast<void**>(self);
    ext_0067B860(target);
    return 0.0f;
}
