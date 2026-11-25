// Lifted C++ translation unit: lifted/leaf/decompiled_450000.cpp
#include "lift_compat.h"
#include <new>
#include <string>
#include <cstdlib>

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

// [0x00455CD0] sub_00455CD0 (26 bytes)
namespace lift_00455CD0 {
// Known callee 0x004090C0: sub_004090C0 (Returns 1 if the int at self+0xF4 equals 0xE81C or 0xE81D, otherwise 0.)
extern int ext_004090C0(void* self);
// Known callee 0x00455CB0: sub_00455CB0 (Auto-lifted identical-shape clone of 0x004090C0 (sub_004090C0).)
extern int ext_00455CB0(void* self);

// @name descriptiveName: sub_00455CD0_dispatchOnStateAOrB
// @summary Tail-dispatches to ext_00455CB0 when the int at self+0x98 is 0x0A or 0x0B, otherwise tail-calls ext_004090C0.
// @field Unknown +0x98 int32_t field_0x98
extern int __fastcall fn_00455CD0(void* self) {
    const int32_t state = *reinterpret_cast<const int32_t*>(reinterpret_cast<const uint8_t*>(self) + 0x98);
    if (state == 0x0A || state == 0x0B) {
        return ext_00455CB0(self);
    }
    return ext_004090C0(self);
}
} // namespace lift_00455CD0

// [0x00454BE0] sub_00454BE0 (25 bytes)
namespace lift_00454BE0 {
// Callee 0x00454BB0 (sub_00454BB0, 10B): reached by tail jump.
// Assumed ABI: this in ecx -> first parameter, stack argument -> second parameter.
extern void ext_00454BB0(void* self, DWORD value);

// @name sub_00454BE0_storeArgAndTailCallSubobject
// @class Unknown
// @summary Stores its stack argument at self+0x120, then tail-forwards the same argument to sub_00454BB0 on the subobject at self+0x10C.
// @field Unknown +0x120 DWORD field_0x120
void fn_00454BE0(void* self, DWORD value) {
    BYTE* obj = static_cast<BYTE*>(self);
    *reinterpret_cast<DWORD*>(obj + 0x120) = value;
    ext_00454BB0(obj + 0x10C, value);
}
} // namespace lift_00454BE0

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

// [0x00456340]
namespace lift_00456340 {
// @name sub_00456340
// @summary Conditionally invokes vtable+0x188 on this before calling MFC80!ord_1903
// @field Unknown +0x00 void** vtable
// @field Unknown +0xdc uint32_t field_0xdc


extern void fn_006A5EA8(void);

extern void __thiscall fn_00456340(void* self, void* arg1) {
    uint8_t* base = reinterpret_cast<uint8_t*>(self);
    uint32_t flag = *reinterpret_cast<uint32_t*>(base + 0xdc);
    if (flag != 0 && arg1 != self) {
        void** vtable = *reinterpret_cast<void***>(self);
        using Vfn0 = void(__thiscall*)(void*);
        Vfn0 fn = reinterpret_cast<Vfn0>(vtable[0x188 / sizeof(void*)]);
        fn(self);
    }
    fn_006A5EA8();
}
} // namespace lift_00456340

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

// [0x00456280] sub_00456280 (56 bytes)
namespace lift_00456280 {
// Known callee 0x00455F40: Unknown::returnTrueIfNeitherCheckMatches_00455F40
// (Returns 1 only if both ext_00455CB0 and ext_004090C0 return 0 for self; otherwise returns 0.)
extern int __fastcall ext_00455F40(void* self);

// @name Unknown::dispatchIfArg10To17_00456280
// @class Unknown
// @summary Returns 0 if +0xDC is nonzero; returns 1 if ext_00455F40 is true; returns arg1 if arg1 is outside 10..17; otherwise calls the vtable slot at +0x184 with (arg1, arg2, arg3).
// @field Unknown +0xDC uint32_t field_0xdc (read-only gate; multiple conflicting definitions in Unknown.h)
// @field Unknown +0x00 void* vtable (dereferenced to locate slot +0x184)
int fn_00456280(void* self, int arg1, int arg2, int arg3) {
    using VSlot3 = int(__thiscall*)(void* self, int a1, int a2, int a3);

    // Gate: a nonzero dword at +0xDC short-circuits. The original returns the
    // caller's stale eax here, which has no portable equivalent; 0 is used.
    if (lift_field<uint32_t>(self, 0xDC) != 0) {
        return 0;
    }

    int sub = ext_00455F40(self);
    if (sub != 0) {
        return sub;
    }

    // Original: unsigned (arg1 - 10) > 7 -> return arg1 unchanged.
    if (static_cast<uint32_t>(arg1) - 10u > 7u) {
        return arg1;
    }

    // Virtual dispatch: vtable = *(void**)self; slot = *(vtable + 0x184).
    void* vtbl = lift_field<void*>(self, 0);
    auto fn = reinterpret_cast<VSlot3>(lift_field<void*>(vtbl, 0x184));
    return fn(self, arg1, arg2, arg3);
}
} // namespace lift_00456280

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

