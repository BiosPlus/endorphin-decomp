// Lifted C++ translation unit: lifted/templates/PointainerVectorType.cpp
#include "lift_compat.h"

// [0x00681B00]
namespace lift_00681B00 {
extern void ext_00661620(void* self, uint32_t zeroArg);

// @name Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVector<Interpreter>>, Properties::GetPropertySource>::vfunc_1
// @class Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVector<Interpreter>>, Properties::GetPropertySource>
// @summary Calls the base-class helper ext_00661620 on self with a zero argument and returns self (fluent thunk).
// Note: the first stack argument is treated as the receiver (the original code loads it into esi/ecx).
void* fn_00681B00(void* self, uint32_t a1, uint32_t a2) {
    (void)a1;
    (void)a2;
    ext_00661620(self, 0u);
    return self;
}
} // namespace lift_00681B00

// [0x0049EDF0] sub_0049EDF0 (100 bytes)
namespace lift_0049EDF0 {
extern intptr_t ext_006616B0(void* self);
extern void* ext_00527AF0(void* self);
extern void* ext_006A6E9E(void* inptr, intptr_t vfDelta, const void* srcType,
                              const void* targetType, int isReference);
extern uint32_t ext_0049CF60(void* self, uint32_t a1, uint32_t a2, uint32_t a3);
extern int mem_00A2E2D8;
extern int mem_00A35030;

static inline void* lift_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

static inline uint32_t lift_u32(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

// @name PointainerVectorType::vfunc_10
// @class Properties::PointainerVectorType
// @summary Resolves the vector-backed property pointer; if the object at a4 passes the
//          first check, dynamic-casts a4 and forwards the element to fn_0049CF60.
// @field Properties::PointainerVectorType +0x04 uint32_t field_0x04
// @field Properties::PointainerVectorType +0x08 uint32_t field_0x08
void fn_0049EDF0(void* a1, uint32_t a2, uint32_t a3, void* a4) {
    (void)a3;

    // esi = *(void**)a1
    void* esi = lift_ptr(lift_field<uint32_t>(a1, 0));
    // edi = a4 (also passed as ecx to the predicate)
    void* edi = a4;

    intptr_t al = ext_006616B0(edi);
    if ((al & 0xFF) == 0) {
        // Non-taken branch: edi = a4->field_0x04
        edi = lift_ptr(lift_field<uint32_t>(edi, 4));
    } else {
        uint32_t begin = lift_field<uint32_t>(esi, 4);
        if (begin == 0) {
            return;
        }
        uint32_t end = lift_field<uint32_t>(esi, 8);
        int32_t count = static_cast<int32_t>(end - begin) >> 2;
        if (count == 0) {
            return;
        }
        void* last = ext_00527AF0(esi);
        edi = lift_ptr(lift_field<uint32_t>(last, 0));
    }

    // Dynamic cast of a4 with the original type descriptors.
    void* cast = ext_006A6E9E(a4, 0, &mem_00A2E2D8, &mem_00A35030, 0);

    ext_0049CF60(esi, a2, lift_u32(edi), lift_u32(cast));
}
} // namespace lift_0049EDF0
