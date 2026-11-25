// Lifted C++ translation unit: lifted/ExprParser/Operators/Abs.cpp
#include "lift_compat.h"
#include <stdexcept>
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;

// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern "C" void ext_006A6DD2();
extern "C" int mem_00925134;
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

// [0x006A1E20] ExprParser::Operators::Abs::vfunc_2 (116 bytes)
namespace lift_006A1E20 {
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
// RTTI/ThrowInfo for the std::exception-style throw used when the argument vector is empty.
extern int mem_00A183E8;
// IAT slot for MSVCR80!_invalid_parameter_noinfo (only reachable if the index bound check fails).
extern int mem_00925134;

// @name ExprParser::Operators::Abs::vfunc_2
// @class ExprParser::Operators::Abs
// @summary Takes the last entry of the input vector (8-byte elements), evaluates it via this->vtable[3], then pops the last 4-byte entry off the output vector.
// Note: in/out vectors use begin at +0x4 and end at +0x8 (vector-like layout, not a class field of Abs).
void fn_006A1E20(void* self, void* out, void* in) {
    // in: begin @ +0x4, end @ +0x8, elements are 8 bytes each
    uintptr_t in_begin = lift_field<uint32_t>(in, 0x4);
    uintptr_t in_end   = lift_field<uint32_t>(in, 0x8);
    // Count is (end - begin) >> 3 (signed). Empty or unset vector throws.
    int32_t in_count = static_cast<int32_t>(in_end - in_begin) >> 3;
    if (in_begin == 0 || in_count < 1) {
        (void)&mem_00A183E8;
        ext_006A6DD2();
        return;
    }

    uint32_t idx = static_cast<uint32_t>(in_count - 1);
    if (idx >= static_cast<uint32_t>(in_count)) {
        // Unreachable given in_count >= 1; kept for parity with the original call to _invalid_parameter_noinfo.
        (void)&mem_00925134;
        return;
    }

    // Dispatch: this->vtable[3](element) where element = begin + 8*idx.
    uintptr_t elem = in_begin + static_cast<uintptr_t>(idx) * 8u;
    void** vtbl = *reinterpret_cast<void***>(self);
    auto fn = reinterpret_cast<void (__thiscall*)(void*, void*)>(vtbl[3]);
    fn(self, reinterpret_cast<void*>(elem));

    // out: begin @ +0x4, end @ +0x8, elements are 4 bytes each. Pop last element if non-empty.
    uintptr_t out_begin = lift_field<uint32_t>(out, 0x4);
    if (out_begin != 0) {
        uintptr_t out_end = lift_field<uint32_t>(out, 0x8);
        int32_t out_count = static_cast<int32_t>(out_end - out_begin) >> 2;
        if (out_count != 0) {
            lift_field<uint32_t>(out, 0x8) = static_cast<uint32_t>(out_end - 4u);
        }
    }
}
} // namespace lift_006A1E20
