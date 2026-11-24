// Lifted C++ translation unit: lifted/leaf/decompiled_6B0000.cpp
#include "lift_compat.h"

// [0x006B9D10]
namespace lift_006B9D10 {
// @name Unknown::InitAndReturnSelf
// @class Unknown
// @summary Calls sub_006B9910 on the object (zero-inits fields, sets vtable) and returns the same object pointer.

class Unknown;

// External callee: sub_006B9910 (Unknown::sub_006B9910), __thiscall-style, takes this in ecx.
extern void ext_006B9910(Unknown* ecx);

// Lifted from 0x006B9D10: push esi; mov esi, ecx; call sub_006B9910; mov eax, esi; pop esi; ret
Unknown* fn_006B9D10(Unknown* ecx) {
    Unknown* esi = ecx;
    ext_006B9910(ecx);
    return esi;
}
} // namespace lift_006B9D10

// [0x006B9960] sub_006B9960 (16 bytes)
namespace lift_006B9960 {
// @name sub_006B9960
// @summary Auto-lifted identical-shape clone of 0x006B9D10 (Unknown::InitAndReturnSelf).
namespace lift_006B9D10 {
// @name Unknown::InitAndReturnSelf
// @class Unknown
// @summary Calls sub_006B9910 on the object (zero-inits fields, sets vtable) and returns the same object pointer.

class Unknown;

// External callee: sub_006B9910 (Unknown::sub_006B9910), __thiscall-style, takes this in ecx.
extern void ext_006B9970(Unknown* ecx);

// Lifted from 0x006B9D10: push esi; mov esi, ecx; call sub_006B9910; mov eax, esi; pop esi; ret
Unknown* fn_006B9960(Unknown* ecx) {
    Unknown* esi = ecx;
    ext_006B9970(ecx);
    return esi;
}
} // namespace lift_006B9D10
} // namespace lift_006B9960

// [0x006B8790] sub_006B8790 (17 bytes)
namespace lift_006B8790 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
extern void ext_006A5EA8();

// @name SubObject::releaseUnlessSelf
// @class SubObject
// @summary If the argument is not the address of this+0x5C, forward the call to MFC80 ord_1903; otherwise do nothing.
void fn_006B8790(void* self, void* arg) {
    // lea eax, [ecx + 0x5c] ; cmp [esp+4], eax ; je skip
    unsigned char* selfBytes = static_cast<unsigned char*>(self);
    void* subAddr = selfBytes + 0x5C;
    if (arg != subAddr) {
        ext_006A5EA8();
    }
    // ret 4 (single stack argument, popped by callee)
}
} // namespace lift_006B8790

// [0x006B1C00]
namespace lift_006B1C00 {
// @name sub_006B1C00
// @summary Derived constructor calling sub_006B0C40 and setting vtable to 0x00991784.
// @field Unknown +0x00 uint32_t vtable


extern uint32_t __thiscall ext_006B0C40(uint32_t self, uint32_t arg0);
extern void mem_write32(uint32_t addr, uint32_t val);

uint32_t __thiscall sub_006B1C00(uint32_t self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    mem_write32(self, 0x00991784u);
    return self;
}
} // namespace lift_006B1C00

// [0x006B1AA0]
namespace lift_006B1AA0 {
extern uint32_t __thiscall ext_006B0C40(uint32_t self, uint32_t arg0);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name sub_006B1AA0_ctor
// @summary Constructor that calls base constructor ext_006B0C40 and sets vtable to 0x00991768.
// @field +0x00 uint32_t vtable
uint32_t __thiscall sub_006B1AA0(uint32_t self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    mem_write32(self, 0x00991768u);
    return self;
}
} // namespace lift_006B1AA0
