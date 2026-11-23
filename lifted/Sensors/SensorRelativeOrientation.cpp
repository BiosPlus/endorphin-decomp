// Lifted C++ translation unit: lifted/Sensors/SensorRelativeOrientation.cpp
#include "lift_compat.h"
#include <cstring>

// [0x006292E0] Sensors::SensorRelativeOrientation::vfunc_15 (143 bytes)
namespace lift_006292E0 {
extern void* ext_0067E110(void* self);
extern void ext_00554490(void* self, const void* rhs);
extern int mem_00B40640;

namespace {

// Virtual slot 5 of the sub-object at owner+0x04: (this, key, out) -> result pointer.
using VSlot5Fn = void* (*)(void* self, int key, void* out);

inline void* call_vslot5(void* self, void* out) {
    void* vptr = *reinterpret_cast<void**>(self);
    auto fn = reinterpret_cast<VSlot5Fn>(reinterpret_cast<void**>(vptr)[5]);
    return fn(self, mem_00B40640, out);
}

} // namespace

// @name Sensors::SensorRelativeOrientation::vfunc_15
// @class Sensors::SensorRelativeOrientation
// @summary Refreshes the 36-byte block at +0x30 from the owner's transform, optionally composes it with a second transform, then composes it with the block at +0x54.
// @field Sensors::SensorRelativeOrientation +0x28 void* field_0x28
// @field Sensors::SensorRelativeOrientation +0x30 std::uint32_t field_0x30[9]
// @field Sensors::SensorRelativeOrientation +0x54 std::uint32_t field_0x54[9]
void* fn_006292E0(void* self) {
    auto* const base = static_cast<std::uint8_t*>(self);
    auto* const dst = base + 0x30;

    // owner = *(self+0x28); sub-object lives at owner+0x04.
    auto* const owner = *reinterpret_cast<std::uint8_t**>(base + 0x28);
    auto* const sub = owner + 0x04;

    std::uint32_t buf[9]{};

    // First transform: vslot5(sub, mem_00B40640, buf) -> r; copy 36 bytes from ext_0067E110(r).
    void* const r = call_vslot5(sub, buf);
    const void* const src = ext_0067E110(r);
    std::memcpy(dst, src, sizeof buf);

    // Optional second transform, taken when *(ctx+0x190) != 0 where ctx = *(owner+0x20c).
    auto* const ctx = *reinterpret_cast<std::uint8_t**>(owner + 0x20c);
    if (*reinterpret_cast<std::int32_t*>(ctx + 0x190) != 0) {
        auto* const obj2 = *reinterpret_cast<std::uint8_t**>(ctx + 0x228);
        auto* const sub2 = obj2 + 0x04;
        void* const r2 = call_vslot5(sub2, buf);
        (void)ext_0067E110(r2);  // result unused in the original
        ext_00554490(dst, buf);
    }

    // Unconditional compose with the block at self+0x54.
    ext_00554490(dst, base + 0x54);

    return dst;
}
} // namespace lift_006292E0
