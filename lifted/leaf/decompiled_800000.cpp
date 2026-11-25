// Lifted C++ translation unit: lifted/leaf/decompiled_800000.cpp
#include "lift_compat.h"
#include <cstdint>
#include <cstring>
#include <cstdio>

#include <cstdio>
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

// [0x0080F910]
namespace lift_0080F910 {
// @name writeByteToStreamBuffer
// @summary Writes a byte to a stream buffer if within capacity, advancing cursors and total count
// @field StreamBuffer +0x08 uint32_t field_0x08
// @field StreamBuffer +0x10 int32_t field_0x10
// @field StreamBuffer +0x14 int32_t field_0x14
// @field StreamBuffer +0x18 int32_t field_0x18
void sub_0080F910(uintptr_t arg0, uint32_t arg1) {
    int32_t v10 = *reinterpret_cast<int32_t*>(arg0 + 0x10);
    int32_t v18 = *reinterpret_cast<int32_t*>(arg0 + 0x18);
    uintptr_t* ptr_addr = *reinterpret_cast<uintptr_t**>(arg0 + 0x08);

    if (v10 < v18) {
        uint8_t* cursor = reinterpret_cast<uint8_t*>(*ptr_addr);
        *cursor = static_cast<uint8_t>(arg1);
        *ptr_addr = *ptr_addr + 1;
        *reinterpret_cast<int32_t*>(arg0 + 0x14) += 1;
    }

    *reinterpret_cast<int32_t*>(arg0 + 0x10) += 1;
}
} // namespace lift_0080F910

// [0x0080B680]
namespace lift_0080B680 {
extern uint32_t ext_00859A20(uint32_t dst_addr, uint32_t src_addr);

// @name strcat_wrapper
// @summary Forwards destination and source string pointers to strcat_impl (sub_00859A20) and returns the destination pointer.
uint32_t sub_0080B680(uint32_t dst_addr, uint32_t src_addr) {
    return ext_00859A20(dst_addr, src_addr);
}
} // namespace lift_0080B680

// [0x0080C6A0] sub_0080C6A0 (48 bytes)
namespace lift_0080C6A0 {
// @name followPointerChain
// @summary Follows a singly linked chain of first-field pointers (count - 1) hops from start, stopping early at NULL; returns the node reached (start itself when count <= 1).
// (No @class/@field: the function operates on untyped pointers without a known struct.)
void* fn_0080C6A0(void* start, uint32_t count) {
    if (count <= 1) {
        return start;
    }

    const uint32_t hops = count - 1;
    void* cur = start;
    for (uint32_t i = 0; i < hops; ++i) {
        if (cur == nullptr) {
            break;
        }
        // Next-pointer is stored at offset 0 of each node.
        cur = *static_cast<void* const*>(cur);
    }
    return cur;
}
} // namespace lift_0080C6A0

// [0x0080B590]
namespace lift_0080B590 {
// @name Thunk::copyMemoryDwordThenBytesForward
// @summary Forwards (dst, src, n) unchanged to copyMemoryDwordThenBytes (ext_00859780) and returns its result.

void* ext_00859780(void* dst, const void* src, size_t n);

void* fn_0080B590(void* dst, const void* src, size_t n) {
    return ext_00859780(dst, src, n);
}
} // namespace lift_0080B590

// [0x0080B5B0]
namespace lift_0080B5B0 {
// Known callee 0x008597B0: sub_0085E04B (five-byte no-op `add eax, 0`; leaves eax unchanged).
// cdecl: caller pushes three DWORD args and cleans up the stack.
DWORD ext_008597B0(DWORD a, DWORD b, DWORD c);

// @name Thunk::forwardThreeDwordArgs
// @summary Forwards its three cdecl DWORD arguments unchanged to ext_008597B0 and returns the value left in eax by that call.
DWORD fn_0080B5B0(DWORD a, DWORD b, DWORD c) {
    return ext_008597B0(a, b, c);
}
} // namespace lift_0080B5B0

