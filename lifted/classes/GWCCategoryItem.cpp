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

// [0x006AF890] GWCCategoryItem::vfunc_6 (64 bytes)
namespace lift_006AF890 {
// Known callee 0x006A60EE: thunk_MFC80_ord_1185 (IAT jump thunk forwarding to MFC80!ord_1185.)
extern void ext_006A60EE();

// Virtual method slot 8 of child items, __thiscall with one stack argument.
using ChildVFnFlag = void(__thiscall*)(void*, uint8_t);

// @name GWCCategoryItem::vfunc_6
// @class GWCCategoryItem
// @summary Stores flag into the byte at this->field_0x04 + 4, then calls virtual slot 8 of each child in the field_0x54 array (count field_0x58) passing flag.
// @field GWCCategoryItem +0x04 void* field_0x04
// @field GWCCategoryItem +0x54 void** field_0x54
// @field GWCCategoryItem +0x58 int32_t field_0x58
void fn_006AF890(void* self, uint8_t flag) {
    lift_field<uint8_t>(lift_field<void*>(self, 0x04), 0x04) = flag;

    if (lift_field<int32_t>(self, 0x58) <= 0) {
        return;
    }

    int32_t i = 0;
    for (;;) {
        if (i < 0 || i >= lift_field<int32_t>(self, 0x58)) {
            ext_006A60EE();
            return;
        }
        void* item = lift_field<void**>(self, 0x54)[i];
        void** vtbl = *reinterpret_cast<void***>(item);
        reinterpret_cast<ChildVFnFlag>(vtbl[8])(item, flag);

        ++i;
        if (i >= lift_field<int32_t>(self, 0x58)) {
            return;
        }
    }
}
} // namespace lift_006AF890
