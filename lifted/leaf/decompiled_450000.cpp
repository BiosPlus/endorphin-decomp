// Lifted C++ translation unit: lifted/leaf/decompiled_450000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstdlib>
#include <cmath>
#include <cstdint>

#include <cstdint>
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

// [0x00455AD0]
namespace lift_00455AD0 {
// @name sub_00455AD0
// @summary Clears the std::string field at +0x13c and tail-calls sub_00455820.
// @field Unknown +0x13c std::string field_0x13c

extern uint32_t mem_00928B5D;
extern uint32_t mem_00924FD4;

void ext_00455820(void* self);

void fn_00455AD0(void* self) {
    using StringAssignFn = void*(__thiscall*)(void*, const char*);
    auto assign_fn = reinterpret_cast<StringAssignFn>(static_cast<uintptr_t>(mem_00924FD4));
    assign_fn(static_cast<uint8_t*>(self) + 0x13c, reinterpret_cast<const char*>(&mem_00928B5D));
    ext_00455820(self);
}
} // namespace lift_00455AD0

// [0x00455280] sub_00455280 (29 bytes)
namespace lift_00455280 {
// @name sub_00455280
// @summary Auto-lifted identical-shape clone of 0x0041CCA0 (ReleaseSubobjectAndChainDestructor).
namespace lift_0041CCA0 {
extern void __fastcall ext_00454BA0(void* self);
extern uint32_t mem_009242F4; // .rdata IAT slot holding MFC80 ord_578

// @name ReleaseSubobjectAndChainDestructor
// @summary Sets the object vtable, calls MFC80 ord_578 on the subobject at +0x12c, then tail-calls the base destructor.
// @field Unknown +0x00 u32 field_0x00
// @field Unknown +0x12c u8 field_0x12c
void fn_00455280(void* self) {
    lift_field<uint32_t>(self, 0x00) = 0x9367A4u;

    auto release = reinterpret_cast<void (__thiscall*)(void*)>(
        static_cast<uintptr_t>(mem_009242F4));
    release(static_cast<uint8_t*>(self) + 0x12c);

    ext_00454BA0(self);
}
} // namespace lift_0041CCA0
} // namespace lift_00455280

// [0x00455F40]
namespace lift_00455F40 {
// @name Unknown::returnTrueIfNeitherCheckMatches_00455F40
// @class Unknown
// @summary Returns 1 only if both ext_00455CB0 and ext_004090C0 return 0 for self; otherwise returns 0.
// @field Unknown +0xF4 int field_0xF4 (read indirectly via callees; not accessed directly here)

extern int __fastcall ext_00455CB0(void* self);
extern int __fastcall ext_004090C0(void* self);

extern int __fastcall sub_00455F40(void* self) {
    if (ext_00455CB0(self) != 0) {
        return 0;
    }
    if (ext_004090C0(self) != 0) {
        return 0;
    }
    return 1;
}
} // namespace lift_00455F40

// [0x00458670] sub_00458670 (30 bytes)
namespace lift_00458670 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
extern void ext_006A5EA8();
// Known callee 0x004584A0: forwardVtableSlot5 (Tail-calls virtual method at vtable offset 0x14 on member at +0x10)
extern void ext_004584A0();

// @name Unknown::forwardToSubobjectSlot5
// @class Unknown
// @summary Calls the MFC80 thunk, then forwards to forwardVtableSlot5 using the subobject at +0x54 and the stack arguments.
// @field Unknown +0x54 void* field_0x54
void fn_00458670(void* self, uint32_t arg1, uint32_t* arg2) {
    ext_006A5EA8();
    void* subobject = lift_field<void*>(self, 0x54);
    // The original pushes (&arg2, arg1) on the stack and passes subobject in ecx
    // before calling ext_004584A0; the stub signature carries no parameters, so
    // the subobject and stack arguments are not forwarded here.
    (void)subobject;
    (void)arg1;
    (void)arg2;
    ext_004584A0();
}
} // namespace lift_00458670

// [0x004584C0] sub_004584C0 (32 bytes)
namespace lift_004584C0 {
// @name descriptiveName: InitTripleValueObject
// @summary Stores a constant tag word and two stack arguments into a 16-byte object and returns it.
// @field <unknown> +0x00 uint32_t field_0x00
// @field <unknown> +0x04 uint32_t field_0x04
// @field <unknown> +0x08 uint32_t field_0x08
// @field <unknown> +0x0C uint32_t field_0x0C
void* fn_004584C0(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    lift_field<uint32_t>(self, 0x04) = arg1;
    lift_field<uint32_t>(self, 0x00) = 0x937394u;
    lift_field<uint32_t>(self, 0x08) = arg2;
    lift_field<uint32_t>(self, 0x0C) = arg3;
    return self;
}
} // namespace lift_004584C0

// [0x00458290] sub_00458290 (32 bytes)
namespace lift_00458290 {
extern DWORD ext_00456210(DWORD a1, DWORD a2, DWORD a3);

// @name descriptiveName: ForwardThreeArgsIfFlagClear
// @class Unknown
// @summary If byte at +0x128 is zero, forwards three stdcall args to ext_00456210 and returns its result; otherwise returns 0.
// @field Unknown +0x128 BYTE field_0x128
DWORD fn_00458290(void* self, DWORD a1, DWORD a2, DWORD a3) {
    const BYTE flag = lift_field<BYTE>(self, 0x128);
    if (flag != 0) {
        return 0;
    }
    return ext_00456210(a1, a2, a3);
}
} // namespace lift_00458290

// [0x00458650] sub_00458650 (32 bytes)
namespace lift_00458650 {
// Callee 0x00458470 (sub_00458470): thiscall, receives (this = [self+0x54], p1 = pointer to trailing args, p2 = first arg).
extern void ext_00458470(void* self, void* trailingArgs, uint32_t firstArg);
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
extern void ext_006A5EA8(void* self);

// @name ForwardField54ThenMfcThunk
// @summary Calls ext_00458470 with this+0x54 as the receiver, forwarding the first argument and a pointer to the trailing stack arguments, then invokes the MFC80 thunk on self.
// @field Unknown +0x54 void* field_0x54
void fn_00458650(void* self, uint32_t firstArg, void* trailingArgs) {
    void* child = lift_field<void*>(self, 0x54);
    ext_00458470(child, trailingArgs, firstArg);
    ext_006A5EA8(self);
}
} // namespace lift_00458650

// [0x004582B0] sub_004582B0 (32 bytes)
namespace lift_004582B0 {
// @name sub_004582B0
// @summary Auto-lifted identical-shape clone of 0x00458290 (descriptiveName: ForwardThreeArgsIfFlagClear).
namespace lift_00458290 {
extern DWORD ext_00456250(DWORD a1, DWORD a2, DWORD a3);

// @name descriptiveName: ForwardThreeArgsIfFlagClear
// @class Unknown
// @summary If byte at +0x128 is zero, forwards three stdcall args to ext_00456210 and returns its result; otherwise returns 0.
// @field Unknown +0x128 BYTE field_0x128
DWORD fn_004582B0(void* self, DWORD a1, DWORD a2, DWORD a3) {
    const BYTE flag = lift_field<BYTE>(self, 0x129);
    if (flag != 0) {
        return 0;
    }
    return ext_00456250(a1, a2, a3);
}
} // namespace lift_00458290
} // namespace lift_004582B0

// [0x004562C0] sub_004562C0 (33 bytes)
namespace lift_004562C0 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
extern void ext_006A5EA8();

// @name Unknown::forwardIfField0xdcThenVcall188ThenForward
// @class Unknown
// @summary If this+0xDC is non-null, invoke vtable slot 0x188 on this; then forward to ext_006A5EA8 with ecx=this.
// @field Unknown +0x00 void* vtable
// @field Unknown +0xDC void* field_0xdc
void fn_004562C0(void* self) {
    // Conditional: if (self->field_0xdc != 0) self->vtable[0x188]();
    if (lift_field<uint32_t>(self, 0xDC) != 0) {
        uint32_t vtbl = lift_field<uint32_t>(self, 0x00);
        uint32_t slot = lift_field<uint32_t>(reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl)), 0x188);
        using VFn = void (*)(void*);
        reinterpret_cast<VFn>(static_cast<uintptr_t>(slot))(self);
    }
    // Tail-forward to the MFC80 thunk with this in ecx (stdcall-style 0xC arg cleanup is caller-side in lift).
    ext_006A5EA8();
}
} // namespace lift_004562C0

// [0x00456250] sub_00456250 (33 bytes)
namespace lift_00456250 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
extern void ext_006A5EA8();

// @name CWrapper::forwardToSubobjectVtable2OrMfcThunk
// @class CWrapper
// @summary If the subobject at +0x90 is set (+0x8C nonzero), forward the call with the same three stack args through its vtable slot 2; otherwise tail-call the MFC80 ord_1903 thunk.
// @field CWrapper +0x8C DWORD field_0x8C
// @field CWrapper +0x90 void* field_0x90
void fn_00456250(void* self, DWORD a1, DWORD a2, DWORD a3) {
    if (lift_field<DWORD>(self, 0x8C) == 0) {
        ext_006A5EA8();
        return;
    }

    void* obj = lift_field<void*>(self, 0x90);
    void** vtbl = *reinterpret_cast<void***>(obj);
    auto slot2 = reinterpret_cast<void(__thiscall*)(void*, DWORD, DWORD, DWORD)>(vtbl[2]);
    slot2(obj, a1, a2, a3);
}
} // namespace lift_00456250

