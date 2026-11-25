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

// [0x007BAE20]
namespace lift_007BAE20 {
// @name copyDword
// @summary Copies a 32-bit value from the address in arg1 to the address in arg2 (cdecl, no stack cleanup).
void sub_007BAE20(uint32_t *src, uint32_t *dst)
{
    *dst = *src;
}
} // namespace lift_007BAE20

// [0x007B1F40] sub_007B1F40 (21 bytes)
namespace lift_007B1F40 {
// @name FilterByModeZeroOrTwo
// @summary Returns the ECX input unchanged when the first stack argument is 0 or 2; otherwise returns 0. Stdcall-style (ret 8).
// @field none (no class member accessed)
DWORD fn_007B1F40(DWORD ecx_in, DWORD arg0, DWORD arg1) {
    (void)arg1;
    if (arg0 == 0 || arg0 == 2) {
        return ecx_in;
    }
    return 0;
}
} // namespace lift_007B1F40

// [0x007BADD0]
namespace lift_007BADD0 {
extern uint8_t mem_007BADF0[];

// @name sub_007BADD0
// @summary Sets fields at +0x18C and +0x194 to 0x007BADF0 and returns 1.
// @field Unknown +0x18C uint32_t field_0x18C
// @field Unknown +0x194 uint32_t field_0x194

uint32_t __cdecl sub_007BADD0(uintptr_t arg0) {
    uint32_t val = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_007BADF0));
    *reinterpret_cast<uint32_t*>(arg0 + 0x18c) = val;
    *reinterpret_cast<uint32_t*>(arg0 + 0x194) = val;
    return 1;
}
} // namespace lift_007BADD0

// [0x007BDC00]
namespace lift_007BDC00 {
extern uint8_t mem_007BDC20[];

// @name initField1A0And1A8
// @summary Sets fields at +0x1A0 and +0x1A8 to mem_007BDC20 and returns 1.
// @field Object +0x1A0 uint32_t field_0x1A0
// @field Object +0x1A8 uint32_t field_0x1A8

uint32_t sub_007BDC00(uint8_t* obj) {
    uint32_t val = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_007BDC20));
    *reinterpret_cast<uint32_t*>(obj + 0x1A0) = val;
    *reinterpret_cast<uint32_t*>(obj + 0x1A8) = val;
    return 1;
}
} // namespace lift_007BDC00

// [0x007B8BA0]
namespace lift_007B8BA0 {
// @name freeLinkedListIfNonEmpty_007B8BA0
// @summary Frees the linked list rooted at mem_00B61DB8 if it is non-empty; otherwise does nothing.

extern DWORD mem_00B61DB8;   // list head pointer (global)
void ext_007B8BB0();         // freeLinkedList_007B8BB0: frees all nodes and their buffers

void sub_007B8BA0() {
    if (mem_00B61DB8 != 0) {
        ext_007B8BB0();
    }
}
} // namespace lift_007B8BA0
