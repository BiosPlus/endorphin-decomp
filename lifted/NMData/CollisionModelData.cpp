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