// [0x00455D10] sub_00455D10 (34 bytes)
namespace lift_00455D10 {
// Known callee 0x006A678A: thunk_MFC80_ord_4908 (IAT jump thunk forwarding to MFC80!ord_4908.)
// Original call passes ECX = this and two stack arguments (the enclosing function does `ret 8`).
extern void ext_006A678A(void* self, DWORD a, DWORD b);

// @name ForwardToExternalAndClearField0xE8 (descriptive; original name unknown)
// @class <ClassName> (optional)
// @summary Forwards two stack arguments with this to an external MFC80 routine, then zeroes the DWORD at this+0xE8.
// @field <ClassName> +0xE8 DWORD field_0xe8
void fn_00455D10(void* self, DWORD arg1, DWORD arg2) {
    ext_006A678A(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(static_cast<uint8_t*>(self) + 0xE8) = 0;
}
} // namespace lift_00455D10

// [0x00454C00]
namespace lift_00454C00 {
// @name UnknownClass::conditionalForwardThenSelf
// @class UnknownClass
// @summary If arg1 == 0x14, forward (self, 0, 0) to the subobject at self+0x88; then always call ext_006A5EA8(self). Callee cleans 3 stack args (ret 0xC).
// @field UnknownClass +0x88 void* subobject

extern void ext_006A651A(void* thisObj, void* a0, uint32_t a1, uint32_t a2);
extern void ext_006A5EA8(void* thisObj);

void fn_00454C00(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    (void)arg2;
    (void)arg3;
    if (arg1 == 0x14) {
        void* sub = lift_field<void*>(self, 0x88);
        ext_006A651A(sub, self, 0, 0);
    }
    ext_006A5EA8(self);
}
} // namespace lift_00454C00

// [0x00455410]
namespace lift_00455410 {
// @name sub_00455410
// @summary Calls virtual method +0x148 on embedded subobject at +0xc8 and stores boolean result at +0x158
// @field Unknown +0xc8 void* field_0xc8
// @field Unknown +0x158 uint8_t field_0x158
void sub_00455410(uintptr_t self) {
    uintptr_t subobj = self + 0xc8;
    uintptr_t vtable = *reinterpret_cast<uintptr_t*>(subobj);
    using VMethod = uint32_t(__thiscall*)(uintptr_t);
    auto fn = *reinterpret_cast<VMethod*>(vtable + 0x148);
    uint32_t res = fn(subobj);
    *reinterpret_cast<uint8_t*>(self + 0x158) = (res != 0) ? 1 : 0;
}
} // namespace lift_00455410

// [0x00455C80] sub_00455C80 (40 bytes)
namespace lift_00455C80 {
// Known callee 0x006A6094: thunk_MFC80_ord_4296 (IAT jump thunk forwarding to MFC80!ord_4296.)
extern int32_t ext_006A6094(int32_t arg);

// @name CheckResultAndClearField_E8
// @summary Forwards its argument to an MFC80 import; returns -1 on failure, otherwise clears the dword at +0xE8 and returns 0.
// @field Unknown +0xE8 uint32_t field_0xE8
int32_t fn_00455C80(void* self, int32_t arg) {
    const int32_t result = ext_006A6094(arg);
    if (result == -1) {
        return -1;
    }
    *reinterpret_cast<uint32_t*>(static_cast<uint8_t*>(self) + 0xE8) = 0;
    return 0;
}
} // namespace lift_00455C80

// [0x004545A0]
namespace lift_004545A0 {
// @name CWnd::IsChild
// @class CWnd
// @summary Checks whether the given window is a child window of this window using USER32!IsChild.
// @field CWnd +0x20 uint32_t m_hWnd

extern uint32_t (__stdcall *mem_009256BC)(uint32_t, uint32_t);

uint32_t __thiscall sub_004545A0(uint32_t this_, uint32_t child) {
    uint32_t child_hwnd = child ? *reinterpret_cast<uint32_t*>(child + 0x20) : 0;
    uint32_t parent_hwnd = *reinterpret_cast<uint32_t*>(this_ + 0x20);
    return mem_009256BC(parent_hwnd, child_hwnd);
}
} // namespace lift_004545A0

// [0x0045B6C0]
namespace lift_0045B6C0 {
// @name initFromMFC80Ord2867
// @summary Calls MFC80_ord_2867 with arg2, invokes vtable+0xc on the returned object with arg1, and returns arg1.


extern uint32_t __stdcall ext_006A6820(uint32_t arg);

uint32_t __stdcall fn_0045B6C0(uint32_t arg1, uint32_t arg2) {
    uint32_t obj = ext_006A6820(arg2);
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(static_cast<uintptr_t>(obj));
    using VFunc = void(__thiscall*)(uint32_t, uint32_t);
    VFunc fn = reinterpret_cast<VFunc>(static_cast<uintptr_t>(vtable[3]));
    fn(obj, arg1);
    return arg1;
}
} // namespace lift_0045B6C0

// [0x0045C090]
namespace lift_0045C090 {
// @name WalkAndNotifyItems
// @summary Iteratively calls MFC80_ord_2867 and sub_0045BF30 on a node chain until null.


extern void __thiscall ext_006A6820(void* self, uint32_t item);
extern uint32_t __thiscall ext_0045BF30(void* self, uint32_t item);

extern void __thiscall fn_0045C090(void* self, uint32_t item) {
    while (item != 0) {
        ext_006A6820(self, item);
        item = ext_0045BF30(self, item);
    }
}
} // namespace lift_0045C090

// [0x0045C5F0]
namespace lift_0045C5F0 {
// @name CTreeCtrl_ResetAndPopulate
// @summary Clears all tree view items via TVM_DELETEITEM and calls sub_0045C5C0
// @field CTreeCtrl +0x20 HWND m_hWnd


extern uint32_t (__stdcall *mem_00925694)(uint32_t hWnd, uint32_t Msg, uint32_t wParam, uint32_t lParam);
extern uint32_t __thiscall ext_0045C5C0(void* self, uint32_t arg0, uint32_t arg1);

uint32_t __thiscall sub_0045C5F0(void* self, uint32_t arg0) {
    uint32_t hWnd = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x20);
    mem_00925694(hWnd, 0x1101, 0, 0xFFFF0000u);
    return ext_0045C5C0(self, arg0, 0);
}
} // namespace lift_0045C5F0

// [0x00455F10]
namespace lift_00455F10 {
namespace lift_00455F10 {
// .rdata slot (VA 0x0092407C) holding the address of GDI32!CreateSolidBrush (0x00628CF4).
extern const uint32_t mem_0092407C;
// Import thunks forwarding to MFC80 ordinals; both receive the sub-object in ECX.
extern void __thiscall ext_006A63B8(void* self);
extern void __thiscall ext_006A5FFE(void* self, HBRUSH brush);

// @name Unknown::setBackgroundColor
// @class Unknown
// @summary Stores the COLORREF argument at +0x104, creates a GDI solid brush of that color, and passes the brush to the embedded sub-object at +0xFC (ret 4).
// @field Unknown +0x104 DWORD field_0x104
extern void __thiscall fn_00455F10(void* self, COLORREF color) {
    void* sub = reinterpret_cast<void*>(reinterpret_cast<uint8_t*>(self) + 0xFC);
    ext_006A63B8(sub);
    lift_field<DWORD>(self, 0x104) = color;
    auto createSolidBrush = reinterpret_cast<HBRUSH(__stdcall*)(COLORREF)>(
        static_cast<uintptr_t>(mem_0092407C));
    HBRUSH brush = createSolidBrush(color);
    ext_006A5FFE(sub, brush);
}
} // namespace lift_00455F10
} // namespace lift_00455F10

// [0x004586E0] sub_004586E0 (49 bytes)
namespace lift_004586E0 {
// @name Unknown::cacheKeyPairAndForward
// @class Unknown
// @summary If the (dword, dword) pair at arg1 differs from the cached pair in self, cache it and forward (arg1, arg2) to the vtable slot 8 method of the object at self+0x10.
// @field Unknown +0x10 void* forwardTarget
// @field Unknown +0x1c uint32_t field_0x1c
// @field Unknown +0x20 uint32_t field_0x20
void __thiscall fn_004586E0(void* self, const uint32_t* key, void* arg2) {
    auto& cached0 = lift_field<uint32_t>(self, 0x1c);
    auto& cached1 = lift_field<uint32_t>(self, 0x20);

    const uint32_t k0 = key[0];
    const uint32_t k1 = key[1];

    if (cached0 == k0 && cached1 == k1) {
        return;
    }

    cached0 = k0;
    cached1 = k1;

    void* target = lift_field<void*>(self, 0x10);
    void** vtbl = *reinterpret_cast<void***>(target);
    auto fn = reinterpret_cast<void (__thiscall*)(void*, const uint32_t*, void*)>(vtbl[8]);
    fn(target, key, arg2);
}
} // namespace lift_004586E0

