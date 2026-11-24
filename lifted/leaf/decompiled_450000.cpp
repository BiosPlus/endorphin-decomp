// Lifted C++ translation unit: lifted/leaf/decompiled_450000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

// [0x00450A80] sub_00450A80 (8 bytes)
namespace lift_00450A80 {
extern void ext_0044F780(uint32_t arg);

// @name sub_00450A80
// @summary Auto-lifted identical-shape clone of 0x0043CB80 (call_MFC80_ord_1903_ret8).
namespace lift_0043CB80 {
// @name call_MFC80_ord_1903_ret8
// @summary Calls thunk_MFC80_ord_1903 and returns, cleaning 8 bytes of stack arguments.


extern void ext_0044F780(void);

extern void fn_00450A80(uint32_t arg1, uint32_t arg2) {
    (void)arg1;
    (void)arg2;
    ext_0044F780();
}
} // namespace lift_0043CB80
} // namespace lift_00450A80

// [0x0045E4A0] sub_0045E4A0 (14 bytes)
namespace lift_0045E4A0 {
// Thunk to MFC80!ord_6090 (IAT jump). Original call passes ecx and pushes 0.
extern void ext_006A5E72(void* self, int arg);

// @name CBase::forwardToMfcOrd6090
// @class CBase
// @summary Loads the pointer stored at +0x2D0 and forwards it, with a zero argument, to the MFC80 ord_6090 thunk.
// @field CBase +0x2D0 void* field_0x2D0
void fn_0045E4A0(void* self) {
    void* inner = lift_field<void*>(self, 0x2D0);
    ext_006A5E72(inner, 0);
}
} // namespace lift_0045E4A0

// [0x00452100] sub_00452100 (17 bytes)
namespace lift_00452100 {
extern void ext_00451CE0(DWORD a, DWORD b);

// @name Unknown::forwardField74
// @class Unknown
// @summary Forwards this object's +0x74 field and the single argument to sub_00451CE0.
// @field Unknown +0x74 DWORD field_0x74
void fn_00452100(void* self, DWORD arg) {
    DWORD field74 = lift_field<DWORD>(self, 0x74);
    ext_00451CE0(field74, arg);
}
} // namespace lift_00452100

// [0x00458C80] sub_00458C80 (22 bytes)
namespace lift_00458C80 {
// Callee thunks (IAT forwarders to MFC80).
extern void fn_006A60F4(void); // thunk_MFC80_ord_1187 (no-arg throw helper)
extern void fn_006A6304(DWORD hr); // thunk_MFC80_ord_1191 (HRESULT throw helper)

// @name ThrowIfFailedHResult
// @summary If hr == E_OUTOFMEMORY (0x8007000E) raise the MFC memory exception, then raise an OLE exception with hr.
void fn_00458C80(DWORD hr) {
    if (hr == 0x8007000Eu) {
        fn_006A60F4();
    }
    fn_006A6304(hr);
}
} // namespace lift_00458C80

// [0x00455CF0] sub_00455CF0 (25 bytes)
namespace lift_00455CF0 {
// Known callee 0x006A5EBA: thunk_MFC80_ord_709 (IAT jump thunk forwarding to MFC80!ord_709.)
extern void __fastcall ext_006A5EBA(void* self);
// Known callee 0x006A5ECC: thunk_MFC80_ord_501 (IAT jump thunk forwarding to MFC80!ord_501.)
extern void __fastcall ext_006A5ECC(void* self);

// @name Unknown::stackTempsCallMfcOrd501ThenOrd709
// @summary Saves the incoming this pointer, runs MFC80 ord_501 on a 0x54-byte stack temp, then MFC80 ord_709 on the saved pointer slot.
// @field none (no direct member offsets accessed; only stack temporaries are used)
void fn_00455CF0(void* ecx_in) {
    // push ecx: the incoming this pointer is spilled into a stack slot.
    void* saved_ecx = ecx_in;
    // sub esp, 0x54: 0x54-byte stack temporary object.
    alignas(8) uint8_t temp[0x54] = {};

    // lea ecx, [esp+4] ; call ord_501 -> this = temp object.
    ext_006A5ECC(temp);
    // lea ecx, [esp] ; call ord_709 -> this = address of the spilled slot.
    ext_006A5EBA(&saved_ecx);
    // add esp, 0x54 / ret: stack temporaries released on return.
}
} // namespace lift_00455CF0
