// Lifted C++ translation unit: lifted/MultiTrackView/DiamondMarker.cpp
#include "lift_compat.h"
// Virtual dispatch helper: calls vtable slot `Slot` of `obj`, passing obj as the implicit this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}
#include <cmath>
#include <cstdint>

#include <cstdint>
// @name MultiTrackView::DiamondMarker::vfunc_3
// @class MultiTrackView::DiamondMarker
// @summary Maps r = this->vfunc_4(arg) through a fixed table: r<0 -> 0, r in {0,1} -> 3, r==2 -> 1, r>=3 -> 0.
// @field MultiTrackView::DiamondMarker +0x00 void* vtable
int32_t fn_00440940(void* self, int32_t arg) {
    const int32_t r = lift_vcall<int32_t, 4>(self, arg);
    if (r < 0)
        return 0;
    if (r <= 1)
        return 3;
    if (r == 2)
        return 1;
    return 0;
}

// [0x004410E0]
namespace lift_004410E0 {
// @name MultiTrackView::DiamondMarker::vfunc_4
// @class MultiTrackView::DiamondMarker
// @summary Hit-tests a point against the diamond marker's bounds and left/right handles, returning a hit code (0, 1, 2, or 3).
// @field MultiTrackView::DiamondMarker +0x48 void* field_0x48
// @field MultiTrackView::DiamondMarker +0x60 RECT field_0x60
// @field MultiTrackView::DiamondMarker +0x89 uint8_t field_0x89
// @field MultiTrackView::DiamondMarker +0x8c uint8_t field_0x8c
// @field MultiTrackView::DiamondMarker +0x8d uint8_t field_0x8d

struct Point2D {
    int32_t x;
    int32_t y;
};

struct Rect2D {
    int32_t left;
    int32_t top;
    int32_t right;
    int32_t bottom;
};

using PtInRectFn = int32_t (__stdcall*)(const Rect2D* lprc, int32_t x, int32_t y);
extern PtInRectFn mem_00925628;
extern const double mem_0092BD70;

extern int32_t __thiscall ext_00441020(void* self);
extern int32_t __thiscall ext_00441040(void* self);

extern int32_t __thiscall fn_004410E0(void* self, const Point2D* pt) {
    const auto* rect = reinterpret_cast<const Rect2D*>(reinterpret_cast<const uint8_t*>(self) + 0x60);
    if (mem_00925628(rect, pt->x, pt->y) == 0) {
        return 3;
    }

    const uint8_t flag_8c = lift_field<uint8_t>(self, 0x8c);
    const uint8_t flag_8d = lift_field<uint8_t>(self, 0x8d);
    if (flag_8c == 0 && flag_8d == 0) {
        return 2;
    }

    const int32_t v1 = ext_00441020(self);
    const int32_t v2 = ext_00441040(self);

    const void* obj_48 = lift_field<void*>(self, 0x48);
    const double d_sub = lift_field<double>(obj_48, 0x110);
    const double d_add = lift_field<double>(obj_48, 0x118);
    const double d_mul = lift_field<double>(obj_48, 0x120);

    const int32_t x1 = static_cast<int32_t>(std::llrint((static_cast<double>(v1) - d_sub) * d_mul + d_add + mem_0092BD70));
    const int32_t x2 = static_cast<int32_t>(std::llrint((static_cast<double>(v2) - d_sub) * d_mul + d_add + mem_0092BD70));

    const uint8_t flag_89 = lift_field<uint8_t>(self, 0x89);
    if (flag_8c != 0 && v1 == v2 && flag_89 != 0) {
        return 0;
    }
    if (flag_8d != 0 && v1 == v2 && flag_89 == 0) {
        return 1;
    }

    if (flag_8c != 0) {
        if (pt->x >= x1 && pt->x <= x1 + 8) {
            return 0;
        }
    }
    if (flag_8d != 0) {
        if (pt->x <= x2 && pt->x >= x2 - 8) {
            return 1;
        }
    }

    return 2;
}
} // namespace lift_004410E0

