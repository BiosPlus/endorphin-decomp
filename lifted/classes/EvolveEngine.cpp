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

// [0x0067AF30]
namespace lift_0067AF30 {
// @name EvolveEngine::vfunc_2
// @class EvolveEngine
// @summary Stops the thread by clearing its running flag and closing its handle under a critical section lock.
// @field EvolveEngine +0x04 uint8_t field_0x04
// @field EvolveEngine +0x08 uint8_t field_0x08
// @field EvolveEngine +0x0C void* field_0x0c


extern void __thiscall ext_0065C640(void* self);
extern bool __thiscall ext_0067AE20(void* self);
extern void __thiscall ext_0065C650(void* self);
extern void* mem_009241E0;

extern void __thiscall fn_0067AF30(void* self) {
    void* lock = static_cast<uint8_t*>(self) + 0x8;
    ext_0065C640(lock);

    lift_field<uint8_t>(self, 0x4) = 0;
    if (ext_0067AE20(self)) {
        void* obj = lift_field<void*>(self, 0xC);
        void* handle = lift_field<void*>(obj, 0x10);
        reinterpret_cast<int(__stdcall*)(void*)>(mem_009241E0)(handle);
        lift_field<void*>(lift_field<void*>(self, 0xC), 0x10) = nullptr;
    }

    ext_0065C650(lock);
}
} // namespace lift_0067AF30
