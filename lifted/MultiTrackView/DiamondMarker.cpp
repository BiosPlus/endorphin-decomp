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
