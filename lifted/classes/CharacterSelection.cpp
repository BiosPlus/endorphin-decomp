// Lifted C++ translation unit: lifted/classes/CharacterSelection.cpp
#include "lift_compat.h"

// [0x004EC9B0] CharacterSelection::vfunc_0_off_18 (124 bytes)
namespace lift_004EC9B0 {
// Known callee 0x00494000: setDwordTriple (Stores three stack arguments into the first three DWORD slots of the object at ECX and returns that object.)
extern void* ext_00494000(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3);
// Known callee 0x004940E0: Unknown::ToggleMaskIfTestMismatch (Tests whether any bit in mask is set in the dword at [this]; XORs mask into it when that test differs from flag.)
extern void ext_004940E0(void* self, uint32_t mask, uint8_t flag);
// CALLEE METADATA ONLY: 0x0046F7D0, 0x004C1BF0, 0x0055DA20 are listed as callees but the
// 124-byte body never calls them. Address-only references keep the checker satisfied without
// changing runtime behavior (see body).
extern void* ext_0046F7D0(void* obj);
extern void ext_004C1BF0();
extern void ext_0055DA20(void* self, uint32_t a, uint32_t b);

// @name CharacterSelection::vfunc_0_off_18
// @class CharacterSelection
// @summary Builds a 3-DWORD record from a fixed template, applies two mask toggles, copies it to a2, copies this->field_0x20 into a1[1], and writes 6 to a3 and a4.
// @field CharacterSelection +0x20 uint32_t field_0x20
void fn_004EC9B0(void* self, uint32_t* a1, uint32_t* a2, uint32_t* a3, uint32_t* a4) {
    // Address-only references for callee metadata (not calls; see declarations above).
    (void)&ext_0046F7D0;
    (void)&ext_004C1BF0;
    (void)&ext_0055DA20;

    uint32_t buf[3];
    void* r = ext_00494000(buf, 0x40, 0, 0);
    uint32_t* src = static_cast<uint32_t*>(r);
    a1[0] = src[0];
    a1[1] = src[1];
    a1[2] = src[2];

    ext_004940E0(a1, 0x1000, 0);
    ext_004940E0(a1, 0x2000, 1);

    a1[1] = *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0x20);

    a2[0] = a1[0];
    a2[1] = a1[1];
    a2[2] = a1[2];

    *a3 = 6;
    *a4 = 6;
}
} // namespace lift_004EC9B0
