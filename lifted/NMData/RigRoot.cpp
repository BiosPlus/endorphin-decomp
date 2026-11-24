// Lifted C++ translation unit: lifted/NMData/RigRoot.cpp
#include "lift_compat.h"
extern "C" uint32_t mem_00A9F288;
extern "C" void* ext_006404E0(void* arg, uint32_t value);
extern "C" void ext_005AA6C0(void* self, void* arg);

// [0x005AAA40] NMData::RigRoot::vfunc_22 (36 bytes)
// @name NMData::RigRoot::vfunc_22
// @class NMData::RigRoot
// @summary Auto-lifted identical-shape clone of 0x005AAA70 (NMData::Characterization::vfunc_22).
void* fn_005AAA40(void* self, void* arg) {
    void* result = ext_006404E0(arg, mem_00A9F288);
    ext_005AA6C0(self, result);
    return result;
}

// [0x005ABE20]
namespace lift_005ABE20 {
// @name NMData::RigRoot::vfunc_17_off_C
// @class NMData::RigRoot
// @summary Allocates a 0x194-byte RigRoot, runs base initializer sub_005ABA70, installs the RigRoot vtables, and returns the new object (or null on allocation failure).
// @field NMData::RigRoot +0x00 void* field_0x00
// @field NMData::RigRoot +0x04 void* field_0x04
// @field NMData::RigRoot +0x08 void* field_0x08
// @field NMData::RigRoot +0x0C void* field_0x0C
// @field NMData::RigRoot +0x150 void* field_0x150

// Allocator thunk (IAT forward to MFC80 ord_762); cdecl, takes the byte count.
extern void* ext_006A5C62(uint32_t size);
// Base-class initializer sub_005ABA70; __thiscall with one stack argument.
extern void ext_005ABA70(void* self, void* outer);

void* fn_005ABE20(void* self) {
    // Caller's this points at the RigRoot sub-object at +0x0C; recover the outer pointer.
    uint8_t* outer = static_cast<uint8_t*>(self) - 0x0C;

    uint8_t* obj = static_cast<uint8_t*>(ext_006A5C62(0x194));
    void* result = nullptr;

    if (obj != nullptr) {
        ext_005ABA70(obj, outer);

        *reinterpret_cast<uint32_t*>(obj + 0x00) = 0x0093F004u;
        *reinterpret_cast<uint32_t*>(obj + 0x04) = 0x0093EFBCu;
        *reinterpret_cast<uint32_t*>(obj + 0x08) = 0x0093EF7Cu;
        *reinterpret_cast<uint32_t*>(obj + 0x0C) = 0x0093EF2Cu;
        *reinterpret_cast<uint32_t*>(obj + 0x150) = 0x0093EF18u;

        result = obj;
    }

    return result;
}
} // namespace lift_005ABE20
