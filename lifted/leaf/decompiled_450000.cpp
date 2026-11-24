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
