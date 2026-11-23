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
