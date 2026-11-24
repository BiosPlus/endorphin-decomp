// Lifted C++ translation unit: lifted/leaf/decompiled_800000.cpp
#include "lift_compat.h"

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
