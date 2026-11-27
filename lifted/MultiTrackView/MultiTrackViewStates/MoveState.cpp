// Lifted C++ translation unit: lifted/MultiTrackView/MultiTrackViewStates/MoveState.cpp
#include "lift_compat.h"
// Win32 imports (USER32). Declared with the original stdcall ABI.
extern "C" int __stdcall GetCursorPos(void* lpPoint);
extern "C" int __stdcall SetCursorPos(int32_t x, int32_t y);

// [0x00442C70]
// @name MultiTrackView::MultiTrackViewStates::MoveState::vfunc_2
// @class MultiTrackView::MultiTrackViewStates::MoveState
// @summary Calls sub_0043C900 on the object's +0x08 member, releases mouse capture, and clears the byte at +0x30.
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x08 void* field_0x08
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x30 uint8_t field_0x30

extern "C" {
    // sub_0043C900 (21B), reached via ext_0043C900; takes this-like arg in ecx and one stack arg (0).
    extern void (*ext_0043C900)(void* ecx_arg, int arg);
    // USER32!ReleaseCapture, pointer stored at mem_009256E0.
    extern int (*mem_009256E0)(void);
}

void MultiTrackView_MoveState_vfunc_2(uint8_t* self)
{
    void* inner = *reinterpret_cast<void**>(self + 0x08);
    ext_0043C900(inner, 0);
    mem_009256E0();
    *(self + 0x30) = 0;
}

// [0x00443650]
namespace lift_00443650 {
// @name MultiTrackView::MultiTrackViewStates::MoveState::vfunc_7
// @class MultiTrackView::MultiTrackViewStates::MoveState
// @summary Fetches the current cursor position, warps the cursor to (this->field_0x1c, cursor.x), and returns whether SetCursorPos succeeded.
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x1c int32_t field_0x1c

// Import-address-table slots that the original asm calls indirectly.
extern void* mem_00925718; // USER32!GetCursorPos
extern void* mem_009256DC; // USER32!SetCursorPos

// Thiscall-style virtual; the original `ret 0xc` pops three caller-pushed
// stack arguments that the body never reads, so they are kept as unused params.
bool MultiTrackView_MultiTrackViewStates_MoveState_vfunc_7(void* self,
                                                           uint32_t /*arg1*/,
                                                           uint32_t /*arg2*/,
                                                           uint32_t /*arg3*/) {
    using GetCursorPosFn = BOOL(__stdcall*)(POINT*);
    using SetCursorPosFn = BOOL(__stdcall*)(int32_t, int32_t);

    POINT pt{};
    reinterpret_cast<GetCursorPosFn>(mem_00925718)(&pt);

    const int32_t target_x = lift_field<int32_t>(self, 0x1c);
    // Argument order preserved from the asm: X = field_0x1c, Y = pt.x.
    const BOOL ok = reinterpret_cast<SetCursorPosFn>(mem_009256DC)(target_x, pt.x);
    return ok != 0;
}
} // namespace lift_00443650

// [0x00442C90]
namespace lift_00442C90 {
extern void __thiscall ext_0043F520(void* self, void* arg0, uint32_t arg1);
extern uint8_t __thiscall ext_0041C880(void* self, uint32_t index);

// @name MultiTrackView::MultiTrackViewStates::MoveState::vfunc_4
// @class MultiTrackView::MultiTrackViewStates::MoveState
// @summary Commits or updates the move state via sub_0043F520, resets the state manager to index 0, and returns 1.
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x04 void* stateManager
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x08 void* field_0x08
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x0c uint8_t field_0x0c
uint8_t __thiscall fn_00442C90(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2) {
    (void)arg0;
    (void)arg1;
    (void)arg2;
    ext_0043F520(lift_field<void*>(self, 0x8), static_cast<uint8_t*>(self) + 0xc, 0);
    ext_0041C880(lift_field<void*>(self, 0x4), 0);
    return 1;
}
} // namespace lift_00442C90

