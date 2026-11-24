// Lifted C++ translation unit: lifted/leaf/tiny_520000.cpp
#include "lift_compat.h"
extern "C" uintptr_t mem_00924FDC;
extern "C" int mem_00953454;

// [0x00521350] sub_00521350 (9 bytes)
// @name sub_00521350
// @summary This-adjustor thunk: adjusts `this` by +0x8 and forwards through mem_00924FDC.
extern "C" void __fastcall fn_00521350(void* self) {
    typedef void (__fastcall* ForwardFn)(void*);
    ForwardFn target = reinterpret_cast<ForwardFn>(mem_00924FDC);
    target(static_cast<char*>(self) + 0x8);
}

// [0x00528AB0] sub_00528AB0 (7 bytes)
// @name sub_00528AB0
// @summary Stores address of mem_00953454 into field at offset +0x0.
extern "C" void __fastcall fn_00528AB0(void* self) {
    lift_field<void*>(self, 0x0) = &mem_00953454;
}

// [0x00528CC0]
namespace lift_00528CC0 {
// @name bswap16
// @summary Byte-swaps a 16-bit unsigned integer (endianness swap).
uint16_t bswap16(uint16_t val) {
    return static_cast<uint16_t>((val >> 8) | (val << 8));
}
} // namespace lift_00528CC0

// [0x00528C70] sub_00528C70 (12 bytes)
namespace lift_00528C70 {
// @name setFlagOnPointedObject
// @summary If the pointer at self+0x04 is non-null, sets the byte at (that pointer)+0x04 to 1.
// @field self +0x04 void* field_0x04 (pointer; the pointee's byte at +0x04 is set to 1 when non-null)
void fn_00528C70(void* self) {
    void* target = lift_field<void*>(self, 0x04);
    if (target != nullptr) {
        lift_field<uint8_t>(target, 0x04) = 1;
    }
}
} // namespace lift_00528C70

// [0x00528B90] sub_00528B90 (17 bytes)
namespace lift_00528B90 {
// Original convention: thiscall with one stack argument, callee pops 4 (ret 4).
// @name Unknown::setPeerWithBackLink
// @class Unknown
// @summary Stores the argument at this+0x04; if it is non-null, writes this into argument+0x08.
// @field Unknown +0x04 void* peer
void fn_00528B90(void* self, void* peer) {
    auto* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<void**>(obj + 0x04) = peer;
    if (peer != nullptr) {
        auto* other = static_cast<uint8_t*>(peer);
        *reinterpret_cast<void**>(other + 0x08) = self;
    }
}
} // namespace lift_00528B90

// [0x00528BB0] sub_00528BB0 (19 bytes)
namespace lift_00528BB0 {
// @name descriptiveName_00528BB0 (forwardVirtual0x2CIfNonNull)
// @summary If this->field_0x04 is non-null, tail-dispatch virtual slot 0x2C/4 on it with the same args; otherwise return 0 (callee pops 8 bytes).
// @field Unknown +0x04 DWORD field_0x04
DWORD fn_00528BB0(void* self, DWORD arg0, DWORD arg1) {
    DWORD child = lift_field<DWORD>(self, 0x04);
    if (child == 0) {
        return 0;
    }
    void* childPtr = reinterpret_cast<void*>(static_cast<uintptr_t>(child));
    void* vtbl = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<DWORD>(childPtr, 0x00)));
    DWORD target = lift_field<DWORD>(vtbl, 0x2C);
    auto fn = reinterpret_cast<DWORD (*)(void*, DWORD, DWORD)>(static_cast<uintptr_t>(target));
    return fn(childPtr, arg0, arg1);
}
} // namespace lift_00528BB0

// [0x00528BF0] sub_00528BF0 (19 bytes)
namespace lift_00528BF0 {
// @name forwardVirtual0x30IfNonNull
// @summary If this->field_0x04 is non-null, tail-calls its vtable slot 12 (+0x30) with the same stack arguments; otherwise returns popping 0xC bytes.
// @field Unknown +0x04 void* field_0x04

// Stack-argument count is inferred from the `ret 0xC` epilogue (3 dwords).
typedef void (__thiscall *VirtualSlot30Fn)(void* self, uint32_t a0, uint32_t a1, uint32_t a2);

extern void __thiscall fn_00528BF0(void* self, uint32_t a0, uint32_t a1, uint32_t a2) {
    void* child = lift_field<void*>(self, 0x04);
    if (child == nullptr) {
        return;
    }
    void** vtable = *reinterpret_cast<void***>(child);
    auto target = reinterpret_cast<VirtualSlot30Fn>(vtable[0x30 / sizeof(void*)]);
    target(child, a0, a1, a2);
}
} // namespace lift_00528BF0
