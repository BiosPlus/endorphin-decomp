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

// [0x0041B7F0]
namespace lift_0041B7F0 {
// @name CMemDC::vfunc_30
// @class CMemDC
// @summary Calls GrayStringA on this->hdc, using the brush handle at arg1+0x4 (or NULL if arg1 is NULL) and forwarding the remaining stack args.
// @field CMemDC +0x04 HDC hdc

struct CMemDC;

// IAT slot for USER32!GrayStringA (mem_009255F8) and the adjacent IAT slot (mem_00925600).
extern uint32_t mem_009255F8;
extern uint32_t mem_00925600;

// GrayStringA(HDC, HBRUSH, GRAYSTRINGPROC, LPARAM, int, int, int, int, int)
// GRAYSTRINGPROC is passed through as an opaque pointer (arg2 from the stack).
using GrayStringAFn = BOOL (*)(HDC, HBRUSH, void*, LPARAM, int, int, int, int, int);

BOOL CMemDC_vfunc_30(CMemDC* self, void* arg1, void* arg2, LPARAM arg3,
                     int arg4, int arg5, int arg6, int arg7, int arg8)
{
    HBRUSH hBrush = nullptr;
    if (arg1 != nullptr) {
        hBrush = *reinterpret_cast<HBRUSH*>(reinterpret_cast<uintptr_t>(arg1) + 0x4);
    }
    HDC hDC = *reinterpret_cast<HDC*>(reinterpret_cast<uintptr_t>(self) + 0x4);
    auto fn = *reinterpret_cast<GrayStringAFn*>(&mem_009255F8);
    (void)mem_00925600;
    return fn(hDC, hBrush, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
} // namespace lift_0041B7F0
