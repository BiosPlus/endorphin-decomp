// Lifted C++ translation unit: lifted/NMData/MagnetJointData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// C string literal at VA 0x0096AFE8.
extern "C" const char mem_0096AFE8[];

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

// [0x005F0FA0]
namespace lift_005F0FA0 {
// @name NMData::MagnetJointData::vfunc_17_off_C
// @class NMData::MagnetJointData
// @summary Allocates and constructs a 0x318-byte object (likely MagnetJointData) and copies a flag from TransformInterface::vfunc_0x20 to offset +0x148.
// @field NMData::MagnetJointData +0x04 void* vptr_TransformInterface
// @field NMData::MagnetJointData +0x148 uint8_t field_0x148


extern void* ext_006A5C62(uint32_t size);
extern void* __thiscall ext_005F0AE0(void* self);

extern void* __thiscall fn_005F0FA0(uint8_t* self_off_c) {
    uint8_t* obj = static_cast<uint8_t*>(ext_006A5C62(0x318));
    uint8_t* result = nullptr;
    if (obj != nullptr) {
        result = static_cast<uint8_t*>(ext_005F0AE0(obj));
    }

    uint8_t* transform_iface = self_off_c - 0x8;
    uintptr_t vtable = *reinterpret_cast<uintptr_t*>(transform_iface);
    using VFunc20 = uint8_t(__thiscall*)(void*);
    VFunc20 vfunc_20 = *reinterpret_cast<VFunc20*>(vtable + 0x20);
    uint8_t flag = vfunc_20(transform_iface);

    result[0x148] = flag;
    return result;
}
} // namespace lift_005F0FA0

// [0x005F0D40]
namespace lift_005F0D40 {
// C string literal at VA 0x0096AFE8.
extern const char mem_0096AFE8[];
// MSVCP80 import slot at VA 0x00924FE4: holds the address of
// std::basic_string<char>::basic_string(const char*, const allocator&).
extern void* mem_00924FE4;

// Original (ret 4): constructs a std::string from the literal at 0x0096AFE8 in the
// buffer whose pointer is the stack argument, then returns that pointer. The
// original also pushes a saved-esi word and a zero word as extra stack words;
// those are not modelled here (same convention as MagnetJointData::vfunc_8).
// @name NMData::MagnetJointData::vfunc_59
// @class NMData::MagnetJointData
// @summary Constructs a std::string from the literal at 0x0096AFE8 into the caller-supplied buffer and returns that buffer.
void* fn_005F0D40(void* dst) {
    using StrCtorFn = void(__thiscall*)(void* self, const char* s, const void* alloc);
    StrCtorFn ctor = *reinterpret_cast<StrCtorFn*>(&mem_00924FE4);
    ctor(dst, mem_0096AFE8, nullptr);
    return dst;
}
} // namespace lift_005F0D40
