// Lifted C++ translation unit: lifted/classes/GWCDateTimePropertyValue.cpp
#include "lift_compat.h"

// [0x006B3D40] GWCDateTimePropertyValue::vfunc_1 (123 bytes)
namespace lift_006B3D40 {
extern int mem_0092431C;
extern int mem_00924300;
extern int mem_009242F4;

namespace {

// Resolve an MFC80 import slot (IAT entry) into its callable address.
inline void* import_slot(const int& slot) {
    return *reinterpret_cast<void* const*>(&slot);
}

// vtable[2](out): returns an object pointer in eax.
using VCall2 = void* (*)(void* self, void* out);
// vtable[28](arg): result discarded.
using VCall28 = void (*)(void* self, void* arg);
// MFC80!ord_2902: thiscall, stack args (int32_t* p, uint32_t id).
using Ord2902 = void* (*)(void* self, int32_t* p, uint32_t id);
// MFC80!ord_876: thiscall, one stack arg.
using Ord876 = void* (*)(void* self, void* arg);
// MFC80!ord_578: thiscall destructor-style cleanup of the temporary.
using Ord578 = void (*)(void* self);

}  // namespace

// @name GWCDateTimePropertyValue::vfunc_1
// @class GWCDateTimePropertyValue
// @summary Builds a formatted string via self's vtable[2] and MFC80 helpers, then passes it to obj's vtable[28].
// (No data fields accessed on self; only vtable slots are read, so no @field lines.)
void fn_006B3D40(void* self, void* obj, int32_t arg2, uint32_t a3, uint32_t a4,
                 uint32_t a5, uint32_t a6, uint32_t a7) {
    // Stack args a3..a7 are part of the ret 0x1c calling convention and are unused.
    [[maybe_unused]] uint32_t unused_args[5] = {a3, a4, a5, a6, a7};

    // Original increments the second stack argument before any call.
    arg2 += 2;

    void* tmp = nullptr;

    // self->vtable[2](&tmp) -> object used as `this` for the MFC calls.
    void** self_vt = *reinterpret_cast<void***>(self);
    void* str = reinterpret_cast<VCall2>(self_vt[2])(self, &tmp);

    // Snapshot obj's vtable before any MFC calls (matches original load order).
    void** obj_vt = *reinterpret_cast<void***>(obj);

    // Original sets the SEH try-state here; C++ has no equivalent, so it is omitted.
    void* r1 = reinterpret_cast<Ord2902>(import_slot(mem_0092431C))(str, &arg2, 0x8024u);
    void* r2 = reinterpret_cast<Ord876>(import_slot(mem_00924300))(str, r1);

    // obj->vtable[28](r2): 0x70 / 4 == slot 28.
    reinterpret_cast<VCall28>(obj_vt[28])(obj, r2);

    reinterpret_cast<Ord578>(import_slot(mem_009242F4))(&tmp);
}
} // namespace lift_006B3D40
