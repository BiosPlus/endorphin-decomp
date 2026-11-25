// Lifted C++ translation unit: lifted/NMData/BackGroundData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9ED98;
// Callee sub_005A7FA0 takes (arg, 0); its full signature is not yet recovered.
extern "C" void ext_005A7FA0(void* arg, int flag);

extern "C" void ext_005A7FA0(void* arg, int flag);
// @name NMData::BackGroundData::vfunc_6
// @class NMData::BackGroundData
// @summary Returns a std::string (via hidden out-pointer) constructed from the C string at global mem_00A9ED98; this is unused.
std::string* fn_005A98F0(void* self, std::string* out) {
    (void)self;
    new (out) std::string(mem_00A9ED98);
    return out;
}

// [0x0059DD70] NMData::BackGroundData::vfunc_4_off_10 (40 bytes)
// @name NMData::BackGroundData::vfunc_4_off_10
// @class NMData::BackGroundData
// @summary Scales the float at +0x4dc by the float pointed to by the argument and forwards the product to virtual slot 0x64 of the sub-object at this-0x0C (stdcall, ret 4; ECX = this).
// @field NMData::BackGroundData +0x4dc float field_0x4dc
void fn_0059DD70(void* self, const float* scale) {
    const float product = lift_field<float>(self, 0x4dc) * *scale;
    uint8_t* base = static_cast<uint8_t*>(self) - 0x0C;
    void** vtbl = *reinterpret_cast<void***>(base);
    void* slotAddr = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + 0x64);
    auto slot = reinterpret_cast<void (*)(void*, float)>(slotAddr);
    slot(base, product);
}

// [0x005A9960] NMData::BackGroundData::vfunc_1 (15 bytes)
// @name NMData::BackGroundData::vfunc_1
// @class NMData::BackGroundData
// @summary Stdcall (ret 4) thunk: forwards its single argument to ext_005A7FA0 together with a zero flag.
void fn_005A9960(void* arg) {
    ext_005A7FA0(arg, 0);
}

// [0x005A5400]
namespace lift_005A5400 {
// Imports / externals used by this function.
extern void ext_00479C80(void* self, void* a1, uint32_t a2, void* a3, uint32_t a4,
                             void* a5, void* a6, void* a7);
extern void (*mem_00925134)(); // MSVCR80!_invalid_parameter_noinfo (IAT slot)

// @name NMData::BackGroundData::vfunc_6_off_4
// @class NMData::BackGroundData
// @summary Validates the argument's range fields (+4 <= +8), then forwards the argument and this-owned state to ext_00479C80.
// @field NMData::BackGroundData +0x540 void* field_0x540
// @field NMData::BackGroundData +0x544 void* field_0x544
void fn_005A5400(void* self, void* arg) {
    void* ebp = lift_field<void*>(self, 0x544);
    void* esi = reinterpret_cast<uint8_t*>(self) + 0x540;
    uint32_t ebx = lift_field<uint32_t>(arg, 0x8);

    if (lift_field<uint32_t>(arg, 0x4) > ebx) {
        mem_00925134(); // _invalid_parameter_noinfo; does not return
    }

    uint32_t local = lift_field<uint32_t>(ebp, 0);

    ext_00479C80(arg, arg, ebx, esi, local, esi, ebp, arg);
}
} // namespace lift_005A5400

// [0x0059F490]
namespace lift_0059F490 {
extern uint8_t ext_0059E060(void* self);
extern void ext_00661650(void* self, void* arg1);
extern void* ext_0058F6B0(void* self, void* arg1, uint32_t arg2);

// @name NMData::BackGroundData::vfunc_14_off_4
// @class NMData::BackGroundData
// @summary Handles property 0x14B if ext_0059E060 succeeds by calling ext_00661650 on field at +0x61C; otherwise delegates to ext_0058F6B0.
// @field NMData::BackGroundData +0x61C void* field_0x61c
void* fn_0059F490(void* self, void* arg1, uint32_t arg2) {
    if (arg2 == 0x14B && ext_0059E060(static_cast<uint8_t*>(self) - 4) != 0) {
        ext_00661650(arg1, static_cast<uint8_t*>(self) + 0x61C);
        return arg1;
    }
    ext_0058F6B0(self, arg1, arg2);
    return arg1;
}
} // namespace lift_0059F490

