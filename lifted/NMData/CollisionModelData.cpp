// Lifted C++ translation unit: lifted/NMData/CollisionModelData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
// Global std::string object at 0x00B447F4 (copy source). Its contents are set at runtime.
extern std::string mem_00B447F4;
extern "C" void* ext_006A5C62(size_t size);
extern "C" void* ext_005CC390(void* self, void* owner);

extern "C" void* ext_005CC390(void* self, void* owner);
// @name NMData::CollisionModelData::GetSharedName
// @class NMData::CollisionModelData
// @summary Copy-constructs std::string from the global at 0x00B447F4 into the caller's return slot and returns that slot (self is unused).
// @field NMData::CollisionModelData +0x00 (unused) self is not dereferenced
void* fn_005C3180(void* self, void* ret_slot) {
    (void)self;
    std::string* out = static_cast<std::string*>(ret_slot);
    new (out) std::string(mem_00B447F4);
    return out;
}
extern "C" const float* __thiscall ext_005B11F0(void* self);
extern "C" void ext_005C3660(void* self);
#include <cstring>

// [0x005C2FB0]
// @name NMData::CollisionModelData::vfunc_1_off_158
// @class NMData::CollisionModelData
// @summary Forwards a 3D point (with w=1.0f) to RenderObjectOwner::vfunc_5 after adjusting this pointer
#include "lift_compat.h"

void __thiscall fn_005C2FB0(void* self, const float* vec3) {
    uint8_t* adj_this = reinterpret_cast<uint8_t*>(self) - 0x14C;
    float vec4[4] = { vec3[0], vec3[1], vec3[2], 1.0f };
    void** vtable = *reinterpret_cast<void***>(adj_this);
    using VFunc5 = void(__thiscall*)(void*, float*);
    reinterpret_cast<VFunc5>(vtable[5])(adj_this, vec4);
}

// [0x005C3840]
// @name NMData::CollisionModelData::vfunc_6_off_C
// @class NMData::CollisionModelData
// @summary Queries OglRenderer::vfunc_118 on field_0x150 and writes vec3 with w=0.0f to output
// @field NMData::CollisionModelData +0x150 void* field_0x150
#include "lift_compat.h"

extern "C" const float* __thiscall ext_005B11F0(void* self);

void __thiscall fn_005C3840(void* self, float* out_vec4) {
    void* obj = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x150);
    if (!obj) {
        return;
    }
    const float* src = ext_005B11F0(obj);
    out_vec4[0] = src[0];
    out_vec4[1] = src[1];
    out_vec4[2] = src[2];
    out_vec4[3] = 0.0f;
}

// [0x005CC420] NMData::CollisionModelData::vfunc_17_off_C (99 bytes)
// @name NMData::CollisionModelData::vfunc_17_off_C
// @class NMData::CollisionModelData
// @summary Auto-lifted identical-shape clone of 0x004CFC30 (NMData::IncarnationEventData::vfunc_17_off_C).
void* fn_005CC420(void* self) {
    void* mem = ext_006A5C62(0x1A0);
    if (mem == nullptr) {
        return nullptr;
    }
    void* owner = static_cast<unsigned char*>(self) - 0xC;
    return ext_005CC390(mem, owner);
}

// [0x005C3E20]
// @name NMData::CollisionModelData::vfunc_14
// @class NMData::CollisionModelData
// @summary Dispatches on arg2 (0x9C, 0x199, or other) to a helper and returns arg1.
// @field NMData::CollisionModelData +0x15C void* field_0x15c

void* ext_0058F6B0(void* self, void* arg1, uint32_t arg2);
void* ext_00661650(void* self, void* arg);

void* fn_005C3E20(void* self, void* arg1, uint32_t arg2) {
    uint8_t* s = reinterpret_cast<uint8_t*>(self);
    void* field_0x15c = *reinterpret_cast<void**>(s + 0x15C);

    if (arg2 == 0x9C) {
        ext_00661650(arg1, field_0x15c);
    } else if (arg2 == 0x199) {
        if (field_0x15c != nullptr) {
            ext_0058F6B0(self, arg1, 0x199);
        } else {
            ext_00661650(arg1, nullptr);
        }
    } else {
        ext_0058F6B0(self, arg1, arg2);
    }
    return arg1;
}

