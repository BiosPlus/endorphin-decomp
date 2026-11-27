// Lifted C++ translation unit: lifted/MultiTrackView/SimpleRangeMarker.cpp
#include "lift_compat.h"

// [0x00442860]
namespace lift_00442860 {
// @name MultiTrackView::SimpleRangeMarker::vfunc_1
// @class MultiTrackView::SimpleRangeMarker
// @summary Formats or builds a range marker representation into arg1 using local state, or delegates to vfunc_2 when the marker value matches.
// @field MultiTrackView::SimpleRangeMarker +0x00 void** vtable


    int32_t __cdecl ext_00441020();
    int32_t __thiscall ext_00441040(void* self);
    void __thiscall ext_00440A20(void* self);
    void __thiscall ext_00441AC0(void* self, void* out);
    void __thiscall ext_00440B00(void* self, void* buf);
    uint32_t __thiscall ext_00441C10(void* self, void* arg1, void* buf);
    void __thiscall ext_004425C0(void* self, void* arg1, void* buf);
    void __thiscall ext_004426E0(void* self, void* arg1, void* buf);
    void __thiscall ext_00441E30(void* self, void* arg1, void* buf);
    void __stdcall ext_00441A60(void* dst, const void* src);
    void __thiscall ext_0043B4D0(void* self);

void* __thiscall fn_00442860(void* self, void* arg1, void* arg2, void* arg3) {
    int32_t val1 = ext_00441020();
    int32_t val2 = ext_00441040(self);
    if (val1 == val2) {
        using VFunc2 = void(__thiscall*)(void*, void*, void*, void*);
        void** vtable = *reinterpret_cast<void***>(self);
        reinterpret_cast<VFunc2>(vtable[2])(self, arg1, arg2, arg3);
        return arg1;
    }

    struct LocalBuf {
        uint32_t header;
        uint8_t body[0x84];
    } local;

    ext_00440A20(local.body);
    ext_00441AC0(self, &local);
    ext_00440B00(self, &local);
    ext_00441C10(self, arg1, &local);
    ext_004425C0(self, arg1, &local);
    ext_004426E0(self, arg1, &local);
    ext_00441E30(self, arg1, &local);
    ext_00441A60(arg1, &local);
    ext_0043B4D0(&local);
    return arg1;
}
} // namespace lift_00442860