// [0x005A98F0] NMData::BackGroundData::vfunc_6 (35 bytes)
namespace lift_005A98F0 {
extern const char* mem_00A9ED98;

// @name NMData::BackGroundData::vfunc_6
// @class NMData::BackGroundData
// @summary Auto-lifted identical-shape clone of 0x0047DB90 (NMData::SceneData::vfunc_6).
namespace lift_0047DB90 {
// Pointer-sized global holding the address of the C-string literal used below.
extern const char* const mem_00A9ED98;
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE4;

// @name NMData::SceneData::vfunc_6
// @class NMData::SceneData
// @summary Returns a std::string constructed from the C-string pointer stored in mem_00A9F23C; does not read self.
// (no self fields are accessed by this function)
std::string fn_005A98F0(const void* /*self*/) {
    static_cast<void>(&mem_00924FE4);
    return std::string(mem_00A9ED98);
}
} // namespace lift_0047DB90
} // namespace lift_005A98F0

// [0x005A9880]
namespace lift_005A9880 {
// IAT slot for the MSVC std::string(const char*, allocator) constructor import.
// The portable std::string copy constructor below replaces the call; the slot is only referenced here.
extern int mem_00924FE0;

// @name NMData::BackGroundData::vfunc_3_off_4
// @class NMData::BackGroundData
// @summary Calls virtual slot 9 (vtable +0x24) on self and copy-constructs the returned std::string into the hidden out-pointer.
// @field NMData::BackGroundData +0x00 void** vtable
std::string* fn_005A9880(void* self, std::string* out) {
    static_cast<void>(&mem_00924FE0);
    void** vtbl = *reinterpret_cast<void***>(self);
    using slot9_fn = const std::string* (*)(void* self, void* arg, int flag);
    auto slot9 = reinterpret_cast<slot9_fn>(vtbl[9]);
    // NOTE: the original pushes the caller's esi as the first stack argument (not defined by this
    // function); passed as nullptr here. The second stack argument is 0.
    const std::string* src = slot9(self, nullptr, 0);
    new (out) std::string(*src);
    return out;
}
} // namespace lift_005A9880

// [0x0059FF60] NMData::BackGroundData::vfunc_10_off_10 (109 bytes)
namespace lift_0059FF60 {
// IAT slot for MSVCR80!_invalid_parameter_noinfo (debug iterator-range guard).
extern void* mem_00925134;

// Virtual slots are reached through the vtable at byte offsets 0x24 and 0x28
// (slots 9 and 10 on the original 32-bit MSVC layout). Calls are __thiscall;
// lift_compat.h defines that macro to nothing off-MSVC.
using VSlot9Fn  = void(__thiscall*)(void* self, void* arg);
using VSlot10Fn = void(__thiscall*)(void* self, void* arg, int flag);

// @name NMData::BackGroundData::vfunc_10_off_10
// @class NMData::BackGroundData
// @summary For each element pointer in the +0x74..+0x78 range, calls vslot 9(arg) and vslot 10(arg, 1) on the element's +0x0C subobject.
// @field NMData::BackGroundData +0x74 void** field_0x74
// @field NMData::BackGroundData +0x78 void** field_0x78
void fn_0059FF60(void* self, void* arg) {
    // Iterator over the element-pointer range; the end bound is re-read each pass.
    void** it = lift_field<void**>(self, 0x74);
    while (it != lift_field<void**>(self, 0x78)) {
        // Range guard: the iterator must be strictly before end (MSVC debug check).
        if (!(it < lift_field<void**>(self, 0x78)))
            reinterpret_cast<void (*)()>(mem_00925134)();

        void* elem = *it;
        void* sub = &lift_field<void*>(elem, 0x0C);

        void* vtbl = lift_field<void*>(sub, 0);
        lift_field<VSlot9Fn>(vtbl, 0x24)(sub, arg);

        sub = &lift_field<void*>(*it, 0x0C);
        vtbl = lift_field<void*>(sub, 0);
        lift_field<VSlot10Fn>(vtbl, 0x28)(sub, arg, 1);

        ++it;
    }
}
} // namespace lift_0059FF60
