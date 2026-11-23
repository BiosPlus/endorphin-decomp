// Lifted C++ translation unit: lifted/NMData/SourceRigNode.cpp
#include "lift_compat.h"
#include <string>

// [0x005AAAB0] NMData::SourceRigNode::vfunc_59 (94 bytes)
namespace lift_005AAAB0 {
extern void ext_005B18E0(void* self, std::string* out);
extern const char mem_00934904[];

// @name NMData::SourceRigNode::vfunc_59
// @class NMData::SourceRigNode
// @summary Builds a std::string from the literal at 0x00934904 and forwards it with the target object to sub_005B18E0.
// The original ignores the incoming ecx and uses the single stack argument as the target object (ret 4).
void fn_005AAAB0(void* /*ecx: overwritten in original*/, void* target) {
    std::string name(mem_00934904);
    ext_005B18E0(target, &name);
}
} // namespace lift_005AAAB0
