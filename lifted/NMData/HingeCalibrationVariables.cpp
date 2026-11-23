// Lifted C++ translation unit: lifted/NMData/HingeCalibrationVariables.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// .rdata string literal at 0x009770F4 (contents not recovered).
extern "C" const char mem_009770F4[];

// [0x006227B0] NMData::HingeCalibrationVariables::vfunc_28 (34 bytes)
// @name NMData::HingeCalibrationVariables::vfunc_28
// @class NMData::HingeCalibrationVariables
// @summary Constructs a std::string from the literal at 0x009770F4 in the caller's result slot (first stack argument) and returns that slot. The incoming this (ecx) is overwritten and unused.
void* fn_006227B0(void* self, void* dst, void* arg2) {
    (void)self;
    (void)arg2;
    new (dst) std::string(mem_009770F4);
    return dst;
}

// [0x006228E0]
namespace lift_006228E0 {
// @name NMData::HingeCalibrationVariables::vfunc_27
// @class NMData::HingeCalibrationVariables
// @summary Allocates and constructs a 16-byte object and initializes it with three float fields via virtual setters.
// @field NMData::HingeCalibrationVariables +0x04 float field_0x04
// @field NMData::HingeCalibrationVariables +0x08 float field_0x08
// @field NMData::HingeCalibrationVariables +0x0C float field_0x0C


extern void* __cdecl ext_006A5C62(uint32_t size);
extern void* __thiscall ext_00622750(void* self);

void* __thiscall fn_006228E0(uint8_t* self) {
    void* obj = ext_006A5C62(0x10);
    void* esi = obj ? ext_00622750(obj) : nullptr;

    using VSetter = void (__thiscall*)(void*, float);

    uint32_t* vtable = *reinterpret_cast<uint32_t**>(esi);
    reinterpret_cast<VSetter>(vtable[5])(esi, *reinterpret_cast<float*>(self + 0xC));

    vtable = *reinterpret_cast<uint32_t**>(esi);
    reinterpret_cast<VSetter>(vtable[3])(esi, *reinterpret_cast<float*>(self + 0x4));

    vtable = *reinterpret_cast<uint32_t**>(esi);
    reinterpret_cast<VSetter>(vtable[4])(esi, *reinterpret_cast<float*>(self + 0x8));

    return esi;
}
} // namespace lift_006228E0
