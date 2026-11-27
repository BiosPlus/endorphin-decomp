// Lifted C++ translation unit: lifted/classes/GWCDateTimePropertiesFactory.cpp
#include "lift_compat.h"

// [0x006B1910]
namespace lift_006B1910 {
extern void* ext_006A5C62(DWORD size);
extern void* ext_006B4060(void* self, DWORD arg1, DWORD arg2);
extern const DWORD mem_00991A08;
extern const DWORD mem_00991A0C;

// @name GWCDateTimePropertiesFactory::vfunc_1
// @class GWCDateTimePropertiesFactory
// @summary Returns NULL unless arg2 is one of two sentinel ids; otherwise allocates a 0x44-byte object, constructs it via ext_006B4060, then calls its vtable slot 5 with (arg3, arg3 == 0) and returns the object.
void* fn_006B1910(void* self, DWORD arg1, DWORD arg2, DWORD arg3) {
    (void)self;
    (void)&mem_00991A08;
    (void)&mem_00991A0C;

    // Sentinel ids live in .rdata; read them through their absolute VA.
    const DWORD sentinel_a = *reinterpret_cast<const DWORD*>(static_cast<uintptr_t>(0x00991A08));
    const DWORD sentinel_b = *reinterpret_cast<const DWORD*>(static_cast<uintptr_t>(0x00991A0C));

    if (arg2 != sentinel_a && arg2 != sentinel_b) {
        return nullptr;
    }

    void* obj = ext_006A5C62(0x44);
    void* result = obj ? ext_006B4060(obj, arg1, arg2) : nullptr;

    // Original code dereferences result unconditionally here.
    void** vtbl = *reinterpret_cast<void***>(result);
    using VfuncFn = void(__thiscall*)(void*, DWORD, DWORD);
    auto fn = reinterpret_cast<VfuncFn>(vtbl[5]);
    fn(result, arg3, arg3 == 0 ? 1u : 0u);

    return result;
}
} // namespace lift_006B1910
