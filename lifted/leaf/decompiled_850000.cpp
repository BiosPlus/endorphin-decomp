// Lifted C++ translation unit: lifted/leaf/decompiled_850000.cpp
#include "lift_compat.h"
#include <cstdio>
#include <cstring>
#include <cstdint>

// [0x0085E04B] sub_0085E04B (5 bytes)
// @name sub_0085E04B
// @summary Five-byte no-op: `add eax, 0` (opcode 05 with imm32 0), which leaves the register value unchanged; no observable effect beyond flags.
void fn_0085E04B(void) {
    // Single instruction `add eax, 0x0` (05 00 00 00 00). Adding zero to eax
    // does not change any value, so there is no portable C++ statement with a
    // visible effect. Kept as an empty function to preserve the address slot.
}

// [0x0085D85B] sub_0085D85B (5 bytes)
// @name sub_0085D85B
// @summary No-op: "add eax, 0" (eax unchanged; only flags are touched)
void fn_0085D85B(void) {
    // add eax, 0 leaves eax unchanged. Its only effect is on the flags,
    // which C++ cannot observe portably, so there is nothing to emit.
}

// [0x0085FC0B] sub_0085FC0B (5 bytes)
// @name sub_0085FC0B
// @summary No-op: `add eax, 0` (opcode 05 with imm32 0), which leaves eax unchanged; only flags are touched.
void fn_0085FC0B(void) {
    // Single instruction `add eax, 0x0` (05 00 00 00 00). Adding zero to eax
    // does not change any value, so there is no portable C++ statement with a
    // visible effect. Kept as an empty function to preserve the address slot.
}

// [0x0085D504] sub_0085D504 (12 bytes)
// @name sub_0085D504
// @summary No-op stub (add eax, 0).
void fn_0085D504(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0085D554] sub_0085D554 (12 bytes)
// @name sub_0085D554
// @summary No-op stub (add eax, 0).
void fn_0085D554(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0085E024] sub_0085E024 (12 bytes)
// @name sub_0085E024
// @summary No-op stub (add eax, 0).
void fn_0085E024(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0085FA64] sub_0085FA64 (12 bytes)
// @name sub_0085FA64
// @summary No-op stub (add eax, 0).
void fn_0085FA64(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0085FCD4] sub_0085FCD4 (12 bytes)
// @name sub_0085FCD4
// @summary No-op stub (add eax, 0).
void fn_0085FCD4(void) {
    // No-op stub (add eax, 0x0).
}

// [0x0085BFE0]
namespace lift_0085BFE0 {
// @name GlobalFreeForwarder_0085BFE0
// @summary Forwards its single stack argument (an HGLOBAL) to ext_00859730 (GlobalFree wrapper) and returns the result.

extern HGLOBAL ext_00859730(HGLOBAL hMem);

uint32_t __cdecl fn_0085BFE0(uint32_t hMem) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(
        ext_00859730(reinterpret_cast<HGLOBAL>(static_cast<uintptr_t>(hMem)))));
}
} // namespace lift_0085BFE0

// [0x0085D560] sub_0085D560 (16 bytes)
namespace lift_0085D560 {
extern void* ext_LocalAlloc(UINT uFlags, SIZE_T uBytes);

// @name LocalAllocZeroFlags
// @summary Allocates uBytes via LocalAlloc with uFlags = 0 and returns the handle.
void* fn_0085D560(SIZE_T uBytes) {
    return ext_LocalAlloc(0, uBytes);
}
} // namespace lift_0085D560

// [0x00859E50] sub_00859E50 (32 bytes)
namespace lift_00859E50 {
// @name ResolveDwordThroughFlaggedIndirection
// @summary Returns the dword at p+0x00; if bit 0x04 of the byte at p+0x14 is set, returns the dword that value points to instead.
// @field Unknown +0x00 DWORD ptrAt00
// @field Unknown +0x14 BYTE flags14
uint32_t ResolveDwordThroughFlaggedIndirection(void* self) {
    uint32_t value = lift_field<uint32_t>(self, 0x00);
    uint8_t flags = lift_field<uint8_t>(self, 0x14);
    if (flags & 0x04) {
        value = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(value));
    }
    return value;
}
} // namespace lift_00859E50

// [0x00857470] sub_00857470 (32 bytes)
namespace lift_00857470 {
extern uintptr_t mem_00AB86EC;

// @name dispatchThroughGlobalObjectSlot0C
// @summary If the global object pointer is set, call its +0x0C function pointer with one 32-bit argument.
// @field UnknownObject +0x0C void* field_0x0C
using ObjSlot0CFn = void(__cdecl*)(uint32_t);

void fn_00857470(uint32_t arg) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(mem_00AB86EC);
    if (obj == nullptr) {
        return;
    }
    ObjSlot0CFn fn = lift_field<ObjSlot0CFn>(obj, 0x0C);
    fn(arg);
}
} // namespace lift_00857470

// [0x00857420] sub_00857420 (32 bytes)
namespace lift_00857420 {
extern void* mem_00AB86EC;

// @name ForwardTwoArgsToGlobalObjectSlot8
// @summary Calls the function pointer at +0x08 of the global object mem_00AB86EC with two cdecl args; returns -1 if the global is null.
// @field Unknown +0x08 int (*)(int, int) field_0x08
int fn_00857420(int a, int b) {
    using Fn = int (*)(int, int);

    void* obj = mem_00AB86EC;
    if (obj == nullptr) {
        return -1;
    }

    Fn fn = lift_field<Fn>(obj, 0x08);
    return fn(a, b);
}
} // namespace lift_00857420

