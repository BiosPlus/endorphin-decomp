// Lifted C++ translation unit: lifted/NMData/InertialBodyData.cpp
#include "lift_compat.h"

// [0x005CE760] NMData::InertialBodyData::vfunc_14 (64 bytes)
namespace lift_005CE760 {
extern void ext_0046F7D0(void* a);
extern void __thiscall ext_00661650(void* self, void* p);

// @name NMData::InertialBodyData::vfunc_14
// @class NMData::InertialBodyData
// @summary If id == 0x9C, forwards this+0x24 to ext_00661650 on a; if id == 0xB7, forwards this to it; otherwise calls ext_0046F7D0(a). Returns a.
extern void* __thiscall fn_005CE760(void* self, void* a, int32_t id) {
    if (id == 0x9C) {
        void* p = static_cast<unsigned char*>(self) + 0x24;
        ext_00661650(a, p);
    } else if (id == 0xB7) {
        ext_00661650(a, self);
    } else {
        ext_0046F7D0(a);
    }
    return a;
}
} // namespace lift_005CE760

// [0x005CF8D0] NMData::InertialBodyData::vfunc_15 (57 bytes)
namespace lift_005CF8D0 {
// Known callee 0x005CF4A0: sub_005CF4A0 (30B, not yet lifted). Called with (this, out).
extern void ext_005CF4A0(void* self, uint32_t* out);
// Known callee 0x00671F30: sub_00671F30 (Zeroes the first dword of the output buffer and stores the global mem_00B599BC into the second dword.)
extern void ext_00671F30(uint32_t* out);

// @name NMData::InertialBodyData::vfunc_15
// @class NMData::InertialBodyData
// @summary Writes into the output buffer via either the 0x00671F30 helper or the 0x005CF4A0 helper, depending on whether the flag argument equals 0x234; returns the output pointer.
uint32_t* fn_005CF8D0(void* self, uint32_t* out, uint32_t flag) {
    if (flag == 0x234) {
        ext_005CF4A0(self, out);
    } else {
        ext_00671F30(out);
    }
    return out;
}
} // namespace lift_005CF8D0

// [0x005CE7A0] NMData::InertialBodyData::vfunc_0_off_4 (205 bytes)
namespace lift_005CE7A0 {
extern void* __thiscall ext_005B11F0(void* self);
extern void __thiscall ext_00528B60(void* self);
// Known callee 0x00594000: sub_00594000 (Returns global int32 value from mem_00B40D08.)
extern int32_t __cdecl ext_00594000(void);
extern void __thiscall ext_005866C0(void* self, uint32_t a1, void* a2);

// @name NMData::InertialBodyData::vfunc_0_off_4
// @class NMData::InertialBodyData
// @summary Guarded update: reads a 3-float vector from this+0x20 (via OglRenderer::vfunc_118), calls vtable slot 5 of the sub-object at this->m_0xac+0xC with (x,y,z,1), then calls ext_00528B60, ext_00594000 and ext_005866C0 on the same chain.
// @field NMData::InertialBodyData +0x20 uint8_t field_0x20
// @field NMData::InertialBodyData +0xac void* field_0xac
void __thiscall fn_005CE7A0(void* self) {
    // Guard chain: this->+0xac, ->+0x94, and (->+0x94)->+0x10 must be non-null.
    void* p = lift_field<void*>(self, 0xac);
    if (p == nullptr) {
        return;
    }
    void* q = lift_field<void*>(p, 0x94);
    if (q == nullptr) {
        return;
    }
    if (lift_field<int32_t>(q, 0x10) == 0) {
        return;
    }

    // Three getter calls on the sub-object at this+0x20; each returns a float3*.
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x20;
    const float* r1 = static_cast<const float*>(ext_005B11F0(sub));
    const float zz = r1[2];
    const float* r2 = static_cast<const float*>(ext_005B11F0(sub));
    const float yy = r2[1];
    const float* r3 = static_cast<const float*>(ext_005B11F0(sub));
    const float xx = r3[0];

    // Build (xx, yy, zz, 1.0f) and call vtable slot 5 of the object at p+0xC.
    float vec[4] = {xx, yy, zz, 1.0f};
    p = lift_field<void*>(self, 0xac);
    void* obj = reinterpret_cast<uint8_t*>(p) + 0xC;
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto slot5 = reinterpret_cast<void (__thiscall*)(void*, float*)>(vtbl[5]);
    slot5(obj, vec);

    // Reload the chain after the virtual call (it may have mutated it).
    p = lift_field<void*>(self, 0xac);
    q = lift_field<void*>(p, 0x94);
    void* r = lift_field<void*>(q, 0x10);
    void* t = lift_field<void*>(r, 0x10);

    ext_00528B60(reinterpret_cast<uint8_t*>(p) + 0xC);
    // The original code keeps the return value of ext_00594000 in eax and
    // uses it as the first argument base (eax + 0x258) for the final call.
    int32_t g = ext_00594000();
    ext_005866C0(p, static_cast<uint32_t>(g) + 0x258u, t);
}
} // namespace lift_005CE7A0
