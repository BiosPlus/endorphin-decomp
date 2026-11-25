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
