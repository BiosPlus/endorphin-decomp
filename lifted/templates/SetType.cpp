// Lifted C++ translation unit: lifted/templates/SetType.cpp
#include "lift_compat.h"

// [0x004BAF90] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_3 (208 bytes)
namespace lift_004BAF90 {
// @name Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_3
// @class Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>
// @summary Auto-lifted identical-shape clone of 0x004B4D90 (PointainerVectorType::vfunc_3).
namespace lift_004B4D90 {
void* __stdcall ext_004BA920(void* out_pair, DWORD elem);
    void __thiscall ext_00493D90(void* self);
    extern void (__cdecl* mem_00925134)();

// @name PointainerVectorType::vfunc_3
// @class Properties::PointainerVectorType
// @summary Iterates over a vector of pointers, transforms each element via ext_004B4C00, and invokes visitor vfunc_0 until it returns false.
// @field VectorContainer +0x04 uint32_t* begin
// @field VectorContainer +0x08 uint32_t* end
void __stdcall fn_004BAF90(void* arg1, void* arg2) {
    uint8_t* vec = *reinterpret_cast<uint8_t**>(arg1);
    uint32_t* it = lift_field<uint32_t*>(vec, 0x4);
    if (it > lift_field<uint32_t*>(vec, 0x8)) {
        mem_00925134();
    }

    while (true) {
        uint32_t* end = lift_field<uint32_t*>(vec, 0x8);
        if (lift_field<uint32_t*>(vec, 0x4) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }
        if (it >= lift_field<uint32_t*>(vec, 0x8)) {
            mem_00925134();
        }

        uint32_t pair_buf[2] = {0, 0};
        uint32_t* pair = reinterpret_cast<uint32_t*>(ext_004BA920(pair_buf, *it));

        void** vtable = *reinterpret_cast<void***>(arg2);
        typedef uint8_t (__thiscall* VisitorFn)(void*, uint32_t, uint32_t);
        VisitorFn visit = reinterpret_cast<VisitorFn>(vtable[0]);
        uint8_t cont = visit(arg2, pair[0], pair[1]);

        ext_00493D90(pair_buf);

        if (!cont) {
            break;
        }
        if (it >= lift_field<uint32_t*>(vec, 0x8)) {
            mem_00925134();
        }
        ++it;
    }
}
} // namespace lift_004B4D90
} // namespace lift_004BAF90

// [0x00500C50] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>::vfunc_3 (208 bytes)
namespace lift_00500C50 {
// @name Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>::vfunc_3
// @class Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>
// @summary Auto-lifted identical-shape clone of 0x004B4D90 (PointainerVectorType::vfunc_3).
namespace lift_004B4D90 {
void* __stdcall ext_005007C0(void* out_pair, DWORD elem);
    void __thiscall ext_00493D90(void* self);
    extern void (__cdecl* mem_00925134)();

// @name PointainerVectorType::vfunc_3
// @class Properties::PointainerVectorType
// @summary Iterates over a vector of pointers, transforms each element via ext_004B4C00, and invokes visitor vfunc_0 until it returns false.
// @field VectorContainer +0x04 uint32_t* begin
// @field VectorContainer +0x08 uint32_t* end
void __stdcall fn_00500C50(void* arg1, void* arg2) {
    uint8_t* vec = *reinterpret_cast<uint8_t**>(arg1);
    uint32_t* it = lift_field<uint32_t*>(vec, 0x4);
    if (it > lift_field<uint32_t*>(vec, 0x8)) {
        mem_00925134();
    }

    while (true) {
        uint32_t* end = lift_field<uint32_t*>(vec, 0x8);
        if (lift_field<uint32_t*>(vec, 0x4) > end) {
            mem_00925134();
        }
        if (it == end) {
            break;
        }
        if (it >= lift_field<uint32_t*>(vec, 0x8)) {
            mem_00925134();
        }

        uint32_t pair_buf[2] = {0, 0};
        uint32_t* pair = reinterpret_cast<uint32_t*>(ext_005007C0(pair_buf, *it));

        void** vtable = *reinterpret_cast<void***>(arg2);
        typedef uint8_t (__thiscall* VisitorFn)(void*, uint32_t, uint32_t);
        VisitorFn visit = reinterpret_cast<VisitorFn>(vtable[0]);
        uint8_t cont = visit(arg2, pair[0], pair[1]);

        ext_00493D90(pair_buf);

        if (!cont) {
            break;
        }
        if (it >= lift_field<uint32_t*>(vec, 0x8)) {
            mem_00925134();
        }
        ++it;
    }
}
} // namespace lift_004B4D90
} // namespace lift_00500C50

