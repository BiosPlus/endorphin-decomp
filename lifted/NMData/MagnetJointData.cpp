// Lifted C++ translation unit: lifted/NMData/MagnetJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// C string literal at VA 0x0096AFE8.
extern "C" const char mem_0096AFE8[];

// [0x005F0D40] NMData::MagnetJointData::vfunc_59 (34 bytes)
// @name NMData::MagnetJointData::vfunc_59
// @class NMData::MagnetJointData
// @summary Constructs a std::string from the literal at 0x0096AFE8 in the caller's sret buffer and returns that buffer.
void* __thiscall fn_005F0D40(void* self, void* out) {
    (void)self;
    new (out) std::string(mem_0096AFE8);
    return out;
}

// [0x005F0D20] NMData::MagnetJointData::vfunc_8 (32 bytes)
// Original (ret 4): calls vtable slot 59 (+0xEC) on self with (arg, 0), ignores its result, returns arg.
// The original also pushes the saved esi as a stack word; that word is not modelled here.
// @name NMData::MagnetJointData::vfunc_8
// @class NMData::MagnetJointData
// @summary Calls vtable slot 59 on self with (arg, 0) and returns arg.
void* fn_005F0D20(void* self, void* arg) {
    void** vtbl = lift_field<void**>(self, 0);
    using VFn = void (*)(void* obj, void* a, int flag);
    reinterpret_cast<VFn>(vtbl[59])(self, arg, 0);
    return arg;
}
