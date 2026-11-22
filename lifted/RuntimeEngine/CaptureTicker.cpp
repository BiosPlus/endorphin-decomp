// Lifted C++ translation unit: lifted/RuntimeEngine/CaptureTicker.cpp
#include "lift_compat.h"
extern "C" void ext_00472D80(void* self);

// [0x00473C30] RuntimeEngine::CaptureTicker::vfunc_0 (11 bytes)
// @name RuntimeEngine::CaptureTicker::vfunc_0
// @class RuntimeEngine::CaptureTicker
// @summary Forwards the ticker's owner pointer to ext_00472D80 and returns true.
// @field RuntimeEngine::CaptureTicker +0x04 void* field_0x04
struct CaptureTicker {
    uint8_t _pad_0x00[0x04];
    void* field_0x04;
};

bool fn_00473C30(void* self) {
    auto* ticker = static_cast<CaptureTicker*>(self);
    ext_00472D80(ticker->field_0x04);
    return true;
}
