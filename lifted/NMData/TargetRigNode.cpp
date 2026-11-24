// Lifted C++ translation unit: lifted/NMData/TargetRigNode.cpp
#include "lift_compat.h"
#include <string>

// [0x005AAB10] NMData::TargetRigNode::vfunc_59 (94 bytes)
namespace lift_005AAB10 {
// @name NMData::TargetRigNode::vfunc_59
// @class NMData::TargetRigNode
// @summary Auto-lifted identical-shape clone of 0x005AAAB0 (NMData::SourceRigNode::vfunc_59).
namespace lift_005AAAB0 {
extern void ext_005B18E0(void* self, std::string* out);
extern const char mem_009348D8[];

// @name NMData::SourceRigNode::vfunc_59
// @class NMData::SourceRigNode
// @summary Builds a std::string from the literal at 0x00934904 and forwards it with the target object to sub_005B18E0.
// The original ignores the incoming ecx and uses the single stack argument as the target object (ret 4).
void fn_005AAB10(void* /*ecx: overwritten in original*/, void* target) {
    std::string name(mem_009348D8);
    ext_005B18E0(target, &name);
}
} // namespace lift_005AAAB0
} // namespace lift_005AAB10

// [0x005ABFB0]
namespace lift_005ABFB0 {
// Known callee 0x006A5C62: thunk_MFC80_ord_762 (IAT jump thunk to MFC80!ord_762, used as operator new).
extern void* ext_006A5C62(std::size_t size);
// Known callee 0x005ABA70: base-class constructor (thiscall: this = new object, arg = outer object).
extern void ext_005ABA70(void* self, void* outer);

static void store_u32(void* base, std::size_t off, std::uint32_t value) {
    std::memcpy(static_cast<unsigned char*>(base) + off, &value, sizeof(value));
}

// @name NMData::TargetRigNode::vfunc_17_off_C
// @class NMData::TargetRigNode
// @summary Allocates a 0x194-byte TargetRigNode, runs the base constructor on the outer object, installs vtable pointers, and returns the new node (or null on allocation failure).
// @field NMData::TargetRigNode +0x000 void* field_0x000
// @field NMData::TargetRigNode +0x004 void* field_0x004
// @field NMData::TargetRigNode +0x008 void* field_0x008
// @field NMData::TargetRigNode +0x00C void* field_0x00C
// @field NMData::TargetRigNode +0x150 void* field_0x150
void* fn_005ABFB0(void* ecx) {
    void* node = ext_006A5C62(0x194);
    if (node == nullptr) {
        return nullptr;
    }

    void* outer = static_cast<unsigned char*>(ecx) - 0xC;
    ext_005ABA70(node, outer);

    store_u32(node, 0x000, 0x0093EE24u);
    store_u32(node, 0x004, 0x0093EDDCu);
    store_u32(node, 0x008, 0x0093ED9Cu);
    store_u32(node, 0x00C, 0x0093ED4Cu);
    store_u32(node, 0x150, 0x0093ED38u);

    return node;
}
} // namespace lift_005ABFB0
