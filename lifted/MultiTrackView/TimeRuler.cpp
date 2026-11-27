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
