// Lifted C++ translation unit: lifted/leaf/decompiled_860000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <bit>

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

// [0x0086B180] sub_0086B180 (63 bytes)
namespace lift_0086B180 {
// @name Unknown::ShiftLeft5DwordsCarryBit29
// @class Unknown
// @summary Shifts a 5-DWORD value at self left by one bit (word 4 is LSB end, word 0 is MSB end), feeding bit 29 of word 0 into word 4, then clears bits 30-31 of word 0.
// @field Unknown +0x00 DWORD field_0x00
// @field Unknown +0x04 DWORD field_0x04
// @field Unknown +0x08 DWORD field_0x08
// @field Unknown +0x0C DWORD field_0x0C
// @field Unknown +0x10 DWORD field_0x10
void fn_0086B180(void* self) {
    DWORD* w = static_cast<DWORD*>(self);

    // Carry-in is bit 29 of word 0, taken before any modification.
    DWORD carry = (w[0] >> 29) & 1u;

    // Process words 4, 3, 2, 1, 0 in that order, propagating the top bit upward.
    for (int i = 4; i >= 0; --i) {
        DWORD v = w[i];
        DWORD next_carry = v >> 31;
        w[i] = (v << 1) | carry;
        carry = next_carry;
    }

    // Clear bits 30 and 31 of word 0.
    w[0] &= 0x3FFFFFFFu;
}
} // namespace lift_0086B180

// [0x00868140]
namespace lift_00868140 {
// @name strstr_impl
// @summary Searches for the first occurrence of a null-terminated substring in a null-terminated string.


const char* __cdecl sub_00868140(const char* haystack, const char* needle) {
    if (*needle == '\0') {
        return haystack;
    }
    if (*haystack == '\0') {
        return nullptr;
    }

    while (*haystack != '\0') {
        const char* s1 = haystack;
        const char* s2 = needle;
        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
            ++s1;
            ++s2;
        }
        if (*s2 == '\0') {
            return haystack;
        }
        ++haystack;
    }

    return nullptr;
}
} // namespace lift_00868140

// [0x00869F50]
namespace lift_00869F50 {
// @name bitsetZeroAndSetBit
// @summary Zeroes a bitset array of uint32_t words and sets a single bit if within bounds.

void __cdecl sub_00869F50(uint32_t* bitset, uint32_t bitIndex, uint32_t wordCount) {
    for (uint32_t i = 0; i < wordCount; ++i) {
        bitset[i] = 0;
    }
    if (bitIndex < (wordCount << 5)) {
        bitset[bitIndex >> 5] = 1u << (bitIndex & 0x1Fu);
    }
}
} // namespace lift_00869F50

// [0x0086F0A0]
namespace lift_0086F0A0 {
// @name pack_u16_pairs_to_u32
// @summary Packs five pairs of 32-bit values (starting at index 10) into five 32-bit values by shifting the first element left by 16 and ORing with the second.

void sub_0086F0A0(const uint32_t* src, uint32_t* dst) {
    for (int16_t i = 0; i < 5; ++i) {
        int32_t idx = static_cast<int16_t>(2 * i + 10);
        dst[i] = src[idx + 1] | (src[idx] << 16);
    }
}
} // namespace lift_0086F0A0

// [0x0086F8F0]
namespace lift_0086F8F0 {
// @name shiftRight1_20
// @summary Right-shifts a 20-element 32-bit limb array (16-bit limbs) by 1 bit.
void sub_0086F8F0(uint32_t* arr) {
    for (int16_t i = 0x13; i >= 0; --i) {
        uint32_t carry = (i != 0) ? ((arr[i - 1] & 1u) << 16) : 0u;
        arr[i] = (arr[i] | carry) >> 1;
    }
}
} // namespace lift_0086F8F0

