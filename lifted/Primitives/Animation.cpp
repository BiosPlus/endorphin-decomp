// Lifted C++ translation unit: lifted/Primitives/Animation.cpp
#include "lift_compat.h"
// Known callee 0x0053D2B0: Primitives::Cuboid::vfunc_25 (thiscall on self with three stack args, callee-cleans).
extern "C" void ext_0053D2B0(void* self, void* arg1, uint32_t arg2, uint32_t arg3);

extern "C" void ext_0053D2B0(void* self, void* arg1, uint32_t arg2, uint32_t arg3);
// Original (ret 8): allSet = ((flags & mask) == mask); if (allSet != (uint8)set) flags ^= mask.
// @name Primitives::Animation::vfunc_11
// @class Primitives::Animation
// @summary Toggles the mask bits in the flags word at +0x1C when "all mask bits set" disagrees with the low byte of set.
// @field Primitives::Animation +0x1C uint32_t field_0x1C
void fn_0053AE20(void* self, uint32_t mask, uint8_t set) {
    uint32_t flags = lift_field<uint32_t>(self, 0x1C);
    uint8_t allSet = ((flags & mask) == mask) ? 1 : 0;
    if (allSet != set) {
        flags ^= mask;
        lift_field<uint32_t>(self, 0x1C) = flags;
    }
}

// [0x0053E240] Primitives::Animation::vfunc_25 (65 bytes)
// @name Primitives::Animation::vfunc_25
// @class Primitives::Animation
// @summary Forwards its three arguments to Cuboid::vfunc_25, stores the result of virtual slot +0x2C on arg1's +0x0C object into +0x9C, and sets flag bit 0x02000000 in +0x1C.
// @field Primitives::Animation +0x1C uint32_t field_0x1C
// @field Primitives::Animation +0x9C uint32_t field_0x9C
// @field ArgObject +0x0C void* field_0x0C
// The vtable call at slot +0x2C is made portably as a function pointer taking the object as its first argument.
void fn_0053E240(void* self, void* arg1, uint32_t arg2, uint32_t arg3) {
    ext_0053D2B0(self, arg1, arg2, arg3);

    void* obj = lift_field<void*>(arg1, 0x0C);
    void** vtable = *reinterpret_cast<void***>(obj);
    // Slot +0x2C on the original 32-bit vtable is entry index 11 (0x2C / 4).
    auto slot = reinterpret_cast<uint32_t (*)(void*)>(vtable[11]);
    uint32_t result = slot(obj);
    lift_field<uint32_t>(self, 0x9C) = result;

    uint32_t flags = lift_field<uint32_t>(self, 0x1C);
    if ((flags & 0x02000000u) == 0) {
        lift_field<uint32_t>(self, 0x1C) = flags | 0x02000000u;
    }
}

// [0x0053AD10] Primitives::Animation::vfunc_29 (91 bytes)
// @name Primitives::Animation::vfunc_29
// @class Primitives::Animation
// @summary Resets animation state: clears counters, sets flag bits 0x2 and 0x1000 in +0x1C, sets +0x30 to INT_MAX, releases the object at +0x38 via its vtable slot 0 (deleting dtor, arg 1), then marks the DirtyOrCleanBase byte at +0x04 as dirty.
// @field Primitives::Animation +0x04 uint8_t field_0x04
// @field Primitives::Animation +0x08 uint32_t field_0x08
// @field Primitives::Animation +0x1C uint32_t field_0x1C
// @field Primitives::Animation +0x20 uint32_t field_0x20
// @field Primitives::Animation +0x24 uint32_t field_0x24
// @field Primitives::Animation +0x28 uint32_t field_0x28
// @field Primitives::Animation +0x2C uint32_t field_0x2c
// @field Primitives::Animation +0x30 uint32_t field_0x30
// @field Primitives::Animation +0x38 void* field_0x38
void fn_0053AD10(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    auto u32 = [&](size_t off) -> uint32_t& {
        return *reinterpret_cast<uint32_t*>(base + off);
    };

    u32(0x20) = 0;
    u32(0x1C) = 1;

    // flags |= 0x2 (equivalent to the xor-if-clear sequence)
    u32(0x1C) |= 0x2u;
    // flags |= 0x1000
    u32(0x1C) |= 0x1000u;

    u32(0x24) = 0;
    u32(0x28) = 0;
    u32(0x2C) = 0;
    u32(0x08) = 0;
    u32(0x30) = 0x7FFFFFFFu;

    void* obj = *reinterpret_cast<void**>(base + 0x38);
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        using DtorFn = void (*)(void*, int);
        reinterpret_cast<DtorFn>(vtbl[0])(obj, 1);
    }
    *reinterpret_cast<void**>(base + 0x38) = nullptr;

    *(base + 0x04) = 1;
}

// [0x0053ABF0]
namespace lift_0053ABF0 {
// @name Primitives::Animation::vfunc_30
// @class Primitives::Animation
// @summary Builds a stack record {0x009553B0, flags} and passes it to sub_0053A930; if flags has 0x200, copies the returned float[3] plus 0.5f into mem_00AF053C[0..3] and returns that buffer, otherwise returns the callee's result.

struct AnimationFlagRecord {
    uint32_t vtable;  // 0x009553B0
    uint32_t flags;
};

extern float* ext_0053A930(AnimationFlagRecord rec);
extern float mem_00AF053C[4];        // contiguous 0x00AF053C..0x00AF0548
extern const float mem_009324A4;     // .rdata float 0.5

float* fn_0053ABF0(uint32_t /*arg0, unused*/, uint32_t flags) {
    AnimationFlagRecord rec{0x009553B0u, flags};
    if ((flags & 0x200u) == 0) {
        return ext_0053A930(rec);
    }
    float* src = ext_0053A930(rec);
    mem_00AF053C[0] = src[0];
    mem_00AF053C[1] = src[1];
    mem_00AF053C[2] = src[2];
    mem_00AF053C[3] = mem_009324A4;
    return mem_00AF053C;
}
} // namespace lift_0053ABF0

