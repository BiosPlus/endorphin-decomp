// Lifted C++ translation unit: lifted/classes/NullRelationship.cpp
#include "lift_compat.h"

// [0x00645570] NullRelationship::vfunc_43 (49 bytes)
namespace lift_00645570 {
// Known callee 0x00647F00: sub_00647F00 (Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).)
extern uint32_t ext_00647F00(void* self);
extern void ext_0067E990(void* self, uint32_t arg);

// @name NullRelationship::vfunc_43
// @class NullRelationship
// @summary Copies 16 dwords from src into this+0x6c, then if this+0x68 is non-null, passes it to ext_00647F00 and forwards the result to ext_0067E990 on the copied block.
// @field NullRelationship +0x68 uint32_t field_0x68
// @field NullRelationship +0x6c uint32_t field_0x6c[16]
void fn_00645570(void* self, const uint32_t* src) {
    uint8_t* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x6c, src, 16 * sizeof(uint32_t));

    uint32_t ctx = lift_field<uint32_t>(self, 0x68);
    if (ctx != 0) {
        uint32_t result = ext_00647F00(reinterpret_cast<void*>(static_cast<uintptr_t>(ctx)));
        ext_0067E990(base + 0x6c, result);
    }
}
} // namespace lift_00645570
