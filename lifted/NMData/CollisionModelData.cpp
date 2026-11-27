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
#include <cstdint>

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

// [0x005C3180] NMData::CollisionModelData::vfunc_62 (34 bytes)
namespace lift_005C3180 {
// IAT slot the original called for the MSVCP80 std::basic_string ctor; the
// portable version constructs the std::string directly, so this is unused.
extern int mem_00924FE0;
// C string literal pushed at 0x005C3186 (argument to the string ctor).
extern const char mem_00B447F4[];

// @name NMData::CollisionModelData::vfunc_62
// @class NMData::CollisionModelData
// @summary Constructs a std::string in the caller-supplied buffer from a literal and returns the buffer pointer.
void* __stdcall fn_005C3180(void* self) {
    (void)&mem_00924FE0;  // keep the original IAT reference visible; no ABI call needed
    new (self) std::string(mem_00B447F4);
    return self;
}
} // namespace lift_005C3180

// [0x005C37E0]
namespace lift_005C37E0 {
extern void __fastcall ext_005B1B60(void* self, void* edx, const void* src);

extern void __fastcall ext_00648470(void* self);
extern void __fastcall ext_00648790(void* self);
extern void ext_006A5C5C(void);

// @name NMData::CollisionModelData::vfunc_5_off_C
// @class NMData::CollisionModelData
// @summary Forwards a vec4 to the sub-object at +0x150, then calls vfunc 0x34 on the object at +0x4 with (x,y,z,0).
// @field NMData::CollisionModelData +0x04 void* field_0x04
// @field NMData::CollisionModelData +0x150 void* field_0x150
extern void __fastcall fn_005C37E0(void* self, void* edx, const float* src)
{
    (void)&ext_00648470; (void)&ext_00648790; (void)&ext_006A5C5C;
    char* base = (char*)self;
    void* sub = *(void**)(base + 0x150);
    if (!sub) return;
    ext_005B1B60(sub, edx, src);
    float v[4];
    v[0] = src[0];
    v[1] = src[1];
    v[2] = src[2];
    v[3] = 0.0f;
    void* obj = *(void**)(base + 0x4);
    if (obj) {
        void** vt = *(void***)obj;
        typedef void (__thiscall *Fn)(void*, float*);
        ((Fn)vt[0x34 / 4])(obj, v);
    }
}
} // namespace lift_005C37E0

// [0x005C4020]
namespace lift_005C4020 {
// @name NMData::CollisionModelData::vfunc_33
// @class NMData::CollisionModelData
// @summary Sets the string at +0x17C from a literal, clears the u32 at +0x198, sets three flag bytes to 1 and clears one, then chains to the base class vfunc_33.
// @field NMData::CollisionModelData +0x17C std::string field_0x17c
// @field NMData::CollisionModelData +0x198 uint32_t field_0x198
// @field NMData::CollisionModelData +0x19C uint8_t field_0x19c
// @field NMData::CollisionModelData +0x19D uint8_t field_0x19d
// @field NMData::CollisionModelData +0x19E uint8_t field_0x19e
// @field NMData::CollisionModelData +0x19F uint8_t field_0x19f


extern const char mem_00928B5D[];
extern const void* mem_00924FDC;
extern const void* mem_00924FE4;
extern const void* mem_00924FF4;
void ext_005C3660(void* self);

void fn_005C4020(void* self) {
    // Original MSVCP80 import slots (string ctor / operator= / dtor) are replaced by
    // std::string semantics; the slot addresses are kept as metadata-only references.
    (void)&mem_00924FDC;
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;

    // Original: std::string temp("<literal>"); this->field_0x17c = temp; temp.~string();
    lift_field<std::string>(self, 0x17C) = std::string(mem_00928B5D);

    lift_field<uint32_t>(self, 0x198) = 0;
    lift_field<uint8_t>(self, 0x19C) = 1;
    lift_field<uint8_t>(self, 0x19D) = 1;
    lift_field<uint8_t>(self, 0x19E) = 1;
    lift_field<uint8_t>(self, 0x19F) = 0;

    ext_005C3660(self);
}
} // namespace lift_005C4020

