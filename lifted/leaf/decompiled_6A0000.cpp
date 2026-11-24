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

// [0x006ACFE0] sub_006ACFE0 (22 bytes)
namespace lift_006ACFE0 {
// Callee takes its single argument in ecx and returns the result in eax.
extern DWORD ext_006A7D50(DWORD arg);

// @name SetFieldAndStoreCallResult
// @class Unknown
// @summary Stores the stack argument at +0x14, calls ext_006A7D50 with it, and stores the result at +0x48.
// @field Unknown +0x14 DWORD field_0x14
// @field Unknown +0x48 DWORD field_0x48
void fn_006ACFE0(void* self, DWORD arg) {
    lift_field<DWORD>(self, 0x14) = arg;
    DWORD result = ext_006A7D50(arg);
    lift_field<DWORD>(self, 0x48) = result;
}
} // namespace lift_006ACFE0

// [0x006A9340]
namespace lift_006A9340 {
// @name Unknown::ForwardField0xA4AndArg
// @class Unknown
// @summary Forwards this+0x9C as the thiscall receiver, this->field_0xA4 and arg1 to ext_006A6796 and returns its result.
// @field Unknown +0xA4 uint32_t field_0xA4

namespace lift_006A9340 {

// IAT thunk to MFC80!ord_5714. Receiver in ecx, then two stack args
// (pushed as eax then edx, so the first stack param is edx).
extern uint32_t __thiscall ext_006A6796(void* self, uint32_t field_a4, uint32_t arg1);

uint32_t __thiscall sub_006A9340(void* self, uint32_t arg1) {
    uint32_t field_a4 = lift_field<uint32_t>(self, 0xA4);
    return ext_006A6796(static_cast<uint8_t*>(self) + 0x9C, field_a4, arg1);
}

} // namespace lift_006A9340
} // namespace lift_006A9340