// [0x00859E70] sub_00859E70 (32 bytes)
namespace lift_00859E70 {
// @name FindNodeByKeyInChain
// @summary Walks a singly linked node chain (next pointer at +0x1C) from head and returns the first node whose DWORD key at +0x00 equals the given key, or NULL if none match or head is NULL.
void* fn_00859E70(void* head, DWORD key) {
    void* node = head;
    while (node != nullptr) {
        if (lift_field<DWORD>(node, 0x00) == key) {
            return node;
        }
        node = lift_field<void*>(node, 0x1C);
    }
    return nullptr;
}
} // namespace lift_00859E70

// [0x0085DA40] sub_0085DA40 (32 bytes)
namespace lift_0085DA40 {
// @name NoOpReturn_0085DA40
// @summary Empty stub: returns immediately without touching state; trailing bytes are alignment padding.
void fn_0085DA40(void* self) {
    (void)self;
}
} // namespace lift_0085DA40

// [0x0085E1F0] sub_0085E1F0 (32 bytes)
namespace lift_0085E1F0 {
// @name strlen
// @summary Returns the length of a NUL-terminated byte string (equivalent to C strlen).
// (No struct fields are accessed; the argument is a plain character pointer.)
uint32_t fn_0085E1F0(const char* str) {
    const char* p = str;
    while (*p != '\0') {
        ++p;
    }
    return static_cast<uint32_t>(p - str);
}
} // namespace lift_0085E1F0

// [0x0085D530] sub_0085D530 (36 bytes)
namespace lift_0085D530 {
// @name copyBytesForward
// @summary Forward byte-by-byte copy of `count` bytes from src to dst (cdecl, no return value).
void fn_0085D530(uint8_t* dst, const uint8_t* src, uint32_t count) {
    for (uint32_t i = 0; i < count; ++i) {
        dst[i] = src[i];
    }
}
} // namespace lift_0085D530

// [0x008573F0]
namespace lift_008573F0 {
extern uint32_t mem_00AB86EC;

// @name dispatchCallback0x4
// @summary Dispatches a 3-argument cdecl callback at offset +0x4 of the global table mem_00AB86EC, or returns -1 if null.
int32_t sub_008573F0(uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint32_t table = mem_00AB86EC;
    if (table == 0) {
        return -1;
    }
    using Fn = int32_t(__cdecl*)(uint32_t, uint32_t, uint32_t);
    Fn fn = reinterpret_cast<Fn>(*reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(table) + 0x4));
    return fn(arg1, arg2, arg3);
}
} // namespace lift_008573F0

// [0x00856F00]
namespace lift_00856F00 {
// @name initStruct24
// @summary Zeroes a 16-byte buffer at +0x04, clears field +0x14, sets field +0x00 to 0x100, and returns 0.


extern void __cdecl ext_008692F0(uint8_t* dst, uint32_t value, uint32_t count);

extern uint32_t __cdecl fn_00856F00(uint32_t* obj) {
    uint8_t* base = reinterpret_cast<uint8_t*>(obj);
    ext_008692F0(base + 0x04, 0, 0x10);
    *reinterpret_cast<uint32_t*>(base + 0x14) = 0;
    *reinterpret_cast<uint32_t*>(base + 0x00) = 0x100;
    return 0;
}
} // namespace lift_00856F00

// [0x00859A20]
namespace lift_00859A20 {
uint8_t mem_read8(uint32_t addr);
void mem_write8(uint32_t addr, uint8_t val);

// @name strcat_impl
// @summary Appends a null-terminated source string to the end of a destination string and returns the destination pointer.

uint32_t sub_00859A20(uint32_t dst_addr, uint32_t src_addr) {
    uint32_t ecx = dst_addr;
    if (mem_read8(ecx) != 0) {
        uint8_t dl;
        do {
            dl = mem_read8(ecx + 1);
            ecx++;
        } while (dl != 0);
    }

    uint32_t esi = src_addr;
    ecx++;
    uint8_t dl = mem_read8(esi);
    esi++;
    mem_write8(ecx - 1, dl);
    if (dl != 0) {
        do {
            dl = mem_read8(esi);
            mem_write8(ecx, dl);
            ecx++;
            esi++;
        } while (dl != 0);
    }

    return dst_addr;
}
} // namespace lift_00859A20

// [0x0085BF40]
namespace lift_0085BF40 {
// @name findEntryValueByKey
// @summary Linearly searches an array of 8-byte key-value pairs for a matching 32-bit key and returns its 32-bit value, or 0 if not found.
// @field Table +0x00 uint32_t count
// @field Table +0x04 uint32_t entriesPtr


extern uint32_t mem_read32(uint32_t addr);

uint32_t sub_0085BF40(uint32_t tablePtr, uint32_t key) {
    uint32_t count = mem_read32(tablePtr + 0x0);
    if (count == 0) {
        return 0;
    }

    uint32_t entriesPtr = mem_read32(tablePtr + 0x4);
    for (uint32_t i = 0; i < count; ++i) {
        uint32_t entryAddr = entriesPtr + i * 8;
        if (mem_read32(entryAddr) == key) {
            return mem_read32(entryAddr + 0x4);
        }
    }

    return 0;
}
} // namespace lift_0085BF40

