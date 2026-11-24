// Lifted C++ translation unit: lifted/classes/GWCCategoryItem.cpp
#include "lift_compat.h"

// [0x006ACF60]
namespace lift_006ACF60 {
// @name GWCCategoryItem::vfunc_8
// @class GWCCategoryItem
// @summary Updates visibility/state flag on inner object and notifies parent/owner via vtable+0x13c.
// @field GWCCategoryItem +0x04 void* field_0x04
// @field GWCCategoryItem +0x14 void* field_0x14
// @field GWCCategoryItem +0x3c uint8_t* field_0x3c

void __thiscall fn_006ACF60(void* self, uint32_t arg0) {
    uint8_t* base = (uint8_t*)self;
    uint8_t flag = (uint8_t)(arg0 & 0xFF);
    if (flag == 0) {
        uint8_t* obj4 = *(uint8_t**)(base + 0x04);
        *(obj4 + 0x04) = flag;
    } else {
        uint8_t* obj3c = *(uint8_t**)(base + 0x3c);
        if (obj3c == nullptr || *obj3c == 1) {
            uint8_t* obj4 = *(uint8_t**)(base + 0x04);
            *(obj4 + 0x04) = flag;
        }
    }

    void* obj14 = *(void**)(base + 0x14);
    uintptr_t* vtbl = *(uintptr_t**)obj14;
    typedef void (__thiscall *vfunc_t)(void*, void*, uint32_t);
    vfunc_t fn = (vfunc_t)vtbl[0x13c / sizeof(uintptr_t)];
    fn(obj14, self, arg0);
}
} // namespace lift_006ACF60