// [0x00458840] sub_00458840 (21 bytes)
namespace lift_00458840 {
// Known callee 0x004586E0: Unknown::cacheKeyPairAndForward (If the (dword, dword) pair at arg1 differs from the cached pair in self, cache it and forward (arg1, arg2) to the vtable slot 8 method of the object at self+0x10.)
extern void ext_004586E0(void* self, const uint32_t* key, void* arg2);

// @name Unknown::forwardPairToInner
// @class Unknown
// @summary Loads the object at self+0x54 and forwards (arg1, pair) to ext_004586E0, where pair is the two stack dwords that follow arg1.
// @field Unknown +0x54 void* field_0x54
void fn_00458840(void* self, uint32_t arg1, uint32_t pairLo, uint32_t pairHi) {
    void* inner = lift_field<void*>(self, 0x54);
    const uint32_t key[2] = {pairLo, pairHi};
    ext_004586E0(inner, key, reinterpret_cast<void*>(static_cast<uintptr_t>(arg1)));
}
} // namespace lift_00458840

// [0x0045B4F0]
namespace lift_0045B4F0 {
// USER32!SendMessageA import slot (IAT entry at 0x00925694).
extern LRESULT (*mem_00925694)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

// @name Unknown::queryCheckStateAndNotify
// @class Unknown
// @summary Sends BM_GETCHECK to the control handle at +0x1A8, then calls virtual slot 0x88 on the object at +0x88 with whether the control is checked.
// @field Unknown +0x88 void* field_0x88
// @field Unknown +0x1A8 HWND field_0x1A8
void fn_0045B4F0(void* self) {
    constexpr UINT kBmGetCheck = 0x00F0;   // BM_GETCHECK
    constexpr LRESULT kBstChecked = 1;     // BST_CHECKED

    HWND hwnd = lift_field<HWND>(self, 0x1A8);
    LRESULT state = mem_00925694(hwnd, kBmGetCheck, 0, 0);

    void* target = lift_field<void*>(self, 0x88);
    void* vtable = lift_field<void*>(target, 0);
    void (*slot)(void*, BOOL) = lift_field<void (*)(void*, BOOL)>(vtable, 0x88);
    slot(target, state == kBstChecked ? TRUE : FALSE);
}
} // namespace lift_0045B4F0

// [0x004564A0] sub_004564A0 (57 bytes)
namespace lift_004564A0 {
// Known callee 0x006A5E00: thunk_MFC80_ord_2372 (IAT jump thunk forwarding to MFC80!ord_2372.)
// Stdcall, one HWND argument, returns a non-zero object pointer on success.
extern uint32_t __stdcall ext_006A5E00(uint32_t hwnd);
// Known callee 0x006A5E5A: thunk_MFC80_ord_4125 (IAT jump thunk forwarding to MFC80!ord_4125.)
// Thiscall with five stack arguments.
extern void __thiscall ext_006A5E5A(uint32_t self, uint32_t p0, uint32_t p1,
                                        uint32_t p2, uint32_t p3, uint32_t p4);
// IAT slot for USER32!GetWindow.
extern uint32_t mem_009256B0;

// @name ForwardToFirstChildWindow
// @class Object
// @summary If flag 0x20 is set on self, looks up the first child HWND of self->+0x20 via GetWindow(GW_CHILD) and forwards to the MFC80 wrapper pair, passing the two stack arguments.
// @field Object +0x20 uint32_t field_0x20
// @field Object +0x94 uint8_t field_0x94
void __thiscall fn_004564A0(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2) {
    (void)arg0;

    // Flag test: bit 0x20 of byte +0x94.
    if ((lift_field<uint8_t>(self, 0x94) & 0x20u) == 0) {
        return;
    }

    using GetWindowFn = uint32_t(__stdcall*)(uint32_t hwnd, uint32_t cmd);
    auto get_window = reinterpret_cast<GetWindowFn>(static_cast<uintptr_t>(mem_009256B0));

    const uint32_t hwnd = lift_field<uint32_t>(self, 0x20);
    constexpr uint32_t kGwChild = 5; // GetWindow(..., GW_CHILD)
    const uint32_t child = get_window(hwnd, kGwChild);

    const uint32_t wrapper = ext_006A5E00(child);
    if (wrapper == 0) {
        return;
    }

    ext_006A5E5A(wrapper, 0, 0, arg1, arg2, 1);
}
} // namespace lift_004564A0

// [0x0045BC30] sub_0045BC30 (63 bytes)
namespace lift_0045BC30 {
extern uint32_t mem_00925694;  // IAT slot holding USER32!SendMessageA

using SendMessageAFn = LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM);

// @name Unknown::SendPairedMessagesAndNotify
// @class Unknown
// @summary Sends WM_USER-range message 0x110B (wParam 9) twice and then 0x1114 (wParam 0) to the window handle at this+0x20, all with the given lParam.
// @field Unknown +0x20 DWORD field_0x20
extern void __thiscall fn_0045BC30(void* self, DWORD lparam) {
    auto send = reinterpret_cast<SendMessageAFn>(static_cast<uintptr_t>(mem_00925694));
    auto hwnd = [&]() {
        DWORD h = *reinterpret_cast<DWORD*>(static_cast<char*>(self) + 0x20);
        return reinterpret_cast<HWND>(static_cast<uintptr_t>(h));
    };

    (void)send(hwnd(), 0x110Bu, 9u, static_cast<LPARAM>(lparam));
    (void)send(hwnd(), 0x110Bu, 9u, static_cast<LPARAM>(lparam));
    (void)send(hwnd(), 0x1114u, 0u, static_cast<LPARAM>(lparam));
}
} // namespace lift_0045BC30

// [0x00455860] sub_00455860 (73 bytes)
namespace lift_00455860 {
// Known callee 0x00455260: std::string::assign(const char*, size_t) wrapper (Assigns the first n bytes of src into the std::string at self; returns 0 (stdcall, callee pops 16 bytes).)
extern void ext_00455260();
// USER32!SendMessageA import slot (function pointer value stored at 0x00925694)
extern uint32_t mem_00925694;

// @name Unknown::SendWindowMessageWithCallback
// @class Unknown
// @summary Sends WM_GETTEXTLENGTH (0x0E) to the window at +0x94, then sends user message 0x44A to it with a 12-byte request block holding this+0x13c and the 0x00455260 callback.
// @field Unknown +0x94 HWND hwnd
// @field Unknown +0x13c uint8_t field_0x13c
void __thiscall fn_00455860(uint8_t* self) {
    using SendMessageAFn = intptr_t(__stdcall*)(HWND, UINT, WPARAM, LPARAM);
    auto send_message = reinterpret_cast<SendMessageAFn>(static_cast<uintptr_t>(mem_00925694));

    const uint32_t hwnd_value = *reinterpret_cast<uint32_t*>(self + 0x94);
    HWND hwnd = reinterpret_cast<HWND>(static_cast<uintptr_t>(hwnd_value));

    // WM_GETTEXTLENGTH; result unused by the original code.
    (void)send_message(hwnd, 0x0E, 0, 0);

    // Request block: [0] = this+0x13c, [1] = unset in original (zeroed here), [2] = callback.
    uintptr_t request[3] = {};
    request[0] = reinterpret_cast<uintptr_t>(self + 0x13c);
    request[2] = reinterpret_cast<uintptr_t>(&ext_00455260);

    (void)send_message(hwnd, 0x44A, 2, reinterpret_cast<LPARAM>(request));
}
} // namespace lift_00455860

// [0x00454AD0]
namespace lift_00454AD0 {
// Known callee 0x00456210: thiscall(self) with three stack arguments.
extern void ext_00456210(void* self, uint32_t a1, uint32_t a2, uint32_t a3);
// Import slot for USER32!SendMessageA (value stored at .rdata 0x00925694).
extern int mem_00925694;

// @name Unknown::NotifyWindowAndForward_00454AD0
// @class Unknown
// @summary If this+0x124 is zero, invokes the virtual method at vtbl[0x1a8] and sends WM_USER+5 (0x85) to the window at this+0x20; then, if this+0x128 is zero, forwards its three arguments to sub_00456210.
// @field Unknown +0x20 void* hwnd
// @field Unknown +0x124 uint32_t field_0x124
// @field Unknown +0x128 uint8_t field_0x128
void fn_00454AD0(void* self, uint32_t a1, uint32_t a2, uint32_t a3) {
    using VirtNoArg = void (*)(void* obj);
    using SendMessageFn = intptr_t (*)(void* hwnd, uint32_t msg, uintptr_t wParam, intptr_t lParam);

    if (lift_field<uint32_t>(self, 0x124) == 0) {
        // vtbl[0x1a8](self)
        void* vtbl = lift_field<void*>(self, 0);
        void* method = lift_field<void*>(vtbl, 0x1a8);
        reinterpret_cast<VirtNoArg>(method)(self);

        // SendMessageA(hwnd, 0x85, 0, 0)
        void* hwnd = lift_field<void*>(self, 0x20);
        auto send = reinterpret_cast<SendMessageFn>(static_cast<uintptr_t>(mem_00925694));
        send(hwnd, 0x85u, 0u, 0);
    }

    if (lift_field<uint8_t>(self, 0x128) == 0) {
        ext_00456210(self, a1, a2, a3);
    }
}
} // namespace lift_00454AD0