// [0x0053AE40] Primitives::Animation::vfunc_8 (343 bytes)
namespace lift_0053AE40 {
extern void ext_0053ACF0(void* self, uint32_t mask, uint32_t flag);

// @name Primitives::Animation::vfunc_8
// @class Primitives::Animation
// @summary Normalizes the flag word at +0x1C (clearing mutually-exclusive flag pairs), then applies mode-specific set/clear or forwards to ext_0053ACF0 for modes 4-7; mode 8 is a no-op.
// @field Primitives::Animation +0x1C uint32_t field_0x1C
void fn_0053AE40(void* self, uint32_t mode) {
    if (mode == 8) {
        return;
    }

    uint32_t& flags = lift_field<uint32_t>(self, 0x1C);

    // Normalize: any mask whose bits are all set gets toggled off.
    if ((flags & 0x8008u) == 0x8008u) flags ^= 0x8008u;
    if ((flags & 0x4008u) == 0x4008u) flags ^= 0x4008u;
    if ((flags & 0x10008u) == 0x10008u) flags ^= 0x10008u;
    if ((flags & 0x18u) == 0x18u) flags ^= 0x18u;
    if ((flags & 0x400008u) == 0x400008u) flags ^= 0x400008u;
    if ((flags & 0x800008u) == 0x800008u) flags ^= 0x800008u;
    if (flags & 0x8u) flags ^= 0x8u;

    switch (mode) {
    case 1:
        if (flags & 0x8u) return;
        flags ^= 0x8u;
        return;
    case 2:
        if ((flags & 0x18u) == 0x18u) return;
        flags ^= 0x18u;
        return;
    case 3:
        if ((flags & 0x400008u) == 0x400008u) return;
        flags ^= 0x400008u;
        return;
    case 4:
        ext_0053ACF0(static_cast<uint8_t*>(self) + 0x18, 0x800008u, 1u);
        return;
    case 5:
        ext_0053ACF0(static_cast<uint8_t*>(self) + 0x18, 0x4008u, 1u);
        return;
    case 6:
        ext_0053ACF0(static_cast<uint8_t*>(self) + 0x18, 0x10008u, 1u);
        return;
    case 7:
        ext_0053ACF0(static_cast<uint8_t*>(self) + 0x18, 0x8008u, 1u);
        return;
    default:
        return;
    }
}
} // namespace lift_0053AE40

// [0x0053A8E0] Primitives::Animation::vfunc_18 (75 bytes)
namespace lift_0053A8E0 {
// @name Primitives::Animation::vfunc_18
// @class Primitives::Animation
// @summary Tests bits of the flags word at +0x1C selected by a mode argument (0: bit 3 clear, 1: bit 3 set, 2: bits 3-4 both set, else 0).
// @field Primitives::Animation +0x1C uint32_t flags
int fn_0053A8E0(void* self, uint32_t mode) {
    const uint32_t flags = lift_field<uint32_t>(self, 0x1C);
    switch (mode) {
        case 0:
            return (flags & 0x8u) != 0x8u ? 1 : 0;
        case 1:
            return (flags & 0x8u) == 0x8u ? 1 : 0;
        case 2:
            return (flags & 0x18u) == 0x18u ? 1 : 0;
        default:
            return 0;
    }
}
} // namespace lift_0053A8E0

// [0x0053ADD0] Primitives::Animation::vfunc_23 (77 bytes)
namespace lift_0053ADD0 {
extern void ext_0053AD70(void* self);
extern void ext_0053A5E0(void* self, const void* tag, uint32_t arg);
extern uint8_t mem_0093A444;

// @name Primitives::Animation::vfunc_23
// @class Primitives::Animation
// @summary Calls the child object's vfunc slot 7, runs base refresh helpers, then transfers a pending flag from the linked object at +0x20 into self+0x04 and returns it.
// @field Primitives::Animation +0x04 uint8_t field_0x04
// @field Primitives::Animation +0x08 void* field_0x08
// @field Primitives::Animation +0x20 void* field_0x20
uint8_t fn_0053ADD0(void* self, uint32_t unused_a1, uint32_t arg) {
    (void)unused_a1;

    // Notify the object at +0x08 through its vtable slot 7 (offset 0x1C).
    void* child = lift_field<void*>(self, 0x08);
    if (child != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(child);
        using VSlot7 = void (*)(void*);
        reinterpret_cast<VSlot7>(vtbl[7])(child);
    }

    ext_0053AD70(self);
    ext_0053A5E0(self, &mem_0093A444, arg);

    // If the object at +0x20 has its flag byte (+0x04) set, move the flag to self.
    void* other = lift_field<void*>(self, 0x20);
    if (other != nullptr && lift_field<uint8_t>(other, 0x04) != 0) {
        lift_field<uint8_t>(self, 0x04) = 1;
        lift_field<uint8_t>(other, 0x04) = 0;
    }

    return lift_field<uint8_t>(self, 0x04);
}
} // namespace lift_0053ADD0
