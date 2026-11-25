// Lifted C++ translation unit: lifted/leaf/decompiled_790000.cpp
#include "lift_compat.h"
#include <cstdio>
#include <cstdint>
#include <cstdarg>

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

// [0x0079EA60] sub_0079EA60 (48 bytes)
namespace lift_0079EA60 {
// Guest globals used by this function.
extern uint32_t mem_00B6114C; // (global) guest u32 holding the slot table base address
extern uint32_t mem_009977EC; // .rdata u32 0x0000FCFF; only the low byte (0xFF) is used

// @name UnknownClass::releaseSlotIfOwned
// @class UnknownClass
// @summary If the object's slot in the table (indexed by its byte at +0x0C) points to it, clear the slot and set the object's +0x0C byte to the sentinel from mem_009977EC.
// @field UnknownClass +0x0C uint8_t field_0x0C
void fn_0079EA60(void* self) {
    const uintptr_t obj = reinterpret_cast<uintptr_t>(self);
    uint32_t* table = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(mem_00B6114C));

    const uint8_t index = lift_field<uint8_t>(self, 0x0C);
    uint32_t* slot = &table[index];

    if (static_cast<uintptr_t>(*slot) == obj) {
        *slot = 0;
        lift_field<uint8_t>(self, 0x0C) = static_cast<uint8_t>(mem_009977EC);
    }
}
} // namespace lift_0079EA60

// [0x00798F90] sub_00798F90 (32 bytes)
namespace lift_00798F90 {
// @name sub_00798F90
// @summary Auto-lifted identical-shape clone of 0x0080B590 (Thunk::copyMemoryDwordThenBytesForward).
namespace lift_0080B590 {
// @name Thunk::copyMemoryDwordThenBytesForward
// @summary Forwards (dst, src, n) unchanged to copyMemoryDwordThenBytes (ext_00859780) and returns its result.

void* ext_00798F10(void* dst, const void* src, size_t n);

void* fn_00798F90(void* dst, const void* src, size_t n) {
    return ext_00798F10(dst, src, n);
}
} // namespace lift_0080B590
} // namespace lift_00798F90

// [0x0079C1B0] sub_0079C1B0 (49 bytes)
namespace lift_0079C1B0 {
// @name codeSelectOrZero
// @summary Returns 0 for a zero or unknown selector; returns the register input for selector 0x3EA; for selector 0x33 returns the register input + 0xF50 (or 0 if the input is 0).
// Calling convention: first value arrives in ECX, selector is the first stack argument, ret 8 pops two stack dwords (second is unused).
uint32_t fn_0079C1B0(uint32_t ecxValue, uint32_t selector, uint32_t unusedArg) {
    (void)unusedArg;
    if (selector == 0) {
        return 0;
    }
    if (selector == 0x33) {
        return ecxValue != 0 ? ecxValue + 0xF50u : 0u;
    }
    if (selector == 0x3EA) {
        return ecxValue;
    }
    return 0;
}
} // namespace lift_0079C1B0

// [0x0079B030]
namespace lift_0079B030 {
// @name memcmp_0079B030
// @summary Compares up to count bytes of two buffers and returns the signed difference of the first mismatching byte.

int32_t sub_0079B030(uint32_t arg1, uint32_t arg2, uint32_t count) {
    if (count == 0) {
        return 0;
    }

    const uint8_t* p1 = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(arg1));
    const uint8_t* p2 = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(arg2));

    for (uint32_t i = 0; i < count; ++i) {
        int32_t diff = static_cast<int32_t>(p1[i]) - static_cast<int32_t>(p2[i]);
        if (diff != 0) {
            return diff;
        }
    }
    return 0;
}
} // namespace lift_0079B030

// [0x00798800]
namespace lift_00798800 {
extern uint32_t ext_00798840(uint8_t* self);

// @name computeRowsPerStrip
// @summary Returns requested rows per strip if >= 1, otherwise computes how many rows fit in 8192 bytes (minimum 1).
int32_t fn_00798800(uint8_t* self, int32_t rowsPerStrip) {
    if (rowsPerStrip >= 1) {
        return rowsPerStrip;
    }

    uint32_t rowBytes = ext_00798840(self);
    uint32_t divisor = (rowBytes == 0) ? 1u : rowBytes;
    uint32_t rows = 0x2000u / divisor;
    return (rows == 0) ? 1 : static_cast<int32_t>(rows);
}
} // namespace lift_00798800

