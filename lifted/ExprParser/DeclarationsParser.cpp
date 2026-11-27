// Lifted C++ translation unit: lifted/ExprParser/DeclarationsParser.cpp
#include "lift_compat.h"

// [0x00672EC0] ExprParser::DeclarationsParser::vfunc_7 (89 bytes)
namespace lift_00672EC0 {
// Known callee 0x0040ECB0: Unknown::PushBackString_0040ECB0 (push_back of one 28-byte std::string onto a
// vector-like {begin,end,capacity} container; fast path constructs in place, slow path defers to ext_0040EBF0.)
// Register convention from the call site: ecx = value, one stack argument = destination slot.
extern void ext_0040ECB0(const void* value, void* dst);

// Debug-iterator invariant failure handler; the asm calls it through the IAT slot mem_00925134
// (MSVCR80!_invalid_parameter_noinfo). It does not return.
extern void (*mem_00925134)();

// @name ExprParser::DeclarationsParser::vfunc_7
// @class ExprParser::DeclarationsParser
// @summary Walks the element range [field_0x08, field_0x0c) in 0x20-byte steps and invokes ext_0040ECB0 on each slot, with iterator-validity checks before and after each call.
// @field ExprParser::DeclarationsParser +0x08 uint32_t field_0x08
// @field ExprParser::DeclarationsParser +0x0c uint32_t field_0x0c
void __thiscall fn_00672EC0(void* self, const void* value) {
    auto invalid = []() { mem_00925134(); };

    // Range sanity: cur must not pass end, and begin must not pass end.
    uint32_t cur = lift_field<uint32_t>(self, 0x08);
    uint32_t end = lift_field<uint32_t>(self, 0x0c);
    if (cur > end) invalid();
    if (lift_field<uint32_t>(self, 0x08) > end) invalid();

    while (cur != lift_field<uint32_t>(self, 0x0c)) {
        // Element at cur must lie inside the valid range before it is constructed.
        if (!(cur < lift_field<uint32_t>(self, 0x0c))) invalid();
        ext_0040ECB0(value, reinterpret_cast<void*>(static_cast<uintptr_t>(cur)));
        if (!(cur < lift_field<uint32_t>(self, 0x0c))) invalid();
        cur += 0x20;
    }
}
} // namespace lift_00672EC0
