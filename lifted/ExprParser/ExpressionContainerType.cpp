// Lifted C++ translation unit: lifted/ExprParser/ExpressionContainerType.cpp
#include "lift_compat.h"

// [0x00699100]
// @name ExprParser::ExpressionContainerType::vfunc_31
// @class ExprParser::ExpressionContainerType
// @summary Gets object via vfunc_24, dynamic_casts it, and invokes vfunc_1 if non-null
#include "lift_compat.h"

extern "C" void* __cdecl ext_006A6E9E(void* ptr, int32_t vfDelta, void* srcType, void* dstType, int32_t isReference);

void __thiscall fn_00699100(void* self, void* arg0, void* arg1) {
    void** vtable = *reinterpret_cast<void***>(self);
    using VFunc24 = void*(__thiscall*)(void*, void*);
    void* obj = reinterpret_cast<VFunc24>(vtable[0x60 / 4])(self, arg0);

    void* casted = ext_006A6E9E(
        obj,
        0,
        reinterpret_cast<void*>(0x00A2E2F8),
        reinterpret_cast<void*>(0x00A2E1FC),
        0
    );
    if (casted) {
        void** casted_vt = *reinterpret_cast<void***>(casted);
        using VFunc1 = void(__thiscall*)(void*, void*);
        reinterpret_cast<VFunc1>(casted_vt[1])(casted, arg1);
    }
}

// [0x00699140]
// @name ExprParser::ExpressionContainerType::vfunc_32
// @class ExprParser::ExpressionContainerType
// @summary Gets object via vfunc_24, dynamic_casts it, and invokes vfunc_3 if non-null
#include "lift_compat.h"

extern "C" void* __cdecl ext_006A6E9E(void* ptr, int32_t vfDelta, void* srcType, void* dstType, int32_t isReference);

void __thiscall fn_00699140(void* self, void* arg0, void* arg1) {
    void** vtable = *reinterpret_cast<void***>(self);
    using VFunc24 = void*(__thiscall*)(void*, void*);
    void* obj = reinterpret_cast<VFunc24>(vtable[0x60 / 4])(self, arg0);

    void* casted = ext_006A6E9E(
        obj,
        0,
        reinterpret_cast<void*>(0x00A2E2F8),
        reinterpret_cast<void*>(0x00A2E1FC),
        0
    );
    if (casted) {
        void** casted_vt = *reinterpret_cast<void***>(casted);
        using VFunc3 = void(__thiscall*)(void*, void*);
        reinterpret_cast<VFunc3>(casted_vt[3])(casted, arg1);
    }
}
