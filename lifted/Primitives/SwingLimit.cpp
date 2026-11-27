// Lifted C++ translation unit: lifted/Primitives/SwingLimit.cpp
#include "lift_compat.h"
#include <cmath>
#include <vector>

// [0x0053E650] Primitives::SwingLimit::vfunc_28 (3511 bytes)
namespace lift_0053E650 {
// @name Primitives::SwingLimit::vfunc_28
// @class Primitives::SwingLimit
// @summary Clamps the two swing half-angles from the renderer and draws the swing-limit cone as GL triangles.
// @field SwingLimit +0x20 void* renderer
// @field SwingLimit +0x3c int segments
// @field SwingLimit +0x40 float scale

extern void ext_0053B470();
extern void ext_0053E570();
extern void ext_005B11F0();
extern void ext_0067B7F0();
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C();
// Known callee 0x006A6EA4: thunk_MSVCR80__CIatan2 (IAT jump thunk forwarding to MSVCR80!_CIatan2.)
extern void ext_006A6EA4();
// Known callee 0x006A6EAA: thunk_MSVCR80__CIcos (IAT jump thunk forwarding to MSVCR80!_CIcos.)
extern void ext_006A6EAA();
// Known callee 0x006A6EB0: thunk_MSVCR80__CIsin (IAT jump thunk forwarding to MSVCR80!_CIsin.)
extern void ext_006A6EB0();
// Known callee 0x006A7250: thunk_MSVCR80__CIsqrt (IAT jump thunk forwarding to MSVCR80!_CIsqrt.)
extern void ext_006A7250();
extern int mem_009324A4;
extern int mem_00955D38;
extern int mem_00955D34;
extern int mem_00955A40;
extern int mem_00955A48;
extern int mem_00993828;
extern int mem_00955090;
extern int mem_00925134;
extern int mem_0092546C;
extern int mem_00925490;
extern int mem_00925488;
extern int mem_009254DC;
extern int mem_0092549C;
extern int mem_0092548C;
extern int mem_00925498;
extern int mem_0092552C;
extern int mem_00993830;
extern int mem_00955D30;
extern int mem_009453D8;

namespace {

struct Vec3f {
    float x;
    float y;
    float z;
};

// Read an IAT slot (import table entry) holding a function pointer.
template <typename Fn>
inline Fn import_slot(const void* slot) {
    return reinterpret_cast<Fn>(*reinterpret_cast<void* const*>(slot));
}

} // namespace

void fn_0053E650(void* self) {
    // Stack-argument-free core of the routine; the original `ret 4` is the
    // calling-convention artifact of the MSVC thiscall shim.
    unsigned char* s = static_cast<unsigned char*>(self);

    // Renderer and swing angles. vfunc_118 writes the two half-angles to swing[0..1].
    float swing[2] = {0.0f, 0.0f};
    void* renderer = lift_field<void*>(s, 0x20);
    reinterpret_cast<void* (*)(void*, float*)>(&ext_005B11F0)(renderer, swing);
    reinterpret_cast<void (*)(void*)>(&ext_0053B470)(nullptr);

    // Clamp both angles to [eps, pi] (eps = mem_00955D34, pi = mem_00955A40).
    const float eps = lift_field<float>(&mem_00955D34, 0);
    const float pi = lift_field<float>(&mem_00955A40, 0);
    for (float& a : swing) {
        if (a < eps) a = eps;
        if (a > pi) a = pi;
    }

    const double half = lift_field<double>(&mem_00993828, 0);
    const double two_pi = lift_field<double>(&mem_00955090, 0);

    // Half-angle sines of the two swing axes.
    const float sin_a = static_cast<float>(std::sin(static_cast<float>(swing[0] * half)));
    const float sin_b = static_cast<float>(std::sin(static_cast<float>(swing[1] * half)));

    // Ring seed used by the helper ext_0053E570 (fills the segment points).
    float seed_a = sin_a * sin_a;
    float seed_b = sin_b * sin_b;
    Vec3f ring_dir = {sin_a, 0.0f, sin_b};
    float zero = 0.0f;
    const int segments = lift_field<int>(s, 0x3c);
    reinterpret_cast<void (*)(float*, int, Vec3f)>(&ext_0053E570)(&zero, segments, ring_dir);

    const float scale = lift_field<float>(s, 0x40);

    // Build the ring of points (one per segment) on the ellipse.
    std::vector<Vec3f> ring;
    ring.reserve(segments > 0 ? static_cast<size_t>(segments) : 0);
    for (int i = 0; i < segments; ++i) {
        const double theta = static_cast<double>(i) * two_pi / static_cast<double>(segments);
        const float c = static_cast<float>(std::cos(theta));
        const float si = static_cast<float>(std::sin(theta));
        Vec3f p;
        p.x = c * sin_a * scale;
        p.y = si * sin_b * scale;
        p.z = std::sqrt(std::max(0.0f, 1.0f - (seed_a * c * c + seed_b * si * si))) * scale;
        ring.push_back(p);
    }

    // Draw: GL_TRIANGLES (4) fan from the apex to each ring segment.
    auto gl_push_attrib = import_slot<void (*)(unsigned)>(&mem_0092546C);
    auto gl_begin = import_slot<void (*)(unsigned)>(&mem_00925490);
    auto gl_end = import_slot<void (*)()>(&mem_00925488);
    auto gl_pop_attrib = import_slot<void (*)()>(&mem_0092552C);
    auto gl_edge_flag = import_slot<void (*)(unsigned char)>(&mem_009254DC);
    auto gl_normal3fv = import_slot<void (*)(const float*)>(&mem_0092549C);
    auto gl_vertex3f = import_slot<void (*)(float, float, float)>(&mem_0092548C);
    auto gl_vertex3fv = import_slot<void (*)(const float*)>(&mem_00925498);
    auto invalid_parameter = import_slot<void (*)()>(&mem_00925134);
    auto normalize = reinterpret_cast<void (*)(Vec3f*)>(&ext_0067B7F0);

    gl_push_attrib(0x00000004u);
    gl_begin(4u);
    const Vec3f apex = {0.0f, 0.0f, 0.0f};
    for (size_t i = 0; i < ring.size(); ++i) {
        Vec3f n = ring[i];
        normalize(&n);
        gl_edge_flag(0);
        gl_normal3fv(&n.x);
        gl_vertex3f(apex.x, apex.y, apex.z);
        gl_vertex3fv(&ring[i].x);
        gl_vertex3fv(&ring[(i + 1) % ring.size()].x);
    }
    gl_end();
    gl_edge_flag(1);
    gl_pop_attrib();

    // Ring storage release (MSVC operator delete thunk); std::vector owns it here.
    [[maybe_unused]] auto release_ring = &ext_006A5C5C;
    if (ring.size() > ring.capacity()) invalid_parameter();
    (void)two_pi;
}
} // namespace lift_0053E650