// [0x005C3AB0] NMData::CollisionModelData::vfunc_36 (141 bytes)
// @name NMData::CollisionModelData::vfunc_36
// @class NMData::CollisionModelData
// @summary If field_0x15c is set, fetches a 3-float vector from the embedded sub-object at +0x0c, scales it uniformly by scale[0], passes it back to that sub-object's slot 5, then if field_0x10 is set calls its slot 13 with ext_005B11F0(field_0x15c).
// @field NMData::CollisionModelData +0x0c void* field_0x0c
// @field NMData::CollisionModelData +0x10 void* field_0x10
// @field NMData::CollisionModelData +0x15c void* field_0x15c
extern "C" void __thiscall fn_005C3AB0(void* self, const float* scale) {
    if (lift_field<void*>(self, 0x15c) == nullptr) {
        return;
    }

    void* sub = lift_field<void*>(self, 0x0c);
    void** subVt = *reinterpret_cast<void***>(sub);

    float t[3] = {0.0f, 0.0f, 0.0f};
    reinterpret_cast<void (*)(void*, float*)>(subVt[6])(sub, t);

    const float s = scale[0];
    t[0] = s * t[0];
    t[1] = s * t[1];
    t[2] = s * t[2];

    reinterpret_cast<void (*)(void*, float*)>(subVt[5])(sub, t);

    void* target = lift_field<void*>(self, 0x10);
    if (target != nullptr) {
        void* render = const_cast<float*>(ext_005B11F0(lift_field<void*>(self, 0x15c)));
        void** targetVt = *reinterpret_cast<void***>(target);
        reinterpret_cast<void (*)(void*, void*)>(targetVt[13])(target, render);
    }
}

// [0x005C4020]
// @name NMData::CollisionModelData::vfunc_33
// @class NMData::CollisionModelData
// @summary Assigns a string literal to the string member at +0x17C, clears the dword at +0x198, sets flags at +0x19C..+0x19E (true) and +0x19F (false), then calls the base-class vfunc_33.
// @field NMData::CollisionModelData +0x17C std::string field_0x17c
// @field NMData::CollisionModelData +0x198 uint32_t field_0x198
// @field NMData::CollisionModelData +0x19C uint8_t field_0x19c
// @field NMData::CollisionModelData +0x19D uint8_t field_0x19d
// @field NMData::CollisionModelData +0x19E uint8_t field_0x19e
// @field NMData::CollisionModelData +0x19F uint8_t field_0x19f
void __thiscall fn_005C4020(void* self) {
    {
        std::string tmp(reinterpret_cast<const char*>(static_cast<uintptr_t>(0x00928B5D)));
        lift_field<std::string>(self, 0x17C) = tmp;
    }
    lift_field<uint32_t>(self, 0x198) = 0;
    lift_field<uint8_t>(self, 0x19C) = 1;
    lift_field<uint8_t>(self, 0x19D) = 1;
    lift_field<uint8_t>(self, 0x19E) = 1;
    lift_field<uint8_t>(self, 0x19F) = 0;
    ext_005C3660(self);
}

// [0x005C3B40]
// @name NMData::CollisionModelData::vfunc_38
// @class NMData::CollisionModelData
// @summary Builds a zeroed vec3, scales one axis by *scale depending on the kind code of the object at +0x15C, pushes it to the sub-object at +0x0C, then forwards a renderer-derived value to the object at +0x10.
// @field NMData::CollisionModelData +0x0C void* field_0x0c
// @field NMData::CollisionModelData +0x10 void* field_0x10
// @field NMData::CollisionModelData +0x15C void* field_0x15c

#include "lift_compat.h"

extern "C" {
const float* __thiscall ext_005B11F0(void* self);
}

namespace {
struct Vec3 {
    float x;
    float y;
    float z;
};
}

void fn_005C3B40(void* self, const float* scale) {
    void* kind_obj = lift_field<void*>(self, 0x15C);
    if (kind_obj == nullptr) {
        return;
    }

    // Sub-object at +0x0C: vtable slot 6 fills the vector, slot 5 consumes it.
    void* sub = lift_field<void*>(self, 0x0C);
    void* const* sub_vt = *reinterpret_cast<void* const* const*>(sub);

    Vec3 v{0.0f, 0.0f, 0.0f};
    auto get_vec = reinterpret_cast<void (*)(void*, Vec3*)>(sub_vt[6]);
    get_vec(sub, &v);

    const uint32_t kind = lift_field<uint32_t>(kind_obj, 8);
    if (kind == 5u || kind == 4u) {
        v.y = v.y * *scale;
    } else if (kind == 2u) {
        v.z = v.z * *scale;
    }

    auto set_vec = reinterpret_cast<void (*)(void*, Vec3*)>(sub_vt[5]);
    set_vec(sub, &v);

    void* obj2 = lift_field<void*>(self, 0x10);
    if (obj2 != nullptr) {
        void* const* obj2_vt = *reinterpret_cast<void* const* const*>(obj2);
        const float* r = ext_005B11F0(kind_obj);
        auto fn13 = reinterpret_cast<void (*)(void*, const float*)>(obj2_vt[13]);
        fn13(obj2, r);
    }
}

