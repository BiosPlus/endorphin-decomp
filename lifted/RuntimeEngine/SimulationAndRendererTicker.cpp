// Lifted C++ translation unit: lifted/RuntimeEngine/SimulationAndRendererTicker.cpp
#include "lift_compat.h"
extern "C" void __thiscall ext_00472C90(void* self);

// [0x00473C40] RuntimeEngine::SimulationAndRendererTicker::vfunc_0 (11 bytes)
// @name RuntimeEngine::SimulationAndRendererTicker::vfunc_0
// @class RuntimeEngine::SimulationAndRendererTicker
// @summary Forwards the ticker's +0x04 sub-object to RuntimeEngine tick helper ext_00472C90 and returns true.
// @field RuntimeEngine::SimulationAndRendererTicker +0x04 void* field_0x04
bool __thiscall fn_00473C40(void* self) {
    void* target = lift_field<void*>(self, 0x04);
    ext_00472C90(target);
    return true;
}