// [0x0080B5D0] sub_0080B5D0 (32 bytes)
namespace lift_0080B5D0 {
// @name sub_0080B5D0
// @summary Auto-lifted identical-shape clone of 0x0080B590 (Thunk::copyMemoryDwordThenBytesForward).
namespace lift_0080B590 {
// @name Thunk::copyMemoryDwordThenBytesForward
// @summary Forwards (dst, src, n) unchanged to copyMemoryDwordThenBytes (ext_00859780) and returns its result.

void* ext_008597E0(void* dst, const void* src, size_t n);

void* fn_0080B5D0(void* dst, const void* src, size_t n) {
    return ext_008597E0(dst, src, n);
}
} // namespace lift_0080B590
} // namespace lift_0080B5D0

// [0x0080B630] sub_0080B630 (32 bytes)
namespace lift_0080B630 {
// @name sub_0080B630
// @summary Auto-lifted identical-shape clone of 0x0080B590 (Thunk::copyMemoryDwordThenBytesForward).
namespace lift_0080B590 {
// @name Thunk::copyMemoryDwordThenBytesForward
// @summary Forwards (dst, src, n) unchanged to copyMemoryDwordThenBytes (ext_00859780) and returns its result.

void* ext_008598E0(void* dst, const void* src, size_t n);

void* fn_0080B630(void* dst, const void* src, size_t n) {
    return ext_008598E0(dst, src, n);
}
} // namespace lift_0080B590
} // namespace lift_0080B630

// [0x0080B650] sub_0080B650 (32 bytes)
namespace lift_0080B650 {
// @name sub_0080B650
// @summary Auto-lifted identical-shape clone of 0x0080B590 (Thunk::copyMemoryDwordThenBytesForward).
namespace lift_0080B590 {
// @name Thunk::copyMemoryDwordThenBytesForward
// @summary Forwards (dst, src, n) unchanged to copyMemoryDwordThenBytes (ext_00859780) and returns its result.

void* ext_00859930(void* dst, const void* src, size_t n);

void* fn_0080B650(void* dst, const void* src, size_t n) {
    return ext_00859930(dst, src, n);
}
} // namespace lift_0080B590
} // namespace lift_0080B650

// [0x0080B6A0] sub_0080B6A0 (32 bytes)
namespace lift_0080B6A0 {
// @name sub_0080B6A0
// @summary Auto-lifted identical-shape clone of 0x0080B590 (Thunk::copyMemoryDwordThenBytesForward).
namespace lift_0080B590 {
// @name Thunk::copyMemoryDwordThenBytesForward
// @summary Forwards (dst, src, n) unchanged to copyMemoryDwordThenBytes (ext_00859780) and returns its result.

void* ext_00859A50(void* dst, const void* src, size_t n);

void* fn_0080B6A0(void* dst, const void* src, size_t n) {
    return ext_00859A50(dst, src, n);
}
} // namespace lift_0080B590
} // namespace lift_0080B6A0

// [0x0080EBB0] sub_0080EBB0 (32 bytes)
namespace lift_0080EBB0 {
// @name sub_0080EBB0
// @summary Auto-lifted identical-shape clone of 0x0080B590 (Thunk::copyMemoryDwordThenBytesForward).
namespace lift_0080B590 {
// @name Thunk::copyMemoryDwordThenBytesForward
// @summary Forwards (dst, src, n) unchanged to copyMemoryDwordThenBytes (ext_00859780) and returns its result.

void* ext_0085C2E0(void* dst, const void* src, size_t n);

void* fn_0080EBB0(void* dst, const void* src, size_t n) {
    return ext_0085C2E0(dst, src, n);
}
} // namespace lift_0080B590
} // namespace lift_0080EBB0

