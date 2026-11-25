// Lifted C++ translation unit: lifted/Properties/PropertyIteratorTypes/PropertySourceType.cpp
#include "lift_compat.h"

// [0x00681B50] Properties::PropertyIteratorTypes::PropertySourceType::vfunc_0 (60 bytes)
namespace lift_00681B50 {
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(uint32_t* out);

// @name Properties::PropertyIteratorTypes::PropertySourceType::vfunc_0
// @class Properties::PropertyIteratorTypes::PropertySourceType
// @summary Forwards to virtual slot 15 of the source object when *src is non-null; otherwise fills out via ext_00671F30. Returns out.
// @field Properties::PropertyIteratorTypes::PropertySourceType +0x00 void* vtable (accessed to dispatch virtual slot 15)
uint32_t* fn_00681B50(uint32_t* out, void* const* src, uint32_t arg) {
    void* obj = src ? *src : nullptr;
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        using SlotFn = void (*)(void* self, uint32_t* out, uint32_t arg);
        SlotFn fn = reinterpret_cast<SlotFn>(vtbl[15]);
        fn(obj, out, arg);
    } else {
        ext_00671F30(out);
    }
    return out;
}
} // namespace lift_00681B50

// [0x00681BD0] Properties::PropertyIteratorTypes::PropertySourceType::vfunc_1 (60 bytes)
namespace lift_00681BD0 {
// Known callee 0x0046F7D0: sub_00467320 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
extern void ext_0046F7D0(void* a);

// @name Properties::PropertyIteratorTypes::PropertySourceType::vfunc_1
// @class Properties::PropertyIteratorTypes::PropertySourceType
// @summary If *b holds an object, forward (a, c) to its vtable slot 13; otherwise call ext_0046F7D0(a). Returns a.
void* fn_00681BD0(void* a, void** b, uintptr_t c) {
    void* obj = *b;
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        using Slot13Fn = void (*)(void* self, void* arg1, uintptr_t arg2);
        reinterpret_cast<Slot13Fn>(vtbl[13])(obj, a, c);
    } else {
        ext_0046F7D0(a);
    }
    return a;
}
} // namespace lift_00681BD0

// [0x00681B90] Properties::PropertyIteratorTypes::PropertySourceType::vfunc_2 (60 bytes)
namespace lift_00681B90 {
// Known callee 0x0046F7D0: sub_00467320 (Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).)
void ext_0046F7D0(void* arg0);

// @name Properties::PropertyIteratorTypes::PropertySourceType::vfunc_2
// @class Properties::PropertyIteratorTypes::PropertySourceType
// @summary If the pointer stored at objRef is non-null, calls its vtable slot 14 with (self, arg3); otherwise calls ext_0046F7D0(self). Returns self.
// (Stack-argument count is 3 dwords per the 'ret 0xc' epilogue. No fields of self are accessed, so no @field lines.)
void* fn_00681B90(void* self, void** objRef, uint32_t arg3) {
    void* obj = *objRef;
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot = reinterpret_cast<void (*)(void*, void*, uint32_t)>(vtbl[14]);
        slot(obj, self, arg3);
    } else {
        ext_0046F7D0(self);
    }
    return self;
}
} // namespace lift_00681B90
