// Lifted C++ translation unit: lifted/Properties/AutoCompleteSupplier.cpp
#include "lift_compat.h"

// [0x0041CC30]
namespace lift_0041CC30 {
extern uint32_t ext_00660280(void);
extern uint32_t mem_00924FE4;

// @name Properties::AutoCompleteSupplier::vfunc_2
// @class Properties::AutoCompleteSupplier
// @summary Delegates to the last global supplier's vfunc_1 if present, otherwise constructs an empty std::string.
uint32_t __thiscall fn_0041CC30(uint32_t self, uint32_t out_str) {
    (void)self;
    uint32_t supplier = ext_00660280();
    if (supplier != 0) {
        uint32_t vtable = *(const uint32_t*)(uintptr_t)supplier;
        using VFunc1 = void(__thiscall*)(uint32_t, uint32_t);
        VFunc1 fn = (VFunc1)(uintptr_t)(*(const uint32_t*)(uintptr_t)(vtable + 0x4));
        fn(supplier, out_str);
    } else {
        using StringCtor = void(__thiscall*)(uint32_t, uint32_t);
        StringCtor ctor = (StringCtor)(uintptr_t)mem_00924FE4;
        ctor(out_str, 0x00928B5Du);
    }
    return out_str;
}
} // namespace lift_0041CC30

// [0x0041CBF0]
namespace lift_0041CBF0 {
extern uint32_t ext_00660280();
extern uint32_t mem_00924FE4;
extern uint8_t mem_00928B5D;

// @name Properties::AutoCompleteSupplier::vfunc_1
// @class Properties::AutoCompleteSupplier
// @summary Returns a string from the last element of the global vector via its vfunc_0, or constructs an empty/default std::string if empty.
uint32_t __thiscall fn_0041CBF0(uint32_t /*this_ptr*/, uint32_t out_str) {
    uint32_t elem = ext_00660280();
    if (elem != 0) {
        uint32_t* vtable = *reinterpret_cast<uint32_t**>(elem);
        using VFunc0 = void(__thiscall*)(uint32_t, uint32_t);
        reinterpret_cast<VFunc0>(vtable[0])(elem, out_str);
        return out_str;
    }

    using StringCtor = void(__thiscall*)(uint32_t, const char*);
    reinterpret_cast<StringCtor>(mem_00924FE4)(out_str, reinterpret_cast<const char*>(&mem_00928B5D));
    return out_str;
}
} // namespace lift_0041CBF0
