// Lifted C++ translation unit: lifted/leaf/decompiled_5B0000.cpp
#include "lift_compat.h"

// [0x005B6970]
namespace lift_005B6970 {
// @name getField0x04From005B6930
// @summary Calls sub_005B6930 and returns the float at offset +0x04 of the returned object.


extern uint32_t ext_005B6930();

float sub_005B6970() {
    uint32_t ptr = ext_005B6930();
    return *reinterpret_cast<const float*>(static_cast<uintptr_t>(ptr) + 0x4);
}
} // namespace lift_005B6970