// [0x00796740]
namespace lift_00796740 {
// @name CountAdjacentDeltasAboveThreshold
// @summary Counts how many adjacent double-pair deltas (p[i+1] - p[i]) over a span exceed a constant threshold; returns 0 when the index range is empty.
//
// Stdcall, 3 args, `ret 0xc`:
//   arg1 = const double* base
//   arg2 = uint32_t limit (eax)
//   arg3 = uint32_t start (edx)
//
// The threshold is the 8-byte double at mem_00997100 (the RDATA dump lists
// it as u32 0xE2308C3A, but the instruction is `fcomp qword ptr`, so the
// full 64-bit double is used here).
extern const double mem_00997100;

__stdcall uint32_t fn_00796740(const double* base, uint32_t limit, uint32_t start) {
    uint32_t count = limit - start;   // eax = arg2 - arg3
    uint32_t idx = start - 1;         // ecx = arg3 - 1
    uint32_t hits = 0;                // esi

    // Unsigned: if (arg3 - 1) >= (arg2 - arg3), nothing to do.
    if (idx >= count) {
        return hits;
    }

    const double* p = base + idx;     // edx = base + 8*ecx
    count -= idx;                     // eax -= ecx; ecx = eax (nonzero here)

    do {
        const double delta = p[1] - p[0];
        // fcomp + test ah,0x41: increment only when delta > threshold
        // (unordered/less/equal all skip).
        if (delta > mem_00997100) {
            ++hits;
        }
        ++p;
    } while (--count != 0);

    return hits;
}
} // namespace lift_00796740

// [0x00798710] sub_00798710 (64 bytes)
namespace lift_00798710 {
// @name Unknown::ComputeScaledPageCount
// @class Unknown
// @summary Returns ceil(+0x28 / +0x50) (or nonzero-flag when +0x50 == -1); if +0x72 == 2, multiplies the result by the u16 at +0x4e.
// @field Unknown +0x28 DWORD field_0x28
// @field Unknown +0x4e WORD field_0x4e
// @field Unknown +0x50 INT field_0x50
// @field Unknown +0x72 WORD field_0x72
DWORD fn_00798710(void* self) {
    DWORD count = lift_field<DWORD>(self, 0x28);
    INT divisor = lift_field<INT>(self, 0x50);

    DWORD result;
    if (divisor == -1) {
        result = (count != 0) ? 1u : 0u;
    } else {
        // Unsigned ceiling division: (count + divisor - 1) / divisor
        result = (count + static_cast<DWORD>(divisor) - 1u) / static_cast<DWORD>(divisor);
    }

    if (lift_field<WORD>(self, 0x72) == 2) {
        result = static_cast<DWORD>(lift_field<WORD>(self, 0x4e)) * result;
    }
    return result;
}
} // namespace lift_00798710

// [0x0079DEC0] sub_0079DEC0 (64 bytes)
namespace lift_0079DEC0 {
// Known callee 0x007148E0: HasAnyNonZeroByteInFirst6 (Returns 1 if any of the six bytes at self[0..5] is nonzero, otherwise 0.)
extern uint8_t __fastcall ext_007148E0(void* self);

// @name Unknown::CheckSelectedSubobjectNonZero
// @class Unknown
// @summary Dispatches on a selector (stack arg): 0 checks *self, 1 checks *self+0x48, 2 checks *self+0x90; any other selector returns 0.
// @field Unknown +0x00 void* field_0x00
uint8_t __fastcall fn_0079DEC0(void* self, int edx_unused, int selector) {
    (void)edx_unused;
    void* base = lift_field<void*>(self, 0);
    switch (selector) {
    case 0:
        return ext_007148E0(base);
    case 1:
        return ext_007148E0(static_cast<uint8_t*>(base) + 0x48);
    case 2:
        return ext_007148E0(static_cast<uint8_t*>(base) + 0x90);
    default:
        return 0;
    }
}
} // namespace lift_0079DEC0

// [0x0079DDC0] sub_0079DDC0 (64 bytes)
namespace lift_0079DDC0 {
extern uint8_t __fastcall ext_00714980(void* self);
extern uint8_t __fastcall ext_007149B0(void* self);
extern uint8_t __fastcall ext_007149D0(void* self);

// @name Unknown::QueryInnerFlagByMode
// @class Unknown
// @summary Dispatches on mode (stack arg): 0/1/2 call getters at +0xDC/+0xDD/+0xDE of the inner object and return their logical NOT; any other mode returns 1.
// @field Unknown +0x00 void* inner
extern uint8_t __thiscall fn_0079DDC0(void* self, uint32_t mode) {
    void* inner = *reinterpret_cast<void**>(self);
    switch (mode) {
    case 0:
        return static_cast<uint8_t>(ext_00714980(inner) == 0);
    case 1:
        return static_cast<uint8_t>(ext_007149B0(inner) == 0);
    case 2:
        return static_cast<uint8_t>(ext_007149D0(inner) == 0);
    default:
        return 1;
    }
}
} // namespace lift_0079DDC0