// [0x00809540] sub_00809540 (64 bytes)
namespace lift_00809540 {
// Known callee 0x00857440: sub_00857440 (dispatchViaGlobalSlot18)
extern int32_t ext_00857440(int32_t a1, int32_t a2, int32_t a3);
// Known callee 0x00857490: sub_00857490 (CallGlobalObjectSlot10IfSet)
extern void ext_00857490(uint32_t arg);
// Global one-shot flag at 0x00AB2D44 (initialized to 1)
extern uint32_t mem_00AB2D44;

// @name CallGlobalSlotsOnce
// @summary On first call (flag set), runs the slot-0x10 hook once and clears the flag; then forwards the argument through the slot-0x18 dispatcher and returns its result.
// @class (none)
int32_t fn_00809540(int32_t a1) {
    if (mem_00AB2D44 != 0) {
        mem_00AB2D44 = 0;
        ext_00857490(0x00B61FC0u);
    }
    return ext_00857440(a1, 0x10, static_cast<int32_t>(0x00B61FC0u));
}
} // namespace lift_00809540

// [0x0080F440] sub_0080F440 (64 bytes)
namespace lift_0080F440 {
// Data: 0x00AB6AC4 (byte table, read-only use here).
extern uint8_t mem_00AB6AC4[];

// @name TableStepsExactlyToArg
// @summary Walks the byte table at 0x00AB6AC4, subtracting each signed byte from (arg - 1), until the table hits 0x7F or a zero byte after a nonzero step; returns 1 if the remainder is exactly 0.
extern uint32_t fn_0080F440(int32_t arg) {
    int32_t remaining = arg - 1;
    int32_t step = 0;

    if (remaining == 0) {
        return 0;
    }

    const uint8_t* p = mem_00AB6AC4;
    while (remaining > 0) {
        const uint8_t ch = *p;
        if (ch == 0x7F) {
            break;
        }
        if (ch != 0) {
            step = static_cast<int8_t>(ch);
            ++p;
        }
        // A zero byte reuses the previous step without advancing.
        if (step == 0) {
            break;
        }
        remaining -= step;
    }

    return remaining == 0 ? 1u : 0u;
}
} // namespace lift_0080F440

// [0x0080EC60] sub_0080EC60 (64 bytes)
namespace lift_0080EC60 {
// Known callee 0x0080EBB0: sub_0080EBB0 (Auto-lifted identical-shape clone of 0x0080B590 (Thunk::copyMemoryDwordThenBytesForward).)
extern void* ext_0080EBB0(void* dst, const void* src, size_t n);

// @name ConsumeDollarPrefixedOffset
// @summary Reads a 32-bit base-relative offset at cursor, calls ext_0080EBB0 to copy 10 bytes to base+offset; if the byte at cursor is '$', advances the cursor past it and returns (copy result - 1), else returns -1.
extern int32_t __cdecl fn_0080EC60(uint32_t base, uint32_t cursor) {
    // Guest-style 32-bit addresses; memory accessed through host pointers.
    uint8_t* const base_ptr = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(base));
    uint32_t cursor_arg = cursor;

    // Dword stored at the cursor, relative to base.
    uint32_t offset = *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(cursor_arg));
    uint32_t dst_addr = offset + base;

    // The callee receives the address of the cursor argument slot as its source.
    void* ret = ext_0080EBB0(reinterpret_cast<void*>(static_cast<uintptr_t>(dst_addr)),
                             static_cast<const void*>(&cursor_arg),
                             10u);
    uint32_t result = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ret));

    if (result != 0u) {
        uint32_t rel = cursor_arg - base;
        if (base_ptr[rel] == 0x24u) {  // '$'
            uint32_t next = rel + 1u;
            result -= 1u;
            *reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(cursor_arg)) = next;
            return static_cast<int32_t>(result);
        }
    }
    return -1;
}
} // namespace lift_0080EC60

// [0x0080B540]
namespace lift_0080B540 {
// @name LocalBlockResizeThunk
// @summary Forwards handle and size arguments to LocalBlockResize.


extern uint32_t __cdecl ext_008596F0(uint32_t handle, uint32_t size);

uint32_t __cdecl fn_0080B540(uint32_t handle, uint32_t size) {
    return ext_008596F0(handle, size);
}
} // namespace lift_0080B540

