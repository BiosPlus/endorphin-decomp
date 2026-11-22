// Lifted C++ translation unit: lifted/NMData/FluidObjectData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Static std::string object at VA 0x00B44944 (copied into the sret buffer).
extern "C" const std::string mem_00B44944;
// Base-class implementation NMData::CollisionModelDataBase::vfunc_15 at 0x005C3010.
extern "C" void __thiscall ext_005C3010(void* self, void* a, void* b);

extern "C" void __thiscall ext_005C3010(void* self, void* a, void* b);
// @name NMData::FluidObjectData::vfunc_62
// @class NMData::FluidObjectData
// @summary Copy-constructs a std::string from the static string at 0x00B44944 into the caller's sret buffer and returns that buffer.
void* __thiscall fn_005C3270(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_00B44944);
    return out;
}

// [0x005C32B0] NMData::FluidObjectData::vfunc_15 (32 bytes)
// @name NMData::FluidObjectData::vfunc_15
// @class NMData::FluidObjectData
// @summary Forwards (a, b) to the CollisionModelDataBase::vfunc_15 implementation on this object and returns a.
void* __thiscall fn_005C32B0(void* self, void* a, void* b) {
    ext_005C3010(self, a, b);
    return a;
}
