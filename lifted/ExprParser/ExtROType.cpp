// Lifted C++ translation unit: lifted/ExprParser/ExtROType.cpp
#include "lift_compat.h"
// Forwards its single argument (this) to ext_00672000; no fields accessed here.
extern "C" void ext_00672000(void* self);
// Virtual-call forwarder: reads the wrapped object pointer at +0x04, replaces the
// this-argument with the pointer at +0x00, and tail-calls vtable slot 21 (0x54) of
// the wrapped object. Modeled portably as an indirect call returning the callee's
// eax result.

// this-argument with the pointer at +0x00, and tail-calls vtable slot 21 (0x54) of
// the wrapped object. Modeled portably as an indirect call returning the callee's
// eax result.
// @summary Forwards the object pointer to ExprParser::ExtROType helper at 0x00672000.
void fn_0066BA30(void* self) {
    ext_00672000(self);
}

// [0x0066AFE0]
// @name ExprParser::ExtROType::vfunc_2
// @class ExprParser::ExtROType
// @summary Tail-forwards to vtable slot 2 of the object at (*this)->+0x04, passing (*this) as the this/arg.
// @field ExprParser::ExtROType +0x00 void* field_0x00

typedef void* (*ExtROForwardFn)(void* self);

void* ExprParser_ExtROType_vfunc_2(void* self) {
    // eax = [this + 0x00]  (inner pointer)
    void* inner = *reinterpret_cast<void**>(self);
    // ecx = [inner + 0x04], edx = [ecx] (vtable of that object)
    void* obj = *reinterpret_cast<void**>(static_cast<char*>(inner) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(obj);
    // jmp [vtbl + 0x08]  with inner written over the stack argument
    ExtROForwardFn target = reinterpret_cast<ExtROForwardFn>(vtbl[2]);
    return target(inner);
}

// [0x0066AFC0]
// @name ExprParser::ExtROType::vfunc_1
// @class ExprParser::ExtROType
// @summary Forwards vfunc_1 to the inner object: loads this->[0] -> P1, P1->[4] -> P2, then calls P2's vtable slot 1 with P1 as this.
// @field ExprParser::ExtROType +0x00 void* field_0x00

extern void* mem_read_ptr(void* addr, int offset);
extern void* mem_vtable_slot(void* obj, int index);

typedef void (*VFunc1)(void* self);

void ExprParser_ExtROType_vfunc_1(void* self) {
    // eax = *(self)                       -> P1
    void* p1 = *reinterpret_cast<void**>(self);
    // ecx = *(P1 + 4)                     -> P2
    void* p2 = *reinterpret_cast<void**>(static_cast<char*>(p1) + 0x4);
    // edx = *(P2)                         -> vtable of P2
    void** vtbl = *reinterpret_cast<void***>(p2);
    // eax = vtbl[1]; jmp eax with this = P1
    VFunc1 target = reinterpret_cast<VFunc1>(vtbl[1]);
    target(p1);
}

// [0x0066AFA0] ExprParser::ExtROType::vfunc_21 (20 bytes)
// @name ExprParser::ExtROType::vfunc_21
// @class ExprParser::ExtROType
// @summary Forwards vfunc_21 to the inner object at +0x04, passing the pointer at +0x00 as this.
// @field ExprParser::ExtROType +0x00 void* field_0x00
// @field ExprParser::ExtROType +0x04 void* field_0x04
uint32_t fn_0066AFA0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* inner = lift_field<void*>(base, 0x04);
    void* newThis = lift_field<void*>(base, 0x00);
    void** vtable = *static_cast<void***>(inner);
    using VFunc = uint32_t (*)(void*);
    return reinterpret_cast<VFunc>(vtable[21])(newThis);
}
