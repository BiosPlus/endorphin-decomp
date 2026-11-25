// Lifted C++ translation unit: lifted/classes/GridPropertyPage.cpp
#include "lift_compat.h"

// [0x0041BBB0] sub_0041BBB0 (64 bytes)
namespace lift_0041BBB0 {
extern uint32_t mem_0092561C; // IAT slot for USER32!IsWindow

extern void ext_006A608E(void* self, int arg); // thiscall thunk -> MFC80!ord_6236
extern void* ext_0052EE00(void);               // jump thunk -> sub_005379A0
extern void ext_006A61E4(void* self);          // tail-jump thunk -> MFC80!ord_4736

// @name GridPropertyPage::vfunc_86
// @class GridPropertyPage
// @summary If the page's window handle is valid, refresh the page's child via a virtual call that passes whether the field at +0x1F0 is zero, then finish via MFC80.
// @field GridPropertyPage +0x20 HWND field_0x20
// @field GridPropertyPage +0x1F0 u32 field_0x1F0
void fn_0041BBB0(void* self) {
    using IsWindowFn = BOOL (*)(HWND);
    auto isWindow = reinterpret_cast<IsWindowFn>(static_cast<uintptr_t>(mem_0092561C));

    HWND hwnd = lift_field<HWND>(self, 0x20);
    if (!isWindow(hwnd)) {
        return;
    }

    ext_006A608E(self, 1);

    void* obj = ext_0052EE00();
    int flag = (lift_field<uint32_t>(self, 0x1F0) == 0) ? 1 : 0;

    void** vtable = *reinterpret_cast<void***>(obj);
    void* slot = *reinterpret_cast<void**>(reinterpret_cast<char*>(vtable) + 0xB0);
    auto vcall = reinterpret_cast<void (*)(void*, int)>(slot);
    vcall(obj, flag);

    ext_006A61E4(self);
}
} // namespace lift_0041BBB0
