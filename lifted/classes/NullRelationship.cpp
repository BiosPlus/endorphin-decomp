// Lifted C++ translation unit: lifted/classes/NullRelationship.cpp
#include "lift_compat.h"

// [0x00645570] NullRelationship::vfunc_43 (49 bytes)
namespace lift_00645570 {
// Known callee 0x00647F00: sub_00647F00 (Auto-lifted identical-shape clone of 0x00648480 (GetIndirectField_0x5c_0x00).)
extern uint32_t ext_00647F00(void* self);
extern void ext_0067E990(void* self, uint32_t arg);

// @name NullRelationship::vfunc_43
// @class NullRelationship
// @summary Copies 16 dwords from src into this+0x6c, then if this+0x68 is non-null, passes it to ext_00647F00 and forwards the result to ext_0067E990 on the copied block.
// @field NullRelationship +0x68 uint32_t field_0x68
// @field NullRelationship +0x6c uint32_t field_0x6c[16]
void fn_00645570(void* self, const uint32_t* src) {
    uint8_t* base = static_cast<uint8_t*>(self);
    std::memcpy(base + 0x6c, src, 16 * sizeof(uint32_t));

    uint32_t ctx = lift_field<uint32_t>(self, 0x68);
    if (ctx != 0) {
        uint32_t result = ext_00647F00(reinterpret_cast<void*>(static_cast<uintptr_t>(ctx)));
        ext_0067E990(base + 0x6c, result);
    }
}
} // namespace lift_00645570

// [0x00645A80] sub_00645A80 (78 bytes)
namespace lift_00645A80 {
// No ext_ or mem_ symbols are referenced by this function.

// @name NullRelationship::vfunc_48
// @class NullRelationship
// @summary Clears this->field_0x68, loads it from obj->+0x22C->+0x158->+0xAC when that chain is non-null, then calls embedded-base vslot 5 with arg2 and passes the result to this vslot 0x2B; returns that call's result.
// @field NullRelationship +0x00 uint32_t vtable
// @field NullRelationship +0x68 uint32_t field_0x68
namespace lift_00645A80 {

uint32_t fn_00645A80(void* self, void* obj, uint32_t arg2) {
    // Thiscall signatures: (void* this, uint32_t a) -> uint32_t.
    typedef uint32_t(__thiscall* VFn)(void* self, uint32_t a);

    // this->field_0x68 = 0;
    lift_field<uint32_t>(self, 0x68) = 0u;

    // if (obj->+0x22C && ->+0x158) this->field_0x68 = ->+0xAC;
    // Offsets +0x22C, +0x158 and +0xAC belong to objects that are not
    // part of NullRelationship, so they are accessed by offset only.
    void* p = lift_field<void*>(obj, 0x22C);
    if (p != nullptr) {
        void* q = lift_field<void*>(p, 0x158);
        if (q != nullptr) {
            lift_field<uint32_t>(self, 0x68) = lift_field<uint32_t>(q, 0xAC);
        }
    }

    // Embedded base at obj+0x04: call its vtable slot 5 (+0x14) as thiscall(arg2).
    uint8_t* base = static_cast<uint8_t*>(obj) + 0x04;
    void** baseVt = *reinterpret_cast<void***>(base);
    VFn first = reinterpret_cast<VFn>(baseVt[5]);
    uint32_t result = first(base, arg2);

    // Then this's vtable slot 0x2B (+0xAC) as thiscall(result); return its value.
    void** selfVt = *reinterpret_cast<void***>(self);
    VFn second = reinterpret_cast<VFn>(selfVt[0x2B]);
    return second(self, result);
}

} // namespace lift_00645A80
} // namespace lift_00645A80
