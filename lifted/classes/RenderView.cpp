// Lifted C++ translation unit: lifted/classes/RenderView.cpp
#include "lift_compat.h"

// [0x0044BF40] RenderView::vfunc_28 (33 bytes)
namespace lift_0044BF40 {
// Global pointer at 0x00ACDB40; its +0x20 slot holds the window handle.
extern void* mem_00ACDB40;

// IAT slot holding the address of USER32!GetWindowRect (0x00925690).
extern void* mem_00925690;

// @name RenderView::vfunc_28
// @class RenderView
// @summary If field_0x6c is set, fills rect via GetWindowRect on the window handle at *(mem_00ACDB40 + 0x20); otherwise returns FALSE.
// @field RenderView +0x6C uint8_t field_0x6c
BOOL fn_0044BF40(void* self, RECT* rect) {
    if (lift_field<uint8_t>(self, 0x6C) == 0) {
        return FALSE;
    }
    HWND hwnd = lift_field<HWND>(mem_00ACDB40, 0x20);
    auto get_window_rect = reinterpret_cast<BOOL (*)(HWND, RECT*)>(mem_00925690);
    return get_window_rect(hwnd, rect);
}
} // namespace lift_0044BF40

// [0x0044C260] RenderView::vfunc_0_off_60 (58 bytes)
namespace lift_0044C260 {
// Known callee 0x0044BC60: invokeVirtualWithTempString (If the object at self+0x64 is non-null, builds a temporary std::string (seeded from a literal, then overwritten by one of two literals chosen from the flag bytes at +0x74/+0x75), passes it to vtable slot 42 (0xA8) of that object, and destroys the temporary.)
extern void ext_0044BC60(void* self);

// @name RenderView::vfunc_0_off_60
// @class RenderView
// @summary Stores a byte flag from *src into self+0x14, updates a flag on the subobject at self+0x4 when present, then forwards to ext_0044BC60 on the primary base (self-0x60).
// @field RenderView +0x04 void* field_0x04
// @field RenderView +0x14 uint8_t field_0x14
void fn_0044C260(void* self, const uint8_t* src) {
    // mov byte ptr [self+0x14], *src
    lift_field<uint8_t>(self, 0x14) = *src;

    // ecx = self->field_0x04
    void* obj = lift_field<void*>(self, 0x04);
    if (obj != nullptr) {
        // eax = obj->vtable[0xB4](obj)
        void* vt = lift_field<void*>(obj, 0);
        void* slot = lift_field<void*>(vt, 0xB4);
        using VirtFn = void* (*)(void*);
        void* result = reinterpret_cast<VirtFn>(slot)(obj);
        if (result != nullptr) {
            // result->byte[0x85] = (self->field_0x14 == 0)
            uint8_t flag = lift_field<uint8_t>(self, 0x14);
            lift_field<uint8_t>(result, 0x85) = (flag == 0) ? 1 : 0;
        }
    }

    // thiscall ext_0044BC60 on (self - 0x60)
    ext_0044BC60(static_cast<uint8_t*>(self) - 0x60);
}
} // namespace lift_0044C260
