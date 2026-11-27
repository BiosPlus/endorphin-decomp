// Lifted C++ translation unit: lifted/templates/RenameElementCommand.cpp
#include "lift_compat.h"

// [0x004BC980]
namespace lift_004BC980 {
// @name PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand::vfunc_1
// @class PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand
// @summary Removes an element from the set, updates its name string, and re-inserts it.
// @field RenameElementCommand +0x10 void* field_0x10
// @field RenameElementCommand +0x14 void* field_0x14
// @field RenameElementCommand +0x34 char field_0x34


extern int32_t (__thiscall *ext_00527EC0)(void* self, uintptr_t* target_ptr);
extern void (__thiscall *ext_004BC5B0)(void* self, void* element, int32_t flag);
extern void* (__thiscall *mem_00924FDC)(void* self, const void* other);

void __thiscall fn_004BC980(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* container = lift_field<void*>(base, 0x10);
    void* element = lift_field<void*>(base, 0x14);

    uintptr_t target_ptr = reinterpret_cast<uintptr_t>(element);
    ext_00527EC0(container, &target_ptr);

    mem_00924FDC(static_cast<uint8_t*>(element) + 0x04, base + 0x34);

    ext_004BC5B0(container, element, 0);
}
} // namespace lift_004BC980

// [0x004BC9C0] PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand::vfunc_2 (56 bytes)
namespace lift_004BC9C0 {
// @name PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand::vfunc_2
// @class PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand
// @summary Auto-lifted identical-shape clone of 0x004BC980 (PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand::vfunc_1).
namespace lift_004BC980 {
// @name PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand::vfunc_1
// @class PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand
// @summary Removes an element from the set, updates its name string, and re-inserts it.
// @field RenameElementCommand +0x10 void* field_0x10
// @field RenameElementCommand +0x14 void* field_0x14
// @field RenameElementCommand +0x34 char field_0x34


extern int32_t (__thiscall *ext_00527EC0)(void* self, uintptr_t* target_ptr);
extern void (__thiscall *ext_004BC5B0)(void* self, void* element, int32_t flag);
extern void* (__thiscall *mem_00924FDC)(void* self, const void* other);

void __thiscall fn_004BC9C0(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* container = lift_field<void*>(base, 0x10);
    void* element = lift_field<void*>(base, 0x14);

    uintptr_t target_ptr = reinterpret_cast<uintptr_t>(element);
    ext_00527EC0(container, &target_ptr);

    mem_00924FDC(static_cast<uint8_t*>(element) + 0x04, base + 0x18);

    ext_004BC5B0(container, element, 0);
}
} // namespace lift_004BC980
} // namespace lift_004BC9C0

// [0x00502130] PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::RenameElementCommand::vfunc_1 (56 bytes)
namespace lift_00502130 {
// @name PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::RenameElementCommand::vfunc_1
// @class PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::RenameElementCommand
// @summary Auto-lifted identical-shape clone of 0x004BC980 (PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand::vfunc_1).
namespace lift_004BC980 {
// @name PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand::vfunc_1
// @class PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand
// @summary Removes an element from the set, updates its name string, and re-inserts it.
// @field RenameElementCommand +0x10 void* field_0x10
// @field RenameElementCommand +0x14 void* field_0x14
// @field RenameElementCommand +0x34 char field_0x34


extern int32_t (__thiscall *ext_00527EC0)(void* self, uintptr_t* target_ptr);
extern void (__thiscall *ext_00501970)(void* self, void* element, int32_t flag);
extern void* (__thiscall *mem_00924FDC)(void* self, const void* other);

void __thiscall fn_00502130(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* container = lift_field<void*>(base, 0x10);
    void* element = lift_field<void*>(base, 0x14);

    uintptr_t target_ptr = reinterpret_cast<uintptr_t>(element);
    ext_00527EC0(container, &target_ptr);

    mem_00924FDC(static_cast<uint8_t*>(element) + 0xC, base + 0x34);

    ext_00501970(container, element, 0);
}
} // namespace lift_004BC980
} // namespace lift_00502130

// [0x00502170] PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::RenameElementCommand::vfunc_2 (56 bytes)
namespace lift_00502170 {
// @name PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::RenameElementCommand::vfunc_2
// @class PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>::RenameElementCommand
// @summary Auto-lifted identical-shape clone of 0x004BC980 (PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand::vfunc_1).
namespace lift_004BC980 {
// @name PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand::vfunc_1
// @class PointainerWithUndo<PointainerSet<NMData::MaterialPair>>::RenameElementCommand
// @summary Removes an element from the set, updates its name string, and re-inserts it.
// @field RenameElementCommand +0x10 void* field_0x10
// @field RenameElementCommand +0x14 void* field_0x14
// @field RenameElementCommand +0x34 char field_0x34


extern int32_t (__thiscall *ext_00527EC0)(void* self, uintptr_t* target_ptr);
extern void (__thiscall *ext_00501970)(void* self, void* element, int32_t flag);
extern void* (__thiscall *mem_00924FDC)(void* self, const void* other);

void __thiscall fn_00502170(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    void* container = lift_field<void*>(base, 0x10);
    void* element = lift_field<void*>(base, 0x14);

    uintptr_t target_ptr = reinterpret_cast<uintptr_t>(element);
    ext_00527EC0(container, &target_ptr);

    mem_00924FDC(static_cast<uint8_t*>(element) + 0xC, base + 0x18);

    ext_00501970(container, element, 0);
}
} // namespace lift_004BC980
} // namespace lift_00502170
