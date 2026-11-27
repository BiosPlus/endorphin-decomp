// Lifted C++ translation unit: lifted/NMData/CameraData.cpp
#include "lift_compat.h"
#include <string>
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005DCDA0(void* self, void* owner);
// Callee 0x005CFD60: classifies the argument; called with the object as thiscall `this` (ecx) and the argument on the stack.
extern "C" uint32_t __thiscall ext_005CFD60(void* self, uint32_t arg);
// Callee 0x0058A3C0: AnimatableTransform::vfunc_57, thiscall with one stack argument.
extern "C" void* __thiscall ext_0058A3C0(void* self, uint32_t arg);

extern "C" uint32_t __thiscall ext_005CFD60(void* self, uint32_t arg);
// Callee 0x0058A3C0: AnimatableTransform::vfunc_57, thiscall with one stack argument.
extern "C" void* __thiscall ext_0058A3C0(void* self, uint32_t arg);
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005DCFB0(void* self) {
    void* mem = ext_006A5C62(0x2C8);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005DCDA0(mem, owner);
}

// [0x005D06E0] NMData::CameraData::vfunc_57 (44 bytes)
// @name NMData::CameraData::vfunc_57
// @class NMData::CameraData
// @summary Classifies the argument via 0x005CFD60; if the result is 3, forwards to AnimatableTransform::vfunc_57, otherwise returns a pointer into the 8-byte-stride table at this+0x264 indexed by the result.
// @field NMData::CameraData +0x264 uint8_t field_0x264
void* __thiscall fn_005D06E0(void* self, uint32_t arg) {
    uint32_t kind = ext_005CFD60(self, arg);
    if (kind == 3) {
        return ext_0058A3C0(self, arg);
    }
    auto* base = reinterpret_cast<uint8_t*>(self);
    return base + 0x264 + static_cast<uintptr_t>(kind) * 8;
}

// [0x005CFC20]
namespace lift_005CFC20 {
// @name NMData::CameraData::vfunc_14
// @class NMData::CameraData
// @summary Handles property/message 0x1b9 on CameraData by calling sub_00661650 or sub_0046F7D0, otherwise delegates to NMData::AxisDefineSensorData::vfunc_14.
// @field NMData::CameraData +0x1a8 uint8_t field_0x1a8
// @field NMData::CameraData +0x1f0 uint8_t field_0x1f0

extern void* __thiscall ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
extern void __thiscall ext_00661650(void* self, void* arg1);
extern void __cdecl ext_0046F7D0(void* arg1);

void* __thiscall fn_005CFC20(void* self, void* arg1, uint32_t arg2) {
    if (arg2 != 0x1b9) {
        ext_0058F6B0(self, arg1, arg2);
        return arg1;
    }

    auto* base = static_cast<uint8_t*>(self);
    if (base[0x1f0] != 0) {
        ext_00661650(arg1, base + 0x1a8);
    } else {
        ext_0046F7D0(arg1);
    }
    return arg1;
}
} // namespace lift_005CFC20

// [0x005D13B0] NMData::CameraData::vfunc_7_off_C (115 bytes)
namespace lift_005D13B0 {
// Known callee 0x005B11D0: sub_005B11D0 (Returns a pointer to the 32-bit element at the given index in an inline array at offset 0x10.)
extern uint32_t* ext_005B11D0(uintptr_t self, uint32_t index);
// Global guard byte set to 1 while this function runs and cleared to 0 on exit.
extern uint8_t mem_00B3F200;

// @name NMData::CameraData::vfunc_7_off_C
// @class NMData::CameraData
// @summary Sets the guard flag, queries a float via vtable slot 1 of the object at +0x25C, stores it into the element at +0x204, and marks +0x208 as set.
// @field NMData::CameraData +0x204 uint8_t field_0x204
// @field NMData::CameraData +0x208 uint8_t field_0x208
// @field NMData::CameraData +0x258 float field_0x258
// @field NMData::CameraData +0x25C void* field_0x25c
void fn_005D13B0(void* self) {
    mem_00B3F200 = 1;

    // Query the float through vtable slot 1 (offset 4) of the object at +0x25C.
    void* obj = lift_field<void*>(self, 0x25C);
    void** vtbl = *reinterpret_cast<void***>(obj);
    using QueryFn = float(__thiscall*)(void* self, float* out);
    auto query = reinterpret_cast<QueryFn>(vtbl[1]);
    float value = query(obj, &lift_field<float>(self, 0x258));

    // Store the value into the element at index 0 of the inline array at +0x204.
    uint32_t* elem = ext_005B11D0(reinterpret_cast<uintptr_t>(self) + 0x204, 0);
    *reinterpret_cast<float*>(elem) = value;

    lift_field<uint8_t>(self, 0x208) = 1;
    mem_00B3F200 = 0;
}
} // namespace lift_005D13B0