// [0x004416E0]
namespace lift_004416E0 {
// @name MultiTrackView::DiamondMarker::vfunc_1
// @class MultiTrackView::DiamondMarker
// @summary Draws a diamond marker on the given DC and returns its bounding rectangle.
// @field MultiTrackView::DiamondMarker +0x48 void* field_0x48
// @field MultiTrackView::DiamondMarker +0x70 float* field_0x70
// @field MultiTrackView::DiamondMarker +0x74 float* field_0x74
// @field MultiTrackView::DiamondMarker +0x88 uint8_t field_0x88
// @field MultiTrackView::DiamondMarker +0x8b uint8_t field_0x8b


void __thiscall ext_0066A310(void* self);
void __thiscall ext_00669E40(void* self, float a0, float a1, float a2, float a3);
uint32_t __thiscall ext_0066A180(void* self);
void __thiscall ext_006A61AE(void* self, uint32_t color);
void __thiscall ext_006A6148(void* self, int style, int width, uint32_t color);
void* __thiscall ext_006A61A8(void* self, void* obj);
void* __thiscall ext_006A610C(void* self, void* obj);
void __thiscall ext_006A5FF2(void* self);
void __thiscall ext_00493D90(void* self);

extern float mem_009324A4;
extern float mem_00932478;
extern void* mem_009240D8;

struct DiamondRect {
    int32_t left;
    int32_t top;
    int32_t right;
    int32_t bottom;
};

struct DiamondPoint {
    int32_t x;
    int32_t y;
};

DiamondRect* __thiscall fn_004416E0(void* self, DiamondRect* outRect, void* pDC, const DiamondRect* inRect) {
    int32_t height = inRect->bottom;
    int32_t top = inRect->top;
    int32_t left = inRect->left;
    int32_t halfH = (height + (height % 2)) / 2;

    DiamondPoint pts[4] = {
        { left, top - 1 },
        { left + halfH, top + halfH - 1 },
        { left, top + 2 * halfH - 1 },
        { left - halfH, top + halfH - 1 },
    };

    int32_t diamondLeft = left - halfH;
    int32_t diamondRight = left + halfH;
    int32_t diamondBottom = top + height;

    void* field48 = lift_field<void*>(self, 0x48);
    int32_t minX = lift_field<int32_t>(field48, 0xfc);
    if (left < minX) {
        outRect->left = diamondLeft;
        outRect->top = top;
        outRect->right = diamondRight;
        outRect->bottom = diamondBottom;
        return outRect;
    }

    uint8_t vec1[16];
    uint8_t vec2[16];
    ext_0066A310(vec1);
    ext_0066A310(vec2);

    if (lift_field<uint8_t>(self, 0x88) != 0) {
        float* c = lift_field<float*>(self, 0x74);
        ext_00669E40(vec1, c[0], c[1], c[2], 1.0f);
        ext_00669E40(vec2, 0.0f, 0.0f, 0.0f, 1.0f);
    } else if (lift_field<uint8_t>(self, 0x8b) == 0) {
        ext_00669E40(vec1, mem_009324A4, mem_009324A4, mem_009324A4, 1.0f);
        ext_00669E40(vec2, mem_00932478, mem_00932478, mem_00932478, 1.0f);
    } else {
        float* c = lift_field<float*>(self, 0x70);
        ext_00669E40(vec1, c[0], c[1], c[2], 1.0f);
        ext_00669E40(vec2, 0.0f, 0.0f, 0.0f, 1.0f);
    }

    uint8_t brush[8];
    uint8_t pen[8];
    ext_006A61AE(brush, ext_0066A180(vec1));
    ext_006A6148(pen, 0, 1, ext_0066A180(vec2));

    void* oldBrush = ext_006A61A8(pDC, brush);
    void* oldPen = ext_006A610C(pDC, pen);

    typedef int (__stdcall *PolygonFn)(void* hdc, const DiamondPoint* apt, int cpt);
    ((PolygonFn)mem_009240D8)(lift_field<void*>(pDC, 0x4), pts, 4);

    ext_006A61A8(pDC, oldBrush);
    ext_006A610C(pDC, oldPen);

    outRect->left = diamondLeft;
    outRect->top = top;
    outRect->right = diamondRight;
    outRect->bottom = diamondBottom;

    ext_006A5FF2(pen);
    ext_006A5FF2(brush);
    ext_00493D90(vec2);
    ext_00493D90(vec1);

    return outRect;
}
} // namespace lift_004416E0

