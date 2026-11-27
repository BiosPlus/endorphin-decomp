// Lifted C++ translation unit: lifted/MultiTrackView/TimeRuler.cpp
#include "lift_compat.h"

// [0x004593B0]
namespace lift_004593B0 {
// @name MultiTrackView::TimeRuler::vfunc_0_off_50
// @class MultiTrackView::TimeRuler
// @summary Updates time ruler ranges, playback state, and invalidates the view rect.
// @field MultiTrackView::TimeRuler +0x30 void* field_0x30
// @field MultiTrackView::TimeRuler +0x58 void* field_0x58
// @field MultiTrackView::TimeRuler +0x6c void* field_0x6c
// @field MultiTrackView::TimeRuler +0x70 void* field_0x70
// @field MultiTrackView::TimeRuler +0x74 void* field_0x74
// @field MultiTrackView::TimeRuler +0x78 void* field_0x78

void __thiscall ext_004407E0(void* self, double val);
void __thiscall ext_004408E0(void* self, double a0, double a1);
const char* __cdecl ext_00441020();
void __thiscall ext_0045DE30(void* self);
int32_t __cdecl ext_00468180();
void* __thiscall ext_00468660(void* self);
void* __thiscall ext_004689B0(void* self, void* out);
void __thiscall ext_00468A00(void* self, void* out_ptr);
int32_t (__stdcall *mem_00925688)(void* hWnd, const void* lpRect, int32_t bErase);

void __thiscall fn_004593B0(void* self) {
    char* s = reinterpret_cast<char*>(self);
    void* edi = reinterpret_cast<void*>(static_cast<intptr_t>(ext_00468180()));

    void* obj = ext_00468660(edi);
    int32_t ebx = (*reinterpret_cast<int32_t (__thiscall***)(void*)>(obj))[0x9c / 4](obj);

    void* f1c = *reinterpret_cast<void**>(s + 0x1c);
    if (reinterpret_cast<intptr_t>(ext_00441020()) != static_cast<intptr_t>(ebx)) {
        ext_004407E0(f1c, static_cast<double>(ebx));
    }

    obj = ext_00468660(edi);
    uint8_t flag = 0;
    if ((*reinterpret_cast<uint8_t (__thiscall***)(void*)>(obj))[0x84 / 4](obj) == 0) {
        obj = ext_00468660(edi);
        if ((*reinterpret_cast<uint8_t (__thiscall***)(void*)>(obj))[0x88 / 4](obj) == 0) {
            flag = 1;
        }
    }
    char* owner = *reinterpret_cast<char**>(s - 0x20);
    *reinterpret_cast<uint8_t*>(owner + 0x190) = flag;

    void* edi2 = reinterpret_cast<void*>(static_cast<intptr_t>(ext_00468180()));
    obj = ext_00468660(edi2);
    int32_t val_2c = (*reinterpret_cast<int32_t (__thiscall***)(void*)>(obj))[0xa0 / 4](obj);

    obj = ext_00468660(edi);
    if ((*reinterpret_cast<uint8_t (__thiscall***)(void*)>(obj))[0x84 / 4](obj) != 0) {
        obj = ext_00468660(edi);
        if ((*reinterpret_cast<uint8_t (__thiscall***)(void*)>(obj))[0x88 / 4](obj) == 0 && ebx > 0) {
            char* owner2 = *reinterpret_cast<char**>(s - 0x20);
            if (static_cast<double>(val_2c) > *reinterpret_cast<double*>(owner2 + 0xf0) &&
                1.0 > *reinterpret_cast<double*>(owner2 + 0xe8)) {
                ext_0045DE30(*reinterpret_cast<void**>(s + 0x8));
            }
        }
    }

    int32_t v24 = 0;
    obj = ext_00468660(edi);
    (*reinterpret_cast<void (__thiscall***)(void*, int32_t*)>(obj))[0x6c / 4](obj, &v24);
    int32_t v2c_new = v24 + ebx;
    ext_004408E0(*reinterpret_cast<void**>(s + 0x20), static_cast<double>(ebx), static_cast<double>(v2c_new));

    int32_t pair30[2];
    ext_00468A00(edi, pair30);
    ext_004408E0(*reinterpret_cast<void**>(s + 0x24), static_cast<double>(pair30[0]), static_cast<double>(pair30[1]));

    int32_t pair38[2];
    ext_004689B0(edi, pair38);
    ext_004408E0(*reinterpret_cast<void**>(s + 0x28), static_cast<double>(pair38[0]), static_cast<double>(pair38[1]));

    char* owner3 = *reinterpret_cast<char**>(s - 0x20);
    mem_00925688(*reinterpret_cast<void**>(owner3 + 0x20), nullptr, 1);
}
} // namespace lift_004593B0

