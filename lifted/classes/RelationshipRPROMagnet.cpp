// Lifted C++ translation unit: lifted/classes/RelationshipRPROMagnet.cpp
#include "lift_compat.h"

// [0x00648EF0]
namespace lift_00648EF0 {
extern uint32_t ext_007D8700(uint32_t arg0);
extern uint32_t ext_007C9260(void* self);

// @name RelationshipRPROMagnet::vfunc_49
// @class RelationshipRPROMagnet
// @summary Returns 1 if bit 0 of the field at +0x9C of the object stored at this+0x94 (passed through ext_007D8700) is set, otherwise 0.
// @field RelationshipRPROMagnet +0x94 uint32_t field_0x94
uint32_t RelationshipRPROMagnet_vfunc_49(void* self) {
    const uint32_t v94 = lift_field<uint32_t>(self, 0x94);
    const uint32_t obj = ext_007D8700(v94);
    const uint32_t bit0 = ext_007C9260(reinterpret_cast<void*>(static_cast<uintptr_t>(obj)));
    return bit0 != 0 ? 1u : 0u;
}
} // namespace lift_00648EF0

// [0x00648F90]
namespace lift_00648F90 {
// @name RelationshipRPROMagnet::vfunc_50
// @class RelationshipRPROMagnet
// @summary Releases and clears field_0x94 if non-null after invoking vtable+0x1c
// @field RelationshipRPROMagnet +0x94 uint32_t field_0x94


extern uint32_t ext_007D8700(uint32_t arg0);
extern void ext_007C9930(void* self);

extern void __thiscall fn_00648F90(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint32_t ptr = *reinterpret_cast<uint32_t*>(obj + 0x94);
    if (ptr != 0) {
        uint32_t* vtable = *reinterpret_cast<uint32_t**>(obj);
        auto vfunc = reinterpret_cast<void (__thiscall*)(void*)>(vtable[0x1c / 4]);
        vfunc(self);

        uint32_t val = ext_007D8700(*reinterpret_cast<uint32_t*>(obj + 0x94));
        ext_007C9930(reinterpret_cast<void*>(static_cast<uintptr_t>(val)));
        *reinterpret_cast<uint32_t*>(obj + 0x94) = 0;
    }
}
} // namespace lift_00648F90
