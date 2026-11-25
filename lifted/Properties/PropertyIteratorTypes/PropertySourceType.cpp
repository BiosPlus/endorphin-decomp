// Lifted C++ translation unit: lifted/Properties/PropertyIteratorTypes/PropertySourceType.cpp
#include "lift_compat.h"

// [0x00681B50] Properties::PropertyIteratorTypes::PropertySourceType::vfunc_0 (60 bytes)
namespace lift_00681B50 {
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(uint32_t* out);

// @name Properties::PropertyIteratorTypes::PropertySourceType::vfunc_0
// @class Properties::PropertyIteratorTypes::PropertySourceType
// @summary Forwards to virtual slot 15 of the source object when *src is non-null; otherwise fills out via ext_00671F30. Returns out.
// @field Properties::PropertyIteratorTypes::PropertySourceType +0x00 void* vtable (accessed to dispatch virtual slot 15)
uint32_t* fn_00681B50(uint32_t* out, void* const* src, uint32_t arg) {
    void* obj = src ? *src : nullptr;
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        using SlotFn = void (*)(void* self, uint32_t* out, uint32_t arg);
        SlotFn fn = reinterpret_cast<SlotFn>(vtbl[15]);
        fn(obj, out, arg);
    } else {
        ext_00671F30(out);
    }
    return out;
}
} // namespace lift_00681B50
