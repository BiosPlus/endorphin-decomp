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

// [0x00672CA0] ExprParser::DeclarationsParser::vfunc_2 (107 bytes)
namespace lift_00672CA0 {
// Callees (original asm call targets):
//   ext_00505D50  thiscall(this+4), 2 stack args (arg2, this), ret 8; returns uint32_t* or NULL
//   ext_00685900  thiscall(element), 3 stack args (arg2, 0, 1), ret 12
//   fn_00671F30  cdecl, 1 stack arg (uint32_t* out); lifted
//   mem_00925134 IAT slot for MSVCR80!_invalid_parameter_noinfo (noreturn)
extern uint32_t* ext_00505D50(void* self, uint32_t a, void* b);
extern void ext_00685900(void* self, uint32_t a, uint32_t b, uint32_t c);
extern void mem_00925134();
extern void ext_00671F30(uint32_t* out);

// @name ExprParser::DeclarationsParser::vfunc_2
// @class ExprParser::DeclarationsParser
// @summary Looks up an index via ext_00505D50, fetches the element at this->field_0x18[index] and forwards arg2 to it (returns arg2); on lookup failure forwards arg2 to fn_00671F30 instead.
// @field ExprParser::DeclarationsParser +0x18 void* field_0x18
// @field ExprParser::DeclarationsParser +0x1C uint32_t field_0x1c
uint32_t fn_00672CA0(void* self, uint32_t unused_arg1, uint32_t arg2) {
    (void)unused_arg1;

    uint32_t* found = ext_00505D50(static_cast<unsigned char*>(self) + 0x4, arg2, self);
    if (found == nullptr) {
        ext_00671F30(reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(arg2)));
        return arg2;
    }

    uint32_t index = *found;
    uint32_t begin = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(lift_field<void*>(self, 0x18)));
    uint32_t end = lift_field<uint32_t>(self, 0x1C);
    uint32_t count = static_cast<uint32_t>(static_cast<int32_t>(end - begin) >> 2);
    if (begin == 0 || index >= count) {
        mem_00925134();  // _invalid_parameter_noinfo; does not return
    }

    uint32_t* array = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(begin));
    uint32_t element = array[index];
    ext_00685900(reinterpret_cast<void*>(static_cast<uintptr_t>(element)), arg2, 0, 1);
    return arg2;
}
} // namespace lift_00672CA0
