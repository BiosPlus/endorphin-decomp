// Lifted C++ translation unit: lifted/leaf/tiny_850000.cpp
#include "lift_compat.h"
extern "C" void ext_00868180(void);

// [0x0085DA80] sub_0085DA80 (16 bytes)
// @name sub_0085DA80
// @summary Empty function (returns immediately).
extern "C" void __cdecl fn_0085DA80(void) {
    return;
}

// [0x0085DE10] sub_0085DE10 (16 bytes)
// @name sub_0085DE10
// @summary Pure jump thunk forwarding to sub_00868180.
extern "C" void fn_0085DE10(void) {
    ext_00868180();
}

// [0x0085E210] sub_0085E210 (16 bytes)
// @name sub_0085E210
// @summary Empty function (returns immediately).
extern "C" void __cdecl fn_0085E210(void) {
    return;
}

// [0x0085F730] sub_0085F730 (16 bytes)
// @name sub_0085F730
// @summary Empty function (returns immediately).
extern "C" void __cdecl fn_0085F730(void) {
    return;
}

// [0x00852427]
namespace lift_00852427 {
template <typename T>
T mem_read(uint32_t addr);

// @name thunk_jmp_esi_00852427
// @summary Pops 4 bytes from stack and tail-jumps to the function pointer at [esi]
void thunk_jmp_esi_00852427(uint32_t esi) {
    using Fn = void (*)();
    Fn target = reinterpret_cast<Fn>(static_cast<uintptr_t>(mem_read<uint32_t>(esi)));
    target();
}
} // namespace lift_00852427

// [0x008523A4]
namespace lift_008523A4 {
extern void ext_0084A145();

// @name adjustStackAndTailCall_0084A145
// @summary Adjusts the stack pointer by 4 bytes and tail-calls ext_0084A145.
void sub_008523A4() {
    ext_0084A145();
}
} // namespace lift_008523A4

// [0x0085E690]
namespace lift_0085E690 {
// @name ToUpperAscii
// @summary Converts an ASCII lowercase letter (a-z) to uppercase; other values are returned unchanged. Result is in AL.
uint8_t ToUpperAscii(uint8_t ch) {
    uint8_t al = ch;
    if (al >= 0x61 && al <= 0x7A) {
        al = static_cast<uint8_t>(al - 0x20);
    }
    return al;
}
} // namespace lift_0085E690

// [0x00856FE0]
namespace lift_00856FE0 {
// @name sub_00856FE0
// @summary Copies a 32-bit value from a source pointer to a destination pointer and returns 0.
// @field stack +0x04 ptr dst (first argument, written through)
// @field stack +0x08 ptr src (second argument, read through)

uint32_t sub_00856FE0(uint32_t* dst, const uint32_t* src) {
    uint32_t value = *src;
    *dst = value;
    return 0;
}
} // namespace lift_00856FE0

// [0x008596E0] sub_008596E0 (16 bytes)
namespace lift_008596E0 {
// @name sub_008596E0
// @summary Auto-lifted identical-shape clone of 0x0079AF40 (GlobalAllocZeroFlags).
namespace lift_0079AF40 {
extern uint32_t mem_00924214;  // IAT slot holding KERNEL32!GlobalAlloc
extern HGLOBAL __stdcall ext_GlobalAlloc(UINT uFlags, SIZE_T dwBytes);

// @name GlobalAllocZeroFlags
// @summary Allocates a global memory block of the requested size with uFlags = 0 (GMEM_FIXED) and returns the handle.
uint32_t __cdecl fn_008596E0(uint32_t size) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ext_GlobalAlloc(0, static_cast<SIZE_T>(size))));
}
} // namespace lift_0079AF40
} // namespace lift_008596E0

// [0x00859730] sub_00859730 (16 bytes)
namespace lift_00859730 {
// @name sub_00859730
// @summary Auto-lifted identical-shape clone of 0x0079AF50 (GlobalFreeWrapper).
namespace lift_0079AF50 {
extern HGLOBAL ext_GlobalFree(HGLOBAL hMem);
extern int mem_00924210;

// @name GlobalFreeWrapper
// @summary Frees a global memory handle via KERNEL32!GlobalFree and returns its result.
HGLOBAL fn_00859730(HGLOBAL hMem) {
    return ext_GlobalFree(hMem);
}
} // namespace lift_0079AF50
} // namespace lift_00859730

// [0x00859D30]
namespace lift_00859D30 {
// @name sub_00859D30
// @summary Follows an indirection when flag 0x4 is set at +0x14, then returns the pointer at +0x4.
// @field Unknown +0x00 ptr field_0x00
// @field Unknown +0x04 ptr field_0x04
// @field Unknown +0x14 u8 field_0x14

uint32_t sub_00859D30(uint32_t arg0) {
    uint32_t eax = arg0;
    if (*reinterpret_cast<uint8_t*>(eax + 0x14) & 0x04) {
        eax = *reinterpret_cast<uint32_t*>(eax);
    }
    eax = *reinterpret_cast<uint32_t*>(eax + 0x04);
    return eax;
}
} // namespace lift_00859D30

// [0x0085BC20]
namespace lift_0085BC20 {
// @name GetField08
// @summary Returns the 32-bit value at offset +0x08 of the object pointed to by the first stack argument.
// @field field_0x08 +0x08 uint32_t field_0x08
// @field ...

uint32_t GetField08(uint32_t self_ptr) {
    return *reinterpret_cast<uint32_t*>(self_ptr + 0x08);
}
} // namespace lift_0085BC20

// [0x0085C260]
namespace lift_0085C260 {
// @name setFlagBit1Offset14
// @summary Sets bit 1 (0x2) in the 32-bit word at +0x14 of the object passed as the first argument.
// @field Object +0x14 uint32_t field_0x14

void setFlagBit1Offset14(void* self) {
    auto* base = reinterpret_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x14) |= 0x2u;
}
} // namespace lift_0085C260
