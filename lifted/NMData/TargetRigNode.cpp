// Lifted C++ translation unit: lifted/NMData/TargetRigNode.cpp
#include "lift_compat.h"
#include <string>
#include <cstdint>

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

// [0x005AAB10] NMData::TargetRigNode::vfunc_59 (94 bytes)
namespace lift_005AAB10 {
// @name NMData::TargetRigNode::vfunc_59
// @class NMData::TargetRigNode
// @summary Auto-lifted identical-shape clone of 0x005AAAB0 (NMData::SourceRigNode::vfunc_59).
namespace lift_005AAAB0 {
// Known callee 0x005B18E0: AssignStringAndSetFlag (copy-assigns the std::string argument into this+0x28 and sets the byte flag at this+0x04 to 1).
extern void __thiscall ext_005B18E0(void* self, const std::string& src);
// Import slot 0x00924FE4 holds MSVCP80 std::basic_string<char>::basic_string(const char*); read via its address below.
extern int mem_00924FE4;
// Import slot 0x00924FF4 holds MSVCP80 std::basic_string<char>::~basic_string(); read via its address below.
extern int mem_00924FF4;

namespace lift_005AAAB0 {
// @name NMData::SourceRigNode::vfunc_59
// @class NMData::SourceRigNode
// @summary Builds a temporary std::string from a fixed .rdata literal and copy-assigns it into the target object via AssignStringAndSetFlag; self is read from the first stack argument.
void __stdcall fn_005AAB10(void* self) {
    using StrCtorFn = void(__thiscall*)(void* this_str, const char* s);
    using StrDtorFn = void(__thiscall*)(void* this_str);

    // Original: 28-byte std::string temporary at [esp] (SEH frame setup/teardown omitted; C++ unwinding covers it).
    alignas(8) unsigned char tmp[0x1C];

    // Original: std::string tmp("<literal @ 0x00934904>") via import slot 0x924FE4.
    const auto str_ctor = *reinterpret_cast<StrCtorFn*>(static_cast<uintptr_t>(0x00924FE4));
    str_ctor(tmp, reinterpret_cast<const char*>(static_cast<uintptr_t>(0x9348D8)));

    // Original: ext_005B18E0(self /*ecx*/, &tmp /*pushed*/).
    ext_005B18E0(self, *reinterpret_cast<const std::string*>(tmp));

    // Original: ~std::string(&tmp) via import slot 0x924FF4.
    const auto str_dtor = *reinterpret_cast<StrDtorFn*>(static_cast<uintptr_t>(0x00924FF4));
    str_dtor(tmp);
}
} // namespace lift_005AAAB0
} // namespace lift_005AAAB0
} // namespace lift_005AAB10