// [0x00443EE0] MultiTrackView::MultiTrackViewStates::MoveState::vfunc_1 (422 bytes)
namespace lift_00443EE0 {
// IAT slots (indirect Win32 / CRT calls). Called via *reinterpret_cast<fn*>(&mem_X).
extern int mem_00925718; // USER32!GetCursorPos
extern int mem_009256D8; // USER32!SetCapture
extern int mem_0092570C; // USER32!ScreenToClient
extern int mem_00925134; // MSVCR80!_invalid_parameter_noinfo
using PFN_GetCursorPos = BOOL (*)(POINT*);
using PFN_SetCapture = HWND (*)(HWND);
using PFN_ScreenToClient = BOOL (*)(HWND, POINT*);
using PFN_InvalidParam = void (*)(void);

// Known callee 0x0043C900: SetCursorFromTable (thiscall, one arg: index)
extern void ext_0043C900(void* self, uint32_t index);
// Known callee 0x0041A920: sub_0041A920 (thiscall, one arg: pointer to a void* value)
extern void ext_0041A920(void* self, void** arg);
// Known callee 0x0043C920: sub_0043C920 (thiscall, returns int32)
extern int32_t ext_0043C920(void* self);
// Known callee 0x0043CDD0: pixelToTime (thiscall, one arg: int32 x, returns double)
extern double ext_0043CDD0(void* self, int32_t x);
// Known callee 0x004408E0: setDoublePairAt50_58 (thiscall, two double args, callee pops 16)
extern void ext_004408E0(void* self, double a0, double a1);
// Known callee 0x00440900: sub_00440900 (clone of 0x004408E0, two double args)
extern void ext_00440900(void* self, double a0, double a1);
// Known callee 0x00441020: called with no stack args in asm, result used as int32.
// (Callee metadata names it GetStringLiteral_00440680; asm treats return as int32.)
extern int32_t ext_00441020(void* self);
// Known callee 0x00441040: Unknown::addConstantAndTruncateToInt (returns int32)
extern int32_t ext_00441040(void* self);
// Known callee 0x00441060: Unknown::roundedFieldPlusConstToInt (returns int32)
extern int32_t ext_00441060(void* self);
// Known callee 0x00441090: MemberToInt32RoundedOffsetField98 (returns int32)
extern int32_t ext_00441090(void* self);
// Known callee 0x004AFF30: sub_004AFF30 (thiscall, one int32 arg)
extern void ext_004AFF30(void* self, int32_t value);
// Known callee 0x00596660: eraseInt32Range (thiscall; out, a2, first, a4, last)
extern void ext_00596660(void* self, void** out, void* a2, void** first, void* a4, void** last);
// Known callee 0x006A5E00: thunk_MFC80_ord_2372 (IAT jump thunk, cdecl, one arg: previous capture HWND)
extern void ext_006A5E00(HWND prevCapture);

// @name MultiTrackView::MultiTrackViewStates::MoveState::vfunc_1
// @class MultiTrackView::MultiTrackViewStates::MoveState
// @summary Starts mouse capture, erases the tracked pointer range, and for each entry feeds the
//          cursor-derived time and four rounded values into the object's double-pair setters.
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x08 void* field_0x08
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x0C uint8_t field_0x0c
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x10 void** field_0x10
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x14 void** field_0x14
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x1C POINT field_0x1c
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x28 double field_0x28
// @field MultiTrackView::MultiTrackViewStates::MoveState +0x30 uint8_t field_0x30
//
// Accessed on the owner object (self+0x08 = sm): +0x20 (HWND) and +0xA0 (ctrl ptr, byte at ctrl+0x88).
void fn_00443EE0(void* self) {
    auto addr = [](const void* p) { return reinterpret_cast<uintptr_t>(p); };
    auto* base = static_cast<uint8_t*>(self);
    auto getCursorPos = [](POINT* pt) {
        return (*reinterpret_cast<PFN_GetCursorPos*>(&mem_00925718))(pt);
    };
    auto setCapture = [](HWND h) {
        return (*reinterpret_cast<PFN_SetCapture*>(&mem_009256D8))(h);
    };
    auto screenToClient = [](HWND h, POINT* pt) {
        return (*reinterpret_cast<PFN_ScreenToClient*>(&mem_0092570C))(h, pt);
    };
    auto invalidParam = []() {
        (*reinterpret_cast<PFN_InvalidParam*>(&mem_00925134))();
    };

    lift_field<uint8_t>(self, 0x30) = 0;
    getCursorPos(reinterpret_cast<POINT*>(base + 0x1c));

    void* sm = lift_field<void*>(self, 0x08);
    ext_0043C900(sm, 1);

    HWND hwnd = lift_field<HWND>(sm, 0x20);
    HWND prevCapture = setCapture(hwnd);
    ext_006A5E00(prevCapture);

    void* sub = base + 0x0c;

    if (addr(lift_field<void**>(self, 0x10)) > addr(lift_field<void**>(self, 0x14))) {
        invalidParam();
    }
    void* out[2] = {nullptr, nullptr};
    ext_00596660(sub, out, sub, lift_field<void**>(self, 0x10), sub, lift_field<void**>(self, 0x14));

    void* ctrl = lift_field<void*>(sm, 0xa0);
    if (*(static_cast<uint8_t*>(ctrl) + 0x88) == 0) {
        void* local = ctrl;
        ext_0041A920(sub, &local);
    } else {
        ext_004AFF30(sub, ext_0043C920(sm));
    }

    void** first = lift_field<void**>(self, 0x10);
    if (first != nullptr) {
        int32_t diff = static_cast<int32_t>(addr(lift_field<void**>(self, 0x14)) - addr(first));
        if ((diff >> 2) != 0) {
            POINT pt{};
            getCursorPos(&pt);
            screenToClient(lift_field<HWND>(sm, 0x20), &pt);

            void** it = lift_field<void**>(self, 0x10);
            if (addr(it) >= addr(lift_field<void**>(self, 0x14))) {
                invalidParam();
            }
            void* obj = *it;
            double d50 = lift_field<double>(obj, 0x50);
            double t = ext_0043CDD0(sm, pt.x);
            lift_field<double>(self, 0x28) = d50 - t;
        }
    }

    void** cur = lift_field<void**>(self, 0x10);
    for (;;) {
        void** endp = lift_field<void**>(self, 0x14);
        if (addr(lift_field<void**>(self, 0x10)) > addr(endp)) {
            invalidParam();
        }
        if (cur == endp) {
            break;
        }
        if (addr(cur) >= addr(lift_field<void**>(self, 0x14))) {
            invalidParam();
        }

        void* obj = *cur;
        int32_t a1 = ext_00441040(obj);
        int32_t a2 = ext_00441020(obj);
        ext_004408E0(obj, static_cast<double>(a2), static_cast<double>(a1));

        int32_t a3 = ext_00441090(obj);
        int32_t a4 = ext_00441060(obj);
        ext_00440900(obj, static_cast<double>(a4), static_cast<double>(a3));

        if (addr(cur) >= addr(lift_field<void**>(self, 0x14))) {
            invalidParam();
        }
        cur = reinterpret_cast<void**>(addr(cur) + 4);
    }
}
} // namespace lift_00443EE0
