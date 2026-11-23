// Lifted C++ translation unit: lifted/NMData/MetaBodyData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" void __thiscall ext_0058A370(void* self, void* a, void* b);
extern "C" const float* ext_005B11F0(void* self);
extern "C" const float* __thiscall ext_005B11F0(void* self);

// [0x005B64A0] NMData::MetaBodyData::vfunc_2 (32 bytes)
// @name NMData::MetaBodyData::vfunc_2
// @class NMData::MetaBodyData
// @summary Auto-lifted identical-shape clone of 0x005C32B0 (NMData::FluidObjectData::vfunc_15).
void* __thiscall fn_005B64A0(void* self, void* a, void* b) {
    ext_0058A370(self, a, b);
    return a;
}

// [0x005B6880]
// @name NMData::MetaBodyData::vfunc_6_off_C
// @class NMData::MetaBodyData
// @summary If field_0x14C is non-null, copy the xyz of the vec3 returned by ext_005B11F0(field+0x24) into the out vec4 and zero its w component.
// @field NMData::MetaBodyData +0x14C void* field_0x14C
void fn_005B6880(void* self, float* out) {
    void* p = lift_field<void*>(self, 0x14C);
    if (p == nullptr) {
        return;
    }
    const float* src = ext_005B11F0(static_cast<uint8_t*>(p) + 0x24);
    const float x = src[0];
    const float y = src[1];
    const float z = src[2];
    out[0] = x;
    out[1] = y;
    out[2] = z;
    out[3] = 0.0f;
}

// [0x005B6E70]
// @name NMData::MetaBodyData::vfunc_36
// @class NMData::MetaBodyData
// @summary Scales the RenderObjectOwner vector at +0xC by *scale and updates the render object at +0x10 if +0x158 is non-null.
// @field NMData::MetaBodyData +0x0C void* renderObjectOwner_vptr
// @field NMData::MetaBodyData +0x10 void* renderObject
// @field NMData::MetaBodyData +0x158 void* field_0x158
void __thiscall fn_005B6E70(void* this_ptr, const float* scale) {
    auto* base = static_cast<uint8_t*>(this_ptr);
    void* field_0x158 = *reinterpret_cast<void**>(base + 0x158);
    if (!field_0x158) {
        return;
    }

    float vec[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    void* owner = base + 0xC;
    void** owner_vtbl = *reinterpret_cast<void***>(owner);

    using GetVecFn = void(__thiscall*)(void*, float*);
    reinterpret_cast<GetVecFn>(owner_vtbl[6])(owner, vec);

    const float s = *scale;
    vec[0] *= s;
    vec[1] *= s;
    vec[2] *= s;

    owner_vtbl = *reinterpret_cast<void***>(owner);
    using SetVecFn = void(__thiscall*)(void*, float*);
    reinterpret_cast<SetVecFn>(owner_vtbl[5])(owner, vec);

    void* render_obj = *reinterpret_cast<void**>(base + 0x10);
    if (render_obj) {
        void** render_vtbl = *reinterpret_cast<void***>(render_obj);
        auto* renderer_sub = static_cast<uint8_t*>(field_0x158) + 0x24;
        const float* arg = ext_005B11F0(renderer_sub);
        using RenderUpdateFn = void(__thiscall*)(void*, const float*);
        reinterpret_cast<RenderUpdateFn>(render_vtbl[13])(render_obj, arg);
    }
}

// [0x005B6F00]
// @name NMData::MetaBodyData::vfunc_38
// @class NMData::MetaBodyData
// @summary Scales a dimension of the render object's bounding/transform vector and updates the attached object.
// @field NMData::MetaBodyData +0x0C void* field_0x0C
// @field NMData::MetaBodyData +0x10 void* field_0x10
// @field NMData::MetaBodyData +0x158 void* field_0x158

#include "lift_compat.h"

extern "C" const float* __thiscall ext_005B11F0(void* self);

void __thiscall fn_005B6F00(void* self, const float* scale) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint8_t* field_158 = *reinterpret_cast<uint8_t**>(obj + 0x158);
    if (!field_158) {
        return;
    }

    float vec[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    void* sub_0c = obj + 0x0C;
    void** vtbl_0c = *reinterpret_cast<void***>(sub_0c);
    using GetVecFn = void(__thiscall*)(void*, float*);
    reinterpret_cast<GetVecFn>(vtbl_0c[0x18 / 4])(sub_0c, vec);

    uint32_t mode = *reinterpret_cast<uint32_t*>(field_158 + 0x2C);
    void* sub_24 = field_158 + 0x24;
    if (mode == 5 || mode == 4) {
        vec[1] *= *scale;
    } else if (mode == 2) {
        vec[2] *= *scale;
    }

    vtbl_0c = *reinterpret_cast<void***>(sub_0c);
    using SetVecFn = void(__thiscall*)(void*, float*);
    reinterpret_cast<SetVecFn>(vtbl_0c[0x14 / 4])(sub_0c, vec);

    void* field_10 = *reinterpret_cast<void**>(obj + 0x10);
    if (field_10) {
        void** vtbl_10 = *reinterpret_cast<void***>(field_10);
        const float* res = ext_005B11F0(sub_24);
        using UpdateFn = void(__thiscall*)(void*, const float*);
        reinterpret_cast<UpdateFn>(vtbl_10[0x34 / 4])(field_10, res);
    }
}

// [0x005C0E00]
namespace lift_005C0E00 {
// @name NMData::MetaBodyData::vfunc_6
// @class NMData::MetaBodyData
// @summary Iterates over elements in vector at +0x7C, calls vtable+0x24 on each, and passes the result to sub_0040ECB0
// @field NMData::MetaBodyData +0x80 uint32_t* field_0x80
// @field NMData::MetaBodyData +0x84 uint32_t* field_0x84


extern uint32_t mem_00925134;
extern void __thiscall ext_0040ECB0(void* self, uint32_t arg);

void __thiscall fn_005C0E00(void* self, void* arg1) {
    uint8_t* esi = static_cast<uint8_t*>(self) + 0x7C;
    auto invalid_param = reinterpret_cast<void(__cdecl*)()>(mem_00925134);

    uint32_t* edi = *reinterpret_cast<uint32_t**>(esi + 0x04);
    if (edi > *reinterpret_cast<uint32_t**>(esi + 0x08)) {
        invalid_param();
    }

    for (;;) {
        uint32_t* ebx = *reinterpret_cast<uint32_t**>(esi + 0x08);
        if (*reinterpret_cast<uint32_t**>(esi + 0x04) > ebx) {
            invalid_param();
        }
        if (edi == ebx) {
            break;
        }
        if (edi >= *reinterpret_cast<uint32_t**>(esi + 0x08)) {
            invalid_param();
        }

        void* elem = reinterpret_cast<void*>(*edi);
        void** vtable = *reinterpret_cast<void***>(elem);
        auto vfunc = reinterpret_cast<uint32_t(__thiscall*)(void*)>(vtable[0x24 / 4]);
        uint32_t res = vfunc(elem);
        ext_0040ECB0(arg1, res);

        if (edi >= *reinterpret_cast<uint32_t**>(esi + 0x08)) {
            invalid_param();
        }
        ++edi;
    }
}
} // namespace lift_005C0E00