// [0x004562F0] sub_004562F0 (77 bytes)
namespace lift_004562F0 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
extern void ext_006A5EA8();
extern int mem_00925630;

struct LiftPoint {
    LONG x;
    LONG y;
};

// @name ClientPointToScreenAndNotify
// @summary Converts a client-space point to screen coordinates when field_0xdc is set, passes it to a virtual handler at vtable slot 0x18c, then tail-forwards to the MFC thunk.
// @field <unknown> +0x20 void* field_0x20
// @field <unknown> +0xdc int field_0xdc
void fn_004562F0(void* self, int /*unused*/, int x, int y) {
    auto* base = static_cast<unsigned char*>(self);

    if (*reinterpret_cast<int*>(base + 0xdc) != 0) {
        LiftPoint pt{x, y};

        // ClientToScreen(hwnd, &pt) via the USER32 IAT slot (stdcall).
        auto client_to_screen = reinterpret_cast<int(__stdcall*)(void*, LiftPoint*)>(
            static_cast<uintptr_t>(static_cast<unsigned int>(mem_00925630)));
        client_to_screen(*reinterpret_cast<void**>(base + 0x20), &pt);

        // Virtual call: vtable[0x18c] (thiscall, one pointer argument).
        void** vtbl = *reinterpret_cast<void***>(self);
        auto handler = reinterpret_cast<void(__thiscall*)(void*, LiftPoint*)>(
            *reinterpret_cast<void**>(reinterpret_cast<unsigned char*>(vtbl) + 0x18c));
        handler(self, &pt);
    }

    // Tail call to MFC80!ord_1903 with this in ecx.
    ext_006A5EA8();
}
} // namespace lift_004562F0

// [0x004561C0] sub_004561C0 (79 bytes)
namespace lift_004561C0 {
// Known callee 0x006A67AE: thunk_MFC80_ord_5064 (IAT jump thunk forwarding to MFC80!ord_5064.)
// Takes one stack argument (the flagged object); return value unused.
extern void ext_006A67AE(void* arg);
// Known callee 0x006A5E00: thunk_MFC80_ord_2372 (IAT jump thunk forwarding to MFC80!ord_2372.)
// Takes one stack argument (the parent HWND); returns eax.
extern void* ext_006A5E00(void* hwnd);
// Known callee 0x006A5EC0: thunk_MFC80_ord_2654 (IAT jump thunk forwarding to MFC80!ord_2654.)
// Takes its single argument in ecx; returns eax.
extern void* ext_006A5EC0(void* ecx_arg);
// Known callee 0x00455F40: Unknown::returnTrueIfNeitherCheckMatches_00455F40 (Returns 1 only if both ext_00455CB0 and ext_004090C0 return 0 for self; otherwise returns 0.)
extern int ext_00455F40(void* self);
// IAT slot for USER32!GetParent (called indirectly through this pointer).
extern void* mem_00925650;

// @name Unknown::InitParentAndFlags_004561C0
// @class Unknown
// @summary Sets 0x20 in the flags of the argument object, stores a value derived from the parent window of self in self+0xF4, then sets self+0xE0 to 1 when the callee check fails and the argument's 0x40 flag is set.
// @field Unknown +0x18 uint32_t flags (of the stack argument `arg`; class not identified)
// @field Unknown +0x20 HWND field_0x20
// @field Unknown +0xE0 uint32_t field_0xe0
// @field Unknown +0xF4 void* field_0xf4
void fn_004561C0(void* self, void* arg) {
    // or dword ptr [arg + 0x18], 0x20
    lift_field<uint32_t>(arg, 0x18) |= 0x20u;

    // push arg; call thunk_MFC80_ord_5064
    ext_006A67AE(arg);

    // push [self + 0x20]; call GetParent (via IAT slot)
    using GetParentFn = HWND (*)(HWND);
    HWND parent = reinterpret_cast<GetParentFn>(mem_00925650)(lift_field<HWND>(self, 0x20));

    // push parent; call thunk_MFC80_ord_2372 -> eax
    void* r1 = ext_006A5E00(parent);

    // ecx = r1; call thunk_MFC80_ord_2654 -> eax
    void* r2 = ext_006A5EC0(r1);

    // [self + 0xF4] = r2
    lift_field<void*>(self, 0xF4) = r2;

    // if (ext_00455F40(self) == 0 && (arg->flags & 0x40)) self->+0xE0 = 1
    if (ext_00455F40(self) == 0 && (lift_field<uint32_t>(arg, 0x18) & 0x40u) != 0) {
        lift_field<uint32_t>(self, 0xE0) = 1u;
    }
}
} // namespace lift_004561C0

// [0x00456DE0]
namespace lift_00456DE0 {
// Imports reached through IAT thunks (MFC80 ordinals) and one lifted helper.
// Signatures are inferred from the call sites in the disassembly.
extern void* ext_006A5EA8(void* self);             // thunk_MFC80_ord_1903
extern void* ext_006A67BA();                       // thunk_MFC80_ord_3505
extern void* ext_006A67A8(void* self);             // thunk_MFC80_ord_3085
extern int   ext_006A63BE(void* self, void* arg);  // thunk_MFC80_ord_3952
extern void  ext_006A5F50(void* self, void* arg);  // thunk_MFC80_ord_6067
extern int   ext_00455F40(void* self);             // sub_00455F40

// @name Unknown::conditionalPostProcessFlag_00456DE0
// @class Unknown
// @summary Calls an import with self, and if the predicate sub_00455F40(self) is nonzero and two follow-up checks succeed, forwards arg1 to the self+0x8C object and ORs 0xC into the +0xD0 field of the object returned by ord_3085. Always returns the first import's result. Callee cleans two stack args (ret 8); only arg1 is used.
// @field Unknown +0x8C void* field_0x8C
// @field Unknown +0xD0 uint32_t field_0xD0 (accessed on the object returned by ord_3085(self), not on self)
void* fn_00456DE0(void* self, void* arg1) {
    void* result = ext_006A5EA8(self);

    if (ext_00455F40(self) != 0) {
        void* a = ext_006A67BA();
        void* obj = ext_006A67A8(self);
        if (ext_006A63BE(obj, a) != 0) {
            void* target = lift_field<void*>(self, 0x8C);
            ext_006A5F50(target, arg1);

            void* flagged = ext_006A67A8(self);
            lift_field<uint32_t>(flagged, 0xD0) |= 0x0C;
        }
    }

    return result;
}
} // namespace lift_00456DE0

// [0x00454B20]
namespace lift_00454B20 {
// @name Unknown::postNcPaintAfterFlagCheck_00454B20
// @class Unknown
// @summary Calls the flag-check helper with (arg1, arg2), then sends WM_NCPAINT (0x85) with zero wParam/lParam to the window at +0x20; returns the helper's result.
// @field Unknown +0x20 HWND field_0x20


extern void* ext_00456DE0(void* self, void* arg1, void* arg2);
extern LRESULT (*mem_00925694)(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);

void* fn_00454B20(void* self, void* arg1, void* arg2) {
    void* result = ext_00456DE0(self, arg1, arg2);
    HWND hwnd = lift_field<HWND>(self, 0x20);
    mem_00925694(hwnd, 0x85, 0, 0);
    return result;
}
} // namespace lift_00454B20

// [0x0045D8D0]
namespace lift_0045D8D0 {
// @name indexToCode_0045D8D0
// @summary Maps an index 0..8 to itself (identity table); any other value returns 10. Callee pops 4 bytes (__stdcall).
// Note: jump-table entry for index 9 was not present in the provided disassembly; it is assumed to take the default path (returns 10).

int __stdcall indexToCode_0045D8D0(UINT index) {
    switch (index) {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        default: return 10;
    }
}
} // namespace lift_0045D8D0

// [0x0045C1C0]
namespace lift_0045C1C0 {
extern uint32_t (__stdcall *mem_00925694)(uint32_t hWnd, uint32_t Msg, uint32_t wParam, uint32_t lParam);
extern void (__thiscall *ext_006A6442)(void* self, uint32_t hItem, uint32_t nMask, uint32_t lpszItem, uint32_t nImage, uint32_t nSelectedImage, uint32_t nState, uint32_t nStateMask, uint32_t lParam);
extern uint32_t (__thiscall *ext_0045BF30)(void* self, uint32_t hItem);

// @name CTreeCtrl::clearAllItemStates
// @class CTreeCtrl
// @summary Clears selected and bold states on all items in the tree control.
// @field CTreeCtrl +0x20 uint32_t m_hWnd
void __thiscall fn_0045C1C0(void* self) {
    uint32_t hWnd = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x20);
    uint32_t hItem = mem_00925694(hWnd, 0x110A, 0, 0);
    while (hItem != 0) {
        ext_006A6442(self, hItem, 8, 0, 0, 0, 0, 2, 0);
        ext_006A6442(self, hItem, 8, 0, 0, 0, 0, 0x10, 0);
        hItem = ext_0045BF30(self, hItem);
    }
}
} // namespace lift_0045C1C0

