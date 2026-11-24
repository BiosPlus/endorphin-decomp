// Lifted C++ translation unit: lifted/leaf/tiny_5E0000.cpp
#include "lift_compat.h"

// [0x005E1360] sub_005E1360 (13 bytes)
namespace lift_005E1360 {
// @name sub_005E1360_forwardVirtualSlot1Field234
// @summary Loads the pointer at this+0x234 and tail-dispatches its vtable slot 1 with that pointer as `this`, returning the callee's result.
// @field Unknown +0x234 void* field_0x234

template <typename T>
static inline T mem_(const void* base, uintptr_t offset) {
    T value;
    std::memcpy(&value, static_cast<const unsigned char*>(base) + offset, sizeof(T));
    return value;
}

using VSlot1Fn = uint32_t (*)(void* self);

uint32_t fn_005E1360(void* self) {
    void* sub = mem_<void*>(self, 0x234);
    void** vtbl = *reinterpret_cast<void***>(sub);
    return reinterpret_cast<VSlot1Fn>(vtbl[1])(sub);
}
} // namespace lift_005E1360
