// Lifted C++ translation unit: lifted/NMData/SensorData.cpp
#include "lift_compat.h"

// [0x0060E540]
namespace lift_0060E540 {
// @name NMData::SensorData::vfunc_62
// @class NMData::SensorData
// @summary Clears two string fields and resets sensor data fields to default values.
// @field NMData::SensorData +0x14 std::string field_0x14
// @field NMData::SensorData +0xe8 int32_t field_0xe8
// @field NMData::SensorData +0x154 std::string field_0x154
// @field NMData::SensorData +0x170 uint32_t field_0x170
// @field NMData::SensorData +0x174 float field_0x174
// @field NMData::SensorData +0x178 float field_0x178


extern uint32_t mem_00924EA8;
extern uint32_t mem_00A9F058;
extern uint32_t mem_00A9F164;
extern uint32_t mem_00A9F380;
extern uint32_t mem_00A9F838;
extern uint32_t mem_00A9FA6C;
void ext_004275E0();
void ext_0046C0A0();
void ext_0063EFE0();
void ext_0063F530();

extern void __thiscall fn_0060E540(uint8_t* self) {
    using ClearFn = void(__thiscall*)(void*);
    auto clear_str = reinterpret_cast<ClearFn>(mem_00924EA8);

    clear_str(self + 0x14);
    clear_str(self + 0x154);

    lift_field<float>(self, 0x174) = -1.0f;
    lift_field<int32_t>(self, 0xe8) = -1;
    lift_field<uint32_t>(self, 0x170) = 0;
    lift_field<float>(self, 0x178) = 1.0f;

    (void)mem_00A9F058;
    (void)mem_00A9F164;
    (void)mem_00A9F380;
    (void)mem_00A9F838;
    (void)mem_00A9FA6C;
    (void)ext_004275E0;
    (void)ext_0046C0A0;
    (void)ext_0063EFE0;
    (void)ext_0063F530;
}
} // namespace lift_0060E540
