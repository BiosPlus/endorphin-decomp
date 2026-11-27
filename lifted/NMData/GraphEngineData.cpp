// Lifted C++ translation unit: lifted/NMData/GraphEngineData.cpp
#include "lift_compat.h"

// [0x004B48E0] NMData::GraphEngineData::vfunc_13 (69 bytes)
namespace lift_004B48E0 {
// Callee 0x004B4710 (sub_004B4710): thiscall on the same object, returns a DWORD value.
extern int ext_004B4710(void* self);
// Callee 0x0055DA20 (sub_0055DA20): thiscall on arg1, takes (int value, void* subobject), ret 8.
extern void ext_0055DA20(void* self, int value, void* subobject);
// Global lazy-init flag (bit 0 = initialized/in-progress) and cached value.
extern int mem_00AE0D6C;
extern int mem_00AE0D68;

// @name NMData::GraphEngineData::vfunc_13
// @class NMData::GraphEngineData
// @summary Lazily caches a value from ext_004B4710 in a global on first call, then forwards it with the self+8 subobject to ext_0055DA20 on the second stack argument; returns that second argument.
// @field NMData::GraphEngineData +0x08 void* field_0x08
void* fn_004B48E0(void* self, void* unused_arg0, void* arg1) {
    (void)unused_arg0;

    if ((mem_00AE0D6C & 1) == 0) {
        mem_00AE0D6C |= 1;
        mem_00AE0D68 = ext_004B4710(self);
    }

    void* subobject = static_cast<uint8_t*>(self) + 8;
    ext_0055DA20(arg1, mem_00AE0D68, subobject);
    return arg1;
}
} // namespace lift_004B48E0

// [0x004B5940] NMData::GraphEngineData::vfunc_0_off_4 (649 bytes)
namespace lift_004B5940 {
// Non-boilerplate externs referenced by the original asm.
extern void ext_0059A140(void* tmp_this, void* out_iter, void* tmp_arg, int32_t* pos, int32_t* key);
extern void ext_006A5C5C(void* ptr);   // IAT thunk to MFC80!ord_764 (operator delete)
extern int mem_00925134;               // MSVCR80!_invalid_parameter_noinfo (boilerplate range checks)
extern int32_t mem_00A372AC;           // table length (0x0C)
extern int32_t mem_00A372B0[];         // table of int32 values, indices [0, mem_00A372AC)

// Scratch int vector, laid out as in the original frame:
// +0x00 proxy/link slot, +0x04 begin, +0x08 end, +0x0C capacity.
struct IntVecScratch {
    void*    proxy;
    int32_t* begin;
    int32_t* end;
    int32_t* cap;
};

// @name NMData::GraphEngineData::vfunc_0_off_4
// @class NMData::GraphEngineData
// @summary Collects entry keys into a sorted scratch vector, then writes a table value chosen by entry count and key collisions to out+0x20.
// @field NMData::GraphEngineData +0x08 void* field_0x08
// @field NMData::GraphEngineData +0x0C void* field_0x0c
void fn_004B5940(void* self, void* out, void* /*unused stack argument (ret 8)*/) {
    (void)&mem_00925134;  // metadata-only reference; the original range checks are omitted

    IntVecScratch tmp{};
    void* out_iter = nullptr;

    uint8_t** entries_first = lift_field<uint8_t**>(self, 0x08);
    uint8_t** entries_last  = lift_field<uint8_t**>(self, 0x0C);

    // Phase 1: insert each entry key (entry+0x20) into tmp at its lower_bound position.
    for (uint8_t** cur = entries_first; cur != entries_last; ++cur) {
        int32_t key = lift_field<int32_t>(*cur, 0x20);
        int32_t* pos = std::lower_bound(tmp.begin, tmp.end, key);
        ext_0059A140(&tmp, &out_iter, &tmp, pos, &key);
    }

    // Phase 2: seed value = table[(count - 1) % len], or table[0] when there are no entries.
    ptrdiff_t count = entries_last - entries_first;
    uint32_t idx = (count > 0)
        ? static_cast<uint32_t>(count - 1) % static_cast<uint32_t>(mem_00A372AC)
        : 0u;
    int32_t best = mem_00A372B0[idx];

    // If the seed is present in tmp, pick the first table value that is absent from tmp.
    int32_t* hit = std::lower_bound(tmp.begin, tmp.end, best);
    if (hit != tmp.end && !(best < *hit)) {
        for (int32_t i = 0; i < mem_00A372AC; ++i) {
            int32_t cand = mem_00A372B0[i];
            int32_t* p = std::lower_bound(tmp.begin, tmp.end, cand);
            if (p == tmp.end || cand < *p) {
                best = cand;
                break;
            }
        }
    }

    lift_field<int32_t>(out, 0x20) = best;

    // Release scratch buffer (vector dtor).
    if (tmp.begin != nullptr) {
        ext_006A5C5C(tmp.begin);
    }
}
} // namespace lift_004B5940
