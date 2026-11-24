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

// [0x006AD130] sub_006AD130 (29 bytes)
namespace lift_006AD130 {
// Known callee 0x006ACFD0: getField0x1COrZero (Returns the 32-bit field at offset 0x1C if the object pointer is non-null, otherwise 0.)
extern void ext_006ACFD0();

// @name walkChainFindTarget
// @summary Follows the 0x1C link chain from self (via getField0x1COrZero) and returns 1 if target is found in it, else 0 (also 1 when the chain ends at target == 0).
// @field (none: this function reads no offsets directly; the 0x1C read happens inside ext_006ACFD0)
uint32_t fn_006AD130(void* self, uint32_t target) {
    using GetField1C = uint32_t (*)(void*);
    auto getField1C = reinterpret_cast<GetField1C>(ext_006ACFD0);

    void* cur = self;
    uint32_t next = 0;
    for (;;) {
        next = getField1C(cur);
        if (next == 0 || next == target) {
            break;
        }
        cur = reinterpret_cast<void*>(static_cast<uintptr_t>(next));
    }
    return target == next ? 1u : 0u;
}
} // namespace lift_006AD130

// [0x006AD010] sub_006AD010 (33 bytes)
namespace lift_006AD010 {
// @name sub_006AD010
// @summary Auto-lifted identical-shape clone of 0x0040A910 (sub_00407830).
namespace lift_0040A910 {
// Imported MFC80 ordinal 297 (thiscall: self = first arg, then 2 stack args), via indirect slot.
extern void (*mem_00924494)(void* self, void* subobject, int flags);

// @name Unknown::forwardSubobject68ThenMfcOrd297
// @class Unknown
// @summary Calls MFC80 ordinal 297 on the argument with (this+0x68, 0) and returns the argument.
// @field Unknown +0x68 void* subobject
void* fn_006AD010(void* self, void* arg1) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x8;
    mem_00924494(arg1, subobject, 0);
    return arg1;
}
} // namespace lift_0040A910
} // namespace lift_006AD010

// [0x006A7A90]
namespace lift_006A7A90 {
// @name CheckEscapeOrTabHeld
// @summary Returns 0 if VK_ESCAPE or VK_TAB is currently held down, otherwise 4.
// @field none

extern uint32_t mem_009255F4;

namespace {
// GetKeyState returns SHORT; high bit set means the key is down.
using GetKeyStateFn = short (*)(int);
}

// [0x006A7A90]
int sub_006A7A90() {
    auto getKeyState = reinterpret_cast<GetKeyStateFn>(static_cast<uintptr_t>(mem_009255F4));
    if (getKeyState(0x1B) < 0) {   // VK_ESCAPE
        return 0;
    }
    if (getKeyState(0x09) < 0) {   // VK_TAB
        return 0;
    }
    return 4;
}
} // namespace lift_006A7A90
