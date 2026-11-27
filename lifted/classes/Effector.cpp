// Lifted C++ translation unit: lifted/classes/Effector.cpp
#include "lift_compat.h"
#include <cstddef>
#include <cstdint>

#include <cstdint>
namespace lift_006033B0 {
// @name Effector::vfunc_30
// @class Effector
// @summary Clamps field_0x54 to non-negative or updates it to the maximum of itself and the argument.
// @field Effector +0x54 float field_0x54


void __thiscall fn_006033B0(void* self, float val) {
    auto* field = reinterpret_cast<float*>(static_cast<uint8_t*>(self) + 0x54);
    float cur = *field;
    if (cur < 0.0f) {
        *field = 0.0f;
        return;
    }
    if (!(val < cur)) {
        *field = val;
    }
}
} // namespace lift_006033B0

// [0x00603370] Effector::vfunc_28 (56 bytes)
namespace lift_00603370 {
// @name Effector::vfunc_28
// @class Effector
// @summary Forwards one float argument to virtual slots 25, 26 and 27 of the same object, in that order.
// @field Effector +0x00 void** vtable

namespace lift_00603370 {

// Virtual slot signature: thiscall-style method taking one float, callee pops it.
// Modeled portably as a plain function taking the object pointer first.
using VSlotFloatFn = void (*)(void* self, float value);

static inline void call_vslot(void* self, std::size_t index, float value) {
    void** vtable = *reinterpret_cast<void***>(self);
    auto fn = reinterpret_cast<VSlotFloatFn>(vtable[index]);
    fn(self, value);
}

void __thiscall fn_00603370(void* self, float value) {
    call_vslot(self, 25, value);
    call_vslot(self, 26, value);
    call_vslot(self, 27, value);
}

} // namespace lift_00603370
} // namespace lift_00603370

// [0x00603020] Effector::vfunc_12 (100 bytes)
namespace lift_00603020 {
// RTTI type descriptors referenced by the dynamic_cast call site.
extern char mem_00A93768;
extern char mem_00A93790;

// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern void* ext_006A6E9E(void* obj, std::ptrdiff_t vfdelta, const void* srcType,
                              const void* dstType, int isReference);

// Known callee 0x00603230: ClampedRateDispatch (not called from this function's disassembly; kept for reference.)
extern void ext_00603230();

namespace {
// Raw 32-bit slot at byte offset `off` of `base`. Copies are bitwise, so the
// float/int distinction does not matter for the transfer itself.
inline std::uint32_t& slot32(void* base, std::size_t off) {
    return *reinterpret_cast<std::uint32_t*>(static_cast<unsigned char*>(base) + off);
}
} // namespace

// @name Effector::vfunc_12
// @class Effector
// @summary Casts the argument to the source type via RTDynamicCast and copies its 0x44..0x58 block into self's 0x34..0x5C range.
// @field Effector +0x34 uint32_t field_0x34
// @field Effector +0x38 uint32_t field_0x38
// @field Effector +0x3C uint32_t field_0x3c
// @field Effector +0x40 uint32_t field_0x40
// @field Effector +0x44 uint32_t field_0x44
// @field Effector +0x48 uint32_t field_0x48
// @field Effector +0x4C float gradient
// @field Effector +0x50 float gradientCap
// @field Effector +0x54 float field_0x54
// @field Effector +0x58 float field_0x58
// @field Effector +0x5C uint32_t field_0x5c
void fn_00603020(void* self, void* src) {
    (void)&ext_00603230; // metadata-only reference; the original asm does not call this
    void* s = ext_006A6E9E(src, 0, &mem_00A93768, &mem_00A93790, 1);

    slot32(self, 0x34) = slot32(s, 0x44);
    slot32(self, 0x4C) = slot32(s, 0x48);
    slot32(self, 0x50) = slot32(s, 0x4C);
    slot32(self, 0x54) = slot32(s, 0x50);
    slot32(self, 0x58) = slot32(s, 0x54);
    slot32(self, 0x5C) = slot32(s, 0x58);
    slot32(self, 0x38) = slot32(s, 0x48);
    slot32(self, 0x3C) = slot32(s, 0x4C);
    slot32(self, 0x40) = slot32(s, 0x50);
    slot32(self, 0x44) = slot32(s, 0x54);
    slot32(self, 0x48) = slot32(s, 0x58);
}
} // namespace lift_00603020
