// Lifted C++ translation unit: lifted/ExprParser/ObjectType.cpp
#include "lift_compat.h"

// [0x006990C0]
namespace lift_006990C0 {
extern void ext_00671F30();
extern void ext_006992E0();
extern void ext_006993A0();
extern void (__thiscall* mem_00924FE8)(void* self);

// @name ExprParser::ObjectType::getSubObjectString
// @class ExprParser::ObjectType
// @summary Looks up a sub-object via vtable+0x60 and invokes its vtable+0x20 method on out_str, or default-constructs an empty std::string in out_str if null.
// @field ExprParser::ObjectType +0x00 void** vtable
void* __thiscall fn_006990C0(void* self, void* out_str, uint32_t arg2) {
    using VFunc60 = void* (__thiscall*)(void*, uint32_t);
    using VFunc20 = void (__thiscall*)(void*, void*);

    void** vtable = *reinterpret_cast<void***>(self);
    void* obj = reinterpret_cast<VFunc60>(vtable[0x60 / 4])(self, arg2);
    if (obj != nullptr) {
        void** obj_vtable = *reinterpret_cast<void***>(obj);
        reinterpret_cast<VFunc20>(obj_vtable[0x20 / 4])(obj, out_str);
    } else {
        mem_00924FE8(out_str);
    }
    // Metadata-listed callees not directly invoked in the 0x006990C0 disassembly
    (void)&ext_00671F30;
    (void)&ext_006992E0;
    (void)&ext_006993A0;
    return out_str;
}
} // namespace lift_006990C0