// [0x00803B60] sub_00803B60 (67 bytes)
namespace lift_00803B60 {
namespace lift_00803B60 {
// @name distanceManhattan3D_00803B60
// @summary Returns |a.x-b.x| + |a.y-b.y| + |a.z-b.z| for two float vectors at ecx and eax (Manhattan distance), rounding each step to float as the x87 code did.
// @field Unknown +0x00 float field_0x00
// @field Unknown +0x04 float field_0x04
// @field Unknown +0x08 float field_0x08
float fn_00803B60(const void* ecx, const void* eax) {
    // fld [ecx+4]; fsub [eax+4]; fstp; fabs; fstp: |dy| rounded to float.
    const float dy = std::fabs(lift_field<float>(ecx, 4) - lift_field<float>(eax, 4));
    // fld [ecx]; fsub [eax]; fstp; fabs; fstp; fadd: |dy| + |dx|.
    const float dx = std::fabs(lift_field<float>(ecx, 0) - lift_field<float>(eax, 0));
    const float sumXY = dy + dx;
    // fld [ecx+8]; fsub [eax+8]; fstp; fabs; fstp; fadd: (|dy| + |dx|) + |dz|.
    const float dz = std::fabs(lift_field<float>(ecx, 8) - lift_field<float>(eax, 8));
    // fstp [esp]; fld [esp]: result is returned in st0 as a float.
    return sumXY + dz;
}
} // namespace lift_00803B60
} // namespace lift_00803B60

// [0x0080B5F0] sub_0080B5F0 (32 bytes)
namespace lift_0080B5F0 {
// @name sub_0080B5F0
// @summary Auto-lifted identical-shape clone of 0x0080B540 (LocalBlockResizeThunk).
namespace lift_0080B540 {
// @name LocalBlockResizeThunk
// @summary Forwards handle and size arguments to LocalBlockResize.


extern uint32_t __cdecl ext_00859830(uint32_t handle, uint32_t size);

uint32_t __cdecl fn_0080B5F0(uint32_t handle, uint32_t size) {
    return ext_00859830(handle, size);
}
} // namespace lift_0080B540
} // namespace lift_0080B5F0

// [0x0080B610] sub_0080B610 (32 bytes)
namespace lift_0080B610 {
// @name sub_0080B610
// @summary Auto-lifted identical-shape clone of 0x0080B540 (LocalBlockResizeThunk).
namespace lift_0080B540 {
// @name LocalBlockResizeThunk
// @summary Forwards handle and size arguments to LocalBlockResize.


extern uint32_t __cdecl ext_008598C0(uint32_t handle, uint32_t size);

uint32_t __cdecl fn_0080B610(uint32_t handle, uint32_t size) {
    return ext_008598C0(handle, size);
}
} // namespace lift_0080B540
} // namespace lift_0080B610

// [0x00802D40]
namespace lift_00802D40 {
// @name sub_00802D40
// @summary Copies aligned 32-bit float elements from field_0x30 to field_0x40 up to field_0x04 rounded up to a multiple of 4.
// @field Unknown +0x04 int32_t field_0x04
// @field Unknown +0x30 float* field_0x30
// @field Unknown +0x40 float* field_0x40


void __thiscall sub_00802D40(uintptr_t ecx) {
    int32_t edx = 0;
    for (;;) {
        int32_t eax = *reinterpret_cast<const int32_t*>(ecx + 0x4);
        int32_t rem = eax % 4;
        if (rem != 0) {
            eax = eax - rem + 4;
        }
        if (edx >= eax) {
            break;
        }
        const float* src = *reinterpret_cast<const float* const*>(ecx + 0x30);
        float* dst = *reinterpret_cast<float* const*>(ecx + 0x40);
        dst[edx] = src[edx];
        edx += 1;
    }
}
} // namespace lift_00802D40

