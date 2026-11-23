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

// [0x0053B2B0] Primitives::Animation::vfunc_12 (112 bytes)
namespace lift_0053B2B0 {
extern uint8_t ext_00661B10(void* self);
extern uint32_t* ext_0053B1F0(void* self, uint32_t index);

// @name Primitives::Animation::vfunc_12
// @class Primitives::Animation
// @summary Sets or clears the bit mask in a1 on either the indexed slot of obj (when obj predicate is false and field_0x30 is valid) or on this->field_0x1C, depending on flag.
// @field Animation +0x1C uint32_t field_0x1C
// @field Animation +0x30 uint32_t field_0x30
void fn_0053B2B0(void* self, uint32_t mask, uint8_t flag, void* obj) {
    if (ext_00661B10(obj) == 0) {
        uint32_t index = lift_field<uint32_t>(self, 0x30);
        if (index != 0x7FFFFFFFu) {
            uint32_t value = *ext_0053B1F0(obj, index);
            uint8_t isSet = ((value & mask) == mask) ? 1 : 0;
            if (isSet != flag) {
                value ^= mask;
            }
            *ext_0053B1F0(obj, index) = value;
            return;
        }
    }

    uint32_t bits = lift_field<uint32_t>(self, 0x1C);
    uint8_t isSet = ((bits & mask) == mask) ? 1 : 0;
    if (isSet != flag) {
        bits ^= mask;
        lift_field<uint32_t>(self, 0x1C) = bits;
    }
}
} // namespace lift_0053B2B0

// [0x0053F410]
namespace lift_0053F410 {
// @name Primitives::Animation::vfunc_28
// @class Primitives::Animation
// @summary Renders the cuboid base and, if enabled and having >1 keyframes, draws GL_LINES connecting keyframe positions.
// @field Primitives::Animation +0x1C uint32_t flags
// @field Primitives::Animation +0x9C void* field_0x9C

void ext_00466910(void* self);
void ext_00466F00(void* self, void* arg0);
void ext_0053B4F0(void* self, void* arg0);
int32_t ext_00661A00(void* self);
uint8_t ext_00661E80(void* self);
void ext_006622C0(void* self);

extern void (*mem_00925134)(void);
extern void (*mem_0092546C)(uint32_t mask);
extern void (*mem_00925488)(void);
extern void (*mem_00925490)(uint32_t mode);
extern void (*mem_00925498)(const float* v);
extern void (*mem_00925520)(float width);
extern void (*mem_0092552C)(void);

void fn_0053F410(void* self, void* arg0) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    ext_0053B4F0(self, arg0);

    if ((*reinterpret_cast<uint32_t*>(obj + 0x1C) & 0x2000000u) == 0) {
        return;
    }

    void* animData = *reinterpret_cast<void**>(obj + 0x9C);
    if (animData == nullptr) {
        return;
    }

    if (ext_00661A00(animData) <= 1) {
        return;
    }

    uint8_t guard[0x6C];
    ext_00466F00(guard, animData);
    ext_006622C0(animData);

    mem_0092546C(0x4);   // glPushAttrib(GL_LINE_BIT)
    mem_00925520(1.0f);  // glLineWidth(1.0f)
    mem_00925490(0x1);   // glBegin(GL_LINES)

    do {
        uint8_t* esi = *reinterpret_cast<uint8_t**>(obj + 0x9C);
        uint8_t* container = *reinterpret_cast<uint8_t**>(esi + 0x8);
        if (container == nullptr) {
            mem_00925134();
        }
        container = *reinterpret_cast<uint8_t**>(esi + 0x8);
        uint8_t* iter = *reinterpret_cast<uint8_t**>(esi + 0xC);
        if (iter == *reinterpret_cast<uint8_t**>(container + 0x4)) {
            mem_00925134();
        }

        uint8_t* vecPtr = *reinterpret_cast<uint8_t**>(esi + 0xC) + 0x8;
        uint8_t* first = *reinterpret_cast<uint8_t**>(vecPtr + 0x8);
        if (first == nullptr ||
            ((reinterpret_cast<intptr_t>(*reinterpret_cast<uint8_t**>(vecPtr + 0xC)) -
              reinterpret_cast<intptr_t>(first)) >>
             6) == 0) {
            mem_00925134();
        }

        uint8_t* elem = *reinterpret_cast<uint8_t**>(vecPtr + 0x8);
        float v[3] = {
            *reinterpret_cast<float*>(elem + 0x30),
            *reinterpret_cast<float*>(elem + 0x34),
            *reinterpret_cast<float*>(elem + 0x38),
        };
        mem_00925498(v);  // glVertex3fv
    } while (ext_00661E80(*reinterpret_cast<void**>(obj + 0x9C)) != 0);

    mem_00925488();  // glEnd()
    mem_0092552C();  // glPopAttrib()

    ext_00466910(guard);
}
} // namespace lift_0053F410

