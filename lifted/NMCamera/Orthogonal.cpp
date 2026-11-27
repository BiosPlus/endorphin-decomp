// Lifted C++ translation unit: lifted/NMCamera/Orthogonal.cpp
#include "lift_compat.h"
extern "C" unsigned char __fastcall ext_00546520(void* self, void* edx_unused, void* arg);
extern "C" unsigned char __fastcall ext_00551960(void* self, void* edx_unused, void* arg);
extern "C" void ext_005480D0(uint32_t arg);
#include <string>

// [0x00551AF0] NMCamera::Orthogonal::vfunc_8 (88 bytes)
// @name NMCamera::Orthogonal::vfunc_8
// @class NMCamera::Orthogonal
// @summary Returns 1 if the flag at +0xA0 is set, otherwise 1 only when both sub-checks pass and two float pairs are equal.
// @field NMCamera::Orthogonal +0x30 float field_0x30
// @field NMCamera::Orthogonal +0x34 float field_0x34
// @field NMCamera::Orthogonal +0x3C void* field_0x3c
// @field NMCamera::Orthogonal +0x58 void* field_0x58
// @field NMCamera::Orthogonal +0x68 float field_0x68
// @field NMCamera::Orthogonal +0x6C float field_0x6c
// @field NMCamera::Orthogonal +0x74 void* field_0x74
// @field NMCamera::Orthogonal +0x90 void* field_0x90
// @field NMCamera::Orthogonal +0xA0 int32_t field_0xa0
extern "C" int __fastcall fn_00551AF0(void* self, void* edx_unused) {
    (void)edx_unused;
    auto* base = static_cast<unsigned char*>(self);

    if (*reinterpret_cast<int32_t*>(base + 0xA0) != 0) {
        return 1;
    }

    if (ext_00546520(base + 0x90, nullptr, base + 0x58) == 0) {
        return 0;
    }

    if (ext_00551960(base + 0x74, nullptr, base + 0x3C) == 0) {
        return 0;
    }

    const float f68 = *reinterpret_cast<float*>(base + 0x68);
    const float f30 = *reinterpret_cast<float*>(base + 0x30);
    if (!(f68 == f30)) {
        return 0;
    }

    const float f6c = *reinterpret_cast<float*>(base + 0x6C);
    const float f34 = *reinterpret_cast<float*>(base + 0x34);
    if (!(f6c == f34)) {
        return 0;
    }

    return 1;
}

// [0x00551A10] NMCamera::Orthogonal::vfunc_5 (8 bytes)
// @name NMCamera::Orthogonal::vfunc_5
// @class NMCamera::Orthogonal
// @summary Forwards its single stack argument unchanged to ext_005480D0 and returns (callee pops 4 bytes).
void fn_00551A10(uint32_t arg) {
    ext_005480D0(arg);
}

// [0x00551CB0]
namespace lift_00551CB0 {
extern double ext_005480D0(void* self);
extern int32_t ext_006A6DE0(double val);
extern double mem_00993828;

// @name NMCamera::Orthogonal::vfunc_19
// @class NMCamera::Orthogonal
// @summary Converts normalized/world 2D coordinates to integer screen/viewport coordinates.
// @field NMCamera::Orthogonal +0xB0 double field_0xb0
// @field NMCamera::Orthogonal +0xB8 double field_0xb8
void __thiscall fn_00551CB0(void* self, const float* in_coords, int32_t* out_coords) {
    uint8_t* base = static_cast<uint8_t*>(self);
    double d_b0 = *reinterpret_cast<const double*>(base + 0xB0);
    double d_b8 = *reinterpret_cast<const double*>(base + 0xB8);

    double scale = ext_005480D0(self) / d_b8;
    double half = mem_00993828;

    float f_b0 = static_cast<float>(d_b0);
    double x = static_cast<double>(f_b0) * half + static_cast<double>(in_coords[0]) / scale + half;
    out_coords[0] = ext_006A6DE0(x);

    float f_b8 = static_cast<float>(d_b8);
    double y = static_cast<double>(f_b8) * half - static_cast<double>(in_coords[1]) / scale + half;
    out_coords[1] = ext_006A6DE0(y);
}
} // namespace lift_00551CB0