// [0x0086FFF0] sub_0086FFF0 (72 bytes)
namespace lift_0086FFF0 {
// @name StoreBigEndianQword
// @summary Copies two little-endian dwords from src into dst as big-endian bytes (8 bytes total).
void fn_0086FFF0(uint8_t* dst, const uint8_t* src) {
    // Read both dwords as they are laid out in memory (little-endian host layout).
    uint32_t w0;
    uint32_t w1;
    std::memcpy(&w0, src + 0, sizeof(w0));
    std::memcpy(&w1, src + 4, sizeof(w1));

    // Emit each dword most-significant byte first.
    dst[0] = static_cast<uint8_t>(w0 >> 24);
    dst[1] = static_cast<uint8_t>(w0 >> 16);
    dst[2] = static_cast<uint8_t>(w0 >> 8);
    dst[3] = static_cast<uint8_t>(w0);
    dst[4] = static_cast<uint8_t>(w1 >> 24);
    dst[5] = static_cast<uint8_t>(w1 >> 16);
    dst[6] = static_cast<uint8_t>(w1 >> 8);
    dst[7] = static_cast<uint8_t>(w1);
}
} // namespace lift_0086FFF0

// [0x00868690] sub_00868690 (80 bytes)
namespace lift_00868690 {
// @name _aullshr (unsigned 64-bit logical shift right)
// @summary Shifts the unsigned 64-bit value (hi:lo) right by n bits (n >= 64 yields 0).
// @field none (no struct field accesses)
uint64_t fn_00868690(uint32_t lo, uint32_t hi, uint32_t n) {
    if (n == 0) {
        return (static_cast<uint64_t>(hi) << 32) | lo;
    }
    if (n >= 64) {
        return 0;
    }
    if (n >= 32) {
        // Whole low word is shifted out; result is hi >> (n - 32) in the low word.
        return static_cast<uint64_t>(hi >> (n - 32));
    }
    uint32_t newLo = (lo >> n) | (hi << (32 - n));
    uint32_t newHi = hi >> n;
    return (static_cast<uint64_t>(newHi) << 32) | newLo;
}
} // namespace lift_00868690

// [0x00860330] sub_00860330 (80 bytes)
namespace lift_00860330 {
// @name ClampedDivmodPair
// @summary Clamps two ints (a to [1,60], b to [1,30]), takes max(a,b) and writes b and max(a,b)/b to out params.
// @field none (no struct field accesses; operates on plain stack arguments and out pointers)
void fn_00860330(int32_t a, int32_t b, int32_t* out_divisor, int32_t* out_quotient) {
    if (b < 1) b = 1;
    if (b > 30) b = 30;
    if (a < 1) a = 1;
    if (a > 60) a = 60;
    int32_t n = a;
    if (b > n) n = b;
    *out_divisor = b;
    *out_quotient = n / b;
}
} // namespace lift_00860330

// [0x00869330] sub_00869330 (80 bytes)
namespace lift_00869330 {
// @name memcmp_diff
// @summary Compares up to n bytes of two buffers; returns the unsigned byte difference at the first mismatch, or 0 if n is 0 or all bytes match.
int fn_00869330(const unsigned char* s1, const unsigned char* s2, unsigned int n) {
    if (n == 0) {
        return 0;
    }
    for (unsigned int i = 0; i < n; ++i) {
        if (s1[i] != s2[i]) {
            return static_cast<int>(s1[i]) - static_cast<int>(s2[i]);
        }
    }
    return 0;
}
} // namespace lift_00869330

// [0x00869F90]
namespace lift_00869F90 {
// @name sub_00869F90
// @summary Word-wise subtract-with-borrow over a uint32 array; returns final borrow flag (0/1). Returns 0 when count == 0.

uint32_t sub_00869F90(uint32_t* dst, const uint32_t* src1, const uint32_t* src2, uint32_t count) {
    uint32_t prev = 0;
    if (count == 0) {
        return 0;
    }
    do {
        uint32_t a = *src1++;
        uint32_t t = a - prev;
        uint32_t result;
        if (t == 0xFFFFFFFFu) {
            uint32_t b = *src2;
            result = t - b;
            // prev unchanged on this path
        } else {
            uint32_t b = *src2;
            result = t - b;
            uint32_t nb = 0xFFFFFFFFu - b;
            prev = (nb < result) ? 1u : 0u;
        }
        *dst++ = result;
        ++src2;
        --count;
    } while (count != 0);
    return prev;
}
} // namespace lift_00869F90

