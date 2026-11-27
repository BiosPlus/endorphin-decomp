// Lifted C++ translation unit: lifted/MultiTrackView/MarkerTrack.cpp
#include "lift_compat.h"

// [0x0043BD40]
namespace lift_0043BD40 {
// @name MultiTrackView::MarkerTrack::vfunc_2
// @class MultiTrackView::MarkerTrack
// @summary Updates visibility, screen X coordinate, and bounding rect for markers in the track within the view's time range.
// @field MultiTrackView::MarkerTrack +0x14 void* field_0x14
// @field MultiTrackView::MarkerTrack +0x18 void** markers_begin
// @field MultiTrackView::MarkerTrack +0x1c void** markers_end
// @field MultiTrackView::MarkerTrack +0x24 void* view
// @field MultiTrackView::MarkerTrack +0x28 uint32_t height

void __thiscall ext_0043B450(void* self);
void __thiscall ext_0043B4D0(void* self);
void __thiscall ext_0043F2C0(void* self, void* arg);
int32_t __thiscall ext_00441020(void* self);
void __cdecl mem_00925134();
extern const double mem_0092BD70;

namespace {

struct Rect4 {
    uint32_t f0;
    uint32_t f1;
    uint32_t f2;
    uint32_t f3;
};

struct LocalContext {
    uint32_t x;
    uint32_t y;
    uint32_t w;
    uint32_t h;
    uint8_t pad[0x78];
};

} // namespace

void __thiscall fn_0043BD40(void* self, void* arg0, const uint32_t* arg1) {
    LocalContext ctx;
    ext_0043B450(&ctx);

    ctx.x = arg1[0];
    ctx.y = arg1[1];
    ctx.w = arg1[2];
    ctx.h = lift_field<uint32_t>(self, 0x28) - 2;

    void* vec = reinterpret_cast<uint8_t*>(self) + 0x14;
    uintptr_t it = lift_field<uintptr_t>(self, 0x18);
    uintptr_t end_it = lift_field<uintptr_t>(vec, 0x8);

    if (it > end_it) {
        mem_00925134();
    }
    if (lift_field<uintptr_t>(vec, 0x4) > end_it) {
        mem_00925134();
    }

    while (it != end_it) {
        if (it >= lift_field<uintptr_t>(vec, 0x8)) {
            mem_00925134();
        }

        void* marker = *reinterpret_cast<void**>(it);
        void* view = lift_field<void*>(self, 0x24);

        double view_start = lift_field<double>(view, 0xe8);
        double marker_end = lift_field<double>(marker, 0x58);
        double view_end = lift_field<double>(view, 0xf0);
        double marker_start = lift_field<double>(marker, 0x50);

        if (!(view_start > marker_end) && !(view_end < marker_start)) {
            int32_t val = ext_00441020(marker);
            view = lift_field<void*>(self, 0x24);
            double d = (static_cast<double>(val) - lift_field<double>(view, 0x110))
                     * lift_field<double>(view, 0x120)
                     + lift_field<double>(view, 0x118)
                     + mem_0092BD70;
            ctx.x = static_cast<uint32_t>(static_cast<int32_t>(d));

            ext_0043F2C0(view, marker);
            lift_field<uint8_t>(marker, 0x8a) = 1;

            Rect4 ret_buf;
            using VFunc1 = Rect4* (__thiscall*)(void*, Rect4*, void*, LocalContext*);
            void** vtable = *reinterpret_cast<void***>(marker);
            VFunc1 fn = reinterpret_cast<VFunc1>(vtable[1]);
            Rect4* res = fn(marker, &ret_buf, arg0, &ctx);

            lift_field<uint32_t>(marker, 0x60) = res->f0;
            lift_field<uint32_t>(marker, 0x64) = res->f1;
            lift_field<uint32_t>(marker, 0x68) = res->f2;
            lift_field<uint32_t>(marker, 0x6c) = res->f3;
        } else {
            lift_field<uint8_t>(marker, 0x8a) = 0;
        }

        if (it >= lift_field<uintptr_t>(vec, 0x8)) {
            mem_00925134();
        }
        it += sizeof(void*);
    }

    ext_0043B4D0(&ctx);
}
} // namespace lift_0043BD40

