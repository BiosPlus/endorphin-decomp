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

// [0x0079ACF0]
namespace lift_0079ACF0 {
// @name readFileBytes
// @summary Reads bytes from a file handle using ReadFile and returns the number of bytes read, or 0 on failure.

extern uint32_t __stdcall ext_ReadFile(uint32_t hFile, uint32_t lpBuffer, uint32_t nNumberOfBytesToRead, uint32_t* lpNumberOfBytesRead, uint32_t lpOverlapped);

uint32_t sub_0079ACF0(uint32_t hFile, uint32_t lpBuffer, uint32_t nNumberOfBytesToRead) {
    uint32_t bytesRead = nNumberOfBytesToRead;
    if (ext_ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, &bytesRead, 0) != 0) {
        return bytesRead;
    }
    return 0;
}
} // namespace lift_0079ACF0

// [0x0079AD20]
namespace lift_0079AD20 {
// @name writeFileBytes
// @summary Calls WriteFile and returns bytes written on success or 0 on failure.

extern uint32_t (__stdcall *mem_00924180)(uint32_t hFile, uint32_t lpBuffer, uint32_t nNumberOfBytesToWrite, uint32_t* lpNumberOfBytesWritten, uint32_t lpOverlapped);

uint32_t __cdecl sub_0079AD20(uint32_t hFile, uint32_t lpBuffer, uint32_t nNumberOfBytesToWrite) {
    uint32_t bytesWritten = nNumberOfBytesToWrite;
    uint32_t ok = mem_00924180(hFile, lpBuffer, nNumberOfBytesToWrite, &bytesWritten, 0);
    return ok ? bytesWritten : 0;
}
} // namespace lift_0079AD20

// [0x007911E0]
namespace lift_007911E0 {
// @name sub_007911E0
// @summary Initializes object fields at offsets 0x28, 0x2c, 0x48, 0x4c, 0x50, and 0x60 and returns 0
// @field Unknown +0x28 uint32_t field_0x28
// @field Unknown +0x2c uint32_t field_0x2c
// @field Unknown +0x48 uint32_t field_0x48
// @field Unknown +0x4c uint32_t field_0x4c
// @field Unknown +0x50 uint32_t field_0x50
// @field Unknown +0x60 uint32_t field_0x60


void mem_write32(void* addr, uint32_t val);

uint32_t __thiscall sub_007911E0(uint8_t* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    mem_write32(self + 0x50, arg1);
    mem_write32(self + 0x4c, arg3);
    mem_write32(self + 0x48, arg2);
    mem_write32(self + 0x60, 1);
    mem_write32(self + 0x28, 0);
    mem_write32(self + 0x2c, 0);
    return 0;
}
} // namespace lift_007911E0

// [0x0079A0EC]
namespace lift_0079A0EC {
// @name sub_0079A0EC
// @summary Data table at 0x0079A0EC (43 bytes) misidentified as code; lifted as no-op/stub


void sub_0079A0EC() {
    // Bytes 00 19 01 02 03 04 19 19 05 06 19 19 07 19 19 08 09 0a 0b 19 0c 19 19 0d 0e 19 0f 10 11 12 13 14 15 16 19...17
    // represent a static lookup table rather than executable instructions.
}
} // namespace lift_0079A0EC

// [0x00798C98] sub_00798C98 (47 bytes)
namespace lift_00798C98 {
// @name lookupTable_00798C98
// @summary 47-byte index-to-class lookup table (default 0x0c; sparse entries 0x00-0x0a); data, not code
// Byte values by offset: 0:00 4:01 9:02 12:03 20:04 23:05 24:06 26:07 27:08 30:09 42:0A; all others 0x0C.

static const unsigned char kLookup_00798C98[47] = {
    0x00, 0x0c, 0x0c, 0x0c, 0x01, 0x0c, 0x0c, 0x0c,
    0x0c, 0x02, 0x0c, 0x0c, 0x03, 0x0c, 0x0c, 0x0c,
    0x0c, 0x0c, 0x0c, 0x0c, 0x04, 0x0c, 0x0c, 0x05,
    0x06, 0x0c, 0x07, 0x08, 0x0c, 0x0c, 0x09, 0x0c,
    0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c,
    0x0c, 0x0a, 0x0c, 0x0c, 0x0c,
};

void fn_00798C98(void* self) {
    (void)self;
    (void)kLookup_00798C98;
}
} // namespace lift_00798C98

// [0x00798840] sub_00798840 (48 bytes)
namespace lift_00798840 {
// @name UnknownClass::computeRowByteSize
// @class UnknownClass
// @summary Returns the byte size of a row: (u16 +0x40 * u32 +0x24, times u16 +0x4e when word +0x72 == 1), rounded up to whole bytes.
// @field UnknownClass +0x24 uint32_t field_0x24
// @field UnknownClass +0x40 uint16_t field_0x40
// @field UnknownClass +0x4e uint16_t field_0x4e
// @field UnknownClass +0x72 uint16_t field_0x72
uint32_t fn_00798840(uint8_t* self) {
    uint32_t eax = *reinterpret_cast<uint16_t*>(self + 0x40);
    eax *= *reinterpret_cast<uint32_t*>(self + 0x24);
    if (*reinterpret_cast<uint16_t*>(self + 0x72) == 1) {
        uint32_t ecx = *reinterpret_cast<uint16_t*>(self + 0x4e);
        eax *= ecx;
    }
    eax += 7;
    return eax >> 3;
}
} // namespace lift_00798840

// [0x0079E620] sub_0079E620 (41 bytes)
namespace lift_0079E620 {
// Known callee 0x00783860: InitInlineBufferHeader (Runs the 0x006D2130 initializer with count 0x10 and element size 4, then points +0x14 at the inline buffer at +0x10 and clears +0x18.)
extern uint32_t __thiscall ext_00783860(uint32_t self);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name SubobjectInitVtables
// @class SubobjectInitVtables
// @summary Stamps two vtable pointers into self (+0x00, then +0x04), initializes the sub-object at self+0x08 via InitInlineBufferHeader, then re-stamps the vtable pointers at +0x00 and +0x04 and returns self.
// @field SubobjectInitVtables +0x00 uint32_t field_0x00 (vtable pointer; written 0x0099773C at the end)
// @field SubobjectInitVtables +0x04 uint32_t field_0x04 (vtable pointer; written 0x0099772C at the end)
// @field SubobjectInitVtables +0x08 uint8_t field_0x08[0x14] (embedded sub-object passed as this to ext_00783860)
uint32_t fn_0079E620(uint32_t self) {
    mem_write32(self + 0x00, 0x00995080);
    mem_write32(self + 0x04, 0x00995080);
    ext_00783860(self + 0x08);
    mem_write32(self + 0x00, 0x0099773C);
    mem_write32(self + 0x04, 0x0099772C);
    return self;
}
} // namespace lift_0079E620
