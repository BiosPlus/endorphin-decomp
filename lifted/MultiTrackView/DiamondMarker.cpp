// Lifted C++ translation unit: lifted/MultiTrackView/DiamondMarker.cpp
#include "lift_compat.h"
// Virtual dispatch helper: calls vtable slot `Slot` of `obj`, passing obj as the implicit this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}

// [0x00440940] MultiTrackView::DiamondMarker::vfunc_3 (47 bytes)
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
