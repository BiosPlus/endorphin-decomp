// Lifted C++ translation unit: lifted/ExprParser/SingleVariableContainer.cpp
#include "lift_compat.h"
namespace {
// 32-bit guest addresses are carried as uint32_t and converted to host pointers here.
inline void* as_ptr(uint32_t a) { return reinterpret_cast<void*>(static_cast<uintptr_t>(a)); }
inline uint32_t as_addr(const void* p) { return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p)); }
// Thiscall-style targets resolved from object memory (this in ecx, args on stack).
using ThisCall0 = void* (*)(void* self);
using ThisCall2 = void* (*)(void* self, void* a, void* b);
}  // namespace

// [0x0069B5E0] ExprParser::SingleVariableContainer::vfunc_2 (96 bytes)
// @name ExprParser::SingleVariableContainer::vfunc_2
// @class ExprParser::SingleVariableContainer
// @summary Resolves the held symbol chain and writes a two-dword result {value, res->field_0x04} to the caller's out buffer (zeros if the resolved object's field is null); returns out.
// @field ExprParser::SingleVariableContainer +0x04 void* field_0x04
void* fn_0069B5E0(void* self, void* out, void* unused) {
    (void)unused;  // second stack argument is popped by the original (ret 8) but never read

    uint32_t buf = 0;  // local dword at [esp+4] in the original, zeroed on entry

    // holder = this->field_0x04; the first call uses &holder->field_0x04 as its this.
    void* holder = as_ptr(lift_field<uint32_t>(self, 0x04));
    void* stored = as_ptr(lift_field<uint32_t>(holder, 0x04));
    void* holder_field = static_cast<uint8_t*>(holder) + 0x04;
    ThisCall0 fn = reinterpret_cast<ThisCall0>(
        static_cast<uintptr_t>(lift_field<uint32_t>(stored, 0x00)));
    void* res = fn(holder_field);

    if (lift_field<uint32_t>(res, 0x04) != 0) {
        // r = res->field_0x04; r->vtable[0x70](r, &buf, res) yields a pointer whose first dword is the value.
        void* r = as_ptr(lift_field<uint32_t>(res, 0x04));
        uint32_t vt = lift_field<uint32_t>(r, 0x00);
        ThisCall2 fn2 = reinterpret_cast<ThisCall2>(
            static_cast<uintptr_t>(lift_field<uint32_t>(as_ptr(vt), 0x70)));
        void* ret = fn2(r, &buf, res);

        uint32_t first = lift_field<uint32_t>(ret, 0x00);
        uint32_t second = lift_field<uint32_t>(res, 0x04);
        lift_field<uint32_t>(out, 0x00) = first;
        lift_field<uint32_t>(out, 0x04) = second;
    } else {
        lift_field<uint32_t>(out, 0x00) = buf;  // still zero on this path
        lift_field<uint32_t>(out, 0x04) = 0;
    }

    return out;
}
