// Lifted C++ translation unit: lifted/ExprParser/RealType.cpp
#include "lift_compat.h"
// Callee: sub_006720C0 (thiscall-style: this in ecx, one stack argument).
extern "C" uint32_t __thiscall ext_006720C0(uint32_t self, uint32_t arg);
// Callee 0x00672080: receives the object, a float value, and a zero int.
extern "C" void ext_00672080(void* self, float value, int zero);

extern "C" void ext_00672080(void* self, float value, int zero);
// @name ExprParser::RealType::vfunc_8
// @class ExprParser::RealType
// @summary Two-argument stdcall forwarder: passes the first stack argument as the callee's this and the second as its single stack argument, returning the callee's result.
// Disassembly: mov eax,[esp+8]; mov ecx,[esp+4]; push eax; call ext_006720C0; ret 8.
// The incoming ecx (this) is overwritten before use and is not read, so the function takes no object pointer.
uint32_t __stdcall fn_0066B0B0(uint32_t first, uint32_t second) {
    // mov ecx, [esp+4]  -> this for the callee = first stack argument
    // mov eax, [esp+8]  -> second stack argument
    // push eax          -> argument pushed for the callee
    // call ext_006720C0 -> result left in eax
    // ret 8             -> callee-cleans-two-arguments (stdcall)
    return ext_006720C0(first, second);
}
// Callee 0x006A6DE0: receives the rounded value (originally left on the x87 stack).
extern "C" void ext_006A6DE0(double rounded);

extern "C" void ext_006A6DE0(double rounded);
// @name ExprParser::RealType::vfunc_0
// @class ExprParser::RealType
// @summary Forwards the float read from *value (with a zero flag) to 0x00672080 and returns self.
void* fn_0066AD40(void* self, const float* value) {
    ext_00672080(self, *value, 0);
    return self;
}
// Callee 0x0046C390: receives the object and a float value (cdecl, caller cleans up).
extern "C" void ext_0046C390(void* self, float value);

extern "C" void ext_0046C390(void* self, float value);
// @name ExprParser::RealType::vfunc_2
// @class ExprParser::RealType
// @summary Rounds the stored float half away from zero (x < 0 ? x - 0.5 : x + 0.5) and passes it to 0x006A6DE0.
// @field ExprParser::RealType +0x00 float field_0x00
void fn_0066AD80(void* self) {
    const float x = lift_field<float>(self, 0);
    const double r = (x < 0.0f) ? static_cast<double>(x) - 0.5
                                : static_cast<double>(x) + 0.5;
    ext_006A6DE0(r);
}
// Calls into the runtime: ext_00672080 is the constructor-style initializer for the
// function-local static object (object, float value, int zero); ext_006A6C87 registers
// the static's destructor (cdecl, one arg).
extern "C" void ext_006A6C87(const void* arg);
// Guard word for the function-local static (bit 0 = initialized).
extern "C" uint32_t mem_00B59654;
// Storage of the function-local static object (only its address is used).
extern "C" uint8_t mem_00B5964C[];
// Calls into the runtime: ext_00672080 is the constructor-style initializer for the
// function-local static object (object, float value, int zero); ext_006A6C87 registers
// the static's destructor (cdecl, one arg).
// Guard word for the function-local static (bit 0 = initialized).
// Storage of the function-local static object (only its address is used).

// [0x0066CE30] ExprParser::RealType::vfunc_18 (98 bytes)
// @name ExprParser::RealType::vfunc_18
// @class ExprParser::RealType
// @summary Lazily initializes a function-local static real-valued object (from 0.0f) and returns its address; the stack argument is unused.
// (No self-field offsets are accessed; `self` and the stack argument are ignored.)
void* fn_0066CE30(void* self, int32_t arg) {
    (void)self;
    (void)arg;

    void* obj = static_cast<void*>(mem_00B5964C);
    if ((mem_00B59654 & 1u) == 0) {
        mem_00B59654 |= 1u;
        ext_00672080(obj, 0.0f, 0);
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00921730)));
    }
    return obj;
}

// [0x0066EDE0] ExprParser::RealType::vfunc_50 (63 bytes)
namespace lift_0066EDE0 {
// Callee 0x00487A30 (thiscall: ecx = self, one float stack argument, callee pops 4 bytes).
extern void __thiscall ext_00487A30(void* self, float value);
// Read-only string literal "RealValue" in .rdata.
extern const char mem_0098B7B4[];

// @name ExprParser::RealType::vfunc_50
// @class ExprParser::RealType
// @summary Reads a float from a2's sub-object via vfn1, forwards it with "RealValue" to a1's sub-object via vfn1, then passes the returned float to ext_00487A30.
// @field ValuePtrType +0x04 void* field_0x04
void __stdcall fn_0066EDE0(void* a1, void* a2, uint32_t a3, uint32_t a4) {
    (void)a3;

    // r1 = a2->field_0x04->vfn1(a2)
    void* m2 = lift_field<void*>(a2, 4);
    void** vtbl2 = *reinterpret_cast<void***>(m2);
    float r1 = reinterpret_cast<float (*)(void*, void*)>(vtbl2[1])(m2, a2);

    // r2 = a1->field_0x04->vfn1(a1, r1, "RealValue")
    void* m1 = lift_field<void*>(a1, 4);
    void** vtbl1 = *reinterpret_cast<void***>(m1);
    float r2 = reinterpret_cast<float (*)(void*, void*, float, const char*)>(vtbl1[1])(
        m1, a1, r1, mem_0098B7B4);

    // ecx = caller-frame slot just above the stack arguments (as in the original code).
    void* frame_slot = reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(&a4) + 4);
    ext_00487A30(frame_slot, r2);
}
} // namespace lift_0066EDE0
