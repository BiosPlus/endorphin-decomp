// Lifted C++ translation unit: lifted/leaf/decompiled_860000.cpp
#include "lift_compat.h"

// [0x0086086B] sub_0086086B (5 bytes)
// @name sub_0086086B
// @summary No-op: "add eax, 0" (eax unchanged; only flags are touched)
void fn_0086086B(void) {
    // add eax, 0x0 (05 00 00 00 00) leaves eax unchanged. Its only effect is
    // on the flags, which portable C++ cannot observe, so there is nothing to emit.
}

// [0x0086F15B] sub_0086F15B (5 bytes)
// @name sub_0086F15B
// @summary No-op: `add eax, 0` (opcode 05 with imm32 0), which leaves eax unchanged; only flags are touched.
void fn_0086F15B(void) {
    // Single instruction `add eax, 0x0` (05 00 00 00 00). Adding zero to eax
    // does not change any value, so there is no portable C++ statement with a
    // visible effect. Kept as an empty function to preserve the address slot.
}

// [0x00860E8B] sub_00860E8B (5 bytes)
// @name sub_00860E8B
// @summary No-op: "add eax, 0" (eax unchanged; only flags are touched)
void fn_00860E8B(void) {
    // add eax, 0x0 (05 00 00 00 00) leaves eax unchanged. Its only effect is
    // on the flags, which portable C++ cannot observe, so there is nothing to emit.
}

// [0x008607F4] sub_008607F4 (12 bytes)
// @name sub_008607F4
// @summary No-op stub (add eax, 0).
void fn_008607F4(void) {
    // No-op stub (add eax, 0x0).
}

// [0x008609F4] sub_008609F4 (12 bytes)
// @name sub_008609F4
// @summary No-op stub (add eax, 0).
void fn_008609F4(void) {
    // No-op stub (add eax, 0x0).
}

// [0x008683E4] sub_008683E4 (12 bytes)
// @name sub_008683E4
// @summary No-op stub (add eax, 0).
void fn_008683E4(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0086C014] sub_0086C014 (12 bytes)
// @name sub_0086C014
// @summary No-op stub (add eax, 0).
void fn_0086C014(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0086CA64] sub_0086CA64 (12 bytes)
// @name sub_0086CA64
// @summary No-op stub (add eax, 0).
void fn_0086CA64(void) {
    // No-op stub (add eax, 0x0).
}

// [0x00862976]
namespace lift_00862976 {
// @name alignmentPadding_00862976
// @summary Multi-byte alignment NOP padding (lea ecx, [ecx]; lea esp, [esp])


void sub_00862976() {
}
} // namespace lift_00862976

// [0x008665CC] sub_008665CC (20 bytes)
namespace lift_008665CC {
// Non-executing data block, not a function. Disassembly decodes as add/lea
// pairs with no control flow: a byte table of values 0x00-0x04 followed by a
// 4-byte `lea esp,[esp]` alignment pad.
// @name DataBytes_008665CC
// @summary Non-executing 20-byte data block (byte-value table 0x00-0x04); no observable logic.
static const uint8_t kDataTable_008665CC[20] = {
    0x00, 0x01, 0x04, 0x04, 0x04, 0x04, 0x04, 0x02, 0x04, 0x04,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x8D, 0x64, 0x24, 0x00,
};

void fn_008665CC(void* self) {
    (void)self;
}
} // namespace lift_008665CC

// [0x00869310]
namespace lift_00869310 {
// @name CopyBytesForward
// @summary Forward byte-by-byte copy of `count` bytes from src to dst; no-op when count is zero.

void CopyBytesForward(uint8_t* dst, const uint8_t* src, uint32_t count) {
    while (count != 0) {
        *dst = *src;
        ++dst;
        ++src;
        --count;
    }
}
} // namespace lift_00869310

// [0x008692F0] sub_008692F0 (32 bytes)
namespace lift_008692F0 {
// @name fillBytes
// @summary Writes the low byte of a value to `count` consecutive bytes starting at `dst` (cdecl, memset-like; no-op when count is 0).
extern void __cdecl fn_008692F0(uint8_t* dst, uint32_t value, uint32_t count) {
    const uint8_t byte = static_cast<uint8_t>(value);
    while (count != 0) {
        *dst++ = byte;
        --count;
    }
}
} // namespace lift_008692F0

