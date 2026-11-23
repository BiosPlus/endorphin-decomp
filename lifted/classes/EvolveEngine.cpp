// Lifted C++ translation unit: lifted/classes/EvolveEngine.cpp
#include "lift_compat.h"

// [0x005013A0] EvolveEngine::vfunc_2_off_10 (73 bytes)
namespace lift_005013A0 {
// @name EvolveEngine::vfunc_2_off_10
// @class EvolveEngine
// @summary Auto-lifted identical-shape clone of 0x0051EBB0 (StateMachine::State::vfunc_2).
// @field EvolveEngine +0x68 uint8_t field_0x158 (sub-object; only its address is field_0x68
namespace lift_0051EBB0 {
extern uint32_t __thiscall ext_00501140(void* self, uint32_t arg);
extern void ext_006721F0(void* arg0, uint32_t arg1);
extern void __thiscall ext_0065F450(void* self, void* arg);

// @name StateMachine::State::vfunc_2
// @class StateMachine::State
// @summary Forwards a stack argument to the sub-object at +0x158; if it yields a nonzero result, calls ext_006721F0, otherwise calls Character::vfunc_2. Returns the first argument.
// @field StateMachine::State +0x158 uint8_t field_0x158 (sub-object; only its address is taken)
void* fn_005013A0(void* self, void* a1, uint32_t a2) {
    uint32_t sel = ext_00501140(static_cast<uint8_t*>(self) + 0x68, a2);
    if (sel != 0) {
        ext_006721F0(a1, sel);
    } else {
        ext_0065F450(self, a1);
    }
    return a1;
}
} // namespace lift_0051EBB0
} // namespace lift_005013A0
