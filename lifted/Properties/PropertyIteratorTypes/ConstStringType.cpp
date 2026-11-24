// Lifted C++ translation unit: lifted/Properties/PropertyIteratorTypes/ConstStringType.cpp
#include "lift_compat.h"

// [0x00681B30] Properties::PropertyIteratorTypes::ConstStringType::vfunc_9 (30 bytes)
namespace lift_00681B30 {
// Known callee 0x0046F7D0: sub_00467320 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
extern void ext_0046F7D0(void* arg0, uint32_t arg1);

// @name Properties::PropertyIteratorTypes::ConstStringType::vfunc_9
// @class Properties::PropertyIteratorTypes::ConstStringType
// @summary Forwards its first argument to ext_0046F7D0 with a zero second argument and returns the first argument unchanged.
// (Stack-argument count is 6 dwords per the 'ret 0x18' epilogue; only the first is used.)
void* fn_00681B30(void* self, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t) {
    ext_0046F7D0(self, 0u);
    return self;
}
} // namespace lift_00681B30
