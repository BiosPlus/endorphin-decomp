// Lifted C++ translation unit: lifted/leaf/decompiled_460000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00467320] sub_00467320 (8 bytes)
namespace lift_00467320 {
// @name sub_00467320
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00467050(void* arg);

void fn_00467320() {
    ext_00467050(reinterpret_cast<void*>(static_cast<uintptr_t>(1)));
}
} // namespace lift_00437DE0
} // namespace lift_00467320

// [0x00467330] sub_00467330 (8 bytes)
namespace lift_00467330 {
// @name sub_00467330
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00467050(void* arg);

void fn_00467330() {
    ext_00467050(reinterpret_cast<void*>(static_cast<uintptr_t>(0)));
}
} // namespace lift_00437DE0
} // namespace lift_00467330

// [0x00467380] sub_00467380 (8 bytes)
namespace lift_00467380 {
// @name sub_00467380
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00467340(void* arg);

void fn_00467380() {
    ext_00467340(reinterpret_cast<void*>(static_cast<uintptr_t>(0)));
}
} // namespace lift_00437DE0
} // namespace lift_00467380

// [0x00467390] sub_00467390 (8 bytes)
namespace lift_00467390 {
// @name sub_00467390
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00467340(void* arg);

void fn_00467390() {
    ext_00467340(reinterpret_cast<void*>(static_cast<uintptr_t>(1)));
}
} // namespace lift_00437DE0
} // namespace lift_00467390

// [0x00469C50] sub_00469C50 (8 bytes)
namespace lift_00469C50 {
// @name sub_00469C50
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00469200(void* arg);

void fn_00469C50() {
    ext_00469200(reinterpret_cast<void*>(static_cast<uintptr_t>(0)));
}
} // namespace lift_00437DE0
} // namespace lift_00469C50

// [0x00469C60] sub_00469C60 (8 bytes)
namespace lift_00469C60 {
// @name sub_00469C60
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00469200(void* arg);

void fn_00469C60() {
    ext_00469200(reinterpret_cast<void*>(static_cast<uintptr_t>(3)));
}
} // namespace lift_00437DE0
} // namespace lift_00469C60

// [0x00469C70] sub_00469C70 (8 bytes)
namespace lift_00469C70 {
// @name sub_00469C70
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00469200(void* arg);

void fn_00469C70() {
    ext_00469200(reinterpret_cast<void*>(static_cast<uintptr_t>(2)));
}
} // namespace lift_00437DE0
} // namespace lift_00469C70

// [0x00469C80] sub_00469C80 (8 bytes)
namespace lift_00469C80 {
// @name sub_00469C80
// @summary Auto-lifted identical-shape clone of 0x00437DE0 (callSub00437DC0WithOne).
namespace lift_00437DE0 {
// @name callSub00437DC0WithOne
// @summary Calls ext_00437DC0 with argument 1.

extern void ext_00469200(void* arg);

void fn_00469C80() {
    ext_00469200(reinterpret_cast<void*>(static_cast<uintptr_t>(1)));
}
} // namespace lift_00437DE0
} // namespace lift_00469C80

// [0x00465B30]
namespace lift_00465B30 {
// @name get_global_field_0x58
// @summary Calls ext_004658C0 and returns the int32_t field at offset +0x58.

extern int32_t __cdecl ext_004658C0(void);

extern int32_t __cdecl fn_00465B30(void) {
    uint8_t* base = reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(static_cast<uint32_t>(ext_004658C0())));
    return *reinterpret_cast<int32_t*>(base + 0x58);
}
} // namespace lift_00465B30

// [0x0046FAC0]
namespace lift_0046FAC0 {
// @name sub_0046FAC0
// @summary Loads the 32-bit value at [ecx+0x00] and passes it to thunk_MFC80_ord_764.
// @field unknown +0x00 uint32_t field_0x00


extern void ext_006A5C5C(uint32_t arg);

void __thiscall fn_0046FAC0(void* self) {
    uint32_t val = *reinterpret_cast<const uint32_t*>(self);
    ext_006A5C5C(val);
}
} // namespace lift_0046FAC0

// [0x00465B40] sub_00465B40 (12 bytes)
namespace lift_00465B40 {
// @name sub_00465B40
// @summary Auto-lifted identical-shape clone of 0x00430360 (getGlobalField0x58AndCall00469040).
namespace lift_00430360 {
// @name getGlobalField0x58AndCall00469040
// @summary Calls get_global_field_0x58 and tail-calls ext_00469040 with the returned pointer in ECX.


extern int32_t __cdecl ext_00465B30(void);
extern void __thiscall ext_00468660(int32_t self);

extern void __cdecl fn_00465B40(void) {
    int32_t obj = ext_00465B30();
    ext_00468660(obj);
}
} // namespace lift_00430360
} // namespace lift_00465B40
