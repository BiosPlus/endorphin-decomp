// Lifted C++ translation unit: lifted/NMData/EffectorBaseData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char mem_0097214C[];
extern "C" const char mem_0093BF0C[];
#include <cstring>

// [0x0060BC20] NMData::EffectorBaseData::vfunc_20 (157 bytes)
// @name NMData::EffectorBaseData::vfunc_20
// @class NMData::EffectorBaseData
// @summary Auto-lifted identical-shape clone of 0x00626850 (NMData::EffectorSkeletalData::vfunc_20).
// @field NMData::EffectorBaseData +0x4 std::string field_0x04
void* fn_0060BC20(void* self, void* dst, int unused_arg) {
    (void)unused_arg;
    auto* field_0x04 = reinterpret_cast<std::string*>(static_cast<char*>(self) + 0x04);
    new (dst) std::string(std::string(mem_0097214C) + *field_0x04 + mem_0093BF0C);
    return dst;
}

// [0x0060C040] NMData::EffectorBaseData::vfunc_2 (44 bytes)
namespace lift_0060C040 {
// @name NMData::EffectorBaseData::vfunc_2
// @class NMData::EffectorBaseData
// @summary Auto-lifted identical-shape clone of 0x0060E7B0 (NMData::AxisDefineSensorData::vfunc_2).
// @field NMData::EffectorBaseData +0x40 void* field_0x40
namespace lift_0060E7B0 {
extern void* __stdcall ext_006798D0(void* a0, void* a1, uint32_t a2, void* a3);
extern void __thiscall ext_00679030(void* self);

// @name NMData::AxisDefineSensorData::vfunc_2
// @class NMData::AxisDefineSensorData
// @summary Passes the arguments plus this->field_0x170 to ext_006798D0, hands its result to ext_00679030, and returns the first argument.
// @field NMData::AxisDefineSensorData +0x170 void* field_0x170
void* fn_0060C040(void* self, void* arg1, uint32_t arg2) {
    void* sub = lift_field<void*>(self, 0x40);
    void* result = ext_006798D0(arg1, sub, arg2, self);
    ext_00679030(result);
    return arg1;
}
} // namespace lift_0060E7B0
} // namespace lift_0060C040

// [0x0060C530] NMData::EffectorBaseData::vfunc_21 (63 bytes)
namespace lift_0060C530 {
// String-property copy helper at 0x00486CB0 (143 bytes). Original ABI is thiscall
// with a stack-allocated receiver and three stack args (ret 0xC); modelled here as
// (destination, source value, property key).
extern void ext_00486CB0(void* dst, const void* value, const char* key);

// Property-key string literals in .rdata.
extern int mem_0093F7BC;  // "m_name"
extern int mem_009722A8;  // "m_jointName"

// Virtual slot 9 (offset 0x24) of the source object: returns a const void* value.
typedef const void* (*GetValueSlot9Fn)(void* self);

// @name NMData::EffectorBaseData::vfunc_21
// @class NMData::EffectorBaseData
// @summary Copies the m_name and m_jointName string properties from a source EffectorBaseData into this object via the string-property helper.
// @field EffectorBaseData +0x04 std::string field_0x04
// @field EffectorBaseData +0x20 std::string field_0x20
void fn_0060C530(void* self, void* src) {
    uint8_t* dst = static_cast<uint8_t*>(self);
    uint8_t* from = static_cast<uint8_t*>(src);

    // value = src->vfunc_9()
    void** vtbl = *reinterpret_cast<void***>(from);
    GetValueSlot9Fn getValue = reinterpret_cast<GetValueSlot9Fn>(vtbl[9]);
    const void* value = getValue(src);

    ext_00486CB0(dst + 0x04, value, reinterpret_cast<const char*>(&mem_0093F7BC));
    ext_00486CB0(dst + 0x20, from + 0x20, reinterpret_cast<const char*>(&mem_009722A8));
}
} // namespace lift_0060C530
