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
