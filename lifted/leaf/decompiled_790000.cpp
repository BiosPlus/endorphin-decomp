// Lifted C++ translation unit: lifted/leaf/decompiled_790000.cpp
#include "lift_compat.h"
#include <cstdio>

// [0x0079EBE0]
namespace lift_0079EBE0 {
// @name GetGlobalIndirectInt32
// @summary Calls ext_0079EBD0 (sub_0079EBD0) and returns the int32 stored at the address it yields.
// @field none: no struct field offsets are accessed; the only load is a dereference of the callee's return value at +0.

extern int32_t __cdecl fn_0079EBD0(void);

extern int32_t __cdecl fn_0079EBE0(void) {
    const uint32_t addr = static_cast<uint32_t>(fn_0079EBD0());
    return *reinterpret_cast<const int32_t*>(static_cast<uintptr_t>(addr));
}
} // namespace lift_0079EBE0

// [0x0079DD30] sub_0079DD30 (32 bytes)
namespace lift_0079DD30 {
// @name InitValueWithUnitDouble
// @summary thiscall: stores one DWORD argument at +0x00, writes 0 to +0x08 and 0x3FF00000 to +0x0C (double 1.0 at +0x08), returns this.
// @field InitValueWithUnitDouble +0x00 uint32_t field_0x00
// @field InitValueWithUnitDouble +0x08 uint32_t field_0x08
// @field InitValueWithUnitDouble +0x0C uint32_t field_0x0C
void* fn_0079DD30(void* self, uint32_t value) {
    lift_field<uint32_t>(self, 0x08) = 0x00000000u;
    lift_field<uint32_t>(self, 0x00) = value;
    lift_field<uint32_t>(self, 0x0C) = 0x3FF00000u;
    return self;
}
} // namespace lift_0079DD30

// [0x0079B140] sub_0079B140 (32 bytes)
namespace lift_0079B140 {
extern int mem_00AAFC2C;

// @name DispatchThreeArgsToOptionalHook
// @summary If the global hook pointer mem_00AAFC2C is non-null, call it with (a1, a2, &a3); otherwise do nothing.
// @field none (free function; no object fields accessed)
void fn_0079B140(uint32_t a1, uint32_t a2, uint32_t a3) {
    using HookFn = void (__cdecl*)(uint32_t, uint32_t, uint32_t*);

    const uintptr_t hook = static_cast<uintptr_t>(mem_00AAFC2C);
    if (hook == 0) {
        return;
    }

    auto fn = reinterpret_cast<HookFn>(hook);
    fn(a1, a2, &a3);
}
} // namespace lift_0079B140

// [0x0079EED0] sub_0079EED0 (32 bytes)
namespace lift_0079EED0 {
extern int32_t __cdecl fn_0079EBE0(void);

// @name GlobalStreamSeekSet
// @summary Seeks the global stream (from GetGlobalIndirectInt32) to the given offset from its start via fseek(stream, offset, SEEK_SET).
void fn_0079EED0(int32_t offset) {
    const auto stream = static_cast<uintptr_t>(static_cast<uint32_t>(fn_0079EBE0()));
    std::fseek(reinterpret_cast<FILE*>(stream), static_cast<long>(offset), SEEK_SET);
}
} // namespace lift_0079EED0

// [0x0079E5E0]
namespace lift_0079E5E0 {
// @name descriptiveName: SelectSelfOrOffsetByMode
// @class (none, free function)
// @summary Returns self for modes 0 and 2, self+4 for mode 3 (or null if self is null), and null otherwise.
// @field none (self is never dereferenced; self+4 is returned as an address only)
// The stack-passed second argument is not read by the original code, but the
// callee pops 8 bytes (ret 0x8), so the trailing parameter is kept for ABI fidelity.
void* __thiscall fn_0079E5E0(void* self, DWORD mode, DWORD /*unused*/) {
    switch (mode) {
    case 0:
    case 2:
        return self;
    case 3:
        return self ? static_cast<uint8_t*>(self) + 4 : nullptr;
    default:
        return nullptr;
    }
}
} // namespace lift_0079E5E0

// [0x0079ABA0]
namespace lift_0079ABA0 {
// @name sub_0079ABA0
// @summary Data/jump-table bytes at 0x0079ABA0 lifted as raw instruction sequence


void sub_0079ABA0(uint32_t eax, uint32_t ebx, uint32_t ecx, uint32_t edx) {
    uint8_t al = static_cast<uint8_t>(eax);
    uint8_t cl = static_cast<uint8_t>(ecx);
    uint8_t dl = static_cast<uint8_t>(edx);

    uint8_t* p_ecx = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(ecx));
    uint8_t* p_ebx = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(ebx));

    uint16_t sum8 = static_cast<uint16_t>(*p_ecx) + al;
    uint32_t cf = (sum8 >> 8) & 1u;
    *p_ecx = static_cast<uint8_t>(sum8);

    auto adc32 = [&](uint32_t imm) {
        uint64_t res = static_cast<uint64_t>(eax) + imm + cf;
        eax = static_cast<uint32_t>(res);
        cf = static_cast<uint32_t>((res >> 32) & 1u);
    };

    adc32(0x15151515u);
    adc32(0x03021515u);
    adc32(0x07060504u);

    *p_ecx |= cl;
    cl |= *p_ebx;
    cf = 0;

    adc32(0x0c151515u);
    adc32(0x150f0e0du);

    sum8 = static_cast<uint16_t>(*p_ecx) + dl + static_cast<uint16_t>(cf);
    cf = (sum8 >> 8) & 1u;
    *p_ecx = static_cast<uint8_t>(sum8);

    sum8 = static_cast<uint16_t>(dl) + *p_ebx + static_cast<uint16_t>(cf);
    dl = static_cast<uint8_t>(sum8);
    (void)dl;
}
} // namespace lift_0079ABA0

// [0x0079A16C] sub_0079A16C (40 bytes)
namespace lift_0079A16C {
// @name fn_0079A16C_byteLookupTable
// @summary Static 37-byte lookup table (values 0x00-0x14, 0x14 used as filler); trailing 3 bytes are padding/lea not part of the table.
// @field <ClassName> +0x00 <type> <fieldName>

namespace {

// Raw bytes at 0x0079A16C..0x0079A190 (37 entries). 0x14 is the repeated filler value.
[[maybe_unused]] constexpr uint8_t kTable_0079A16C[37] = {
    0x00, 0x01, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x02, 0x03, 0x14, 0x04, 0x05, 0x06,
    0x07, 0x08, 0x09, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x0A, 0x14, 0x0B, 0x0C, 0x0D, 0x14, 0x0E,
    0x0F, 0x10, 0x11, 0x12, 0x13,
};

} // namespace

void fn_0079A16C(void* self) {
    // Data-only region: no executable logic. `self` is unused.
    (void)self;
}
} // namespace lift_0079A16C