// [0x0079F2E0]
namespace lift_0079F2E0 {
extern DWORD mem_00B61168;
extern DWORD mem_00B61230;
extern DWORD mem_00B60F58;
extern DWORD mem_00B5EB78;
extern DWORD mem_00B5E400;

// @name sub_0079F2E0 (descriptiveName: IsAnyKnownValue)
// @summary Returns TRUE if the argument equals any of five global sentinel values (mem_00B61168, mem_00B61230, mem_00B60F58, mem_00B5EB78, mem_00B5E400).
// (no class; no struct field offsets accessed)
BOOLEAN __stdcall fn_0079F2E0(DWORD value) {
    return static_cast<BOOLEAN>(
        value == mem_00B61168 ||
        value == mem_00B61230 ||
        value == mem_00B60F58 ||
        value == mem_00B5EB78 ||
        value == mem_00B5E400);
}
} // namespace lift_0079F2E0

// [0x0079AD50] sub_0079AD50 (70 bytes)
namespace lift_0079AD50 {
extern DWORD __stdcall ext_SetFilePointer(HANDLE hFile, LONG lDistanceToMove, LONG* lpDistanceToMoveHigh, DWORD dwMoveMethod);

// @name SeekFile
// @summary Returns -1 if offset is -1; otherwise maps origin 0/1/2 to FILE_BEGIN/CURRENT/END (other values to BEGIN) and returns SetFilePointer with a zero high part.
LONG fn_0079AD50(HANDLE handle, LONG offset, LONG origin) {
    if (offset == -1) {
        return -1;
    }
    DWORD method = 0;
    switch (origin) {
    case 0: method = 0; break;
    case 1: method = 1; break;
    case 2: method = 2; break;
    default: method = 0; break;
    }
    LONG high = 0;
    return static_cast<LONG>(ext_SetFilePointer(handle, offset, &high, method));
}
} // namespace lift_0079AD50

// [0x00798F10] sub_00798F10 (80 bytes)
namespace lift_00798F10 {
// Known callee 0x0079AF40: GlobalAllocZeroFlags (Allocates a global memory block of the requested size with uFlags = 0 (GMEM_FIXED) and returns the handle.)
extern uint32_t ext_0079AF40(uint32_t size);
// Known callee 0x0079AF50: GlobalFreeWrapper (Frees a global memory handle via KERNEL32!GlobalFree and returns its result.)
extern void* ext_0079AF50(void* hMem);
// Known callee 0x0079B010: CopyMemoryForward (Forward copy of n bytes from src to dst.)
extern void ext_0079B010(void* dst, const void* src, uint32_t count);

// @name ReplaceGlobalBlock
// @summary Frees the global block held in *slot (if any); if src is non-null, allocates a new block of size bytes into *slot and copies src into it.
void fn_00798F10(uint32_t* slot, const void* src, uint32_t size) {
    if (*slot != 0) {
        ext_0079AF50(reinterpret_cast<void*>(static_cast<uintptr_t>(*slot)));
        *slot = 0;
    }
    if (src == nullptr) {
        return;
    }
    uint32_t handle = ext_0079AF40(size);
    *slot = handle;
    if (handle != 0) {
        ext_0079B010(reinterpret_cast<void*>(static_cast<uintptr_t>(handle)), src, size);
    }
}
} // namespace lift_00798F10

// [0x00798EA0] sub_00798EA0 (80 bytes)
namespace lift_00798EA0 {
// Known callee 0x0079AF40: sub_0079AF40 (GlobalAllocZeroFlags wrapper, uFlags = GMEM_FIXED).
extern uint32_t ext_0079AF40(uint32_t size);

// @name Unknown::InitMaskTable
// @class Unknown
// @summary Allocates a 24-byte table of three {uint32 0, float mask} entries, where mask = (1 << (field_0x28 & 31)) - 1.
// @field Unknown +0x28 uint8_t field_0x28
// @field Unknown +0xDC uint32_t field_0xDC
void fn_00798EA0(void* self) {
    const uint32_t block = ext_0079AF40(24);
    lift_field<uint32_t>(self, 0xDC) = block;

    const uint32_t shift = static_cast<uint32_t>(lift_field<uint8_t>(self, 0x28)) & 31u;
    const float mask = static_cast<float>(static_cast<int32_t>((1u << shift) - 1u));

    uint8_t* base = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(block));
    for (uint32_t i = 0; i < 24; i += 8) {
        const uint32_t zero = 0;
        std::memcpy(base + i, &zero, sizeof(zero));
        std::memcpy(base + i + 4, &mask, sizeof(mask));
    }
}
} // namespace lift_00798EA0

