// Lifted C++ translation unit: lifted/ExprParser/IntType.cpp
#include "lift_compat.h"
extern "C" void __thiscall ext_006720C0(void* self, int32_t value);
extern "C" int __cdecl ext_006A6C87(void (*fn)(void));
extern "C" void ext_00921750(void);
extern "C" uint8_t mem_00B59658[8];
extern "C" uint32_t mem_00B59660;
extern "C" void ext_0046C500(void* self, int32_t value);

// [0x0066AE60] ExprParser::IntType::vfunc_4 (37 bytes)
// @name ExprParser::IntType::vfunc_4
// @class ExprParser::IntType
// @summary Reads the int32 at offset 0 of src and forwards it to ext_0046C500 on self; returns self.
// @field IntType +0x00 int32_t field_0x00
void* fn_0066AE60(void* self, const void* src) {
    const int32_t value = *static_cast<const int32_t*>(src);
    ext_0046C500(self, value);
    return self;
}

// [0x0066EE20] ExprParser::IntType::vfunc_50 (65 bytes)
namespace lift_0066EE20 {
extern int32_t __thiscall ext_004769F0(void* self, const int32_t* lhs, const int32_t* rhs, uint32_t tag);

// Virtual slot 2 of the object held at +4 of an argument, called with the argument as its sole parameter.
using ValueSlot2Fn = int32_t(__thiscall*)(void* self, void* arg);

static int32_t call_inner_vslot2(void* arg) {
    void* inner = lift_field<void*>(arg, 4);
    void** vtbl = *reinterpret_cast<void***>(inner);
    auto fn = reinterpret_cast<ValueSlot2Fn>(vtbl[2]);
    return fn(inner, arg);
}

// @name ExprParser::IntType::vfunc_50
// @class ExprParser::IntType
// @summary Evaluates two value operands via their inner objects' slot 2, then forwards both results and a constant tag to ext_004769F0 (self unused).
// @field ValuePtrType +0x04 void* field_0x04
int32_t __thiscall fn_0066EE20(void* /*self*/, void* arg1, void* arg2, uint32_t arg3, uint32_t arg4) {
    (void)arg4; // popped by the ret 0x10 but never read
    const int32_t rhsValue = call_inner_vslot2(arg2);
    const int32_t lhsValue = call_inner_vslot2(arg1);
    // arg3's stack slot is passed as the 'this' pointer to ext_004769F0.
    return ext_004769F0(&arg3, &lhsValue, &rhsValue, 0x0098B7C0u);
}
} // namespace lift_0066EE20

// [0x0066AE10]
namespace lift_0066AE10 {
extern void ext_006720C0(void* self, int32_t value, int32_t zero);

// @name ExprParser::IntType::vfunc_0
// @class ExprParser::IntType
// @summary Forwards the int32 value read from *src into ext_006720C0 on self with a zero second argument, then returns self.
void* fn_0066AE10(void* self, const int32_t* src) {
    const int32_t value = *src;
    ext_006720C0(self, value, 0);
    return self;
}
} // namespace lift_0066AE10

// [0x0066CF10]
namespace lift_0066CF10 {
// @name ExprParser::IntType::vfunc_18
// @class ExprParser::IntType
// @summary Returns the address of the function-local static instance at 0x00B59658, constructing it and registering its atexit destructor on first call.

// Callees (original asm: call 0x6720C0 / call 0x6A6C87).
extern void __thiscall ext_006720C0(void* self, uint32_t arg0);
extern int __cdecl ext_006A6C87(uint32_t dtor);

namespace {
// Raw image address -> pointer. Used for the static object and its init-guard byte.
inline uint8_t* va_ptr(uintptr_t va) {
    return reinterpret_cast<uint8_t*>(va);
}
}  // namespace

// Original prologue/epilogue installs an MSVC SEH frame via fs:[0] (state -1,
// handler 0x8B33FE) around the one-time init. That is compiler/runtime plumbing with
// no portable equivalent; it is omitted here. Behavior of the guarded init is kept.
void* __thiscall ExprParser_IntType_vfunc_18(void* /*this*/, uint32_t /*arg0 (popped by ret 4)*/) {
    uint8_t* guard = va_ptr(0x00B59660);  // mem_00B59660: one-time-init flag byte
    if ((*guard & 1u) == 0) {
        *guard |= 1u;
        ext_006720C0(va_ptr(0x00B59658), 0);
        ext_006A6C87(0x00921750);
    }
    return va_ptr(0x00B59658);
}
} // namespace lift_0066CF10