// [0x00551A80]
namespace lift_00551A80 {
double __thiscall ext_005480D0(void* self);
extern double mem_00993828;
extern void (__stdcall *mem_00925410)(double left, double right, double bottom, double top, double zNear, double zFar);

// @name NMCamera::Orthogonal::vfunc_4
// @class NMCamera::Orthogonal
// @summary Sets up an orthographic projection matrix via glOrtho using camera aspect and near/far planes
// @field NMCamera::Orthogonal +0xC0 double field_0xc0
// @field NMCamera::Orthogonal +0xC8 double field_0xc8
// @field NMCamera::Orthogonal +0xD0 double field_0xd0
void __thiscall fn_00551A80(void* self) {
    float half_h = static_cast<float>(ext_005480D0(self) * mem_00993828);
    double top = static_cast<double>(half_h);
    double bottom = static_cast<double>(-half_h);
    double aspect = *reinterpret_cast<const double*>(reinterpret_cast<const uint8_t*>(self) + 0xC0);
    double zNear = *reinterpret_cast<const double*>(reinterpret_cast<const uint8_t*>(self) + 0xD0);
    double zFar = *reinterpret_cast<const double*>(reinterpret_cast<const uint8_t*>(self) + 0xC8);
    mem_00925410(bottom * aspect, top * aspect, bottom, top, zNear, zFar);
}
} // namespace lift_00551A80

// [0x00551C30] NMCamera::Orthogonal::vfunc_20 (125 bytes)
namespace lift_00551C30 {
// Known callee 0x005480D0: GetFloatViaIndirectOrInline (Returns float at this+0x1F4 of the object pointed to by this+0xA0 if non-null, else float at this+0x70.)
extern float ext_005480D0(void* self);
extern const double mem_0092A270; // .rdata double 1.0
extern const double mem_00993828; // .rdata double 0.5

// @name NMCamera::Orthogonal::vfunc_20
// @class NMCamera::Orthogonal
// @summary Computes a 4-float normalized viewport/projection vector from two int32 screen coordinates, a float scalar, and the camera's +0xB0/+0xB8/+0xC0 scale terms.
// @field NMCamera::Orthogonal +0xB0 double field_0xb0
// @field NMCamera::Orthogonal +0xB8 double field_0xb8
// @field NMCamera::Orthogonal +0xC0 double field_0xc0
void fn_00551C30(void* self, const int32_t* xy, const float* p, float* out) {
    // Read the scalar input first, as the original does, before any output write.
    const float pv = *p;

    // out[0] = f0 * (2x / B0 - 1) * 0.5 * C0, where f0 = GetFloatViaIndirectOrInline(self)
    const double f0 = static_cast<double>(ext_005480D0(self));
    const double x = static_cast<double>(xy[0]);
    const double b0 = lift_field<double>(self, 0xB0);
    const double c0 = lift_field<double>(self, 0xC0);
    const double v0 = f0 * (2.0 * x / b0 - mem_0092A270) * mem_00993828 * c0;

    // out[1] = f1 * (1 - 2y / B8) * 0.5, where f1 = GetFloatViaIndirectOrInline(self)
    const double f1 = static_cast<double>(ext_005480D0(self));
    const double y = static_cast<double>(xy[1]);
    const double b8 = lift_field<double>(self, 0xB8);
    const double v1 = f1 * (mem_0092A270 - 2.0 * y / b8) * mem_00993828;

    out[0] = static_cast<float>(v0);
    out[1] = static_cast<float>(v1);
    out[2] = pv;
    out[3] = 1.0f;
}
} // namespace lift_00551C30

// [0x00551B50] NMCamera::Orthogonal::vfunc_7 (182 bytes)
namespace lift_00551B50 {
// Known callee 0x00547AB0: Camera::vfunc_7 (If Camera+0xA0 is non-null, tail-dispatch vtable slot 9 on that object; otherwise return &Camera+0x08.)
extern void* __thiscall ext_00547AB0(void* self);

// MSVCP80 import slots (IAT entries read through by pointer).
extern uint32_t mem_00924FCC;
extern uint32_t mem_00924ECC;
extern uint32_t mem_00924FDC;
extern uint32_t mem_00924FF4;

// std::string operator+(const char*, const std::string&) — sret, cdecl.
using StringConcatCStrLhsFn = void* (__cdecl*)(void* out, const char* lhs, const void* rhs);
// std::string operator+(const std::string&, const char*) — sret, cdecl.
using StringConcatCStrRhsFn = void* (__cdecl*)(void* out, const void* lhs, const char* rhs);
// std::string::operator=(const std::string&) — thiscall.
using StringAssignFn = void* (__thiscall*)(void* self, const void* rhs);
// std::string::~string() — thiscall.
using StringDtorFn = void (__thiscall*)(void* self);
// Virtual slot 8 (+0x20) on the object: bool (thiscall).
using VirtualBoolFn = unsigned char (__thiscall*)(void* self);

// @name NMCamera::Orthogonal::vfunc_7
// @class NMCamera::Orthogonal
// @summary If the virtual predicate (slot 8) holds, returns Camera::vfunc_7(this); otherwise builds "<lit>" + Camera name + "<lit>" into this+0xF8 and returns &this->field_0xf8.
// @field NMCamera::Orthogonal +0x00 void* vtable_ptr
// @field NMCamera::Orthogonal +0xF8 std::string field_0xf8
extern void* __thiscall fn_00551B50(void* self) {
    auto* obj = static_cast<uint8_t*>(self);

    void** vtable = *reinterpret_cast<void***>(obj);
    auto predicate = reinterpret_cast<VirtualBoolFn>(vtable[8]);
    if (predicate(obj) != 0) {
        return ext_00547AB0(obj);
    }

    void* camera_name = ext_00547AB0(obj);

    alignas(16) uint8_t out1[0x20];
    alignas(16) uint8_t tmp2[0x20];

    auto concat_lhs = reinterpret_cast<StringConcatCStrLhsFn>(mem_00924FCC);
    concat_lhs(out1, reinterpret_cast<const char*>(0x957430), camera_name);

    auto concat_rhs = reinterpret_cast<StringConcatCStrRhsFn>(mem_00924ECC);
    concat_rhs(tmp2, out1, reinterpret_cast<const char*>(0x93BF0C));

    auto assign = reinterpret_cast<StringAssignFn>(mem_00924FDC);
    assign(obj + 0xF8, tmp2);

    auto dtor = reinterpret_cast<StringDtorFn>(mem_00924FF4);
    dtor(tmp2);
    dtor(out1);

    return obj + 0xF8;
}
} // namespace lift_00551B50

