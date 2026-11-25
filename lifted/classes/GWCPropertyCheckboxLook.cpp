// Lifted C++ translation unit: lifted/classes/GWCPropertyCheckboxLook.cpp
#include "lift_compat.h"

// [0x006B32D0]
namespace lift_006B32D0 {
// @name GWCPropertyCheckboxLook::vfunc_2
// @class GWCPropertyCheckboxLook
// @summary Copies a 16-byte struct (e.g. RECT) from arg4 to sret out and sets out[2] = out[0].


extern void ext_006A5FF2();
extern void ext_006A6100();
extern void ext_006A6106();
extern void ext_006A610C();
extern void ext_006A6148();
extern void ext_006A6DE0();

extern uint32_t mem_00924070;
extern uint32_t mem_009242F4;
extern uint32_t mem_0092449C;
extern uint32_t mem_0092563C;

extern uint32_t* __stdcall fn_006B32D0(uint32_t* out, uint32_t, uint32_t, const uint32_t* src) {
    (void)ext_006A5FF2;
    (void)ext_006A6100;
    (void)ext_006A6106;
    (void)ext_006A610C;
    (void)ext_006A6148;
    (void)ext_006A6DE0;
    (void)mem_00924070;
    (void)mem_009242F4;
    (void)mem_0092449C;
    (void)mem_0092563C;

    out[0] = src[0];
    out[1] = src[1];
    out[2] = src[2];
    out[3] = src[3];
    out[2] = out[0];
    return out;
}
} // namespace lift_006B32D0
