// Lifted C++ translation unit: lifted/ExprParser/VPtrProxyType.cpp
#include "lift_compat.h"
extern "C" void ext_00671FE0(void* self);

// [0x0066BB90] ExprParser::VPtrProxyType::vfunc_37 (12 bytes)
// @name ExprParser::VPtrProxyType::vfunc_37
// @class ExprParser::VPtrProxyType
// @summary Auto-lifted identical-shape clone of 0x0066BA30 (ExprParser::ExtROType::vfunc_38).
void fn_0066BB90(void* self) {
    ext_00671FE0(self);
}

// [0x0066BCE0] ExprParser::VPtrProxyType::vfunc_47 (23 bytes)
// @name ExprParser::VPtrProxyType::vfunc_47
// @class ExprParser::VPtrProxyType
// @summary Auto-lifted identical-shape clone of 0x0066AF80 (ExprParser::ExtROType::vfunc_15).
// @field ExprParser::VPtrProxyType +0x0 void* field_0x00
uint32_t fn_0066BCE0(void* self) {
    using VFn = uint32_t(__thiscall*)(void* self, void* arg);

    // p = this->field_0x00 (pointer held by ExtROType)
    void* p = lift_field<void*>(self, 0x00);
    // obj = p->+0x04 (object whose virtual slot 15 is invoked)
    void* obj = lift_field<void*>(p, 0x04);
    // vtbl = obj->vptr; target = vtbl[15] (offset 0x3C)
    void** vtbl = lift_field<void**>(obj, 0x00);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0xBC));

    // Tail call: callee's argument slot receives p; result stays in eax.
    return target(obj, p);
}