// [0x00869F30] sub_00869F30 (32 bytes)
namespace lift_00869F30 {
// @name ZeroDwordRange
// @summary Zeroes `count` consecutive 32-bit words starting at `dst`; does nothing when count is 0.
void ZeroDwordRange(uint32_t* dst, uint32_t count) {
    for (uint32_t i = 0; i < count; ++i) {
        dst[i] = 0;
    }
}
} // namespace lift_00869F30

// [0x0086CCC0] sub_0086CCC0 (32 bytes)
namespace lift_0086CCC0 {
extern uint8_t __cdecl ext_0086CCE0(void* arg);

// @name ReturnSelfOrChainedPtrIfCheckPasses
// @summary Calls ext_0086CCE0(self); if it returns 1, returns the pointer stored at self+0x04, otherwise returns self.
// @field field_0x04 +0x04 uint32_t field_0x04 (pointer-sized value loaded when the check passes)
extern void* __cdecl fn_0086CCC0(void* self) {
    uint8_t ok = ext_0086CCE0(self);
    if (ok == 1) {
        uint32_t next = *reinterpret_cast<const uint32_t*>(static_cast<const uint8_t*>(self) + 0x04);
        return reinterpret_cast<void*>(static_cast<uintptr_t>(next));
    }
    return self;
}
} // namespace lift_0086CCC0

// [0x0086F000] sub_0086F000 (32 bytes)
namespace lift_0086F000 {
// @name ZeroDwordArray20
// @summary Zeroes the 20 DWORD entries (indices 0..19) of the array passed by pointer, highest index first.
void fn_0086F000(DWORD* dst) {
    for (int i = 19; i >= 0; --i) {
        dst[i] = 0;
    }
}
} // namespace lift_0086F000

// [0x0086CF90] sub_0086CF90 (32 bytes)
namespace lift_0086CF90 {
extern uint32_t mem_00924214;

// @name AllocZeroedProduct
// @summary Allocates a zero-initialised block of count*size bytes via LocalAlloc(LMEM_ZEROINIT, count*size).
void* fn_0086CF90(uint32_t count, uint32_t size) {
    using LocalAllocFn = void* (*)(uint32_t flags, uint32_t bytes);
    const uint32_t kLmemZeroinit = 0x40;
    auto local_alloc = reinterpret_cast<LocalAllocFn>(static_cast<uintptr_t>(mem_00924214));
    return local_alloc(kLmemZeroinit, count * size);
}
} // namespace lift_0086CF90

// [0x00867360] sub_00867360 (42 bytes)
namespace lift_00867360 {
// @name parseDecimalPrefix
// @class (none)
// @summary Parses leading ASCII decimal digits of a string into a 32-bit integer (atoi-like), stopping at the first non-digit.
// @field none
int fn_00867360(const char* s) {
    uint32_t result = 0;
    size_t i = 0;
    int8_t c = static_cast<int8_t>(s[0]);
    if (c < '0' || c > '9') {
        return 0;
    }
    do {
        result = result * 10u + static_cast<uint32_t>(c - '0');
        ++i;
        c = static_cast<int8_t>(s[i]);
    } while (c >= '0' && c <= '9');
    return static_cast<int>(result);
}
} // namespace lift_00867360

// [0x0086AF30]
namespace lift_0086AF30 {
// @name CopyDwordRun
// @summary Copies `count` DWORDs from src to dst, one at a time; returns immediately if count is zero.
// (free function, no @class)

extern void __cdecl fn_0086AF30(uint32_t* dst, const uint32_t* src, uint32_t count) {
    if (count == 0) {
        return;
    }
    do {
        *dst = *src;
        ++src;
        ++dst;
        --count;
    } while (count != 0);
}
} // namespace lift_0086AF30

// [0x00869380] sub_00869380 (48 bytes)
namespace lift_00869380 {
// @name MD5Context::init
// @class MD5Context
// @summary Resets an MD5 context: zeroes the 64-bit bit count and loads the four standard MD5 initial state words.
// @field MD5Context +0x00 uint32_t field_0x00
// @field MD5Context +0x04 uint32_t field_0x04
// @field MD5Context +0x08 uint32_t field_0x08
// @field MD5Context +0x0C uint32_t field_0x0C
// @field MD5Context +0x10 uint32_t field_0x10
// @field MD5Context +0x14 uint32_t field_0x14
void fn_00869380(void* self) {
    lift_field<uint32_t>(self, 0x14) = 0u;
    lift_field<uint32_t>(self, 0x10) = 0u;
    lift_field<uint32_t>(self, 0x00) = 0x67452301u;
    lift_field<uint32_t>(self, 0x04) = 0xefcdab89u;
    lift_field<uint32_t>(self, 0x08) = 0x98badcfeu;
    lift_field<uint32_t>(self, 0x0C) = 0x10325476u;
}
} // namespace lift_00869380