// [0x0080D220] sub_0080D220 (71 bytes)
namespace lift_0080D220 {
// Known callee 0x0085BF40: findEntryValueByKey (Linearly searches an array of 8-byte key-value pairs for a matching 32-bit key and returns its 32-bit value, or 0 if not found.)
extern uint32_t ext_0085BF40(uint32_t tablePtr, uint32_t key);

// @name Unknown::FindChainNodeByKey
// @class Unknown
// @summary Walks a singly linked node chain (next at +0x1C) starting at `node`, skipping nodes whose address has an entry in the table at holder+0x14->+0x04; returns the first node whose +0x00 id equals `key` (or any node when key is -2), or 0 when key is -1 or nothing matches.
// @field Unknown +0x14 void* field_0x14 (pointer to holder whose +0x04 is the lookup table)
// @field UnknownTableHolder +0x04 uint32_t field_0x04 (lookup table passed to ext_0085BF40)
// @field UnknownChainNode +0x00 uint32_t field_0x00 (node id compared with key)
// @field UnknownChainNode +0x1C void* field_0x1C (next node in chain)
void* fn_0080D220(void* self, void* node, uint32_t key) {
    if (key == 0xFFFFFFFFu) {
        return nullptr;
    }
    void* const holder = lift_field<void*>(self, 0x14);
    while (node != nullptr) {
        const uint32_t table = lift_field<uint32_t>(holder, 0x04);
        const uint32_t nodeAddr = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(node));
        const uint32_t found = ext_0085BF40(table, nodeAddr);
        if (found == 0) {
            const uint32_t id = lift_field<uint32_t>(node, 0x00);
            if (key == id || key == 0xFFFFFFFEu) {
                return node;
            }
        }
        node = lift_field<void*>(node, 0x1C);
    }
    return nullptr;
}
} // namespace lift_0080D220

// [0x00803F80] sub_00803F80 (72 bytes)
namespace lift_00803F80 {
// @name FindSlotByTrailingOnes
// @summary Counts consecutive set bits from bit 0 of the u32 mask at +0x1bc and returns the address of the entry at that index in 24-byte records starting at self.
// @field Unknown +0x1bc uint32_t field_0x1bc
// @field Unknown +0x1c0 uint32_t field_0x1c0
// @field Unknown +0x1c4 uint32_t field_0x1c4
void* fn_00803F80(void* self) {
    const uint32_t flags = lift_field<uint32_t>(self, 0x1BC);

    lift_field<uint32_t>(self, 0x1C0) = 0;
    lift_field<uint32_t>(self, 0x1C4) = 1;

    if (flags & 1u) {
        do {
            lift_field<uint32_t>(self, 0x1C4) <<= 1;
            lift_field<uint32_t>(self, 0x1C0) += 1;
        } while (flags & lift_field<uint32_t>(self, 0x1C4));
    }

    const uint32_t index = lift_field<uint32_t>(self, 0x1C0);
    return static_cast<uint8_t*>(self) + static_cast<size_t>(index) * 24u;
}
} // namespace lift_00803F80

// [0x0080F720] sub_0080F720 (73 bytes)
namespace lift_0080F720 {
// @name CallCallbackAndAdvanceCounters_0080F720
// @summary Calls the callback in the table at +0x08 with (ctx, arg); on success bumps +0x10/+0x14, on failure seeds +0x1c once and bumps +0x10.
// @field Unknown +0x08 uint32_t field_0x08
// @field Unknown +0x10 uint32_t field_0x10
// @field Unknown +0x14 uint32_t field_0x14
// @field Unknown +0x1c uint32_t field_0x1c
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
void fn_0080F720(void* self, uint32_t arg) {
    auto* table = reinterpret_cast<unsigned char*>(
        static_cast<uintptr_t>(lift_field<uint32_t>(self, 0x08)));
    uint32_t callbackAddr = lift_field<uint32_t>(table, 0x00);
    if (callbackAddr != 0) {
        uint32_t ctx = lift_field<uint32_t>(table, 0x04);
        auto callback = reinterpret_cast<int32_t (*)(uint32_t, uint32_t)>(
            static_cast<uintptr_t>(callbackAddr));
        int32_t result = callback(ctx, arg);
        if (result >= 0) {
            lift_field<uint32_t>(self, 0x14) += 1;
            lift_field<uint32_t>(self, 0x10) += 1;
            return;
        }
        if (lift_field<uint32_t>(self, 0x1c) == 0) {
            lift_field<uint32_t>(self, 0x1c) = (static_cast<uint32_t>(result) << 8) - 9;
        }
    }
    lift_field<uint32_t>(self, 0x10) += 1;
}
} // namespace lift_0080F720