// [0x005C2F70]
namespace lift_005C2F70 {
// @name NMData::CollisionModelData::vfunc_0_off_158
// @class NMData::CollisionModelData
// @summary Updates the render object owner and calls sub_005866C0 with a global offset and nested field.
// @field NMData::CollisionModelData +0x94 void* field_0x94


void __thiscall ext_00528B60(void* self);
int32_t __cdecl ext_00594000(void);
int32_t __thiscall ext_005866C0(void* self, int32_t arg1, uint32_t arg2);

extern int32_t __thiscall fn_005C2F70(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    uint8_t* obj1 = *reinterpret_cast<uint8_t**>(base - 0xC4);
    uint8_t* obj2 = *reinterpret_cast<uint8_t**>(obj1 + 0x10);
    uint32_t val = *reinterpret_cast<uint32_t*>(obj2 + 0x10);

    ext_00528B60(base - 0x14C);
    int32_t global_val = ext_00594000();
    return ext_005866C0(base - 0x158, global_val + 0x258, val);
}
} // namespace lift_005C2F70

// [0x005C37A0] NMData::CollisionModelData::vfunc_4_off_C (60 bytes)
namespace lift_005C37A0 {
extern void __thiscall ext_005B1AB0(void* self, const void* arg);
extern const float* __thiscall ext_005B11F0(void* self);

// @name NMData::CollisionModelData::vfunc_4_off_C
// @class NMData::CollisionModelData
// @summary Forwards arg to the buffered-TM object at +0x150, then calls vtable slot 13 of the object at +0x4 with the buffered-TM's OglRenderer value.
// @field NMData::CollisionModelData +0x04 void* field_0x04
// @field NMData::CollisionModelData +0x150 void* field_0x150
void fn_005C37A0(void* self, const void* arg) {
    char* base = static_cast<char*>(self);

    void* buffered = *reinterpret_cast<void**>(base + 0x150);
    if (buffered == nullptr) {
        return;
    }

    ext_005B1AB0(buffered, arg);

    void* iface = *reinterpret_cast<void**>(base + 0x4);
    if (iface == nullptr) {
        return;
    }

    const float* value = ext_005B11F0(buffered);

    void** vtbl = *reinterpret_cast<void***>(iface);
    auto fn = reinterpret_cast<void (__thiscall*)(void*, const float*)>(vtbl[0x34 / sizeof(void*)]);
    fn(iface, value);
}
} // namespace lift_005C37A0

// [0x005C38B0]
namespace lift_005C38B0 {
// @name NMData::CollisionModelData::vfunc_0_off_154
// @class NMData::CollisionModelData
// @summary Copies a 64-byte transform matrix from TransformInterface vfunc[5] into the buffer returned by ext_00648480 if field_0x18 is non-null.
// @field NMData::CollisionModelData +0x16C void* field_0x16c

extern void* __thiscall ext_00648480(void* self);

void __thiscall fn_005C38B0(void* self, uint32_t arg1) {
    auto* base = static_cast<uint8_t*>(self);
    void* target = *reinterpret_cast<void**>(base + 0x18);
    if (!target) {
        return;
    }

    uint8_t* iface = base - 0x150;
    uintptr_t vtable = *reinterpret_cast<uintptr_t*>(iface);
    using VFunc = const void* (__thiscall*)(void*, uint32_t);
    VFunc fn = *reinterpret_cast<VFunc*>(vtable + 0x14);
    const void* src = fn(iface, arg1);

    void* dst = ext_00648480(target);
    std::memcpy(dst, src, 64);
}
} // namespace lift_005C38B0

// [0x005C37E0]
namespace lift_005C37E0 {
extern void __fastcall ext_005B1B60(void* self, void* /*edx*/, const void* src);

// @name NMData::CollisionModelData::vfunc_5_off_C
// @class NMData::CollisionModelData
// @summary Copies a 4-float vector into the subobject at +0x150 and forwards a 3-float vector (with w=0) to vfunc +0x34 on the subobject at +0x04.
// @field NMData::CollisionModelData +0x04 void* field_0x04
// @field NMData::CollisionModelData +0x150 void* field_0x150
extern void __fastcall fn_005C37E0(void* self, void* /*edx*/, const float* vec) {
    auto* bytes = static_cast<uint8_t*>(self);
    void* sub150 = *reinterpret_cast<void**>(bytes + 0x150);
    if (!sub150) {
        return;
    }

    ext_005B1B60(sub150, nullptr, vec);

    float localVec[4];
    localVec[0] = vec[0];
    localVec[1] = vec[1];
    localVec[2] = vec[2];
    localVec[3] = 0.0f;

    void* sub04 = *reinterpret_cast<void**>(bytes + 0x04);
    if (sub04) {
        void** vtable = *reinterpret_cast<void***>(sub04);
        using VFunc = void(__fastcall*)(void*, void*, const float*);
        auto fn = reinterpret_cast<VFunc>(vtable[0x34 / 4]);
        fn(sub04, nullptr, localVec);
    }
}
} // namespace lift_005C37E0
