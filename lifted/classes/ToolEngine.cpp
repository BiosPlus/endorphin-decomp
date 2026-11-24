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
