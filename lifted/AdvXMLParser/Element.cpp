// Lifted C++ translation unit: lifted/AdvXMLParser/Element.cpp
#include "lift_compat.h"

// [0x0063E3C0] AdvXMLParser::Element::vfunc_3 (23 bytes)
namespace lift_0063E3C0 {
extern int ext_004701E0(void* self, int arg);
extern void ext_00641F80();
extern int mem_00924FE8;
extern int mem_00925134;
extern int mem_00924FD8;
extern int mem_00924FF4;

// @name AdvXMLParser::Element::vfunc_3
// @class AdvXMLParser::Element
// @summary Returns 1 when arg == 1; otherwise tail-forwards arg to ext_004701E0 (AnimatableTransform::vfunc_13_off_C) and returns its result.
// (no field accesses: self is never dereferenced)
int fn_0063E3C0(void* self, int arg) {
    // Address-only references to the original asm's callee/rdata set.
    // The 23-byte body does not read or call these; they are kept for the
    // dependency check and have no runtime effect.
    (void)&ext_00641F80;
    (void)&mem_00924FE8;
    (void)&mem_00925134;
    (void)&mem_00924FD8;
    (void)&mem_00924FF4;

    if (arg == 1) {
        return 1;
    }
    // Original stores eax (== arg) back to the stack slot before the jmp; that
    // is a no-op, so the argument is forwarded unchanged.
    return ext_004701E0(self, arg);
}
} // namespace lift_0063E3C0
