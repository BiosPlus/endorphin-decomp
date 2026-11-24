// Lifted C++ translation unit: lifted/leaf/decompiled_6B0000.cpp
#include "lift_compat.h"
#include <new>
#include <string>

#include <string>
namespace lift_006B9D10 {
// @name Unknown::InitAndReturnSelf
// @class Unknown
// @summary Calls sub_006B9910 on the object (zero-inits fields, sets vtable) and returns the same object pointer.

class Unknown;

// External callee: sub_006B9910 (Unknown::sub_006B9910), __thiscall-style, takes this in ecx.
extern void ext_006B9910(Unknown* ecx);

// Lifted from 0x006B9D10: push esi; mov esi, ecx; call sub_006B9910; mov eax, esi; pop esi; ret
Unknown* fn_006B9D10(Unknown* ecx) {
    Unknown* esi = ecx;
    ext_006B9910(ecx);
    return esi;
}
} // namespace lift_006B9D10
#include <cstring>

// [0x006B9960] sub_006B9960 (16 bytes)
namespace lift_006B9960 {
// @name sub_006B9960
// @summary Auto-lifted identical-shape clone of 0x006B9D10 (Unknown::InitAndReturnSelf).
namespace lift_006B9D10 {
// @name Unknown::InitAndReturnSelf
// @class Unknown
// @summary Calls sub_006B9910 on the object (zero-inits fields, sets vtable) and returns the same object pointer.

class Unknown;

// External callee: sub_006B9910 (Unknown::sub_006B9910), __thiscall-style, takes this in ecx.
extern void ext_006B9970(Unknown* ecx);

// Lifted from 0x006B9D10: push esi; mov esi, ecx; call sub_006B9910; mov eax, esi; pop esi; ret
Unknown* fn_006B9960(Unknown* ecx) {
    Unknown* esi = ecx;
    ext_006B9970(ecx);
    return esi;
}
} // namespace lift_006B9D10
} // namespace lift_006B9960

// [0x006B8790] sub_006B8790 (17 bytes)
namespace lift_006B8790 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
extern void ext_006A5EA8();

// @name SubObject::releaseUnlessSelf
// @class SubObject
// @summary If the argument is not the address of this+0x5C, forward the call to MFC80 ord_1903; otherwise do nothing.
void fn_006B8790(void* self, void* arg) {
    // lea eax, [ecx + 0x5c] ; cmp [esp+4], eax ; je skip
    unsigned char* selfBytes = static_cast<unsigned char*>(self);
    void* subAddr = selfBytes + 0x5C;
    if (arg != subAddr) {
        ext_006A5EA8();
    }
    // ret 4 (single stack argument, popped by callee)
}
} // namespace lift_006B8790

// [0x006B1C00]
namespace lift_006B1C00 {
// @name sub_006B1C00
// @summary Derived constructor calling sub_006B0C40 and setting vtable to 0x00991784.
// @field Unknown +0x00 uint32_t vtable


extern uint32_t __thiscall ext_006B0C40(uint32_t self, uint32_t arg0);
extern void mem_write32(uint32_t addr, uint32_t val);

uint32_t __thiscall sub_006B1C00(uint32_t self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    mem_write32(self, 0x00991784u);
    return self;
}
} // namespace lift_006B1C00

// [0x006B1AA0]
namespace lift_006B1AA0 {
extern uint32_t __thiscall ext_006B0C40(uint32_t self, uint32_t arg0);
extern void mem_write32(uint32_t addr, uint32_t val);

// @name sub_006B1AA0_ctor
// @summary Constructor that calls base constructor ext_006B0C40 and sets vtable to 0x00991768.
// @field +0x00 uint32_t vtable
uint32_t __thiscall sub_006B1AA0(uint32_t self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    mem_write32(self, 0x00991768u);
    return self;
}
} // namespace lift_006B1AA0

