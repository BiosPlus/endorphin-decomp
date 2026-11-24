// Lifted C++ translation unit: lifted/leaf/decompiled_6A0000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x006AD0A0] sub_006AD0A0 (17 bytes)
namespace lift_006AD0A0 {
// Known callee 0x006AD950: fn_006AD950 (Increments the 32-bit counter at offset +0x38 of the object passed in ecx.)
extern void ext_006AD950(void* self);

// @name UnknownObject::setField44
// @class UnknownObject
// @summary Stores its argument at offset +0x44 of this, then calls fn_006AD950 with that argument as its object pointer.
// @field UnknownObject +0x44 uint32_t field_0x44
void fn_006AD0A0(void* self, uint32_t value) {
    auto* base = static_cast<unsigned char*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x44) = value;
    ext_006AD950(reinterpret_cast<void*>(static_cast<uintptr_t>(value)));
}
} // namespace lift_006AD0A0

// [0x006AD150] sub_006AD150 (21 bytes)
namespace lift_006AD150 {
// Known callee 0x006ACFD0: getField0x1COrZero (Returns the 32-bit field at offset 0x1C if the object pointer is non-null, otherwise 0.)
extern uint32_t __thiscall ext_006ACFD0(uint32_t self);

// @name ChainLengthViaField1C
// @summary Counts how many links are in a chain by following the 32-bit field at offset 0x1C from self until it reads as zero; returns that count (0 if self's field is already zero).
// @field Object +0x1C uint32_t field_0x1C
uint32_t fn_006AD150(uint32_t self) {
    uint32_t count = 0;
    uint32_t cur = self;
    for (;;) {
        const uint32_t next = ext_006ACFD0(cur);
        if (next == 0) {
            return count;
        }
        count += 1;
        cur = next;
    }
}
} // namespace lift_006AD150