// [0x0086AEB0] sub_0086AEB0 (80 bytes)
namespace lift_0086AEB0 {
// @name CompareDwordArraysReverse
// @summary Compares two dword arrays from the last element backwards; returns 1 if a is greater, -1 if less, 0 if equal or count is zero. The second array base and the count are both taken from arg2 (the same stack slot is loaded as both count and base pointer in the original).
int32_t fn_0086AEB0(const uint32_t* a, uint32_t arg2) {
    const uint32_t count = arg2;
    if (count == 0) {
        return 0;
    }

    const uint32_t* b = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(arg2));
    for (uint32_t i = count; i-- > 0;) {
        const uint32_t x = a[i];
        const uint32_t y = b[i];
        if (x > y) {
            return 1;
        }
        if (x < y) {
            return -1;
        }
    }
    return 0;
}
} // namespace lift_0086AEB0

// [0x0086F8A0]
namespace lift_0086F8A0 {
// @name ReadFiveDwordsMasked
// @summary Reads 5 dwords through the read callback into out[0..4], then clears the top two bits of out[0].
// @field out +0x00 u32 field_0x00
// @field out +0x04 u32 field_0x04
// @field out +0x08 u32 field_0x08
// @field out +0x0C u32 field_0x0C
// @field out +0x10 u32 field_0x10

extern void (*mem_00AC4A94)(void* dst, uint32_t size);

void ReadFiveDwordsMasked(uint32_t* out) {
    uint32_t tmp = 0;
    for (int16_t i = 0; i < 5; ++i) {
        if (mem_00AC4A94 != nullptr) {
            mem_00AC4A94(&tmp, 4);
        }
        out[i] = tmp;
    }
    out[0] &= 0x3fffffffu;
}
} // namespace lift_0086F8A0

// [0x0086D110]
namespace lift_0086D110 {
// @name Buffer::RebuildIfFlagged
// @class Buffer
// @summary If flag bit 0 at +0xC is set, allocates a zeroed block of +0x8 bytes, copies the old block into it, stores the new pointer at +0x4 and toggles the flag bit; returns 0, or -2 if allocation fails.
// @field Buffer +0x04 uint32_t field_0x04
// @field Buffer +0x08 uint32_t field_0x08
// @field Buffer +0x0C uint32_t field_0x0C

// GlobalAllocZeroFlags clone: allocates zeroed memory of `size` bytes, returns handle/pointer or 0.
extern uint32_t ext_008596E0(uint32_t size);
// copyMemoryDwordThenBytes: copies n bytes (dwords first, then remainder) and returns dst.
extern void* ext_00859780(void* dst, const void* src, size_t n);

int32_t Buffer_RebuildIfFlagged(void* self) {
    if ((lift_field<uint32_t>(self, 0x0C) & 1u) == 0) {
        return 0;
    }

    uint32_t newBlock = ext_008596E0(lift_field<uint32_t>(self, 0x08));
    if (newBlock == 0) {
        return -2;
    }

    ext_00859780(reinterpret_cast<void*>(static_cast<uintptr_t>(newBlock)),
                 reinterpret_cast<const void*>(static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x04))),
                 lift_field<uint32_t>(self, 0x08));

    uint32_t flags = lift_field<uint32_t>(self, 0x0C);
    flags ^= 1u;
    lift_field<uint32_t>(self, 0x04) = newBlock;
    lift_field<uint32_t>(self, 0x0C) = flags;
    return 0;
}
} // namespace lift_0086D110

