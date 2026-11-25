// Lifted C++ translation unit: lifted/classes/AnimatableTransform.cpp
#include "lift_compat.h"
#include <string>
#include <new>

// [0x00593870] AnimatableTransform::vfunc_17_off_C (99 bytes)
namespace lift_00593870 {
extern void* ext_006A5C62(size_t size);
extern void* ext_005935A0(void* self, void* owner);

// @name AnimatableTransform::vfunc_17_off_C
// @class AnimatableTransform
// @summary Auto-lifted identical-shape clone of 0x004D3070 (NMData::TransitionEventData::vfunc_17_off_C).
void* fn_00593870(void* self) {
    void* mem = ext_006A5C62(0xF0);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005935A0(mem, owner);
}
} // namespace lift_00593870

// [0x005DF1F0] AnimatableTransform::vfunc_15 (30 bytes)
namespace lift_005DF1F0 {
extern void ext_00671F30(uint32_t);

// @name AnimatableTransform::vfunc_15
// @class AnimatableTransform
// @summary Passes its first argument to ext_00671F30 (zero first dword, store global into second) and returns the argument.

uint32_t __stdcall fn_005DF1F0(uint32_t self, uint32_t arg2) {
    (void)arg2;
    ext_00671F30(self);
    return self;
}
} // namespace lift_005DF1F0

// [0x00593680]
namespace lift_00593680 {
// @name AnimatableTransform::vfunc_9_off_4
// @class AnimatableTransform
// @summary Calls virtual slot 7 on self; if it returns true, forwards field +0xE4 to ext_00661A60 using global mem_00B40640, otherwise returns field +0xE0.
// @field AnimatableTransform +0x0 uint32_t vtable
// @field AnimatableTransform +0xE0 uint32_t field_0xE0
// @field AnimatableTransform +0xE4 uint32_t field_0xE4

extern void __fastcall ext_00661A60(void* self, uint32_t arg);

extern uint32_t mem_00B40640;

extern uint32_t __thiscall fn_00593680(void* self) {
    void* vtable = lift_field<void*>(self, 0x0);
    auto slot = reinterpret_cast<uint8_t (__thiscall*)(void*)>(
        reinterpret_cast<void* const*>(vtable)[0x1c / sizeof(void*)]);

    if (slot(self) != 0) {
        uint32_t arg = lift_field<uint32_t>(self, 0xE4);
        ext_00661A60(reinterpret_cast<void*>(static_cast<uintptr_t>(mem_00B40640)), arg);
        return 0;
    }
    return lift_field<uint32_t>(self, 0xE0);
}
} // namespace lift_00593680

// [0x0058A550] AnimatableTransform::vfunc_1_off_8 (45 bytes)
namespace lift_0058A550 {
// @name AnimatableTransform::vfunc_1_off_8
// @class AnimatableTransform
// @summary Calls virtual slot 0 on self four times (indices 3..6), passing (arg1, index, arg2) each time.
// @field AnimatableTransform +0x0 void* vtable

void __thiscall fn_0058A550(void* self, uint32_t arg1, uint32_t arg2) {
    void* vtable = lift_field<void*>(self, 0x0);
    auto slot0 = reinterpret_cast<void (__thiscall*)(void*, uint32_t, uint32_t, uint32_t)>(
        reinterpret_cast<void* const*>(vtable)[0]);

    for (uint32_t i = 3; i < 7; ++i) {
        slot0(self, arg1, i, arg2);
    }
}
} // namespace lift_0058A550

// [0x00585170]
namespace lift_00585170 {
// @name AnimatableTransform::vfunc_34
// @class AnimatableTransform
// @summary Resolves a property/transform value via TransformInterface and vfunc_54, then forwards to ext_00493E40.
// @field AnimatableTransform +0x00 void* vtable
// @field AnimatableTransform +0x04 void* transformInterface_vtable

extern uint32_t mem_00B40640;
extern uint32_t ext_00493E40(void* self, uint32_t arg);

uint32_t fn_00585170(void* self, void* arg0) {
    auto* base = static_cast<uint8_t*>(self);
    void* iface = base + 0x4;
    auto** iface_vtable = *reinterpret_cast<void***>(iface);
    using vfunc2_t = uint32_t(*)(void*, uint32_t, uint32_t, uint32_t);
    auto vfunc2 = reinterpret_cast<vfunc2_t>(iface_vtable[2]);
    uint32_t r1 = vfunc2(iface, mem_00B40640, 0, 0);

    auto** vtable = *reinterpret_cast<void***>(self);
    using vfunc54_t = uint32_t(*)(void*, uint32_t);
    auto vfunc54 = reinterpret_cast<vfunc54_t>(vtable[0xD8 / 4]);
    uint32_t r2 = vfunc54(self, r1);

    return ext_00493E40(arg0, r2);
}
} // namespace lift_00585170

