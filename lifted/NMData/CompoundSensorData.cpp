// Lifted C++ translation unit: lifted/NMData/CompoundSensorData.cpp
#include "lift_compat.h"
extern "C" void ext_00610730(void* a1, void* subobject);

// [0x006108F0] NMData::CompoundSensorData::vfunc_8 (37 bytes)
// @name NMData::CompoundSensorData::vfunc_8
// @class NMData::CompoundSensorData
// @summary Forwards a1 and the address of the embedded subobject at this+0x154 to ext_00610730, then returns a1.
// @field NMData::CompoundSensorData +0x154 void* field_0x154
void* fn_006108F0(void* self, void* a1) {
    void* subobject = &lift_field<uint8_t>(self, 0x154);
    ext_00610730(a1, subobject);
    return a1;
}

// [0x0060F640]
namespace lift_0060F640 {
extern void __thiscall ext_0060E540(uint8_t* self);
extern uint32_t __thiscall ext_00406510(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5);
extern uint32_t mem_00925134;
extern uint32_t mem_00924EA8;

// @name NMData::CompoundSensorData::vfunc_62
// @class NMData::CompoundSensorData
// @summary Resets base sensor data, clears the vector at +0x180, and clears the string at +0x190.
// @field NMData::CompoundSensorData +0x180 uint32_t field_0x180
// @field NMData::CompoundSensorData +0x184 uint32_t field_0x184
// @field NMData::CompoundSensorData +0x188 uint32_t field_0x188
// @field NMData::CompoundSensorData +0x190 uint8_t field_0x190
extern void __thiscall fn_0060F640(uint8_t* self) {
    ext_0060E540(self);

    uint8_t* vec = self + 0x180;
    uint32_t end_ptr = lift_field<uint32_t>(self, 0x188);
    if (lift_field<uint32_t>(self, 0x184) > end_ptr) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    }

    uint32_t begin_ptr = lift_field<uint32_t>(vec, 0x04);
    if (begin_ptr > lift_field<uint32_t>(vec, 0x08)) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    }

    uint32_t sret[2] = {};
    ext_00406510(
        vec,
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(sret)),
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(vec)),
        begin_ptr,
        static_cast<uint32_t>(reinterpret_cast<uintptr_t>(vec)),
        end_ptr);

    reinterpret_cast<void(__thiscall*)(void*)>(mem_00924EA8)(self + 0x190);
}
} // namespace lift_0060F640
