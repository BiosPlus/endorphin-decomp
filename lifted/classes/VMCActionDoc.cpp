// Lifted C++ translation unit: lifted/classes/VMCActionDoc.cpp
#include "lift_compat.h"

// [0x004673A0]
namespace lift_004673A0 {
extern bool ext_004663A0(void* self);
extern void ext_006A6AA2(void);
extern void ext_00467380(void* self);

// @name VMCActionDoc::vfunc_41
// @class VMCActionDoc
// @summary Gate on ext_004663A0; if the state at +0x60 is 0 forward to the MFC thunk, if 1 run the helper and then invoke the vtable slot at +0x64 with arg 0; otherwise return false.
// @field VMCActionDoc +0x00 void** vtbl
// @field VMCActionDoc +0x60 int32_t field_0x60
bool fn_004673A0(void* self) {
    if (!ext_004663A0(self)) {
        return false;
    }

    const int32_t state = lift_field<int32_t>(self, 0x60);
    if (state == 0) {
        // Original is a tail jmp to ext_006A6AA2 with ecx = this; the thunk's
        // return value is not modeled (its prototype is void).
        ext_006A6AA2();
        return false;
    }
    if (state != 1) {
        return false;
    }

    ext_00467380(self);

    void** vtbl = lift_field<void**>(self, 0x00);
    using SlotFn = void (*)(void*, int32_t);
    SlotFn slot = reinterpret_cast<SlotFn>(lift_field<void*>(vtbl, 0x64));
    slot(self, 0);
    return true;
}
} // namespace lift_004673A0