// [0x0085F7B0]
namespace lift_0085F7B0 {
// @name memcmp
// @summary Compare up to n bytes of two memory buffers and return the unsigned byte difference at the first mismatch


int32_t __cdecl sub_0085F7B0(const void* buf1, const void* buf2, uint32_t count) {
    if (count == 0) {
        return 0;
    }

    const uint8_t* p1 = static_cast<const uint8_t*>(buf1);
    const uint8_t* p2 = static_cast<const uint8_t*>(buf2);
    uint32_t remaining = count - 1;

    while (remaining != 0) {
        if (*p1 != *p2) {
            break;
        }
        ++p1;
        ++p2;
        --remaining;
    }

    return static_cast<int32_t>(*p1) - static_cast<int32_t>(*p2);
}
} // namespace lift_0085F7B0

// [0x00858B60] sub_00858B60 (48 bytes)
namespace lift_00858B60 {
// @name sub_00858B60
// @summary Auto-lifted identical-shape clone of 0x00782B30 (selectStaticAddressByIndex).
namespace lift_00782B30 {
// @name selectStaticAddressByIndex
// @summary Maps selector 0/1/2 to one of three static addresses; any other value yields 0.
uint32_t __cdecl fn_00858B60(uint32_t selector) {
    switch (selector) {
        case 0:  return 0x4u;
        case 1:  return 0x40u;
        case 2:  return 0x28u;
        default: return 0u;
    }
}
} // namespace lift_00782B30
} // namespace lift_00858B60

// [0x008597B0]
namespace lift_008597B0 {
// @name strncmpSignedChar
// @summary Compares up to n chars of two strings as signed bytes; returns the first signed difference, or 0 if equal or n is 0.
int strncmpSignedChar(const char* s1, const char* s2, std::size_t n) {
    while (n != 0) {
        const int a = static_cast<int>(static_cast<signed char>(*s1));
        const int b = static_cast<int>(static_cast<signed char>(*s2));
        const int diff = a - b;
        if (diff != 0) {
            return diff;
        }
        ++s1;
        ++s2;
        --n;
    }
    return 0;
}
} // namespace lift_008597B0

// [0x00859780] sub_00859780 (48 bytes)
namespace lift_00859780 {
// @name copyMemoryDwordThenBytes
// @summary Copies n bytes from src to dst (whole dwords first, then remaining bytes) and returns dst.
void* fn_00859780(void* dst, const void* src, size_t n) {
    size_t dwordBytes = (n >> 2) << 2;
    size_t tailBytes = n & 3;
    if (dwordBytes != 0) {
        std::memcpy(dst, src, dwordBytes);
    }
    if (tailBytes != 0) {
        std::memcpy(static_cast<uint8_t*>(dst) + dwordBytes,
                    static_cast<const uint8_t*>(src) + dwordBytes,
                    tailBytes);
    }
    return dst;
}
} // namespace lift_00859780

// [0x00857440] sub_00857440 (48 bytes)
namespace lift_00857440 {
extern uint32_t mem_00AB86EC;

// @name dispatchViaGlobalSlot18
// @class
// @summary If the global object pointer at mem_00AB86EC is non-null, calls its slot at +0x18 as a cdecl (a1, a2, a3) function and returns the result; otherwise returns -1.
// @field unknown +0x18 DWORD field_0x18
int fn_00857440(int a1, int a2, int a3) {
    uint32_t obj = mem_00AB86EC;
    if (obj == 0) {
        return -1;
    }
    using SlotFn = int(__cdecl*)(int, int, int);
    uint8_t* slot = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(obj)) + 0x18;
    SlotFn fn = *reinterpret_cast<SlotFn*>(slot);
    return fn(a1, a2, a3);
}
} // namespace lift_00857440

// [0x00859300] sub_00859300 (48 bytes)
namespace lift_00859300 {
// @name UnknownClass::clearFlagIfKeyMatches
// @class UnknownClass
// @summary If obj's flag bit0 is set, clear it when the key matches (following one indirection when flag bit2 is set); returns 0 on success, 0xD on key mismatch, 0 when bit0 is clear.
// @field UnknownClass +0x00 uint32_t field_0x00
// @field UnknownClass +0x14 uint32_t field_0x14
uint32_t fn_00859300(void* obj, uint32_t key) {
    // Bit 2 of flags at +0x14 means `obj` is a handle that points at the real object.
    if (lift_field<uint32_t>(obj, 0x14) & 0x4) {
        obj = lift_field<void*>(obj, 0x00);
    }

    uint32_t flags = lift_field<uint32_t>(obj, 0x14);
    if (!(flags & 0x1)) {
        return 0;
    }

    if (lift_field<uint32_t>(obj, 0x00) != key) {
        return 0xD;
    }

    lift_field<uint32_t>(obj, 0x14) = flags & ~static_cast<uint32_t>(0x1);
    return 0;
}
} // namespace lift_00859300

// [0x00859330]
namespace lift_00859330 {
// @name markFlagBit0AndGetHeadDword
// @summary If flag 0x04 at +0x14 is set, follow the pointer at +0x00; if bit 0 of the flag byte at +0x14 is clear, set it and return the dword at +0x00, otherwise return 0.
// @field Object +0x00 uint32_t field_0x00
// @field Object +0x14 uint32_t field_0x14
uint32_t fn_00859330(void* self) {
    void* obj = self;

    if (lift_field<uint8_t>(obj, 0x14) & 0x04) {
        obj = reinterpret_cast<void*>(static_cast<uintptr_t>(lift_field<uint32_t>(obj, 0x00)));
    }

    if (lift_field<uint8_t>(obj, 0x14) & 0x01) {
        return 0;
    }

    lift_field<uint32_t>(obj, 0x14) |= 0x01u;
    return lift_field<uint32_t>(obj, 0x00);
}
} // namespace lift_00859330

