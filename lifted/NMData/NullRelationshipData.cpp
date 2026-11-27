// Lifted C++ translation unit: lifted/NMData/NullRelationshipData.cpp
#include "lift_compat.h"
#include <new>
#include <string>
extern "C" const char* mem_00A9F118;

// [0x0055DE20] NMData::NullRelationshipData::vfunc_59 (35 bytes)
namespace lift_0055DE20 {
// Global holding a pointer to a constant C string (.data at 0x00A9F118).
extern uint32_t mem_00A9F118;
// Import slot (.rdata at 0x00924FE4) holding the MSVCP80 std::basic_string<char> ctor
// taking (const char*, const allocator&).
extern uint32_t mem_00924FE4;

// @name NMData::NullRelationshipData::vfunc_59
// @class NMData::NullRelationshipData
// @summary Constructs the std::string out-parameter from the constant C string stored at mem_00A9F118 and returns it.
void* __stdcall fn_0055DE20(void* out) {
    using StringCtorFn = void (*)(void* self, const char* s, const void* alloc);

    const char* s = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F118));
    auto ctor = reinterpret_cast<StringCtorFn>(static_cast<uintptr_t>(mem_00924FE4));
    ctor(out, s, nullptr);
    return out;
}
} // namespace lift_0055DE20

// [0x005E1830] NMData::NullRelationshipData::vfunc_54 (128 bytes)
namespace lift_005E1830 {
// @name NMData::NullRelationshipData::vfunc_54
// @class NMData::NullRelationshipData
// @summary One-time guarded initialisation (flag bit 0 of mem_00B45C2C), then calls ext_005E0380 on self and caches self+0x178 into mem_00B45C24.
// @field NMData::NullRelationshipData +0x178 uint8_t field_0x178

extern void ext_005B5780(void* ecx, uint32_t arg);
extern void ext_006A6C87(const void* arg);
extern void ext_005E0380(void* ecx, void* arg);
extern uint32_t mem_00B45C2C;
extern uint8_t mem_00B45C24;
extern uint8_t mem_00B45BE0;
extern uint8_t mem_0091E3E0;

void fn_005E1830(void* self) {
    if ((mem_00B45C2C & 1u) == 0) {
        mem_00B45C2C |= 1u;
        ext_005B5780(&mem_00B45BE0, 0x16);
        ext_006A6C87(&mem_0091E3E0);
    }
    ext_005E0380(self, &mem_00B45BE0);
    mem_00B45C24 = lift_field<uint8_t>(self, 0x178);
}
} // namespace lift_005E1830

// [0x005EBE00] NMData::NullRelationshipData::vfunc_22 (156 bytes)
namespace lift_005EBE00 {
// @name NMData::NullRelationshipData::vfunc_22
// @class NMData::NullRelationshipData
// @summary Resolves a handle from arg via 0x006404E0, forwards it to RelationshipData::vfunc_22, then when the child at +0x190 reports true (or its +0x178 flag differs from ours) updates the child name via 0x00640110 and 0x00640A80; returns arg.
// @field NMData::NullRelationshipData +0x178 uint8_t field_0x178
// @field NMData::NullRelationshipData +0x190 void* field_0x190

extern void* ext_006404E0(void* arg, uint32_t value);
extern void ext_005EB5A0(void* self, void* arg);
extern uint32_t ext_00640110(void* self, uint32_t value);
extern void ext_00640A80(uint32_t value, uint8_t flag);
extern uint32_t mem_00A9F118;
extern uint32_t mem_00A9F724;

void* fn_005EBE00(void* self, void* arg) {
    void* const handle = ext_006404E0(arg, mem_00A9F118);

    ext_005EB5A0(self, handle);

    void* const child = lift_field<void*>(self, 0x190);
    if (child == nullptr) {
        return arg;
    }

    using VFn = uint8_t(__thiscall*)(void*);
    void* const vt = *reinterpret_cast<void**>(child);
    void* const slot = *reinterpret_cast<void**>(static_cast<uint8_t*>(vt) + 0x70);
    const uint8_t childReports = reinterpret_cast<VFn>(slot)(child);

    const uint8_t selfFlag = lift_field<uint8_t>(self, 0x178);
    bool doUpdate = (childReports != 0);
    if (!doUpdate) {
        doUpdate = (lift_field<uint8_t>(child, 0x178) != selfFlag);
    }

    if (doUpdate) {
        const uint32_t r = ext_00640110(handle, mem_00A9F724);
        ext_00640A80(r, selfFlag);
    }

    return arg;
}
} // namespace lift_005EBE00
