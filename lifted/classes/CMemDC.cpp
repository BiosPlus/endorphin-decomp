// Lifted C++ translation unit: lifted/classes/CMemDC.cpp
#include "lift_compat.h"

// [0x0041B740] CMemDC::vfunc_27 (68 bytes)
namespace lift_0041B740 {
extern void* mem_00925600; // IAT slot for USER32!TabbedTextOutA

// @name CMemDC::vfunc_27
// @class CMemDC
// @summary Calls TabbedTextOutA on the DC and returns its packed SIZE result (cx low word, cy high word) via the caller's buffer.
// @field CMemDC +0x04 HDC field_0x04
SIZE* fn_0041B740(void* self, SIZE* out, int x, int y, LPCSTR text, int count,
                  int nTabPositions, const INT* lpnTabStopPositions, int nTabOrigin) {
    using TabbedTextOutAFn = LONG(__stdcall*)(HDC, int, int, LPCSTR, int, int, const INT*, int);
    HDC hdc = lift_field<HDC>(self, 0x04);
    auto tabbedTextOutA = reinterpret_cast<TabbedTextOutAFn>(mem_00925600);
    DWORD packed = static_cast<DWORD>(tabbedTextOutA(hdc, x, y, text, count,
                                                     nTabPositions, lpnTabStopPositions,
                                                     nTabOrigin));
    out->cx = static_cast<LONG>(static_cast<int16_t>(packed & 0xFFFFu));
    out->cy = static_cast<LONG>(static_cast<int16_t>(packed >> 16));
    return out;
}
} // namespace lift_0041B740
