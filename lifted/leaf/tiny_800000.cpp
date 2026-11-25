// Lifted C++ translation unit: lifted/leaf/tiny_800000.cpp
#include "lift_compat.h"
extern "C" int mem_00AB6B0C;
#include <cstddef>
#include <cstdint>

#include <cstdint>
// @name sub_0080EFC0
// @summary Returns address of global mem_00AB6B0C.
extern "C" void* __cdecl fn_0080EFC0(void) {
    return &mem_00AB6B0C;
}

// [0x00803980] sub_00803980 (13 bytes)
namespace lift_00803980 {
// @name fn_00803980 (returns **a - *b)
// @summary Returns the int32 value behind a double pointer (arg0) minus the int32 value behind a pointer (arg1).
// (free function; no class, so no @class or @field entries)
int32_t fn_00803980(int32_t** a, const int32_t* b) {
    return **a - *b;
}
} // namespace lift_00803980

// [0x0080A690] sub_0080A690 (16 bytes)
namespace lift_0080A690 {
extern DWORD mem_00B62020;

// @name exchangeGlobal_00B62020
// @summary Stores the argument into global mem_00B62020 and returns the previous value.
DWORD fn_0080A690(DWORD value) {
    DWORD previous = mem_00B62020;
    mem_00B62020 = value;
    return previous;
}
} // namespace lift_0080A690

// [0x0080FBB0]
namespace lift_0080FBB0 {
// @name sub_0080FBB0_getField08
// @summary Returns the 32-bit value at +0x08 of the object pointer passed as the single stack argument.
// @field <Unknown> +0x08 uint32_t field_0x08

uint32_t sub_0080FBB0_getField08(const uint8_t* obj) {
    return *reinterpret_cast<const uint32_t*>(obj + 0x08);
}
} // namespace lift_0080FBB0

// [0x0080F700]
namespace lift_0080F700 {
// @name strlen
// @summary Returns the length of a NUL-terminated string (equivalent to repne scasb strlen idiom).

uint32_t sub_0080F700(const char* str) {
    const char* p = str;
    while (*p != '\0') {
        ++p;
    }
    return static_cast<uint32_t>(p - str);
}
} // namespace lift_0080F700

// [0x0080AC30] sub_0080AC30 (31 bytes)
namespace lift_0080AC30 {
// @name ReleaseGlobalCriticalSection
// @summary If the global init flag is set, deletes the global CRITICAL_SECTION and clears the flag.
extern DWORD mem_00B73C84;   // global init flag (nonzero = CS initialized)
extern DWORD mem_00B73C40;   // global CRITICAL_SECTION object
extern DWORD mem_009242E4;   // IAT slot holding KERNEL32!DeleteCriticalSection

void fn_0080AC30() {
    if (mem_00B73C84 == 0)
        return;

    // Indirect call through the IAT slot, as in the original `call dword ptr [0x9242e4]`.
    using PFN_DeleteCriticalSection = void(__stdcall*)(void*);
    auto delete_cs = *reinterpret_cast<PFN_DeleteCriticalSection*>(&mem_009242E4);
    delete_cs(reinterpret_cast<void*>(&mem_00B73C40));

    mem_00B73C84 = 0;
}
} // namespace lift_0080AC30