// [0x008599F0] sub_008599F0 (48 bytes)
namespace lift_008599F0 {
extern uint8_t ext_0086CCE0(const void* s);

// @name lookupStringOrLength
// @class UnknownClass
// @summary If ext_0086CCE0(s) returns 1, returns the DWORD at s+8; otherwise returns strlen(s).
// @field UnknownClass +0x08 uint32_t field_0x08
uint32_t fn_008599F0(const void* s) {
    if (ext_0086CCE0(s) == 1) {
        uint32_t value;
        std::memcpy(&value, static_cast<const uint8_t*>(s) + 0x08, sizeof(value));
        return value;
    }
    return static_cast<uint32_t>(std::strlen(static_cast<const char*>(s)));
}
} // namespace lift_008599F0

// [0x0085E9E0] sub_0085E9E0 (48 bytes)
namespace lift_0085E9E0 {
// @name strcat
// @summary Appends the NUL-terminated string src to the end of dst (strcat-equivalent); returns dst.
char* fn_0085E9E0(char* dst, const char* src) {
    char* end = dst;
    while (*end != '\0') {
        ++end;
    }
    char* out = end;
    const char* in = src;
    char c;
    do {
        c = *in++;
        *out++ = c;
    } while (c != '\0');
    return dst;
}
} // namespace lift_0085E9E0

// [0x0085D860] sub_0085D860 (48 bytes)
namespace lift_0085D860 {
// @name rotateDwordLeftByCount
// @summary Rotates the DWORD at *dst left by 1 bit, count times (count == 0 leaves it unchanged).
void fn_0085D860(uint32_t* dst, uint16_t count) {
    uint32_t value;
    std::memcpy(&value, dst, sizeof(value));
    for (uint16_t i = 0; i < count; ++i) {
        value = std::rotl(value, 1);
    }
    std::memcpy(dst, &value, sizeof(value));
}
} // namespace lift_0085D860

// [0x00859DD0] sub_00859DD0 (48 bytes)
namespace lift_00859DD0 {
// @name Unknown::ReadNextByteOrSentinel
// @class Unknown
// @summary Returns the byte at the cursor and advances it, or 0xFF00 when the cursor is at or past the buffer length. If flag bit 2 is set, the buffer header is reached through the pointer at +0x00.
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x14 uint8_t field_0x14
namespace lift_00859DD0 {

// Buffer header layout (object pointed to by +0x00 when flag bit 2 is set):
//   +0x00 uint8_t* data
//   +0x04 uint32_t length
uint32_t fn_00859DD0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint8_t flags = *(obj + 0x14);

    // Resolve the buffer header: indirect through *self when flag bit 2 is set.
    uint8_t* header = obj;
    if (flags & 0x04) {
        header = *reinterpret_cast<uint8_t**>(obj);
    }

    uint32_t cursor = *reinterpret_cast<uint32_t*>(obj + 0x08);
    uint32_t length = *reinterpret_cast<uint32_t*>(header + 0x04);

    if (cursor >= length) {
        return 0xFF00u;
    }

    uint8_t* data = *reinterpret_cast<uint8_t**>(header);
    uint32_t value = data[cursor];
    *reinterpret_cast<uint32_t*>(obj + 0x08) = cursor + 1;
    return value;
}

} // namespace lift_00859DD0
} // namespace lift_00859DD0

// [0x0085F700] sub_0085F700 (48 bytes)
namespace lift_0085F700 {
// Known callee 0x0085F730: sub_0085F730 (Empty function (returns immediately).)
extern void ext_0085F730();

// @name fn_0085F700_offsetCalls
// @summary Computes pointer+2 and pointer+0x0E and passes each to an empty callee (no observable effect).
void fn_0085F700(void* self) {
    // Original passes (self+2, 8) and (self+0xE, 0x18) to ext_0085F730.
    // The callee is empty and takes no arguments, so the calls have no effect.
    (void)self;
    ext_0085F730();
    ext_0085F730();
}
} // namespace lift_0085F700

// [0x0085D820] sub_0085D820 (59 bytes)
namespace lift_0085D820 {
extern const uint8_t mem_00ABB260[256];

// @name applyTableKeystream
// @summary XORs buf[4..count-1] with a 256-byte table keystream seeded by table[buf[2]].
void fn_0085D820(uint8_t* buf, int32_t count) {
    uint8_t idx = mem_00ABB260[buf[2]];
    for (int32_t i = 4; i < count; ++i) {
        buf[i] ^= mem_00ABB260[idx];
        ++idx;
    }
}
} // namespace lift_0085D820

// [0x0085C430] sub_0085C430 (61 bytes)
namespace lift_0085C430 {
// @name LookupStringRefById
// @summary Maps a small index (0..4) to a fixed string-table reference; returns 0 for out-of-range indices.
// NOTE: case order follows disassembly order (index 0 -> 0x99F0C0 ... index 4 -> 0x99F0F0); the jump table at 0x0085C470 was not verified.
uint32_t __stdcall fn_0085C430(uint32_t index) {
    switch (index) {
        case 0:  return 0x0099F0C0u;
        case 1:  return 0x0099F0B0u;
        case 2:  return 0x0099F0D0u;
        case 3:  return 0x0099F0E0u;
        case 4:  return 0x0099F0F0u;
        default: return 0u;
    }
}
} // namespace lift_0085C430