// [0x005CCCF0] NMData::CollisionModelData::vfunc_15 (147 bytes)
namespace lift_005CCCF0 {
// Callees (stack args pushed as: first arg = selector value, second = self/ECX).
extern uint32_t ext_005CC750(uint32_t value, uintptr_t self);
extern uint32_t ext_005CC770(uint32_t value, uintptr_t self);
extern uint32_t ext_005CC790(uint32_t value, uintptr_t self);
extern uint32_t ext_005CC7B0(uint32_t value, uintptr_t self);
// Base-class vfunc_15: thiscall (self in ECX), two stack args.
extern uint32_t ext_005C3010(void* self, uint32_t a, uint32_t b);

// @name NMData::CollisionModelData::vfunc_15
// @class NMData::CollisionModelData
// @summary Dispatches on the selector value (0x21F/0x220/0x221/0x373) to a specific helper; all other values forward to the base vfunc_15. Returns the selector unchanged.
// @field none
extern uint32_t fn_005CCCF0(void* self, uint32_t unused, uint32_t value) {
    const uintptr_t self_bits = reinterpret_cast<uintptr_t>(self);
    switch (value) {
    case 0x21F:
        ext_005CC750(value, self_bits);
        break;
    case 0x220:
        ext_005CC770(value, self_bits);
        break;
    case 0x221:
        ext_005CC790(value, self_bits);
        break;
    case 0x373:
        ext_005CC7B0(value, self_bits);
        break;
    default:
        ext_005C3010(self, value, value);
        break;
    }
    return value;
}
} // namespace lift_005CCCF0

// [0x005C31D0] NMData::CollisionModelData::vfunc_13_off_C (145 bytes)
namespace lift_005C31D0 {
extern void ext_005BF400();
extern int mem_00924FDC;
extern int mem_00924FF4;

// @name NMData::CollisionModelData::vfunc_13_off_C
// @class NMData::CollisionModelData
// @summary Fetches a string from the primary object's virtual slot 0xF8, copies it into this+8, then forwards the primary object to ext_005BF400 on the non-null argument.
// @field NMData::CollisionModelData +0x14 std::string field_0x14

namespace {

// Virtual slot at vtable+0xF8 on the primary (this-0xC) object: returns const std::string* into `out`.
using GetStringFn = const void* (__thiscall*)(void* self, void* out);
// MSVCP80 std::string::operator=(const std::string&) and ~std::string(), reached through IAT slots.
using StringAssignFn = void* (__thiscall*)(void* self, const void* rhs);
using StringDtorFn = void (__thiscall*)(void* self);
// Sub-routine ext_005BF400: thiscall(arg, primary).
using ForwardFn = void (__thiscall*)(void* self, void* primary);

}  // namespace

bool __thiscall fn_005C31D0(void* self, void* arg) {
    if (arg == nullptr) {
        return false;
    }

    // self is the RenderObjectOwner/Updateable sub-object at +0xC of the primary object.
    unsigned char* primary = static_cast<unsigned char*>(self) - 0xC;
    unsigned char* vtbl_bytes = *reinterpret_cast<unsigned char**>(primary);
    GetStringFn get_string = *reinterpret_cast<GetStringFn*>(vtbl_bytes + 0xF8);

    // Local std::string temp (MSVC 2005 layout, 0x1C bytes).
    alignas(8) unsigned char tmp[0x1C] = {};

    const void* src = get_string(primary, tmp);

    // String assign into self+8 (= primary+0x14) via the IAT-bound operator=.
    StringAssignFn string_assign =
        reinterpret_cast<StringAssignFn>(*reinterpret_cast<void* const*>(&mem_00924FDC));
    string_assign(static_cast<unsigned char*>(self) + 8, src);

    // Destroy the temp string via the IAT-bound destructor.
    StringDtorFn string_dtor =
        reinterpret_cast<StringDtorFn>(*reinterpret_cast<void* const*>(&mem_00924FF4));
    string_dtor(tmp);

    // Forward to ext_005BF400 with ecx=arg, stack=primary.
    ForwardFn forward = reinterpret_cast<ForwardFn>(ext_005BF400);
    forward(arg, primary);

    return true;
}
} // namespace lift_005C31D0

