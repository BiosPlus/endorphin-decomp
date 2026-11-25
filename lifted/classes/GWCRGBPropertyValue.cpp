// Lifted C++ translation unit: lifted/classes/GWCRGBPropertyValue.cpp
#include "lift_compat.h"

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