// [0x008596F0]
namespace lift_008596F0 {
// @name LocalBlockResize
// @summary Allocates, reallocates, or frees a LocalAlloc block depending on whether the handle and size arguments are zero.

uint32_t ext_LocalAlloc(uint32_t uFlags, uint32_t uBytes);
uint32_t ext_LocalFree(uint32_t hMem);
uint32_t ext_LocalReAlloc(uint32_t hMem, uint32_t uBytes, uint32_t uFlags);

// cdecl: (handle, size) -> handle
//   handle != 0, size != 0 : LocalReAlloc(handle, size, LMEM_MOVEABLE)
//   handle != 0, size == 0 : LocalFree(handle), return 0
//   handle == 0, size != 0 : LocalAlloc(0, size)
//   handle == 0, size == 0 : return 0
uint32_t __cdecl fn_008596F0(uint32_t handle, uint32_t size) {
    constexpr uint32_t kLmemMoveable = 0x0002;

    if (handle != 0) {
        if (size != 0) {
            return ext_LocalReAlloc(handle, size, kLmemMoveable);
        }
        ext_LocalFree(handle);
        return 0;
    }
    if (size == 0) {
        return 0;
    }
    return ext_LocalAlloc(0, size);
}
} // namespace lift_008596F0

// [0x00859740] sub_00859740 (64 bytes)
namespace lift_00859740 {
// @name MemsetReturnDst
// @summary Fills count bytes at dst with value (memset semantics) and returns dst.
void* fn_00859740(void* dst, uint8_t value, uint32_t count) {
    uint8_t* p = static_cast<uint8_t*>(dst);
    for (uint32_t i = 0; i < count; ++i) {
        p[i] = value;
    }
    return dst;
}
} // namespace lift_00859740

// [0x0085D890]
namespace lift_0085D890 {
// @name rotateRight32
// @summary Rotates a 32-bit unsigned integer at ptr right by 1 bit, count times.


void __cdecl sub_0085D890(uint32_t* ptr, uint16_t count) {
    if (count == 0) {
        return;
    }
    do {
        uint32_t val = *ptr;
        if (val & 1u) {
            val = (val >> 1) | 0x80000000u;
        } else {
            val = val >> 1;
        }
        *ptr = val;
        --count;
    } while (count != 0);
}
} // namespace lift_0085D890

// [0x0085BF70]
namespace lift_0085BF70 {
extern uint8_t& mem_u8(uint32_t addr);
extern uint32_t& mem_u32(uint32_t addr);
extern uint32_t ext_00859DA0();
extern uint32_t ext_0085BC20(uint32_t self_ptr);

// @name CloneOrShareStream
// @summary Allocates a stream/buffer wrapper via ext_00859DA0 and initializes it to share the underlying buffer of arg0, incrementing its reference count.
// @field Stream +0x00 uint32_t inner_ptr
// @field Stream +0x08 uint32_t field_0x08
// @field Stream +0x10 uint32_t cursor
// @field Stream +0x14 uint32_t flags
// @field Stream +0x18 uint32_t ref_count
uint32_t fn_0085BF70(uint32_t arg0) {
    uint32_t esi = ext_00859DA0();
    if (esi == 0) {
        return 0;
    }

    uint32_t src = arg0;
    if ((mem_u8(src + 0x14) & 0x4) != 0) {
        src = mem_u32(src);
    }

    uint32_t ref_count = mem_u32(src + 0x18) + 1;
    mem_u32(src + 0x18) = ref_count;
    mem_u32(esi) = src;

    mem_u32(esi + 0x8) = ext_0085BC20(src);
    mem_u32(esi + 0x14) = mem_u32(esi + 0x14) | 0x6;
    mem_u32(esi + 0x10) = 0;

    return esi;
}
} // namespace lift_0085BF70

// [0x00859A50]
namespace lift_00859A50 {
uint8_t mem_read8(uint32_t addr);
void mem_write8(uint32_t addr, uint8_t val);

// @name strncat
// @summary Appends at most count characters from src to null-terminated dst, always null-terminating, and returns dst.

uint32_t sub_00859A50(uint32_t dst, uint32_t src, uint32_t count) {
    if (count == 0) {
        return dst;
    }

    uint32_t cur = dst;
    while (mem_read8(cur) != 0) {
        cur++;
    }

    while (true) {
        uint8_t ch = mem_read8(src++);
        mem_write8(cur, ch);
        if (ch == 0) {
            break;
        }
        cur++;
        count--;
        if (count == 0) {
            break;
        }
    }

    mem_write8(cur, 0);
    return dst;
}
} // namespace lift_00859A50

// [0x00859AF0]
namespace lift_00859AF0 {
// @name destroyTreeNode
// @summary Recursively destroys a node's right/child (+0x20 if flag 0x20000000 set) and left/next (+0x1c) pointers, then frees the node.
// @field Node +0x00 uint32_t flags
// @field Node +0x1c void* field_0x1c
// @field Node +0x20 void* field_0x20


extern void ext_0086CD00(void* ptr);

void sub_00859AF0(uint32_t* node) {
    if (((*node >> 24) & 0x20u) != 0) {
        uint32_t* child20 = *reinterpret_cast<uint32_t**>(reinterpret_cast<uint8_t*>(node) + 0x20);
        if (child20 != nullptr) {
            sub_00859AF0(child20);
        }
    }

    uint32_t* child1c = *reinterpret_cast<uint32_t**>(reinterpret_cast<uint8_t*>(node) + 0x1c);
    if (child1c != nullptr) {
        sub_00859AF0(child1c);
    }

    ext_0086CD00(node);
}
} // namespace lift_00859AF0