// [0x006B20A0]
namespace lift_006B20A0 {
extern uint32_t __thiscall ext_006B0C40(uint32_t self, uint32_t arg0);

// @name sub_006B20A0
// @summary Derived constructor that calls base sub_006B0C40 and sets vtable to 0x009917BC.
// @field +0x00 uint32_t vtable
uint32_t __thiscall sub_006B20A0(uint32_t self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    *(uint32_t*)(uintptr_t)self = 0x009917BCu;
    return self;
}
} // namespace lift_006B20A0

// [0x006B1E60]
namespace lift_006B1E60 {
// @name sub_006B1E60
// @summary Derived constructor that calls base sub_006B0C40 and sets vtable to 0x009917A0.
// @field Unknown +0x00 uint32_t vtable


extern uint32_t __thiscall ext_006B0C40(uint32_t self, uint32_t arg0);
extern void mem_write32(uint32_t addr, uint32_t val);

uint32_t __thiscall sub_006B1E60(uint32_t self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    mem_write32(self, 0x009917A0u);
    return self;
}
} // namespace lift_006B1E60

// [0x006B2400]
namespace lift_006B2400 {
extern void mem_write32(uint32_t addr, uint32_t val);
extern uint32_t __thiscall ext_006B0C40(uint32_t self, uint32_t arg0);

// @name sub_006B2400
// @summary Constructor that calls base constructor sub_006B0C40 and sets vtable to 0x009917F4.
// @field <unknown> +0x00 uint32_t vtable
uint32_t __thiscall sub_006B2400(uint32_t self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    mem_write32(self, 0x009917F4u);
    return self;
}
} // namespace lift_006B2400

// [0x006B6270] sub_006B6270 (25 bytes)
namespace lift_006B6270 {
// @name sub_006B6270
// @summary Auto-lifted identical-shape clone of 0x00454BE0 (sub_00454BE0_storeArgAndTailCallSubobject).
namespace lift_00454BE0 {
// Callee 0x00454BB0 (sub_00454BB0, 10B): reached by tail jump.
// Assumed ABI: this in ecx -> first parameter, stack argument -> second parameter.
extern void ext_006B0DE0(void* self, DWORD value);

// @name sub_00454BE0_storeArgAndTailCallSubobject
// @class Unknown
// @summary Stores its stack argument at self+0x120, then tail-forwards the same argument to sub_00454BB0 on the subobject at self+0x10C.
// @field Unknown +0x120 DWORD field_0x120
void fn_006B6270(void* self, DWORD value) {
    BYTE* obj = static_cast<BYTE*>(self);
    *reinterpret_cast<DWORD*>(obj + 0x114) = value;
    ext_006B0DE0(obj + 0xA8, value);
}
} // namespace lift_00454BE0
} // namespace lift_006B6270

// [0x006B95F0] sub_006B95F0 (29 bytes)
namespace lift_006B95F0 {
// Known callee 0x006A5C6E: thunk_MFC80_ord_572 (IAT jump thunk forwarding to MFC80!ord_572.)
extern void ext_006A5C6E();

// @name Unknown::initVtableAndSizeFields
// @class Unknown
// @summary Calls an MFC80 import, installs vtable 0x0099304C at offset 0, sets fields +0x54/+0x58 to 0x10, and returns this.
// @field Unknown +0x00 DWORD vfptr
// @field Unknown +0x54 DWORD field_0x54
// @field Unknown +0x58 DWORD field_0x58
void fn_006B95F0(void* self) {
    ext_006A5C6E();
    lift_field<DWORD>(self, 0x00) = 0x0099304C;
    lift_field<DWORD>(self, 0x54) = 0x10;
    lift_field<DWORD>(self, 0x58) = 0x10;
    (void)self;
}
} // namespace lift_006B95F0

