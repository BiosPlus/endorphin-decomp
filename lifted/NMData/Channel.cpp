// Lifted C++ translation unit: lifted/NMData/Channel.cpp
#include "lift_compat.h"
#include <string>

// [0x00519EC0] NMData::Channel::vfunc_1 (209 bytes)
namespace lift_00519EC0 {
// Known callee 0x0063EFE0: sub_0063EFE0 (Searches a vector of item pointers at +0x3c for an item whose std::string at +0x04 matches the given C-string, returning it or a sentinel at 0x00B53A34.)
extern void* ext_0063EFE0(void* self, const char* name);
// Known callee 0x004275E0: assignVirtualString (Calls vtable[2] on obj to obtain a temporary std::string, assigns it to dst, and destroys the temporary.)
extern void ext_004275E0(void* dst, void* obj);
// Known callee 0x00519C00: StringFindInTable3_00519C00 (Compares a std::string against the 3 C-string table entries; returns the matching index (0..2), or 1 if none match.)
extern int ext_00519C00(const void* str);
extern int mem_00A9F838;
extern int mem_00A9FA6C;
extern int mem_00924FE8;
extern int mem_00924FF4;

// @name NMData::Channel::vfunc_1
// @class NMData::Channel
// @summary Calls vtable slot 3, looks up two names in the owner's item vector, copies the first match's string into this+0x04, and stores the string-table index of the second match at this+0x20 (skipped if the second lookup hits a sentinel).
// @field Channel +0x00 void* vtable
// @field Channel +0x04 std::string name
// @field Channel +0x20 int32_t tableIndex
void fn_00519EC0(void* self, void* owner, uint32_t unusedArg2) {
    // ret 8: the second stack argument is never read by the original code.
    (void)unusedArg2;

    // Virtual call on this through vtable slot 3 (offset +0x0c), no arguments.
    void** vtbl = *static_cast<void***>(self);
    reinterpret_cast<void (*)(void*)>(vtbl[3])(self);

    // Both names come from RDATA/.data pointer values, not from code.
    const char* nameA = reinterpret_cast<const char*>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9F838)));
    const char* nameB = reinterpret_cast<const char*>(
        static_cast<uintptr_t>(static_cast<uint32_t>(mem_00A9FA6C)));

    // this->+0x04 = copy of the string of the item matching nameA (result not checked).
    void* item = ext_0063EFE0(owner, nameA);
    ext_004275E0(static_cast<uint8_t*>(self) + 0x04, item);

    // Sentinel test on the lookup for nameB; any of these means "not found", so bail out.
    const uintptr_t hit = reinterpret_cast<uintptr_t>(ext_0063EFE0(owner, nameB));
    if (hit == 0x00B53A34u || hit == 0x00B53B30u || hit == 0x00B53AB0u ||
        hit == 0x00B53A70u || hit == 0x00B53AF0u) {
        return;
    }

    // mem_00924FE8/FF4 are the MSVCP std::string ctor/dtor import slots. The portable
    // std::string local below replaces those calls; only take the address (no read).
    (void)&mem_00924FE8;
    (void)&mem_00924FF4;

    // Found: build a temporary std::string from the item and classify it.
    std::string tmp;
    void* item2 = ext_0063EFE0(owner, nameB);
    ext_004275E0(&tmp, item2);
    lift_field<int32_t>(self, 0x20) = ext_00519C00(&tmp);
}
} // namespace lift_00519EC0
