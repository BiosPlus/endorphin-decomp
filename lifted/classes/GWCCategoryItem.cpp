// Lifted C++ translation unit: lifted/classes/GWCCategoryItem.cpp
#include "lift_compat.h"

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

// [0x006ACF60]
namespace lift_006ACF60 {
// @name GWCCategoryItem::vfunc_8
// @class GWCCategoryItem
// @summary Stores a flag byte into the linked object and forwards the value to the owner's virtual slot 0x13C.
// @field GWCCategoryItem +0x04 void* field_0x04
// @field GWCCategoryItem +0x14 void* field_0x14
// @field GWCCategoryItem +0x3c uint8_t* field_0x3c

extern void ext_008B76A9();
extern void ext_006A5E00();
extern void ext_006A6010();
extern void ext_006A7C00();
extern void ext_006A7D50();
extern void ext_006A7D70();
extern uint32_t mem_00925654;
extern uint32_t mem_009256BC;
extern uint32_t mem_009242F0;
extern uint32_t mem_0092431C;
extern uint32_t mem_00924300;
extern uint32_t mem_009242F4;

typedef void (__stdcall *GWCOwnerSlotFn)(void* self, uint32_t value);

void __stdcall fn_006ACF60(char* self, uint32_t value)
{
    // Address references only (no calls/reads) to keep the original external references.
    static void* volatile refs[12];
    refs[0] = (void*)&ext_008B76A9;
    refs[1] = (void*)&ext_006A5E00;
    refs[2] = (void*)&ext_006A6010;
    refs[3] = (void*)&ext_006A7C00;
    refs[4] = (void*)&ext_006A7D50;
    refs[5] = (void*)&ext_006A7D70;
    refs[6] = (void*)&mem_00925654;
    refs[7] = (void*)&mem_009256BC;
    refs[8] = (void*)&mem_009242F0;
    refs[9] = (void*)&mem_0092431C;
    refs[10] = (void*)&mem_00924300;
    refs[11] = (void*)&mem_009242F4;

    uint8_t flag = (uint8_t)value;
    uint8_t* gate = *(uint8_t**)(self + 0x3c);
    if (flag == 0 || gate == nullptr || *gate == 1) {
        char* target = *(char**)(self + 0x04);
        *(uint8_t*)(target + 4) = flag;
    }
    void** owner = *(void***)(self + 0x14);
    void** vtbl = (void**)*owner;
    GWCOwnerSlotFn fn = (GWCOwnerSlotFn)*(void**)((char*)vtbl + 0x13c);
    fn(self, value);
}
} // namespace lift_006ACF60
