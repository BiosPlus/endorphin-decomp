// Lifted C++ translation unit: lifted/classes/MainFrame.cpp
#include "lift_compat.h"

// [0x00435FA0]
namespace lift_00435FA0 {
extern void ext_00434E30(void);
extern uint32_t ext_006A5EDE(void);
extern void __thiscall ext_006A6328(uint32_t self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
extern void __thiscall ext_006A5CF8(uint32_t self);

extern uint32_t mem_0093A08C;
extern uint32_t mem_0093A080;

// @name MainFrame::vfunc_26
// @class MainFrame
// @summary Updates frame state and writes profile setting before forwarding to base handler
// @field MainFrame +0xf5 uint8_t field_0xf5
void __thiscall fn_00435FA0(uint32_t self) {
    uint8_t flag = *(uint8_t*)(uintptr_t)(self + 0xf5);
    if (flag != 0) {
        ext_00434E30();
    }

    uint32_t app = ext_006A5EDE();
    uint32_t target = *(uint32_t*)(uintptr_t)(app + 0x4);
    uint32_t val = (*(uint8_t*)(uintptr_t)(self + 0xf5) != 0) ? 1u : 0u;
    ext_006A6328(target, mem_0093A080, mem_0093A08C, val);

    ext_006A5CF8(self);
}
} // namespace lift_00435FA0
