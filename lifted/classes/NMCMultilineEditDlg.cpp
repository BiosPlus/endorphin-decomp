// Lifted C++ translation unit: lifted/classes/NMCMultilineEditDlg.cpp
#include "lift_compat.h"

// [0x006B7D60] NMCMultilineEditDlg::vfunc_87 (40 bytes)
namespace lift_006B7D60 {
// MFC80 import slot (ord_781), called thiscall with one stack argument.
extern int mem_009244D4;

// @name NMCMultilineEditDlg::vfunc_87
// @class NMCMultilineEditDlg
// @summary Calls MFC80 ord_781 on the member at +0x74 with &+0x78, then forwards self to the virtual slot 0 of the object at +0x1a4 if set.
// @field NMCMultilineEditDlg +0x74 void* field_0x74
// @field NMCMultilineEditDlg +0x78 BYTE field_0x78
// @field NMCMultilineEditDlg +0x1a4 void* field_0x1a4
void fn_006B7D60(void* self) {
    using ThisArgFn = void (*)(void* thisp, void* arg);

    // ecx = self+0x74, push (self+0x78), call [mem_009244D4]
    void* member = lift_field<void*>(self, 0x74);
    void* arg = static_cast<void*>(&lift_field<uint8_t>(self, 0x78));
    auto importFn = reinterpret_cast<ThisArgFn>(static_cast<uintptr_t>(static_cast<uint32_t>(mem_009244D4)));
    importFn(member, arg);

    // if (self->field_0x1a4) { obj = ...; vtbl[0](obj, self); }
    void* obj = lift_field<void*>(self, 0x1a4);
    if (obj != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(obj);
        auto slot0 = reinterpret_cast<ThisArgFn>(vtbl[0]);
        slot0(obj, self);
    }
}
} // namespace lift_006B7D60