// [0x0086AF80] sub_0086AF80 (80 bytes)
namespace lift_0086AF80 {
// @name AddDwordArrayWithCarry
// @summary Adds two uint32 arrays element-wise with a rippling carry (dst[i] = a[i] + b[i] + carry); returns the final carry (0 or 1), or 0 when count is 0.
uint32_t fn_0086AF80(uint32_t* dst, const uint32_t* a, const uint32_t* b, uint32_t count) {
    uint32_t carry = 0;
    if (count == 0) {
        return 0;
    }
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t sum = a[i] + carry;
        if (sum < carry) {
            // a[i] + carry overflowed (a[i] == 0xFFFFFFFF, carry == 1); the
            // result is just b[i] and the carry out stays set.
            dst[i] = b[i];
            carry = 1;
        } else {
            uint32_t total = sum + b[i];
            carry = (total < b[i]) ? 1u : 0u;
            dst[i] = total;
        }
    }
    return carry;
}
} // namespace lift_0086AF80

// [0x0086AE50] sub_0086AE50 (81 bytes)
namespace lift_0086AE50 {
// @name BitsetBitLength
// @summary Returns 1 + index of the highest set bit in a uint32 word array (0 if count==0 or all words are zero).
uint32_t fn_0086AE50(const uint32_t* words, uint32_t count) {
    if (count == 0) {
        return 0;
    }

    // Scan down from the top word for the highest nonzero word.
    uint32_t k = count;
    while (k > 0 && words[k - 1] == 0) {
        --k;
    }
    if (k == 0) {
        return 0;
    }

    // Bit length of the top nonzero word (number of bits up to and including its MSB).
    uint32_t top = words[k - 1];
    uint32_t bits = static_cast<uint32_t>(std::bit_width(top));

    return (k - 1) * 32u + bits;
}
} // namespace lift_0086AE50

// [0x0086A1E0] sub_0086A1E0 (93 bytes)
namespace lift_0086A1E0 {
// @name MultiWordShiftLeft
// @summary Shifts a little-endian array of uint32 words left by 0..31 bits in place (or to dst), returning the bits shifted out of the top word.
// (no member class; no fields accessed)
uint32_t fn_0086A1E0(uint32_t* dst, const uint32_t* src, uint32_t shift, uint32_t count) {
    if (shift >= 32 || count == 0) {
        return 0;
    }
    uint32_t carry = 0;
    for (uint32_t i = 0; i < count; ++i) {
        const uint32_t word = src[i];
        dst[i] = (word << shift) | carry;
        carry = (shift != 0) ? (word >> (32 - shift)) : 0;
    }
    return carry;
}
} // namespace lift_0086A1E0

// [0x0086FF80]
namespace lift_0086FF80 {
// @name ReadBigEndianPairToDwords
// @summary Reads 8 bytes from src and stores them as two big-endian uint32 values at dst[0] and dst[1]; returns dst + 1.
uint32_t* __cdecl ReadBigEndianPairToDwords(uint32_t* dst, const uint8_t* src) {
    uint32_t hi = (static_cast<uint32_t>(src[0]) << 24) |
                  (static_cast<uint32_t>(src[1]) << 16) |
                  (static_cast<uint32_t>(src[2]) << 8) |
                  static_cast<uint32_t>(src[3]);
    dst[0] = hi;

    uint32_t lo = (static_cast<uint32_t>(src[4]) << 24) |
                  (static_cast<uint32_t>(src[5]) << 16) |
                  (static_cast<uint32_t>(src[6]) << 8) |
                  static_cast<uint32_t>(src[7]);
    dst[1] = lo;

    return dst + 1;
}
} // namespace lift_0086FF80

// [0x00860E90]
namespace lift_00860E90 {
extern const char* mem_00AB9650;

// @name bytesToHex
// @summary Converts a byte buffer of given length into a null-terminated hex string.
void __cdecl sub_00860E90(char* dst, const uint8_t* src, int32_t len) {
    int32_t out_idx = 0;
    if (len > 0) {
        for (int32_t i = 0; i < len; ++i) {
            uint8_t byte = src[i];
            const char* hex_table = mem_00AB9650;
            dst[out_idx] = hex_table[(byte >> 4) & 0xF];
            dst[out_idx + 1] = hex_table[byte & 0xF];
            out_idx += 2;
        }
    }
    dst[out_idx] = '\0';
}
} // namespace lift_00860E90

