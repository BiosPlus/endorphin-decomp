// Lifted C++ translation unit: lifted/leaf/tiny_7B0000.cpp
#include "lift_compat.h"
extern "C" void __fastcall ext_007B22B0(void* self);
extern "C" void __cdecl ext_006A5C5C(void* ptr);

// [0x007B2290] sub_007B2290 (30 bytes)
// @name sub_007B2290
// @summary MSVC scalar deleting destructor: calls sub_007B22B0 and frees memory when (flags & 1) is set.
extern "C" void* __fastcall fn_007B2290(void* self, int edx_unused, unsigned int flags) {
    (void)edx_unused;
    ext_007B22B0(self);
    if ((flags & 1u) != 0) {
        ext_006A5C5C(self);
    }
    return self;
}

// [0x007B1E90] sub_007B1E90 (10 bytes)
namespace lift_007B1E90 {
// @name sub_007B1E90
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_006B9D10(void);

extern uint8_t mem_00B61D38[];

extern void fn_007B1E90(void) {
    (void)mem_00B61D38;
    ext_006B9D10();
}
} // namespace lift_007AE0A0
} // namespace lift_007B1E90

// [0x007B1EB0] sub_007B1EB0 (10 bytes)
namespace lift_007B1EB0 {
// @name sub_007B1EB0
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_006B9D70(void);

extern uint8_t mem_00B61D38[];

extern void fn_007B1EB0(void) {
    (void)mem_00B61D38;
    ext_006B9D70();
}
} // namespace lift_007AE0A0
} // namespace lift_007B1EB0

// [0x007B1F70] sub_007B1F70 (10 bytes)
namespace lift_007B1F70 {
// @name sub_007B1F70
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_007B1FA0(void);

extern uint8_t mem_00B61D20[];

extern void fn_007B1F70(void) {
    (void)mem_00B61D20;
    ext_007B1FA0();
}
} // namespace lift_007AE0A0
} // namespace lift_007B1F70

// [0x007B1F90] sub_007B1F90 (10 bytes)
namespace lift_007B1F90 {
// @name sub_007B1F90
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_007B1FC0(void);

extern uint8_t mem_00B61D20[];

extern void fn_007B1F90(void) {
    (void)mem_00B61D20;
    ext_007B1FC0();
}
} // namespace lift_007AE0A0
} // namespace lift_007B1F90

// [0x007B2080] sub_007B2080 (10 bytes)
namespace lift_007B2080 {
// @name sub_007B2080
// @summary Auto-lifted identical-shape clone of 0x007AE0A0 (sub_007AE0A0).
namespace lift_007AE0A0 {
// @name sub_007AE0A0
// @summary Sets ECX to global mem_00B616B8 and tail-calls ext_006B9D70.


void ext_007B22B0(void);

extern uint8_t mem_00B61D98[];

extern void fn_007B2080(void) {
    (void)mem_00B61D98;
    ext_007B22B0();
}
} // namespace lift_007AE0A0
} // namespace lift_007B2080

// [0x007B2310]
namespace lift_007B2310 {
// @name sub_007B2310
// @summary Returns ecx when the first stack argument equals 2, otherwise 0; callee pops 8 bytes of arguments.
uint32_t sub_007B2310(uint32_t ecx_in, uint32_t arg0, uint32_t /*arg1*/) {
    return (arg0 - 2u) == 0u ? ecx_in : 0u;
}
} // namespace lift_007B2310
