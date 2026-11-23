// Lifted C++ translation unit: lifted/classes/Geometry.cpp
#include "lift_compat.h"

// [0x005B5C30]
namespace lift_005B5C30 {
extern void ext_005B4130();

// @name Geometry::vfunc_15
// @class Geometry
// @summary Returns its first stack argument; if the second argument equals 0x361 it calls ext_005B4130, otherwise it forwards (first, second) to vtable slot 18 of the object at this+0x0C.
// @field Geometry +0x0C void* field_0x0c
void* fn_005B5C30(void* self, void* a1, uint32_t a2) {
    if (a2 == 0x361) {
        ext_005B4130();
        return a1;
    }

    // Original: child = [self+0x0C]; vtable = [child]; slot 0x48 -> call with ecx=child, args (a1, a2).
    void* child = lift_field<void*>(self, 0x0C);
    void** vtbl = *reinterpret_cast<void***>(child);
    using SlotFn = void (*)(void* self, void* a1, uint32_t a2);
    reinterpret_cast<SlotFn>(vtbl[0x48 / sizeof(void*)])(child, a1, a2);
    return a1;
}
} // namespace lift_005B5C30