// [0x006BB790] sub_006BB790 (31 bytes)
namespace lift_006BB790 {
// Known callee 0x006D98E0: sub_006D98E0 (Returns global int32 value from mem_00AA91C4.)
extern int32_t ext_006D98E0(void);

// @name Unknown::GetStateTypeIs2OrChained
// @class Unknown
// @summary Reads a type code from the object's inner struct (+0x04); if it is 2, returns the global-based
//          status, mapping a value of 2 to 1 and otherwise returning the global value again. Otherwise returns the type code.
// @field Unknown +0x00 void* innerPtr (pointer to inner struct, dereferenced from self)
// @field Unknown +0x04 int32_t field_0x04 (type code read from inner struct; compared against 2)
int32_t fn_006BB790(void* self) {
    // ecx = self; inner = *(void**)self; type = *(int32_t*)(inner + 4)
    void* inner = *reinterpret_cast<void* const*>(self);
    int32_t type = lift_field<int32_t>(inner, 4);
    if (type != 2) {
        return type;
    }
    if (ext_006D98E0() == 2) {
        return 1;
    }
    // Original tail-jumps to 0x006D98E0 here.
    return ext_006D98E0();
}
} // namespace lift_006BB790

// [0x006B3A90] sub_006B3A90 (32 bytes)
namespace lift_006B3A90 {
// @name sub_006B3A90
// @summary Auto-lifted identical-shape clone of 0x004F27E0 (descriptiveName_004F27E0).
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_006ADBF0(void* self, DWORD arg1, DWORD arg2);
extern const char mem_009919BC[];

__thiscall void* fn_006B3A90(void* self, DWORD arg1, DWORD arg2) {
    ext_006ADBF0(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_009919BC));
    return self;
}
} // namespace lift_004F27E0
} // namespace lift_006B3A90

// [0x006B3C90] sub_006B3C90 (32 bytes)
namespace lift_006B3C90 {
// @name sub_006B3C90
// @summary Auto-lifted identical-shape clone of 0x004F27E0 (descriptiveName_004F27E0).
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_006ADBF0(void* self, DWORD arg1, DWORD arg2);
extern const char mem_009919EC[];

__thiscall void* fn_006B3C90(void* self, DWORD arg1, DWORD arg2) {
    ext_006ADBF0(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_009919EC));
    return self;
}
} // namespace lift_004F27E0
} // namespace lift_006B3C90

// [0x006B4060] sub_006B4060 (32 bytes)
namespace lift_006B4060 {
// @name sub_006B4060
// @summary Auto-lifted identical-shape clone of 0x004F27E0 (descriptiveName_004F27E0).
namespace lift_004F27E0 {
// @name descriptiveName_004F27E0
// @summary Thiscall initializer: calls ext_004F4D20(this, arg1, arg2), stores the @MO vtable at +0x00, returns this.
// @field Unknown +0x00 DWORD vtable

extern void ext_006ADBF0(void* self, DWORD arg1, DWORD arg2);
extern const char mem_00991A14[];

__thiscall void* fn_006B4060(void* self, DWORD arg1, DWORD arg2) {
    ext_006ADBF0(self, arg1, arg2);
    *reinterpret_cast<DWORD*>(self) = static_cast<DWORD>(reinterpret_cast<uintptr_t>(mem_00991A14));
    return self;
}
} // namespace lift_004F27E0
} // namespace lift_006B4060

// [0x006B2590] sub_006B2590 (32 bytes)
namespace lift_006B2590 {
// Known callee 0x006B0C40: sub_006B0C40 (Constructor that initializes vtable to 0x00991348, clears field_0x04, and stores arg0 at field_0x0c.)
extern uint32_t ext_006B0C40(void* self, uint32_t arg0);

// @name Unknown::InitWithFlagAndVtable
// @class Unknown
// @summary Runs the base constructor with arg0, then sets the derived vtable to 0x00991810 and stores the low byte of arg0 at field_0x10.
// @field Unknown +0x00 void* vtable
// @field Unknown +0x10 uint8_t field_0x10
uintptr_t fn_006B2590(void* self, uint32_t arg0, uint32_t /*arg1: unused, stdcall ret 8 pops it*/) {
    ext_006B0C40(self, arg0);
    lift_field<uint32_t>(self, 0x00) = 0x00991810;
    lift_field<uint8_t>(self, 0x10) = static_cast<uint8_t>(arg0);
    return reinterpret_cast<uintptr_t>(self);
}
} // namespace lift_006B2590