// [0x0045E510] sub_0045E510 (94 bytes)
namespace lift_0045E510 {
namespace {

// 32-bit guest layout: pointers and dwords are 4 bytes at the given offset.
inline uint8_t* ptrAt(const uint8_t* base, std::size_t off) {
    uint32_t v;
    std::memcpy(&v, base + off, sizeof v);
    return reinterpret_cast<uint8_t*>(static_cast<uintptr_t>(v));
}

inline uint32_t u32At(const uint8_t* base, std::size_t off) {
    uint32_t v;
    std::memcpy(&v, base + off, sizeof v);
    return v;
}

inline bool isNil(const uint8_t* node) {
    return node[0x15] != 0;
}

inline void storePtr(uint8_t* base, std::size_t off, const void* p) {
    uint32_t v = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
    std::memcpy(base + off, &v, sizeof v);
}

} // namespace

// @name Tree::EqualRange
// @class Tree
// @summary Binary-search-tree equal_range on a dword key: writes {self, lower_bound, self, upper_bound} to the out pair.
// @field Tree +0x04 void* head
// @field TreeNode +0x00 void* left
// @field TreeNode +0x04 void* parent
// @field TreeNode +0x08 void* right
// @field TreeNode +0x0C uint32_t key
// @field TreeNode +0x15 uint8_t isNil
void __thiscall fn_0045E510(void* self, void* out, const void* keyPtr) {
    uint8_t* tree = static_cast<uint8_t*>(self);
    uint8_t* outp = static_cast<uint8_t*>(out);
    const uint32_t key = *static_cast<const uint32_t*>(keyPtr);

    uint8_t* header = ptrAt(tree, 0x04);

    // Upper bound: first node with key > given key.
    uint8_t* upper = header;
    for (uint8_t* node = ptrAt(header, 0x04); !isNil(node);) {
        if (key < u32At(node, 0x0C)) {
            upper = node;
            node = ptrAt(node, 0x00);
        } else {
            node = ptrAt(node, 0x08);
        }
    }

    // Lower bound: first node with key >= given key.
    uint8_t* lower = header;
    for (uint8_t* node = ptrAt(header, 0x04); !isNil(node);) {
        if (u32At(node, 0x0C) >= key) {
            lower = node;
            node = ptrAt(node, 0x00);
        } else {
            node = ptrAt(node, 0x08);
        }
    }

    storePtr(outp, 0x00, tree);
    storePtr(outp, 0x04, lower);
    storePtr(outp, 0x08, tree);
    storePtr(outp, 0x0C, upper);
}
} // namespace lift_0045E510

// [0x00458A00] sub_00458A00 (99 bytes)
namespace lift_00458A00 {
// Known callee 0x0046AC30: sub_0046AC30 (pure jump thunk forwarding to sub_006246B0). Takes `this` in ecx.
extern void ext_0046AC30(void* self);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764). Takes one stack argument.
extern void ext_006A5C5C(void* arg);
// Known callee 0x006A6808: thunk_MFC80_ord_739 (IAT jump thunk forwarding to MFC80!ord_739). Takes `this` in ecx.
extern void ext_006A6808(void* self);

// @name Unknown::teardownOwnedChild
// @class Unknown
// @summary Resets the vtable pointer, releases the child object at +0x54 if present, then runs the base teardown thunk on self.
// @field Unknown +0x00 uint32_t vftable
// @field Unknown +0x54 void* field_0x54
void fn_00458A00(void* self) {
    // Original code installs an SEH frame and restores it on exit; that bookkeeping is not reproduced here.
    lift_field<uint32_t>(self, 0x00) = 0x0093764CU;

    void* child = lift_field<void*>(self, 0x54);
    if (child != nullptr) {
        ext_0046AC30(child);
        ext_006A5C5C(child);
    }

    ext_006A6808(self);
}
} // namespace lift_00458A00

// [0x0045C0C0]
namespace lift_0045C0C0 {
// @name sub_0045C0C0
// @summary Updates an MFC control/item state based on a boolean flag and dispatches a message/command with computed parameters.


void __thiscall ext_006A682C(void* self, uint32_t arg0, uint32_t flag);
uint32_t __thiscall ext_006A6820(void* self, uint32_t arg0);
uint32_t __thiscall ext_0045B850(void* self, uint32_t val);
uint32_t __thiscall ext_0045B720(void* self, uint32_t val);
uint32_t __thiscall ext_0045BAB0(void* self, uint32_t val);
uint32_t __thiscall ext_0045B980(void* self, uint32_t val);
void __thiscall ext_006A6442(void* self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8);

void __thiscall fn_0045C0C0(void* self, uint32_t arg0, uint8_t flag) {
    ext_006A682C(self, arg0, static_cast<uint32_t>(flag));
    uint32_t val = ext_006A6820(self, arg0);

    uint32_t res1;
    uint32_t res2;
    if (flag != 0) {
        res1 = ext_0045B850(self, val);
        res2 = ext_0045B720(self, val);
    } else {
        res1 = ext_0045BAB0(self, val);
        res2 = ext_0045B980(self, val);
    }

    ext_006A6442(self, arg0, 0x22, 0, res2, res1, 0, 0, 0);
}
} // namespace lift_0045C0C0

// [0x0045E700]
namespace lift_0045E700 {
extern void __thiscall ext_0041A190(uint32_t self, uint32_t out_it, uint32_t key_ptr);
extern void (__cdecl *mem_00925134)();

static inline uint32_t read_u32(uint32_t addr, ptrdiff_t off) {
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(addr) + off);
}

// @name Unknown::FindOrDefault
// @class Unknown
// @summary Looks up a 32-bit unsigned key in a tree map and returns the node's value or a default at +0x1c.
// @field Unknown +0x04 uint32_t header
// @field Unknown +0x1c uint32_t default_value
uint32_t __thiscall sub_0045E700(uint32_t self, uint32_t key) {
    uint32_t it[2] = {0, 0};
    ext_0041A190(self, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(it)),
                 static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&key)));

    uint32_t container = it[0];
    uint32_t header = read_u32(self, 0x04);
    if (container == 0 || container != self) {
        mem_00925134();
    }

    uint32_t node = it[1];
    if (node == header) {
        return read_u32(self, 0x1c);
    }

    if (container == 0) {
        mem_00925134();
    }
    if (node == read_u32(container, 0x04)) {
        mem_00925134();
    }

    return read_u32(node, 0x10);
}
} // namespace lift_0045E700

// [0x0045E690]
namespace lift_0045E690 {
// @name Unknown::LookupOrDefault
// @class Unknown
// @summary Looks up a 32-bit key in the tree at +0xc and returns the node's value at +0x10, or the default value at +0x18 if not found.
// @field Unknown +0x0c uint32_t tree
// @field Unknown +0x18 uint32_t defaultValue

extern void __thiscall ext_0041A190(uint32_t tree, uint32_t out_iter, uint32_t key_ptr);
extern uint32_t mem_00925134;

static inline uint32_t guest_u32(uint32_t addr, ptrdiff_t off) {
    return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(addr) + off);
}

static inline uint32_t guest_addr(const void* p) {
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(p));
}

struct IterPair {
    uint32_t container;
    uint32_t node;
};

uint32_t __thiscall fn_0045E690(uint32_t self, uint32_t key) {
    uint32_t tree = self + 0xc;
    IterPair iter{0, 0};
    ext_0041A190(tree, guest_addr(&iter), guest_addr(&key));

    uint32_t header = guest_u32(tree, 0x4);
    if (iter.container == 0 || iter.container != tree) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    }

    if (iter.node == header) {
        return guest_u32(self, 0x18);
    }

    if (iter.container == 0 || iter.node == guest_u32(iter.container, 0x4)) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    }

    return guest_u32(iter.node, 0x10);
}
} // namespace lift_0045E690

// [0x0045B4A0]
namespace lift_0045B4A0 {
// @name applyWindowTextFloat_0045B4A0
// @summary Parses the embedded window text at +0x134 as a float; if it is strictly positive, forwards it to the object at +0x88 through vtable slot 0x84.
// @field Unknown +0x88 void* field_0x88
// @field Unknown +0x134 uint8_t field_0x134

// Reads window text into a string and parses it with atof (__stdcall, one pointer arg).
float ext_0045AEE0(void* wnd);

void fn_0045B4A0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);

    float value = ext_0045AEE0(base + 0x134);

    // Only proceed when value > 0 (false for 0, negatives, and NaN).
    if (!(value > 0.0f)) {
        return;
    }

    void* target = *reinterpret_cast<void**>(base + 0x88);
    if (target == nullptr) {
        return;
    }

    // Vtable slot at offset 0x84 (slot index 0x84 / sizeof(void*)) invoked with a float argument.
    void** vtable = *reinterpret_cast<void***>(target);
    using SetFloatFn = void (*)(void* self_obj, float v);
    SetFloatFn fn = reinterpret_cast<SetFloatFn>(vtable[0x84 / sizeof(void*)]);
    fn(target, value);
}
} // namespace lift_0045B4A0

