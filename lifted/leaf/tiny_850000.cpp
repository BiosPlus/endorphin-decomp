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
