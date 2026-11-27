// Lifted C++ translation unit: lifted/classes/GWCFontPropertyValue.cpp
#include "lift_compat.h"

// [0x006B4480] GWCFontPropertyValue::vfunc_5 (126 bytes)
namespace lift_006B4480 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762.)
extern void* ext_006A5C62(uint32_t size);
extern int mem_0092A5D4;

// @name GWCFontPropertyValue::vfunc_5
// @class GWCFontPropertyValue
// @summary Sets the flag at +0x34 and, for type 'n'/'x' at +0x04, swaps the object at +0x40 (releasing the old one via vtable slot 1 and allocating a new 8-byte node when the flag is set).
// @field GWCFontPropertyValue +0x04 uint32_t field_0x04
// @field GWCFontPropertyValue +0x34 uint8_t field_0x34
// @field GWCFontPropertyValue +0x40 void* field_0x40
void fn_006B4480(void* self, void* value, uint8_t flag) {
    using VFn = void(__thiscall*)(void*, int);

    if (lift_field<uint8_t>(self, 0x34) == 1) {
        uint32_t type = lift_field<uint32_t>(self, 0x04);
        if (type == 0x6E || type == 0x78) {
            void* obj = lift_field<void*>(self, 0x40);
            if (obj) {
                void** vtbl = lift_field<void**>(obj, 0);
                reinterpret_cast<VFn>(vtbl[1])(obj, 1);
            }
        }
    }

    lift_field<uint8_t>(self, 0x34) = flag;
    uint32_t type = lift_field<uint32_t>(self, 0x04);
    bool typeMatches = (type == 0x6E || type == 0x78);

    if (flag != 0) {
        if (!typeMatches) return;
        void* node = ext_006A5C62(8);
        if (node) {
            lift_field<uint32_t>(node, 4) = 0;
            lift_field<uint32_t>(node, 0) =
                static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&mem_0092A5D4));
            lift_field<void*>(self, 0x40) = node;
        } else {
            lift_field<void*>(self, 0x40) = nullptr;
        }
    } else {
        if (typeMatches) lift_field<void*>(self, 0x40) = value;
    }
}
} // namespace lift_006B4480