// [0x004BB060] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>::vfunc_10 (126 bytes)
namespace lift_004BB060 {
// Known callee 0x004BA440: AllocAndInitDynCast_004BA440 (Allocates a 0x28-byte object; if allocation succeeds, initializes it via ext_004BA0D0 with (self, a1, a2, a3), then passes the result and the global value from ext_00665870 to ext_00666670 and returns its result.)
extern uint32_t ext_004BA440(void* self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x006616B0: sub_006616B0 (Auto-lifted identical-shape clone of 0x00493E00 (forwardVtable0B4_viaFirstField).)
extern intptr_t ext_006616B0(void* self);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern void* ext_006A6E9E(void* inptr, ptrdiff_t vfDelta, const void* srcType, const void* targetType, int isReference);
// CRT _invalid_parameter_noinfo function pointer (only reached on the bad-range path).
extern uint32_t mem_00925134;

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

static void invalid_parameter_noinfo() {
    reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
}

// @name Properties::SetType::vfunc_10
// @class Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>
// @summary If ext_006616B0(arg3) is true, selects the last element of the PointainerSet referenced by *arg1 (or the early-out value when empty); otherwise selects arg3->+0x04. Then dynamic-casts arg4 and forwards to ext_004BA440.
// @field Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent> +0x00 void* field_0x00
// @field PointainerSet<NMData::MaterialInteraction> +0x04 uint32_t field_0x04
// @field PointainerSet<NMData::MaterialInteraction> +0x08 uint32_t field_0x08
// @field Properties::PropertyIteratorType +0x04 uint32_t field_0x04
uint32_t fn_004BB060(void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    void* const self = lift_field<void*>(arg1, 0);
    uint32_t esi;

    if (static_cast<uint8_t>(ext_006616B0(as_ptr(arg3))) != 0) {
        const uint32_t begin = lift_field<uint32_t>(self, 4);
        if (begin == 0) {
            return begin;
        }
        const uint32_t end = lift_field<uint32_t>(self, 8);
        if ((static_cast<int32_t>(end - begin) >> 2) == 0) {
            return begin;
        }
        if (!(begin <= end)) {
            invalid_parameter_noinfo();
        }
        if (!(end > begin)) {
            invalid_parameter_noinfo();
        }
        const uint32_t back = end - 4;
        if (!(back < end)) {
            invalid_parameter_noinfo();
        }
        esi = *reinterpret_cast<uint32_t*>(as_ptr(back));
    } else {
        esi = lift_field<uint32_t>(as_ptr(arg3), 4);
    }

    const uintptr_t cast = reinterpret_cast<uintptr_t>(
        ext_006A6E9E(as_ptr(arg4), 0, as_ptr(0x00A2E2D8u), as_ptr(0x00A393E8u), 0));
    return ext_004BA440(self, arg2, esi, static_cast<uint32_t>(cast));
}
} // namespace lift_004BB060

// [0x004BB0E0] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialPair>>, Properties::GetPropertySource>::vfunc_10 (126 bytes)
namespace lift_004BB0E0 {
// @name Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialPair>>, Properties::GetPropertySource>::vfunc_10
// @class Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialPair>>, Properties::GetPropertySource>
// @summary Auto-lifted identical-shape clone of 0x004BB060 (Properties::SetType::vfunc_10).
namespace lift_004BB060 {
// Known callee 0x004BA440: AllocAndInitDynCast_004BA440 (Allocates a 0x28-byte object; if allocation succeeds, initializes it via ext_004BA0D0 with (self, a1, a2, a3), then passes the result and the global value from ext_00665870 to ext_00666670 and returns its result.)
extern uint32_t ext_004B77E0(void* self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x006616B0: sub_006616B0 (Auto-lifted identical-shape clone of 0x00493E00 (forwardVtable0B4_viaFirstField).)
extern intptr_t ext_006616B0(void* self);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern void* ext_006A6E9E(void* inptr, ptrdiff_t vfDelta, const void* srcType, const void* targetType, int isReference);
// CRT _invalid_parameter_noinfo function pointer (only reached on the bad-range path).
extern uint32_t mem_00925134;

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

static void invalid_parameter_noinfo() {
    reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
}

// @name Properties::SetType::vfunc_10
// @class Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>
// @summary If ext_006616B0(arg3) is true, selects the last element of the PointainerSet referenced by *arg1 (or the early-out value when empty); otherwise selects arg3->+0x04. Then dynamic-casts arg4 and forwards to ext_004BA440.
// @field Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent> +0x00 void* field_0x00
// @field PointainerSet<NMData::MaterialInteraction> +0x04 uint32_t field_0x04
// @field PointainerSet<NMData::MaterialInteraction> +0x08 uint32_t field_0x08
// @field Properties::PropertyIteratorType +0x04 uint32_t field_0x04
uint32_t fn_004BB0E0(void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    void* const self = lift_field<void*>(arg1, 0);
    uint32_t esi;

    if (static_cast<uint8_t>(ext_006616B0(as_ptr(arg3))) != 0) {
        const uint32_t begin = lift_field<uint32_t>(self, 4);
        if (begin == 0) {
            return begin;
        }
        const uint32_t end = lift_field<uint32_t>(self, 8);
        if ((static_cast<int32_t>(end - begin) >> 2) == 0) {
            return begin;
        }
        if (!(begin <= end)) {
            invalid_parameter_noinfo();
        }
        if (!(end > begin)) {
            invalid_parameter_noinfo();
        }
        const uint32_t back = end - 4;
        if (!(back < end)) {
            invalid_parameter_noinfo();
        }
        esi = *reinterpret_cast<uint32_t*>(as_ptr(back));
    } else {
        esi = lift_field<uint32_t>(as_ptr(arg3), 4);
    }

    const uintptr_t cast = reinterpret_cast<uintptr_t>(
        ext_006A6E9E(as_ptr(arg4), 0, as_ptr(0x00A2E2D8u), as_ptr(0xA39448u), 0));
    return ext_004B77E0(self, arg2, esi, static_cast<uint32_t>(cast));
}
} // namespace lift_004BB060
} // namespace lift_004BB0E0

// [0x00500D20] Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>::vfunc_10 (126 bytes)
namespace lift_00500D20 {
// @name Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>::vfunc_10
// @class Properties::SetType<PointainerWithUndo<PointainerSet<NMData::ValuePtrData>>, Properties::GetTerminalParent>
// @summary Auto-lifted identical-shape clone of 0x004BB060 (Properties::SetType::vfunc_10).
namespace lift_004BB060 {
// Known callee 0x004BA440: AllocAndInitDynCast_004BA440 (Allocates a 0x28-byte object; if allocation succeeds, initializes it via ext_004BA0D0 with (self, a1, a2, a3), then passes the result and the global value from ext_00665870 to ext_00666670 and returns its result.)
extern uint32_t ext_004FDF80(void* self, uint32_t a1, uint32_t a2, uint32_t a3);
// Known callee 0x006616B0: sub_006616B0 (Auto-lifted identical-shape clone of 0x00493E00 (forwardVtable0B4_viaFirstField).)
extern intptr_t ext_006616B0(void* self);
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
extern void* ext_006A6E9E(void* inptr, ptrdiff_t vfDelta, const void* srcType, const void* targetType, int isReference);
// CRT _invalid_parameter_noinfo function pointer (only reached on the bad-range path).
extern uint32_t mem_00925134;

static inline void* as_ptr(uint32_t v) {
    return reinterpret_cast<void*>(static_cast<uintptr_t>(v));
}

static void invalid_parameter_noinfo() {
    reinterpret_cast<void (*)()>(static_cast<uintptr_t>(mem_00925134))();
}

// @name Properties::SetType::vfunc_10
// @class Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent>
// @summary If ext_006616B0(arg3) is true, selects the last element of the PointainerSet referenced by *arg1 (or the early-out value when empty); otherwise selects arg3->+0x04. Then dynamic-casts arg4 and forwards to ext_004BA440.
// @field Properties::SetType<PointainerWithUndo<PointainerSet<NMData::MaterialInteraction>>, Properties::GetTerminalParent> +0x00 void* field_0x00
// @field PointainerSet<NMData::MaterialInteraction> +0x04 uint32_t field_0x04
// @field PointainerSet<NMData::MaterialInteraction> +0x08 uint32_t field_0x08
// @field Properties::PropertyIteratorType +0x04 uint32_t field_0x04
uint32_t fn_00500D20(void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
    void* const self = lift_field<void*>(arg1, 0);
    uint32_t esi;

    if (static_cast<uint8_t>(ext_006616B0(as_ptr(arg3))) != 0) {
        const uint32_t begin = lift_field<uint32_t>(self, 4);
        if (begin == 0) {
            return begin;
        }
        const uint32_t end = lift_field<uint32_t>(self, 8);
        if ((static_cast<int32_t>(end - begin) >> 2) == 0) {
            return begin;
        }
        if (!(begin <= end)) {
            invalid_parameter_noinfo();
        }
        if (!(end > begin)) {
            invalid_parameter_noinfo();
        }
        const uint32_t back = end - 4;
        if (!(back < end)) {
            invalid_parameter_noinfo();
        }
        esi = *reinterpret_cast<uint32_t*>(as_ptr(back));
    } else {
        esi = lift_field<uint32_t>(as_ptr(arg3), 4);
    }

    const uintptr_t cast = reinterpret_cast<uintptr_t>(
        ext_006A6E9E(as_ptr(arg4), 0, as_ptr(0x00A2E2D8u), as_ptr(0xA40728u), 0));
    return ext_004FDF80(self, arg2, esi, static_cast<uint32_t>(cast));
}
} // namespace lift_004BB060
} // namespace lift_00500D20