// [0x0080FB60] sub_0080FB60 (80 bytes)
namespace lift_0080FB60 {
// Known callee 0x008596F0: LocalBlockResize (Allocates, reallocates, or frees a LocalAlloc block depending on whether the handle and size arguments are zero.)
extern uint32_t __cdecl ext_008596F0(uint32_t handle, uint32_t size);

// @name GrowableBlock_GrowByDelta
// @class GrowableBlock
// @summary Resizes a LocalAlloc-backed block by a delta (or doubles/initializes it when delta is 0), storing the new handle and size on success; returns 1 on success, 0 on failure.
// @field GrowableBlock +0x00 uint32_t field_0x00
// @field GrowableBlock +0x08 uint32_t field_0x08
extern uint32_t __cdecl fn_0080FB60(void* self, uint32_t delta) {
    uint32_t newSize;
    if (delta != 0) {
        newSize = lift_field<uint32_t>(self, 0x08) + delta;
    } else {
        uint32_t cur = lift_field<uint32_t>(self, 0x08);
        newSize = (cur != 0) ? cur * 2u : 1u;
    }

    uint32_t handle = lift_field<uint32_t>(self, 0x00);
    uint32_t newHandle = ext_008596F0(handle, newSize);
    if (newHandle != 0) {
        lift_field<uint32_t>(self, 0x00) = newHandle;
        lift_field<uint32_t>(self, 0x08) = newSize;
        return 1u;
    }
    return 0u;
}
} // namespace lift_0080FB60

// [0x0080EB80] sub_0080EB80 (41 bytes)
namespace lift_0080EB80 {
// Known callee 0x008598E0: strncpyZeroPad (Copy up to n bytes of a NUL-terminated string from src to dst, zero-filling the remainder of the n-byte window; returns dst.)
extern uint8_t* ext_008598E0(uint8_t* dst, const uint8_t* src, size_t n);

// @name CopyStringToFixedBuffer
// @summary Copies src into dst via strncpyZeroPad using (size - 1) bytes, forces a NUL terminator at dst[size - 1], and returns 1.
void fn_0080EB80(uint8_t* dst, size_t size, const uint8_t* src) {
    ext_008598E0(dst, src, size - 1);
    dst[size - 1] = 0;
}
} // namespace lift_0080EB80

// [0x0080FB20] sub_0080FB20 (64 bytes)
namespace lift_0080FB20 {
// Known callee 0x0080FBB0: sub_0080FBB0_getField08 (Returns the 32-bit value at +0x08 of the object pointer passed as the single stack argument.)
extern uint32_t ext_0080FBB0(const void* obj);
// Known callee 0x0080FB60: GrowableBlock_GrowByDelta (Resizes a LocalAlloc-backed block by a delta (or doubles/initializes it when delta is 0), storing the new handle and size on success; returns 1 on success, 0 on failure.)
extern uint32_t ext_0080FB60(void* self, uint32_t delta);

// @name GrowableBlock::AppendByte
// @class GrowableBlock
// @summary Appends one byte to the block, growing it first when the length has reached the capacity reported by ext_0080FBB0; returns 1 on success, 0 if growth fails.
// @field GrowableBlock +0x00 uint8_t* field_0x00
// @field GrowableBlock +0x04 int32_t field_0x04
BOOL fn_0080FB20(void* self, uint8_t value)
{
    uint8_t* obj = static_cast<uint8_t*>(self);

    int32_t capacity = static_cast<int32_t>(ext_0080FBB0(obj));
    if (lift_field<int32_t>(obj, 0x04) >= capacity) {
        if (ext_0080FB60(obj, 0) == 0) {
            return 0;
        }
    }

    uint8_t* data = lift_field<uint8_t*>(obj, 0x00);
    int32_t index = lift_field<int32_t>(obj, 0x04);
    data[index] = value;
    lift_field<int32_t>(obj, 0x04) = index + 1;
    return 1;
}
} // namespace lift_0080FB20

