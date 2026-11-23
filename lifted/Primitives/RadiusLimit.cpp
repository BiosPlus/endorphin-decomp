// Lifted C++ translation unit: lifted/Primitives/RadiusLimit.cpp
#include "lift_compat.h"

// [0x0053D1E0] Primitives::RadiusLimit::vfunc_23 (57 bytes)
namespace lift_0053D1E0 {
extern void ext_0053A5E0(void* self, void* arg);
extern void ext_0053AD70(void* self);

// @name Primitives::RadiusLimit::vfunc_23
// @class Primitives::RadiusLimit
// @summary Runs the base-class update with a temporary {vtable 0x0093A444, arg} record, then latches the flag at +0x04 when the object at +0x20 has a nonzero byte at +0x04.
// @field Primitives::RadiusLimit +0x04 uint8_t field_0x04
// @field Primitives::RadiusLimit +0x20 uint32_t field_0x20
uint8_t fn_0053D1E0(void* self, uint32_t arg1, uint32_t arg2) {
    (void)arg1;
    auto* base = static_cast<uint8_t*>(self);

    ext_0053AD70(self);

    // Temporary stack record: { vtable = 0x0093A444, value = arg2 }
    struct TempRecord {
        uint32_t vtable;
        uint32_t value;
    };
    TempRecord tmp{0x0093A444u, arg2};
    ext_0053A5E0(self, &tmp);

    uint32_t linked = 0;
    std::memcpy(&linked, base + 0x20, sizeof linked);
    if (linked != 0) {
        auto* obj = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(linked));
        if (obj[0x4] != 0) {
            base[0x4] = 1;
        }
    }

    return base[0x4];
}
} // namespace lift_0053D1E0