// [0x005CCE20] NMData::CollisionModelData::vfunc_12_off_C (306 bytes)
namespace lift_005CCE20 {
// Callees (declared with prototypes so they can be called from C++).
extern void ext_0041A920(void* vec, const void* elem);       // container push helper (sub_0041A920)
extern void ext_00481BD0(void* self, uint32_t value);        // ZeroMatchingDwordRange (fn_00481BD0 in leaf)
extern void ext_005BF460(void* self, const void* arg);       // sub_005BF460
extern void ext_006A5C5C(uint32_t code);                     // thunk_MFC80_ord_764
// Import slot 0x00925134: MSVCR80!_invalid_parameter_noinfo (called on failed range checks).
extern void (*mem_00925134)(void);

// @name NMData::CollisionModelData::vfunc_12_off_C
// @class NMData::CollisionModelData
// @summary Queries an optional sub-object for a flag, zeroes matching dwords in a local-relative range, rebuilds a temp vector from this+0x74..0x78, notifies an interface, and forwards a non-null error code to thunk_MFC80_ord_764. Returns true on success.
// @field NMData::CollisionModelData +0x74 uint32_t field_0x74
// @field NMData::CollisionModelData +0x78 uint32_t field_0x78
// @field NMData::CollisionModelData +0x158 void* field_0x158
bool fn_005CCE20(void* self, void* arg1, uint32_t value) {
    // Optional query: if this->+0x158 -> +0x20C -> +0x18C is set, call its vtable slot 0x48
    // (slot index 18); bail out with false if it reports failure.
    void* obj = lift_field<void*>(self, 0x158);
    if (obj != nullptr) {
        void* sub = lift_field<void*>(obj, 0x20C);
        void* q = lift_field<void*>(sub, 0x18C);
        if (q != nullptr) {
            void** vt = *reinterpret_cast<void***>(q);
            auto query = reinterpret_cast<bool (*)(void*)>(vt[0x48 / 4]);
            if (!query(q)) {
                return false;
            }
        }
    }

    // ZeroMatchingDwordRange over the range rooted at (self - 0x0C), matching `value`.
    uint8_t* self_m12 = static_cast<uint8_t*>(self) - 0x0C;
    ext_00481BD0(self_m12, value);

    if (lift_field<void*>(self, 0x158) == nullptr) {
        return false;
    }

    // Walk the uint32 range [this+0x74, this+0x78), pushing each element into a temp vector.
    uint32_t vec[3] = {0, 0, 0};
    uint32_t it = lift_field<uint32_t>(self, 0x74);
    if (it > lift_field<uint32_t>(self, 0x78)) {
        mem_00925134();
    }
    for (;;) {
        uint32_t end = lift_field<uint32_t>(self, 0x78);
        if (lift_field<uint32_t>(self, 0x74) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }
        if (!(it < end)) {
            mem_00925134();
        }
        ext_0041A920(vec, reinterpret_cast<const void*>(static_cast<uintptr_t>(it)));
        if (!(it < lift_field<uint32_t>(self, 0x78))) {
            mem_00925134();
        }
        it += 4;
    }

    // Push the address of the range-start pointer (self - 0x0C) into the temp vector.
    value = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self_m12));
    ext_0041A920(vec, &value);

    // Notify arg1 via its vtable slot 0x44 (index 17); it writes an error/status code into ret_code.
    uint32_t ret_code = 0;
    void** vt2 = *reinterpret_cast<void***>(arg1);
    auto notify = reinterpret_cast<void (*)(void*, uint32_t*)>(vt2[0x44 / 4]);
    notify(arg1, &ret_code);

    obj = lift_field<void*>(self, 0x158);
    ext_005BF460(obj, self_m12);

    if (ret_code != 0) {
        ext_006A5C5C(ret_code);
    }
    return true;
}
} // namespace lift_005CCE20

