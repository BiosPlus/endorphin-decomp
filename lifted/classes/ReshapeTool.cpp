// Lifted C++ translation unit: lifted/classes/ReshapeTool.cpp
#include "lift_compat.h"
#include <cstdint>

// [0x00544A10] ReshapeTool::vfunc_16 (37 bytes)
namespace lift_00544A10 {
// @name ReshapeTool::vfunc_16
// @class ReshapeTool
// @summary Calls vtable slot 32 (+0x80) on the object at this+0x88, then tail-calls vtable slot 16 (+0x40) on the object at this+0x9C with this = &this+0x9C and returns its result.
// @field ReshapeTool +0x88 void* field_0x88
// @field ReshapeTool +0x9C void* field_0x9C
void* __thiscall fn_00544A10(void* self) {
    void* first = *reinterpret_cast<void**>(static_cast<uint8_t*>(self) + 0x88);
    void** firstVtbl = *reinterpret_cast<void***>(first);
    using VFuncVoid = void(__thiscall*)(void*);
    reinterpret_cast<VFuncVoid>(firstVtbl[0x80 / sizeof(void*)])(first);

    uint8_t* fieldAddr = static_cast<uint8_t*>(self) + 0x9C;
    void* second = *reinterpret_cast<void**>(fieldAddr);
    void** secondVtbl = *reinterpret_cast<void***>(second);
    using VFuncRet = void*(__thiscall*)(void*);
    return reinterpret_cast<VFuncRet>(secondVtbl[0x40 / sizeof(void*)])(fieldAddr);
}
} // namespace lift_00544A10

// [0x00544A40]
namespace lift_00544A40 {
// @name ReshapeTool::vfunc_17
// @class ReshapeTool
// @summary Calls vtable slot 33 on the object at +0x88 and slot 29 on self, then tail-calls slot 17 of the embedded object at +0x9C.
// @field ReshapeTool +0x88 void* field_0x88
// @field ReshapeTool +0x9C void* field_0x9C



namespace {

using VoidThisFn = void (*)(void*);
using U32ThisFn = uint32_t (*)(void*);

// Returns the vtable pointer stored at the start of an object.
inline void** vtable_of(void* obj) {
    return *reinterpret_cast<void***>(obj);
}

}  // namespace

uint32_t ReshapeTool_vfunc_17(void* self) {
    auto* base = reinterpret_cast<unsigned char*>(self);

    // call [vtable(obj+0x88) + 0x84]  (slot 33), ecx = obj+0x88
    void* obj88 = *reinterpret_cast<void**>(base + 0x88);
    reinterpret_cast<VoidThisFn>(vtable_of(obj88)[33])(obj88);

    // call [vtable(self) + 0x74]  (slot 29), ecx = self
    reinterpret_cast<VoidThisFn>(vtable_of(self)[29])(self);

    // jmp [vtable(*(self+0x9C)) + 0x44]  (slot 17), ecx = self+0x9C
    void* sub9c = base + 0x9C;
    void* obj9c = *reinterpret_cast<void**>(base + 0x9C);
    return reinterpret_cast<U32ThisFn>(vtable_of(obj9c)[17])(sub9c);
}
} // namespace lift_00544A40