// [0x00798FB0] sub_00798FB0 (32 bytes)
namespace lift_00798FB0 {
// Known callee 0x00798F10: ReplaceGlobalBlock (Frees the global block held in *slot (if any); if src is non-null, allocates a new block of size bytes into *slot and copies src into it.)
extern void ext_00798F10(uint32_t* slot, const void* src, uint32_t size);

// @name ReplaceGlobalBlockFromCount
// @summary Forwards to ReplaceGlobalBlock with a size of twice the count argument (count * 2 bytes).
void fn_00798FB0(uint32_t* slot, const void* src, uint32_t count) {
    ext_00798F10(slot, src, count * 2u);
}
} // namespace lift_00798FB0

// [0x0079DB50] sub_0079DB50 (18 bytes)
namespace lift_0079DB50 {
// Known callee 0x007857A0: callVirtualSlot4OverArray (Walks a uint32 array and calls virtual slot 4 on this for each element, alternating which return values are kept; returns the final flag (initially true).)
extern uint8_t ext_007857A0(void* self, const uint32_t* values);

// @name ThunkCallVirtualSlot4OverArray
// @class (none; free function)
// @summary Forwards its two stack arguments to callVirtualSlot4OverArray (ext_007857A0) and returns that flag unchanged.
uint8_t __stdcall fn_0079DB50(void* self, const uint32_t* values) {
    return ext_007857A0(self, values);
}
} // namespace lift_0079DB50

// [0x0079DB30] sub_0079DB30 (18 bytes)
namespace lift_0079DB30 {
// @name sub_0079DB30
// @summary Auto-lifted identical-shape clone of 0x0079DB50 (ThunkCallVirtualSlot4OverArray).
namespace lift_0079DB50 {
// Known callee 0x007857A0: callVirtualSlot4OverArray (Walks a uint32 array and calls virtual slot 4 on this for each element, alternating which return values are kept; returns the final flag (initially true).)
extern uint8_t ext_007856F0(void* self, const uint32_t* values);

// @name ThunkCallVirtualSlot4OverArray
// @class (none; free function)
// @summary Forwards its two stack arguments to callVirtualSlot4OverArray (ext_007857A0) and returns that flag unchanged.
uint8_t __stdcall fn_0079DB30(void* self, const uint32_t* values) {
    return ext_007856F0(self, values);
}
} // namespace lift_0079DB50
} // namespace lift_0079DB30

// [0x007985F0] sub_007985F0 (81 bytes)
namespace lift_007985F0 {
// Known callee 0x0079B140: DispatchThreeArgsToOptionalHook (If the global hook pointer mem_00AAFC2C is non-null, call it with (a1, a2, &a3); otherwise do nothing.)
// Caller pushes exactly two arguments (a1, a2), so the stub is declared with those.
extern void ext_0079B140(uint32_t a1, uint32_t a2);

// Global string/tag constants referenced by this function.
// Their contents are not recovered, so they are kept as raw addresses.
static constexpr uint32_t kTagFlagSet   = 0x00AAFA10u; // pushed when field +0x08 == 1
static constexpr uint32_t kTagFlagZero  = 0x00AAF9B8u; // selected when bit10 mismatch and flag == 0
static constexpr uint32_t kTagFlagNonZero = 0x00AAF9E4u; // selected when bit10 mismatch and flag != 0

// @name DispatchByBit10Mismatch
// @class Unknown
// @summary If field +0x08 == 1, forward the first field with tag 0x00AAFA10 and return 0; otherwise return 1 when bit 10 of +0x0C equals the flag, else forward the first field with a tag chosen from the flag and return 0.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
uint32_t fn_007985F0(void* self, uint32_t flag) {
    if (lift_field<uint32_t>(self, 0x08) == 1u) {
        ext_0079B140(lift_field<uint32_t>(self, 0x00), kTagFlagSet);
        return 0u;
    }

    const uint32_t bit10 = (lift_field<uint32_t>(self, 0x0C) >> 10) & 1u;
    if ((bit10 ^ flag) == 0u) {
        return 1u;
    }

    const uint32_t tag = (flag != 0u) ? kTagFlagNonZero : kTagFlagZero;
    ext_0079B140(lift_field<uint32_t>(self, 0x00), tag);
    return 0u;
}
} // namespace lift_007985F0

// [0x0079B0E0] sub_0079B0E0 (82 bytes)
namespace lift_0079B0E0 {
// @name ReportWarningV
// @summary Writes an optional "prefix: " tag, a va_list-formatted message, and ".\n" to stderr.
void fn_0079B0E0(const char* prefix, const char* fmt, std::va_list args) {
    if (prefix != nullptr) {
        std::fprintf(stderr, "%s: ", prefix);
    }
    std::vfprintf(stderr, fmt, args);
    std::fprintf(stderr, ".\n");
}
} // namespace lift_0079B0E0

