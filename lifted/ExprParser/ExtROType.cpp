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
// Callee sub_004ECB40 receives (this-like object, 0) and cleans its own stack (stdcall-style, no caller cleanup).
extern "C" void ext_004ECB40(void* obj, int flag);

extern "C" void ext_004ECB40(void* obj, int flag);
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
extern "C" void ext_0066BA00(void* self);

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

// [0x0066AF40] ExprParser::ExtROType::vfunc_3 (20 bytes)
// @name ExprParser::ExtROType::vfunc_3
// @class ExprParser::ExtROType
// @summary Follows this->field_0x00 and its first pointer, then tail-calls virtual slot 3 of the object at +4 with the intermediate pointer as its argument.
// @field ExprParser::ExtROType +0x00 void* field_0x00

// Virtual slot 3 of the target object: thiscall, one stack argument, returns in eax.
using ExtROSlot3Fn = uintptr_t(__thiscall*)(void* self, void* arg);

uintptr_t fn_0066AF40(void* self) {
    unsigned char* outer  = *reinterpret_cast<unsigned char**>(self);
    unsigned char* inner  = *reinterpret_cast<unsigned char**>(outer);
    unsigned char* target = *reinterpret_cast<unsigned char**>(inner + 4);
    void** vtbl = *reinterpret_cast<void***>(target);
    auto fn = reinterpret_cast<ExtROSlot3Fn>(vtbl[3]);
    return fn(target, inner);
}

// [0x0066AF60] ExprParser::ExtROType::vfunc_5 (20 bytes)
// @name ExprParser::ExtROType::vfunc_5
// @class ExprParser::ExtROType
// @summary Tail-dispatches to vtable slot 5 of the object at self->inner+0x04, passing self->inner as this.
// @field ExprParser::ExtROType +0x00 void* inner
// @field ? +0x04 void* field_0x04   (accessed on the inner object; owning class not yet established)

using VFuncSlot5 = uint32_t (*)(void* self);

// Original is `mov eax,[esp+4]; mov eax,[eax]; mov ecx,[eax+4]; mov edx,[ecx];
// mov [esp+4],eax; mov eax,[edx+0x14]; jmp eax`. The jmp is a tail call, so the
// callee's return value (eax) is passed straight back to the caller.
uint32_t fn_0066AF60(void* self) {
    void* inner = *reinterpret_cast<void**>(self);                          // self +0x00
    void* target_obj = *reinterpret_cast<void**>(static_cast<char*>(inner) + 0x04); // inner +0x04
    void** vtbl = *reinterpret_cast<void***>(target_obj);                   // vtable of target_obj
    VFuncSlot5 fn = reinterpret_cast<VFuncSlot5>(vtbl[5]);                  // slot 5 (+0x14)
    return fn(inner);
}

// [0x0066B030]
// @name ExprParser::ExtROType::vfunc_6
// @class ExprParser::ExtROType
// @summary Tail-forwards to vtable slot 6 of the object at (*this)->+0x04, passing (*this) as the this/arg.
// @field ExprParser::ExtROType +0x00 void* field_0x00
// @field ExprParser::ValuePtrType +0x04 void* field_0x04

typedef void* (*ExtROForwardFn)(void* self);

