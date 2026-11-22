// Lifted C++ translation unit: lifted/Geometry/AnimationType.cpp
#include "lift_compat.h"
extern "C" DWORD mem_00B4359C;
extern "C" DWORD mem_00B435A0;
extern "C" DWORD mem_00B435A4;
extern "C" DWORD mem_00B435A8;
extern "C" DWORD mem_00B435AC;
extern "C" void ext_006A6C87(void* arg);

extern "C" DWORD mem_00B435A0;
extern "C" DWORD mem_00B435A4;
extern "C" DWORD mem_00B435A8;
extern "C" DWORD mem_00B435AC;
extern "C" void ext_006A6C87(void* arg);
extern uint32_t mem_00B43574;
extern uint32_t mem_00B43578;
extern uint32_t mem_00B4357C;
extern uint32_t mem_00B43580;
extern uint32_t mem_00B43584;
extern void ext_006A6C87(const void* arg);

void* fn_005B4860() {
    if ((mem_00B43584 & 1u) == 0) {
        mem_00B43584 |= 1u;
        mem_00B43578 = 0;
        mem_00B4357C = 0;
        mem_00B43580 = 0;
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x0091DD80u)));
    }
    return static_cast<void*>(&mem_00B43574);
}
extern "C" void ext_006A6C87(uint32_t func);
extern "C" uint32_t mem_00B435B0;
extern "C" uint32_t mem_00B435B4;
extern "C" uint32_t mem_00B435B8;
extern "C" uint32_t mem_00B435BC;
extern "C" uint32_t mem_00B435C0;

extern "C" uint32_t mem_00B435B0;
extern "C" uint32_t mem_00B435B4;
extern "C" uint32_t mem_00B435B8;
extern "C" uint32_t mem_00B435BC;
extern "C" uint32_t mem_00B435C0;
    (void)self;
    if ((mem_00B435AC & 1u) == 0) {
        mem_00B435AC |= 1u;
        mem_00B435A0 = 0;
        mem_00B435A4 = 0;
        mem_00B435A8 = 0;
        ext_006A6C87(reinterpret_cast<void*>(0x0091DD00u));
    }
    return &mem_00B4359C;
}

// [0x005B5320] Geometry::AnimationType::vfunc_15 (89 bytes)
// @name Geometry::AnimationType::getStaticList
// @class Geometry::AnimationType
// @summary Lazily initializes a static container (zeroing fields at +0x4/+0x8/+0xC and registering its atexit destructor) and returns its address
void* fn_005B5320(void* self) {
    (void)self;
    if ((mem_00B435C0 & 1u) == 0u) {
        mem_00B435C0 |= 1u;
        mem_00B435B4 = 0;
        mem_00B435B8 = 0;
        mem_00B435BC = 0;
        ext_006A6C87(0x0091DDC0u);
    }
    return &mem_00B435B0;
}

// [0x005B48C0]
// @name Geometry::AnimationType::vfunc_13
// @class Geometry::AnimationType
// @summary Lazily initializes shared static state guarded by bit 0 of mem_00B43598, then returns the address of the static object at mem_00B43588.

#include "lift_compat.h"

extern uint32_t mem_00B43588;
extern uint32_t mem_00B4358C;
extern uint32_t mem_00B43590;
extern uint32_t mem_00B43594;
extern uint32_t mem_00B43598;
extern void ext_006A6C87(const void* arg);

void* fn_005B48C0() {
    if ((mem_00B43598 & 1u) == 0u) {
        mem_00B43598 |= 1u;
        mem_00B4358C = 0u;
        mem_00B43590 = 0u;
        mem_00B43594 = 0u;
        ext_006A6C87(reinterpret_cast<const void*>(static_cast<uintptr_t>(0x0091DD40u)));
    }
    return static_cast<void*>(&mem_00B43588);
}
