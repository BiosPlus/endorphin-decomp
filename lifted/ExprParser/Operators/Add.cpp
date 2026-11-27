// Lifted C++ translation unit: lifted/ExprParser/Operators/Add.cpp
#include "lift_compat.h"

// [0x006A2250] ExprParser::Operators::Add::vfunc_2 (188 bytes)
namespace lift_006A2250 {
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2();
// Known callee 0x0048A120: ForEachEntryDispatchVirtual_0048A120 (Walks 8-byte entries from begin up to (not including) end; for each entry whose +4 pointer is non-null, calls that object's virtual slot 0x78 (index 30) with the entry address as its single argument.)
extern void ext_0048A120(uint8_t* begin, uint8_t* end);
extern int mem_00925134;

// @name ExprParser::Operators::Add::vfunc_2
// @class ExprParser::Operators::Add
// @summary Pops the last two entries of the arg2 vector (passing them to this's virtual slot 3), then pops the last entry of arg2 (dispatching it) and the last 4-byte entry of arg1.
// @field ExprParser::Operators::Add +0x00 void** vptr
void fn_006A2250(void* self, void* arg1, void* arg2) {
    // Vector layout: +0x4 begin, +0x8 end (the vptr sits at +0x0 of the object).
    uint8_t*& a2_begin = lift_field<uint8_t*>(arg2, 0x4);
    uint8_t*& a2_end   = lift_field<uint8_t*>(arg2, 0x8);

    // arg2 must be non-null and hold at least two 8-byte entries; otherwise throw.
    ptrdiff_t n = (a2_end - a2_begin) >> 3;
    if (a2_begin == nullptr || n < 2) {
        ext_006A6DD2();
        return;
    }

    // Index n-1 is the last entry; index n-2 is the one before it.
    ptrdiff_t last_idx = n - 1;
    uint32_t idx = static_cast<uint32_t>(n - 2);
    (void)last_idx;
    if (static_cast<uint32_t>(last_idx) >= static_cast<uint32_t>(n)) {
        // _invalid_parameter_noinfo (IAT slot mem_00925134); does not return.
        (void)&mem_00925134;
        std::abort();
    }
    uint8_t* last = a2_begin + 8 * last_idx;

    // Second bounds check, then virtual call this->vfunc_3(&arg2[n-2], &arg2[n-1]).
    if (a2_begin == nullptr || idx >= static_cast<uint32_t>((a2_end - a2_begin) >> 3)) {
        (void)&mem_00925134;
        std::abort();
    }
    uint8_t* prev = a2_begin + 8 * static_cast<ptrdiff_t>(idx);
    void** vtbl = *reinterpret_cast<void***>(self);
    typedef void (__thiscall* VirtualFn3)(void* self_, void* a, void* b);
    VirtualFn3 fn3 = reinterpret_cast<VirtualFn3>(vtbl[3]);
    fn3(self, prev, last);

    // If arg2 still non-empty, dispatch its last entry and pop it.
    if (a2_begin != nullptr && a2_end != a2_begin) {
        ext_0048A120(a2_end - 8, a2_end);
        a2_end -= 8;
    }

    // Pop the last 4-byte entry from arg1 when it is non-empty.
    uint8_t*& a1_begin = lift_field<uint8_t*>(arg1, 0x4);
    uint8_t*& a1_end   = lift_field<uint8_t*>(arg1, 0x8);
    if (a1_begin != nullptr && ((a1_end - a1_begin) >> 2) != 0) {
        a1_end -= 4;
    }
}
} // namespace lift_006A2250
