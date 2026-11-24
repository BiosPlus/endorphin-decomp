// Lifted C++ translation unit: lifted/leaf/decompiled_870000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstring>

#include <string>
#include <cstring>
// @summary Epilogue fragment: pops saved edi, esi and ebx from the stack; no portable C++ equivalent for the register restore, so the body is empty.
void fn_00870E86(void* self) {
    // Intentionally empty. The three instructions are `pop edi; pop esi; pop ebx`,
    // which restore callee-saved registers from the caller's frame. They have no
    // observable effect expressible in portable C++; the frame they belong to is
    // not part of this 3-byte range.
    (void)self;
}

// [0x008703F0] sub_008703F0 (111 bytes)
namespace lift_008703F0 {
// @name sub_008703F0
// @summary Auto-lifted identical-shape clone of 0x0049FC80 (NMData::State::vfunc_7_off_10).
namespace lift_0049FC80 {
// @name NMData::State::vfunc_7_off_10
// @class NMData::State
// @summary Iterates over vector at +0x10C, calls vfunc +0x24 on each element, and passes result to sub_0040ECB0
// @field NMData::State +0x10C void* field_0x10C


extern void __thiscall ext_0040ECB0(uint32_t self, uint32_t arg);

void __thiscall fn_008703F0(uint32_t self, uint32_t arg0) {
    uintptr_t vec = (uintptr_t)self + 0x4;
    uint32_t it = *(uint32_t*)(vec + 0x4);
    while (it != *(uint32_t*)(vec + 0x8)) {
        uint32_t elem = *(uint32_t*)(uintptr_t)it;
        uint32_t vtable = *(uint32_t*)(uintptr_t)elem;
        typedef uint32_t (__thiscall *vfunc_t)(uint32_t);
        vfunc_t vfunc = (vfunc_t)(uintptr_t)(*(uint32_t*)(uintptr_t)(vtable + 0x24));
        uint32_t res = vfunc(elem);
        ext_0040ECB0(arg0, res);
        it += 4;
    }
}
} // namespace lift_0049FC80
} // namespace lift_008703F0

// [0x008727FB]
namespace lift_008727FB {
extern uint8_t* ext_006A5EDE(void);
extern int (*mem_009251B4)(int);

// @name initAppLocaleAndFlags
// @summary Sets app state fields from arguments, optionally resets multibyte codepage to -3, and returns 1
// @field AppState +0x14 uint8_t field_0x14
// @field AppState +0x44 uint32_t field_0x44
extern int __stdcall fn_008727FB(uint32_t arg1, uint32_t arg2) {
    uint8_t* app = ext_006A5EDE();
    *(uint8_t*)(app + 0x14) = (uint8_t)(arg1 & 0xFFu);
    *(uint32_t*)(app + 0x44) = arg2;
    if (arg1 == 0) {
        mem_009251B4(-3);
    }
    return 1;
}
} // namespace lift_008727FB

// [0x00870320]
namespace lift_00870320 {
DWORD ext_0049D360(void* arg);
void ext_0055DA20(DWORD* self, DWORD a, DWORD b);

// @name initPairWithMemberLookup
// @summary Calls ext_0049D360 on (this + 4) and initializes outPair with (result, this + 4), returning outPair.
// @field Unknown +0x04 DWORD field_0x04
DWORD* fn_00870320(void* self, DWORD* outPair) {
    DWORD* member = reinterpret_cast<DWORD*>(reinterpret_cast<BYTE*>(self) + 4);
    DWORD res = ext_0049D360(member);
    ext_0055DA20(outPair, res, static_cast<DWORD>(reinterpret_cast<uintptr_t>(member)));
    return outPair;
}
} // namespace lift_00870320

// [0x00871890] sub_00871890 (39 bytes)
namespace lift_00871890 {
// @name copyConstructVtable20
// @summary Copy-constructs a 20-byte object: installs vtable 0x0099F138 at +0x00, copies +0x04..+0x10 from source, returns this.
// @field object +0x00 void* vtable
// @field object +0x04 uint32_t field_0x04
// @field object +0x08 uint32_t field_0x08
// @field object +0x0C uint32_t field_0x0C
// @field object +0x10 uint32_t field_0x10
void* fn_00871890(void* self, const void* src) {
    lift_field<uint32_t>(self, 0x00) = 0x0099F138u;
    lift_field<uint32_t>(self, 0x04) = lift_field<const uint32_t>(src, 0x04);
    lift_field<uint32_t>(self, 0x08) = lift_field<const uint32_t>(src, 0x08);
    lift_field<uint32_t>(self, 0x0C) = lift_field<const uint32_t>(src, 0x0C);
    lift_field<uint32_t>(self, 0x10) = lift_field<const uint32_t>(src, 0x10);
    return self;
}
} // namespace lift_00871890
