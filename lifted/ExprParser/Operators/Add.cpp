// Lifted C++ translation unit: lifted/ExprParser/Operators/Add.cpp
#include "lift_compat.h"

// [0x006A2250] ExprParser::Operators::Add::vfunc_2 (188 bytes)
namespace lift_006A2250 {
// Callee 0x006A6DD2 (IAT thunk to MSVCR80!_CxxThrowException): raises the range-check error; never returns.
extern void ext_006A6DD2(void);
// Callee 0x0048A120 (notifyRangeVtable78): call site pushes (begin, end, owner) and cdecl-cleans 12 bytes.
// Invokes vtable+0x78 on each non-null object in [begin, end) at 8-byte stride.
extern void ext_0048A120(uint32_t begin, uint32_t end, void* owner);
// Import 0x00925134 (MSVCR80!_invalid_parameter_noinfo): fatal CRT invalid-parameter handler; never returns.
extern void ext_invalid_parameter_noinfo(void);

// @name ExprParser::Operators::Add::vfunc_2
// @class ExprParser::Operators::Add
// @summary Requires a2 to hold >= 2 8-byte entries; calls this->vtable[+0x0C](&a2[n-2], &a2[n-1]), then notifies and pops the last 8-byte entry of a2, then pops the last 4-byte entry of a1 if non-empty. Two stack args, ret 8.
// @field ExprParser::Operators::Add +0x00 void** vptr
void __thiscall fn_006A2250(void* self, void* a1, void* a2) {
    auto toPtr = [](uint32_t v) -> void* {
        return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
    };

    // a2: 8-byte-element range {+0x04 begin, +0x08 end}.
    uint32_t begin = lift_field<uint32_t>(a2, 0x04);
    uint32_t end = lift_field<uint32_t>(a2, 0x08);
    if (begin == 0 || (static_cast<int32_t>(end - begin) >> 3) < 2) {
        ext_006A6DD2();
    }

    int32_t n = static_cast<int32_t>(end - begin) >> 3;  // element count
    uint32_t last = static_cast<uint32_t>(n - 1);
    uint32_t k = static_cast<uint32_t>(n - 2);
    if (last >= static_cast<uint32_t>(n)) {
        ext_invalid_parameter_noinfo();
    }

    begin = lift_field<uint32_t>(a2, 0x04);
    if (begin == 0) {
        ext_invalid_parameter_noinfo();
    }
    int32_t size = static_cast<int32_t>(lift_field<uint32_t>(a2, 0x08) - begin) >> 3;
    if (k >= static_cast<uint32_t>(size)) {
        ext_invalid_parameter_noinfo();
    }

    // Virtual call through vtable+0x0C with (&a2[n-2], &a2[n-1]).
    void* vtbl = lift_field<void*>(self, 0x00);
    void* slot = lift_field<void*>(vtbl, 0x0C);
    using VFn = void (*)(void*, void*, void*);
    reinterpret_cast<VFn>(slot)(self, toPtr(begin + 8u * k), toPtr(begin + 8u * last));

    // Notify and pop the last 8-byte entry of a2 if the range is non-empty.
    begin = lift_field<uint32_t>(a2, 0x04);
    if (begin != 0) {
        end = lift_field<uint32_t>(a2, 0x08);
        if ((static_cast<int32_t>(end - begin) >> 3) != 0) {
            ext_0048A120(end - 8u, end, a2);
            lift_field<uint32_t>(a2, 0x08) = end - 8u;
        }
    }

    // Pop the last 4-byte entry of a1 if non-empty.
    begin = lift_field<uint32_t>(a1, 0x04);
    if (begin != 0) {
        end = lift_field<uint32_t>(a1, 0x08);
        if ((static_cast<int32_t>(end - begin) >> 2) != 0) {
            lift_field<uint32_t>(a1, 0x08) = end - 4u;
        }
    }
}
} // namespace lift_006A2250