// [0x00441220] MultiTrackView::DiamondMarker::vfunc_2 (258 bytes)
namespace lift_00441220 {
// Callees and import slots referenced by the original asm.
extern int mem_00925640;        // IAT slot: USER32!SetRect (stdcall, 5 args)
extern int mem_009240D8;        // IAT slot: GDI32!Polygon (stdcall, 3 args)
extern void ext_0041A790();     // sub_0041A790 (thiscall, 2 stack args)
extern void ext_0041A830();     // sub_0041A830 (thiscall, 2 stack args)
extern void ext_0066A180();     // sub_0066A180 (thiscall)
extern void ext_006A61A8();     // thunk_MFC80_ord_5640 (thiscall, 1 stack arg)
extern void ext_006A610C();     // thunk_MFC80_ord_5641 (thiscall, 1 stack arg)
extern void ext_00493D90();     // metadata-only callee (address taken, never called)
extern void ext_00669E40();     // metadata-only callee (address taken, never called)
extern void ext_0066A310();     // metadata-only callee (address taken, never called)
extern void ext_006A5FF2();     // metadata-only callee (address taken, never called)
extern void ext_006A6148();     // metadata-only callee (address taken, never called)
extern void ext_006A61AE();     // metadata-only callee (address taken, never called)

// @name MultiTrackView::DiamondMarker::vfunc_2
// @class MultiTrackView::DiamondMarker
// @summary Builds a 3-point diamond/triangle marker from a source rect record, stores its bounding RECT, and draws it with Polygon.
// @field DiamondMarker +0x48 void* field_0x48
// @field DiamondMarker +0x70 float* field_0x70
// @field DiamondMarker +0x74 float* field_0x74
// @field DiamondMarker +0x88 uint8_t field_0x88
// @field DiamondMarker +0x89 uint8_t field_0x89
void* fn_00441220(void* self, RECT* rect, void* dc, void* src) {
    using ThisCall2 = uintptr_t (__thiscall*)(void* self, uintptr_t a, uintptr_t b);
    using ThisCall1 = void (__thiscall*)(void* self, uintptr_t a);
    using SetRectFn = int (__stdcall*)(RECT*, int, int, int, int);
    using PolygonFn = int (__stdcall*)(void* hdc, const POINT* pts, int count);

    // Metadata lists these callees, but the bytes never call them. Only take the
    // address so nothing runs; no call is added.
    (void)&ext_00493D90;
    (void)&ext_00669E40;
    (void)&ext_0066A310;
    (void)&ext_006A5FF2;
    (void)&ext_006A6148;
    (void)&ext_006A61AE;

    // Source record: x at +0x00, y at +0x04, extent at +0x0C.
    const int32_t x = lift_field<int32_t>(src, 0x00);
    const int32_t y = lift_field<int32_t>(src, 0x04);
    const int32_t w = lift_field<int32_t>(src, 0x0C);

    // Half extent, rounded half away from zero: (w + w % 2) / 2.
    const uint32_t wAdj = static_cast<uint32_t>(w) + static_cast<uint32_t>(w % 2);
    const int32_t half = static_cast<int32_t>(wAdj) / 2;

    const bool mirrored = lift_field<uint8_t>(self, 0x89) != 0;
    const int32_t tipX = mirrored ? x - half : x + half;

    POINT pts[3];
    pts[0] = POINT{x, y};
    pts[1] = POINT{tipX, y + half};
    pts[2] = POINT{x, y + w};

    // USER32!SetRect(rect, left, top, right, bottom) via IAT slot.
    auto setRect = reinterpret_cast<SetRectFn>(static_cast<uintptr_t>(mem_00925640));
    if (mirrored) {
        setRect(rect, tipX, y, x, y + w);
    } else {
        setRect(rect, x, y, tipX, y + w);
    }

    // Pick the float* field; dereference it (the value is used as a call receiver below).
    const bool useAlt = lift_field<uint8_t>(self, 0x88) != 0;
    const uint32_t v = *reinterpret_cast<const uint32_t*>(
        useAlt ? lift_field<void*>(self, 0x74) : lift_field<void*>(self, 0x70));

    void* obj48 = lift_field<void*>(self, 0x48);
    void* sub = static_cast<char*>(obj48) + 0x1B4;

    auto callA = reinterpret_cast<ThisCall2>(&ext_0066A180);
    uintptr_t t = callA(lift_field<void*>(obj48, 0xD8), 1, 0);

    auto callB = reinterpret_cast<ThisCall2>(&ext_0041A790);
    uintptr_t u = callB(sub, reinterpret_cast<uintptr_t>(dc), t);

    uintptr_t w2 = callA(reinterpret_cast<void*>(static_cast<uintptr_t>(v)), 0, 0);

    auto callC = reinterpret_cast<ThisCall2>(&ext_0041A830);
    uintptr_t z = callC(sub, reinterpret_cast<uintptr_t>(dc), w2);

    // GDI32!Polygon(hdc, pts, 3); hdc is the DC object's handle at +0x04.
    auto polygon = reinterpret_cast<PolygonFn>(static_cast<uintptr_t>(mem_009240D8));
    polygon(lift_field<void*>(dc, 0x04), pts, 3);

    auto thunk5640 = reinterpret_cast<ThisCall1>(&ext_006A61A8);
    thunk5640(dc, z);

    auto thunk5641 = reinterpret_cast<ThisCall1>(&ext_006A610C);
    thunk5641(dc, u);

    return rect;
}
} // namespace lift_00441220