// [0x004591B0]
namespace lift_004591B0 {
int32_t __stdcall ext_0043CEB0(int32_t arg);
void __thiscall ext_0043DC90(void* self, int32_t v);
int32_t __cdecl ext_00468180();
void* __thiscall ext_00468660(void* self);
void __thiscall ext_004686A0(void* self, int32_t v);

// @name MultiTrackView::TimeRuler::vfunc_10
// @class MultiTrackView::TimeRuler
// @summary Range-checks an index against the owner's limit at +0xfc; out-of-range calls ext_0043DC90(-1), in-range maps the index through ext_0043CEB0 and forwards it to the owner's helper object's vfunc at +0x98 with argument 5.
// @field MultiTrackView::TimeRuler +0x30 void* field_0x30

void __thiscall fn_004591B0(void* self, int32_t a0, int32_t index, int32_t a2) {
    (void)a0;
    (void)a2;

    void* owner = lift_field<void*>(self, 0x30);
    if (index < lift_field<int32_t>(owner, 0xfc)) {
        ext_0043DC90(owner, -1);
        return;
    }

    int32_t edi = ext_0043CEB0(index);
    void* esi = reinterpret_cast<void*>(static_cast<intptr_t>(ext_00468180()));
    ext_004686A0(esi, edi);

    void* obj = ext_00468660(esi);
    (*reinterpret_cast<void (__thiscall***)(void*, int32_t)>(obj))[0x98 / 4](obj, 5);
}
} // namespace lift_004591B0

// [0x00459560]
namespace lift_00459560 {
extern uint32_t mem_00925630;
extern uint32_t mem_00925634;
extern uint32_t mem_00925638;
extern uint32_t mem_00925688;
extern uint32_t mem_0092BD7C;
extern char mem_0092BF14;
extern char mem_00937960;
extern char mem_00937974;

uint32_t __thiscall ext_0043C930(void* self, void* menu, void* pt);
void* __cdecl ext_00468180(void);
void* __thiscall ext_00468660(void* self);
void __thiscall ext_00468710(void* self, uint32_t val);
void __thiscall ext_00468730(void* self, uint32_t val);
uint8_t __thiscall ext_00468750(void* self);
uint8_t __thiscall ext_00468770(void* self);
void __thiscall ext_00468790(void* self, uint32_t val);
void __thiscall ext_00468810(void* self, int32_t val);
void __thiscall ext_00468890(void* self, uint32_t val);
void __thiscall ext_00468920(void* self, int32_t val);
void __thiscall ext_006A6166(void* self);
void __thiscall ext_006A616C(void* self, void* hMenu);

// @name MultiTrackView::TimeRuler::vfunc_7
// @class MultiTrackView::TimeRuler
// @summary Displays the time ruler context menu and handles Zoom To Fit, Reset Save Range, and Reset Loop Range actions.
// @field MultiTrackView::TimeRuler +0x30 void* field_0x30
void __thiscall fn_00459560(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2) {
    (void)arg2;
    uint32_t pt[2] = {arg0, arg1};

    void* parent = lift_field<void*>(self, 0x30);
    void* hwnd = lift_field<void*>(parent, 0x20);
    ((int32_t(__stdcall*)(void*, void*))mem_00925630)(hwnd, pt);

    uint32_t menu[2] = {(uint32_t)(uintptr_t)&mem_0092BD7C, 0};
    void* hMenu = ((void*(__stdcall*)(void))mem_00925638)();
    ext_006A616C(menu, hMenu);

    void* timeline = ext_00468180();
    typedef int32_t(__stdcall* AppendMenuAFn)(uint32_t, uint32_t, uint32_t, const char*);
    AppendMenuAFn appendMenu = (AppendMenuAFn)mem_00925634;

    appendMenu(menu[1], 0, 0x65, &mem_0092BF14);
    if (ext_00468770(timeline) != 0) {
        appendMenu(menu[1], 0, 0x66, &mem_00937974);
    }
    if (ext_00468750(timeline) != 0) {
        appendMenu(menu[1], 0, 0x67, &mem_00937960);
    }

    uint32_t cmd = ext_0043C930(lift_field<void*>(self, 0x30), menu, pt);
    if (cmd == 0x65) {
        void* obj = lift_field<void*>(self, 0x30);
        void** vtbl = *(void***)obj;
        ((void(__thiscall*)(void*))vtbl[0x144 / 4])(obj);
    } else if (cmd == 0x66 || cmd == 0x67) {
        if (cmd == 0x66) {
            ext_00468730(timeline, 0);
            ext_00468890(timeline, 0);
            void* obj = ext_00468660(timeline);
            void** vtbl = *(void***)obj;
            int32_t count = ((int32_t(__thiscall*)(void*))vtbl[0xA0 / 4])(obj);
            ext_00468920(timeline, count - 1);
        } else {
            ext_00468710(timeline, 0);
            ext_00468790(timeline, 0);
            void* obj = ext_00468660(timeline);
            void** vtbl = *(void***)obj;
            int32_t count = ((int32_t(__thiscall*)(void*))vtbl[0xA0 / 4])(obj);
            ext_00468810(timeline, count - 1);
        }

        void* obj2 = ext_00468660(timeline);
        void** vtbl2 = *(void***)obj2;
        ((void(__thiscall*)(void*, uint32_t))vtbl2[0x98 / 4])(obj2, 5);

        void* p = lift_field<void*>(self, 0x30);
        void* h = lift_field<void*>(p, 0x20);
        ((int32_t(__stdcall*)(void*, void*, int32_t))mem_00925688)(h, nullptr, 1);
    }

    menu[0] = (uint32_t)(uintptr_t)&mem_0092BD7C;
    ext_006A6166(menu);
}
} // namespace lift_00459560
