// Lifted C++ translation unit: lifted/templates/MatrixTypeIterator.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00681ED0] Properties::PropertyIteratorTypes::MatrixTypeIterator<NM::Matrix4, 4>::vfunc_2 (125 bytes)
namespace lift_00681ED0 {
// Known callee 0x00681E50: DispatchSubcallByIndex (Switch on index 0..6: tail-dispatches to one of six sub-handlers (0..4, 6); index 5 and out-of-range return 0.)
extern uint32_t ext_00681E50(uint32_t index);
// Known callee 0x0055DA20: initDwordPair (Stores two stack-passed DWORDs into the object at ECX and returns that object pointer (callee pops 8 bytes).)
extern void ext_0055DA20(void* self, uint32_t a, uint32_t b);
// Known callee 0x00681B00: Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVector<Interpreter>>, Properties::GetPropertySource>::vfunc_1 (Calls the base-class helper ext_00661620 on self with a zero argument and returns self (fluent thunk).)
extern void* ext_00681B00(void* self, uint32_t a1, uint32_t a2);
extern const uint8_t mem_00681F64[12];
extern const uint32_t mem_00681F50[4];

// @name Properties::PropertyIteratorTypes::MatrixTypeIterator<NM::Matrix4, 4>::vfunc_2
// @class Properties::PropertyIteratorTypes::MatrixTypeIterator<NM::Matrix4, 4>
// @summary Looks up a sub-index from a3-0x1B8 via a 12-entry table, dispatches to 0x681E50, stores the pair into a1 and returns a1; out-of-range a3 forwards to the 0x681B00 thunk.
uint32_t fn_00681ED0(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    (void)self;
    // The original reads the DWORD at *a2 unconditionally, before the range check.
    const uint32_t base = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(a2));

    const uint32_t idx = a3 - 0x1B8u;
    if (idx > 0x0Bu) {
        // Out-of-range path: forward to the vfunc_1 thunk with (a1, a2); return a1.
        ext_00681B00(self, a1, a2);
        return a1;
    }

    // Table-driven selector in 0..3 (byte table at mem_00681F64, jump table at mem_00681F50).
    const uint32_t sel = mem_00681F64[idx];
    (void)mem_00681F50;

    const uint32_t r = ext_00681E50(4u);
    const uint32_t ptr = base + (sel << 4);

    ext_0055DA20(reinterpret_cast<void*>(static_cast<uintptr_t>(a1)), r, ptr);
    return a1;
}
} // namespace lift_00681ED0
