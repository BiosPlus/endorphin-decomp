// Lifted C++ translation unit: lifted/NMData/RootRelationshipData.cpp
#include "lift_compat.h"
extern "C" void ext_005EB5A0(void* self);
extern "C" void __thiscall ext_005F2970(void* self, uint32_t arg);
extern "C" bool __thiscall ext_0062908A(void* self);
extern "C" void* __thiscall ext_00629266(void* self, const char* s);
extern "C" const char mem_0093E1E4[];

extern "C" bool __thiscall ext_0062908A(void* self);
extern "C" void* __thiscall ext_00629266(void* self, const char* s);
extern "C" const char mem_0093E1E4[];
// @summary Forwards to the base NMData::RelationshipData::vfunc_22 for this object and returns this.
// (no fields accessed: the function only passes `self` through)
void* fn_005EBEA0(void* self) {
    ext_005EB5A0(self);
    return self;
}

// [0x005F2F50]
// @name NMData::RootRelationshipData::vfunc_21
// @class NMData::RootRelationshipData
// @summary Forwards the argument to NullRelationshipData::vfunc_21, then sets the string at +0x14 to "root" if it is empty.
// @field NMData::RootRelationshipData +0x14 uint8_t field_0x14 (std::string, MSVC layout; accessed as opaque bytes)
void __thiscall fn_005F2F50(void* self, uint32_t arg)
{
    ext_005F2970(self, arg);

    void* name = static_cast<uint8_t*>(self) + 0x14;
    if (ext_0062908A(name)) {
        ext_00629266(name, mem_0093E1E4);
    }
}