// [0x00458860] sub_00458860 (68 bytes)
namespace lift_00458860 {
// @name Unknown::setCurrentByIndex
// @class Unknown
// @summary Releases the current element via vtable slot 2, selects element `index` from the array at +0x04..+0x08, stores it as current at +0x10, and invokes its vtable slot 1.
// @field Unknown +0x04 void** field_0x04
// @field Unknown +0x08 void** field_0x08
// @field Unknown +0x10 void* field_0x10
void fn_00458860(void* self, uint32_t index) {
    using VFn = void (*)(void*);

    // Notify the current element (vtable slot 2) if one is set.
    void*& current = lift_field<void*>(self, 0x10);
    if (current != nullptr) {
        void** vtbl = *reinterpret_cast<void***>(current);
        reinterpret_cast<VFn>(vtbl[2])(current);
    }

    // Bounds check: array must exist and index must be < element count.
    void**& begin = lift_field<void**>(self, 0x04);
    void** end = lift_field<void**>(self, 0x08);
    intptr_t byteSpan = reinterpret_cast<uint8_t*>(end) - reinterpret_cast<uint8_t*>(begin);
    uint32_t count = static_cast<uint32_t>(byteSpan >> 2);
    if (begin == nullptr || index >= count) {
        std::abort(); // original calls _invalid_parameter_noinfo
    }

    // Select the element and activate it (vtable slot 1).
    void* next = begin[index];
    current = next;
    void** nextVtbl = *reinterpret_cast<void***>(next);
    reinterpret_cast<VFn>(nextVtbl[1])(next);
}
} // namespace lift_00458860

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

// [0x00455B50]
namespace lift_00455B50 {
// @name Unknown::Sub_00455B50
// @class Unknown
// @summary Calls two helpers on this, then passes the byte at +0x158 and the address of +0x13c to a helper and forwards its result to another helper.
// @field Unknown +0x13c uint8_t field_0x13c
// @field Unknown +0x158 uint8_t field_0x158

extern void ext_00455860(uint8_t* self);
extern void ext_00455410(uintptr_t self);
extern int32_t ext_00465B30(uint32_t flag, uint8_t* ptr);
extern void ext_004691D0(int32_t value);

void fn_00455B50(uint8_t* self)
{
    ext_00455860(self);
    ext_00455410(reinterpret_cast<uintptr_t>(self));

    uint32_t flag = static_cast<uint32_t>(self[0x158]);
    int32_t result = ext_00465B30(flag, self + 0x13c);
    ext_004691D0(result);
}
} // namespace lift_00455B50

// [0x00456C20] sub_00456C20 (75 bytes)
namespace lift_00456C20 {
// Known callee 0x00455C20: CSizingControlBar::vfunc_0 (Returns address of global mem_00936D1C.)
extern void* ext_00455C20(void);
// Known callee 0x006A63BE: thunk_MFC80_ord_3952 (IAT jump thunk forwarding to MFC80!ord_3952.)
// Original calling convention: ecx = obj, one stack argument; returns BOOL in eax.
extern int ext_006A63BE(void* ecx_obj, void* stack_arg);

// @name NotifyNodeList_00456C20
// @summary Walks a singly linked list at this+0x88; for each node, calls ext_006A63BE(obj, ext_00455C20()) and, if true, invokes virtual slot +0x17c on obj with arg.
// @field Unknown +0x88 void* nodeList
// (node layout: +0x00 next pointer, +0x08 object pointer; object vtable slot at +0x17c)
// The original tail-jump to thunk_MFC80_ord_1185 (ext_006A60EE) is only reached when the list head is null
// at a point the loop already guarantees non-null, so it is unreachable and omitted.
void fn_00456C20(void* self, void* arg) {
    void* node = *reinterpret_cast<void**>(static_cast<char*>(self) + 0x88);
    while (node != nullptr) {
        void* next = *reinterpret_cast<void**>(node);
        void* obj = *reinterpret_cast<void**>(static_cast<char*>(node) + 0x08);
        void* token = ext_00455C20();
        int ok = ext_006A63BE(obj, token);
        if (ok != 0) {
            void** vtbl = *reinterpret_cast<void***>(obj);
            void* slot = *reinterpret_cast<void**>(reinterpret_cast<char*>(vtbl) + 0x17c);
            auto method = reinterpret_cast<void (*)(void*, void*)>(slot);
            method(obj, arg);
        }
        node = next;
    }
}
} // namespace lift_00456C20