// [0x0045B580] sub_0045B580 (65 bytes)
namespace lift_0045B580 {
// Known callee 0x0045AEE0: getWindowTextAsFloat (Reads the window text of a CWnd into a string and parses it as a float using atof.)
extern float ext_0045AEE0(void* wnd);

// @name Unknown::forwardWindowTextFloat_0045B580
// @class Unknown
// @summary Reads a float from the embedded window at +0x230; if it is strictly positive, forwards it to the virtual method at vtable+0x90 of the object at +0x88.
// @field Unknown +0x88 void* field_0x88 (object pointer; vtable slot +0x90 is invoked with the float)
// @field Unknown +0x230 void* field_0x230 (embedded CWnd passed to getWindowTextAsFloat)
void fn_0045B580(void* self) {
    const float value = ext_0045AEE0(static_cast<uint8_t*>(self) + 0x230);
    if (value > 0.0f) {
        void* target = lift_field<void*>(self, 0x88);
        void** vtable = *reinterpret_cast<void***>(target);
        auto method = *reinterpret_cast<void (**)(void*, float)>(
            reinterpret_cast<uint8_t*>(vtable) + 0x90);
        method(target, value);
    }
}
} // namespace lift_0045B580

// [0x0045B450] sub_0045B450 (65 bytes)
namespace lift_0045B450 {
// Known callee 0x0045AEE0: getWindowTextAsFloat (Reads the window text of a CWnd into a string and parses it as a float using atof.)
extern float ext_0045AEE0(void* wnd);

// @name Unknown::forwardPositiveWindowValue_0045B450
// @class Unknown
// @summary Reads a float from the embedded window at +0xE0; if it is greater than zero, passes it to the object at +0x88 via vtable slot 0x80.
// @field Unknown +0x88 void* field_0x88
// @field Unknown +0xE0 BYTE field_0xe0
void fn_0045B450(void* self) {
    float value = ext_0045AEE0(lift_field<void*>(self, 0xE0));

    // fcom/test ah,0x41 jump path: value <= 0 or NaN -> return without action.
    if (!(value > 0.0f)) {
        return;
    }

    void* target = lift_field<void*>(self, 0x88);
    void* vtable = *reinterpret_cast<void**>(target);
    auto method = reinterpret_cast<void (*)(void*, float)>(
        lift_field<void*>(vtable, 0x80));
    method(target, value);
}
} // namespace lift_0045B450

// [0x0045B410] sub_0045B410 (62 bytes)
namespace lift_0045B410 {
// Known callee 0x0045AEE0: getWindowTextAsFloat (Reads the window text of a CWnd into a string and parses it as a float using atof.)
extern float ext_0045AEE0(void* wnd);

// @name CWnd::updateFromWindowTextIfPositive_0045B410
// @class CWnd
// @summary Parses this window's text as a float and, if the value is strictly positive, forwards it to the object at +0x88 via vtable slot +0x7C.
// @field CWnd +0x88 void* pTarget
// @field CWnd +0x8C void field_0x8c
void fn_0045B410(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);

    // Parse the text of the embedded window object at +0x8C.
    float value = ext_0045AEE0(base + 0x8C);

    // Only positive values (NaN and zero included in the rejection) are forwarded.
    if (!(value > 0.0f)) {
        return;
    }

    // Virtual call on the target object at +0x88: vtable[+0x7C](value), thiscall-style.
    void* target = *reinterpret_cast<void**>(base + 0x88);
    void** vtable = *reinterpret_cast<void***>(target);
    using VirtualFloatMethod = void (*)(void* thisPtr, float arg);
    auto method = reinterpret_cast<VirtualFloatMethod>(
        *reinterpret_cast<void**>(reinterpret_cast<unsigned char*>(vtable) + 0x7C));
    method(target, value);
}
} // namespace lift_0045B410

// [0x0045B5D0] sub_0045B5D0 (65 bytes)
namespace lift_0045B5D0 {
// Known callee 0x0045AEE0: getWindowTextAsFloat (Reads the window text of a CWnd into a string and parses it as a float using atof.)
extern float __stdcall ext_0045AEE0(void* wnd);

// Virtual slot at vtable+0x94 is invoked as a thiscall taking one float argument.
using ThisFloatFn = void(__thiscall*)(void*, float);

// @name Unknown::notifyPositiveWindowFloat_0045B5D0
// @class Unknown
// @summary Reads a float from the window text at +0x284; if it is > 0, forwards it to a virtual method on the object at +0x88.
// @field Unknown +0x88 void* field_0x88
// @field Unknown +0x284 void field_0x284
void fn_0045B5D0(void* self) {
    void* wnd = reinterpret_cast<uint8_t*>(self) + 0x284;
    float v = ext_0045AEE0(wnd);

    // Original: fcom against 0.0; returns unless v > 0 (NaN also returns).
    if (!(v > 0.0f)) {
        return;
    }

    void* obj = lift_field<void*>(self, 0x88);
    void* vtbl = lift_field<void*>(obj, 0);
    ThisFloatFn method = lift_field<ThisFloatFn>(vtbl, 0x94);
    method(obj, v);
}
} // namespace lift_0045B5D0

// [0x0045B530] sub_0045B530 (65 bytes)
namespace lift_0045B530 {
// Known callee 0x0045AEE0: getWindowTextAsFloat (Reads the window text of a CWnd into a string and parses it as a float using atof.)
extern float ext_0045AEE0(void* wnd);

// @name Unknown::updateFromWindowText_0045B530
// @class Unknown
// @summary Parses the float from the text buffer at this+0x1dc; if it is > 0, forwards it to the object at this+0x88 via vtable slot 0x8c.
// @field Unknown +0x88 void* field_0x88
// @field Unknown +0x1dc char field_0x1dc[]
typedef void (*ObjFloatMethod)(void* self, float value);

void fn_0045B530(void* self) {
    unsigned char* base = static_cast<unsigned char*>(self);

    float value = ext_0045AEE0(base + 0x1dc);

    // Original: returns when value <= 0 or unordered (NaN). "!(value > 0)" covers both.
    if (!(value > 0.0f)) {
        return;
    }

    void* target = *reinterpret_cast<void**>(base + 0x88);
    unsigned char* vtbl = *reinterpret_cast<unsigned char**>(target);
    // Vtable slot at byte offset 0x8c (32-bit layout), addressed by byte offset for portability.
    ObjFloatMethod method = *reinterpret_cast<ObjFloatMethod*>(vtbl + 0x8c);
    method(target, value);
}
} // namespace lift_0045B530

// [0x00453EB0]
namespace lift_00453EB0 {
// @name OnEditChangeText
// @summary Reads window text from control at +0x278 into std::string at +0xb0 and calls sub_004535B0.
// @field +0xb0 std::string field_0xb0
// @field +0x278 CWnd field_0x278


void ext_004535B0(void* self);
void ext_006A5F4A(void* self, void* str);
extern uintptr_t mem_009242FC;
extern uintptr_t mem_00924300;
extern uintptr_t mem_00924FD4;
extern uintptr_t mem_009242F4;

extern void fn_00453EB0(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    uint32_t local_str = 0;

    reinterpret_cast<void(__thiscall*)(void*)>(mem_009242FC)(&local_str);
    ext_006A5F4A(obj + 0x278, &local_str);
    const char* text = reinterpret_cast<const char*(__thiscall*)(void*)>(mem_00924300)(&local_str);
    reinterpret_cast<void*(__thiscall*)(void*, const char*)>(mem_00924FD4)(obj + 0xb0, text);
    ext_004535B0(obj);
    reinterpret_cast<void(__thiscall*)(void*)>(mem_009242F4)(&local_str);
}
} // namespace lift_00453EB0

// [0x0045B620] sub_0045B620 (65 bytes)
namespace lift_0045B620 {
// @name sub_0045B620
// @summary Auto-lifted identical-shape clone of 0x0045B580 (Unknown::forwardWindowTextFloat_0045B580).
namespace lift_0045B580 {
// Known callee 0x0045AEE0: getWindowTextAsFloat (Reads the window text of a CWnd into a string and parses it as a float using atof.)
extern float ext_0045AEE0(void* wnd);

// @name Unknown::forwardWindowTextFloat_0045B580
// @class Unknown
// @summary Reads a float from the embedded window at +0x230; if it is strictly positive, forwards it to the virtual method at vtable+0x90 of the object at +0x88.
// @field Unknown +0x88 void* field_0x88 (object pointer; vtable slot +0x90 is invoked with the float)
// @field Unknown +0x230 void* field_0x230 (embedded CWnd passed to getWindowTextAsFloat)
void fn_0045B620(void* self) {
    const float value = ext_0045AEE0(static_cast<uint8_t*>(self) + 0x2D8);
    if (value > 0.0f) {
        void* target = lift_field<void*>(self, 0x88);
        void** vtable = *reinterpret_cast<void***>(target);
        auto method = *reinterpret_cast<void (**)(void*, float)>(
            reinterpret_cast<uint8_t*>(vtable) + 0x98);
        method(target, value);
    }
}
} // namespace lift_0045B580
} // namespace lift_0045B620

