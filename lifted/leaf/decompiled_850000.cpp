// Lifted C++ translation unit: lifted/leaf/decompiled_850000.cpp
#include "lift_compat.h"
#include <cstdio>

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
