// Lifted C++ translation unit: lifted/NMData/UpVectorNode.cpp
#include "lift_compat.h"
// Callee: sub_00640390 (332B). Original ABI: ecx = first argument, two stack
// arguments pushed in order (global value, then 0); returns a value in eax.
extern "C" uint32_t ext_00640390(uint32_t ecx_arg, uint32_t stack_arg0, uint32_t stack_arg1);
// Callee: NMData::CollisionModelDataBase::vfunc_22 (29B). Original ABI: ecx = this,
// one stack argument; return value unused by the caller.
extern "C" void ext_0058F650(void* this_ptr, uint32_t value);
// Global dword at 0x00A9F37C (.data), holds 0x00986150.
extern "C" uint32_t mem_00A9F37C;

// [0x00587E80] NMData::UpVectorNode::vfunc_22 (32 bytes)
// @name NMData::UpVectorNode::vfunc_22
// @class NMData::UpVectorNode
// @summary Passes the global constant at mem_00A9F37C and the caller argument through ext_00640390, then forwards the result to CollisionModelDataBase::vfunc_22 on this.
void fn_00587E80(void* self, uint32_t arg) {
    const uint32_t global_value = mem_00A9F37C;
    const uint32_t result = ext_00640390(arg, global_value, 0);
    ext_0058F650(self, result);
}
