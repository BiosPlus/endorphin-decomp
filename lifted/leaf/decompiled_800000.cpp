// Lifted C++ translation unit: lifted/leaf/decompiled_800000.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x0080FC40]
namespace lift_0080FC40 {
extern uint32_t ext_008596E0(uint32_t size);

// @name GlobalAllocZeroWrapper
// @summary Forwards its single uint32_t size argument to ext_008596E0 (GlobalAllocZeroFlags clone) and returns the result.
uint32_t fn_0080FC40(uint32_t size) {
    return ext_008596E0(size);
}
} // namespace lift_0080FC40

// [0x0080B530] sub_0080B530 (16 bytes)
namespace lift_0080B530 {
// Known callee 0x008596E0: sub_008596E0 (Auto-lifted identical-shape clone of 0x0079AF40 (GlobalAllocZeroFlags).)
extern uint32_t ext_008596E0(uint32_t size);

// @name sub_0080B530_forwardAllocZeroFlags
// @summary Forwards its single cdecl uint32_t argument unchanged to ext_008596E0 and returns that call's result.
// (No struct field accesses, so no @class or @field lines.)
extern uint32_t fn_0080B530(uint32_t size) {
    return ext_008596E0(size);
}
} // namespace lift_0080B530

// [0x0080CA10] sub_0080CA10 (16 bytes)
namespace lift_0080CA10 {
// Known callee 0x00859730: sub_00859730 (Auto-lifted identical-shape clone of 0x0079AF50 (GlobalFreeWrapper).)
extern void* ext_00859730(void* hMem);

// @name GlobalFreeForwarder
// @summary Forwards its single stack argument to ext_00859730 (GlobalFreeWrapper) and returns the callee's result unchanged.
void* fn_0080CA10(void* hMem) {
    return ext_00859730(hMem);
}
} // namespace lift_0080CA10

// [0x0080B560] sub_0080B560 (16 bytes)
namespace lift_0080B560 {
// Known callee 0x00859730: sub_00859730 (Auto-lifted identical-shape clone of 0x0079AF50 (GlobalFreeWrapper).)
extern void* ext_00859730(void* hMem);

// @name GlobalFreeThunk_0080B560
// @summary Forwards its single stack argument to the GlobalFree wrapper and returns the result.
void* fn_0080B560(void* hMem) {
    return ext_00859730(hMem);
}
} // namespace lift_0080B560

// [0x0080B670] sub_0080B670 (16 bytes)
namespace lift_0080B670 {
// @name sub_0080B670
// @summary Auto-lifted identical-shape clone of 0x0080FC40 (GlobalAllocZeroWrapper).
namespace lift_0080FC40 {
extern uint32_t ext_008599F0(uint32_t size);

// @name GlobalAllocZeroWrapper
// @summary Forwards its single uint32_t size argument to ext_008596E0 (GlobalAllocZeroFlags clone) and returns the result.
uint32_t fn_0080B670(uint32_t size) {
    return ext_008599F0(size);
}
} // namespace lift_0080FC40
} // namespace lift_0080B670

// [0x0080C690] sub_0080C690 (16 bytes)
namespace lift_0080C690 {
// @name sub_0080C690
// @summary Auto-lifted identical-shape clone of 0x0085BFE0 (GlobalFreeForwarder_0085BFE0).
namespace lift_0085BFE0 {
// @name GlobalFreeForwarder_0085BFE0
// @summary Forwards its single stack argument (an HGLOBAL) to ext_00859730 (GlobalFree wrapper) and returns the result.

extern HGLOBAL ext_0085A650(HGLOBAL hMem);

uint32_t __cdecl fn_0080C690(uint32_t hMem) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(
        ext_0085A650(reinterpret_cast<HGLOBAL>(static_cast<uintptr_t>(hMem)))));
}
} // namespace lift_0085BFE0
} // namespace lift_0080C690

// [0x0080FC50]
namespace lift_0080FC50 {
extern uint32_t __cdecl ext_008596E0(uint32_t size);

// @name allocZero12
// @summary Allocates a 12-byte object and zeroes its three 32-bit fields if allocation succeeds.
uint32_t __cdecl fn_0080FC50(void) {
    uint32_t ptr = ext_008596E0(0xC);
    if (ptr != 0) {
        *(uint32_t*)(uintptr_t)(ptr + 0x0) = 0;
        *(uint32_t*)(uintptr_t)(ptr + 0x4) = 0;
        *(uint32_t*)(uintptr_t)(ptr + 0x8) = 0;
    }
    return ptr;
}
} // namespace lift_0080FC50