// [0x00790F40] sub_00790F40 (85 bytes)
namespace lift_00790F40 {
// @name Unknown::computeSlotIndex_00790F40
// @class Unknown
// @summary Computes and caches a 32-bit index from count/stride fields (returns early if already cached at +0x2c).
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x1c uint32_t field_0x1c
// @field Unknown +0x24 uint32_t field_0x24
// @field Unknown +0x2c uint32_t field_0x2c
// @field Unknown +0x4c uint32_t field_0x4c
void fn_00790F40(void* self) {
    auto* p = static_cast<uint8_t*>(self);

    auto rd = [p](size_t off) -> uint32_t {
        uint32_t v;
        std::memcpy(&v, p + off, sizeof(v));
        return v;
    };
    auto wr = [p](size_t off, uint32_t v) {
        std::memcpy(p + off, &v, sizeof(v));
    };

    // Already computed: nothing to do.
    if (rd(0x2c) != 0) {
        return;
    }

    const uint32_t count  = rd(0x0c);
    const uint32_t stride = rd(0x24);
    const uint32_t scaled = rd(0x1c) * stride; // unsigned 32-bit wrap, as in the original

    uint32_t result;
    if (count == 1) {
        const uint32_t base = rd(0x14);
        const uint32_t q    = (rd(0x4c) - base) / stride;
        result = (q + base - 1u) * scaled + scaled;
    } else {
        const uint32_t q = (rd(0x4c) - rd(0x14)) / stride;
        result = q * scaled + scaled + 1u;
    }

    wr(0x2c, result);
}
} // namespace lift_00790F40

// [0x00790EE0]
namespace lift_00790EE0 {
// @name Unknown::computeCachedEnd_00790EE0
// @class Unknown
// @summary Lazily computes and caches a scaled end position from base, end, and stride fields (mode 1 uses a different formula).
// @field Unknown +0x08 std::uint32_t mode
// @field Unknown +0x10 std::uint32_t base
// @field Unknown +0x18 std::uint32_t elemScale
// @field Unknown +0x20 std::uint32_t stride
// @field Unknown +0x28 std::uint32_t cachedEnd
// @field Unknown +0x48 std::uint32_t end

std::uint32_t fn_00790EE0(void* self) {
    auto* p = static_cast<std::uint8_t*>(self);
    auto rd = [p](std::size_t off) -> std::uint32_t& {
        return *reinterpret_cast<std::uint32_t*>(p + off);
    };

    if (rd(0x28) != 0) {
        return rd(0x28);
    }

    const std::uint32_t mode = rd(0x08);
    const std::uint32_t stride = rd(0x20);
    const std::uint32_t scale = rd(0x18) * stride;
    std::uint32_t result;

    if (mode == 1) {
        const std::uint32_t base = rd(0x10);
        const std::uint32_t q = (rd(0x48) - base) / stride;
        result = (q + base - 1) * scale + scale;
    } else {
        const std::uint32_t q = (rd(0x48) - rd(0x10)) / stride;
        result = q * scale + scale + 1;
    }

    rd(0x28) = result;
    return result;
}
} // namespace lift_00790EE0

// [0x00798F60] sub_00798F60 (48 bytes)
namespace lift_00798F60 {
// Known callee 0x00798F10: ReplaceGlobalBlock (Frees the global block held in *slot (if any); if src is non-null, allocates a new block of size bytes into *slot and copies src into it.)
extern void ext_00798F10(uint32_t* slot, const void* src, uint32_t size);

// @name ReplaceGlobalBlockFromString
// @summary Replaces the global block in *slot with a copy of the NUL-terminated string src, sized strlen(src)+1 including the terminator.
void fn_00798F60(uint32_t* slot, const char* src) {
    const uint32_t size = static_cast<uint32_t>(std::strlen(src)) + 1u;
    ext_00798F10(slot, src, size);
}
} // namespace lift_00798F60

// [0x0079E410] sub_0079E410 (64 bytes)
namespace lift_0079E410 {
// Known callee 0x00714AE0: getField0xD8 (Return the 32-bit field at offset 0xD8 of the object in ecx.)
// Stack args pushed by the caller: (0, sel) where sel = flag ? 0 : 6.
extern uint32_t ext_00714AE0(uintptr_t ecx, uint32_t arg0, uint32_t arg1);
// Known callee 0x006C3390: sub_006C3390 (Sets a 32-bit field at offset 0x1e78 in an array of 496-byte entries pointed to by this+0xf0.)
// Self is passed in ecx; index/value are stack args whose slots are not fully established here.
extern void ext_006C3390(uintptr_t self, uint32_t index, uint32_t value);

// @name Unknown::updateIndexedRecordFromD8
// @class Unknown
// @summary Reads the 0xD8 field of the sub-object referenced by self+0x00, then stores it into the indexed record array via ext_006C3390.
// @field Unknown +0x00 void* subobject
void fn_0079E410(void* self, uint32_t flag) {
    // Load the sub-object pointer stored at self+0x00 (mov ecx, [ecx]).
    void* subobject = *reinterpret_cast<void**>(self);

    // flag != 0 -> second stack arg is 0; flag == 0 -> second stack arg is 6.
    const uint32_t sel = (flag != 0) ? 0u : 6u;
    const uint32_t value = ext_00714AE0(reinterpret_cast<uintptr_t>(subobject), 0u, sel);

    // Store into the record array; index is the stacked flag, value slot is not established here.
    ext_006C3390(static_cast<uintptr_t>(value), flag, 0u);
}
} // namespace lift_0079E410

