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

// [0x00418DE0] ExportDialog::vfunc_84 (2333 bytes)
namespace lift_00418DE0 {
// Imports and callees (signatures inferred from call sites in the disassembly).
extern void ext_004174F0(void* self);
extern void ext_00417420(void* self);
extern void ext_004180E0(void* self);
extern void ext_00418130(void* self);
extern void ext_00418BE0(void* self, int a, int b);
extern void ext_006A5FC8(void* self);                 // thunk_MFC80_ord_4580 (base dialog init)
extern void* ext_006A5EDE();                          // thunk_MFC80_ord_1084 (AfxGetApp)
extern void ext_006A5FDA(void* self, int flag);       // thunk_MFC80_ord_2164 (set flag on sub-object)
extern void ext_006A5F50(void* self, const char* s);  // thunk_MFC80_ord_6067 (SetWindowText-style)
extern void ext_006A5E72(void* self, int v);          // thunk_MFC80_ord_6090 (sub-object update)
extern void ext_006A5C5C(void* p);                    // thunk_MFC80_ord_764 (operator delete)
extern void* ext_006A6DE0(void* out, float value);
extern std::string* ext_00404F00(std::string* out, const void* value);
extern std::string* ext_00664840(std::string* out, float value);
extern bool ext_006629B0(const void* p);
// MFC80!ord_876: CString -> LPCTSTR (reached through an indirect import slot).
extern const char* ext_MFC80_ord_876(void* cstr);

extern HICON LoadIconA(HINSTANCE inst, LPCSTR name);
extern LRESULT SendMessageA(HWND hwnd, UINT msg, WPARAM w, LPARAM l);

// Static CString resources and string literals referenced by the dialog.
extern int mem_00ACAB8C;
extern int mem_00ACACC4;
extern int mem_00ACAD8C;
extern int mem_00ACAF6C;
extern int mem_00ACAF70;
extern int mem_00ACAF74;
extern int mem_00ACAF78;
extern int mem_00ACAF7C;
extern int mem_00ACAF8C;
extern int mem_00ACAF90;
extern const char mem_0092D00C[];   // "Character+Offset"
extern const char mem_0092D000[];   // "Character"
extern const char mem_00928B5D[];   // default text assigned to settings+0x8C
extern int mem_00A9F414;            // .data pointer value used as combo item
extern int mem_00A9ED98;            // .data pointer value (-> "Character")

namespace lift_00418DE0 {

// Win32 message ids used by this routine.
constexpr UINT kWmSetIcon = 0x0080;
constexpr UINT kBmSetCheck = 0x00F1;
constexpr UINT kCbAddString = 0x0143;
constexpr UINT kCbSetCurSel = 0x014E;
constexpr UINT kMsgUnknownCF = 0x00CF;  // message id not identified
constexpr UINT kIconBig = 1;
constexpr UINT kIconSmall = 0;

// Virtual slot lookup. Slots are 4-byte (32-bit build), so index = byte offset / 4.
static inline void* vslot(void* obj, std::size_t byteOffset) {
    void** vt = lift_field<void**>(obj, 0);
    return vt[byteOffset / 4];
}

static inline bool pred_bool(void* obj, std::size_t byteOffset) {
    return reinterpret_cast<bool (*)(void*)>(vslot(obj, byteOffset))(obj);
}

static inline uint8_t pred_u8(void* obj, std::size_t byteOffset) {
    return reinterpret_cast<uint8_t (*)(void*)>(vslot(obj, byteOffset))(obj);
}

static inline void* at(void* base, std::ptrdiff_t off) {
    return static_cast<uint8_t*>(base) + off;
}

static inline const char* as_str(int addr) {
    return reinterpret_cast<const char*>(static_cast<uintptr_t>(static_cast<uint32_t>(addr)));
}

static inline void add_string(HWND combo, const char* s) {
    SendMessageA(combo, kCbAddString, 0, reinterpret_cast<LPARAM>(s));
}

static inline void select_index(HWND combo, int index) {
    SendMessageA(combo, kCbSetCurSel, static_cast<WPARAM>(index), 0);
}

static inline void set_check(HWND ctrl, int state) {
    SendMessageA(ctrl, kBmSetCheck, static_cast<WPARAM>(state), 0);
}

// Float sequence produced by the predicate helper: {reserved, first, last}.
struct FloatSeq {
    void* reserved;
    float* first;
    float* last;
};

}  // namespace lift_00418DE0

// @name ExportDialog::vfunc_84
// @class ExportDialog
// @summary Initializes the export dialog: sets window icons, fills combo boxes and check/text controls from the settings object and predicate, and refreshes the dependent sub-panels.
// @field ExportDialog +0x20 HWND field_0x20
// @field ExportDialog +0x74 void* predObj
// @field ExportDialog +0x78 void* settings
// @field ExportDialog +0x7C uint8_t field_0x7C
// @field ExportDialog +0x8C void* numericCtrl
// @field ExportDialog +0xC8 object field_0xC8
// @field ExportDialog +0xE8 HWND field_0xE8
// @field ExportDialog +0x11C object field_0x11C
// @field ExportDialog +0x13C HWND hwndCombo1
// @field ExportDialog +0x170 object field_0x170
// @field ExportDialog +0x190 HWND hwndCombo3
// @field ExportDialog +0x1C4 void* field_0x1C4
// @field ExportDialog +0x1E4 HWND hwndCtrlK
// @field ExportDialog +0x218 void* floatCtrlA
// @field ExportDialog +0x26C object field_0x26C
// @field ExportDialog +0x28C HWND hwndCheck1
// @field ExportDialog +0x2C0 object field_0x2C0
// @field ExportDialog +0x2E0 HWND hwndCheck2
// @field ExportDialog +0x314 object field_0x314
// @field ExportDialog +0x334 HWND hwndCheck3
// @field ExportDialog +0x3C4 object field_0x3C4
// @field ExportDialog +0x3E4 HWND field_0x3E4
// @field ExportDialog +0x418 object field_0x418
// @field ExportDialog +0x438 HWND field_0x438
// @field ExportDialog +0x46C object field_0x46C
// @field ExportDialog +0x4C0 void* textCtrlB
// @field ExportDialog +0x514 void* textCtrlC
// @field ExportDialog +0x568 object field_0x568
// @field ExportDialog +0x5BC object field_0x5BC
// @field ExportDialog +0x5DC HWND field_0x5DC
// @field ExportDialog +0x808 object field_0x808
// @field ExportDialog +0x85C object field_0x85C
// @field ExportDialog +0x8B0 object field_0x8B0
int fn_00418DE0(void* self) {
    using namespace lift_00418DE0;

    ext_006A5FC8(self);
    ext_004180E0(self);

    // Window icons: big (0xFC) and small (0xFD) from the application's instance.
    void* app = ext_006A5EDE();
    HICON iconBig = LoadIconA(lift_field<HINSTANCE>(app, 0x08),
                              reinterpret_cast<LPCSTR>(static_cast<uintptr_t>(0xFC)));
    app = ext_006A5EDE();
    HICON iconSmall = LoadIconA(lift_field<HINSTANCE>(app, 0x08),
                                reinterpret_cast<LPCSTR>(static_cast<uintptr_t>(0xFD)));
    HWND mainWnd = lift_field<HWND>(self, 0x20);
    SendMessageA(mainWnd, kWmSetIcon, kIconBig, reinterpret_cast<LPARAM>(iconBig));
    SendMessageA(mainWnd, kWmSetIcon, kIconSmall, reinterpret_cast<LPARAM>(iconSmall));

    void* settings = lift_field<void*>(self, 0x78);
    void* pred = lift_field<void*>(self, 0x74);

    // Combo 0xE8: five resource strings, then select settings+0x2C.
    HWND comboE8 = lift_field<HWND>(self, 0xE8);
    add_string(comboE8, ext_MFC80_ord_876(&mem_00ACAB8C));
    add_string(comboE8, ext_MFC80_ord_876(&mem_00ACACC4));
    add_string(comboE8, ext_MFC80_ord_876(&mem_00ACAD8C));
    add_string(comboE8, ext_MFC80_ord_876(&mem_00ACAF6C));
    add_string(comboE8, ext_MFC80_ord_876(&mem_00ACAF70));
    select_index(comboE8, lift_field<int>(settings, 0x2C));

    // Combo 0x13C: three resource strings, then select settings+0x28.
    HWND combo1 = lift_field<HWND>(self, 0x13C);
    add_string(combo1, ext_MFC80_ord_876(&mem_00ACAF74));
    add_string(combo1, ext_MFC80_ord_876(&mem_00ACAF78));
    add_string(combo1, ext_MFC80_ord_876(&mem_00ACAF7C));
    select_index(combo1, lift_field<int>(settings, 0x28));

    // Combo 0x190: a .data string, then either two entries or one, then select settings+0x70.
    HWND combo3 = lift_field<HWND>(self, 0x190);
    add_string(combo3, as_str(mem_00A9F414));
    if (pred_bool(pred, 0x8C)) {
        add_string(combo3, mem_0092D00C);
        add_string(combo3, mem_0092D000);
    } else {
        add_string(combo3, as_str(mem_00A9ED98));
    }
    select_index(combo3, lift_field<int>(settings, 0x70));

    ext_006A5FDA(at(self, 0x26C), pred_u8(pred, 0x98));
    set_check(lift_field<HWND>(self, 0x28C), lift_field<uint8_t>(settings, 0x74));

    // Text controls from settings (string at [0], [4]) and float at +0x10.
    {
        std::string tmp;
        std::string* s = ext_00404F00(&tmp, lift_field<const void*>(settings, 0x00));
        ext_006A5F50(lift_field<void*>(self, 0x4C0), s->c_str());
    }
    {
        std::string tmp;
        std::string* s = ext_00404F00(&tmp, lift_field<const void*>(settings, 0x04));
        ext_006A5F50(lift_field<void*>(self, 0x514), s->c_str());
    }
    {
        std::string tmp;
        std::string* s = ext_00664840(&tmp, lift_field<float>(settings, 0x10));
        ext_006A5F50(lift_field<void*>(self, 0x218), s->c_str());
    }

    if (!pred_bool(pred, 0x64)) {
        ext_006A5FDA(at(self, 0xC8), 0);
        ext_006A5FDA(at(self, 0x11C), 0);
    }
    if (!pred_bool(pred, 0x68)) {
        ext_006A5FDA(lift_field<void*>(self, 0x218), 0);
    }
    if (!pred_bool(pred, 0x88)) {
        ext_006A5FDA(at(self, 0x170), 0);
    }
    if (!pred_bool(pred, 0x78)) {
        ext_006A5FDA(at(self, 0x2C0), 0);
    }
    if (lift_field<uint8_t>(self, 0x7C) != 0) {
        set_check(lift_field<HWND>(self, 0x2E0), lift_field<uint8_t>(settings, 0x4D));
        ext_006A5FDA(at(self, 0x2C0), 0);
    }

    // Panel selection: the 0x6C/0x70 predicate pair picks which sub-panel is active.
    {
        bool c6c = pred_bool(pred, 0x6C);
        bool c70 = pred_bool(pred, 0x70);
        if (!c6c && !c70) {
            // Neither panel active: clear both and reset the active pointer.
            ext_006A5E72(at(self, 0x5BC), 0);
            ext_006A5FDA(at(self, 0x568), 0);
            lift_field<void*>(self, 0x8C) = nullptr;
        } else if (c6c && !c70) {
            ext_006A5E72(at(self, 0x5BC), 0);
            lift_field<void*>(self, 0x8C) = at(self, 0x568);
        } else if (!c6c && c70) {
            // Float-list panel: populate the list at 0x5DC from the predicate's sequence.
            ext_006A5E72(at(self, 0x568), 0);
            lift_field<void*>(self, 0x8C) = at(self, 0x5BC);

            FloatSeq seq{};
            void* token = ext_006A6DE0(&seq, lift_field<float>(settings, 0x08));
            int sel = reinterpret_cast<int (*)(void*, void*)>(vslot(pred, 0x84))(pred, token);

            HWND list5DC = lift_field<HWND>(self, 0x5DC);
            for (float* p = seq.first; p != seq.last; ++p) {
                std::string tmp;
                std::string* s = ext_00664840(&tmp, *p);
                add_string(list5DC, s->c_str());
            }
            select_index(list5DC, sel);
            if (seq.first != nullptr) {
                ext_006A5C5C(seq.first);
            }
        } else {
            lift_field<void*>(self, 0x8C) = at(self, 0x568);
            ext_006A5E72(at(self, 0x5BC), 0);
        }
    }

    // Active panel: write its caption from settings+0x08.
    void* active = lift_field<void*>(self, 0x8C);
    if (active != nullptr) {
        std::string tmp;
        std::string* s = ext_00664840(&tmp, lift_field<float>(settings, 0x08));
        ext_006A5F50(active, s->c_str());
        ext_006A5E72(active, 5);
    }

    // Enable/disable groups based on predicate flags.
    {
        uint8_t flags = pred_u8(pred, 0xE4);
        bool skip = (flags & 0x02) && lift_field<uint8_t>(pred, 0x428) != 0;
        if (!skip) {
            ext_006A5FDA(at(self, 0x4C0), 0);
            ext_006A5FDA(at(self, 0x514), 0);
            ext_006A5FDA(at(self, 0x5BC), 0);
            ext_006A5FDA(at(self, 0x568), 0);
        }
    }

    if (!pred_bool(pred, 0x60)) {
        ext_006A5FDA(at(self, 0x1C4), 0);
    } else {
        ext_006A5FDA(at(self, 0x1C4), 1);
        HWND comboK = lift_field<HWND>(self, 0x1E4);
        add_string(comboK, ext_MFC80_ord_876(&mem_00ACAF8C));
        add_string(comboK, ext_MFC80_ord_876(&mem_00ACAF90));
        select_index(comboK, lift_field<uint8_t>(settings, 0x14) == 0 ? 1 : 0);
    }

    if (!pred_bool(pred, 0x74)) {
        ext_006A5FDA(at(self, 0x8B0), 0);
        ext_006A5FDA(at(self, 0x808), 0);
        ext_006A5FDA(at(self, 0x85C), 0);
    }

    if (pred_bool(pred, 0x7C)) {
        set_check(lift_field<HWND>(self, 0x334), lift_field<uint8_t>(settings, 0x6D));
        ext_006A5FDA(at(self, 0x314), 1);
    } else {
        set_check(lift_field<HWND>(self, 0x334), 1);
        ext_006A5FDA(at(self, 0x314), 0);
    }

    if (pred_bool(pred, 0x90)) {
        if (!ext_006629B0(at(settings, 0x8C))) {
            std::string defaultText(mem_00928B5D);
            lift_field<std::string>(settings, 0x8C) = defaultText;
        }
        auto gate = [&]() {
            return lift_field<uint8_t>(settings, 0xA8) != 0 && ext_006629B0(at(settings, 0x8C));
        };
        set_check(lift_field<HWND>(self, 0x3E4), gate());
        ext_006A5FDA(at(self, 0x3C4), 1);
        ext_006A5FDA(at(self, 0x418), gate());
        SendMessageA(lift_field<HWND>(self, 0x438), kMsgUnknownCF, 1, 0);
        ext_006A5FDA(at(self, 0x46C), gate());
        ext_00417420(self);
    } else {
        set_check(lift_field<HWND>(self, 0x3E4), 0);
        ext_006A5FDA(at(self, 0x3C4), 0);
        ext_006A5FDA(at(self, 0x418), 0);
        SendMessageA(lift_field<HWND>(self, 0x438), kMsgUnknownCF, 1, 0);
        ext_006A5F50(at(self, 0x418), mem_00928B5D);
        ext_006A5FDA(at(self, 0x46C), 0);
    }

    ext_00418130(self);

    if (pred_bool(pred, 0x94)) {
        ext_00418BE0(self, 1, 1);
    } else {
        ext_00418BE0(self, 0, 0);
    }
    ext_004174F0(self);

    return 1;
}
} // namespace lift_00418DE0