// [0x006BDAF0] sub_006BDAF0 (32 bytes)
namespace lift_006BDAF0 {
// @name Unknown::MatchesLinkedTag
// @class Unknown
// @summary Returns TRUE if the object's linked pointer at +0x04 is non-null and its first dword equals the object's own first dword at +0x00.
// @field Unknown +0x00 DWORD field_00
// @field Unknown +0x04 void* linked
BOOL fn_006BDAF0(void* self) {
    void* linked = lift_field<void*>(self, 0x04);
    if (linked == nullptr) {
        return FALSE;
    }
    DWORD linkedTag = *reinterpret_cast<DWORD*>(linked);
    DWORD ownTag = lift_field<DWORD>(self, 0x00);
    if (linkedTag != ownTag) {
        return FALSE;
    }
    return TRUE;
}
} // namespace lift_006BDAF0

// [0x006BC0D0] sub_006BC0D0 (32 bytes)
namespace lift_006BC0D0 {
// @name Unknown::ForwardSetValueThroughChild
// @class Unknown
// @summary Calls virtual slot +0x74 on the child object at +0x00 with (old value at +0x08, 1), then stores the new argument into +0x08.
// @field Unknown +0x00 void* field_0x00
// @field Unknown +0x08 uint32_t field_0x08

// Virtual slot at byte offset 0x74 (slot 29 on the 32-bit target).
// Called __thiscall: object in ECX, then (oldValue, flag) on the stack.
typedef void(__thiscall* ChildSlot74Fn)(void* self, uint32_t oldValue, int32_t flag);

void __thiscall fn_006BC0D0(void* self, uint32_t value) {
    void* child = lift_field<void*>(self, 0x00);
    uint32_t oldValue = lift_field<uint32_t>(self, 0x08);

    void** vtbl = *reinterpret_cast<void***>(child);
    void* slot = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(vtbl) + 0x74);
    reinterpret_cast<ChildSlot74Fn>(slot)(child, oldValue, 1);

    lift_field<uint32_t>(self, 0x08) = value;
}
} // namespace lift_006BC0D0

// [0x006B4FA0] sub_006B4FA0 (33 bytes)
namespace lift_006B4FA0 {
// @name sub_006B4FA0
// @summary Auto-lifted identical-shape clone of 0x0040A910 (sub_00407830).
namespace lift_0040A910 {
// Imported MFC80 ordinal 297 (thiscall: self = first arg, then 2 stack args), via indirect slot.
extern void (*mem_00924494)(void* self, void* subobject, int flags);

// @name Unknown::forwardSubobject68ThenMfcOrd297
// @class Unknown
// @summary Calls MFC80 ordinal 297 on the argument with (this+0x68, 0) and returns the argument.
// @field Unknown +0x68 void* subobject
void* fn_006B4FA0(void* self, void* arg1) {
    void* subobject = reinterpret_cast<uint8_t*>(self) + 0x74;
    mem_00924494(arg1, subobject, 0);
    return arg1;
}
} // namespace lift_0040A910
} // namespace lift_006B4FA0

// [0x006BBA00] sub_006BBA00 (36 bytes)
namespace lift_006BBA00 {
// @name sub_006BBA00
// @summary Auto-lifted identical-shape clone of 0x007747B0 (initNegatedHugeGlobals).
namespace lift_007747B0 {
extern uint32_t mem_00925284;  // holds address of MSVCR80 _HUGE (double)
extern double mem_00B5D2F0;
extern double mem_00B5D2F8;
extern double mem_00B5D300;

// @name initNegatedHugeGlobals
// @summary Stores -_HUGE into three global doubles.
void fn_006BBA00(void) {
    const double huge = *reinterpret_cast<const double*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5D2F0 = -huge;
    mem_00B5D2F8 = -huge;
    mem_00B5D300 = -huge;
}
} // namespace lift_007747B0
} // namespace lift_006BBA00

