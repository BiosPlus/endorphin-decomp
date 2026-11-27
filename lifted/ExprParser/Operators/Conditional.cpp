// Lifted C++ translation unit: lifted/ExprParser/Operators/Conditional.cpp
#include "lift_compat.h"

// [0x006A1500] ExprParser::Operators::Conditional::vfunc_3 (52 bytes)
namespace lift_006A1500 {
extern void ext_006A1490();

// @name ExprParser::Operators::Conditional::vfunc_3
// @class ExprParser::Operators::Conditional
// @summary Evaluates the condition held in the object's +0x04 pointer via virtual slot 3; forwards arg2 to helper 0x006A1490 when true, otherwise forwards arg3.
// @field ExprParser::Operators::Conditional +0x04 void* field_0x04

// Virtual slot 3 (offset 0x0C): receiver passed as first argument (portable model
// of the __thiscall ecx = receiver convention used across lifted/ExprParser).
typedef uint8_t (*CondSlot3Fn)(void* self, void* arg);
// Helper 0x006A1490: receiver plus one stack argument; eax is passed through.
typedef uint32_t (*CondHelperFn)(void* self, void* arg);

uint32_t fn_006A1500(void* self, void* arg2, void* arg3) {
    // cond = [self + 0x04]; flag = cond->slot3(self)
    void* cond = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x04);
    void** condVtbl = *reinterpret_cast<void***>(cond);
    uint8_t flag = reinterpret_cast<CondSlot3Fn>(condVtbl[3])(cond, self);

    auto helper = reinterpret_cast<CondHelperFn>(ext_006A1490);
    if (flag != 0) {
        return helper(self, arg2);
    }
    return helper(self, arg3);
}
} // namespace lift_006A1500

// [0x006A2310] ExprParser::Operators::Conditional::vfunc_2 (264 bytes)
namespace lift_006A2310 {
// Known callee 0x0048A120: ForEachEntryDispatchVirtual_0048A120 (Walks 8-byte entries from begin up to (not including) end; for each entry whose +4 pointer is non-null, calls that object's virtual slot 0x78 (index 30) with the entry address as its single argument.)
// Call site pushes three cdecl arguments: (entry range begin, range end, vec); caller pops them.
extern void ext_0048A120(uint8_t* begin, uint8_t* end, void* ctx);
// Known callee 0x006A6DD2: thunk_MSVCR80__CxxThrowException (IAT jump thunk forwarding to MSVCR80!_CxxThrowException.)
extern void ext_006A6DD2(void* exc, const void* throw_info);
// IAT slot for MSVCR80!_invalid_parameter_noinfo (no arguments).
extern int mem_00925134;

// Thiscall virtual slot 3 on self: three stack arguments, callee cleans the stack.
// On non-MSVC builds __thiscall expands to nothing, so self is passed as the first argument.
using VSlot3Fn = void(__thiscall*)(void* self, uint8_t* a, uint8_t* b, uint8_t* c);

// @name ExprParser::Operators::Conditional::vfunc_2
// @class ExprParser::Operators::Conditional
// @summary Throws int 2 unless vec holds at least three 8-byte entries; calls vslot 3 on self with the last three entries (oldest first), then pops the top entry twice (dispatching each) and pops a 4-byte tail.
// @field ExprParser::Operators::Conditional +0x00 void* vtable
void fn_006A2310(void* self, uint32_t /*stack arg1: never read by the original*/, void* vec) {
    const auto to_ptr = [](uint32_t a) {
        return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(a));
    };

    // vec layout: begin @ +0x04, end @ +0x08 (8-byte entries).
    const uint32_t begin0 = lift_field<uint32_t>(vec, 0x04);
    const int32_t count = static_cast<int32_t>(lift_field<uint32_t>(vec, 0x08) - begin0) >> 3;
    if (begin0 == 0 || count < 3) {
        // Original: throws int 2. The bounds checks that follow in the original are
        // unreachable once count >= 3, so they are not reproduced.
        int code = 2;
        ext_006A6DD2(&code, reinterpret_cast<const void*>(static_cast<uintptr_t>(0x00A183E8u)));
        return;
    }

    const uint32_t uc = static_cast<uint32_t>(count);
    // Index checks from the original (entry n-1, n-2, n-3 must be < n). Always pass here.
    if (!(uc - 1u < uc)) {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    }
    if (!(uc - 2u < uc)) {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    }
    if (!(uc - 3u < uc)) {
        reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
    }
    const uint32_t p_first = begin0 + 8u * (uc - 3u); // entry n-3
    const uint32_t p_mid   = begin0 + 8u * (uc - 2u); // entry n-2
    const uint32_t p_last  = begin0 + 8u * (uc - 1u); // entry n-1

    // Virtual slot 3 of self (vtable at self+0, slot at +0x0C).
    const uint32_t vtbl = lift_field<uint32_t>(self, 0x00);
    const uint32_t slot3 = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl)), 0x0C);
    reinterpret_cast<VSlot3Fn>(static_cast<uintptr_t>(slot3))(
        self, to_ptr(p_first), to_ptr(p_mid), to_ptr(p_last));

    // Pop the top entry: dispatch [end-8, end) then end -= 8. Original does this twice.
    const auto pop_top_dispatching = [&]() {
        const uint32_t b = lift_field<uint32_t>(vec, 0x04);
        if (b == 0) {
            return;
        }
        const uint32_t e = lift_field<uint32_t>(vec, 0x08);
        if ((static_cast<int32_t>(e - b) >> 3) == 0) {
            return;
        }
        ext_0048A120(to_ptr(e - 8u), to_ptr(e), vec);
        lift_field<uint32_t>(vec, 0x08) -= 8u;
    };
    pop_top_dispatching();
    pop_top_dispatching();

    // Tail: if the range is non-empty, drop a 4-byte word from end.
    {
        const uint32_t b = lift_field<uint32_t>(vec, 0x04);
        if (b != 0) {
            const uint32_t e = lift_field<uint32_t>(vec, 0x08);
            if ((static_cast<int32_t>(e - b) >> 2) != 0) {
                lift_field<uint32_t>(vec, 0x08) = e - 4u;
            }
        }
    }
}
} // namespace lift_006A2310
