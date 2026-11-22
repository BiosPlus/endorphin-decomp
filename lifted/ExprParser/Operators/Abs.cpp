// Lifted C++ translation unit: lifted/ExprParser/Operators/Abs.cpp
#include "lift_compat.h"

// [0x006A1CD0] ExprParser::Operators::Abs::vfunc_3 (21 bytes)
// @name ExprParser::Operators::Abs::vfunc_3
// @class ExprParser::Operators::Abs
// @summary Forwards to virtual slot 47 (+0xBC) of the object at self+0x04, passing self as the argument.
// @field ExprParser::Operators::Abs +0x04 void* field_0x04   (child object; owning class in the UnaryOperator/UnaryFunction base not confirmed)

// Original: mov eax,[esp+4]; mov ecx,[eax+4]; mov edx,[ecx]; mov [esp+4],eax; mov eax,[edx+0xbc]; jmp eax
// Tail-jumps into the child's thiscall slot 47 (ecx = child, stack arg = self).
uint32_t fn_006A1CD0(void* self) {
    void* child = lift_field<void*>(self, 0x04);                 // self +0x04
    void** vtable = *reinterpret_cast<void***>(child);           // child +0x00 (vptr)
    using SlotFn = uint32_t (*)(void* thisp, void* arg);
    auto slot47 = reinterpret_cast<SlotFn>(vtable[0xbc / sizeof(void*)]);
    return slot47(child, self);
}
