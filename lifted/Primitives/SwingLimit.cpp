// Lifted C++ translation unit: lifted/Primitives/SwingLimit.cpp
#include "lift_compat.h"
#include <cmath>
#include <vector>

// [0x0053E650] Primitives::SwingLimit::vfunc_28 (3511 bytes)
namespace lift_0053E650 {
// Imports. Signatures are inferred from the call sites in the original code.
extern void* ext_005B11F0(void* renderer, float* out2); // OglRenderer::vfunc_118, returns object for ext_0053B470
extern void ext_0053B470(void* obj);                    // sub_0053B470
extern void ext_0067B7F0(float* v3);                    // in-place 3-vector normalize

// OpenGL 1.1 entry points (the original reaches them through the OPENGL32 IAT slots).
extern void glPushAttrib(GLbitfield mask);
extern void glPopAttrib(void);
extern void glBegin(GLenum mode);
extern void glEnd(void);
extern void glEdgeFlag(GLboolean flag);
extern void glNormal3fv(const GLfloat* v);
extern void glVertex3f(GLfloat x, GLfloat y, GLfloat z);
extern void glVertex3fv(const GLfloat* v);

namespace {

constexpr GLbitfield kGL_POLYGON_BIT = 0x00000008;
constexpr GLenum kGL_TRIANGLES = 0x0004;

constexpr double kTwoPi = 6.2831854820251465;          // [mem_00955090]
constexpr double kEpsD = 0.008726646192371845;         // [mem_00955D38]
constexpr float kEpsF = 0.008726646f;                  // [mem_00955D34]
constexpr float kPiF = 3.1415918f;                     // [mem_00955A40]
constexpr double kPiD = 3.141591787338257;             // [mem_00955A48]
constexpr double kTipOffset = 9.999999747378752e-05;   // [mem_009453D8]
constexpr float kTipX = -0.0001f;                      // [mem_00955D30]

struct Vec3 {
    float x;
    float y;
    float z;
};

// Clamp a swing half-range angle into [eps, pi].
float clampSwingAngle(float v) {
    if (!(static_cast<double>(v) >= kEpsD)) {
        return kEpsF;
    }
    if (static_cast<double>(v) > kPiD) {
        return kPiF;
    }
    return v;
}

Vec3 cross(const Vec3& a, const Vec3& b) {
    return Vec3{a.y * b.z - a.z * b.y,
                a.z * b.x - a.x * b.z,
                a.x * b.y - a.y * b.x};
}

void normalizeInPlace(Vec3& v) {
    float tmp[3] = {v.x, v.y, v.z};
    ext_0067B7F0(tmp);
    v = Vec3{tmp[0], tmp[1], tmp[2]};
}

// Emit one triangle-list vertex with its normal.
void emitVertex(const float* normal, const float* pos) {
    glNormal3fv(normal);
    glVertex3fv(pos);
}

} // namespace

// @name SwingLimit::vfunc_28
// @class Primitives::SwingLimit
// @summary Draws the swing-limit cone: builds a ring of segment points on a sphere of radius scale, then draws the cone surface and a slightly offset cap with OpenGL immediate mode.
// @field Primitives::SwingLimit +0x20 void* renderer (OglRenderer*, passed to vfunc_118)
// @field Primitives::SwingLimit +0x3c int segments
// @field Primitives::SwingLimit +0x40 float scale
void fn_0053E650(void* self) {
    void* renderer = lift_field<void*>(self, 0x20);
    const int segments = lift_field<int>(self, 0x3C);
    const float scale = lift_field<float>(self, 0x40);

    // Two swing half-angles written by the renderer call, clamped into [eps, pi].
    float angles[2] = {0.0f, 0.0f};
    void* obj = ext_005B11F0(renderer, angles);
    ext_0053B470(obj);
    const float swingA = clampSwingAngle(angles[0]);
    const float swingB = clampSwingAngle(angles[1]);

    // Half-angle sines and squared sines.
    const double halfA = static_cast<double>(swingA) * 0.5;
    const double halfB = static_cast<double>(swingB) * 0.5;
    const double sinA = std::sin(halfA);
    const double sinB = std::sin(halfB);
    const double sinA2 = sinA * sinA;
    const double sinB2 = sinB * sinB;

    const int n = segments > 0 ? segments : 0;
    std::vector<Vec3> pts(static_cast<size_t>(n), Vec3{0.0f, 0.0f, 0.0f});

    // Ring of points on the sphere of radius `scale`, one per segment.
    for (int i = 0; i < n; ++i) {
        const double theta = static_cast<double>(i) * kTwoPi / static_cast<double>(n);
        const double ys = std::sin(theta) * sinB;
        const double xs = std::cos(theta) * sinA;
        const double phi = std::atan2(ys, xs);
        const double sp = std::sin(phi);
        const double cp = std::cos(phi);
        const double ratio = (sinA2 * sinB2) / (sp * sp * sinA2 + cp * cp * sinB2);
        const double q = std::sqrt(ratio);
        const double r2 = std::sqrt(1.0 - ratio);
        const double s = static_cast<double>(scale);
        pts[static_cast<size_t>(i)] = Vec3{
            static_cast<float>((1.0 - 2.0 * ratio) * s),
            static_cast<float>(2.0 * s * r2 * cp * q),
            static_cast<float>(2.0 * s * r2 * sp * q),
        };
    }

    // Pass 1: cone surface, one triangle (apex, p[i], p[i+1]) per segment.
    glPushAttrib(kGL_POLYGON_BIT);
    glBegin(kGL_TRIANGLES);
    for (int i = 0; i < n; ++i) {
        const int j = (i + 1) % n;
        const Vec3& pi = pts[static_cast<size_t>(i)];
        const Vec3& pj = pts[static_cast<size_t>(j)];

        Vec3 nApex = cross(pj, pi);
        normalizeInPlace(nApex);
        Vec3 nI = pi;
        normalizeInPlace(nI);
        Vec3 nJ = pj;
        normalizeInPlace(nJ);
        // The original negates the normals after normalization.
        nApex = Vec3{-nApex.x, -nApex.y, -nApex.z};
        nI = Vec3{-nI.x, -nI.y, -nI.z};
        nJ = Vec3{-nJ.x, -nJ.y, -nJ.z};

        const float apex[3] = {0.0f, 0.0f, 0.0f};
        const float ni[3] = {nI.x, nI.y, nI.z};
        const float pI[3] = {pi.x, pi.y, pi.z};
        const float nj[3] = {nJ.x, nJ.y, nJ.z};
        const float pJ[3] = {pj.x, pj.y, pj.z};
        const float na[3] = {nApex.x, nApex.y, nApex.z};

        glEdgeFlag(0);
        emitVertex(na, apex);
        glEdgeFlag(1);
        emitVertex(ni, pI);
        glEdgeFlag(0);
        emitVertex(nj, pJ);
    }
    glEnd();

    // Pass 2: cap triangles (tip, p[j], p[i]) shifted by a tiny negative x offset.
    glBegin(kGL_TRIANGLES);
    for (int i = 0; i < n; ++i) {
        const int j = (i + 1) % n;
        const Vec3& pi = pts[static_cast<size_t>(i)];
        const Vec3& pj = pts[static_cast<size_t>(j)];
        const float offset = static_cast<float>(kTipOffset);

        Vec3 nApex = cross(pj, pi);
        normalizeInPlace(nApex);
        nApex = Vec3{-nApex.x, -nApex.y, -nApex.z};

        const float tip[3] = {kTipX, 0.0f, 0.0f};
        const float pJ[3] = {pj.x - offset, pj.y, pj.z};
        const float pI[3] = {pi.x - offset, pi.y, pi.z};
        const float na[3] = {nApex.x, nApex.y, nApex.z};

        glEdgeFlag(0);
        emitVertex(na, tip);
        glEdgeFlag(1);
        emitVertex(na, pJ);
        glEdgeFlag(0);
        emitVertex(na, pI);
    }
    glEnd();

    glEdgeFlag(1);
    glPopAttrib();
}
} // namespace lift_0053E650
