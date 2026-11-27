// Lifted C++ translation unit: lifted/MultiTrackView/TriangleMarker.cpp
#include "lift_compat.h"

// [0x004413E0] MultiTrackView::TriangleMarker::vfunc_1 (586 bytes)
namespace lift_004413E0 {
// Known callee 0x0066A310: identityVec4Init (writes (0,0,0,1) into the vector at self).
extern void ext_0066A310(void* self);
// Known callee 0x00669E40: setFloat4FromStack (writes four floats into the vector at self).
extern void ext_00669E40(void* self, float a0, float a1, float a2, float a3);
// sub_0066A180: thiscall, takes the vector as this, returns int32 in eax.
extern int32_t ext_0066A180(void* self);
// sub_0041A790 / sub_0041A830: thiscall, two stack args (dc, value), return int32 in eax.
extern int32_t __thiscall ext_0041A790(void* self, void* dc, int32_t value);
extern int32_t __thiscall ext_0041A830(void* self, void* dc, int32_t value);
// Known callee 0x006A61A8: thunk_MFC80_ord_5640 (thiscall on the DC, one stack arg).
extern void __thiscall ext_006A61A8(void* dc, int32_t value);
// Known callee 0x006A610C: thunk_MFC80_ord_5641 (thiscall on the DC, one stack arg).
extern void __thiscall ext_006A610C(void* dc, int32_t value);
// AddCharacterDialog::vfunc_3 (1-byte no-op, used as the destructor of the local vectors).
extern void __thiscall ext_00493D90(void* self);

// Rodata float constants.
extern const float mem_009324A4;  // 0.5f
extern const float mem_00932478;  // 0.4f

// IAT slot: GDI32!Polygon (stdcall, 3 args).
struct Point2D {
    int32_t x;
    int32_t y;
};
using PolygonFn = int32_t(__stdcall*)(void* hdc, const Point2D* pts, int32_t count);
extern PolygonFn mem_009240D8;

// @name MultiTrackView::TriangleMarker::vfunc_1
// @class MultiTrackView::TriangleMarker
// @summary Computes an apex-up triangle from src (apex at (x0,y0), base at y0+H, half-width round(H/2)); if x0 < view->field_0xfc it returns that bounding box in out, otherwise it sets two colour vectors, draws the triangle with GDI Polygon on dc, and returns out with the same box.
// @field MultiTrackView::TriangleMarker +0x48 void* field_0x48
// @field MultiTrackView::TriangleMarker +0x70 void* field_0x70
// @field MultiTrackView::TriangleMarker +0x74 void* field_0x74
// @field MultiTrackView::TriangleMarker +0x88 uint8_t field_0x88
// @field MultiTrackView::TriangleMarker +0x8b uint8_t field_0x8b
int32_t* fn_004413E0(void* self, int32_t* out, void* dc, const int32_t* src) {
    const int32_t x0 = src[0];
    const int32_t y0 = src[1];
    const int32_t h = src[3];
    // (h + h % 2) / 2: exact signed halving that rounds odd values away from zero.
    const int32_t half = (h + h % 2) / 2;
    const int32_t left = x0 - half;
    const int32_t right = x0 + half;
    const int32_t bottom = y0 + h;

    // view = self->field_0x48; limit = view->field_0xfc.
    void* view = lift_field<void*>(self, 0x48);
    const int32_t limit = lift_field<int32_t>(view, 0xfc);
    if (x0 < limit) {
        out[0] = left;
        out[1] = y0;
        out[2] = right;
        out[3] = bottom;
        return out;
    }

    float A[4];
    float B[4];
    ext_0066A310(B);
    ext_0066A310(A);

    if (lift_field<uint8_t>(self, 0x88) != 0) {
        const float* q = lift_field<const float*>(lift_field<void*>(self, 0x74), 0);
        ext_00669E40(B, q[0], q[1], q[2], 1.0f);
        ext_00669E40(A, 0.0f, 0.0f, 0.0f, 1.0f);
    } else if (lift_field<uint8_t>(self, 0x8b) == 0) {
        ext_00669E40(B, mem_009324A4, mem_009324A4, mem_009324A4, 1.0f);
        ext_00669E40(A, mem_00932478, mem_00932478, mem_00932478, 1.0f);
    } else {
        const float* q = lift_field<const float*>(lift_field<void*>(self, 0x70), 0);
        ext_00669E40(B, q[0], q[1], q[2], 1.0f);
        ext_00669E40(A, 0.0f, 0.0f, 0.0f, 1.0f);
    }

    void* sub = static_cast<uint8_t*>(view) + 0x1b4;
    const int32_t r1 = ext_0066A180(A);
    const int32_t t1 = ext_0041A790(sub, dc, r1);
    const int32_t r2 = ext_0066A180(B);
    const int32_t t2 = ext_0041A830(sub, dc, r2);

    // dc->m_hDC lives at +4 of the CDC object.
    void* hdc = lift_field<void*>(dc, 4);
    const Point2D pts[3] = {
        {x0, y0},
        {right, bottom},
        {left, bottom},
    };
    mem_009240D8(hdc, pts, 3);

    ext_006A61A8(dc, t2);
    ext_006A610C(dc, t1);

    out[0] = left;
    out[1] = y0;
    out[2] = right;
    out[3] = bottom;

    ext_00493D90(A);
    ext_00493D90(B);
    return out;
}
} // namespace lift_004413E0
