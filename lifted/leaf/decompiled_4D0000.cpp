// Lifted C++ translation unit: lifted/leaf/decompiled_4D0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x004DE130] sub_004DE130 (35 bytes)
namespace lift_004DE130 {
extern void* mem_00AE29D0;
extern void __thiscall ext_0047C480(void* self, uint32_t arg);
extern void ext_004C1AC0(void* self, const int32_t* range);
extern void __thiscall ext_004C1AC0(void* self, const int32_t* range);
extern void __thiscall ext_0047C480(void* self, uint32_t value);

// @name sub_004DE130
// @summary Auto-lifted identical-shape clone of 0x004A9C90 (NMData::BehaviourData::vfunc_73).
void __thiscall fn_004DE130(void* self, const int32_t* range) {
    ext_004C1AC0(self, range);
    uint32_t field_0x168 = lift_field<uint32_t>(self, 0x168);
    ext_0047C480(mem_00AE29D0, field_0x168);
}
} // namespace lift_004DE130

// [0x004DE440] sub_004DE440 (12 bytes)
namespace lift_004DE440 {
// Known callee 0x004DE160: sub_004DE160 (Returns (this->field_0x15c - this->field_0x9a0) + 1 as a 32-bit signed value.)
extern int32_t __fastcall ext_004DE160(void* self);

// @name ComputeRangeCountWithBias
// @summary Returns ext_004DE160(self) plus this->field_0x9d0 as a 32-bit signed value.
// @field self +0x9D0 int32_t field_0x9d0
int32_t fn_004DE440(void* self) {
    int32_t base = ext_004DE160(self);
    int32_t bias = lift_field<int32_t>(self, 0x9D0);
    return base + bias;
}
} // namespace lift_004DE440

// [0x004D0E00] sub_004D0E00 (16 bytes)
namespace lift_004D0E00 {
// Known callee 0x004D0B60: GetTableEntry28Address (Returns the address of entry `index` in a 28-byte-stride table based at 0x00AE5C10 (0xAE5C10 + index * 28).)
extern void* ext_004D0B60(uint32_t index);

// @name GetTableEntryForSelfIndex
// @class (none)
// @summary Reads the uint32 index stored at self+0x188 and returns the 28-byte-stride table entry address for it.
// @field self +0x188 uint32_t field_0x188
extern void* fn_004D0E00(void* self) {
    uint32_t index = lift_field<uint32_t>(self, 0x188);
    return ext_004D0B60(index);
}
} // namespace lift_004D0E00