// [0x00593D00]
namespace lift_00593D00 {
// @name AnimatableTransform::vfunc_2_off_4
// @class AnimatableTransform
// @summary Thiscall with one stack arg: returns this->field_0xE0 unless virtual slot 7 returns true and sub_00661B10(it) is false, in which case returns DequeIndexAt(it, this->field_0xE4).
// @field AnimatableTransform +0x00 uint32_t vtable
// @field AnimatableTransform +0xE0 uint32_t field_0xE0
// @field AnimatableTransform +0xE4 uint32_t field_0xE4
namespace lift_00593D00 {
extern uint8_t ext_00661B10(void* self);
extern void* ext_0053E290(void* self, uint32_t index);

static inline uint32_t ld32(uint32_t base, uint32_t off) {
    uint32_t v;
    std::memcpy(&v, reinterpret_cast<const unsigned char*>(static_cast<uintptr_t>(base + off)), 4);
    return v;
}

uint32_t fn_00593D00(void* self, void* it) {
    const uint32_t self_u = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self));

    // Virtual call: vtable = [self+0]; slot at vtable+0x1C (index 7)
    const uint32_t vtable = ld32(self_u, 0x00);
    const uint32_t slot7 = ld32(vtable, 0x1c);
    auto vfn = reinterpret_cast<uint8_t (*)(void*)>(static_cast<uintptr_t>(slot7));
    if (vfn(self) == 0) {
        return ld32(self_u, 0xE0);
    }

    if (ext_00661B10(it) != 0) {
        return ld32(self_u, 0xE0);
    }

    const uint32_t index = ld32(self_u, 0xE4);
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ext_0053E290(it, index)));
}
} // namespace lift_00593D00
} // namespace lift_00593D00

// [0x005936B0] AnimatableTransform::vfunc_43 (82 bytes)
namespace lift_005936B0 {
// @name AnimatableTransform::CopyTranslationFromInterface
// @class AnimatableTransform
// @summary Copies the translation row (+0x30..+0x38) from the interface's source matrix into its destination matrix and sets +0x3C to 1.0.
// @field AnimatableTransform +0x04 void* transformInterface_vtable
void fn_005936B0(void* self) {
    // TransformInterface subobject lives at self+0x04; its vtable pointer is the first dword of it.
    void* ti = static_cast<uint8_t*>(self) + 0x04;
    void** vtbl = *static_cast<void***>(ti);

    using GetMatrixFn = void* (*)(void* thisPtr);
    // Vtable slot 9 (byte offset 0x24) yields the destination matrix.
    void* dst = reinterpret_cast<GetMatrixFn>(vtbl[9])(ti);
    // Vtable slot 11 (byte offset 0x2C) yields the source matrix.
    void* src = reinterpret_cast<GetMatrixFn>(vtbl[11])(ti);

    // Read all three source components before writing, in case dst and src alias.
    const float tx = lift_field<float>(src, 0x30);
    const float ty = lift_field<float>(src, 0x34);
    const float tz = lift_field<float>(src, 0x38);

    lift_field<float>(dst, 0x30) = tx;
    lift_field<float>(dst, 0x34) = ty;
    lift_field<float>(dst, 0x38) = tz;
    lift_field<float>(dst, 0x3C) = 1.0f;
}
} // namespace lift_005936B0

// [0x0058A670] AnimatableTransform::vfunc_12_off_8 (94 bytes)
namespace lift_0058A670 {
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (Self-assignment guarded copy: if other differs, releases the current field_0x04 via vtable slot 0x78, copies other's field_0x04, then sets field_0x00 to the value written by other's field_0x04 vtable slot 0x70 (0 when that pointer is null). Returns self.)
extern void* ext_0041CF50(void* self, void* other);

// @name AnimatableTransform::vfunc_12_off_8
// @class AnimatableTransform
// @summary Assigns a two-dword value into the 8-byte slot at this+0xEC[index], then, if the value's first dword is non-null, invokes its vtable slot 30 (+0x78) with &index.
// @field AnimatableTransform +0xEC uint8_t field_0xEC // base of 8-byte element array indexed by arg1
void fn_0058A670(void* self, uint32_t index, uint32_t arg2, uint32_t arg3) {
    using VSlot30 = void (__thiscall*)(void* obj, uint32_t* idx);

    auto* base = static_cast<uint8_t*>(self);
    uint32_t value[2] = { arg2, arg3 };

    void* element = base + 0xEC + static_cast<size_t>(index) * 8u;
    ext_0041CF50(element, value);

    auto* target = reinterpret_cast<void*>(static_cast<uintptr_t>(value[0]));
    if (target != nullptr) {
        void** vtable = *static_cast<void***>(target);
        auto fn = reinterpret_cast<VSlot30>(vtable[0x78 / sizeof(void*)]);
        uint32_t idx = index;
        fn(target, &idx);
    }
}
} // namespace lift_0058A670