void* ExprParser_ExtROType_vfunc_6(void* self) {
    // eax = [this + 0x00]  (inner pointer)
    void* inner = *reinterpret_cast<void**>(self);
    // ecx = [inner + 0x04], edx = [ecx] (vtable of that object)
    void* obj = *reinterpret_cast<void**>(static_cast<char*>(inner) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(obj);
    // jmp [vtbl + 0x18] (slot 6) with inner written over the stack argument
    ExtROForwardFn target = reinterpret_cast<ExtROForwardFn>(vtbl[6]);
    return target(inner);
}

// [0x0066AF80] ExprParser::ExtROType::vfunc_15 (20 bytes)
// @name ExprParser::ExtROType::vfunc_15
// @class ExprParser::ExtROType
// @summary Tail-forwards to vtable slot 15 of the object at (this->ptr)->+0x04, passing this->ptr as the argument.
// @field ExprParser::ExtROType +0x00 void* field_0x00
uint32_t fn_0066AF80(void* self) {
    using VFn = uint32_t(__thiscall*)(void* self, void* arg);

    // p = this->field_0x00 (pointer held by ExtROType)
    void* p = lift_field<void*>(self, 0x00);
    // obj = p->+0x04 (object whose virtual slot 15 is invoked)
    void* obj = lift_field<void*>(p, 0x04);
    // vtbl = obj->vptr; target = vtbl[15] (offset 0x3C)
    void** vtbl = lift_field<void**>(obj, 0x00);
    VFn target = reinterpret_cast<VFn>(lift_field<void*>(vtbl, 0x3C));

    // Tail call: callee's argument slot receives p; result stays in eax.
    return target(obj, p);
}

// [0x0066B9E0] ExprParser::ExtROType::vfunc_14 (20 bytes)
// @name ExprParser::ExtROType::vfunc_14
// @class ExprParser::ExtROType
// @summary Tail-forwards to vtable slot 14 (0x38) of the object at (*this)->+0x04, passing (*this) as the this/arg; returns the callee's eax.
// @field ExprParser::ExtROType +0x00 void* field_0x00

// Original: mov eax,[esp+4]; mov eax,[eax]; mov ecx,[eax+4]; mov edx,[ecx];
// mov [esp+4],eax; mov eax,[edx+0x38]; jmp eax.
// The jmp is a tail call, so the callee's return value (eax) is passed straight back.
uint32_t fn_0066B9E0(void* self) {
    void* inner = *reinterpret_cast<void**>(self);                                    // self +0x00
    void* target_obj = *reinterpret_cast<void**>(static_cast<char*>(inner) + 0x04);   // inner +0x04
    void** vtbl = *reinterpret_cast<void***>(target_obj);                             // vtable of target_obj
    using VFuncSlot14 = uint32_t (*)(void* self);
    VFuncSlot14 fn = reinterpret_cast<VFuncSlot14>(vtbl[14]);                         // slot 14 (+0x38)
    return fn(inner);
}

// [0x0066BB50]
// @name ExprParser::ExtROType::vfunc_47
// @class ExprParser::ExtROType
// @summary Calls ext_0066BA00 on the object, then invokes vtable slot 47 (+0xBC) of the inner object at +0x4 with the object as argument.
// @field ExprParser::ExtROType +0x04 void* field_0x04

#include "lift_compat.h"

void __cdecl ext_0066BA00(void* arg);

void __stdcall fn_0066BB50(void* esi) {
    ext_0066BA00(esi);

    void* inner = lift_field<void*>(esi, 4);
    void** vtbl = *reinterpret_cast<void***>(inner);
    using Slot47 = void(__thiscall*)(void* self, void* arg);
    auto fn = reinterpret_cast<Slot47>(vtbl[47]);
    fn(inner, esi);
}

// [0x0066CDF0] ExprParser::ExtROType::vfunc_0 (33 bytes)
// @name ExprParser::ExtROType::vfunc_0
// @class ExprParser::ExtROType
// @summary Calls ext_004ECB40(self, 0) and returns self; second argument is read but unused.
void* fn_0066CDF0(void* self, void* /*arg2*/) {
    ext_004ECB40(self, 0);
    return self;
}

// [0x0066BA40] ExprParser::ExtROType::vfunc_41 (34 bytes)
// @name ExprParser::ExtROType::vfunc_41
// @class ExprParser::ExtROType
// @summary Calls the base-class helper on self, then forwards (self, arg) to vtable slot 41 of the object at self+0x04.
// @field ExprParser::ExtROType +0x04 void* field_0x04 // object pointer; its vtable slot 41 (+0xA4) is dispatched
void fn_0066BA40(void* self, void* arg) {
    ext_0066BA00(self);

    auto* obj = *reinterpret_cast<void**>(static_cast<unsigned char*>(self) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(obj);
    using VFunc = void (*)(void* thisObj, void* a, void* b);
    auto fn = reinterpret_cast<VFunc>(vtbl[41]);
    fn(obj, self, arg);
}

// [0x0066BAC0] ExprParser::ExtROType::vfunc_44 (34 bytes)
// @name ExprParser::ExtROType::vfunc_44
// @class ExprParser::ExtROType
// @summary Calls the base-class helper on self, then forwards (self, arg) to vtable slot 44 of the object at self+0x04.
// @field ExprParser::ExtROType +0x04 void* field_0x04 // object pointer; its vtable slot 44 (+0xB0) is dispatched
void fn_0066BAC0(void* self, void* arg) {
    ext_0066BA00(self);

    auto* obj = *reinterpret_cast<void**>(static_cast<unsigned char*>(self) + 0x04);
    void** vtbl = *reinterpret_cast<void***>(obj);
    using VFunc = void (*)(void* thisObj, void* a, void* b);
    auto fn = reinterpret_cast<VFunc>(vtbl[44]);
    fn(obj, self, arg);
}

// [0x0066BA90]
// @name ExprParser::ExtROType::vfunc_43
// @class ExprParser::ExtROType
// @summary Calls ext_0066BA00 on the wrapper object, then forwards (obj, arg2) to vtable slot 43 (+0xAC) of the object held at +0x04.
// @field ExprParser::ExtROType +0x04 void* field_0x04

extern "C" void ext_0066BA00(void* self);

// Callee is a virtual method taking (this, arg1, arg2); the vtable slot is read at +0xAC.
typedef uint32_t (*VFunc43)(void* self, void* arg1, void* arg2);

uint32_t ExprParser_ExtROType_vfunc_43(void* self, void* arg2) {
    ext_0066BA00(self);

    // ecx = [self + 0x04]  -> wrapped object
    void* inner = lift_field<void*>(self, 0x04);
    // eax = [ecx]         -> vtable of wrapped object
    void** vtbl = lift_field<void**>(inner, 0);
    // eax = [vtbl + 0xAC] -> slot 43
    VFunc43 target = reinterpret_cast<VFunc43>(vtbl[0xAC / sizeof(void*)]);
    // push arg2; push self; call eax (this = inner)
    return target(inner, self, arg2);
}

// [0x0066BAF0]
// @name ExprParser::ExtROType::vfunc_45
// @class ExprParser::ExtROType
// @summary Calls ext_0066BA00 on the wrapper object, then forwards (obj, arg2) to vtable slot 45 (+0xB4) of the object held at +0x04.
// @field ExprParser::ExtROType +0x04 void* field_0x04

extern "C" void ext_0066BA00(void* self);

// Callee is a virtual method taking (this, arg1, arg2); the vtable slot is read at +0xB4.
typedef uint32_t (*VFunc45)(void* self, void* arg1, void* arg2);

uint32_t ExprParser_ExtROType_vfunc_45(void* self, void* arg2) {
    ext_0066BA00(self);

    // ecx = [self + 0x04]  -> wrapped object
    void* inner = lift_field<void*>(self, 0x04);
    // eax = [ecx]         -> vtable of wrapped object
    void** vtbl = lift_field<void**>(inner, 0);
    // eax = [vtbl + 0xB4] -> slot 45
    VFunc45 target = reinterpret_cast<VFunc45>(vtbl[0xB4 / sizeof(void*)]);
    // push arg2; push self; call eax (this = inner)
    return target(inner, self, arg2);
}
