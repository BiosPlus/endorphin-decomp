// Lifted C++ translation unit: lifted/NMData/DisabledCollisionPairList.cpp
#include "lift_compat.h"

// [0x0060A640]
namespace lift_0060A640 {
// @name NMData::DisabledCollisionPairList::vfunc_13
// @class NMData::DisabledCollisionPairList
// @summary Returns a property/member wrapper for DisabledCollisionPairList based on string key comparison
// @field NMData::DisabledCollisionPairList +0x10 uint32_t field_0x10
// @field NMData::DisabledCollisionPairList +0x20 uint32_t field_0x20

extern uint32_t mem_00924FC0;
extern uint32_t __cdecl ext_0060A520(uint32_t);
extern uint32_t __cdecl ext_004C1BF0(uint32_t);
extern void __thiscall ext_0055DA20(uint32_t, uint32_t);

uint32_t __thiscall fn_0060A640(uint32_t self, uint32_t out, uint32_t key) {
    using EqFn = uint8_t (__cdecl*)(uint32_t, uint32_t);
    uint8_t eq = reinterpret_cast<EqFn>(mem_00924FC0)(key, 0x00971FDCu);
    if (eq != 0) {
        uint32_t val = ext_0060A520(self + 0x10u);
        ext_0055DA20(out, val);
        return out;
    }
    uint32_t val = ext_004C1BF0(self + 0x20u);
    ext_0055DA20(out, val);
    return out;
}
} // namespace lift_0060A640

// [0x0060B550] NMData::DisabledCollisionPairList::vfunc_1_off_8 (195 bytes)
namespace lift_0060B550 {
// Known callee 0x00596660: eraseInt32Range (Validates self-pointer args, erases [first,last) from a 4-byte-element buffer by shifting the tail down, sets end, writes a 2-pointer result to out.)
extern void ext_00596660(void* self, void** out, void* a2, uintptr_t first, void* a4, uintptr_t last);
// Known callee 0x0060B460 (225B): sub_0060B460
extern void ext_0060B460(void* scratch, int32_t count);
// Known callee 0x004E8570 (200B): sub_004E8570
extern void ext_004E8570(void* sub18, uintptr_t* endSlot);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764.)
extern void ext_006A5C5C(void* p);
extern int mem_00925134;

// @name NMData::DisabledCollisionPairList::vfunc_1_off_8
// @class NMData::DisabledCollisionPairList
// @summary Queries a source object's vfunc slot 3 for a count, erases the [first,last) range via a helper, then releases the resulting end pointer if non-null.
// @field NMData::DisabledCollisionPairList +0x18 uint8_t field_0x18
void fn_0060B550(void* self, void* src) {
    // Locals (asm frame slots +0x1c/+0x20/+0x24) start zeroed.
    uintptr_t first = 0;
    uintptr_t last  = 0;
    uintptr_t end   = 0;
    void*     out[2] = {nullptr, nullptr};
    void*     scratch = nullptr;

    // src->vfunc[3]() returns a 32-bit count (thiscall on src).
    void** srcVtbl = *reinterpret_cast<void***>(src);
    using CountFn = int32_t (*)(void*);
    int32_t count = reinterpret_cast<CountFn>(srcVtbl[3])(src);

    // Range-order guards (first <= last, 'invalid parameter' abort) are
    // boilerplate and always pass with the zeroed locals, so they are omitted.

    (void)&mem_00925134; // _invalid_parameter_noinfo IAT slot (guard omitted)

    // Erase [first,last) from the buffer owned by the scratch object.
    ext_00596660(&scratch, out, &scratch, first, &scratch, last);

    ext_0060B460(&scratch, count);

    // Sub-object at this+0x18 is handed to the helper with the end slot.
    ext_004E8570(static_cast<uint8_t*>(self) + 0x18, &end);

    // Release the resulting pointer if present.
    if (end != 0) {
        ext_006A5C5C(reinterpret_cast<void*>(end));
    }
}
} // namespace lift_0060B550

// [0x0060B320]
namespace lift_0060B320 {
// @name NMData::DisabledCollisionPairList::vfunc_0_off_4
// @class NMData::DisabledCollisionPairList
// @summary Iterates over the internal pointer vector to invoke sub_0060B0F0 and sub_0060A240.
// @field NMData::DisabledCollisionPairList +0x10 uint32_t field_0x10
// @field NMData::DisabledCollisionPairList +0x14 uint32_t field_0x14


extern void (*mem_00925134)(void);
extern void ext_0060B0F0(uint32_t begin, uint32_t end, int32_t count, uint32_t val);
extern void ext_0060A240(uint32_t begin, uint32_t end, uint32_t val);
extern void ext_004E8570(void);
extern void ext_00596660(void* self, void** out, void* a2, int32_t* first, void* a4, int32_t* last);
extern void ext_0060B460(void);
extern void ext_006A5C5C(void);

void __thiscall fn_0060B320(void* self, uint32_t /*arg1*/, uint32_t /*arg2*/) {
    if (!self) {
        ext_004E8570();
        ext_00596660(nullptr, nullptr, nullptr, nullptr, nullptr, nullptr);
        ext_0060B460();
        ext_006A5C5C();
        return;
    }
    uint8_t* vec = static_cast<uint8_t*>(self) + 0xC;
    uint32_t local_c = 0;

    uint32_t edi = *reinterpret_cast<uint32_t*>(vec + 0x8);
    if (*reinterpret_cast<uint32_t*>(vec + 0x4) > edi) {
        mem_00925134();
    }
    uint32_t ebp = *reinterpret_cast<uint32_t*>(vec + 0x4);
    if (ebp > *reinterpret_cast<uint32_t*>(vec + 0x8)) {
        mem_00925134();
    }

    int32_t count = static_cast<int32_t>(edi - ebp) >> 2;
    ext_0060B0F0(ebp, edi, count, local_c);

    edi = *reinterpret_cast<uint32_t*>(vec + 0x8);
    local_c &= ~0xFFu;
    if (*reinterpret_cast<uint32_t*>(vec + 0x4) > edi) {
        mem_00925134();
    }
    ebp = *reinterpret_cast<uint32_t*>(vec + 0x4);
    if (ebp > *reinterpret_cast<uint32_t*>(vec + 0x8)) {
        mem_00925134();
    }

    ext_0060A240(ebp, edi, local_c);
}
} // namespace lift_0060B320
