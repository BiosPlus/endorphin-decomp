// Lifted C++ translation unit: lifted/NMData/ValuePtrData.cpp
#include "lift_compat.h"
// Known callee 0x006A6E9E: thunk_MSVCR80___RTDynamicCast (IAT jump thunk forwarding to MSVCR80!__RTDynamicCast.)
// Signature: void* __RTDynamicCast(void* inptr, long VfDelta, void* SrcType, void* TargetType, int isReference)
extern "C" void* ext_006A6E9E(void* inptr, long vfDelta, const void* srcType, const void* targetType, int isReference);
// Known callee 0x0067A050: sub_0067A050 (ecx = a2, stack arg = pointer to self+0x50; returns eax).
extern "C" uint32_t ext_0067A050(uint32_t a2, void* subobject);

extern "C" uint32_t ext_0067A050(uint32_t a2, void* subobject);
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

// [0x00682CE0] NMData::ValuePtrData::vfunc_17 (85 bytes)
// @name NMData::ValuePtrData::vfunc_17
// @class NMData::ValuePtrData
// @summary If a1 == 0x280: returns 0x46 when the object at +0x28 reports vfunc slot 12 == 5; otherwise, when +0x64 is set and a3 is non-null, stores ext_0067A050(a2, self+0x50) into *a3. Returns a1 in all non-0x46 paths.
// @field NMData::ValuePtrData +0x28 void* field_0x28
// @field NMData::ValuePtrData +0x50 uint8_t field_0x50 (embedded sub-object; address only)
// @field NMData::ValuePtrData +0x64 uint32_t field_0x64
uint32_t fn_00682CE0(void* self, uint32_t a1, uint32_t a2, uint32_t* a3) {
    using VFn = uint32_t (*)(void*);

    if (a1 != 0x280) {
        return a1;
    }

    void* obj = lift_field<void*>(self, 0x28);
    if (obj != nullptr) {
        void** vtbl = lift_field<void**>(obj, 0);
        VFn fn = reinterpret_cast<VFn>(vtbl[0x30 / sizeof(void*)]);
        if (fn(obj) == 5) {
            return 0x46;
        }
    }

    if (lift_field<uint32_t>(self, 0x64) != 0 && a3 != nullptr) {
        void* subobject = static_cast<uint8_t*>(self) + 0x50;
        *a3 = ext_0067A050(a2, subobject);
    }

    return a1;
}
