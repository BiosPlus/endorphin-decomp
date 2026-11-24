// Lifted C++ translation unit: lifted/classes/ReshapeTool.cpp
#include "lift_compat.h"

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