// [0x00551DE0] NMCamera::Orthogonal::vfunc_17 (323 bytes)
namespace lift_00551DE0 {
// Known callee 0x0047FFA0: Vector4Subtract_0047FFA0 (out[i] = a[i] - b[i], i in 0..3; returns out).
extern float* ext_0047FFA0(const float* self, float* out, const float* b);
// Known callee 0x00540D60: Vec3::normalize (normalizes in place if length is non-zero; returns this).
extern float* ext_00540D60(float* self);
// Known callee 0x00547820: Vec3::cross (out = self x rhs, w = 0; returns out).
extern float* ext_00547820(const float* self, float* out, const float* rhs);
// Known callee 0x006936A0: unnamed 21-byte helper, called as (self, v, s).
extern void ext_006936A0(void* self, const float* v, float s);
// Constant 0x00993838 (float 0.0f), compared against the vector length.
extern float mem_00993838;

// @name NMCamera::Orthogonal::vfunc_17
// @class NMCamera::Orthogonal
// @summary Rebuilds the direction vector at +0xD8 from +0x74/+0x78/+0x7C (w=0), crosses it with the vector at +0x90, normalizes that cross when its length is non-zero, applies scaled offsets via +0xD8 helper, stores (this+0x80 - dir) into +0xE8..+0xF4, and sets +0x2C to 1.
// @field NMCamera::Orthogonal +0x2C uint8_t field_0x2c
// @field NMCamera::Orthogonal +0x68 float field_0x68
// @field NMCamera::Orthogonal +0x6C float field_0x6c
// @field NMCamera::Orthogonal +0x74 float field_0x74
// @field NMCamera::Orthogonal +0x78 float field_0x78
// @field NMCamera::Orthogonal +0x7C float field_0x7c
// @field NMCamera::Orthogonal +0x90 float field_0x90
// @field NMCamera::Orthogonal +0x94 float field_0x94
// @field NMCamera::Orthogonal +0x98 float field_0x98
// @field NMCamera::Orthogonal +0x9C float field_0x9c
// @field NMCamera::Orthogonal +0xD8 float field_0xd8
// @field NMCamera::Orthogonal +0xDC float field_0xdc
// @field NMCamera::Orthogonal +0xE0 float field_0xe0
// @field NMCamera::Orthogonal +0xE4 float field_0xe4
// @field NMCamera::Orthogonal +0xE8 float field_0xe8
// @field NMCamera::Orthogonal +0xEC float field_0xec
// @field NMCamera::Orthogonal +0xF0 float field_0xf0
// @field NMCamera::Orthogonal +0xF4 float field_0xf4
void fn_00551DE0(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto F = [base](std::size_t off) -> float& {
        return *reinterpret_cast<float*>(base + off);
    };
    float* dir = reinterpret_cast<float*>(base + 0xD8);

    // dir = { +0x74, +0x78, +0x7C, 0.0f }
    dir[0] = F(0x74);
    dir[1] = F(0x78);
    dir[2] = F(0x7C);
    dir[3] = 0.0f;

    // Stack copies used as call arguments.
    float rhs[4] = { F(0x90), F(0x94), F(0x98), F(0x9C) };
    float dirCopy[4] = { dir[0], dir[1], dir[2], dir[3] };
    float cross[4];
    ext_00547820(dirCopy, cross, rhs);  // cross = dir x rhs

    float len2 = cross[0] * cross[0] + cross[1] * cross[1] + cross[2] * cross[2];
    float len = std::sqrt(len2);

    if (len != mem_00993838) {
        float* n = ext_00540D60(cross);
        for (int i = 0; i < 4; ++i) {
            cross[i] = n[i];
        }
        ext_006936A0(dir, cross, F(0x68));
    }

    ext_006936A0(dir, rhs, F(0x6C));

    float diff[4];
    const float* r = ext_0047FFA0(reinterpret_cast<float*>(base + 0x80), diff, dir);
    F(0xE8) = r[0];
    F(0xEC) = r[1];
    F(0xF0) = r[2];
    F(0xF4) = r[3];

    *reinterpret_cast<uint8_t*>(base + 0x2C) = 1;
}
} // namespace lift_00551DE0

