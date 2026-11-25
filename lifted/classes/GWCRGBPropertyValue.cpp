// Lifted C++ translation unit: lifted/classes/GWCRGBPropertyValue.cpp
#include "lift_compat.h"
#include <cstdio>

// [0x006B3C40]
namespace lift_006B3C40 {
extern uint32_t mem_0092563C;
extern void ext_006A6172(void);
extern void ext_006A61C6(void);

// @name GWCRGBPropertyValue::vfunc_1
// @class GWCRGBPropertyValue
// @summary Draws an RGB property value swatch if its type/state at +0x04 equals 0x64.
// @field GWCRGBPropertyValue +0x04 uint32_t field_0x04
// @field GWCRGBPropertyValue +0x40 uint32_t* field_0x40
void __thiscall fn_006B3C40(
    void* self,
    void* dc,
    int32_t left,
    int32_t top,
    int32_t right,
    int32_t bottom,
    uint32_t arg6,
    uint32_t arg7)
{
    (void)arg6;
    (void)arg7;
    left += 1;
    uint8_t* obj = static_cast<uint8_t*>(self);
    if (*reinterpret_cast<uint32_t*>(obj + 0x04) != 0x64) {
        return;
    }

    typedef uint32_t(__stdcall* GetSystemMetricsFn)(int32_t);
    reinterpret_cast<GetSystemMetricsFn>(static_cast<uintptr_t>(mem_0092563C))(2);

    uint32_t* color_ptr = *reinterpret_cast<uint32_t**>(obj + 0x40);
    top += 1;
    right -= 1;
    bottom -= 2;

    int32_t rect[4] = { left, top, right, bottom };
    uint32_t color = *color_ptr;

    typedef void(__thiscall* FillSolidRectFn)(void*, const int32_t*, uint32_t);
    reinterpret_cast<FillSolidRectFn>(&ext_006A6172)(dc, rect, color);

    typedef void(__thiscall* Draw3dRectFn)(void*, const int32_t*, uint32_t, uint32_t);
    reinterpret_cast<Draw3dRectFn>(&ext_006A61C6)(dc, rect, 0, 0);
}
} // namespace lift_006B3C40

// [0x006B3AC0]
namespace lift_006B3AC0 {
// @name GWCRGBPropertyValue::vfunc_5
// @class GWCRGBPropertyValue
// @summary Sets the enabled flag at +0x34; when the object type is 0x64, releases or allocates the pointer at +0x40.
// @field GWCRGBPropertyValue +0x04 uint32_t field_0x04
// @field GWCRGBPropertyValue +0x34 uint8_t field_0x34
// @field GWCRGBPropertyValue +0x40 uint32_t* field_0x40

extern void ext_006A5C5C(uint32_t arg);
extern uint32_t* ext_006A5C62(uint32_t size);

struct GWCRGBPropertyValue_vfunc5_view {
    uint8_t  pad0[0x04];
    uint32_t field_0x04;
    uint8_t  pad1[0x34 - 0x08];
    uint8_t  field_0x34;
    uint8_t  pad2[0x40 - 0x35];
    uint32_t* field_0x40;
};

void GWCRGBPropertyValue_vfunc_5(GWCRGBPropertyValue_vfunc5_view* self, uint32_t arg1, uint8_t arg2)
{
    if (self->field_0x34 == 1 && self->field_0x04 == 0x64) {
        ext_006A5C5C(static_cast<uint32_t>(reinterpret_cast<uintptr_t>(self->field_0x40)));
    }

    self->field_0x34 = arg2;

    if (arg2 != 0) {
        if (self->field_0x04 == 0x64) {
            uint32_t* p = ext_006A5C62(4);
            if (p != nullptr) {
                *p = 0;
                self->field_0x40 = p;
            } else {
                self->field_0x40 = nullptr;
            }
        }
    } else {
        if (self->field_0x04 == 0x64) {
            self->field_0x40 = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(arg1));
        }
    }
}
} // namespace lift_006B3AC0

// [0x006B3B30]
namespace lift_006B3B30 {
// @name GWCRGBPropertyValue::vfunc_2
// @class GWCRGBPropertyValue
// @summary Formats the RGB property value into a CString using MFC80::Format
// @field GWCRGBPropertyValue +0x40 uint8_t* field_0x40


extern uint32_t mem_009242FC;
extern uint32_t mem_00924410;

void* __thiscall fn_006B3B30(void* self, void* out_str) {
    // Construct CString
    reinterpret_cast<void(__thiscall*)(void*)>(mem_009242FC)(out_str);

    // Format RGB bytes from *(uint8_t**)(self + 0x40)
    const uint8_t* rgb = *reinterpret_cast<const uint8_t* const*>(reinterpret_cast<const uint8_t*>(self) + 0x40);
    uint32_t r = rgb[0];
    uint32_t g = rgb[1];
    uint32_t b = rgb[2];

    reinterpret_cast<void(__cdecl*)(void*, uint32_t, uint32_t, uint32_t, uint32_t)>(mem_00924410)(
        out_str, 0x009919D4u, r, g, b
    );

    return out_str;
}
} // namespace lift_006B3B30