// [0x0079E480] sub_0079E480 (48 bytes)
namespace lift_0079E480 {
// Known callee 0x00714AE0: getField0xD8 (Return the 32-bit field at offset 0xD8 of the object in ecx.)
extern uint32_t ext_00714AE0(uintptr_t ecx);
// Known callee 0x006C33C0: Unknown::loadRecordDwordByIndex (Computes index * 496 (index*31*16), adds the base pointer stored at +0xF0 and the constant 0x1E78, loads a dword from that address, and writes it through the out-pointer.)
extern void ext_006C33C0(uintptr_t self, uint32_t index, uint32_t* out);

// @name Unknown::isFirstRecordTagSix
// @class Unknown
// @summary Reads the object pointer at self+0, fetches its field at 0xD8, loads record 0 through that object, and returns whether the loaded dword equals 6.
// @field Unknown +0x00 uint32_t field_0x00
BOOL fn_0079E480(void* self) {
    uintptr_t obj = lift_field<uint32_t>(self, 0x00);
    uint32_t field = ext_00714AE0(obj);
    uint32_t value = 0;
    ext_006C33C0(static_cast<uintptr_t>(field), 0, &value);
    return value == 6 ? 1 : 0;
}
} // namespace lift_0079E480

// [0x0079E450] sub_0079E450 (48 bytes)
namespace lift_0079E450 {
// Known callee 0x00714AE0: getField0xD8 (returns the 32-bit field at +0xD8 of the object in ecx).
extern uint32_t __fastcall ext_00714AE0(uint32_t ecx);
// Known callee 0x006C33C0: Unknown::loadRecordDwordByIndex (loads a dword from record[index] and writes it via out).
extern void __thiscall ext_006C33C0(void* self, uint32_t index, uint32_t* out);

// @name IsFirstRecordNotType6
// @summary Loads the object pointer at *self, reads its +0xD8 field, then reads the dword of record 0 and returns 0 if it equals 6, otherwise 1.
extern uint32_t __fastcall fn_0079E450(void* self) {
    uint32_t obj = *reinterpret_cast<uint32_t*>(self);
    uint32_t handle = ext_00714AE0(obj);
    uint32_t recordValue = 0;
    ext_006C33C0(reinterpret_cast<void*>(static_cast<uintptr_t>(handle)), 0u, &recordValue);
    return (recordValue == 6u) ? 0u : 1u;
}
} // namespace lift_0079E450

// [0x007986B0]
namespace lift_007986B0 {
// @name ComputeBufferOffset
// @summary Computes a buffer offset by dividing arg2 by field_0x50 and adding a scaled plane/channel offset when field_0x72 == 2, or invoking ext_0079B140 if arg3 is out of range.
// @field struct_0 +0x00 uint32_t field_0x00
// @field struct_0 +0x4E uint16_t field_0x4E
// @field struct_0 +0x50 uint32_t field_0x50
// @field struct_0 +0x72 uint16_t field_0x72
// @field struct_0 +0xC8 uint32_t field_0xC8


extern void ext_0079B140(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4);

uint32_t fn_007986B0(uint8_t* a1, uint32_t a2, uint32_t a3) {
    uint32_t divisor = *(const uint32_t*)(a1 + 0x50);
    uint32_t result = a2 / divisor;

    if (*(const uint16_t*)(a1 + 0x72) != 2) {
        return result;
    }

    uint16_t limit = *(const uint16_t*)(a1 + 0x4E);
    uint16_t index = (uint16_t)a3;
    if (index >= limit) {
        uint32_t handle = *(const uint32_t*)a1;
        ext_0079B140(handle, 0x00AAFA2C, (uint32_t)index, (uint32_t)limit);
        return 0;
    }

    uint32_t stride = *(const uint32_t*)(a1 + 0xC8);
    return result + stride * (uint32_t)index;
}
} // namespace lift_007986B0