// [0x00551DA0] NMCamera::Orthogonal::vfunc_2 (59 bytes)
namespace lift_00551DA0 {
// Known callee 0x00427550: ResetChildAndAssignName (Clears the owned objects of the object referenced by this+0x00, then assigns the given C string as the child name via assignOrCreateChild.)
// Known callee 0x00548A20: Camera::vfunc_2
// Callee 0x00640110: sub_00640110 (296B), thiscall(self, u32) -> u32
extern uint32_t ext_00640110(void* self, uint32_t arg);
extern void ext_00427550(void* self, const char* name);
extern void ext_00548A20(void* self, void* arg);
extern int mem_00A9FA6C;
extern int mem_00924FF0;

// @name NMCamera::Orthogonal::vfunc_2
// @class NMCamera::Orthogonal
// @summary Resolves a child object via sub_00640110 using the global at 0x00A9FA6C, sets its name from the global std::string at 0x00AF7470, then forwards to Camera::vfunc_2.
void fn_00551DA0(void* self, void* arg) {
    // eax = [0x00A9FA6C]
    const uint32_t global_value = static_cast<uint32_t>(mem_00A9FA6C);

    // sub_00640110 is thiscall: ecx = arg, stack = global_value; result is stored in the arg slot.
    uint32_t child = ext_00640110(arg, global_value);

    // c_str of the global std::string at 0x00AF7470, via the function pointer stored at 0x00924FF0.
    using c_str_fn = const char* (*)(void*);
    const auto c_str = reinterpret_cast<c_str_fn>(static_cast<uintptr_t>(mem_00924FF0));
    const char* name = c_str(reinterpret_cast<void*>(static_cast<uintptr_t>(0x00AF7470u)));

    // ResetChildAndAssignName(&child, name): ecx = &child (the local slot).
    ext_00427550(&child, name);

    // Camera::vfunc_2(this, arg): ecx = self (esi), stack = arg.
    ext_00548A20(self, arg);
}
} // namespace lift_00551DA0

// [0x00551F30]
namespace lift_00551F30 {
// @name NMCamera::Orthogonal::vfunc_10
// @class NMCamera::Orthogonal
// @summary Projects screen-space delta coordinates into world/camera space using the orthogonal scale and camera transform.
// @field NMCamera::Orthogonal +0xB8 double field_0xb8

double __thiscall ext_005480D0(void* self);
void __thiscall ext_00548150(void* self, float* mat4);
void __thiscall ext_004875A0(void* self, float* out_mat, float* in_mat);
void __thiscall ext_00551D20(float* mat4);
float* __thiscall ext_006943B0(float* self_vec4, float* out_vec4, float* mat4);

void __thiscall fn_00551F30(void* self, int32_t x, int32_t y, void* target, float* out_vec4) {
    double scale = ext_005480D0(self) / lift_field<double>(self, 0xB8);

    out_vec4[0] = static_cast<float>(static_cast<double>(x) * scale);
    out_vec4[1] = static_cast<float>(static_cast<double>(-y) * scale);
    out_vec4[2] = 0.0f;
    out_vec4[3] = 0.0f;

    float mat4[16] = {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 1.0f,
    };

    ext_00548150(self, mat4);

    float mat_5c[16];
    ext_004875A0(target, mat_5c, mat4);
    ext_00551D20(mat_5c);

    float temp_vec4[4];
    float* res = ext_006943B0(out_vec4, temp_vec4, mat_5c);
    out_vec4[0] = res[0];
    out_vec4[1] = res[1];
    out_vec4[2] = res[2];
    out_vec4[3] = res[3];
}
} // namespace lift_00551F30
