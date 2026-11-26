// Lifted C++ translation unit: lifted/classes/ButtonPanel.cpp
#include "lift_compat.h"

// [0x00455C30]
namespace lift_00455C30 {
// @name ButtonPanel::Create
// @class ButtonPanel
// @summary Initializes horizontal, vertical, and floating bar sizes from default size and delegates to virtual Create.
// @field ButtonPanel +0x9C int32_t m_szHorz_cx
// @field ButtonPanel +0xA0 int32_t m_szHorz_cy
// @field ButtonPanel +0xA4 int32_t m_szVert_cx
// @field ButtonPanel +0xA8 int32_t m_szVert_cy
// @field ButtonPanel +0xAC int32_t m_szFloat_cx
// @field ButtonPanel +0xB0 int32_t m_szFloat_cy


extern void ext_006A5EC0(void);
extern void ext_006A5EDE(void);
extern void ext_006A6328(void);

extern uint32_t mem_009256AC;
extern char mem_00936EFC[];
extern char mem_00936F08[];
extern char mem_00936F14[];
extern char mem_00936F20[];
extern char mem_00936F2C[];
extern char mem_00936F38[];
extern char mem_00936F44[];

extern uint32_t __thiscall fn_00455C30(
    void* self,
    uint32_t arg0,
    uint32_t arg1,
    int32_t cx,
    int32_t cy,
    uint32_t arg4,
    uint32_t arg5,
    uint32_t arg6)
{
    (void)arg4;
    (void)&ext_006A5EC0;
    (void)&ext_006A5EDE;
    (void)&ext_006A6328;
    (void)&mem_009256AC;
    (void)mem_00936EFC;
    (void)mem_00936F08;
    (void)mem_00936F14;
    (void)mem_00936F20;
    (void)mem_00936F2C;
    (void)mem_00936F38;
    (void)mem_00936F44;

    lift_field<int32_t>(self, 0xB0) = cy;
    lift_field<int32_t>(self, 0xA8) = cy;
    lift_field<int32_t>(self, 0xA0) = cy;

    lift_field<int32_t>(self, 0xAC) = cx;
    lift_field<int32_t>(self, 0xA4) = cx;
    lift_field<int32_t>(self, 0x9C) = cx;

    using VFunc92 = uint32_t(__thiscall*)(void*, uint32_t, uint32_t, uint32_t, uint32_t);
    uintptr_t vtable = lift_field<uintptr_t>(self, 0x0);
    auto vfn = *reinterpret_cast<VFunc92*>(vtable + 0x170);
    return vfn(self, arg0, arg1, arg5, arg6);
}
} // namespace lift_00455C30