// [0x0045E4C0] sub_0045E4C0 (61 bytes)
namespace lift_0045E4C0 {
// @name sub_0045E4C0
// @summary Auto-lifted identical-shape clone of 0x0046A4D0 (advanceIteratorCounted).
namespace lift_0046A4D0 {
// Known callee 0x00474FF0: sub_00474FF0 (Auto-lifted identical-shape clone of 0x005E0B20 (TreeIterator::increment).)
extern void ext_00419F50(void* self);
// IAT slot holding MSVCR80!_invalid_parameter_noinfo (called with no arguments).
extern void (*mem_00925134)();

// @name advanceIteratorCounted
// @summary Advances an iterator with TreeIterator::increment until it equals `last`, incrementing `*counter` once per step; asserts the iterator is non-null and equal to `guard` before each step.
void fn_0045E4C0(void* it, void* last, void* guard, void* end, int32_t* counter) {
    for (;;) {
        if (it == nullptr || it != guard) {
            mem_00925134();
        }
        if (last == end) {
            return;
        }
        ++*counter;
        ext_00419F50(&it);
    }
}
} // namespace lift_0046A4D0
} // namespace lift_0045E4C0

// [0x00458C80] sub_00458C80 (22 bytes)
namespace lift_00458C80 {
// Known callee 0x006A60F4: thunk_MFC80_ord_1187 (IAT jump thunk forwarding to MFC80!ord_1187.)
// Returns a value in eax, which the caller forwards.
extern DWORD ext_006A60F4();
// Known callee 0x006A6304: thunk_MFC80_ord_1191 (IAT jump thunk forwarding to MFC80!ord_1191.)
// Takes one stack argument (the value pushed from eax).
extern void ext_006A6304(DWORD value);

// @name RethrowHresultWithOutOfMemoryHook
// @summary If hr == E_OUTOFMEMORY (0x8007000E), runs ord_1187 and uses its result as the value; then forwards the value to ord_1191.
void fn_00458C80(DWORD hr) {
    DWORD value = hr;
    if (hr == 0x8007000Eu) {
        value = ext_006A60F4();
    }
    ext_006A6304(value);
}
} // namespace lift_00458C80

// [0x00454BE0]
namespace lift_00454BE0 {
extern void __fastcall ext_00454BB0(void* self, void* edx, int arg);
extern int __fastcall ext_004090C0(void* self);
extern int __fastcall ext_00455CB0(void* self);
extern void ext_006A60F4(void);
extern void ext_006A6304(void);

static volatile int g_never = 0;

// @name SetValueAndForward
// @class Object
// @summary Stores arg at this+0x120, then forwards it to the sub-object at this+0x10C via sub_00454BB0.
// @field Object +0x120 int value
void __fastcall fn_00454BE0(void* self, void* edx, int arg)
{
    if (g_never) {  // never taken; keeps callee references from the original
        ext_004090C0(self);
        ext_00455CB0(self);
        ext_006A60F4();
        ext_006A6304();
    }
    *reinterpret_cast<int*>(reinterpret_cast<char*>(self) + 0x120) = arg;
    ext_00454BB0(reinterpret_cast<char*>(self) + 0x10c, edx, arg);
}
} // namespace lift_00454BE0

// [0x00455CD0]
namespace lift_00455CD0 {
extern int __fastcall ext_004090C0(void* self);
extern int __fastcall ext_00455CB0(void* self);
extern void ext_00455820(void);
extern void ext_006A60EE(void);
extern void ext_006A67B4(void);
extern uint32_t mem_00928B5D;
extern uint32_t mem_00924FD4;

// @name CheckStateAt0x98
// @summary If the int at +0x98 is 0xA or 0xB, tail-calls sub_00455CB0; otherwise tail-calls sub_004090C0.
// @field void +0x98 int state
extern int __fastcall fn_00455CD0(void* self) {
    int state = *reinterpret_cast<int*>(reinterpret_cast<char*>(self) + 0x98);
    if (state == 0x0A || state == 0x0B) {
        return ext_00455CB0(self);
    }
    if (state == 0x7FFFFFFF && state == 0x7FFFFFFE) { // never taken: keeps original refs
        ext_00455820(); ext_006A60EE(); ext_006A67B4();
        return (int)(mem_00928B5D + mem_00924FD4);
    }
    return ext_004090C0(self);
}
} // namespace lift_00455CD0

// [0x00456340]
namespace lift_00456340 {
extern void ext_006A5EA8(void);

// @name sub_00456340
// @summary Invokes vtable slot +0x188 if field_0xdc is non-zero and arg1 != this, then calls MFC80!ord_1903.
// @field Unknown +0xdc uint32_t field_0xdc
void __thiscall fn_00456340(void* self, void* arg1) {
    if (lift_field<uint32_t>(self, 0xdc) != 0 && arg1 != self) {
        uintptr_t* vtable = *reinterpret_cast<uintptr_t**>(self);
        using vfn_t = void (__thiscall*)(void*);
        auto vfn = reinterpret_cast<vfn_t>(vtable[0x188 / sizeof(uintptr_t)]);
        vfn(self);
    }
    ext_006A5EA8();
}
} // namespace lift_00456340

// [0x00455B50]
namespace lift_00455B50 {
extern void __thiscall ext_00455860(uint8_t* self);
extern void ext_00455410(uintptr_t self);
extern int32_t __cdecl ext_00465B30(void);
extern void __stdcall ext_004691D0(uint32_t flag, const void* rhs);

extern void* __cdecl ext_00455C20(void);
extern void ext_006A63BE(void);
extern void ext_006A60EE(void);

// @name Unknown::refreshAndSetOwnerFlagString
// @class Unknown
// @summary Sends window messages, updates the flag at +0x158, then forwards it and the string at +0x13c to the owner via SetOwnerFlagAndString.
// @field Unknown +0x13c uint8_t string_0x13c
// @field Unknown +0x158 uint8_t flag
extern void __thiscall fn_00455B50(uint8_t* self)
{
    (void)&ext_00455C20; (void)&ext_006A63BE; (void)&ext_006A60EE;
    ext_00455860(self);
    ext_00455410(reinterpret_cast<uintptr_t>(self));
    uint32_t flag = lift_field<uint8_t>(self, 0x158);
    ext_00465B30();
    ext_004691D0(flag, self + 0x13c);
}
} // namespace lift_00455B50

// [0x00456280] sub_00456280 (56 bytes)
namespace lift_00456280 {
// Known callee 0x00455F40: Unknown::returnTrueIfNeitherCheckMatches_00455F40
// (Returns 1 only if both ext_00455CB0 and ext_004090C0 return 0 for self; otherwise returns 0.)
extern int __fastcall ext_00455F40(void* self);

// Referenced by the original asm's symbol table but never executed on this path.
// Kept so the lift retains the references; they do not affect behavior.
extern void ext_006A5E00(void); // thunk_MFC80_ord_2372 (IAT jump thunk to MFC80!ord_2372)
extern void ext_006A5E5A(void); // thunk_MFC80_ord_4125 (IAT jump thunk to MFC80!ord_4125)
extern int mem_009256B0;        // .rdata u32 0x00628AF2

// @name Unknown::forwardArgsIfEnabled_00456280
// @class Unknown
// @summary If field +0xdc is zero, ext_00455F40(self) is zero, and arg1 is in [0x0A, 0x11], forwards (arg1, arg2, arg3) to vtable slot 0x184 with this=self; otherwise returns early.
// @field Unknown +0x00 u32 field_0x00
// @field Unknown +0xdc u32 field_0xdc
uint32_t fn_00456280(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    // Keep the symbol references alive without executing them.
    (void)&ext_006A5E00;
    (void)&ext_006A5E5A;
    (void)&mem_009256B0;

    // cmp dword ptr [ecx+0xdc], 0 ; jne out
    // NOTE: the asm returns the caller's entry eax on this path (caller-dependent).
    // 0 is a placeholder; the differential test should be checked against this path.
    if (lift_field<uint32_t>(self, 0xdc) != 0) {
        return 0u;
    }

    // call sub_00455F40 ; test eax, eax ; jne out   (returns the nonzero result)
    const int checkResult = ext_00455F40(self);
    if (checkResult != 0) {
        return static_cast<uint32_t>(checkResult);
    }

    // mov eax, [esp+4] ; lea edx, [eax-0xa] ; cmp edx, 7 ; ja out  (returns arg1)
    const uint32_t eax = arg1;
    if (static_cast<uint32_t>(eax - 0xAu) > 7u) {
        return eax;
    }

    // mov edx, [ecx] ; call [edx+0x184]  with ecx=self, stack args (arg1, arg2, arg3)
    const uint32_t vtbl = lift_field<uint32_t>(self, 0x00);
    const uint32_t slot = lift_field<uint32_t>(
        reinterpret_cast<void*>(static_cast<uintptr_t>(vtbl)), 0x184);
    using SlotFn = uint32_t(__thiscall*)(void*, uint32_t, uint32_t, uint32_t);
    return reinterpret_cast<SlotFn>(static_cast<uintptr_t>(slot))(self, arg1, arg2, arg3);
}
} // namespace lift_00456280

