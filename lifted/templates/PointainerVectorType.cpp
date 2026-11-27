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

// [0x0049F4E0] Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>, Properties::GetPropertySource>::vfunc_9 (88 bytes)
namespace lift_0049F4E0 {
// Known callee 0x0049F260: sub_0049F260 (114B, thiscall: ecx = this, 3 stack args, callee-cleans).
extern uint32_t ext_0049F260(uint32_t self, uint32_t arg1, uint32_t arg2, void* arg3);
// Known callee 0x00494FF0: initWithOneAndArg (__stdcall(arg1, arg2); calls ext_00661680 on arg1 with (1, arg2) and returns arg1.)
extern uint32_t ext_00494FF0(uint32_t arg1, uint32_t arg2);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern void* ext_006A6E9E(void* inptr, int32_t vfDelta, const void* srcType, const void* targetType, int32_t isReference);
// Type descriptors referenced as immediates by the RTDynamicCast call (.rdata).
extern char mem_00A2E2D8[];
extern char mem_00A35030[];

// @name Properties::PointainerVectorType::vfunc_9
// @class Properties::PointainerVectorType<PointainerWithUndo<UndoablePointainerVectorWithFind<NMData::ValuePtrData>>, Properties::GetPropertySource>
// @summary Dynamic-casts a6 to the type descriptor pair (0xA2E2D8 -> 0xA35030), passes the cast result with a3 and field +4 of a4 to sub_0049F260 on the value at *a2, then calls initWithOneAndArg(a1, that result); returns a1.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x04 uint32_t field_0x04
uint32_t __stdcall fn_0049F4E0(uint32_t a1, void* a2, uint32_t a3, void* a4, uint32_t a5, void* a6) {
    (void)a5;
    const uint32_t esi = lift_field<uint32_t>(a2, 0x00);
    const uint32_t edi = lift_field<uint32_t>(a4, 0x04);
    void* const casted = ext_006A6E9E(a6, 0, mem_00A2E2D8, mem_00A35030, 0);
    const uint32_t r = ext_0049F260(esi, a3, edi, casted);
    ext_00494FF0(a1, r);
    return a1;
}
} // namespace lift_0049F4E0
