// Lifted C++ translation unit: lifted/MultiTrackView/TimeRulerMarkerTrack.cpp
#include "lift_compat.h"
#include <cmath>
#include <cstring>

// [0x00459F20] MultiTrackView::TimeRulerMarkerTrack::vfunc_1 (1610 bytes)
namespace lift_00459F20 {
// @name MultiTrackView::TimeRulerMarkerTrack::vfunc_1
// @class MultiTrackView::TimeRulerMarkerTrack
// @summary Lays out time-ruler tick markers: refreshes each child marker's bounds, then computes a nice tick step from the view's time scale and emits labelled tick elements into the marker container.
// @field MultiTrackView::TimeRulerMarkerTrack +0x18 void* field_0x18
// @field MultiTrackView::TimeRulerMarkerTrack +0x1c void* field_0x1c
// @field MultiTrackView::TimeRulerMarkerTrack +0x24 void* view
// @field MultiTrackView::TimeRulerMarkerTrack +0x28 int32_t field_0x28

// Callees (MSVC __thiscall / __stdcall ABIs).
extern void __thiscall ext_0043B450(void* self);
extern void __thiscall ext_00459920(void* self, void* a, void* b);
extern void __thiscall ext_006A6142(void* self, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, const char* text);
extern int32_t __thiscall ext_00441020(void* self);
extern void __thiscall ext_0043F2C0(void* self, void* arg);
extern void* __thiscall ext_0066A180(void* self, ...);
extern void* __thiscall ext_0041AEE0(void* self, void* arg);
extern void __thiscall ext_00412690(void* self, const void* elem);
extern int32_t __cdecl ext_006A6DE0(char* buf, int32_t radix, double st0);
extern void __thiscall ext_0043B4D0(void* self);

// Import IAT slots. The original performs `call dword ptr [slot]`; here the slot is read
// through its address and called with the matching ABI.
extern void* mem_00925134;  // MSVCR80!_invalid_parameter_noinfo
extern void* mem_0092566C;  // USER32!GetClientRect
extern void* mem_00924080;  // GDI32!GetTextExtentPoint32A
extern void* mem_0092520C;  // MSVCR80!ceil
extern void* mem_00925230;  // MSVCR80!_itoa

// .rdata: format string passed to ext_006A6142, and the double constant added before rounding.
extern const char mem_00675753[];
extern double mem_0092BD70;

namespace {

template <class T>
inline T& at(void* base, std::size_t off) {
    return *reinterpret_cast<T*>(static_cast<uint8_t*>(base) + off);
}

template <class FP>
inline FP iat(void* slot) {
    return *reinterpret_cast<FP*>(slot);
}

}  // namespace

void fn_00459F20(void* self, void* p1, void* p2) {
    // self = this (esi); p1 = [ebp+8] (ebx); p2 = [ebp+0xc] (edi).
    alignas(16) uint8_t frame[0x200];
    uint8_t* obj = frame + 8;  // scratch object at original esp+0xb8

    ext_0043B450(obj);

    {
        const uint32_t a0 = at<uint32_t>(p2, 0);
        const uint32_t a1 = at<uint32_t>(p2, 4);
        const uint32_t a2 = at<uint32_t>(p2, 8);
        const uint32_t t28 = at<uint32_t>(self, 0x28);
        ext_006A6142(p1, a0, a1, a2, t28, mem_00675753);
    }

    ext_00459920(self, p1, p2);

    void* const view = at<void*>(self, 0x24);
    void** const end = at<void**>(self, 0x1c);
    if (at<void**>(self, 0x18) > end) {
        iat<void(__cdecl*)()>(&mem_00925134)();
    }

    // Pass 1: for each marker child in [begin, end), refresh its bounds from the view's scale.
    int32_t tick = 0;  // last value from ext_00441020 (original local_34)
    for (void** it = at<void**>(self, 0x18); it != end; ++it) {
        if (it >= end) {
            iat<void(__cdecl*)()>(&mem_00925134)();
        }
        uint8_t* elem = static_cast<uint8_t*>(*it);
        const double vE8 = at<double>(view, 0xe8);
        const double vF0 = at<double>(view, 0xf0);
        const bool visible = (vE8 <= at<double>(elem, 0x58)) && (vF0 >= at<double>(elem, 0x50));
        if (!visible) {
            at<uint8_t>(elem, 0x8a) = 0;
            continue;
        }

        tick = ext_00441020(elem);
        double x = static_cast<double>(tick);
        x = x - at<double>(view, 0x110);
        x = x * at<double>(view, 0x120);
        x = x + at<double>(view, 0x118);
        x = x + mem_0092BD70;
        const int32_t rounded = static_cast<int32_t>(std::nearbyint(x));

        ext_0043F2C0(view, elem);
        at<int32_t>(obj, 4) = rounded;  // out-param slot [+0xbc]
        at<uint8_t>(elem, 0x8a) = 1;

        // elem->vfunc_1(&frame[0], p1, obj): returns a pointer to a 16-byte result.
        using VFn = void* (__thiscall*)(void* self, void* a, void* b, void* c);
        void* vtbl = at<void*>(elem, 0);
        VFn fn = reinterpret_cast<VFn>(at<void*>(vtbl, 4));
        auto* res = static_cast<int32_t*>(fn(elem, frame, p1, obj));
        at<int32_t>(elem, 0x60) = res[0];
        at<int32_t>(elem, 0x64) = res[1];
        at<int32_t>(elem, 0x68) = res[2];
        at<int32_t>(elem, 0x6c) = res[3];
    }

    // Pass 2: container bookkeeping.
    {
        void* r1 = ext_0066A180(at<void*>(view, 0xd0));
        void* vt1 = at<void*>(p1, 0);
        using Slot14 = void(__thiscall*)(void* self, void* a);
        Slot14 f14 = reinterpret_cast<Slot14>(at<void*>(vt1, 0x38));
        f14(p1, r1);
    }
    uint8_t* const viewLocal1b4 = static_cast<uint8_t*>(view) + 0x1b4;
    void* r2 = ext_0066A180(at<void*>(view, 0xd0), 1, 0);
    void* r3 = ext_0041AEE0(viewLocal1b4, r2);
    uint8_t* const cont = static_cast<uint8_t*>(r3) + 8;

    RECT rc{};
    iat<BOOL(__stdcall*)(HWND, RECT*)>(&mem_0092566C)(at<HWND>(view, 0x20), &rc);

    const int32_t a1 = at<int32_t>(p2, 4);
    const int32_t a2 = at<int32_t>(p2, 8);
    const int32_t t28 = at<int32_t>(self, 0x28);
    const int32_t top = a1 + 2;
    const int32_t bottom = a1 + t28 - 2;
    {
        const int32_t fc = at<int32_t>(view, 0xfc);
        const int32_t elemA[2] = {fc, bottom};
        ext_00412690(cont, elemA);
        const int32_t elemB[2] = {a2, bottom};
        ext_00412690(cont, elemB);
    }

    // Pass 3: measure the label text for the current scale value.
    char text[16];
    const double vF0 = at<double>(view, 0xf0);
    const int32_t val = ext_006A6DE0(text, 10, vF0);
    iat<char*(__cdecl*)(int32_t, char*, int32_t)>(&mem_00925230)(val, text, 10);
    const std::size_t textLen = std::strlen(text);
    SIZE sz{};
    iat<BOOL(__stdcall*)(HDC, const char*, int, SIZE*)>(&mem_00924080)(at<HDC>(p1, 8), text, static_cast<int>(textLen), &sz);

    // Pass 4: choose a nice tick step.
    const double vE8 = at<double>(view, 0xe8);
    const int32_t q1 = (3 * a2) / 100;
    const int32_t q2 = a2 / 10;
    const int32_t q3 = (4 * a2) / 1000;
    int32_t n;
    if (sz.cx < q1) {
        n = q1;
    } else if (sz.cx > q2) {
        n = q2;
    } else {
        n = sz.cx + q3;
    }
    const double A = static_cast<double>(a2) / (vF0 - vE8);
    const double B = static_cast<double>(n) / A;
    using CeilFn = double(__cdecl*)(double);
    const double P = std::pow(10.0, iat<CeilFn>(&mem_0092520C)(std::log10(B)));  // ceil(log10(B))
    const double half = P * 0.5;

    int32_t loc18;
    int32_t loc58;
    double loc20;
    const bool belowHalf = B < half;
    if (belowHalf) {
        loc18 = 5;
        loc58 = 100;
        loc20 = half;
    } else {
        loc18 = 10;
        loc58 = 5;
        loc20 = P;
    }
    double R;
    if (P / 10.0 >= 1.0) {
        R = P / 10.0;
    } else {
        R = 1.0;
        loc20 = (belowHalf ? 5.0 : 10.0) * P;
    }

    const double Q = vE8 / R;
    const int32_t v34 = tick;
    const int32_t diff = v34 - top;
    const int32_t hw = diff / 2;
    const int32_t q4 = diff / 4;
    const int32_t q5 = (4 * diff) / 10;
    const double cQR = iat<CeilFn>(&mem_0092520C)(Q) * R;
    const double D = iat<CeilFn>(&mem_0092520C)(vE8 / loc20) * loc20;
    const double Dy = (D - cQR) / R;
    const double kd = (static_cast<double>(loc18) - Dy) + mem_0092BD70;
    int32_t kbase = static_cast<int32_t>(std::nearbyint(kd));
    if (kbase == 0) {
        kbase = loc18;
    }

    // Loop constants: M = (f0+e8)/2, Z = (right-fc)/(f0-e8), Hh = 0.5*(fc+right).
    const double M = (vF0 + vE8) * 0.5;
    const int32_t fcv = at<int32_t>(view, 0xfc);
    const int32_t right = rc.right;
    const double Z = static_cast<double>(right - fcv) / (vF0 - vE8);
    const double Hh = 0.5 * static_cast<double>(fcv + right);

    int32_t kslot = kbase - 1;
    double cur = cQR;
    while (cur < vF0) {
        kslot = kslot + 1;
        const int32_t k = kslot;

        const double v2 = (cur - M) * Z + Hh + mem_0092BD70;
        const int32_t j = static_cast<int32_t>(std::nearbyint(v2));

        int32_t esi;
        if (k == loc58) {
            esi = v34 - q5;
        } else if (k != loc18) {
            esi = v34 - q4;
        } else {
            esi = v34 - hw;
            // Text label for this tick.
            const int32_t tv = ext_006A6DE0(text, 10, cur);
            iat<char*(__cdecl*)(int32_t, char*, int32_t)>(&mem_00925230)(tv, text, 10);
            const std::size_t len2 = std::strlen(text);
            SIZE sz2{};
            iat<BOOL(__stdcall*)(HDC, const char*, int, SIZE*)>(&mem_00924080)(at<HDC>(p1, 8), text, static_cast<int>(len2), &sz2);
            const int32_t x = j - sz2.cx / 2;
            using VText = void(__thiscall*)(void* self, int32_t x, int32_t y, const char* s, int32_t len);
            VText draw = reinterpret_cast<VText>(at<void*>(at<void*>(p1, 0), 0x64));
            draw(p1, x, top, text, static_cast<int32_t>(len2));
            kslot = 0;
        }

        const int32_t e2 = esi + 2;
        const int32_t elem1[2] = {j, v34};
        ext_00412690(cont, elem1);
        const int32_t elem2[2] = {j, e2};
        ext_00412690(cont, elem2);

        cur = cur + R;
    }

    ext_0043B4D0(obj);
}
} // namespace lift_00459F20
