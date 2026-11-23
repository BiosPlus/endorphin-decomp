// Lifted C++ translation unit: lifted/classes/RuntimeEngine.cpp
#include "lift_compat.h"
// Known callee 0x0046F930: sub_0046F930 (65B). Signature not recovered; passed the adjusted this.
extern "C" void ext_0046F930(void* self);

// [0x0046FA30] RuntimeEngine::vfunc_0_off_C (11 bytes)
// @name RuntimeEngine::vfunc_0_off_C
// @class RuntimeEngine
// @summary Adjusts this from the +0xC (BaseEventListener) subobject back to RuntimeEngine and forwards to 0x0046F930.
void fn_0046FA30(void* self) {
    // Thunk: non-primary base subobject adjustment (this -= 12), then tail-forward.
    void* adjusted = static_cast<unsigned char*>(self) - 12;
    ext_0046F930(adjusted);
}

// [0x0046F9E0] RuntimeEngine::vfunc_14_off_4 (70 bytes)
namespace lift_0046F9E0 {
extern void ext_0046F7D0(uint32_t arg);
extern void ext_00661650(void* self, void* arg);

// @name RuntimeEngine::vfunc_14_off_4
// @class RuntimeEngine
// @summary Dispatches arg 0x21 to a helper with the address of this+0x180 (when this+0x17c is non-null); otherwise forwards arg to ext_0046F7D0. Returns the second argument.
// @field RuntimeEngine +0x17C uint8_t field_0x17c
// @field RuntimeEngine +0x180 uint8_t field_0x180
uint32_t fn_0046F9E0(void* self, uint32_t a, uint32_t b) {
    (void)a;
    const uintptr_t base = reinterpret_cast<uintptr_t>(self);

    if (b == 0x21) {
        // Only the addresses of this+0x17c / this+0x180 are computed; no loads.
        uintptr_t edx = base + 0x17c;
        uintptr_t p = 0;
        if (edx != 0) {
            p = base + 0x180;
        }
        ext_00661650(reinterpret_cast<void*>(static_cast<uintptr_t>(b)),
                     reinterpret_cast<void*>(p));
        return b;
    }

    ext_0046F7D0(b);
    return b;
}
} // namespace lift_0046F9E0

// [0x004757A0]
namespace lift_004757A0 {
// Known callees (signatures recovered from call sites):
//   0x005A6300: thiscall, ecx = obj+4 subobject, one stack arg (pointer to a void* slot).
//   0x0046F930: thiscall, ecx = adjusted this (RuntimeEngine).
extern void ext_005A6300(void* self, void** slot);
extern void ext_0046F930(void* self);

// @name RuntimeEngine::vfunc_0_off_8
// @class RuntimeEngine
// @summary Thunk from the +0x8 (SelectionListener) subobject: queries a1 via vtable slot 0x54; if it returns non-null, forwards obj+4 and a slot holding (this-8 ? this+4 : null) to 0x005A6300, then calls 0x0046F930 on this-8.
void fn_004757A0(void* self, void* a1) {
    // Original: esi = this (secondary subobject). The thunk adjusts this by -8 to reach RuntimeEngine.
    unsigned char* esi = static_cast<unsigned char*>(self);

    // Query a1 through its vtable slot at byte offset 0x54 (index 21).
    void** vtbl = *reinterpret_cast<void***>(a1);
    using QueryFn = void* (*)(void* self);
    void* obj = reinterpret_cast<QueryFn>(vtbl[0x54 / sizeof(void*)])(a1);
    if (obj == nullptr) {
        return;
    }

    // Adjusted RuntimeEngine pointer. When non-null, the slot receives the +0x0C (BaseEventListener) subobject.
    unsigned char* engine = esi - 8;
    void* slot = (engine != nullptr) ? static_cast<void*>(esi + 4) : nullptr;

    ext_005A6300(static_cast<unsigned char*>(obj) + 4, &slot);
    ext_0046F930(engine);
}
} // namespace lift_004757A0