// [0x006B51D0] sub_006B51D0 (40 bytes)
namespace lift_006B51D0 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
// Thiscall: self is passed in ecx; no stack arguments are forwarded by the caller here.
extern void ext_006A5EA8(void* self);

// @name Unknown::onCode13VirtualThenForward
// @summary If arg1 == 0xD and self+0xDC is zero, call vtable slot at +0x13C on self; then always forward self to ext_006A5EA8.
// @field Unknown +0x00 void* vptr
// @field Unknown +0xdc uint8_t field_0xdc
// Note: original is thiscall with 3 stack args and `ret 0xc` (callee-cleaned); only arg1 is read.
void fn_006B51D0(void* self, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
    (void)arg2;
    (void)arg3;

    if (arg1 == 0x0Du) {
        const uint8_t flag = lift_field<uint8_t>(self, 0xDC);
        if (flag == 0) {
            void* vtbl = lift_field<void*>(self, 0x00);
            auto slot = lift_field<void (*)(void*)>(vtbl, 0x13C);
            slot(self);
        }
    }

    ext_006A5EA8(self);
}
} // namespace lift_006B51D0

// [0x006BEC70]
namespace lift_006BEC70 {
// @name sub_006BEC70_init_globals
// @summary Stores four initialization values into globals at 0x00B5D450..0x00B5D45C.

extern uint32_t mem_00B5D450;
extern uint32_t mem_00B5D454;
extern uint32_t mem_00B5D458;
extern uint32_t mem_00B5D45C;

void sub_006BEC70_init_globals() {
    mem_00B5D450 = 0x00B5D448u;
    mem_00B5D458 = 0x00AA88B0u;
    mem_00B5D454 = 0x00B5F050u;
    mem_00B5D45C = 0u;
}
} // namespace lift_006BEC70

// [0x006B7D90] sub_006B7D90 (42 bytes)
namespace lift_006B7D90 {
// Known callee 0x006A5F4A: thunk_MFC80_ord_3761 (IAT jump thunk forwarding to MFC80!ord_3761.)
// Takes its object in ecx and one stack argument.
extern void ext_006A5F4A(void* ecx, void* arg);

// @name CObjectBase::UpdateSubobjects
// @class CObjectBase
// @summary Calls the thunk on the embedded subobject at +0x88 (passing +0x74 as the argument), then invokes vtable slot 0 of the object at +0x1A4 if it is set.
// @field CObjectBase +0x74 void* field_0x74
// @field CObjectBase +0x88 void* field_0x88
// @field CObjectBase +0x1A4 void* field_0x1A4
void fn_006B7D90(void* self) {
    auto* base = static_cast<uint8_t*>(self);

    void* arg = base + 0x74;
    void* subobj = base + 0x88;
    ext_006A5F4A(subobj, arg);

    void* obj = lift_field<void*>(self, 0x1A4);
    if (obj != nullptr) {
        void** vtbl = *static_cast<void***>(obj);
        auto slot0 = reinterpret_cast<void (*)(void*, void*)>(vtbl[0]);
        slot0(obj, self);
    }
}
} // namespace lift_006B7D90

// [0x006B4D30]
namespace lift_006B4D30 {
extern int32_t __thiscall ext_006A5EA8(void* self);
extern void __thiscall ext_006A673C(void* self, uint32_t msg, uint32_t wParam, uint32_t lParam);

// @name sub_006B4D30
// @summary Checks selection via MFC80!ord_1903; if valid (!= -1), posts/sends message (0x200, 0, 0x20) via MFC80!ord_4118 and returns 0, else returns -1.
extern int32_t __thiscall fn_006B4D30(void* self, uint32_t /*unused_arg*/) {
    int32_t sel = ext_006A5EA8(self);
    if (sel == -1) {
        return -1;
    }
    ext_006A673C(self, 0x200u, 0u, 0x20u);
    return 0;
}
} // namespace lift_006B4D30

