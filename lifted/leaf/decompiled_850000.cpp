// Lifted C++ translation unit: lifted/leaf/decompiled_850000.cpp
#include "lift_compat.h"

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
