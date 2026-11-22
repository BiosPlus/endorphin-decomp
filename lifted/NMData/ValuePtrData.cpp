// Lifted C++ translation unit: lifted/NMData/ValuePtrData.cpp
#include "lift_compat.h"
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" void* ext_006A6E9E(void* inptr, long vfDelta, const void* srcType, const void* targetType, int isReference);

// [0x00682C20] NMData::ValuePtrData::vfunc_19 (70 bytes)
// @name NMData::ValuePtrData::vfunc_19
// @class NMData::ValuePtrData
// @summary If field +0x4C is set, calls its vtable slot 24 with &field+0x48, dynamic-casts the result; returns 0x67 if arg==0x67 else 0x66 on cast success, otherwise arg.
// @field NMData::ValuePtrData +0x48 uint8_t field_0x48 (embedded sub-object; address only, passed to virtual call)
// @field NMData::ValuePtrData +0x4C void* field_0x4c (object pointer; vtable dispatched)
uint32_t fn_00682C20(void* self, uint32_t arg) {
    void* obj = lift_field<void*>(self, 0x4C);
    if (obj == nullptr) {
        return arg;
    }

    void** vtbl = *reinterpret_cast<void***>(obj);
    void* sub = reinterpret_cast<uint8_t*>(self) + 0x48;
    using VCall = void* (*)(void* self, void* arg);
    void* result = reinterpret_cast<VCall>(vtbl[0x60 / sizeof(void*)])(obj, sub);

    void* cast = ext_006A6E9E(
        result,
        0L,
        reinterpret_cast<const void*>(static_cast<uintptr_t>(0xA2E2F8u)),
        reinterpret_cast<const void*>(static_cast<uintptr_t>(0xA2E2D8u)),
        0);
    if (cast == nullptr) {
        return arg;
    }
    return (arg == 0x67u) ? 0x67u : 0x66u;
}