// [0x00456C70] (75 bytes)
namespace lift_00456C70 {
// @name ProcessNodeList_00456C70
// @summary Walks a singly linked list hanging off the owner at +0x88. For each node, it calls the global getter fn_00455C20, passes that result to thunk_MFC80_ord_3952 on the node's object; if that returns nonzero, it invokes the object's virtual slot at +0x180 with `arg2`. Iteration continues until the next-node pointer is null.
// @field Owner +0x88 void* field_0x88
// @field Node +0x00 uint8_t* next
// @field Node +0x08 void* obj
//
// Note: the asm contains an `je` to ext_006A60EE (thunk_MFC80_ord_1185) at the
// top of the loop. The loop condition guarantees the node is nonzero there, so
// that tail-jump path is unreachable and is omitted.

extern void* ext_00455C20(void);
extern uint32_t ext_006A63BE(void* self, void* arg);

void fn_00456C70(void* self, void* arg2) {
    uint8_t* node = lift_field<uint8_t*>(self, 0x88);
    if (node == nullptr) {
        return;
    }

    while (node != nullptr) {
        uint8_t* next = lift_field<uint8_t*>(node, 0x00);
        void* obj = lift_field<void*>(node, 0x08);

        void* global_ptr = ext_00455C20();

        if (ext_006A63BE(obj, global_ptr) != 0) {
            void* vtbl = lift_field<void*>(obj, 0x00);
            using VirtFn = void (*)(void*, void*);
            VirtFn slot = lift_field<VirtFn>(vtbl, 0x180);
            slot(obj, arg2);
        }

        node = next;
    }
}
} // namespace lift_00456C70

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

// [0x0045BED0] sub_0045BED0 (87 bytes)
namespace lift_0045BED0 {
extern bool ext_0045BCF0(void* self);
// Known callee 0x0045B6C0: initFromMFC80Ord2867 (Calls MFC80_ord_2867 with arg2, invokes vtable+0xc on the returned object with arg1, and returns arg1.)
extern uint32_t ext_0045B6C0(void* self, uint32_t arg1, uint32_t arg2);
extern uint32_t mem_00A9F414;   // .data: address of a const char* string literal

extern LRESULT __stdcall SendMessageA(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// @name Unknown::resolveStringViaWindowMessage_0045BED0
// @class Unknown
// @summary Constructs *out from a global string when ext_0045BCF0 succeeds; otherwise sends window message 0x110A to the owning HWND and forwards the result to ext_0045B6C0. Always returns out.
// @field Unknown +0x20 HWND hwnd
std::string* fn_0045BED0(void* self, std::string* out) {
    // The original's zeroed stack local is not passed to ext_0045BCF0 (no argument is pushed), so it has no observable effect and is omitted.
    if (ext_0045BCF0(self)) {
        const char* literal = reinterpret_cast<const char*>(static_cast<uintptr_t>(mem_00A9F414));
        new (out) std::string(literal);
        return out;
    }

    HWND hwnd = lift_field<HWND>(self, 0x20);
    LRESULT result = SendMessageA(hwnd, 0x110A, 9, 0);
    ext_0045B6C0(self, static_cast<uint32_t>(reinterpret_cast<uintptr_t>(out)),
                 static_cast<uint32_t>(result));
    return out;
}
} // namespace lift_0045BED0

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

// [0x00455EB0]
namespace lift_00455EB0 {
// @name sub_00455EB0_dtor
// @summary Destructor that resets vtables at +0x00 and +0xfc and invokes MFC base/member destructors
// @field Obj +0x00 uint32_t vtable
// @field Obj +0xfc uint32_t subobj_vtable

extern void mem_w32(uintptr_t addr, uint32_t val);
extern void __thiscall ext_006A5FF2(uintptr_t self);
extern void __thiscall ext_006A679C(uintptr_t self);

extern void __thiscall fn_00455EB0(uintptr_t self) {
    mem_w32(self, 0x00936D5Cu);
    uintptr_t subobj = self + 0xFCu;
    mem_w32(subobj, 0x0092A23Cu);
    ext_006A5FF2(subobj);
    ext_006A679C(self);
}
} // namespace lift_00455EB0

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