// [0x005CC490] NMData::CollisionModelData::vfunc_16_off_C (134 bytes)
namespace lift_005CC490 {
extern void* ext_006A5C62(size_t size);
extern void* ext_005CC390(void* self, void* owner);

// @name NMData::CollisionModelData::vfunc_16_off_C
// @class NMData::CollisionModelData
// @summary Auto-lifted identical-shape clone of 0x005CC6C0 (NMData::FluidObjectData::vfunc_16_off_C).
// @field NMData::CollisionModelData +0x158 void* field_0x158
namespace lift_005CC6C0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk forwarding to MFC80!ord_762, operator new(size)).
extern void* __cdecl ext_006A5C62(size_t size);
// Callee 0x005CC5C0 (sub_005CC5C0, 131B): thiscall on the freshly allocated object, one stack arg (base-adjusted this).
extern void* __thiscall ext_005CC390(void* self, void* base);
// Callee 0x005BF510 (sub_005BF510, 93B): thiscall on arg1, one stack arg (constructed object).
extern void __thiscall ext_005BF400(void* self, void* obj);
// Callee 0x005BF570 (sub_005BF570, 59B): thiscall on this->field_0x158, one stack arg (base-adjusted this).
extern void __thiscall ext_005BF460(void* self, void* base);

// @name NMData::FluidObjectData::vfunc_16_off_C
// @class NMData::FluidObjectData
// @summary Allocates a 0x19c-byte object, constructs it against the base-adjusted this, hands it to arg1 and re-registers this->field_0x158; returns the constructed object (or null if allocation failed).
// @field NMData::FluidObjectData +0x158 void* field_0x158
void* __thiscall fn_005CC490(void* self, void* arg1) {
    void* base = reinterpret_cast<uint8_t*>(self) - 0xc;
    void* result = nullptr;
    void* obj = ext_006A5C62(0x1A0);
    if (obj != nullptr) {
        result = ext_005CC390(obj, base);
    }
    ext_005BF400(arg1, result);
    ext_005BF460(lift_field<void*>(self, 0x158), base);
    return result;
}
} // namespace lift_005CC6C0
} // namespace lift_005CC490

// [0x005C87C0] NMData::CollisionModelData::vfunc_63 (160 bytes)
namespace lift_005C87C0 {
// Allocator thunk 0x006A5C62 -> MFC80!ord_762 (cdecl, takes byte count, returns new block).
extern void* ext_006A5C62(size_t size);
// Known callee 0x006486B0 (sub_006486B0): thiscall, this passed in ecx, returns result in eax.
extern void* ext_006486B0(void* self);
// Known callee 0x00648790: Unknown::ReleaseOwnedPointers (thiscall, this passed in ecx).
extern void ext_00648790(void* self);
// Free thunk 0x006A5C5C -> MFC80!ord_764 (cdecl, takes the block to release).
extern void ext_006A5C5C(void* ptr);
// Known callee 0x00648530 (sub_00648530): thiscall, this = ecx (the new object);
// stack args are (self, a1, a2, a3).
extern void ext_00648530(void* thisObj, void* self, uint32_t a1, uint32_t a2, uint32_t a3);

// @name NMData::CollisionModelData::vfunc_63
// @class NMData::CollisionModelData
// @summary Allocates a 0x60-byte helper object, swaps it into self+0x16C (releasing any previous one), runs sub_00648530 on it with the three stack args, and clears the flag at self+0x168.
// @field NMData::CollisionModelData +0x168 uint8_t field_0x168
// @field NMData::CollisionModelData +0x16C void* field_0x16c
void fn_005C87C0(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    void* created = ext_006A5C62(0x60);
    void* newObj = nullptr;
    if (created != nullptr) {
        newObj = ext_006486B0(created);
    }

    void* old = lift_field<void*>(self, 0x16C);
    if (newObj != old && old != nullptr) {
        ext_00648790(old);
        ext_006A5C5C(old);
    }

    lift_field<void*>(self, 0x16C) = newObj;
    ext_00648530(newObj, self, a1, a2, a3);
    lift_field<uint8_t>(self, 0x168) = 0;
}
} // namespace lift_005C87C0