// [0x0085E720] sub_0085E720 (76 bytes)
namespace lift_0085E720 {
// @name BuildPrintable16Ring
// @summary Walks len bytes of src, storing each as a printable char (control bytes < 0x20 become '.') into a 16-slot ring buffer that is NUL-terminated after each write.
void fn_0085E720(const char* src, int len) {
    char buf[17] = {};  // 16 ring slots plus the trailing NUL index (esi+1 <= 16)
    int esi = 0;
    for (int i = 0; i < len; ++i) {
        const unsigned char c = static_cast<unsigned char>(src[i]);
        buf[esi] = '.';
        if (c >= 0x20) {
            buf[esi] = static_cast<char>(c);
        }
        buf[esi + 1] = '\0';
        ++esi;
        if (esi > 15) {
            esi = 0;
        }
    }
    (void)buf;  // local result; original never publishes it
}
} // namespace lift_0085E720

// [0x008597E0]
namespace lift_008597E0 {
// @name memmove_008597E0
// @summary Copies count bytes from src to dst, handling overlapping regions, and returns dst.
uint32_t __cdecl sub_008597E0(uint32_t dst, uint32_t src, uint32_t count) {
    uint8_t* d = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(dst));
    const uint8_t* s = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(src));
    if (count == 0) {
        return dst;
    }
    if (src < dst && dst < src + count) {
        for (uint32_t i = count; i > 0; --i) {
            d[i - 1] = s[i - 1];
        }
    } else {
        for (uint32_t i = 0; i < count; ++i) {
            d[i] = s[i];
        }
    }
    return dst;
}
} // namespace lift_008597E0

// [0x00859E00]
namespace lift_00859E00 {
extern uint8_t mem_read8(uint32_t addr);
extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name seekBuffer
// @summary Seeks a buffer/stream position relative to current, end, or start, bounds-checked against size.
// @field Buffer +0x00 uint32_t field_0x00
// @field Buffer +0x04 uint32_t field_0x04
// @field Buffer +0x08 uint32_t field_0x08
// @field Buffer +0x14 uint8_t field_0x14

uint32_t sub_00859E00(uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    uint32_t new_pos = 0xFFFFFFFFu;
    uint32_t base = arg1;
    if ((mem_read8(arg1 + 0x14u) & 0x4u) != 0u) {
        base = mem_read32(arg1);
    }

    if (arg3 == 0u) {
        new_pos = mem_read32(arg1 + 0x8u) + arg2;
    } else if (arg3 == 1u) {
        new_pos = mem_read32(base + 0x4u) - arg2;
    } else if (arg3 == 2u) {
        new_pos = arg2;
    }

    uint32_t limit = mem_read32(base + 0x4u);
    if (new_pos > limit) {
        return 0x1Du;
    }

    mem_write32(arg1 + 0x8u, new_pos);
    return 0u;
}
} // namespace lift_00859E00

// [0x00853680] sub_00853680 (80 bytes)
namespace lift_00853680 {
extern void __cdecl fn_008692F0(uint8_t* dst, uint32_t value, uint32_t count);

// @name initSha1Context
// @class Sha1Context
// @summary Zeroes a 92-byte context block and loads the SHA-1 initial hash values (H0-H4) plus a zero bit counter.
// @field Sha1Context +0x00 uint32_t h0
// @field Sha1Context +0x04 uint32_t h1
// @field Sha1Context +0x08 uint32_t h2
// @field Sha1Context +0x0C uint32_t h3
// @field Sha1Context +0x10 uint32_t h4
// @field Sha1Context +0x14 uint32_t countLo
// @field Sha1Context +0x18 uint32_t countHi
void fn_00853680(uint8_t* self) {
    fn_008692F0(self, 0, 0x5C);

    uint32_t* state = reinterpret_cast<uint32_t*>(self);
    state[0] = 0x67452301u;
    state[1] = 0xEFCDAB89u;
    state[2] = 0x98BADCFEu;
    state[3] = 0x10325476u;
    state[4] = 0xC3D2E1F0u;
    state[5] = 0u; // +0x14
    state[6] = 0u; // +0x18
}
} // namespace lift_00853680

// [0x008598E0]
namespace lift_008598E0 {
// @name strncpyZeroPad
// @summary Copy up to n bytes of a NUL-terminated string from src to dst, zero-filling the remainder of the n-byte window; returns dst.
static uint8_t* strncpyZeroPad(uint8_t* dst, const uint8_t* src, size_t n) {
    if (n == 0) {
        return dst;
    }

    uint8_t* out = dst;
    for (;;) {
        const uint8_t ch = *src++;
        *out++ = ch;
        --n;
        if (ch == 0) {
            // Source terminated: zero-fill the rest of the window.
            while (n-- != 0) {
                *out++ = 0;
            }
            break;
        }
        if (n == 0) {
            break;
        }
    }
    return dst;
}
} // namespace lift_008598E0