// [0x0079A230]
namespace lift_0079A230 {
extern void ext_0079B140(uint32_t a1, uint32_t a2, uint32_t a3, ...);

// @name MeasureNullTerminatedStringTableSize
// @summary Measures the total byte size of a table of null-terminated strings bounded by a maximum length, reporting an error via ext_0079B140 if the bound is exceeded.
// @field Record +0x00 uint32_t field_0x00
// @field Record +0x4E uint16_t stringCount
uint32_t fn_0079A230(uintptr_t record, int32_t maxLen, uintptr_t buf) {
    uint32_t count = static_cast<uint32_t>(*reinterpret_cast<const uint16_t*>(record + 0x4E));
    int32_t remaining = static_cast<int32_t>(count);

    if (maxLen <= 0) {
        uint32_t scanned = count - static_cast<uint32_t>(remaining);
        uint32_t header = *reinterpret_cast<const uint32_t*>(record);
        ext_0079B140(0x00AAFA78u, 0x00AAFBBCu, header, count, scanned);
        return 0;
    }

    const uint8_t* start = reinterpret_cast<const uint8_t*>(buf);
    const uint8_t* end = start + maxLen;
    const uint8_t* p = start;

    while (remaining > 0) {
        if (*p != 0) {
            do {
                if (p >= end) {
                    uint32_t scanned = count - static_cast<uint32_t>(remaining);
                    uint32_t header = *reinterpret_cast<const uint32_t*>(record);
                    ext_0079B140(0x00AAFA78u, 0x00AAFBBCu, header, count, scanned);
                    return 0;
                }
                ++p;
            } while (*p != 0);
        }
        ++p;
        --remaining;
    }

    return static_cast<uint32_t>(p - start);
}
} // namespace lift_0079A230

// [0x0079ADD0] sub_0079ADD0 (107 bytes)
namespace lift_0079ADD0 {
// Known callee 0x0079ADC0: GetFileSizeLow (returns low 32 bits of file size, or 0xFFFFFFFF on failure).
extern DWORD ext_0079ADC0(DWORD hFile);

// Win32 imports used via IAT slots 0x0092418C (CreateFileMappingA), 0x00924188 (MapViewOfFile),
// 0x009241E0 (CloseHandle). Declared with their kernel32 prototypes for portable compilation.
extern HANDLE CreateFileMappingA(HANDLE hFile, void* lpAttributes, DWORD flProtect,
                                     DWORD dwMaximumSizeHigh, DWORD dwMaximumSizeLow,
                                     const char* lpName);
extern LPVOID MapViewOfFile(HANDLE hFileMappingObject, DWORD dwDesiredAccess,
                                DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow,
                                SIZE_T dwNumberOfBytesToMap);
extern BOOL CloseHandle(HANDLE hObject);

// @name mapFileReadOnly
// @summary Maps a file handle read-only; on success stores the view pointer in *outView and the file size in *outSize.
BOOL fn_0079ADD0(DWORD hFile, LPVOID* outView, DWORD* outSize) {
    constexpr DWORD kInvalidSize = 0xFFFFFFFFu;
    constexpr DWORD kPageReadonly = 0x02;
    constexpr DWORD kFileMapRead = 0x04;

    const DWORD size = ext_0079ADC0(hFile);
    if (size == kInvalidSize) {
        return FALSE;
    }

    HANDLE hMap = CreateFileMappingA(reinterpret_cast<HANDLE>(static_cast<uintptr_t>(hFile)),
                                     nullptr, kPageReadonly, 0, size, nullptr);
    if (hMap == nullptr) {
        return FALSE;
    }

    LPVOID view = MapViewOfFile(hMap, kFileMapRead, 0, 0, 0);
    *outView = view;
    CloseHandle(hMap);

    if (view == nullptr) {
        return FALSE;
    }
    *outSize = size;
    return TRUE;
}
} // namespace lift_0079ADD0

// [0x0079B070]
namespace lift_0079B070 {
// @name logStderrFormatted
// @summary Prints an optional prefix, a fixed tag, a vfprintf-formatted message, and a trailing string to stderr.
void __cdecl sub_0079B070(const char* prefix, const char* fmt, va_list args) {
    if (prefix != nullptr) {
        std::fprintf(stderr, reinterpret_cast<const char*>(0x00AAFC50u), prefix);
    }
    std::fprintf(stderr, reinterpret_cast<const char*>(0x00AAFC44u));
    std::vfprintf(stderr, fmt, args);
    std::fprintf(stderr, reinterpret_cast<const char*>(0x00AAFC40u));
}
} // namespace lift_0079B070