// [0x005DCB00] NMData::CameraData::vfunc_14_off_8 (179 bytes)
namespace lift_005DCB00 {
// Known callee 0x005DC4D0: sub_005DC4D0 (Auto-lifted identical-shape clone of 0x005B4030 (storeValueWithStaticSingleton).)
// Called cdecl (out, value); the result is consumed from eax.
extern void* ext_005DC4D0(void* out, uint32_t value);
// Known callee 0x0041CF50: Unknown::assignFromOther_0041CF50 (Self-assignment guarded copy ... Returns self.)
// thiscall: self in ecx, other on the stack.
extern void* ext_0041CF50(void* self, void* other);
// Known callee 0x005DC4F0: sub_005DC4F0 (Auto-lifted identical-shape clone of 0x005B4030 (storeValueWithStaticSingleton).)
extern void* ext_005DC4F0(void* out, uint32_t value);
// Known callee 0x0058F030: AnimatableTransform::vfunc_14_off_8 (thiscall, no args).
extern void ext_0058F030(void* self);

// Calls vtable slot 0x78 (thiscall: this in ecx, one stack arg) on the object at `obj`.
static void call_vslot_0x78(void* obj, void* arg) {
    void** vtbl = lift_field<void**>(obj, 0);
    void* slot = lift_field<void*>(vtbl, 0x78);
    reinterpret_cast<void (*)(void*, void*)>(slot)(obj, arg);
}

// @name NMData::CameraData::vfunc_14_off_8
// @class NMData::CameraData
// @summary Refreshes the two cached CameraData slots at +0x264 and +0x25C from helper results, releasing the previous occupants, then runs the TransformNode update (ext_0058F030).
// @field NMData::CameraData +0x25C void* field_0x25c
// @field NMData::CameraData +0x264 uint8_t field_0x264
void fn_005DCB00(void* self) {
    uint8_t* obj = reinterpret_cast<uint8_t*>(self);
    // Original stack frame scratch slots: frame[0] / frame[2] receive the helper outputs;
    // frame[1] / frame[3] are the release targets read back after the copy calls.
    uint32_t frame[4] = {};
    void* edi = obj - 8;

    // Block 1: produce a value, copy it into this+0x264.
    void* t0 = ext_005DC4D0(&frame[0], static_cast<uint32_t>(reinterpret_cast<uintptr_t>(edi)));
    ext_0041CF50(obj + 0x264, t0);
    void* old0 = reinterpret_cast<void*>(static_cast<uintptr_t>(frame[1]));
    if (old0 != nullptr) {
        call_vslot_0x78(old0, &frame[0]);
    }

    // Block 2: produce a second value, copy it into this+0x25C.
    void* t1 = ext_005DC4F0(&frame[2], static_cast<uint32_t>(reinterpret_cast<uintptr_t>(edi)));
    ext_0041CF50(obj + 0x25C, t1);
    void* old1 = reinterpret_cast<void*>(static_cast<uintptr_t>(frame[3]));
    if (old1 != nullptr) {
        call_vslot_0x78(old1, &frame[2]);
    }

    // Final update on this (AnimatableTransform::vfunc_14_off_8).
    ext_0058F030(obj);
}
} // namespace lift_005DCB00