// [0x005C84C0] NMData::CollisionModelData::vfunc_34 (159 bytes)
namespace lift_005C84C0 {
// Known callee 0x00493E40: forwardVtableSlot194 (Dereferences a pointer-to-pointer held in self, then tail-jumps to the)
// Variadic: called with (self, x, v) on one path and (self, w) on the other.
extern void* ext_00493E40(void* self, ...);
// Known callee 0x00528B90: Unknown::setPeerWithBackLink (Stores the argument at this+0x04; if it is non-null, writes this into argument+0x08.)
extern void ext_00528B90(void* self, void* peer);
// Unlifted callee 0x005B5AF0 (sub_005B5AF0, 92B): one stack argument, result in eax.
extern void* ext_005B5AF0(void* a);
// Metadata-only: listed in CALLEES/RDATA but never referenced by the original bytes.
// Address-of only below, so nothing executes or reads at runtime.
extern void ext_005BF400();
extern int mem_00924FDC;
extern int mem_00924FF4;

// @name NMData::CollisionModelData::vfunc_34
// @class NMData::CollisionModelData
// @summary Resolves a peer through the embedded TransformInterface vslot 11 and a forwarding helper, links it back to the embedded subobject at +0x0C, and returns it.
// @field NMData::CollisionModelData +0x04 void* field_0x04
// @field NMData::CollisionModelData +0x0C void* field_0x0c
// @field NMData::CollisionModelData +0x15C void* field_0x15c
// @field NMData::CollisionModelData +0x160 uint8_t field_0x160
void* fn_005C84C0(void* self, void* arg) {
    typedef void* (*VSlotFn)(void* thisPtr, void* a);

    // Metadata-only references (see declarations above); address-of only, no runtime effect.
    (void)&ext_005BF400;
    (void)&mem_00924FDC;
    (void)&mem_00924FF4;

    // Embedded subobjects: TransformInterface at +0x04 (its vtable is at +0x04 itself), peer link slot at +0x0C.
    void* transformIface = reinterpret_cast<unsigned char*>(self) + 0x04;
    void* linkSlot = reinterpret_cast<unsigned char*>(self) + 0x0C;

    void* x = lift_field<void*>(self, 0x15C);
    bool haveX = (x != nullptr) && (lift_field<uint8_t>(self, 0x160) != 0);

    // vslot 11 (offset 0x2C) of the TransformInterface vtable, called with linkSlot as its argument.
    void** vtbl = *reinterpret_cast<void***>(transformIface);
    VSlotFn slot11 = reinterpret_cast<VSlotFn>(vtbl[11]);
    void* v = slot11(transformIface, linkSlot);

    void* result;
    if (haveX) {
        result = ext_00493E40(arg, x, v);
        lift_field<void*>(result, 0x20) = x;
    } else {
        void* w = ext_005B5AF0(v);
        result = ext_00493E40(arg, w);
    }

    ext_00528B90(linkSlot, result);
    return result;
}
} // namespace lift_005C84C0

// [0x005C4100] NMData::CollisionModelData::vfunc_21 (650 bytes)
namespace lift_005C4100 {
extern void ext_0058F630(void* self, void* obj);
extern uint32_t ext_0063EFE0(void* self, const char* name);
extern void ext_00427640(void* out, void* item_slot);
extern void ext_004275E0(void* dst, void* obj);
extern uint32_t ext_0063F530(void* self, uint32_t a, uint32_t b, uint32_t c);
extern void* ext_006A5C62(uint32_t size);
extern void* ext_005B3500(void* self);
extern void ext_005B18E0(void* self, void* src);
extern void ext_005B5E50(void* self, uint32_t code);
extern int mem_00A9F568;
extern int mem_00A9F56C;
extern int mem_00A9F564;
extern int mem_00A9F724;
extern int mem_00A9FAB4;
extern int mem_00A9F7B8;
extern int mem_00A9EF58;
extern int mem_00A9F570;
extern int mem_00924FE4;
extern int mem_00924FF4;

namespace {

constexpr uint32_t kSentinelA34 = 0x00B53A34u;
constexpr uint32_t kSentinelB30 = 0x00B53B30u;
constexpr uint32_t kSentinelAB0 = 0x00B53AB0u;
constexpr uint32_t kSentinelA70 = 0x00B53A70u;
constexpr uint32_t kSentinelAF0 = 0x00B53AF0u;

inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

inline const char* as_cstr(int v) {
    return reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(v)));
}