// [0x0080ABE0] sub_0080ABE0 (32 bytes)
namespace lift_0080ABE0 {
extern void __stdcall ext_InitializeCriticalSection(void* lpCriticalSection);
extern DWORD mem_00B73C58;
extern DWORD mem_00B73C80;

// @name InitCriticalSectionAndSetReadyFlag
// @summary Initializes the critical section at 0x00B73C58 and sets the flag at 0x00B73C80 to 1.
void fn_0080ABE0(void) {
    ext_InitializeCriticalSection(&mem_00B73C58);
    mem_00B73C80 = 1;
}
} // namespace lift_0080ABE0

// [0x0080AD90] sub_0080AD90 (32 bytes)
namespace lift_0080AD90 {
extern void __stdcall ext_InitializeCriticalSection(void* lpCriticalSection);
extern int mem_00B73C40;
extern int mem_00B73C84;

// @name InitGlobalCriticalSectionAndSetReadyFlag
// @summary Initializes the global critical section at 0x00B73C40 and sets the flag at 0x00B73C84 to 1.
void fn_0080AD90(void) {
    ext_InitializeCriticalSection(&mem_00B73C40);
    mem_00B73C84 = 1;
}
} // namespace lift_0080AD90

// [0x0080ABC0]
namespace lift_0080ABC0 {
// @name LeaveGlobalCriticalSection
// @summary Ensures the global critical section is initialized, then leaves it via the imported LeaveCriticalSection.

extern void ext_0080ABE0(void);
extern uint32_t mem_00B73C80;
extern uint8_t mem_00B73C58[];
extern void* mem_009241BC;

void fn_0080ABC0(void) {
    if (mem_00B73C80 == 0) {
        ext_0080ABE0();
    }
    using LeaveCriticalSectionFn = void(__stdcall*)(void*);
    reinterpret_cast<LeaveCriticalSectionFn>(mem_009241BC)(mem_00B73C58);
}
} // namespace lift_0080ABC0

// [0x0080AB80]
namespace lift_0080AB80 {
// @name EnterGlobalCriticalSection
// @summary Ensures the global critical section is initialized, then enters it via the imported EnterCriticalSection.

extern void ext_0080ABE0(void);
extern uint32_t mem_00B73C80;
extern uint8_t mem_00B73C58[];
extern void* mem_009242E0;

void fn_0080AB80(void) {
    if (mem_00B73C80 == 0) {
        ext_0080ABE0();
    }
    using EnterCriticalSectionFn = void(__stdcall*)(void*);
    reinterpret_cast<EnterCriticalSectionFn>(mem_009242E0)(mem_00B73C58);
}
} // namespace lift_0080AB80

// [0x0080FAF0] sub_0080FAF0 (32 bytes)
namespace lift_0080FAF0 {
// @name ResetDwordTripleReturnFirst
// @summary Zeroes three dwords at +0x00, +0x04 and +0x08 of the target block and returns the previous value of +0x00.
// @field ResetDwordTriple +0x00 uint32_t field_0x00
// @field ResetDwordTriple +0x04 uint32_t field_0x04
// @field ResetDwordTriple +0x08 uint32_t field_0x08

// cdecl: single pointer argument at [esp+4]; result returned in eax.
uint32_t fn_0080FAF0(uint32_t* self) {
    uint32_t previous = self[0];
    self[0] = 0;
    self[2] = 0;
    self[1] = 0;
    return previous;
}
} // namespace lift_0080FAF0

// [0x0080ABA0] sub_0080ABA0 (32 bytes)
namespace lift_0080ABA0 {
// Known callee 0x0080ABE0: InitCriticalSectionAndSetReadyFlag (Initializes the critical section at 0x00B73C58 and sets the flag at 0x00B73C80 to 1.)
extern void ext_0080ABE0();
extern int mem_00B73C80;
extern int mem_009242E0;
extern int mem_00B73C58;

// @name EnsureCriticalSectionInitializedAndEnter
// @summary If the ready flag at 0x00B73C80 is zero, initialize the global critical section; then enter it via KERNEL32 EnterCriticalSection (through the import slot at 0x009242E0).
void fn_0080ABA0(void) {
    // Ready flag not yet set: run the one-time initializer.
    if (mem_00B73C80 == 0) {
        ext_0080ABE0();
    }

    // EnterCriticalSection(&mem_00B73C58), called through its import pointer.
    using EnterCriticalSectionFn = void (*)(void*);
    auto enter = reinterpret_cast<EnterCriticalSectionFn>(
        static_cast<std::uintptr_t>(static_cast<std::uint32_t>(mem_009242E0)));
    enter(reinterpret_cast<void*>(&mem_00B73C58));
}
} // namespace lift_0080ABA0