// [0x005DD190] NMData::CameraData::vfunc_34 (315 bytes)
namespace lift_005DD190 {
// Callees (kept as ext_/mem_ references for differential testing against endorphin.exe).
extern uintptr_t ext_00493E00(void* self);                        // thunk: vtable+0xB4 of first field
extern void      ext_005DD090(void* self, uintptr_t arg);
extern void*     ext_00493E50(void* self, void* p, uintptr_t flags); // scalar deleting dtor thunk
extern void*     ext_00493E40(void* self, void* p, uintptr_t q);     // vtable-pointer forwarder
extern void      ext_00528B90(void* self, void* peer);              // setPeerWithBackLink
extern DWORD     ext_00528BB0(void* self, DWORD a0, DWORD a1);      // forwardVirtual0x2CIfNonNull
extern uintptr_t ext_00493E70(void* self, void* extra);             // vtable+0x198 forwarder
extern void      ext_00548190(void* self, void* arg);
extern uintptr_t ext_00480920(void* self, uintptr_t a, uintptr_t b);
extern void      ext_005CFE10(void* self, uint32_t arg1);           // set_field_0x1f2
extern int mem_00B40640;

// Virtual dispatch through a vtable slot given as a byte offset (e.g. 0x1C -> slot 7).
template <typename R, typename... Args>
static inline R vslot(void* obj, size_t byteOffset, Args... args) {
    void* const* vtbl = *reinterpret_cast<void* const* const*>(obj);
    using Fn = R (*)(void*, Args...);
    Fn fn = reinterpret_cast<Fn>(vtbl[byteOffset / sizeof(void*)]);
    return fn(obj, args...);
}

// @name NMData::CameraData::vfunc_34
// @class NMData::CameraData
// @summary Resolves two child objects via thunks, wires back-links into them, stores the second one at this+0x2C4, and returns the object from the final forwarder.
// @field NMData::CameraData +0x04 void* field_0x04
// @field NMData::CameraData +0x0C void* field_0x0c
// @field NMData::CameraData +0xE8 uintptr_t field_0xe8
// @field NMData::CameraData +0x154 void* field_0x154
// @field NMData::CameraData +0x15C uint8_t field_0x15c
// @field NMData::CameraData +0x1F2 uint8_t field_0x1f2
// @field NMData::CameraData +0x210 uint8_t field_0x210
// @field NMData::CameraData +0x2C4 void* field_0x2c4
void* fn_005DD190(void* self, void* arg) {
    uint8_t* const base = static_cast<uint8_t*>(self);
    void* const sub4 = base + 0x04;
    void* const sub0c = base + 0x0C;
    void* const p15c = base + 0x15C;
    void* const p210 = base + 0x210;

    uintptr_t a = ext_00493E00(arg);
    ext_005DD090(self, a);

    void* res;
    if (vslot<uint8_t>(sub4, 0x1C)) {
        res = ext_00493E50(arg, p15c, lift_field<uintptr_t>(self, 0xE8));
    } else {
        uintptr_t g = static_cast<uintptr_t>(static_cast<uint32_t>(mem_00B40640));
        uintptr_t r = vslot<uintptr_t>(sub4, 0x0C, g);
        res = ext_00493E40(arg, p15c, r);
    }
    lift_field<void*>(res, 0x20) = p15c;

    ext_00528B90(sub0c, res);
    ext_00528BB0(sub0c, 0x100, 1);
    ext_00528BB0(sub0c, 0x40000, 1);

    void* ebx = reinterpret_cast<void*>(ext_00493E70(arg, res));

    void* const p154 = lift_field<void*>(self, 0x154);
    if (p154) {
        ext_00548190(p154, self);
    }

    uintptr_t r480 = ext_00480920(p154, 0, 0);
    void* edi2 = ext_00493E40(arg, p210, r480);
    lift_field<void*>(edi2, 0x20) = p210;

    lift_field<void*>(self, 0x2C4) = edi2;
    ext_005CFE10(self, lift_field<uint8_t>(self, 0x1F2));

    vslot<void>(ebx, 0x0C, edi2);
    return ebx;
}
} // namespace lift_005DD190
