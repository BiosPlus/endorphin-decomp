// Lifted C++ translation unit: lifted/MultiTrackView/RangeMarker.cpp
#include "lift_compat.h"

// [0x00441D40] MultiTrackView::RangeMarker::vfunc_1 (228 bytes)
namespace lift_00441D40 {
// Vtable dispatch helper (same pattern as DiamondMarker.cpp): calls slot `Slot` of `obj`, passing obj as this.
template <typename R, std::size_t Slot, typename... A>
inline R lift_vcall(void* obj, A... args) {
    void** vt = lift_field<void**>(obj, 0);
    using Fn = R (*)(void*, A...);
    return reinterpret_cast<Fn>(vt[Slot])(obj, args...);
}

// Known callee 0x00441020: GetStringLiteral_00440680 (Returns the address of the read-only string "$aj" in .rdata.)
extern intptr_t ext_00441020();
// Known callee 0x00441040: Unknown::addConstantAndTruncateToInt (Adds the double constant at mem_0092BD70 to the double at this+0x58 and returns the result converted to a 32-bit int.)
extern int32_t ext_00441040(void* self);
// Known callee 0x0066A180 (145 bytes): thiscall, returns int32 in eax.
extern int32_t ext_0066A180(void* self);
// Known callee 0x006A6172: thunk_MFC80_ord_2264 (IAT jump thunk forwarding to MFC80!ord_2264.)
extern void ext_006A6172(void* self, int32_t* range, int32_t value);
// Rodata double constant read by fadd qword ptr [0x92BD70].
extern const double mem_0092BD70;

// @name MultiTrackView::RangeMarker::vfunc_1
// @class MultiTrackView::RangeMarker
// @summary If two lookups agree, forward to vtable slot 2; otherwise clamp a computed range into out[0..3] via a callee on obj and return out.
// @field MultiTrackView::RangeMarker +0x00 void* vtable
// @field MultiTrackView::RangeMarker +0x48 void* field_0x48
// @field MultiTrackView::RangeMarker +0x70 void* field_0x70
int32_t* fn_00441D40(void* self, int32_t* out, void* obj, int32_t* range) {
    const int32_t lhs = static_cast<int32_t>(ext_00441020());
    const int32_t rhs = ext_00441040(self);
    if (lhs == rhs) {
        lift_vcall<void, 2>(self, out, obj, range);
        return out;
    }

    // Path B: v = round(((double)ext_00441040(self) - a->+0x110) * a->+0x120 + a->+0x118 + mem_0092BD70), a = this->+0x48
    const int32_t v0 = ext_00441040(self);
    void* a = lift_field<void*>(self, 0x48);
    double d = static_cast<double>(v0);
    d = d - lift_field<double>(a, 0x110);
    d = d * lift_field<double>(a, 0x120);
    d = d + lift_field<double>(a, 0x118);
    d = d + mem_0092BD70;
    const double r = std::nearbyint(d);
    const int32_t v = (r >= -2147483648.0 && r < 2147483648.0) ? static_cast<int32_t>(r) : INT32_MIN;

    // Clamp: min(v, range[2]) and max(range[0], a->+0xFC)
    const int32_t min_v = (v > range[2]) ? range[2] : v;
    const int32_t fxfc = lift_field<int32_t>(a, 0xFC);
    const int32_t max_x = (range[0] > fxfc) ? range[0] : fxfc;

    const int32_t f4 = range[1];
    int32_t arr[4] = {max_x, f4, min_v, f4 + range[3]};

    // this for the callee is the first dword of the object at this->+0x70
    void* sub_this = lift_field<void*>(lift_field<void*>(self, 0x70), 0);
    const int32_t sv = ext_0066A180(sub_this);
    ext_006A6172(obj, &arr[1], sv);

    out[0] = arr[0];
    out[1] = arr[1];
    out[2] = arr[2];
    out[3] = arr[3];
    return out;
}
} // namespace lift_00441D40