// [0x0043C160]
namespace lift_0043C160 {
// @name MultiTrackView::MarkerTrack::vfunc_1
// @class MultiTrackView::MarkerTrack
// @summary Draws the marker track background, borders, selection highlight, and label text.
// @field MultiTrackView::MarkerTrack +0x08 void* field_0x08
// @field MultiTrackView::MarkerTrack +0x10 void* field_0x10
// @field MultiTrackView::MarkerTrack +0x24 void* view
// @field MultiTrackView::MarkerTrack +0x28 uint32_t height
// @field MultiTrackView::MarkerTrack +0x2C uint32_t field_0x2C


void ext_00412690(void* self, uint32_t arg1);
uint8_t ext_00412D70(void* self, void* track);
void ext_00419EF0(void* self, void* dc, void* rect, uint32_t color, uint32_t a4, uint32_t a5);
void* ext_0041AEE0(void* self, uint32_t arg1);
uint8_t ext_0043B420(void* self);
void ext_00493D90(void* self);
uint32_t ext_0066A180(void* self, ...);
void ext_006A6142(void* self, int32_t x, int32_t y, int32_t cx, int32_t cy, uint32_t color);

extern uint32_t (*mem_0092431C)(void* self);
extern void* (*mem_00924300)(void* self, uint32_t arg1);

void fn_0043C160(void* self, void* dc, int32_t* rect) {
    uint8_t* s = static_cast<uint8_t*>(self);
    void* obj10 = lift_field<void*>(s, 0x10);
    uint32_t height = lift_field<uint32_t>(s, 0x28);

    if (!lift_field<uint8_t>(obj10, 0x37) || ext_0043B420(self)) {
        uint32_t color = 0x00796662;
        void** vtbl = lift_field<void**>(obj10, 0x00);
        using Vfn3 = uint8_t (*)(void*);
        if (reinterpret_cast<Vfn3>(vtbl[3])(obj10)) {
            color = 0x00675753;
        } else if (ext_00412D70(obj10, self) & 1) {
            color = 0x006D5C58;
        }
        int32_t x = rect[0];
        int32_t y = rect[1];
        int32_t cx = rect[2];
        ext_006A6142(dc, x, y, cx, static_cast<int32_t>(height), color);
        lift_field<uint32_t>(s, 0x2C) = color;
    }

    uint8_t* obj10_b = static_cast<uint8_t*>(lift_field<void*>(s, 0x10));
    if (lift_field<uint8_t>(obj10_b, 0x35) &&
        (ext_0043B420(self) || !lift_field<uint8_t>(lift_field<void*>(s, 0x10), 0x37))) {
        uint8_t* view = static_cast<uint8_t*>(lift_field<void*>(s, 0x24));
        int32_t r[4];
        r[0] = rect[0];
        r[1] = rect[1] - 1;
        r[2] = rect[0] + lift_field<int32_t>(view, 0xFC);
        r[3] = static_cast<int32_t>(height) + rect[1] + 1;
        ext_00419EF0(view + 0x1B4, dc, r, lift_field<uint32_t>(view, 0xC8), 0, 3);
    }

    void* obj10_c = lift_field<void*>(s, 0x10);
    void** vtbl_c = lift_field<void**>(obj10_c, 0x00);
    using Vfn2 = uint8_t (*)(void*);
    if (reinterpret_cast<Vfn2>(vtbl_c[2])(obj10_c) &&
        (ext_0043B420(self) || !lift_field<uint8_t>(lift_field<void*>(s, 0x10), 0x37))) {
        uint8_t* view = static_cast<uint8_t*>(lift_field<void*>(s, 0x24));
        int32_t r[4];
        r[0] = rect[0];
        r[1] = rect[1] - 1;
        r[2] = rect[0] + rect[2];
        r[3] = static_cast<int32_t>(height) + rect[1] + 1;
        ext_00419EF0(view + 0x1B4, dc, r, lift_field<uint32_t>(view, 0xCC), 0, 3);
    }

    float color_vec[4];
    {
        uint8_t* view = static_cast<uint8_t*>(lift_field<void*>(s, 0x24));
        float* src = lift_field<float*>(view, 0xD0);
        for (int i = 0; i < 4; ++i) color_vec[i] = src[i];
    }

    void* obj10_d = lift_field<void*>(s, 0x10);
    void** vtbl_d = lift_field<void**>(obj10_d, 0x00);
    if (lift_field<uint8_t>(obj10_d, 0x35) || reinterpret_cast<Vfn2>(vtbl_d[2])(obj10_d)) {
        uint8_t* view = static_cast<uint8_t*>(lift_field<void*>(s, 0x24));
        float* src = lift_field<float*>(view, 0xD4);
        for (int i = 0; i < 4; ++i) color_vec[i] = src[i];
    }

    if (ext_0043B420(self)) {
        uint8_t* view = static_cast<uint8_t*>(lift_field<void*>(s, 0x24));
        uint32_t c = ext_0066A180(color_vec, 1, 0);
        void* path = ext_0041AEE0(view + 0x1B4, c);
        void* pts = static_cast<uint8_t*>(path) + 0x08;

        int32_t x0 = rect[0] + 2;
        int32_t y0 = rect[1] + 2;
        int32_t x1 = rect[0] + 10;
        int32_t y1 = rect[1] + 10;

        int32_t pair1[2] = {x0, y0};
        int32_t pair2[2] = {y0, x1};
        // Emplace polygon points
        ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair1)));
        ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair2)));

        pair1[0] = x1; pair1[1] = y1;
        pair2[0] = x0; pair2[1] = y1;
        ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair2)));
        ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair1)));

        pair1[0] = x1; pair1[1] = y1;
        pair2[0] = y0; pair2[1] = y1;
        ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair2)));
        ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair1)));

        pair1[0] = x0; pair1[1] = y0;
        pair2[0] = x1; pair2[1] = y0;
        ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair2)));
        ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair1)));

        int32_t mid_y = (y1 + y0) / 2;
        pair1[0] = x1 - 1; pair1[1] = mid_y;
        pair2[0] = x0 + 2; pair2[1] = mid_y;
        ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair2)));
        ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair1)));

        if (lift_field<uint8_t>(lift_field<void*>(s, 0x10), 0x37)) {
            int32_t mid_x = (x1 + x0) / 2;
            pair1[0] = mid_x; pair1[1] = y0 + 1;
            pair2[0] = mid_x; pair2[1] = y1 - 2;
            ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair2)));
            ext_00412690(pts, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(pair1)));
        }
    }

    void* obj10_e = lift_field<void*>(s, 0x10);
    bool cond = false;
    if (!lift_field<uint8_t>(obj10_e, 0x37) || ext_0043B420(self)) {
        void** vtbl_e = lift_field<void**>(lift_field<void*>(s, 0x10), 0x00);
        using Vfn3 = uint8_t (*)(void*);
        if (!reinterpret_cast<Vfn3>(vtbl_e[3])(lift_field<void*>(s, 0x10))) {
            cond = true;
        }
    }

    uint8_t has_sel = ext_0043B420(self);
    if (cond) {
        uint32_t saved_bk = 0;
        void** dc_vtbl = lift_field<void**>(dc, 0x00);
        if (has_sel) {
            uint8_t* obj10_f = static_cast<uint8_t*>(lift_field<void*>(s, 0x10));
            void** vtbl_f = lift_field<void**>(obj10_f, 0x00);
            uint8_t* view = static_cast<uint8_t*>(lift_field<void*>(s, 0x24));
            void* arg = (lift_field<uint8_t>(obj10_f, 0x35) || reinterpret_cast<Vfn2>(vtbl_f[2])(obj10_f))
                            ? (view + 0x218)
                            : (view + 0x220);
            using SetBkFn = uint32_t (*)(void*, void*);
            saved_bk = reinterpret_cast<SetBkFn>(dc_vtbl[0x30 / 4])(dc, arg);
        }

        uint8_t* obj10_g = static_cast<uint8_t*>(lift_field<void*>(s, 0x10));
        void** vtbl_g = lift_field<void**>(obj10_g, 0x00);
        uint8_t* view = static_cast<uint8_t*>(lift_field<void*>(s, 0x24));
        void* col_ptr = (lift_field<uint8_t>(obj10_g, 0x35) || reinterpret_cast<Vfn2>(vtbl_g[2])(obj10_g))
                            ? lift_field<void*>(view, 0xD4)
                            : lift_field<void*>(view, 0xD0);
        uint32_t text_col = ext_0066A180(col_ptr);
        using SetTextColorFn = void (*)(void*, uint32_t);
        reinterpret_cast<SetTextColorFn>(dc_vtbl[0x38 / 4])(dc, text_col);

        int32_t tx = rect[0] + 15;
        int32_t ty = rect[1];
        if (!ext_0043B420(self)) {
            tx += 9;
        }

        void* str_obj = ext_0043B420(self)
                            ? static_cast<uint8_t*>(lift_field<void*>(s, 0x10)) + 0x1C
                            : s + 0x08;
        uint32_t len = mem_0092431C(str_obj);
        void* txt = mem_00924300(str_obj, len);
        using TextOutFn = void (*)(void*, int32_t, int32_t, void*);
        reinterpret_cast<TextOutFn>(dc_vtbl[0x64 / 4])(dc, tx, ty, txt);

        if (has_sel) {
            using SetBkFn = uint32_t (*)(void*, uint32_t);
            reinterpret_cast<SetBkFn>(dc_vtbl[0x30 / 4])(dc, saved_bk);
        }
    }

    ext_00493D90(color_vec);
}
} // namespace lift_0043C160