// [0x007966D0] sub_007966D0 (110 bytes)
namespace lift_007966D0 {
// Known callee 0x00796740: CountAdjacentDeltasAboveThreshold (Counts how many adjacent double-pair deltas (p[i+1] - p[i]) over a span exceed a constant threshold; returns 0 when the index range is empty.)
extern uint32_t ext_00796740(const double* base, uint32_t limit, uint32_t start);

// @name Unknown::updateCachedSpanEnd_007966D0
// @class Unknown
// @summary Recomputes the cached span end at +0x2c when it is zero, using a count from ext_00796740 scaled by the stride at +0x1c.
// @field Unknown +0x0c uint32_t field_0x0c
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x1c uint32_t field_0x1c
// @field Unknown +0x2c uint32_t field_0x2c
// @field Unknown +0x4c uint32_t field_0x4c
// @field Unknown +0x268 uint32_t field_0x268
// @field Unknown +0x270 uint32_t field_0x270
void fn_007966D0(void* self) {
    if (lift_field<uint32_t>(self, 0x2c) != 0) {
        return;
    }

    const uint32_t count_mode = lift_field<uint32_t>(self, 0x0c);
    const uint32_t base_index = lift_field<uint32_t>(self, 0x4c);
    const uint32_t start      = lift_field<uint32_t>(self, 0x14);
    const uint32_t stride     = lift_field<uint32_t>(self, 0x1c);
    const double* base = reinterpret_cast<const double*>(
        static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x268)));

    uint32_t limit;
    uint32_t extra;
    if (count_mode == 1) {
        limit = base_index + 2 * start - 1;
        extra = 0;
    } else {
        limit = base_index + start;
        extra = 1;
    }

    const uint32_t r = ext_00796740(base, limit, start);
    lift_field<uint32_t>(self, 0x270) = r;
    // Equivalent to (r - 1) * stride + stride + extra, wrapping like the 32-bit original.
    lift_field<uint32_t>(self, 0x2c) = r * stride + extra;
}
} // namespace lift_007966D0

// [0x00796660] sub_00796660 (110 bytes)
namespace lift_00796660 {
// Known callee 0x00796740: CountAdjacentDeltasAboveThreshold (Counts how many adjacent double-pair deltas (p[i+1] - p[i]) over a span exceed a constant threshold; returns 0 when the index range is empty.)
extern uint32_t ext_00796740(const double* base, uint32_t limit);

// @name Unknown::refreshDeltaCursor_00796660
// @class Unknown
// @summary Recomputes a cached cursor/index (+0x28) from the adjacent-delta count over the span at +0x264, stores the count in +0x26c, and does nothing if the cursor is already set.
// @field Unknown +0x08 uint32_t mode            (compared with 1 to pick the stride/limit formula)
// @field Unknown +0x10 uint32_t count
// @field Unknown +0x18 uint32_t stride
// @field Unknown +0x28 uint32_t cursor          (0 = needs recompute; written on exit)
// @field Unknown +0x48 uint32_t baseIndex
// @field Unknown +0x264 const double* samples
// @field Unknown +0x26c uint32_t deltaCount     (result of ext_00796740)
void fn_00796660(void* self) {
    auto* b = static_cast<uint8_t*>(self);

    auto rd32 = [&](size_t off) {
        uint32_t v;
        std::memcpy(&v, b + off, sizeof v);
        return v;
    };
    auto wr32 = [&](size_t off, uint32_t v) {
        std::memcpy(b + off, &v, sizeof v);
    };

    // Cursor already computed: nothing to do.
    if (rd32(0x28) != 0) {
        return;
    }

    const uint32_t mode   = rd32(0x08);
    const uint32_t count  = rd32(0x10);
    const uint32_t stride = rd32(0x18);
    const uint32_t first  = rd32(0x48);
    const uintptr_t samplesAddr = rd32(0x264);
    const auto* samples = reinterpret_cast<const double*>(samplesAddr);

    uint32_t result;
    uint32_t cursor;
    if (mode == 1) {
        // Limit is baseIndex + count; cursor covers one extra slot.
        result = ext_00796740(samples, first + count);
        wr32(0x26c, result);
        cursor = (result - 1) * stride + stride + 1;
    } else {
        // Limit is baseIndex + 2*count - 1.
        result = ext_00796740(samples, first + 2 * count - 1);
        wr32(0x26c, result);
        cursor = (result - 1) * stride + stride;
    }
    wr32(0x28, cursor);
}
} // namespace lift_00796660

// [0x0079EAC0] sub_0079EAC0 (32 bytes)
namespace lift_0079EAC0 {
extern uint8_t mem_00B61150;   // global entry count (byte)
extern uint32_t mem_00B6114C;  // global table base pointer (value used as address)

// @name getGlobalTableEntryOrZero
// @summary Returns the table entry at index (low byte of arg) from the global table, or 0 if the index is >= the global count.
uint32_t fn_0079EAC0(uint32_t index) {
    const uint8_t idx = static_cast<uint8_t>(index & 0xFFu);
    if (idx >= mem_00B61150) {
        return 0u;
    }
    const uintptr_t base = static_cast<uintptr_t>(mem_00B6114C);
    const auto* table = reinterpret_cast<const uint32_t*>(base);
    return table[idx];
}
} // namespace lift_0079EAC0