inline bool is_sentinel(uint32_t r) {
    return r == kSentinelA34 || r == kSentinelB30 || r == kSentinelAB0 ||
           r == kSentinelA70 || r == kSentinelAF0;
}

// Looks up the item named by `name` in `obj`, then stores the comparison
// result (via ext_00427640) into the byte at `out`.
void lookup_and_compare(void* obj, int name, void* out) {
    uint32_t slot = ext_0063EFE0(obj, as_cstr(name));
    ext_00427640(out, &slot);
}

}  // namespace

// @name NMData::CollisionModelData::vfunc_21
// @class NMData::CollisionModelData
// @summary Resolves named flags from obj into this object's bytes and rebuilds the owned node at +0x15C (with string payload) via the base vfunc_21 and helper calls.
// @field NMData::CollisionModelData +0x158 void* field_0x158
// @field NMData::CollisionModelData +0x15C void* field_0x15c
// @field NMData::CollisionModelData +0x160 uint8_t field_0x160
// @field NMData::CollisionModelData +0x17C std::string field_0x17c
// @field NMData::CollisionModelData +0x19C uint8_t field_0x19c
// @field NMData::CollisionModelData +0x19D uint8_t field_0x19d
// @field NMData::CollisionModelData +0x19E uint8_t field_0x19e
// @field NMData::CollisionModelData +0x19F uint8_t field_0x19f
void fn_005C4100(void* self, void* obj) {
    // std::string ctor/dtor IAT slots: replaced by std::string below (metadata-only refs).
    (void)&mem_00924FE4;
    (void)&mem_00924FF4;

    ext_0058F630(self, obj);

    lookup_and_compare(obj, mem_00A9F568, &lift_field<uint8_t>(self, 0x19C));
    lookup_and_compare(obj, mem_00A9F56C, &lift_field<uint8_t>(self, 0x19D));
    lookup_and_compare(obj, mem_00A9F564, &lift_field<uint8_t>(self, 0x19E));
    lookup_and_compare(obj, mem_00A9F724, &lift_field<uint8_t>(self, 0x160));

    uint32_t r = ext_0063EFE0(obj, as_cstr(mem_00A9FAB4));
    if (!is_sentinel(r)) {
        uint32_t slot = ext_0063EFE0(obj, as_cstr(mem_00A9FAB4));
        ext_00427640(&lift_field<uint8_t>(self, 0x19F), &slot);
    }

    uint32_t name_item = ext_0063EFE0(obj, as_cstr(mem_00A9F7B8));
    ext_004275E0(&lift_field<std::string>(self, 0x17C), as_ptr(name_item));

    uint32_t r2 = ext_0063F530(obj, static_cast<uint32_t>(mem_00A9EF58), 0, 1);
    if (is_sentinel(r2)) {
        return;
    }

    void* fresh = nullptr;
    void* node = ext_006A5C62(0x4C);
    if (node != nullptr) {
        fresh = ext_005B3500(node);
    }

    void* old = lift_field<void*>(self, 0x15C);
    if (fresh != old && old != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(old);
        reinterpret_cast<void (*)(void*, int)>(vtbl[0])(old, 1);
    }
    lift_field<void*>(self, 0x15C) = fresh;

    void* back = self ? static_cast<void*>(reinterpret_cast<uint8_t*>(self) + 0x158) : nullptr;
    lift_field<void*>(fresh, 0x48) = back;

    {
        std::string tmp(as_cstr(mem_00A9F570));
        ext_005B18E0(fresh, &tmp);
    }

    uint32_t r3 = ext_0063F530(obj, static_cast<uint32_t>(mem_00A9EF58), 0, 1);
    if (is_sentinel(r3)) {
        r3 = kSentinelB30;
    }
    ext_005B5E50(fresh, r3);
}
} // namespace lift_005C4100

