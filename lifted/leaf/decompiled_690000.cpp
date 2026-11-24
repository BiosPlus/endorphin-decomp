// Lifted C++ translation unit: lifted/leaf/decompiled_690000.cpp
#include "lift_compat.h"
#include <cstddef>
#include <cstdint>

#include <cstdint>
namespace lift_00692D90 {
extern void (*mem_00925134)();

// @name sub_00692D90
// @summary Auto-lifted identical-shape clone of 0x0051BF10 (NMData::RealChannel::clear).
namespace lift_0051BF10 {
extern uint32_t mem_00925134;
void __thiscall ext_00490960(void* self, void* out_iter, void* container1, uint32_t begin_it, void* container2, uint32_t end_it);

// @name NMData::RealChannel::clear
// @class NMData::RealChannel
// @summary Clears the RealChannel data vector by erasing from begin to end.
// @field NMData::RealChannel +0x30 uint32_t begin
// @field NMData::RealChannel +0x34 uint32_t end
void __thiscall fn_00692D90(uint8_t* self) {
    using InvalidParamFn = void(__cdecl*)();
    InvalidParamFn invalid_param = reinterpret_cast<InvalidParamFn>(static_cast<uintptr_t>(mem_00925134));

    uint8_t* vec = self + 0x8;
    uint32_t end_val = *reinterpret_cast<uint32_t*>(vec + 0x08);
    if (*reinterpret_cast<uint32_t*>(vec + 0x04) > end_val) {
        invalid_param();
    }

    uint32_t begin_val = *reinterpret_cast<uint32_t*>(vec + 0x04);
    if (begin_val > *reinterpret_cast<uint32_t*>(vec + 0x08)) {
        invalid_param();
    }

    uint32_t local_iter[2] = {};
    ext_00490960(vec, local_iter, vec, begin_val, vec, end_val);
}
} // namespace lift_0051BF10
} // namespace lift_00692D90

// [0x00695E20] sub_00695E20 (31 bytes)
namespace lift_00695E20 {
extern void ext_00695E00(void* self, uint32_t arg2);

// @name sub_00695E20
// @summary Auto-lifted identical-shape clone of 0x0051AED0 (NMData::RealChannel::vfunc_8).
void* fn_00695E20(void* self, uint32_t ecx_in) {
    ext_00695E00(self, ecx_in);
    return self;
}
} // namespace lift_00695E20

// [0x006991F0]
namespace lift_006991F0 {
// @name setOwnedObject_006991F0
// @summary Replaces an owned object pointer at +0x8, invoking its virtual deleting destructor if non-null and different
// @field unknown +0x08 uint32_t field_0x08


uint32_t mem_r32(uint32_t addr);
void mem_w32(uint32_t addr, uint32_t val);

void __thiscall sub_006991F0(uint32_t self, uint32_t newPtr) {
    uint32_t oldPtr = mem_r32(self + 0x8);
    if (newPtr != oldPtr && oldPtr != 0) {
        uint32_t vtable = mem_r32(oldPtr);
        uint32_t dtor = mem_r32(vtable);
        using ScalarDeletingDtor = void (__thiscall *)(uint32_t, uint32_t);
        reinterpret_cast<ScalarDeletingDtor>(dtor)(oldPtr, 1);
    }
    mem_w32(self + 0x8, newPtr);
}
} // namespace lift_006991F0

// [0x006989B0]
namespace lift_006989B0 {
// @name CopyBytesRange
// @summary Copies bytes from [first, last) to dst; returns dst advanced past the copied bytes. Null dst skips stores but still advances the count.
uint8_t* CopyBytesRange(const uint8_t* first, const uint8_t* last, uint8_t* dst) {
    uint8_t* out = dst;
    if (first == last) {
        return out;
    }
    do {
        if (out != nullptr) {
            *out = *first;
        }
        ++first;
        ++out;
    } while (first != last);
    return out;
}
} // namespace lift_006989B0

// [0x00698A40]
namespace lift_00698A40 {
// @name copyByteRangeForward
// @summary Forward byte-by-byte copy of [first, last) to dest (no overlap handling, loop runs while cursor != last); returns dest + (last - first).
// Stack args (read from the entry stack): a1 is unused, first, a3 is unused, last, dest.
uint32_t fn_00698A40(uint32_t a1, uint32_t first, uint32_t a3, uint32_t last, uint32_t dest) {
    (void)a1;
    (void)a3;
    const uint32_t delta = dest - first;    // edx = dest - src
    const uint32_t result = delta + last;   // edi = dest + (last - first)
    for (uint32_t cur = first; cur != last; ++cur) {
        uint8_t b = *reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(cur));
        *reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(cur + delta)) = b;
    }
    return result;
}
} // namespace lift_00698A40

// [0x006997E0]
namespace lift_006997E0 {
// @name getTypedObjectViaVfunc60
// @summary Calls virtual method at vtable+0x60 with arg1 and dynamic_casts the result via __RTDynamicCast


extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, void* srcType, void* targetType, int32_t isReference);

void* __thiscall fn_006997E0(void* self, uint32_t arg1) {
    auto vtable = *reinterpret_cast<const uintptr_t* const*>(self);
    using VFunc = void* (__thiscall*)(void*, uint32_t);
    auto vfunc = reinterpret_cast<VFunc>(vtable[0x60 / sizeof(uintptr_t)]);
    void* obj = vfunc(self, arg1);
    return ext_006A6E9E(obj, 0, reinterpret_cast<void*>(0x00A2E2F8), reinterpret_cast<void*>(0x00AA3D80), 0);
}
} // namespace lift_006997E0

// [0x0069B180] sub_0069B180 (42 bytes)
namespace lift_0069B180 {
// @name matchingCloseBracket
// @summary Maps an opening bracket ( < [ { to its closing counterpart; returns 0 for any other char.
// @field none (no member access; free function)
uint8_t matchingCloseBracket(int8_t c) {
    switch (c) {
    case '(': return ')';
    case '<': return '>';
    case '[': return ']';
    case '{': return '}';
    default:  return 0;
    }
}
} // namespace lift_0069B180