// [0x00860EF0]
namespace lift_00860EF0 {
// @name appendDecimalU8
// @summary Appends the decimal text of an unsigned byte (no leading zeros, "0" for zero) to dst via strcat; returns dst.

extern char* ext_0085E9E0(char* dst, const char* src);

char* fn_00860EF0(char* dst, std::uint8_t value) {
    char buf[4];
    unsigned v = value;
    int n = 0;

    unsigned hundreds = v / 100u;
    if (hundreds != 0) {
        buf[n++] = static_cast<char>('0' + hundreds);
        v %= 100u;
    }

    unsigned tens = v / 10u;
    if (tens != 0 || n != 0) {
        buf[n++] = static_cast<char>('0' + tens);
    }

    buf[n++] = static_cast<char>('0' + v % 10u);
    buf[n] = '\0';

    return ext_0085E9E0(dst, buf);
}
} // namespace lift_00860EF0

// [0x00862904] sub_00862904 (108 bytes)
namespace lift_00862904 {
// @name switchCaseIndexTable_00862904
// @summary 108-byte lookup table, not code; entry for index 0x00..0x5F selects the case slot in the jump table at 0x008628B4. Bytes 0x60..0x6B are alignment padding.

static const uint8_t kSwitchCaseIndexTable[108] = {
    // 0x00
    0x00, 0x01, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x02, 0x03,
    // 0x10
    0x13, 0x04, 0x04, 0x13, 0x13, 0x13, 0x13, 0x13,
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
    // 0x20
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
    // 0x30
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
    // 0x40
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x05, 0x06,
    // 0x50
    0x07, 0x08, 0x09, 0x0a, 0x0b, 0x13, 0x0c, 0x0d,
    0x0e, 0x0f, 0x10, 0x11, 0x13, 0x13, 0x13, 0x12,
    // 0x60 (padding)
    0x05, 0x00, 0x00, 0x00, 0x00, 0x8d, 0xa4, 0x24,
    0x00, 0x00, 0x00, 0x00,
};

static_assert(sizeof(kSwitchCaseIndexTable) == 108, "table must match 108-byte VA range");

// Returns the table entry for `index`. The original caller guards with
// `cmp edx, 0x5f; ja <default>`, so only 0x00..0x5F are reachable.
uint8_t fn_00862904(uint32_t index) {
    if (index >= sizeof(kSwitchCaseIndexTable)) {
        return 0x13;
    }
    return kSwitchCaseIndexTable[index];
}
} // namespace lift_00862904

// [0x0086A240]
namespace lift_0086A240 {
// @name shiftRightWords
// @summary Right-shifts an array of 32-bit words by 0..31 bits and returns the bits shifted out.
uint32_t sub_0086A240(uint32_t* dst, const uint32_t* src, uint32_t shift, uint32_t count) {
    if (shift >= 32 || count == 0) {
        return 0;
    }

    uint32_t carry = 0;
    uint32_t inv_shift = 32 - shift;
    for (uint32_t i = count; i > 0; --i) {
        uint32_t val = src[i - 1];
        dst[i - 1] = (val >> shift) | carry;
        carry = (shift != 0) ? (val << inv_shift) : 0;
    }
    return carry;
}
} // namespace lift_0086A240