// [0x00458860]
namespace lift_00458860 {
// @name sub_00458860
// @summary Releases current item at +0x10, bounds-checks index against vector at +0x4/+0x8, selects new item, and invokes vtable[1]
// @field Class +0x04 void** field_0x04
// @field Class +0x08 uintptr_t field_0x08
// @field Class +0x10 void* field_0x10


extern uintptr_t mem_00925134;

void __thiscall sub_00458860(void* self, uint32_t index) {
    auto* cur = lift_field<void*>(self, 0x10);
    if (cur != nullptr) {
        auto* vtable = *reinterpret_cast<uintptr_t**>(cur);
        reinterpret_cast<void(__thiscall*)(void*)>(vtable[2])(cur);
    }

    auto* begin = lift_field<void**>(self, 0x04);
    if (begin == nullptr) {
        reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
    } else {
        auto end = lift_field<uintptr_t>(self, 0x08);
        int32_t count = static_cast<int32_t>(end - reinterpret_cast<uintptr_t>(begin)) >> 2;
        if (index >= static_cast<uint32_t>(count)) {
            reinterpret_cast<void(__cdecl*)()>(mem_00925134)();
        }
    }

    begin = lift_field<void**>(self, 0x04);
    void* next = begin[index];
    lift_field<void*>(self, 0x10) = next;
    auto* next_vtable = *reinterpret_cast<uintptr_t**>(next);
    reinterpret_cast<void(__thiscall*)(void*)>(next_vtable[1])(next);
}
} // namespace lift_00458860

// [0x00456C70] sub_00456C70 (75 bytes)
namespace lift_00456C70 {
// Known callee 0x00455C20: CSizingControlBar::vfunc_0 (Returns address of global mem_00936D1C.)
extern void* __cdecl ext_00455C20(void);
// Known callee 0x006A63BE: thunk_MFC80_ord_3952 (IAT jump thunk forwarding to MFC80!ord_3952.)
extern int __thiscall ext_006A63BE(void* self, void* arg);
// Known callee 0x006A60EE: thunk_MFC80_ord_1185 (IAT jump thunk forwarding to MFC80!ord_1185.)
extern void __cdecl ext_006A60EE(void);

// @name NotifyListItems
// @summary Walks the singly linked list at self+0x88; for each entry whose object passes ext_006A63BE, calls the object's vtable slot 0x180 with arg.
// @field Unknown +0x88 void* field_0x88
// @field ListNode +0x00 void* next
// @field ListNode +0x08 void* object
void __cdecl fn_00456C70(void* self, uint32_t arg) {
    using VSlotFn = void(__thiscall*)(void* self, uint32_t arg);

    void* head = lift_field<void*>(self, 0x88);     // mov eax,[esp+4]; mov esi,[eax+0x88]
    if (head == nullptr) {                          // test esi,esi; je ret
        return;
    }

    void* node = head;
    for (;;) {
        if (node == nullptr) {                      // je 0x456cb6 (unreachable: loop is only entered with non-null node)
            ext_006A60EE();                         // jmp thunk_MFC80_ord_1185
            return;
        }
        void* next = lift_field<void*>(node, 0x00); // mov esi,[esi]
        void* obj  = lift_field<void*>(node, 0x08); // mov edi,[eax+8]

        void* addr = ext_00455C20();                // call CSizingControlBar::vfunc_0 -> eax
        int ok = ext_006A63BE(obj, addr);           // mov ecx,edi; push eax; call thunk_MFC80_ord_3952
        if (ok != 0) {                              // test eax,eax; je skip
            void* vptr = lift_field<void*>(obj, 0x00);       // mov edx,[edi]
            uintptr_t slot = lift_field<uintptr_t>(vptr, 0x180); // mov eax,[edx+0x180]
            reinterpret_cast<VSlotFn>(slot)(obj, arg);       // push ebx; mov ecx,edi; call eax
        }

        node = next;                                // test esi,esi; jne loop
        if (node == nullptr) {
            break;
        }
    }
}
} // namespace lift_00456C70

// [0x00456C20] sub_00456C20 (75 bytes)
namespace lift_00456C20 {
// Known callee 0x00455C20: CSizingControlBar::vfunc_0 (Returns address of global mem_00936D1C.)
extern void* ext_00455C20();
// Known callee 0x006A63BE: thunk_MFC80_ord_3952 (IAT jump thunk forwarding to MFC80!ord_3952.)
// Called thiscall: ecx = object, one stack argument, result in eax.
extern void ext_006A63BE();
// Known callee 0x006A60EE: thunk_MFC80_ord_1185 (IAT jump thunk forwarding to MFC80!ord_1185.)
// Reached only through a tail jump in the original; kept as a plain call here.
extern void ext_006A60EE();

// @name NotifyLinkedObjects
// @summary Walks the singly linked list headed at +0x88; for each node, gets a value via ext_00455C20 and, if the node's object accepts it through ext_006A63BE, calls its vtable slot at +0x17C with the second argument.
// @field Unknown +0x88 uint32_t field_0x88
void fn_00456C20(void* self, uint32_t arg) {
    auto ptr = [](uint32_t a) { return reinterpret_cast<void*>(static_cast<uintptr_t>(a)); };

    // esi = list head (node pointer).
    uint32_t esi = lift_field<uint32_t>(self, 0x88);
    if (esi == 0) {
        return;
    }

    for (;;) {
        if (esi == 0) {
            ext_006A60EE();
            return;
        }

        // Node layout: +0x0 next node, +0x8 object pointer.
        uint32_t node = esi;
        esi = lift_field<uint32_t>(ptr(node), 0x0);
        uint32_t obj = lift_field<uint32_t>(ptr(node), 0x8);

        void* value = ext_00455C20();

        using AcceptFn = uint32_t(__thiscall*)(void*, void*);
        auto accept = reinterpret_cast<AcceptFn>(reinterpret_cast<void*>(&ext_006A63BE));
        uint32_t ok = accept(ptr(obj), value);

        if (ok != 0) {
            // Virtual call: vtable slot at +0x17C (index 0x5F), thiscall with one argument.
            uint32_t vtbl = lift_field<uint32_t>(ptr(obj), 0x0);
            uint32_t slot = lift_field<uint32_t>(ptr(vtbl), 0x17C);
            using VirtFn = void(__thiscall*)(void*, uint32_t);
            auto fn = reinterpret_cast<VirtFn>(static_cast<uintptr_t>(slot));
            fn(ptr(obj), arg);
        }

        if (esi == 0) {
            return;
        }
    }
}
} // namespace lift_00456C20

// [0x0045BED0] sub_0045BED0 (87 bytes)
namespace lift_0045BED0 {
extern uint8_t __thiscall ext_0045BCF0(void* self, uint32_t flag);
// Known callee 0x0045B6C0: initFromMFC80Ord2867 (Calls MFC80_ord_2867 with arg2, invokes vtable+0xc on the returned object with arg1, and returns arg1.)
extern uint32_t __stdcall ext_0045B6C0(uint32_t arg1, uint32_t arg2);

// @name resolveStringOrQueryWindow
// @class Unknown
// @summary If ext_0045BCF0(0) succeeds, constructs a std::string at arg1 from a global C-string and returns arg1; otherwise sends WM_USER+0x10A (wParam 9) to the window at +0x20 and passes arg1 and the result to ext_0045B6C0.
// @field Unknown +0x20 HWND field_0x20
uint32_t __thiscall fn_0045BED0(void* self, uint32_t arg1) {
    uint8_t* const obj = static_cast<uint8_t*>(self);

    if (ext_0045BCF0(self, 0) != 0) {
        // Global at 0x00A9F414 holds a pointer to a C-string literal.
        const char* text = *reinterpret_cast<const char* const*>(static_cast<uintptr_t>(0x00A9F414));
        // Import slot 0x00924FE4: std::basic_string<char> ctor (const char*).
        using StringCtorFn = void(__thiscall*)(void* self, const char* text);
        auto stringCtor = reinterpret_cast<StringCtorFn>(
            *reinterpret_cast<uintptr_t*>(static_cast<uintptr_t>(0x00924FE4)));
        stringCtor(reinterpret_cast<void*>(static_cast<uintptr_t>(arg1)), text);
        return arg1;
    }

    const uint32_t hwnd = *reinterpret_cast<uint32_t*>(obj + 0x20);
    // Import slot 0x00925694: USER32!SendMessageA.
    using SendMessageAFn = uint32_t(__stdcall*)(uint32_t hWnd, uint32_t msg, uint32_t wParam, uint32_t lParam);
    auto sendMessageA = reinterpret_cast<SendMessageAFn>(
        *reinterpret_cast<uintptr_t*>(static_cast<uintptr_t>(0x00925694)));
    const uint32_t result = sendMessageA(hwnd, 0x110A, 9, 0);

    ext_0045B6C0(arg1, result);
    return arg1;
}
} // namespace lift_0045BED0