// [0x005C4390] NMData::CollisionModelData::vfunc_22 (263 bytes)
namespace lift_005C4390 {
// Known callee 0x00427550: ResetChildAndAssignName (Clears the owned objects of the object referenced by this+0x00, then assigns the given C string as the child name via assignOrCreateChild.)
extern void __thiscall ext_00427550(void* self, const char* name);
// Base vfunc_22 (NMData::CollisionModelDataBase::vfunc_22), called with ecx=this, one stack arg.
extern void __thiscall ext_0058F650(void* self, void* obj);
// Helper sub_005B44B0, called with ecx=field_0x15c and one stack arg.
extern void __thiscall ext_005B44B0(void* self, void* obj);
// Helper sub_00640110, called with ecx=object and one stack arg; returns a new object pointer.
extern void* __thiscall ext_00640110(void* self, uint32_t arg);
// Helper sub_006404E0, called with ecx=stack argument and one stack arg; returns an object pointer.
extern void* __thiscall ext_006404E0(void* self, uint32_t arg);
// Known callee 0x00640A80: ResetChildNameFromBool (Resets the child object's name to "true" or "false" depending on the boolean argument.)
extern void ext_00640A80(void* child, uint8_t flag);

// Global values pushed as call arguments (data-section constants).
extern int mem_00A9EDCC;
extern int mem_00A9F7B8;
extern int mem_00A9F568;
extern int mem_00A9F56C;
extern int mem_00A9F564;
extern int mem_00A9F724;
extern int mem_00A9FAB4;
// MSVCP80 import slots for std::string::empty / c_str. Replaced by the std::string
// member calls below; referenced only so the original-asm global set is accounted for.
extern int mem_00924FEC;
extern int mem_00924FF0;

// @name NMData::CollisionModelData::vfunc_22
// @class NMData::CollisionModelData
// @summary Builds an object from the stack argument, runs base vfunc_22 on it, optionally sets the child name from field_0x17c, pushes five bool-flagged children from fields 0x19c-0x19f and 0x160, forwards to ext_005B44B0 when field_0x15c is set, and returns the object.
// @field NMData::CollisionModelData +0x15C void* field_0x15c
// @field NMData::CollisionModelData +0x160 uint8_t field_0x160
// @field NMData::CollisionModelData +0x17C std::string field_0x17c
// @field NMData::CollisionModelData +0x19C uint8_t field_0x19c
// @field NMData::CollisionModelData +0x19D uint8_t field_0x19d
// @field NMData::CollisionModelData +0x19E uint8_t field_0x19e
// @field NMData::CollisionModelData +0x19F uint8_t field_0x19f
extern void* __thiscall fn_005C4390(void* self, void* arg) {
    (void)&mem_00924FEC;
    (void)&mem_00924FF0;

    void* obj = ext_006404E0(arg, static_cast<uint32_t>(mem_00A9EDCC));
    ext_0058F650(self, obj);

    std::string& name = lift_field<std::string>(self, 0x17C);
    if (!name.empty()) {
        void* child = ext_00640110(obj, static_cast<uint32_t>(mem_00A9F7B8));
        ext_00427550(&child, name.c_str());
    }

    void* child = ext_00640110(obj, static_cast<uint32_t>(mem_00A9F568));
    ext_00640A80(child, lift_field<uint8_t>(self, 0x19C));

    child = ext_00640110(obj, static_cast<uint32_t>(mem_00A9F56C));
    ext_00640A80(child, lift_field<uint8_t>(self, 0x19D));

    child = ext_00640110(obj, static_cast<uint32_t>(mem_00A9F564));
    ext_00640A80(child, lift_field<uint8_t>(self, 0x19E));

    child = ext_00640110(obj, static_cast<uint32_t>(mem_00A9F724));
    ext_00640A80(child, lift_field<uint8_t>(self, 0x160));

    child = ext_00640110(obj, static_cast<uint32_t>(mem_00A9FAB4));
    ext_00640A80(child, lift_field<uint8_t>(self, 0x19F));

    void* sub = lift_field<void*>(self, 0x15C);
    if (sub != nullptr) {
        ext_005B44B0(sub, obj);
    }
    return obj;
}
} // namespace lift_005C4390
