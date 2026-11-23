// Lifted C++ translation unit: lifted/NMData/LookAtNode.cpp
#include "lift_compat.h"
extern "C" uint32_t __thiscall ext_00640390(void* arg, uint32_t value, uint32_t zero);
extern "C" uint32_t __thiscall ext_0058F650(void* self, uint32_t value);
extern "C" uint32_t mem_00A9F054;

// [0x00587DD0]
// @name NMData::LookAtNode::vfunc_22
// @class NMData::LookAtNode
// @summary Fetches a global value, resolves it through sub_00640390 using the first stack argument, and forwards the result to CollisionModelDataBase::vfunc_22 on this.
uint32_t __thiscall fn_00587DD0(void* self, uint32_t arg1) {
    uint32_t global = mem_00A9F054;
    uint32_t resolved = ext_00640390(reinterpret_cast<void*>(static_cast<uintptr_t>(arg1)), global, 0);
    return ext_0058F650(self, resolved);
}