// [0x0053B320]
namespace lift_0053B320 {
extern void __thiscall ext_0053B130(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern uint32_t __thiscall ext_00661C90(void* self, uint32_t id);

extern uint8_t mem_00AEE8A8[];
extern uint8_t mem_00AEED24[];
extern uint8_t mem_009253CC[];
extern uint8_t mem_0092546C[];
extern uint8_t mem_0092551C[];
extern uint8_t mem_00925438[];
extern uint8_t mem_009253F8[];
extern uint8_t mem_009253F4[];
extern uint8_t mem_009253F0[];
extern uint8_t mem_0092552C[];
extern uint8_t mem_00925524[];

// @name Primitives::Animation::vfunc_22
// @class Primitives::Animation
// @summary Renders the animation primitive with OpenGL name/attribute/display-list management.
// @field Primitives::Animation +0x00 void* vtable
// @field Primitives::Animation +0x04 uint8_t field_0x04
// @field Primitives::Animation +0x0C uint8_t field_0x0C
// @field Primitives::Animation +0x1C uint32_t flags
// @field Primitives::Animation +0x30 uint32_t field_0x30
// @field Primitives::Animation +0x34 uint32_t field_0x34
// @field Primitives::Animation +0x38 void* field_0x38

void __thiscall fn_0053B320(void* self, uint32_t arg0) {
    uint8_t* esi = reinterpret_cast<uint8_t*>(self);
    uint32_t id = *reinterpret_cast<uint32_t*>(esi + 0x30);
    uint32_t ebx = *reinterpret_cast<uint32_t*>(esi + 0x1C);
    if (id != 0x7FFFFFFFu) {
        void* mgr = *reinterpret_cast<void**>(mem_00AEE8A8);
        ebx = ext_00661C90(mgr, id);
    }

    bool match = ((arg0 & *reinterpret_cast<uint32_t*>(esi + 0x1C)) == arg0);
    bool proceed = false;
    if ((ebx & 0x200u) != 0) {
        if (arg0 == 0x100000u || (match && arg0 != 1u)) {
            proceed = true;
        }
    } else if (match) {
        proceed = true;
    }

    auto call_child_vfunc28 = [&]() {
        void* child = *reinterpret_cast<void**>(esi + 0x38);
        void** vtbl = *reinterpret_cast<void***>(child);
        auto fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vtbl[0x28 / 4]);
        fn(child, *reinterpret_cast<uint32_t*>(mem_00AEED24));
    };

    if (!proceed || (ebx & 0x1000u) == 0) {
        call_child_vfunc28();
        return;
    }

    auto glPushName = *reinterpret_cast<void(__stdcall**)(uint32_t)>(mem_009253CC);
    glPushName(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(esi)));

    ext_0053B130(esi, arg0, 0x009553B0u, ebx);

    if (*reinterpret_cast<uint8_t*>(esi + 0x0C) == 0) {
        call_child_vfunc28();
    } else {
        uint32_t flags = *reinterpret_cast<uint32_t*>(esi + 0x1C);
        if ((flags & 0x100u) != 0) {
            auto glPushAttrib = *reinterpret_cast<void(__stdcall**)(uint32_t)>(mem_0092546C);
            auto glPolygonMode = *reinterpret_cast<void(__stdcall**)(uint32_t, uint32_t)>(mem_0092551C);
            auto glDisable = *reinterpret_cast<void(__stdcall**)(uint32_t)>(mem_00925438);
            glPushAttrib(0x8u);
            glPolygonMode(0x408u, 0x1B01u);
            glDisable(0xB44u);
        }

        call_child_vfunc28();

        uint32_t listId = *reinterpret_cast<uint32_t*>(esi + 0x34);
        auto call_self_vfunc70 = [&]() {
            void** vtbl = *reinterpret_cast<void***>(esi);
            auto fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vtbl[0x70 / 4]);
            fn(esi, arg0);
        };

        if (listId != 0) {
            if (*reinterpret_cast<uint8_t*>(esi + 0x04) != 0) {
                auto glNewList = *reinterpret_cast<void(__stdcall**)(uint32_t, uint32_t)>(mem_009253F8);
                auto glEndList = *reinterpret_cast<void(__stdcall**)(void)>(mem_009253F4);
                glNewList(listId, 0x1301u);
                call_self_vfunc70();
                glEndList();
                *reinterpret_cast<uint8_t*>(esi + 0x04) = 0;
            } else {
                auto glCallList = *reinterpret_cast<void(__stdcall**)(uint32_t)>(mem_009253F0);
                glCallList(listId);
            }
        } else {
            call_self_vfunc70();
        }

        if ((*reinterpret_cast<uint32_t*>(esi + 0x1C) & 0x100u) != 0) {
            auto glPopAttrib = *reinterpret_cast<void(__stdcall**)(void)>(mem_0092552C);
            glPopAttrib();
        }
    }

    auto glPopName = *reinterpret_cast<void(__stdcall**)(void)>(mem_00925524);
    glPopName();
}
} // namespace lift_0053B320