// [0x0085A5D0] sub_0085A5D0 (80 bytes)
namespace lift_0085A5D0 {
// Known callee 0x00859740: MemsetReturnDst (Fills count bytes at dst with value (memset semantics) and returns dst.)
extern void* ext_00859740(void* dst, uint8_t value, uint32_t count);

// @name Block::ResetDefaults
// @class Block
// @summary Zeroes a 100-byte block, clears its flag byte, sets most dword fields to -1, and sets the dword at +0x2C to 1.
// @field Block +0x00 uint8_t flag
// @field Block +0x08 int32_t field_0x08
// @field Block +0x0C int32_t field_0x0C
// @field Block +0x10 int32_t field_0x10
// @field Block +0x14 int32_t field_0x14
// @field Block +0x1C int32_t field_0x1C
// @field Block +0x20 int32_t field_0x20
// @field Block +0x24 int32_t field_0x24
// @field Block +0x2C int32_t field_0x2C
// @field Block +0x3C int32_t field_0x3C
// @field Block +0x40 int32_t field_0x40
// @field Block +0x44 int32_t field_0x44
// @field Block +0x48 int32_t field_0x48
// @field Block +0x4C int32_t field_0x4C
// @field Block +0x50 int32_t field_0x50
// @field Block +0x54 int32_t field_0x54
// @field Block +0x58 int32_t field_0x58
void fn_0085A5D0(void* self) {
    auto* p = static_cast<uint8_t*>(self);

    ext_00859740(p, 0, 100);

    auto store_i32 = [p](uint32_t off, int32_t v) {
        std::memcpy(p + off, &v, sizeof(v));
    };

    p[0x00] = 0;
    store_i32(0x08, -1);
    store_i32(0x0C, -1);
    store_i32(0x10, -1);
    store_i32(0x14, -1);
    store_i32(0x1C, -1);
    store_i32(0x20, -1);
    store_i32(0x24, -1);
    store_i32(0x2C, 1);
    store_i32(0x3C, -1);
    store_i32(0x40, -1);
    store_i32(0x44, -1);
    store_i32(0x48, -1);
    store_i32(0x4C, -1);
    store_i32(0x50, -1);
    store_i32(0x54, -1);
    store_i32(0x58, -1);
}
} // namespace lift_0085A5D0

// [0x0085A3E0] sub_0085A3E0 (80 bytes)
namespace lift_0085A3E0 {
// Known callee 0x008596F0: LocalBlockResize (cdecl: (handle, size) -> handle)
extern uint32_t ext_008596F0(uint32_t handle, uint32_t size);

// @name AppendSentinelEntry
// @class Unknown
// @summary Grows the 8-byte-entry block by one slot via LocalBlockResize, zero-fills the new entry and writes -1 into its second dword; returns the old count, or 0xFFFFFFFF if the resize fails.
// @field Unknown +0x04 uint32_t field_0x04
// @field Unknown +0x08 uint32_t field_0x08
uint32_t fn_0085A3E0(void* self) {
    constexpr uint32_t kFailure = 0xFFFFFFFFu;

    const uint32_t count = lift_field<uint32_t>(self, 0x04);
    const uint32_t handle = lift_field<uint32_t>(self, 0x08);
    const uint32_t entryOffset = count * 8u;

    const uint32_t grown = ext_008596F0(handle, entryOffset + 8u);
    if (grown == 0) {
        return kFailure;
    }

    lift_field<uint32_t>(self, 0x08) = grown;

    uint8_t* block = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(grown));
    lift_field<uint32_t>(block, static_cast<ptrdiff_t>(entryOffset)) = 0u;
    lift_field<uint32_t>(block, static_cast<ptrdiff_t>(entryOffset + 4u)) = kFailure;

    lift_field<uint32_t>(self, 0x04) = count + 1u;
    return count;
}
} // namespace lift_0085A3E0

// [0x0085D340] sub_0085D340 (80 bytes)
namespace lift_0085D340 {
// CRC-32 lookup table (256 entries, reflected polynomial), stored in .data.
extern uint32_t mem_00AB91A0[256];

// @name CRC32Update
// @summary Computes a reflected CRC-32 (init 0xFFFFFFFF, final XOR) over a byte buffer using the table at mem_00AB91A0.
uint32_t fn_0085D340(const uint8_t* data, size_t length) {
    uint32_t crc = 0xFFFFFFFFu;
    if (length == 0) {
        return ~crc;
    }
    size_t i = 0;
    do {
        uint32_t index = (static_cast<uint32_t>(data[i]) ^ crc) & 0xFFu;
        ++i;
        crc = mem_00AB91A0[index] ^ (crc >> 8);
    } while (i < length);
    return ~crc;
}
} // namespace lift_0085D340

// [0x0085E420] sub_0085E420 (80 bytes)
namespace lift_0085E420 {
// @name MemMoveOverlapSafe
// @summary Copies n bytes from src to dst, handling overlapping ranges (memmove semantics) by copying backward when dst lies inside [src, src+n).
void fn_0085E420(void* dst, const void* src, size_t n) {
    uint8_t* d = static_cast<uint8_t*>(dst);
    const uint8_t* s = static_cast<const uint8_t*>(src);

    if (reinterpret_cast<uintptr_t>(d) > reinterpret_cast<uintptr_t>(s) &&
        reinterpret_cast<uintptr_t>(d) < reinterpret_cast<uintptr_t>(s) + n) {
        // Overlap with dst above src: copy from the high end downward.
        d += n;
        s += n;
        while (n != 0) {
            *--d = *--s;
            --n;
        }
        return;
    }

    // Non-overlapping, or dst at/below src: forward copy.
    while (n != 0) {
        *d++ = *s++;
        --n;
    }
}
} // namespace lift_0085E420

