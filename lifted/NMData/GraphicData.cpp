// Lifted C++ translation unit: lifted/NMData/GraphicData.cpp
#include "lift_compat.h"
// Known callee 0x0058F6B0: NMData::AxisDefineSensorData::vfunc_14 (Returns arg1; if arg2 == 0x199 calls sub_00661650 on arg1, otherwise calls AnimatableTransform::vfunc_13 on self with (arg1, arg2).)
extern "C" void ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
// Known callee 0x00661650 (35B): sub_00661650, thiscall-style with one stack argument.
extern "C" void ext_00661650(void* self, void* arg);
extern "C" void* __cdecl ext_005B11F0(void* self);
#include <string>
#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_00587C80(void* self, void* owner);

#include <new>
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_00587C80(void* self, void* owner);
// @summary If arg2 == 0x9C, forwards arg1 to sub_00661650 with the subobject at this+0x154; otherwise forwards (arg1, arg2) to AxisDefineSensorData::vfunc_14. Always returns arg1.
// @field NMData::GraphicData +0x154 uint8_t field_0x154 (address of subobject only; not read or written here)
void* fn_0061FF40(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x9C) {
        void* sub = static_cast<uint8_t*>(self) + 0x154;
        ext_00661650(arg1, sub);
    } else {
        ext_0058F6B0(self, arg1, arg2);
    }
    return arg1;
}

// [0x0061FEF0]
// @name NMData::GraphicData::vfunc_6_off_C
// @class NMData::GraphicData
// @summary Fetches a 3-float vector via OglRenderer::vfunc_118 on the subobject at +0x148 and copies it to the output buffer, writing 0.0f to the fourth float.
// @field NMData::GraphicData +0x148 void* field_0x148
void __thiscall fn_0061FEF0(void* self, float* out) {
    void* renderer = lift_field<void*>(self, 0x148);
    const float* src = static_cast<const float*>(ext_005B11F0(renderer));

    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
    out[3] = 0.0f;
}

// [0x00620240] NMData::GraphicData::vfunc_17_off_C (99 bytes)
// @name NMData::GraphicData::vfunc_17_off_C
// @class NMData::GraphicData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_00620240(void* self) {
    void* mem = ext_006A5C62(0x1A0);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_00587C80(mem, owner);
}

// [0x0061FE60]
namespace lift_0061FE60 {
// @name NMData::GraphicData::vfunc_4_off_C
// @class NMData::GraphicData
// @summary Updates subobject at +0x148 and notifies listener at +0x4 via vtable +0x34 if present.
// @field NMData::GraphicData +0x04 void* field_0x04
// @field NMData::GraphicData +0x148 void* field_0x148


extern void __thiscall ext_005B1AB0(void* self, uint32_t arg0);
extern uint32_t __thiscall ext_005B11F0(void* self);

void __thiscall fn_0061FE60(void* self, uint32_t arg0) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* subobj = base + 0x148;
    ext_005B1AB0(subobj, arg0);

    void* listener = *reinterpret_cast<void**>(base + 0x04);
    if (listener != nullptr) {
        uint32_t* vtable = *reinterpret_cast<uint32_t**>(listener);
        uint32_t val = ext_005B11F0(subobj);
        auto fn = reinterpret_cast<void(__thiscall*)(void*, uint32_t)>(vtable[0x34 / 4]);
        fn(listener, val);
    }
}
} // namespace lift_0061FE60

// [0x0061FEA0] NMData::GraphicData::vfunc_5_off_C (78 bytes)
namespace lift_0061FEA0 {
extern void ext_005B1B60(void* self, const float* v);

// @name NMData::GraphicData::vfunc_5_off_C
// @class NMData::GraphicData
// @summary Forwards a 3-component vector to the embedded sub-object at +0x148, then if the object at +0x4 is non-null, calls its vtable slot 13 with a w=0 padded copy of the vector.
// @field NMData::GraphicData +0x04 void* field_0x04
// @field NMData::GraphicData +0x148 void* field_0x148
void fn_0061FEA0(void* self, const float* v) {
    // Hand the input vector to the embedded sub-object at this+0x148.
    ext_005B1B60(static_cast<uint8_t*>(self) + 0x148, v);

    // Build a float4 {x, y, z, 0} from the input vector.
    float tmp[4] = {v[0], v[1], v[2], 0.0f};

    void* child = lift_field<void*>(self, 0x04);
    if (child != nullptr) {
        // vtable slot 13 (offset 0x34)
        void** vtbl = *reinterpret_cast<void***>(child);
        using VMethod = void (*)(void* self, float* vec4);
        reinterpret_cast<VMethod>(vtbl[0x34 / sizeof(void*)])(child, tmp);
    }
}
} // namespace lift_0061FEA0

// [0x00620120] NMData::GraphicData::vfunc_34 (139 bytes)
namespace lift_00620120 {
// Known callee 0x00493E40: forwardVtableSlot194. Dereferences the pointer-to-pointer in self,
// then forwards the two stack arguments to vtable slot 194 of the dereferenced object.
extern uintptr_t ext_00493E40(void* self, uintptr_t a, uintptr_t b);
// Known callee 0x00528B90: Unknown::setPeerWithBackLink. Stores peer at self+0x04; if peer is
// non-null, writes self into peer+0x08.
extern void ext_00528B90(void* self, void* peer);
extern int mem_00B40640;

// @name NMData::GraphicData::vfunc_34
// @class NMData::GraphicData
// @summary Calls slot 3 on the sub-object at +0x04 and slot 54 on self (twice), resolves an object via ext_00493E40 from the stack argument and the slot 54 result, stores the second slot 54 result at its +0x20, links it to the +0x0C sub-object via ext_00528B90, and returns it.
// @field NMData::GraphicData +0x00 void* field_0x00
// @field NMData::GraphicData +0x04 void* field_0x04
// @field NMData::GraphicData +0x0C void* field_0x0C (address of subobject only; not read or written here)
void* fn_00620120(void* self, void* arg) {
    uint8_t* base = static_cast<uint8_t*>(self);
    void* sub0c = (base != nullptr) ? static_cast<void*>(base + 0x0C) : nullptr;

    // Slot 3 (offset 0x0C) of the object at +0x04, called on the +0x04 sub-object.
    void* sub04 = base + 0x04;
    void** vt04 = *reinterpret_cast<void***>(sub04);
    using Fn3 = uintptr_t (*)(void* self, uintptr_t a, void* b, uintptr_t c);
    uintptr_t r1 = reinterpret_cast<Fn3>(lift_field<void*>(vt04, 0x0C))(
        sub04, static_cast<uintptr_t>(mem_00B40640), sub0c, 0);

    // Slot 54 (offset 0xD8) on self.
    void** vt0 = *reinterpret_cast<void***>(self);
    using Fn0 = uintptr_t (*)(void* self);
    uintptr_t r2 = reinterpret_cast<Fn0>(lift_field<void*>(vt0, 0xD8))(self);

    // Resolve the target object from the stack argument, forwarding r2 and r1.
    uintptr_t target = ext_00493E40(arg, r2, r1);
    void* obj = reinterpret_cast<void*>(target);

    // Slot 54 on self again; store the result at obj+0x20.
    uintptr_t r3 = reinterpret_cast<Fn0>(lift_field<void*>(vt0, 0xD8))(self);
    lift_field<uintptr_t>(obj, 0x20) = r3;

    // Link obj to the +0x0C sub-object.
    ext_00528B90(base + 0x0C, obj);

    return obj;
}
} // namespace lift_00620120
