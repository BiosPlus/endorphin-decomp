// Lifted C++ translation unit: lifted/NMData/EffectorBaseData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char mem_0097214C[];
extern "C" const char mem_0093BF0C[];
#include <cstring>

// [0x0060C040] NMData::EffectorBaseData::vfunc_2 (44 bytes)
namespace lift_0060C040 {
// @name NMData::EffectorBaseData::vfunc_2
// @class NMData::EffectorBaseData
// @summary Auto-lifted identical-shape clone of 0x0060E7B0 (NMData::AxisDefineSensorData::vfunc_2).
// @field NMData::EffectorBaseData +0x40 void* field_0x40
namespace lift_0060E7B0 {
extern void* __stdcall ext_006798D0(void* a0, void* a1, uint32_t a2, void* a3);
extern void __thiscall ext_00679030(void* self);

// @name NMData::AxisDefineSensorData::vfunc_2
// @class NMData::AxisDefineSensorData
// @summary Passes the arguments plus this->field_0x170 to ext_006798D0, hands its result to ext_00679030, and returns the first argument.
// @field NMData::AxisDefineSensorData +0x170 void* field_0x170
void* fn_0060C040(void* self, void* arg1, uint32_t arg2) {
    void* sub = lift_field<void*>(self, 0x40);
    void* result = ext_006798D0(arg1, sub, arg2, self);
    ext_00679030(result);
    return arg1;
}
} // namespace lift_0060E7B0
} // namespace lift_0060C040

// [0x0060BB50] NMData::EffectorBaseData::vfunc_19 (22 bytes)
namespace lift_0060BB50 {
// Known callee 0x004275E0: assignVirtualString (not called by this function; referenced for metadata only)
extern void ext_004275E0();
// Known callee 0x0063EFE0: sub_0063EFE0 (not called by this function; referenced for metadata only)
extern void ext_0063EFE0();
// MSVCP80 std::basic_string<char>::clear is imported through this IAT slot.
extern int mem_00924EA8;
// Data referenced by the original asm's surrounding metadata only (not accessed here).
extern int mem_00A9F838;
extern int mem_00A9F748;

// @name NMData::EffectorBaseData::vfunc_19
// @class NMData::EffectorBaseData
// @summary Clears two std::string members (at +0x04 and +0x20) of the object.
// @field NMData::EffectorBaseData +0x04 std::string field_0x04
// @field NMData::EffectorBaseData +0x20 std::string field_0x20
void fn_0060BB50(void* self) {
    (void)&ext_004275E0;
    (void)&ext_0063EFE0;
    (void)&mem_00A9F838;
    (void)&mem_00A9F748;

    // IAT slot holds the address of std::string::clear (__thiscall, takes this in ecx).
    using string_clear_fn = void (__thiscall*)(void*);
    auto string_clear = reinterpret_cast<string_clear_fn>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00924EA8)));

    auto* base = static_cast<uint8_t*>(self);
    string_clear(base + 0x04);
    string_clear(base + 0x20);  // original: tail-jump (jmp [IAT]) with ecx = self+0x20
}
} // namespace lift_0060BB50