// [0x0085A580] sub_0085A580 (80 bytes)
namespace lift_0085A580 {
// Known callee 0x008596F0: LocalBlockResize (Allocates, reallocates, or frees a LocalAlloc block depending on whether the handle and size arguments are zero.)
extern uint32_t ext_008596F0(uint32_t handle, uint32_t size);
// Known callee 0x0085A5D0: Block::ResetDefaults (Zeroes a 100-byte block, clears its flag byte, sets most dword fields to -1, and sets the dword at +0x2C to 1.)
extern void ext_0085A5D0(void* block);

// @name BlockArray::GrowAndAppend
// @class BlockArray
// @summary Grows the block array by one 100-byte element via LocalBlockResize, resets the new trailing block, and returns the old count (or -1 on allocation failure).
// @field BlockArray +0x04 int32_t field_0x04
// @field BlockArray +0x10 uint32_t field_0x10
int32_t fn_0085A580(void* self) {
    int32_t result = -1;

    const int32_t count = lift_field<int32_t>(self, 0x04);
    const uint32_t handle = lift_field<uint32_t>(self, 0x10);
    const uint32_t newSize = static_cast<uint32_t>(count + 1) * 100u;

    const uint32_t newHandle = ext_008596F0(handle, newSize);
    if (newHandle != 0) {
        result = count;
        lift_field<uint32_t>(self, 0x10) = newHandle;

        void* elem = reinterpret_cast<void*>(
            static_cast<uintptr_t>(newHandle) + static_cast<uintptr_t>(count) * 100u);
        ext_0085A5D0(elem);

        lift_field<int32_t>(self, 0x04) = lift_field<int32_t>(self, 0x04) + 1;
    }

    return result;
}
} // namespace lift_0085A580

// [0x008522E0] sub_008522E0 (91 bytes)
namespace lift_008522E0 {
// Callees. ext_008179EA / ext_008179F2 / ext_008203F7 / ext_0083CAAF are only
// reached through `jb` after an `and` (CF cleared) or `clc`, so they are never taken.
extern void __cdecl ext_008179EA(void);
extern void __cdecl ext_008179F2(void);
extern void __cdecl ext_008203F7(void);
extern void __cdecl ext_0083CAAF(void);
// Tail-jump target; the packed value is passed in edi. Return type is assumed.
extern uint32_t __cdecl ext_00852345(uint32_t packed);

// @name sub_008522E0
// @summary Packs four byte-sized caller stack locals (ebp-0x19..ebp-0x1c) into a big-endian uint32 and tail-jumps to ext_00852345.
extern uint32_t __cdecl fn_008522E0(uint8_t mem_ebp_m19, uint8_t mem_ebp_m1a,
                                        uint8_t mem_ebp_m1b, uint8_t mem_ebp_m1c) {
    // Original sequence: edi = byte[ebp-0x19]; edi = (edi << 8) | byte[ebp-0x1a];
    // edi = (edi << 8) | byte[ebp-0x1b]; edi = (edi << 8) | byte[ebp-0x1c].
    // Each byte is masked with 0xff first. Overflow/carry paths are unreachable.
    uint32_t packed = static_cast<uint32_t>(mem_ebp_m19) & 0xffu;
    packed = (packed << 8) + (static_cast<uint32_t>(mem_ebp_m1a) & 0xffu);
    packed = (packed << 8) + (static_cast<uint32_t>(mem_ebp_m1b) & 0xffu);
    packed = (packed << 8) + (static_cast<uint32_t>(mem_ebp_m1c) & 0xffu);
    return ext_00852345(packed);
}
} // namespace lift_008522E0

// [0x00852AD0]
namespace lift_00852AD0 {
// @name initTypedPayload16
// @summary Validates a 1-byte type tag (1..3), writes it to dst[0], and copies or zeroes 16 bytes at dst+1.


void mem_write_u8(uint32_t addr, uint8_t val);
uint32_t mem_read_u32(uint32_t addr);
void mem_write_u32(uint32_t addr, uint32_t val);

extern int32_t sub_00852AD0(uint32_t dst, uint8_t type, uint32_t src) {
    if (type != 1 && type != 2 && type != 3) {
        return -4;
    }

    mem_write_u8(dst, type);
    uint32_t payload = dst + 1;

    if (src != 0) {
        mem_write_u32(payload + 0x0, mem_read_u32(src + 0x0));
        mem_write_u32(payload + 0x4, mem_read_u32(src + 0x4));
        mem_write_u32(payload + 0x8, mem_read_u32(src + 0x8));
        mem_write_u32(payload + 0xC, mem_read_u32(src + 0xC));
    } else {
        mem_write_u32(payload + 0x0, 0);
        mem_write_u32(payload + 0x4, 0);
        mem_write_u32(payload + 0x8, 0);
        mem_write_u32(payload + 0xC, 0);
    }

    return 1;
}
} // namespace lift_00852AD0

// [0x008592A0]
namespace lift_008592A0 {
// @name calcCrc16Nibble
// @summary Computes a 16-bit CRC over a byte buffer using a 16-entry nibble lookup table at 0x00AB8C70.

extern uint8_t mem_r8(uint32_t addr);
extern uint32_t mem_r32(uint32_t addr);

uint32_t __cdecl sub_008592A0(uint32_t data_addr, uint32_t length) {
    uint32_t eax = 0;
    if (length == 0) {
        return eax;
    }

    uint32_t esi = data_addr;
    uint32_t edi = length;
    constexpr uint32_t kTableBase = 0x00AB8C70u;

    do {
        uint32_t edx = mem_r8(esi);
        uint32_t ecx = mem_r32(kTableBase + (eax & 0xFu) * 4u);
        uint32_t ebx = edx & 0xFu;

        eax = (eax & 0xFFFF0000u) | ((eax & 0xFFFFu) >> 4);
        ecx ^= static_cast<uint16_t>(mem_r32(kTableBase + ebx * 4u));
        edx >>= 4;
        ecx ^= eax;

        eax = mem_r32(kTableBase + (ecx & 0xFu) * 4u);
        ecx = (ecx & 0xFFFF0000u) | ((ecx & 0xFFFFu) >> 4);
        eax ^= static_cast<uint16_t>(mem_r32(kTableBase + edx * 4u));
        eax ^= ecx;

        esi += 1;
        edi -= 1;
    } while (edi != 0);

    return eax;
}
} // namespace lift_008592A0
