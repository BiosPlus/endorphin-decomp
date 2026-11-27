// Lifted C++ translation unit: lifted/classes/JointTool.cpp
#include "lift_compat.h"

// [0x005470F0]
namespace lift_005470F0 {
// @name JointTool::vfunc_23
// @class JointTool
// @summary Calls vslot +0x38 on the object held at +0x88 with arg 1, then tail-calls vslot +0x68 on this.
// @field JointTool +0x88 void* field_0x88

namespace {

using SlotFnWithInt = void (*)(void* self, int arg);
using SlotFnNoArgs = void (*)(void* self);

// Returns the function pointer stored at byteOffset in obj's vtable.
inline void* vtable_slot(void* obj, ptrdiff_t byteOffset) {
    void* vptr = lift_field<void*>(obj, 0);
    return lift_field<void*>(vptr, byteOffset);
}

} // namespace

void JointTool_vfunc_23(void* self) {
    void* sub = lift_field<void*>(self, 0x88);
    reinterpret_cast<SlotFnWithInt>(vtable_slot(sub, 0x38))(sub, 1);
    reinterpret_cast<SlotFnNoArgs>(vtable_slot(self, 0x68))(self);
}
} // namespace lift_005470F0

// [0x00545850] JointTool::vfunc_31 (134 bytes)
namespace lift_00545850 {
// Known callee 0x005434C0: sub_005434C0 (Returns 1 if this->field_0x88 is null; otherwise tail-dispatches vtable slot 8 (+0x20) on the object at field_0x88 and returns its result.)
extern uint8_t ext_005434C0(void* self);

// OpenGL32 import slots (IAT entries holding function pointers).
extern void* mem_00925414;   // glPushMatrix
extern void* mem_009253CC;   // glPushName
extern uint32_t mem_009324A4; // float 0.5 (bit pattern 0x3F000000)
extern void* mem_009254D0;   // glColor4f
extern void* mem_009253D0;   // glTranslatef
extern void* mem_00925524;   // glPopName
extern void* mem_00925404;   // glPopMatrix

// @name JointTool::vfunc_31
// @class JointTool
// @summary Calls virtual slot 0x80 on self, then (unless ext_005434C0 reports true) draws a translated, named GL marker and invokes slot 0x58 on the embedded sub-object at +0x9C.
// @field JointTool +0x34 float translateX
// @field JointTool +0x38 float translateY
// @field JointTool +0x3C float translateZ
// @field JointTool +0x9C void* field_0x9c
void fn_00545850(void* self) {
    // Dispatch vtable slot 0x80 on self (no arguments, result ignored).
    void* vt = lift_field<void*>(self, 0);
    auto slot80 = reinterpret_cast<void(__thiscall*)(void*)>(lift_field<void*>(vt, 0x80));
    slot80(self);

    // Early out if the helper reports true.
    if (ext_005434C0(self) != 0) {
        return;
    }

    reinterpret_cast<void(__stdcall*)()>(mem_00925414)();                 // glPushMatrix
    reinterpret_cast<void(__stdcall*)(uint32_t)>(mem_009253CC)(0u);       // glPushName(0)
    float alpha = std::bit_cast<float>(mem_009324A4);                     // 0.5f
    reinterpret_cast<void(__stdcall*)(float, float, float, float)>(mem_009254D0)(
        1.0f, 1.0f, 1.0f, alpha);                                         // glColor4f(1,1,1,0.5)
    reinterpret_cast<void(__stdcall*)(float, float, float)>(mem_009253D0)(
        lift_field<float>(self, 0x34),
        lift_field<float>(self, 0x38),
        lift_field<float>(self, 0x3C));                                   // glTranslatef(x,y,z)

    // Embedded sub-object at +0x9C: its vtable slot 0x58, this = &sub, arg = 1.
    void* sub = static_cast<uint8_t*>(self) + 0x9C;
    void* subVt = lift_field<void*>(self, 0x9C);
    auto slot58 = reinterpret_cast<void(__thiscall*)(void*, int32_t)>(lift_field<void*>(subVt, 0x58));
    slot58(sub, 1);

    reinterpret_cast<void(__stdcall*)()>(mem_00925524)();                 // glPopName
    reinterpret_cast<void(__stdcall*)()>(mem_00925404)();                 // glPopMatrix
}
} // namespace lift_00545850