// [0x0080FC10] sub_0080FC10 (48 bytes)
namespace lift_0080FC10 {
extern uint32_t ext_0080FC40(uint32_t size);
extern void ext_0080EB80(uint8_t* dst, size_t size, const uint8_t* src);

// @name AllocCopyString
// @summary Allocates n+1 zeroed bytes, copies up to n bytes from src into it with zero padding and a forced NUL terminator; returns the buffer (0 on allocation failure).
uint32_t fn_0080FC10(const uint8_t* src, uint32_t n) {
    const uint32_t size = n + 1;
    const uint32_t buffer = ext_0080FC40(size);
    if (buffer != 0) {
        ext_0080EB80(reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(buffer)),
                     size, src);
    }
    return buffer;
}
} // namespace lift_0080FC10

// [0x0080FC70] sub_0080FC70 (45 bytes)
namespace lift_0080FC70 {
// Known callee 0x0080FB20: GrowableBlock::AppendByte (Appends one byte to the block, growing it first when the length has reached the capacity reported by ext_0080FBB0; returns 1 on success, 0 if growth fails.)
extern BOOL ext_0080FB20(void* self, uint8_t value);

// @name ByteWriter::AppendByteCounted
// @class ByteWriter
// @summary Appends a byte to the embedded growable block when the counter at +0x1c is zero (bumping the +0x14 count), and always bumps the +0x10 count.
// @field ByteWriter +0x08 void* block
// @field ByteWriter +0x10 DWORD field_0x10
// @field ByteWriter +0x14 DWORD field_0x14
// @field ByteWriter +0x1c DWORD field_0x1c
void fn_0080FC70(void* self, uint8_t value) {
    if (lift_field<DWORD>(self, 0x1c) == 0) {
        ext_0080FB20(lift_field<void*>(self, 0x08), value);
        lift_field<DWORD>(self, 0x14) += 1;
    }
    lift_field<DWORD>(self, 0x10) += 1;
}
} // namespace lift_0080FC70

// [0x0080FEF0] sub_0080FEF0 (32 bytes)
namespace lift_0080FEF0 {
// Known callee 0x0080F700: strlen (Returns the length of a NUL-terminated string (equivalent to repne scasb strlen idiom).)
extern uint32_t ext_0080F700(const char* str);
// Known callee 0x0080FC10: AllocCopyString (Allocates n+1 zeroed bytes, copies up to n bytes from src into it with zero padding and a forced NUL terminator; returns the buffer (0 on allocation failure).)
extern uint32_t ext_0080FC10(const uint8_t* src, uint32_t n);

// @name CopyStringDuplicate
// @summary Duplicates a NUL-terminated string via AllocCopyString, sized by its strlen; returns the new buffer (0 on failure).
uint32_t fn_0080FEF0(const char* str) {
    uint32_t len = ext_0080F700(str);
    return ext_0080FC10(reinterpret_cast<const uint8_t*>(str), len);
}
} // namespace lift_0080FEF0

// [0x0080FBC0] sub_0080FBC0 (80 bytes)
namespace lift_0080FBC0 {
// Known callee 0x0080F700: strlen (Returns the length of a NUL-terminated string (equivalent to repne scasb strlen idiom).)
extern uint32_t ext_0080F700(const char* str);
// Known callee 0x0080FC10: AllocCopyString (Allocates n+1 zeroed bytes, copies up to n bytes from src into it with zero padding and a forced NUL terminator; returns the buffer (0 on allocation failure).)
extern uint32_t ext_0080FC10(const uint8_t* src, uint32_t n);
// Known callee 0x0080FC50: allocZero12 (Allocates a 12-byte object and zeroes its three 32-bit fields if allocation succeeds.)
extern uint32_t ext_0080FC50(void);

// @name AllocStringRecord
// @summary Allocates a 12-byte record holding a copy of str (+0x0), its length (+0x4), and length+1 (+0x8); returns the record or 0 on allocation failure.
// @field Object +0x00 uint32_t buffer
// @field Object +0x04 uint32_t length
// @field Object +0x08 uint32_t length_plus_one
uint32_t fn_0080FBC0(const char* str) {
    uint32_t record = ext_0080FC50();
    if (record == 0) {
        return 0;
    }
    void* obj = reinterpret_cast<void*>(static_cast<uintptr_t>(record));

    uint32_t buffer = ext_0080FC10(reinterpret_cast<const uint8_t*>(str), ext_0080F700(str));
    lift_field<uint32_t>(obj, 0x00) = buffer;
    if (buffer == 0) {
        lift_field<uint32_t>(obj, 0x08) = 0;
        lift_field<uint32_t>(obj, 0x04) = 0;
        return record;
    }

    uint32_t len = ext_0080F700(reinterpret_cast<const char*>(static_cast<uintptr_t>(buffer)));
    lift_field<uint32_t>(obj, 0x04) = len;
    lift_field<uint32_t>(obj, 0x08) = len + 1;
    return record;
}
} // namespace lift_0080FBC0