// [0x006B8B20]
namespace lift_006B8B20 {
// @name Unknown::setObjectAndValidateWindow
// @class Unknown
// @summary Stores the object pointer from *arg1 into field_0x5C, clears it if the object's window handle (+0x20) fails IsWindow, then tail-calls the base handler ext_006A5EA8.
// @field Unknown +0x5C uint32_t field_0x5C


extern uint32_t mem_read32(uint32_t addr);
extern void mem_write32(uint32_t addr, uint32_t value);
extern void ext_006A5EA8(uint32_t ecx);

// thiscall (ecx = this), stdcall-style single stack argument (ret 4).
void fn_006B8B20(uint32_t ecx, uint32_t arg0) {
    uint32_t obj = mem_read32(arg0);
    mem_write32(ecx + 0x5c, obj);
    if (obj != 0) {
        uint32_t hwnd = mem_read32(obj + 0x20);
        using IsWindowFn = uint32_t (*)(uint32_t);
        uint32_t target = mem_read32(0x0092561C);
        uint32_t ok = reinterpret_cast<IsWindowFn>(static_cast<uintptr_t>(target))(hwnd);
        if (ok == 0) {
            mem_write32(ecx + 0x5c, 0u);
        }
    }
    ext_006A5EA8(ecx);
}
} // namespace lift_006B8B20

// [0x006B9640]
namespace lift_006B9640 {
extern LRESULT ext_SendMessageA(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
// USER32!InvalidateRect through IAT slot mem_00925688
extern BOOL ext_InvalidateRect(HWND hwnd, const RECT* rect, BOOL erase);

// @name SendMsg0x19A_InvalidateWindow
// @summary Sends message 0x19A to the window handle stored at this+0x20 with the two stack arguments, then invalidates that window's full client area.
extern void __thiscall fn_006B9640(void* self, WPARAM wp, LPARAM lp) {
    HWND hwnd = *reinterpret_cast<HWND*>(reinterpret_cast<uint8_t*>(self) + 0x20);
    ext_SendMessageA(hwnd, 0x19A, wp, lp);
    ext_InvalidateRect(*reinterpret_cast<HWND*>(reinterpret_cast<uint8_t*>(self) + 0x20), nullptr, TRUE);
}
} // namespace lift_006B9640

// [0x006B8190] sub_006B8190 (46 bytes)
namespace lift_006B8190 {
// Known callee 0x006A5E4E: thunk_MFC80_ord_6065 (IAT jump thunk forwarding to MFC80!ord_6065.)
// Modeled as: ecx = child object, then six stack dwords (lowest address first).
extern void ext_006A5E4E(void* child, void* stack0, DWORD stack1, DWORD stack2,
                             DWORD stack3, DWORD stack4, DWORD stack5);

// @name CallChildAt88Forward
// @class Self
// @summary If the embedded child at self+0x88 is non-null and its dword at +0x20 is nonzero, forwards two stack args plus constant 0x214 to the child-call thunk; callee pops 12 bytes.
// @field Self +0x88 void* childObject
// @field Self +0xA8 DWORD field_0xA8
void fn_006B8190(void* self, DWORD unused, DWORD arg2, DWORD arg3) {
    (void)unused;
    const uintptr_t child = reinterpret_cast<uintptr_t>(self) + 0x88;
    if (child == 0) {
        return;
    }
    const DWORD flag = *reinterpret_cast<const DWORD*>(child + 0x20);
    if (flag == 0) {
        return;
    }
    ext_006A5E4E(reinterpret_cast<void*>(child), self, 0, 0, arg2, arg3, 0x214);
}
} // namespace lift_006B8190

// [0x006BA2C0]
namespace lift_006BA2C0 {
extern uint8_t mem_00B5D2B4[];

// @name StringBuffer::getCharPtrAt
// @class StringBuffer
// @summary Returns a pointer to the character at the given index if in bounds, otherwise clears and returns a fallback empty byte buffer.
// @field StringBuffer +0x00 uint32_t data
// @field StringBuffer +0x04 uint32_t size
uint32_t __thiscall sub_006BA2C0(void* self, uint32_t index) {
    uint32_t size = *reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(self) + 0x04);
    if (index < size) {
        uint32_t data = *reinterpret_cast<uint32_t*>(self);
        return data + index;
    }
    mem_00B5D2B4[0] = 0;
    return static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B5D2B4));
}
} // namespace lift_006BA2C0

