// Lifted C++ translation unit: lifted/NMData/MetaBodySensorData.cpp
#include "lift_compat.h"
extern "C" void ext_006105E0(void* a, void* b, uint32_t c);

// [0x00610780] NMData::MetaBodySensorData::vfunc_8 (37 bytes)
// @name NMData::MetaBodySensorData::vfunc_8
// @class NMData::MetaBodySensorData
// @summary Forwards the incoming pointer with the address of this+0x154 and a zero flag to ext_006105E0, then returns the incoming pointer.
// @field MetaBodySensorData +0x154 void* field_0x154
void* fn_00610780(void* self, void* arg)
{
    void* sub = static_cast<uint8_t*>(self) + 0x154;
    ext_006105E0(arg, sub, 0u);
    return arg;
}

// [0x0060EA90] NMData::MetaBodySensorData::vfunc_21 (157 bytes)
namespace lift_0060EA90 {
extern void ext_0060E890(void* self, void* arg);
// Known callee 0x0063EFE0: sub_0063EFE0 (Searches a vector of item pointers at +0x3c for an item whose std::string at +0x04 matches the given C-string, returning it or a sentinel at 0x00B53A34.)
extern uint32_t ext_0063EFE0(void* self, uint32_t name);
// Known callee 0x004275E0: assignVirtualString (Calls vtable[2] on obj to obtain a temporary std::string, assigns it to dst, and destroys the temporary.)
extern void ext_004275E0(void* dst, uint32_t obj);
// Known callee 0x0053F5F0: parseIntFromStringProp (Calls ext_004275C0 to get a string, converts it with atoi, and stores the integer at *out.)
extern void ext_0053F5F0(void* obj, int32_t* out);
extern uint32_t mem_00A9F7F4;
extern uint32_t mem_00A9F7FC;
extern uint32_t mem_00A9F554;
extern uint32_t mem_00A9F6D4;

// @name NMData::MetaBodySensorData::vfunc_21
// @class MetaBodySensorData
// @summary Calls the vtable slot at +0xF8 on self, runs SensorData::vfunc_21 on arg, then fills four string-valued members (+0x180/+0x19c/+0x1bc from property lookups) and parses an int property into the +0x1b8 subobject.
// @field MetaBodySensorData +0x00 void* field_0x00
// @field MetaBodySensorData +0x180 std::string field_0x180
// @field MetaBodySensorData +0x19c std::string field_0x19c
// @field MetaBodySensorData +0x1b8 void* field_0x1b8
// @field MetaBodySensorData +0x1bc std::string field_0x1bc
void fn_0060EA90(void* self, void* arg) {
    // vtable[+0xF8] call on self; return value unused in the original.
    void* vtbl = lift_field<void*>(self, 0);
    void (*vfunc)(void*) = lift_field<void (*)(void*)>(vtbl, 0xF8);
    vfunc(self);

    ext_0060E890(self, arg);

    uint8_t* base = static_cast<uint8_t*>(self);

    uint32_t v0 = ext_0063EFE0(arg, mem_00A9F7F4);
    ext_004275E0(base + 0x180, v0);

    uint32_t v1 = ext_0063EFE0(arg, mem_00A9F7FC);
    ext_004275E0(base + 0x19c, v1);

    uint32_t v2 = ext_0063EFE0(arg, mem_00A9F554);
    ext_004275E0(base + 0x1bc, v2);

    uint32_t v3 = ext_0063EFE0(arg, mem_00A9F6D4);
    // The original reuses its stack argument slot as the out-parameter here.
    int32_t out = static_cast<int32_t>(v3);
    ext_0053F5F0(base + 0x1b8, &out);
}
} // namespace lift_0060EA90
