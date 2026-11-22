// Lifted C++ translation unit: lifted/classes/ExportDialog.cpp
#include "lift_compat.h"
#include <cstdlib>
#include <string>
// Known callee 0x006A5E60: thunk_MFC80_ord_1123 -> AfxMessageBox(LPCTSTR, UINT nType, UINT nIDHelp)
extern "C" void ext_006A5E60(const char* text, UINT type, UINT helpId);
// Known callee 0x006A5F4A: thunk_MFC80_ord_3761 -> read control text into CString (this in ecx, out ptr pushed)
extern "C" void ext_006A5F4A(void* self, std::string* out);
// Known callee 0x006A5FB0: thunk_MFC80_ord_4735 -> refresh dialog state (this in ecx)
extern "C" void ext_006A5FB0(void* self);
// Known callee 0x006A6238: thunk_MFC80_ord_2899 -> add value to collection member (this in ecx, DWORD pushed)
extern "C" void ext_006A6238(void* self, DWORD value);
// USER32!SendMessageA through IAT slot mem_00925694
extern "C" LRESULT ext_SendMessageA(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
// String literals referenced by the function (contents not resolved from .rdata)
extern "C" const char mem_00ACAF8C[];
extern "C" const char mem_00928B5D[];
extern "C" const char mem_0092CFC0[];
extern "C" const char mem_009245A8[];
namespace {
constexpr UINT kCB_GETCURSEL = 0x147;
constexpr UINT kBM_GETCHECK = 0xF0;
// Reads the text of an embedded/pointed-to control into a std::string.
std::string readControlText(void* ctrl) {
    std::string s;
    ext_006A5F4A(ctrl, &s);
    return s;
}
}  // namespace

// [0x00418350] ExportDialog::vfunc_86 (1235 bytes)
// @name ExportDialog::vfunc_86
// @class ExportDialog
// @summary Reads export-dialog control values into the settings block at +0x78, refreshes dependent state, and applies per-mode timing values.
// @field ExportDialog +0x074 void* predObj
// @field ExportDialog +0x078 void* settings
// @field ExportDialog +0x08C void* numericCtrl
// @field ExportDialog +0x13C HWND hwndCombo1
// @field ExportDialog +0x190 HWND hwndCombo3
// @field ExportDialog +0x1C4 void* field_0x1C4
// @field ExportDialog +0x1E4 HWND hwndCtrlK
// @field ExportDialog +0x218 void* floatCtrlA
// @field ExportDialog +0x28C HWND hwndCheck1
// @field ExportDialog +0x2E0 HWND hwndCheck2
// @field ExportDialog +0x334 HWND hwndCheck3
// @field ExportDialog +0x4C0 void* textCtrlB
// @field ExportDialog +0x514 void* textCtrlC
// @field ExportDialog +0x630 HWND hwndCheck4
// @field ExportDialog +0x72C HWND hwndMode
void fn_00418350(void* self) {
    auto at = [&](ptrdiff_t off) -> void* { return lift_field<void*>(self, off); };
    auto hwndAt = [&](ptrdiff_t off) -> HWND { return lift_field<HWND>(self, off); };
    auto embedded = [&](ptrdiff_t off) -> void* {
        return static_cast<uint8_t*>(self) + off;
    };

    void* cfg = at(0x78);

    // Integer and float values read from text controls
    lift_field<int32_t>(cfg, 0x00) = std::atoi(readControlText(embedded(0x4C0)).c_str());
    lift_field<int32_t>(cfg, 0x04) = std::atoi(readControlText(embedded(0x514)).c_str());

    if (void* numeric = at(0x8C)) {
        lift_field<float>(cfg, 0x08) =
            static_cast<float>(std::atof(readControlText(numeric).c_str()));
    }
    lift_field<float>(cfg, 0x10) =
        static_cast<float>(std::atof(readControlText(embedded(0x218)).c_str()));

    // Combo selections and check states via messages
    lift_field<int32_t>(cfg, 0x28) = static_cast<int32_t>(
        ext_SendMessageA(hwndAt(0x13C), kCB_GETCURSEL, 0, 0));
    lift_field<int32_t>(cfg, 0x2C) = static_cast<int32_t>(
        ext_SendMessageA(hwndAt(0xE8), kCB_GETCURSEL, 0, 0));
    lift_field<int32_t>(cfg, 0x70) = static_cast<int32_t>(
        ext_SendMessageA(hwndAt(0x190), kCB_GETCURSEL, 0, 0));
    lift_field<uint8_t>(cfg, 0x74) =
        ext_SendMessageA(hwndAt(0x28C), kBM_GETCHECK, 0, 0) != 0 ? 1 : 0;

    // Virtual predicate on the object at self+0x74 (vtable slot 0x60)
    void* predObj = at(0x74);
    {
        using Pred = bool (*)(void*);
        void** vtbl = *static_cast<void***>(predObj);
        if (reinterpret_cast<Pred>(vtbl[0x60 / sizeof(void*)])(predObj)) {
            std::string label = mem_00ACAF8C;
            (void)ext_SendMessageA(hwndAt(0x1E4), kCB_GETCURSEL, 0, 0);
            ext_006A6238(embedded(0x1C4), 0);
            lift_field<uint8_t>(cfg, 0x14) = (readControlText(embedded(0x1C4)) == label) ? 1 : 0;
        }
    }

    // Boolean option flags
    lift_field<uint8_t>(cfg, 0x4D) =
        ext_SendMessageA(hwndAt(0x2E0), kBM_GETCHECK, 0, 0) == 1 ? 1 : 0;
    lift_field<uint8_t>(cfg, 0x6D) =
        ext_SendMessageA(hwndAt(0x334), kBM_GETCHECK, 0, 0) == 1 ? 1 : 0;

    // Only continue into the mode block when hwndCheck4 reports checked (== 1)
    if (ext_SendMessageA(hwndAt(0x630), kBM_GETCHECK, 0, 0) != 1) {
        ext_006A5FB0(self);
        return;
    }

    // Mode-dependent timing values
    int32_t mode = static_cast<int32_t>(
        ext_SendMessageA(hwndAt(0x72C), kCB_GETCURSEL, 0, 0));
    int32_t timingA = 5;
    int32_t timingB = 0;
    switch (mode) {
        case 0:
            timingA = 2;
            timingB = 0x0C;
            break;
        case 1:
            timingA = 5;
            timingB = 0x1E;
            break;
        case 2:
            timingA = 0x0A;
            timingB = 0x32;
            break;
        default:
            break;
    }
    if (mode >= 0 && mode <= 2) {
        lift_field<int32_t>(cfg, 0xB0) = timingA;
        lift_field<int32_t>(cfg, 0xAC) = timingB;
    }

    ext_006A5FB0(self);
}
