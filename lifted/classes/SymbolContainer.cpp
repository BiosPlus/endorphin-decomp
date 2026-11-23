// Lifted C++ translation unit: lifted/classes/SymbolContainer.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00687100] SymbolContainer::vfunc_6 (71 bytes)
namespace lift_00687100 {
// @name SymbolContainer::vfunc_6
// @class SymbolContainer
// @summary Auto-lifted identical-shape clone of 0x005A5400 (NMData::BackGroundData::vfunc_6_off_4).
// @field SymbolContainer +0x28 void* field_0x28
// @field SymbolContainer +0x2C void* field_0x2C
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
void fn_00687100(void* self, void* arg) {
    void* ebp = lift_field<void*>(self, 0x2C);
    void* esi = reinterpret_cast<uint8_t*>(self) + 0x28;
    uint32_t ebx = lift_field<uint32_t>(arg, 0x8);

    if (lift_field<uint32_t>(arg, 0x4) > ebx) {
        mem_00925134(); // _invalid_parameter_noinfo; does not return
    }

    uint32_t local = lift_field<uint32_t>(ebp, 0);

    ext_00479C80(arg, arg, ebx, esi, local, esi, ebp, arg);
}
} // namespace lift_005A5400
} // namespace lift_00687100