// [0x0086EFD0] sub_0086EFD0 (48 bytes)
namespace lift_0086EFD0 {
// @name SetFiveSlotsInvalidAndClearTopBits
// @summary Fills five 32-bit slots with 0xFFFFFFFF, then clears bits 30..31 of slot 0.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
void fn_0086EFD0(void* self) {
    uint32_t* slots = static_cast<uint32_t*>(self);
    for (int i = 0; i < 5; ++i) {
        slots[i] = 0xFFFFFFFFu;
    }
    slots[0] &= 0x3FFFFFFFu;
}
} // namespace lift_0086EFD0

// [0x00864F30]
namespace lift_00864F30 {
// @name Unknown::initRecordHeader
// @summary Writes tag 0xCF into the first u16 of the record at the 5th stack argument, zeroes the next three u16 fields, clears mem_00AB98EC, and returns 0.
// @field Record +0x00 uint16_t tag
// @field Record +0x02 uint16_t field_0x02
// @field Record +0x04 uint16_t field_0x04
// @field Record +0x06 uint16_t field_0x06

extern uint32_t mem_00AB98EC;

uint32_t fn_00864F30(uint32_t /*arg0*/, uint32_t /*arg1*/, uint32_t /*arg2*/, uint32_t /*arg3*/, uint8_t* record) {
    uint16_t* w = reinterpret_cast<uint16_t*>(record);
    w[0] = 0x00CF;
    w[1] = 0x0000;
    w[2] = 0x0000;
    w[3] = 0x0000;
    mem_00AB98EC = 0;
    return 0;
}
} // namespace lift_00864F30

// [0x0086AF00]
namespace lift_0086AF00 {
// @name AllDwordsZero
// @summary Returns 1 if all `count` DWORDs starting at `data` are zero (or count is zero), otherwise 0.
// (free function, no @class)

extern uint32_t __cdecl fn_0086AF00(const uint32_t* data, uint32_t count) {
    if (count == 0) {
        return 1;
    }
    for (uint32_t i = 0; i < count; ++i) {
        if (data[i] != 0) {
            return 0;
        }
    }
    return 1;
}
} // namespace lift_0086AF00

// [0x0086F020] sub_0086F020 (48 bytes)
namespace lift_0086F020 {
// @name CopyDwordBlock20Reverse
// @summary Copies 20 DWORDs from src to dst, walking indices 19 down to 0.
void fn_0086F020(const DWORD* src, DWORD* dst) {
    for (int i = 19; i >= 0; --i) {
        dst[i] = src[i];
    }
}
} // namespace lift_0086F020

// [0x0086AF50]
namespace lift_0086AF50 {
// @name TrimTrailingZeroDwords
// @summary Returns the length of the `count` DWORD array at `data` after stripping trailing zero DWORDs (0 if all are zero).
// (free function, no @class)

extern uint32_t __cdecl fn_0086AF50(const uint32_t* data, uint32_t count) {
    while (count != 0 && data[count - 1] == 0) {
        --count;
    }
    return count;
}
} // namespace lift_0086AF50

// [0x0086BF40]
namespace lift_0086BF40 {
// @name checkEmptySlotsAndState
// @summary Checks that field_0x4c <= 1 and all 19 uint32_t entries at offset 0x00..0x48 are zero, returning 1 if field_0x4c == 1 else 0
// @field struct_0 +0x00 uint32_t[19] field_0x00
// @field struct_0 +0x4c uint32_t field_0x4c


extern uint32_t mem_u32(uint32_t addr);

uint16_t __cdecl sub_0086BF40(uint32_t self) {
    uint32_t state = mem_u32(self + 0x4c);
    if (state > 1) {
        return 0;
    }
    for (int16_t i = 0; static_cast<uint32_t>(static_cast<int32_t>(i)) < 0x13; ++i) {
        if (mem_u32(self + static_cast<int32_t>(i) * 4) != 0) {
            return 0;
        }
    }
    return state == 1 ? 1 : 0;
}
} // namespace lift_0086BF40