// [0x008039C0]
namespace lift_008039C0 {
// @name Heap_push
// @class Heap
// @summary Appends a value to a 1-based binary heap and sifts it up with a comparator; returns 0 when full.
// @field Heap +0x00 uint32_t* data
// @field Heap +0x04 int32_t capacity
// @field Heap +0x08 int32_t size
// @field Heap +0x0C int (__cdecl*)(uint32_t, uint32_t) less

using HeapLess = int(__cdecl*)(uint32_t, uint32_t);

static inline void heap_swap(uint32_t& a, uint32_t& b) {
    uint32_t t = a;
    a = b;
    b = t;
}

int Heap_push(void* self, uint32_t value) {
    uint32_t* data = lift_field<uint32_t*>(self, 0x00);
    int32_t capacity = lift_field<int32_t>(self, 0x04);
    int32_t& size = lift_field<int32_t>(self, 0x08);
    HeapLess less = lift_field<HeapLess>(self, 0x0C);

    if (size >= capacity) {
        return 0;
    }

    int32_t i = size + 1;
    size = i;
    data[i] = value;

    int32_t parent = i >> 1;
    while (parent != 0) {
        if (less(data[i], data[parent]) == 0) {
            break;
        }
        heap_swap(data[i], data[parent]);
        i = parent;
        parent = i >> 1;
    }
    return 1;
}
} // namespace lift_008039C0

// [0x00802D90]
namespace lift_00802D90 {
// @name sub_00802D90
// @summary Classify array elements against lower/upper bounds into two output int arrays
// @field +0x04 int32_t field_0x04
// @field +0x30 float* field_0x30
// @field +0x38 float* field_0x38
// @field +0x3C float* field_0x3C


void __thiscall sub_00802D90(void* this_ptr, int32_t* out1, int32_t* out2) {
    auto* base = static_cast<uint8_t*>(this_ptr);
    int32_t count = *reinterpret_cast<int32_t*>(base + 0x4);
    if (count <= 0) {
        return;
    }

    float* values = *reinterpret_cast<float**>(base + 0x30);
    float* upper = *reinterpret_cast<float**>(base + 0x38);
    float* lower = *reinterpret_cast<float**>(base + 0x3C);

    for (int32_t i = 0; i < count; ++i) {
        float v = values[i];
        if (v < lower[i]) {
            out1[i] = -1;
            out2[i] = 0;
        } else if (v > upper[i]) {
            out1[i] = -1;
            out2[i] = -1;
        } else {
            out1[i] = 0;
            out2[i] = 0;
        }
    }
}
} // namespace lift_00802D90

// [0x0080FAE0]
namespace lift_0080FAE0 {
extern uint32_t ext_00859730(void* hMem);
extern void ext_0080ABA0(void);
extern void ext_0080ABC0(void);

// @name FreeIfNonNull
// @summary If the pointer argument is non-null, frees it via LocalFreeWrapper.
void fn_0080FAE0(void* p)
{
    if (p != nullptr) {
        ext_0080ABA0();
        ext_00859730(p);
        ext_0080ABC0();
    }
}
} // namespace lift_0080FAE0
