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

// [0x00699650]
namespace lift_00699650 {
// @name ExprParser::ObjectType::vfunc_23
// @class ExprParser::ObjectType
// @summary Resolves a sub-object from arg1+0x2c, updates it via virtual calls if found, and initializes out.
// @field arg1 +0x2c uint8_t field_0x2c
// @field arg1 +0x48 uint8_t field_0x48
// @field arg1 +0x4c void* field_0x4c


void* __cdecl ext_006993A0(void* a0, uint32_t a1, uint32_t a2);
uint32_t __thiscall ext_006992E0(void* self, void* out, void* obj);
void __cdecl ext_00671F30(void* out);

void* __thiscall fn_00699650(void* self, void* out, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    (void)arg2;
    (void)arg3;
    (void)arg4;

    void* esi = ext_006993A0(static_cast<uint8_t*>(arg1) + 0x2c, 0, 0);
    if (esi == nullptr) {
        ext_00671F30(out);
        return out;
    }

    void* obj = *reinterpret_cast<void**>(static_cast<uint8_t*>(arg1) + 0x4c);
    void** obj_vtable = *reinterpret_cast<void***>(obj);
    using ObjVfunc = uint32_t(__thiscall*)(void*, void*);
    auto obj_fn = reinterpret_cast<ObjVfunc>(obj_vtable[0x60 / sizeof(void*)]);
    uint32_t val = obj_fn(obj, static_cast<uint8_t*>(arg1) + 0x48);

    void** esi_vtable = *reinterpret_cast<void***>(esi);
    using EsiVfunc = void(__thiscall*)(void*, uint32_t);
    auto esi_fn = reinterpret_cast<EsiVfunc>(esi_vtable[0x28 / sizeof(void*)]);
    esi_fn(esi, val);

    ext_006992E0(self, out, esi);
    return out;
}
} // namespace lift_00699650
