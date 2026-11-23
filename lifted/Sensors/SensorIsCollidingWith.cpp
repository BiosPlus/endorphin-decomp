// Lifted C++ translation unit: lifted/Sensors/SensorIsCollidingWith.cpp
#include "lift_compat.h"

// [0x00626290] Sensors::SensorIsCollidingWith::vfunc_26 (52 bytes)
namespace lift_00626290 {
extern void ext_00624E80(DWORD* key_ref, DWORD a, DWORD b);
extern DWORD* ext_00626210(void* table, DWORD* key_ref);
extern int mem_00B4B3EC;

// @name Sensors::SensorIsCollidingWith::vfunc_26
// @class Sensors::SensorIsCollidingWith
// @summary Forward two args to ext_00624E80, look up a slot in the global table keyed by arg1, and store self there if the slot is empty.
// (no @field lines: this function never dereferences self, so no offsets are accessed)
// Stack args: 4 DWORDs (callee pops 0x10 bytes); arg3/arg4 are never read.
void fn_00626290(void* self, DWORD arg1, DWORD arg2, DWORD /*arg3*/, DWORD /*arg4*/) {
    ext_00624E80(&arg1, arg1, arg2);

    DWORD* slot = ext_00626210(&mem_00B4B3EC, &arg1);
    if (*slot == 0) {
        *slot = static_cast<DWORD>(reinterpret_cast<uintptr_t>(self));
    }
}
} // namespace lift_00626290

// [0x006259C0] Sensors::SensorIsCollidingWith::vfunc_2 (99 bytes)
namespace lift_006259C0 {
extern int mem_00924FC0;                                  // MSVCP80 operator==(const std::string&, const char*) IAT slot
extern void __cdecl ext_006259A0(void* self, void* a1);   // sub_006259A0: called on match with (this, a1)
extern void __cdecl ext_00671F30(void* a1);               // sub_00671F30: called on no match with (a1)

namespace {

// Compares the std::string object at str against a C string via the MSVC runtime operator==.
bool string_equals(const void* str, const char* rhs) {
#if defined(_MSC_VER) && defined(_M_IX86)
    using StringEqualsFn = bool(__cdecl*)(const void* lhs, const char* rhs);
    return reinterpret_cast<StringEqualsFn>(mem_00924FC0)(str, rhs);
#else
    (void)str;
    (void)rhs;
    (void)mem_00924FC0;
    return false;
#endif
}

}  // namespace

// @name Sensors::SensorIsCollidingWith::vfunc_2
// @class Sensors::SensorIsCollidingWith
// @summary Compares the std::string at a2 against "Normalized" and "UnNormalized"; on a match calls sub_006259A0(this, a1), otherwise sub_00671F30(a1). Returns a1.
void* __thiscall fn_006259C0(void* self, void* a1, void* a2) {
    const bool matched = string_equals(a2, "Normalized") || string_equals(a2, "UnNormalized");
    if (matched) {
        ext_006259A0(self, a1);
    } else {
        ext_00671F30(a1);
    }
    return a1;
}
} // namespace lift_006259C0