// [0x006BA2F0]
namespace lift_006BA2F0 {
// @name String::reverseFind
// @class String
// @summary Finds the last occurrence of a character in the string and returns its index, or -1 if not found.
// @field String +0x00 const char* m_data

int32_t __thiscall sub_006BA2F0(void* self, char ch) {
    const char* str = *reinterpret_cast<const char* const*>(self);
    const char* found = std::strrchr(str, static_cast<int>(ch));
    if (!found) {
        return -1;
    }
    return static_cast<int32_t>(found - str);
}
} // namespace lift_006BA2F0

// [0x006B9990]
namespace lift_006B9990 {
extern uint8_t mem_00B5D2B8[];
extern uint8_t mem_00B5D2BC[];
extern void __thiscall ext_006B9910(void* ecx);

// @name Unknown::detachBuffer
// @class Unknown
// @summary Detaches the heap buffer into out if it is not a static sentinel or inline buffer, then resets the object.
// @field Unknown +0x00 uint32_t field_0x00
// @field Unknown +0x0C uint8_t field_0x0C
void __thiscall sub_006B9990(void* ecx, uint32_t* out) {
    *out = 0;
    uint32_t val = *reinterpret_cast<uint32_t*>(ecx);
    uint32_t inline_buf = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(ecx) + 0xC);
    if (val != static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B5D2B8)) &&
        val != static_cast<uint32_t>(reinterpret_cast<uintptr_t>(mem_00B5D2BC)) &&
        val != inline_buf) {
        *out = val;
    }
    ext_006B9910(ecx);
}
} // namespace lift_006B9990

// [0x006B9CE0]
namespace lift_006B9CE0 {
uint8_t mem_read_u8(uintptr_t);

// @name strContainsChar
// @summary Checks whether a null-terminated string contains a given byte character.
uint8_t __stdcall sub_006B9CE0(uint8_t ch, uintptr_t str) {
  if (str == 0) {
    return 0;
  }
  while (str != 0) {
    uint8_t c = mem_read_u8(str);
    if (c == 0) {
      return 0;
    }
    if (c == ch) {
      return 1;
    }
    ++str;
  }
  return 0;
}
} // namespace lift_006B9CE0

// [0x006BD210]
namespace lift_006BD210 {
// @name Pair::equals
// @class Pair
// @summary Compares two 32-bit fields at offsets +0x00 and +0x04 for equality.
// @field Pair +0x00 uint32_t field_0x00
// @field Pair +0x04 uint32_t field_0x04
uint32_t __thiscall sub_006BD210(uint32_t* self, const uint32_t* other) {
    if (other[0] != self[0]) {
        return 0;
    }
    if (other[1] != self[1]) {
        return 0;
    }
    return 1;
}
} // namespace lift_006BD210

// [0x006B8B10]
namespace lift_006B8B10 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
extern void ext_006A5EA8();

// @name thunk_forwardToMFC80Ord1903
// @summary Thin wrapper that forwards to the MFC80 ord_1903 import thunk and returns (ret 0xc).
void fn_006B8B10(void) {
    ext_006A5EA8();
}
} // namespace lift_006B8B10
