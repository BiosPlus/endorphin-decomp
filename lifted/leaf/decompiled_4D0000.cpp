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
