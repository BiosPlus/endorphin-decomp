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
#include <cstddef>
#include <cstdint>

#include <cstdint>
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

// [0x00418350]
namespace lift_00418350 {
// @name ExportDialog::OnOK
// @class ExportDialog
// @summary Validates export dialog inputs, saves settings, and invokes CDialog::OnOK
// @field ExportDialog +0x74 void* predObj
// @field ExportDialog +0x78 void* settings
// @field ExportDialog +0x8C void* numericCtrl
// @field ExportDialog +0xAC object field_0xAC
// @field ExportDialog +0xE8 HWND field_0xE8
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
// @field ExportDialog +0x760 object field_0x760
// @field ExportDialog +0x780 HWND field_0x780
// @field ExportDialog +0x7B4 object field_0x7B4
// @field ExportDialog +0x7D4 HWND field_0x7D4
// @field ExportDialog +0x808 object field_0x808
// @field ExportDialog +0x85C object field_0x85C
// @field ExportDialog +0x8D0 HWND field_0x8D0


void fn_006A5E60(void);
void fn_006A5F4A(void);
void fn_006A5FB0(void);
void fn_006A6238(void);

#define ext_006A5E60 fn_006A5E60
#define ext_006A5F4A fn_006A5F4A
#define ext_006A5FB0 fn_006A5FB0
#define ext_006A6238 fn_006A6238

extern uint32_t mem_009242F0;
extern uint32_t mem_009242F4;
extern uint32_t mem_009242FC;
extern uint32_t mem_00924300;
extern uint32_t mem_00924494;
extern uint32_t mem_0092449C;
extern uint32_t mem_009245A8;
extern uint32_t mem_00924FDC;
extern uint32_t mem_00924FE4;
extern uint32_t mem_00924FF4;
extern uint32_t mem_009251E4;
extern uint32_t mem_009251F0;
extern uint32_t mem_00925694;
extern uint8_t mem_00928B5D;
extern uint8_t mem_0092CFC0;
extern uint8_t mem_00ACAF8C;

using ThisCallVoid = void(__thiscall*)(void*);
using ThisCallCStrCtor = void(__thiscall*)(void*, const char*);
using ThisCallLPCTSTR = const char*(__thiscall*)(void*);
using ThisCallCompare = int(__thiscall*)(void*, const char*);
using ThisCallGetText = void(__thiscall*)(void*, void*);
using ThisCallGetLBText = void(__thiscall*)(void*, int, void*);
using ThisCallPredCheck = uint8_t(__thiscall*)(void*);
using ThisCallStdStrAssign = void*(__thiscall*)(void*, void*);
using AtoiFn = int(__cdecl*)(const char*);
using AtofFn = double(__cdecl*)(const char*);
using SendMsgFn = int32_t(__stdcall*)(void*, uint32_t, uintptr_t, intptr_t);
using MsgBoxFn = int(__cdecl*)(const void*, uint32_t, uint32_t);

void __thiscall fn_00418350(void* self) {
    uint8_t str[4];
    reinterpret_cast<ThisCallVoid>(mem_009242FC)(str);

    auto get_window_text = reinterpret_cast<ThisCallGetText>(ext_006A5F4A);
    auto cstr_cstr = reinterpret_cast<ThisCallLPCTSTR>(mem_00924300);
    auto atoi_fn = reinterpret_cast<AtoiFn>(mem_009251E4);
    auto atof_fn = reinterpret_cast<AtofFn>(mem_009251F0);
    auto send_msg = reinterpret_cast<SendMsgFn>(mem_00925694);
    auto cstr_dtor = reinterpret_cast<ThisCallVoid>(mem_009242F4);

    uint8_t* settings = lift_field<uint8_t*>(self, 0x78);

    get_window_text(&lift_field<uint8_t>(self, 0x4C0), str);
    *reinterpret_cast<int32_t*>(settings + 0x00) = atoi_fn(cstr_cstr(str));

    get_window_text(&lift_field<uint8_t>(self, 0x514), str);
    *reinterpret_cast<int32_t*>(settings + 0x04) = atoi_fn(cstr_cstr(str));

    void* numeric_ctrl = lift_field<void*>(self, 0x8C);
    if (numeric_ctrl != nullptr) {
        get_window_text(numeric_ctrl, str);
        *reinterpret_cast<float*>(settings + 0x08) = static_cast<float>(atof_fn(cstr_cstr(str)));
    }

    get_window_text(&lift_field<uint8_t>(self, 0x218), str);
    *reinterpret_cast<float*>(settings + 0x10) = static_cast<float>(atof_fn(cstr_cstr(str)));

    *reinterpret_cast<int32_t*>(settings + 0x28) = send_msg(lift_field<void*>(self, 0x13C), 0x147, 0, 0);
    *reinterpret_cast<int32_t*>(settings + 0x2C) = send_msg(lift_field<void*>(self, 0xE8), 0x147, 0, 0);
    *reinterpret_cast<int32_t*>(settings + 0x70) = send_msg(lift_field<void*>(self, 0x190), 0x147, 0, 0);
    *reinterpret_cast<uint8_t*>(settings + 0x74) = send_msg(lift_field<void*>(self, 0x28C), 0xF0, 0, 0) != 0 ? 1 : 0;

    void* pred_obj = lift_field<void*>(self, 0x74);
    void** pred_vtable = *reinterpret_cast<void***>(pred_obj);
    if (reinterpret_cast<ThisCallPredCheck>(pred_vtable[0x60 / 4])(pred_obj) != 0) {
        uint8_t str2[4];
        reinterpret_cast<ThisCallCStrCtor>(mem_00924494)(str2, reinterpret_cast<const char*>(&mem_00ACAF8C));
        int32_t idx = send_msg(lift_field<void*>(self, 0x1E4), 0x147, 0, 0);
        reinterpret_cast<ThisCallGetLBText>(ext_006A6238)(&lift_field<uint8_t>(self, 0x1C4), idx, str2);
        const char* rhs = cstr_cstr(&mem_00ACAF8C);
        int cmp = reinterpret_cast<ThisCallCompare>(mem_0092449C)(str2, rhs);
        *reinterpret_cast<uint8_t*>(settings + 0x14) = (cmp == 0) ? 1 : 0;
        cstr_dtor(str2);
    }

    if (send_msg(lift_field<void*>(self, 0x8D0), 0xF0, 0, 0) != 0) {
        uint8_t s1[4];
        uint8_t s2[4];
        reinterpret_cast<ThisCallVoid>(mem_009242FC)(s1);
        reinterpret_cast<ThisCallVoid>(mem_009242FC)(s2);

        get_window_text(&lift_field<uint8_t>(self, 0x808), s1);
        get_window_text(&lift_field<uint8_t>(self, 0x85C), s2);

        if (reinterpret_cast<ThisCallCompare>(mem_0092449C)(s1, cstr_cstr(s2)) != 0) {
            reinterpret_cast<MsgBoxFn>(ext_006A5E60)(&mem_0092CFC0, 0x30, 0);
            cstr_dtor(s2);
            cstr_dtor(s1);
            cstr_dtor(str);
            return;
        }

        uint8_t std_str[28];
        const char* p = reinterpret_cast<ThisCallLPCTSTR>(mem_009245A8)(s1);
        reinterpret_cast<ThisCallCStrCtor>(mem_00924FE4)(std_str, p);
        uint8_t* sub = reinterpret_cast<uint8_t*>(pred_obj) + 4;
        void** sub_vt = *reinterpret_cast<void***>(sub);
        reinterpret_cast<ThisCallGetText>(sub_vt[0])(sub, std_str);
        reinterpret_cast<ThisCallVoid>(mem_00924FF4)(std_str);
        cstr_dtor(s2);
        cstr_dtor(s1);
    }

    *reinterpret_cast<uint8_t*>(settings + 0x4D) = send_msg(lift_field<void*>(self, 0x2E0), 0xF0, 0, 0) == 1 ? 1 : 0;
    *reinterpret_cast<uint8_t*>(settings + 0x6D) = send_msg(lift_field<void*>(self, 0x334), 0xF0, 0, 0) == 1 ? 1 : 0;

    if (send_msg(lift_field<void*>(self, 0x630), 0xF0, 0, 0) == 1) {
        reinterpret_cast<ThisCallStdStrAssign>(mem_00924FDC)(settings + 0xBC, &lift_field<uint8_t>(self, 0xAC));
        *reinterpret_cast<int32_t*>(settings + 0xB4) = send_msg(lift_field<void*>(self, 0x72C), 0x147, 0, 0);

        int32_t mode = send_msg(lift_field<void*>(self, 0x72C), 0x147, 0, 0);
        if (mode == 0) {
            *reinterpret_cast<int32_t*>(settings + 0xB0) = 2;
            *reinterpret_cast<int32_t*>(settings + 0xAC) = 12;
        } else if (mode == 1) {
            *reinterpret_cast<int32_t*>(settings + 0xB0) = 5;
            *reinterpret_cast<int32_t*>(settings + 0xAC) = 30;
        } else if (mode == 2) {
            *reinterpret_cast<int32_t*>(settings + 0xB0) = 10;
            *reinterpret_cast<int32_t*>(settings + 0xAC) = 50;
        }

        uint8_t c1[4];
        uint8_t c2[4];
        reinterpret_cast<ThisCallCStrCtor>(mem_009242F0)(c1, reinterpret_cast<const char*>(&mem_00928B5D));
        reinterpret_cast<ThisCallCStrCtor>(mem_009242F0)(c2, reinterpret_cast<const char*>(&mem_00928B5D));

        int32_t idx1 = send_msg(lift_field<void*>(self, 0x780), 0x147, 0, 0);
        reinterpret_cast<ThisCallGetLBText>(ext_006A6238)(&lift_field<uint8_t>(self, 0x760), idx1, c1);

        int32_t idx2 = send_msg(lift_field<void*>(self, 0x7D4), 0x147, 0, 0);
        reinterpret_cast<ThisCallGetLBText>(ext_006A6238)(&lift_field<uint8_t>(self, 0x7B4), idx2, c2);

        uint8_t std1[28];
        uint8_t std2[28];
        reinterpret_cast<ThisCallCStrCtor>(mem_00924FE4)(std1, cstr_cstr(c1));
        reinterpret_cast<ThisCallCStrCtor>(mem_00924FE4)(std2, cstr_cstr(c2));

        reinterpret_cast<ThisCallStdStrAssign>(mem_00924FDC)(settings + 0xD8, std1);
        reinterpret_cast<ThisCallStdStrAssign>(mem_00924FDC)(settings + 0xF4, std2);

        reinterpret_cast<ThisCallVoid>(mem_00924FF4)(std2);
        reinterpret_cast<ThisCallVoid>(mem_00924FF4)(std1);
        cstr_dtor(c2);
        cstr_dtor(c1);
    }

    reinterpret_cast<ThisCallVoid>(ext_006A5FB0)(self);
    cstr_dtor(str);
}
} // namespace lift_00418350