// [0x0086B1C0]
namespace lift_0086B1C0 {
// @name bitShiftRight160Once
// @summary Shifts a 160-bit value (five big-endian-ordered u32 words) right by one bit, OR-ing the carried-out LSB into bit 29 of word 0 when set.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0C
// @field Unknown +0x10 uint32_t field_0x10
void fn_0086B1C0(void* self) {
    auto* w = static_cast<uint32_t*>(self);

    // shr [w0], 1 : CF receives the bit shifted out of word 0.
    uint32_t carry = w[0] & 1u;
    w[0] >>= 1;

    // rcr chain over words at +0x04, +0x08, +0x0C, +0x10.
    // Each word shifts right, taking the previous carry into its MSB.
    for (int i = 1; i <= 4; ++i) {
        uint32_t v = w[i];
        uint32_t next_carry = v & 1u;
        w[i] = (v >> 1) | (carry << 31);
        carry = next_carry;
    }

    // jae skips the OR when CF == 0.
    if (carry) {
        w[0] |= 0x20000000u;
    }
}
} // namespace lift_0086B1C0

// [0x0086F120] sub_0086F120 (59 bytes)
namespace lift_0086F120 {
// @name addLimbArrays20
// @summary Adds two 20-entry arrays of 16-bit limbs (stored as dwords) with carry propagation from index 19 down to 0; writes the low 16 bits of each result limb to out.
void fn_0086F120(const uint32_t* a, const uint32_t* b, uint32_t* out) {
    uint32_t carry = 0;
    for (int i = 19; i >= 0; --i) {
        carry = (carry >> 16) + (a[i] + b[i]);
        out[i] = carry & 0xFFFFu;
    }
}
} // namespace lift_0086F120

// [0x0086F0E0] sub_0086F0E0 (61 bytes)
namespace lift_0086F0E0 {
// @name NegateLimbs20
// @summary Two's-complement negates a 20-limb number of 16-bit limbs (stored in 32-bit slots) in place; limb 19 is least significant.
void fn_0086F0E0(DWORD* limbs) {
    // Pass 1: one's complement of each 16-bit limb, from limb 19 down to limb 0.
    for (int i = 19; i >= 0; --i) {
        limbs[i] = (~limbs[i]) & 0xFFFFu;
    }

    // Pass 2: add 1 with carry propagating toward limb 0.
    // Stop at the first limb whose low 16 bits are nonzero after the increment;
    // limbs that wrapped to zero are cleared and the carry moves on.
    for (int i = 19; i >= 0; --i) {
        DWORD v = limbs[i] + 1;
        limbs[i] = v;
        if ((v & 0xFFFFu) != 0) {
            break;
        }
        limbs[i] = 0;
    }
}
} // namespace lift_0086F0E0

// [0x0086F160] sub_0086F160 (58 bytes)
namespace lift_0086F160 {
// Known callee 0x0086F020: CopyDwordBlock20Reverse (Copies 20 DWORDs from src to dst, walking indices 19 down to 0.)
extern void ext_0086F020(const DWORD* src, DWORD* dst);
// Known callee 0x0086F0E0: NegateLimbs20 (Two's-complement negates a 20-limb number of 16-bit limbs (stored in 32-bit slots) in place; limb 19 is least significant.)
extern void ext_0086F0E0(DWORD* limbs);
// Known callee 0x0086F120: addLimbArrays20 (Adds two 20-entry arrays of 16-bit limbs (stored as dwords) with carry propagation from index 19 down to 0; writes the low 16 bits of each result limb to out.)
extern void ext_0086F120(const uint32_t* a, const uint32_t* b, uint32_t* out);

// @name SubtractLimbArrays20
// @summary out = a - b for 20-limb 16-bit-limb numbers: copies b into a temporary, two's-complement negates it, then adds it to a.
void fn_0086F160(const DWORD* a, const DWORD* b, DWORD* out) {
    DWORD negated[20];
    ext_0086F020(b, negated);
    ext_0086F0E0(negated);
    ext_0086F120(a, negated, out);
}
} // namespace lift_0086F160
