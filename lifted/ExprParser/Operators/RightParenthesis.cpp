// Lifted C++ translation unit: lifted/ExprParser/Operators/RightParenthesis.cpp
#include "lift_compat.h"

// [0x006A1EA0] ExprParser::Operators::RightParenthesis::vfunc_2 (271 bytes)
namespace lift_006A1EA0 {
// Known callee 0x00480280: returns true when the range object at this has no elements (begin == null or (end - begin) >> 2 == 0).
extern BOOLEAN __thiscall ext_00480280(void* self);
// .rdata/.data pointer 0x00925134 holds the MSVC invalid-parameter handler; only referenced by the debug iterator checks, which are dropped.
extern char mem_00925134[];

// Virtual slot signatures used on the element objects. __thiscall is a no-op on non-MSVC builds.
using ElemVfn0 = uint32_t (__thiscall*)(void* self);
using ElemVfn2 = void (__thiscall*)(void* self, void* range, void* arg);

// @name ExprParser::Operators::RightParenthesis::vfunc_2
// @class ExprParser::Operators::RightParenthesis
// @summary Walks the element range from its last entry: probes the last element via vfunc_0 (stops on 0xC), calls its vfunc_2, and repeats until the range is empty; then drops the last entry. Throws int 3 on an invalid range.
// @field ExprParser::Operators::RightParenthesis +0x04 void* field_0x04
// @field ExprParser::Operators::RightParenthesis +0x08 void* field_0x08
void __stdcall fn_006A1EA0(void* range, void* arg) {
    // Precondition: begin != null and at least two elements, otherwise throw (asm: ExcThrow with int 3).
    {
        uint8_t* const begin = lift_field<uint8_t*>(range, 4);
        uint8_t* const end = lift_field<uint8_t*>(range, 8);
        if (begin == nullptr) {
            throw 3;
        }
        const intptr_t count = (reinterpret_cast<intptr_t>(end) - reinterpret_cast<intptr_t>(begin)) >> 2;
        if (count < 2) {
            throw 3;
        }
        // Drop the last entry before probing (asm: end -= 4).
        lift_field<uint8_t*>(range, 8) = end - 4;
    }

    (void)&mem_00925134;

    if (!ext_00480280(range)) {
        for (;;) {
            // Probe the last element with vfunc_0; 0xC means done.
            {
                uint8_t* const end = lift_field<uint8_t*>(range, 8);
                void* const elem = *reinterpret_cast<void**>(end - 4);
                void** const vtbl = *reinterpret_cast<void***>(elem);
                auto probe = reinterpret_cast<ElemVfn0>(vtbl[0]);
                if (probe(elem) == 0xC) {
                    break;
                }
            }

            // Invoke vfunc_2 on the last element with (range, arg).
            {
                uint8_t* const end = lift_field<uint8_t*>(range, 8);
                void* const elem = *reinterpret_cast<void**>(end - 4);
                void** const vtbl = *reinterpret_cast<void***>(elem);
                auto call2 = reinterpret_cast<ElemVfn2>(vtbl[2]);
                call2(elem, range, arg);
            }

            if (ext_00480280(range)) {
                break;
            }
        }
    }

    // Cleanup: the range must still be non-empty; drop the last entry.
    {
        uint8_t* const begin = lift_field<uint8_t*>(range, 4);
        if (begin == nullptr) {
            throw 3;
        }
        uint8_t* const end = lift_field<uint8_t*>(range, 8);
        const intptr_t count = (reinterpret_cast<intptr_t>(end) - reinterpret_cast<intptr_t>(begin)) >> 2;
        if (count == 0) {
            throw 3;
        }
        lift_field<uint8_t*>(range, 8) = end - 4;
    }
}
} // namespace lift_006A1EA0