// [0x00860800]
namespace lift_00860800 {
// @name configureBroadcastNonBlockingSocket
// @summary Enable broadcast and non-blocking mode on a socket, closing it on failure.


extern uint32_t mem_00BC70C0; // setsockopt
extern uint32_t mem_00BC7100; // closesocket
extern uint32_t mem_00BC672C; // ioctlsocket
extern uint32_t mem_00AB9608;
extern uint32_t mem_00AB960C;

using FnSetSockOpt = int32_t(__stdcall*)(uint32_t s, int32_t level, int32_t optname, const void* optval, int32_t optlen);
using FnCloseSocket = int32_t(__stdcall*)(uint32_t s);
using FnIoctlSocket = int32_t(__stdcall*)(uint32_t s, uint32_t cmd, uint32_t* argp);

uint32_t sub_00860800(uint32_t s) {
    uint32_t optval = 1;
    auto setsockopt_fn = reinterpret_cast<FnSetSockOpt>(static_cast<uintptr_t>(mem_00BC70C0));
    if (setsockopt_fn(s, 0xffff, 0x20, &optval, 4) == -1) {
        auto closesocket_fn = reinterpret_cast<FnCloseSocket>(static_cast<uintptr_t>(mem_00BC7100));
        closesocket_fn(s);
        return 1;
    }

    auto ioctlsocket_fn = reinterpret_cast<FnIoctlSocket>(static_cast<uintptr_t>(mem_00BC672C));
    ioctlsocket_fn(s, 0x8004667eu, &mem_00AB9608);
    setsockopt_fn(s, 0x3e8, 0x4000, &mem_00AB960C, 4);
    return 0;
}
} // namespace lift_00860800

// [0x008671C0]
namespace lift_008671C0 {
extern void* ext_0085D560(uint32_t uBytes);
extern uintptr_t mem_00924224;

// @name GetEnvironmentVariableAllocA
// @summary Queries the length of an environment variable, allocates a buffer via LocalAlloc, and retrieves its value.
char* fn_008671C0(const char* name) {
    using GetEnvironmentVariableAFn = uint32_t(__stdcall*)(const char* lpName, char* lpBuffer, uint32_t nSize);
    auto get_env_var = reinterpret_cast<GetEnvironmentVariableAFn>(mem_00924224);

    char dummy = 0;
    uint32_t len = get_env_var(name, &dummy, 0);
    if (len == 0) {
        return nullptr;
    }

    uint32_t size = len + 1;
    char* buf = static_cast<char*>(ext_0085D560(size));
    if (buf == nullptr) {
        return nullptr;
    }

    if (get_env_var(name, buf, size) == 0) {
        return nullptr;
    }

    return buf;
}
} // namespace lift_008671C0

// [0x00865960]
namespace lift_00865960 {
// @name blockCipherEncrypt
// @summary Applies a 12-round 64-bit block cipher transform using a 26-word key schedule.


void __cdecl sub_00865960(uint32_t* state, const uint32_t* key) {
    state[1] += key[0];
    state[0] += key[1];

    const uint32_t* k = key + 2;
    for (int round = 12; round != 0; --round) {
        uint32_t s1 = (state[0] >> 4) & 0x1fu;
        uint32_t t1 = std::rotl(state[1] ^ state[0], static_cast<int>(s1)) - k[0];
        state[1] = t1;

        uint32_t s2 = (t1 >> 7) & 0x1fu;
        uint32_t t0 = std::rotl(state[0] ^ t1, static_cast<int>(s2)) + k[1];
        state[0] = t0;

        k += 2;
    }
}
} // namespace lift_00865960

// [0x00869EC0]
namespace lift_00869EC0 {
// @name uint32ArrayToBigEndianBytes
// @summary Converts an array of uint32_t words (little-endian word order) into a big-endian byte buffer, zero-padding leading bytes.


void sub_00869EC0(uint8_t* dst, int32_t dst_len, const uint32_t* src, uint32_t src_count) {
    int32_t idx = dst_len - 1;
    uint32_t word_idx = 0;

    if (src_count > 0) {
        while (idx >= 0) {
            uint32_t val = src[word_idx];
            for (uint32_t shift = 0; shift < 32; shift += 8) {
                uint8_t byte = static_cast<uint8_t>(val >> shift);
                dst[idx] = byte;
                idx--;
                if (idx < 0) {
                    break;
                }
            }
            word_idx++;
            if (word_idx >= src_count) {
                break;
            }
        }
    }

    while (idx >= 0) {
        dst[idx] = 0;
        idx--;
    }
}
} // namespace lift_00869EC0