// [0x0080FAE0] sub_0080FAE0 (16 bytes)
namespace lift_0080FAE0 {
// Known callee 0x00859730: sub_00859730 (Auto-lifted identical-shape clone of 0x0079AF50 (GlobalFreeWrapper).)
extern void* ext_00859730(void* hMem);

// @name GlobalFreeIfNonNull
// @summary If the stack argument is non-null, forwards it to ext_00859730 (GlobalFree wrapper); result discarded.
// @field none (no member fields accessed)
void fn_0080FAE0(void* hMem) {
    if (hMem != nullptr) {
        (void)ext_00859730(hMem);
    }
}
} // namespace lift_0080FAE0

// [0x0080FAC0] sub_0080FAC0 (32 bytes)
namespace lift_0080FAC0 {
// Known callee 0x0080FAE0: GlobalFreeIfNonNull (If the stack argument is non-null, forwards it to ext_00859730 (GlobalFree wrapper); result discarded.)
extern void ext_0080FAE0(void* hMem);
// Known callee 0x00859730: sub_00859730 (Auto-lifted identical-shape clone of 0x0079AF50 (GlobalFreeWrapper).)
extern void ext_00859730(void* hMem);

// @name GlobalFreeIfNonNullWithOwnedHandle
// @summary If the argument pointer is non-null, releases the handle stored at its first dword via ext_0080FAE0, then frees the argument itself via GlobalFree wrapper ext_00859730.
// @field Unknown +0x00 void* field_0x00
void fn_0080FAC0(void* self) {
    if (self != nullptr) {
        void* inner = *static_cast<void**>(self);
        ext_0080FAE0(inner);
        ext_00859730(self);
    }
}
} // namespace lift_0080FAC0

// [0x0080F830] sub_0080F830 (37 bytes)
namespace lift_0080F830 {
// @name WriteByteAdvanceCursor
// @class Writer
// @summary Writes one byte through the cursor pointed to by self+0x08, advances that cursor by one, and increments the two 32-bit counters at +0x10 and +0x14.
// @field Writer +0x08 uint32_t cursorSlot
// @field Writer +0x10 int32_t counterA
// @field Writer +0x14 int32_t counterB
void fn_0080F830(void* self, uint8_t value) {
    auto* base = static_cast<uint8_t*>(self);

    // self+0x08 holds the address of a 32-bit cursor slot.
    uint32_t slotAddr = *reinterpret_cast<uint32_t*>(base + 0x08);
    auto* slot = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(slotAddr));

    // The cursor slot holds the address of the destination byte.
    auto* dst = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(*slot));
    *dst = value;

    // Advance the cursor by one byte.
    *slot += 1;

    // Increment both counters.
    auto* counterA = reinterpret_cast<int32_t*>(base + 0x10);
    auto* counterB = reinterpret_cast<int32_t*>(base + 0x14);
    *counterA += 1;
    *counterB += 1;
}
} // namespace lift_0080F830

// [0x0080EBD0]
namespace lift_0080EBD0 {
extern uint8_t mem_read8(uint32_t addr);
extern uint32_t mem_read32(uint32_t addr);

// @name isCharInLookupTable
// @summary Checks whether a signed byte character maps to a truthy jump-table entry.

extern uint32_t sub_0080EBD0(int8_t ch) {
    uint32_t idx = static_cast<uint32_t>(static_cast<int32_t>(ch) - 0x20);
    if (idx > 0x5A) {
        return 0;
    }
    uint8_t entry = mem_read8(0x0080EC00u + idx);
    uint32_t target = mem_read32(0x0080EBF8u + static_cast<uint32_t>(entry) * 4u);
    if (target == 0x0080EBECu) {
        return 1;
    }
    return 0;
}
} // namespace lift_0080EBD0
