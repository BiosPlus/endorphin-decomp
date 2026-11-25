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