// [0x0086D0A0]
namespace lift_0086D0A0 {
extern void* ext_00859780(void* dst, const void* src, uint32_t n);

// @name memStreamRead
// @summary Reads up to count elements of size elemSize from a memory stream into dst, clamping to available bytes and advancing stream position.
// @field MemStream +0x00 uint8_t* data (or MemStream* indirect descriptor when flags & 0x4)
// @field MemStream +0x04 uint32_t size
// @field MemStream +0x08 uint32_t pos
// @field MemStream +0x14 uint8_t flags
uint32_t fn_0086D0A0(void* dst, uint32_t elemSize, uint32_t count, void* stream) {
    uint8_t* s = static_cast<uint8_t*>(stream);
    uint8_t* bufDesc = s;
    if ((s[0x14] & 0x4) != 0) {
        bufDesc = *reinterpret_cast<uint8_t**>(s);
    }

    uint32_t pos = *reinterpret_cast<uint32_t*>(s + 0x08);
    uint32_t remaining = *reinterpret_cast<uint32_t*>(bufDesc + 0x04) - pos;
    uint32_t requestedBytes = elemSize * count;
    uint32_t actualCount = count;
    if (requestedBytes > remaining) {
        actualCount = remaining / elemSize;
    }

    uint32_t bytesToCopy = actualCount * elemSize;
    uint8_t* src = *reinterpret_cast<uint8_t**>(bufDesc) + pos;
    ext_00859780(dst, src, bytesToCopy);
    *reinterpret_cast<uint32_t*>(s + 0x08) = pos + bytesToCopy;

    return actualCount;
}
} // namespace lift_0086D0A0

// [0x008665CC] sub_008665CC (20 bytes)
namespace lift_008665CC {
// @name DataBlock_008665CC
// @summary 20-byte constant data block (misdecoded as code); no executable semantics recovered
// Original bytes: 00 01 04 04 04 04 04 02 04 04 04 04 04 03 8D 64 24 00
// Disassembly is a sequence of "add al, imm8" pairs followed by an "lea esp,[esp]" nop,
// which is the signature of a data table, not a function body.
static const uint8_t kDataBlock_008665CC[20] = {
    0x00, 0x01, 0x04, 0x04, 0x04, 0x04, 0x04, 0x02,
    0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x8D, 0x64,
    0x24, 0x00, 0x00, 0x00,
};

// Accessor for the 20-byte block; the only behavior the original bytes support.
const uint8_t* fn_008665CC() {
    return kDataBlock_008665CC;
}
} // namespace lift_008665CC

// [0x0086AF30]
namespace lift_0086AF30 {
// @name copyDwords
// @summary Copies count 32-bit dwords from src to dst.


extern uint32_t ext_008599F0(const void* s);
extern void* __cdecl ext_0086CCC0(void* self);

extern void __cdecl fn_0086AF30(uint32_t* dst, const uint32_t* src, uint32_t count) {
    (void)&ext_008599F0;
    (void)&ext_0086CCC0;
    while (count != 0) {
        *dst++ = *src++;
        --count;
    }
}
} // namespace lift_0086AF30

// [0x00864F30]
namespace lift_00864F30 {
// @name initStatusRecordAndClearGlobal
// @summary Initializes an 8-byte status record with 0xCF and clears mem_00AB98EC, returning 0.


extern uint32_t mem_00AB98EC;
extern uint32_t ext_008596E0(uint32_t size);
extern void* ext_00859780(void* dst, const void* src, size_t n);

uint32_t fn_00864F30(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint16_t* outRecord) {
    (void)arg1;
    (void)arg2;
    (void)arg3;
    (void)arg4;
    (void)ext_008596E0;
    (void)ext_00859780;

    outRecord[0] = 0x00CF;
    outRecord[1] = 0;
    outRecord[2] = 0;
    outRecord[3] = 0;
    mem_00AB98EC = 0;
    return 0;
}
} // namespace lift_00864F30

