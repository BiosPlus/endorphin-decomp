// Lifted C++ translation unit: lifted/classes/CMemDC.cpp
#include "lift_compat.h"

// [0x0041B7F0] CMemDC::vfunc_30 (60 bytes)
namespace lift_0041B7F0 {
// Imported via IAT slot 0x009255F8 (USER32!GrayStringA).
extern BOOL ext_GrayStringA(HDC hDC, HBRUSH hBrush, void* lpOutputFunc, LPARAM lpData,
                                int nCount, int X, int Y, int nWidth, int nHeight);

// @name CMemDC::vfunc_30
// @class CMemDC
// @summary Calls GrayStringA on this->hdc, using brush taken from the first argument's +0x04 (or NULL if arg is NULL) and forwarding the remaining seven arguments.
// @field CMemDC +0x04 HDC hdc
void* fn_0041B7F0(void* self, void* p1, void* lpOutputFunc, LPARAM lpData,
                  int nCount, int X, int Y, int nWidth, int nHeight) {
    // p1 is a pointer to an object of unknown class; its +0x04 member is used as the brush.
    HBRUSH hBrush = p1 ? lift_field<HBRUSH>(p1, 0x4) : nullptr;
    HDC hDC = lift_field<HDC>(self, 0x4);
    return reinterpret_cast<void*>(static_cast<intptr_t>(
        ext_GrayStringA(hDC, hBrush, lpOutputFunc, lpData, nCount, X, Y, nWidth, nHeight)));
}
} // namespace lift_0041B7F0
