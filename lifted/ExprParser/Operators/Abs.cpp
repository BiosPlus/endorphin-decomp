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
// @name ExprParser::Operators::Abs::vfunc_2
// @class ExprParser::Operators::Abs
// @summary Pops the last 8-byte element from a vector, forwards it to this->vfunc_3, then shrinks the vector's end by 4 bytes if it is non-empty.
// @field VectorArg +0x04 uint32_t field_0x04
// @field VectorArg +0x08 uint32_t field_0x08
void fn_006A1E20(void* self, void* /*arg1*/, void* vec) {
    // Vector layout (as accessed): begin at +0x04, end at +0x08.
    uint32_t begin = lift_field<uint32_t>(vec, 4);
    uint32_t end   = lift_field<uint32_t>(vec, 8);

    // Element count with 8-byte elements (arithmetic shift, signed).
    int32_t count = static_cast<int32_t>(end - begin) >> 3;
    if (begin == 0 || count < 1) {
        // Original raises a CRT exception here (ext_006A6DD2 -> _CxxThrowException).
        throw std::out_of_range("ExprParser::Operators::Abs::vfunc_2: empty vector");
    }

    // Index of last element; always < count, so the original invalid-parameter path is unreachable.
    uint32_t last = static_cast<uint32_t>(count - 1);
    uint32_t elem = begin + 8u * last;

    // Virtual call: this->vtable[+0x0C] (slot 3) with the element pointer as the sole argument.
    void* vtable = lift_field<void*>(self, 0);
    auto vfunc3 = reinterpret_cast<void (*)(void*, void*)>(lift_field<void*>(vtable, 0x0C));
    vfunc3(self, reinterpret_cast<void*>(static_cast<uintptr_t>(elem)));

    // Re-read the vector (the call may have modified it) and pop 4 bytes off the end if non-empty.
    uint32_t begin2 = lift_field<uint32_t>(vec, 4);
    if (begin2 != 0) {
        uint32_t end2 = lift_field<uint32_t>(vec, 8);
        int32_t words = static_cast<int32_t>(end2 - begin2) >> 2;
        if (words != 0) {
            lift_field<uint32_t>(vec, 8) = end2 - 4u;
        }
    }
}
