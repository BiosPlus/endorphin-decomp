// Lifted C++ translation unit: lifted/classes/ButtonPanel.cpp
#include "lift_compat.h"

// [0x00455C30] ButtonPanel::vfunc_93 (77 bytes)
namespace lift_00455C30 {
// @name ButtonPanel::vfunc_93
// @class ButtonPanel
// @summary Stores three int pairs (a3/a4 into fields at +0x9C..+0xB0) and forwards a1,a2,a6,a7 to vtable slot 92 (+0x170).
// @field ButtonPanel +0x9C int field_0x9C
// @field ButtonPanel +0xA0 int field_0xA0
// @field ButtonPanel +0xA4 int field_0xA4
// @field ButtonPanel +0xA8 int field_0xA8
// @field ButtonPanel +0xAC int field_0xAC
// @field ButtonPanel +0xB0 int field_0xB0
void fn_00455C30(void* self, int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
    (void)a5;
    auto* base = reinterpret_cast<unsigned char*>(self);
    auto store = [&](std::size_t off, int value) {
        *reinterpret_cast<int*>(base + off) = value;
    };

    store(0xB0, a4);
    store(0xA8, a4);
    store(0xA0, a4);
    store(0xAC, a3);
    store(0xA4, a3);
    store(0x9C, a3);

    // Virtual call through vtable slot 92 (byte offset 0x170 on the 32-bit target).
    void** vtable = *reinterpret_cast<void***>(self);
    using VFunc = void (*)(void* self, int, int, int, int);
    auto fn = reinterpret_cast<VFunc>(vtable[0x170 / 4]);
    fn(self, a1, a2, a6, a7);
}
} // namespace lift_00455C30
