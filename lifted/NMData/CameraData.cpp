// Lifted C++ translation unit: lifted/NMData/CameraData.cpp
#include "lift_compat.h"
#include <string>
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005DCDA0(void* self, void* owner);

// [0x005DCFB0] NMData::CameraData::vfunc_17_off_C (99 bytes)
// @name NMData::CameraData::vfunc_17_off_C
// @class NMData::CameraData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005DCFB0(void* self) {
    void* mem = ext_006A5C62(0x2C8);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005DCDA0(mem, owner);
}
