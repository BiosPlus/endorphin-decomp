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

// [0x0060E590]
namespace lift_0060E590 {
// @name NMData::SensorData::vfunc_22
// @class NMData::SensorData
// @summary Serializes SensorData string fields and non-default float range (0x174, 0x178) into the target node.
// @field NMData::SensorData +0x14 std::string field_0x14
// @field NMData::SensorData +0x154 std::string field_0x154
// @field NMData::SensorData +0x174 float field_0x174
// @field NMData::SensorData +0x178 float field_0x178

extern uint32_t mem_00924FEC;
extern uint32_t mem_00A9F838;
extern uint32_t mem_00924FF0;
extern uint32_t mem_00A9FA6C;
extern float mem_0093F7B8;
extern uint32_t mem_00A9F164;
extern uint32_t mem_00A9F058;
extern uint32_t mem_00A9F380;

extern void* __thiscall ext_00640110(void* self, uint32_t arg0);
extern void __thiscall ext_00427550(void* self, const char* name);
extern void* __thiscall ext_006404E0(void* self, uint32_t arg0);
extern void* __thiscall ext_00640390(void* self, uint32_t arg0, uint32_t arg1);
extern void __cdecl ext_00640BC0(void* node, float value);

void* __thiscall fn_0060E590(void* self, void* target) {
    using StringEmptyFn = bool (__thiscall*)(void*);
    using StringCStrFn = const char* (__thiscall*)(void*);

    auto is_empty = reinterpret_cast<StringEmptyFn>(mem_00924FEC);
    auto c_str = reinterpret_cast<StringCStrFn>(mem_00924FF0);

    void* field_0x14 = static_cast<uint8_t*>(self) + 0x14;
    if (!is_empty(field_0x14)) {
        void* child = ext_00640110(target, mem_00A9F838);
        ext_00427550(&child, c_str(field_0x14));
    }

    void* field_0x154 = static_cast<uint8_t*>(self) + 0x154;
    if (!is_empty(field_0x154)) {
        void* child = ext_00640110(target, mem_00A9FA6C);
        ext_00427550(&child, c_str(field_0x154));
    }

    float val_174 = lift_field<float>(self, 0x174);
    float val_178 = lift_field<float>(self, 0x178);
    if (val_174 != mem_0093F7B8 || val_178 != 1.0f) {
        void* group = ext_006404E0(target, mem_00A9F164);
        void* node1 = ext_00640390(group, mem_00A9F058, 0);
        ext_00640BC0(node1, val_174);
        void* node2 = ext_00640390(group, mem_00A9F380, 0);
        ext_00640BC0(node2, val_178);
    }

    return target;
}
} // namespace lift_0060E590
