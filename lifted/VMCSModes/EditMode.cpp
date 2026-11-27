// Lifted C++ translation unit: lifted/VMCSModes/EditMode.cpp
#include "lift_compat.h"

// [0x004F2F90] VMCSModes::EditMode::vfunc_109 (137 bytes)
namespace lift_004F2F90 {
// Known callee 0x00530290: Unknown::selectIndex3Adjusted (Selects index arg0 (remapping 3 to 7 when the field at +0x88 already equals 3), stores it at +0x70, updates the container at +0x38, then invokes vtable slot 0x154 on the object at +0x10.)
extern void ext_00530290(void* self, uint32_t arg0);
extern void* ext_006AD190(void* self);
extern void ext_00666120(void* self);
extern int mem_009542B8;

// Vtable-dispatched member signatures (thiscall on MSVC; empty macro on portable builds).
using VSlotRet = bool (*)(void*);
using VSlotPtr = void* (*)(void*);
using VSlotVoid = void (*)(void*);
using VSlotVoidInt = void (*)(void*, int);

// Load the function pointer stored at byte offset `off` in the vtable of `obj`.
static inline void* vslot(void* obj, ptrdiff_t off) {
    void* vt = lift_field<void*>(obj, 0);
    return lift_field<void*>(vt, off);
}

// @name VMCSModes::EditMode::vfunc_109
// @class VMCSModes::EditMode
// @summary Conditionally runs a vtable-driven edit sequence on the container at +0x08, selecting index 1 on the result and calling Unknown::selectIndex3Adjusted when a helper object is found.
// @field VMCSModes::EditMode +0x00 void* vtable
// @field VMCSModes::EditMode +0x08 void* field_0x08
void fn_004F2F90(void* self) {
    // Gate: vtable slot 0x1A4 must report true.
    if (!reinterpret_cast<VSlotRet>(vslot(self, 0x1A4))(self))
        return;

    void* a = lift_field<void*>(self, 0x08);   // self+0x08
    void* b = lift_field<void*>(a, 0x14);      // a+0x14
    void* c = lift_field<void*>(b, 0x30);      // b+0x30

    // d = c->vslot[0xB4]()  (may be null)
    void* d = reinterpret_cast<VSlotPtr>(vslot(c, 0xB4))(c);

    // Default value comes from the rdata constant's low dword; overwritten from d+0x38 when d is set.
    int32_t ebx = mem_009542B8;
    if (d)
        ebx = lift_field<int32_t>(d, 0x38);

    reinterpret_cast<VSlotVoid>(vslot(self, 0xD4))(self);

    ext_00666120(lift_field<void*>(a, 0x38));

    void* s = ext_006AD190(b);

    reinterpret_cast<VSlotVoidInt>(vslot(s, 0x38))(s, 1);
    reinterpret_cast<VSlotVoid>(vslot(s, 0xD4))(s);
    reinterpret_cast<VSlotVoid>(vslot(s, 0x3C))(s);

    if (d)
        ext_00530290(d, static_cast<uint32_t>(ebx));
}
} // namespace lift_004F2F90

// [0x004F38D0]
namespace lift_004F38D0 {
// @name VMCSModes::EditMode::vfunc_116
// @class VMCSModes::EditMode
// @summary Renders or updates edit mode geometry with optional highlight color under a scoped lock/stop-request guard.
// @field VMCSModes::EditMode +0x08 void* field_0x08

extern void ext_00472350(void* self);
extern void ext_005B5810(void* self, int32_t count, const void* vec4);
extern void ext_005B1B60(void* self, const void* src);
extern void ext_004F3690(void* self, void* geom, uint32_t arg0, uint32_t arg1);
extern void ext_005B1870(void* self);
extern void ext_0046F930(void* self);

extern uint8_t mem_00AD89B4[];
extern uint8_t mem_009324A4[];
extern uint8_t mem_00940694[];
extern uint8_t mem_0094CBE0[];

void fn_004F38D0(void* self, uint32_t arg0) {
    void* field_08 = lift_field<void*>(self, 0x08);
    void* guard_obj = lift_field<void*>(field_08, 0x14);

    if (guard_obj != nullptr) {
        if (*reinterpret_cast<int32_t*>(mem_00AD89B4) == 0) {
            lift_field<uint8_t>(guard_obj, 0x153) = 1;
            ext_00472350(guard_obj);
        }
        *reinterpret_cast<int32_t*>(mem_00AD89B4) += 1;
    }

    alignas(16) uint8_t geom[0x60]{};
    float color1[4] = {
        *reinterpret_cast<const float*>(mem_009324A4),
        1.0f,
        0.0f,
        1.0f,
    };
    ext_005B5810(geom, 4, color1);

    if ((arg0 & 0xFFu) != 0) {
        float color2[4] = {
            *reinterpret_cast<const float*>(mem_00940694),
            *reinterpret_cast<const float*>(mem_0094CBE0),
            *reinterpret_cast<const float*>(mem_0094CBE0),
            1.0f,
        };
        ext_005B1B60(geom, color2);
    }

    ext_004F3690(self, geom, arg0, 0);
    ext_005B1870(geom);

    if (guard_obj != nullptr) {
        *reinterpret_cast<int32_t*>(mem_00AD89B4) -= 1;
        if (*reinterpret_cast<int32_t*>(mem_00AD89B4) == 0) {
            lift_field<uint8_t>(guard_obj, 0x153) = 0;
            ext_0046F930(guard_obj);
        }
    }
}
} // namespace lift_004F38D0