// [0x00867360]
namespace lift_00867360 {
extern const uint32_t mem_00AC4A94; // 0x00AC4A94 (.data u32 0x0086F870)

// @name ParseDecimalPrefix_00867360
// @summary Parses leading ASCII decimal digits of a string into a uint32; stops at the first non-digit.
uint32_t ParseDecimalPrefix_00867360(const char* s) {
    (void)&mem_00AC4A94; // original asm lists this global; the code never reads it
    uint32_t result = 0;
    const uint8_t* p = reinterpret_cast<const uint8_t*>(s);
    uint8_t c = p[0];
    while (c >= '0' && c <= '9') {
        result = result * 10u + static_cast<uint32_t>(c - '0');
        ++p;
        c = *p;
    }
    return result;
}
} // namespace lift_00867360

// [0x0086BF40]
namespace lift_0086BF40 {
// @name checkEmptyArrayAndFlag
// @summary Checks that all 19 dword entries at +0x00 are zero and field_0x4c equals 1
// @field Unknown +0x00 uint32_t[19] entries
// @field Unknown +0x4c uint32_t flag


extern uint16_t sub_0086BF40(const uint8_t* obj) {
    uint32_t flag = lift_field<uint32_t>(obj, 0x4c);
    if (flag > 1) {
        return 0;
    }

    for (int16_t i = 0; i < 0x13; ++i) {
        if (lift_field<uint32_t>(obj, static_cast<size_t>(i) * 4) != 0) {
            return 0;
        }
    }

    return flag == 1 ? 1 : 0;
}
} // namespace lift_0086BF40

// [0x0086B1C0]
namespace lift_0086B1C0 {
extern void* ext_0085D560(uint32_t size);
extern uint32_t mem_00924248;
extern uint32_t mem_00924210;
extern uint32_t mem_00BC70E0;
extern uint32_t mem_00BC70BC;
extern uint32_t mem_00BC70F4;
extern uint32_t mem_00BC6410;
extern uint32_t mem_00BC6578;

// @name RotateRight157Bit
// @summary Rotates a 5-dword big-endian-ordered value right by one bit; the bit shifted out of the last dword is reinserted at bit 29 of the first dword.
// @field uint32_t +0x00 uint32_t word0
// @field uint32_t +0x04 uint32_t word1
// @field uint32_t +0x08 uint32_t word2
// @field uint32_t +0x0C uint32_t word3
// @field uint32_t +0x10 uint32_t word4
void sub_0086B1C0(uint32_t* p)
{
    // References kept from the original symbol map; not used by this routine's logic.
    (void)&ext_0085D560; (void)&mem_00924248; (void)&mem_00924210; (void)&mem_00BC70E0;
    (void)&mem_00BC70BC; (void)&mem_00BC70F4; (void)&mem_00BC6410; (void)&mem_00BC6578;
    uint32_t carry = p[0] & 1u;
    p[0] >>= 1;
    for (int i = 1; i < 5; ++i) {
        uint32_t next = p[i] & 1u;
        p[i] = (p[i] >> 1) | (carry << 31);
        carry = next;
    }
    if (carry) {
        p[0] |= 0x20000000u;
    }
}
} // namespace lift_0086B1C0

// [0x0086CFB0]
namespace lift_0086CFB0 {
extern uint32_t ext_008596E0(uint32_t size);

// @name AllocFlaggedRecord
// @summary Allocates a 16-byte record, tags it (0xFE, 1), zeroes two dwords, and sets +0xC to 1 if the argument is 0 else 0; returns the pointer or 0 on allocation failure.
// @field Unknown +0x00 uint8_t field_0x00
// @field Unknown +0x01 uint8_t field_0x01
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x0C uint32_t field_0x0c
uint32_t AllocFlaggedRecord(uint32_t arg) {
    uint32_t eax = ext_008596E0(0x10);
    if (eax == 0) {
        return 0;
    }

    uint8_t* base = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(eax));
    *reinterpret_cast<uint8_t*>(base + 0x00) = 0xFE;
    *reinterpret_cast<uint8_t*>(base + 0x01) = 1;
    *reinterpret_cast<uint32_t*>(base + 0x04) = 0;
    *reinterpret_cast<uint32_t*>(base + 0x08) = 0;
    *reinterpret_cast<uint32_t*>(base + 0x0C) = (arg == 0) ? 1u : 0u;
    return eax;
}
} // namespace lift_0086CFB0
