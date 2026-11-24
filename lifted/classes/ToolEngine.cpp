// Lifted C++ translation unit: lifted/classes/ToolEngine.cpp
#include "lift_compat.h"

// [0x004800C0] ToolEngine::vfunc_16 (11 bytes)
namespace lift_004800C0 {
// @name ToolEngine::vfunc_16
// @class ToolEngine
// @summary Auto-lifted identical-shape clone of 0x00611160 (readFloatAtIndex3).
namespace lift_00611160 {
// Known callee 0x005B11E0: getFloatAt (Returns a float from a 32-bit float array at offset +0x10 indexed by the argument)
extern float ext_004AFC60(uint32_t ecx, uint32_t index);

// @name readFloatAtIndex3
// @summary Returns element 3 of the float array held by the sub-object at this+0x08.
// @field Unknown +0x08 uint32_t field_0x08
float fn_004800C0(uint32_t ecx) {
    return ext_004AFC60(ecx + 0x8u, 0u);
}
} // namespace lift_00611160
} // namespace lift_004800C0

// [0x00480100]
namespace lift_00480100 {
// @name ToolEngine::vfunc_26
// @class ToolEngine
// @summary Broadcasts a scalar float to a 3-element float vector and forwards it to vfunc_25 (vtable +0x64).
// @field ToolEngine +0x00 void* vptr


void __thiscall fn_00480100(void* self, float val) {
    float vec[3] = { val, val, val };
    void** vtable = *reinterpret_cast<void***>(self);
    using VFunc25 = void(__thiscall*)(void*, const float*);
    auto vfunc_25 = reinterpret_cast<VFunc25>(vtable[0x64 / sizeof(void*)]);
    vfunc_25(self, vec);
}
} // namespace lift_00480100

// [0x004809E0]
namespace lift_004809E0 {
// @name ToolEngine::vfunc_7
// @class ToolEngine
// @summary Checks whether the ToolEngine has an empty vector at +0x18/+0x1C or a non-zero flag at +0x30.
// @field ToolEngine +0x18 uint32_t field_0x18
// @field ToolEngine +0x1C uint32_t field_0x1C
// @field ToolEngine +0x30 uint8_t field_0x30


extern uint32_t mem_read32(uint32_t addr);
extern uint8_t mem_read8(uint32_t addr);

uint32_t fn_004809E0(uint32_t self) {
    uint32_t begin = mem_read32(self + 0x18);
    if (begin == 0) {
        return 1;
    }
    uint32_t end = mem_read32(self + 0x1C);
    int32_t count = static_cast<int32_t>(end - begin) >> 2;
    if (count == 0) {
        return 1;
    }
    if (mem_read8(self + 0x30) != 0) {
        return 1;
    }
    return 0;
}
} // namespace lift_004809E0
