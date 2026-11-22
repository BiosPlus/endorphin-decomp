// Lifted C++ translation unit: lifted/templates/Method0Type.cpp
#include "lift_compat.h"
extern "C" void ext_00493D90();

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
