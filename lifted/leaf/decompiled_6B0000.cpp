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
#include <cstdint>
#include <cstdlib>
#include <cmath>

#include <cmath>
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

// [0x006B9970] sub_006B9970 (32 bytes)
namespace lift_006B9970 {
// Known callee 0x006B9990: Unknown::detachBuffer (Detaches the heap buffer into out if it is not a static sentinel or inline buffer, then resets the object.)
extern void ext_006B9990(void* ecx, uint32_t* out);
// Known callee 0x006A5C5C: thunk_MFC80_ord_764 (IAT jump thunk forwarding to MFC80!ord_764; used as operator delete.)
extern void ext_006A5C5C(void* block);

// @name Unknown::detachAndRelease
// @class Unknown
// @summary Detaches the object's heap buffer via detachBuffer and releases the detached pointer through MFC80 ord_764 (operator delete).
void fn_006B9970(void* self) {
    uint32_t buffer = 0;
    ext_006B9990(self, &buffer);
    ext_006A5C5C(reinterpret_cast<void*>(static_cast<uintptr_t>(buffer)));
}
} // namespace lift_006B9970

// [0x006B53D0] sub_006B53D0 (49 bytes)
namespace lift_006B53D0 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
// Known callee 0x006AD0D0: sub_006AD0D0 (4 bytes), takes this-like arg in ECX, returns AL.
extern void __fastcall ext_006A5EA8(void* self);
extern uint8_t __fastcall ext_006AD0D0(void* self);
extern int mem_00925688;

// @name Unknown::invalidateOnFlagClearAndForward
// @class Unknown
// @summary If flag +0x64 is set and ext_006AD0D0(+0x58) returns 0, clear the flag and call InvalidateRect(+0x20, NULL, TRUE); then always forward to thunk ext_006A5EA8.
// @field Unknown +0x20 HWND hwnd
// @field Unknown +0x58 void* field_0x58
// @field Unknown +0x64 uint8_t dirtyFlag
extern void __fastcall fn_006B53D0(void* self) {
    if (lift_field<uint8_t>(self, 0x64) != 0) {
        uint8_t r = ext_006AD0D0(lift_field<void*>(self, 0x58));
        if (r == 0) {
            lift_field<uint8_t>(self, 0x64) = r;
            using InvalidateRectFn = BOOL(__stdcall*)(HWND, const RECT*, BOOL);
            auto invalidateRect = reinterpret_cast<InvalidateRectFn>(static_cast<uintptr_t>(mem_00925688));
            invalidateRect(lift_field<HWND>(self, 0x20), nullptr, TRUE);
        }
    }
    ext_006A5EA8(self);
}
} // namespace lift_006B53D0

// [0x006B4870] sub_006B4870 (54 bytes)
namespace lift_006B4870 {
// Known callee 0x006A64AE: thunk_MFC80_ord_1161 (IAT jump thunk forwarding to MFC80!ord_1161.)
// Stdcall-style: 11 stack dwords, callee cleans up (no caller adjustment after call).
extern DWORD ext_006A64AE(DWORD, DWORD, DWORD, DWORD, DWORD, DWORD,
                              DWORD, DWORD, DWORD, DWORD, DWORD);
// Known callee 0x006A5CEC: thunk_MFC80_ord_1655 (IAT jump thunk forwarding to MFC80!ord_1655.)
// Thiscall-style: ECX = self, two stack dwords.
extern DWORD ext_006A5CEC(void* self, DWORD, DWORD);

// @name CallCreateWithArgsAndNotify
// @class <Class> (none: no direct field access, self is forwarded only)
// @summary Forwards four dwords plus fixed flags to MFC80!ord_1161, then passes its result and self to MFC80!ord_1655.
// (no @field: function reads no object offsets directly)
DWORD fn_006B4870(void* self, DWORD a1, DWORD a2, DWORD a3, DWORD a4) {
    DWORD r = ext_006A64AE(0x40, 0, 0, 0, 0, a1, a2, a3, a4, 0,
                           static_cast<DWORD>(reinterpret_cast<uintptr_t>(self)));
    return ext_006A5CEC(self, 0, r);
}
} // namespace lift_006B4870

// [0x006BE950]
namespace lift_006BE950 {
// @name initHugeBounds
// @summary Initializes three 64-bit globals with the double value from MSVCR80.dll!_HUGE


extern uint32_t mem_00925284;
extern uint32_t mem_00B5D470;
extern uint32_t mem_00B5D474;
extern uint32_t mem_00B5D478;
extern uint32_t mem_00B5D47C;
extern uint32_t mem_00B5D480;
extern uint32_t mem_00B5D484;

void sub_006BE950() {
    const uint32_t* huge_ptr = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    uint32_t lo = huge_ptr[0];
    uint32_t hi = huge_ptr[1];
    mem_00B5D470 = lo;
    mem_00B5D474 = hi;
    mem_00B5D478 = lo;
    mem_00B5D47C = hi;
    mem_00B5D480 = lo;
    mem_00B5D484 = hi;
}
} // namespace lift_006BE950

// [0x006BB9B0]
namespace lift_006BB9B0 {
// @name initHugeVectorGlobals
// @summary Initializes three 64-bit global values from MSVCR80.dll!_HUGE.


extern uint32_t mem_00925284;
extern uint32_t mem_00B5D2D8;
extern uint32_t mem_00B5D2DC;
extern uint32_t mem_00B5D2E0;
extern uint32_t mem_00B5D2E4;
extern uint32_t mem_00B5D2E8;
extern uint32_t mem_00B5D2EC;

void sub_006BB9B0(void) {
    uint32_t* huge_ptr = reinterpret_cast<uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    mem_00B5D2D8 = huge_ptr[0];
    mem_00B5D2DC = huge_ptr[1];
    mem_00B5D2E0 = huge_ptr[0];
    mem_00B5D2E4 = huge_ptr[1];
    mem_00B5D2E8 = huge_ptr[0];
    mem_00B5D2EC = huge_ptr[1];
}
} // namespace lift_006BB9B0

// [0x006B7420] sub_006B7420 (60 bytes)
namespace lift_006B7420 {
extern uint32_t mem_00925618; // IAT slot holding USER32!PostMessageA

// @name PostMessageIfActive
// @class Unknown
// @summary Stores arg at +0x68; if the flag at +0x60 is set and arg != 13, posts WM_KEYDOWN(arg) to the window at +0x90. Returns 0, or -1 when the flag is clear and arg != 13.
// @field Unknown +0x60 uint8_t flag
// @field Unknown +0x68 int32_t storedArg
// @field Unknown +0x90 HWND hwnd
int32_t fn_006B7420(void* self, int32_t arg) {
    constexpr int32_t kSpecialArg = 0x0D;
    constexpr uint32_t kWmKeyDown = 0x0100;

    const uint8_t flag = lift_field<uint8_t>(self, 0x60);
    lift_field<int32_t>(self, 0x68) = arg;

    if (flag == 0) {
        if (arg != kSpecialArg) {
            return -1;
        }
        return 0;
    }

    if (arg != kSpecialArg) {
        using PostMessageAFn = int32_t(*)(void* hwnd, uint32_t msg, uintptr_t wparam, intptr_t lparam);
        auto postMessageA = reinterpret_cast<PostMessageAFn>(static_cast<uintptr_t>(mem_00925618));
        void* hwnd = lift_field<void*>(self, 0x90);
        postMessageA(hwnd, kWmKeyDown, static_cast<uintptr_t>(static_cast<uint32_t>(arg)), 0);
    }
    return 0;
}
} // namespace lift_006B7420

// [0x006B87B0] sub_006B87B0 (60 bytes)
namespace lift_006B87B0 {
extern BOOL(__stdcall* mem_0092561C)(HWND hwnd);
extern LRESULT(__stdcall* mem_00925694)(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
extern void __thiscall ext_006A5E72(void* self, DWORD arg);

// @name SubobjectWindowRedrawNotify
// @summary If the window handle held in the embedded subobject at +0x5C is valid, send WM_SETREDRAW-style message (0x184) to the window at +0x7C, then forward to the subobject's handler.
// @field UnknownClass +0x7C HWND field_0x7C
void fn_006B87B0(void* self) {
    auto* base = static_cast<unsigned char*>(self);
    auto* sub = base + 0x5C;

    HWND subHwnd = nullptr;
    if (sub != nullptr) {
        subHwnd = *reinterpret_cast<HWND*>(sub + 0x20);
    }

    if (mem_0092561C(subHwnd) == FALSE) {
        return;
    }

    HWND hwnd = *reinterpret_cast<HWND*>(base + 0x7C);
    mem_00925694(hwnd, 0x184, 0, 0);
    ext_006A5E72(sub, 0);
}
} // namespace lift_006B87B0

// [0x006B1750] sub_006B1750 (64 bytes)
namespace lift_006B1750 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
extern void __thiscall ext_006A5EA8(void* self);
// IAT slot holding USER32!TrackMouseEvent.
extern int mem_009255E8;

// Win32 TRACKMOUSEEVENT (16 bytes).
struct TrackMouseEventLayout {
    uint32_t cbSize;
    uint32_t dwFlags;
    uint32_t hwndTrack;
    uint32_t dwHoverTime;
};

// @name Window::StartMouseLeaveTracking
// @class Window
// @summary If mouse-leave tracking is not yet armed (byte +0x70 == 0), arm it and request WM_MOUSELEAVE via TrackMouseEvent(TME_LEAVE) on the window at +0x20; then forward to ext_006A5EA8 with self. Takes 3 stack args (ret 0xc), which are unused.
// @field Window +0x20 uint32_t hwnd
// @field Window +0x70 uint8_t mouseTrackArmed
void __thiscall fn_006B1750(void* self, uint32_t arg0, uint32_t arg1, uint32_t arg2) {
    (void)arg0;
    (void)arg1;
    (void)arg2;

    auto* base = reinterpret_cast<uint8_t*>(self);
    if (base[0x70] == 0) {
        base[0x70] = 1;

        TrackMouseEventLayout tme{};
        tme.cbSize = 0x10;
        tme.dwFlags = 0x2; // TME_LEAVE
        tme.hwndTrack = *reinterpret_cast<uint32_t*>(base + 0x20);

        using TrackMouseEventFn = int(__stdcall*)(TrackMouseEventLayout*);
        auto fn = reinterpret_cast<TrackMouseEventFn>(static_cast<uintptr_t>(mem_009255E8));
        fn(&tme);
    }

    ext_006A5EA8(self);
}
} // namespace lift_006B1750

// [0x006B12F0]
namespace lift_006B12F0 {
// @name roundDoubleToInt
// @summary Truncates x via ext_006A6DE0, then corrects to the nearest integer (ties away from zero, NaN/zero take the -1 branch).

extern int32_t __cdecl ext_006A6DE0(double x);

// @class none (free function)

extern int32_t __cdecl sub_006B12F0(double x) {
    int32_t n = ext_006A6DE0(x);
    double diff = std::fabs(x - static_cast<double>(n));
    if (diff < 0.5) {
        return n;
    }
    // Remaining branch: x > 0 => n + 1, otherwise (x <= 0 or NaN) => n - 1.
    return (x > 0.0) ? n + 1 : n - 1;
}
} // namespace lift_006B12F0

// [0x006B0E30] sub_006B0E30 (69 bytes)
namespace lift_006B0E30 {
// Known callee 0x006A663A: thunk_MFC80_ord_4888 (IAT jump thunk forwarding to MFC80!ord_4888.)
extern void ext_006A663A();
// IAT slot holding USER32!SendMessageA
extern int mem_00925694;

// @name Unknown::clearSelectionAndScrollCaret
// @class Unknown
// @summary If the flag at +0x60 is clear, clear the edit selection and scroll the caret into view; otherwise clear the flag.
// @field Unknown +0x20 HWND hwnd
// @field Unknown +0x60 BYTE flag
extern void __thiscall fn_006B0E30(void* self, uint32_t arg) {
    // The original pushes `arg` before this call; the stub signature
    // (void(void)) cannot carry it, so the argument is not forwarded here.
    ext_006A663A();

    if (lift_field<BYTE>(self, 0x60) != 0) {
        lift_field<BYTE>(self, 0x60) = 0;
        return;
    }

    using SendMessageAFn = LRESULT(__stdcall*)(HWND, UINT, WPARAM, LPARAM);
    auto sendMessageA = reinterpret_cast<SendMessageAFn>(static_cast<uintptr_t>(mem_00925694));
    HWND hwnd = lift_field<HWND>(self, 0x20);

    // EM_SETSEL (0x00B1), wParam = -1 clears the selection.
    sendMessageA(hwnd, 0x00B1, static_cast<WPARAM>(-1), 0);
    // EM_SCROLLCARET (0x00B7).
    sendMessageA(hwnd, 0x00B7, 0, 0);
}
} // namespace lift_006B0E30

// [0x006BBA40] sub_006BBA40 (74 bytes)
namespace lift_006BBA40 {
extern uint32_t mem_00B5D308;
extern uint32_t mem_00B5D30C;
extern uint32_t mem_00B5D310;
extern uint32_t mem_00B5D314;
extern uint32_t mem_00B5D318;
extern uint32_t mem_00B5D31C;
extern uint32_t mem_00B5D320;
extern uint32_t mem_00B5D324;
extern uint32_t mem_00925284;

// @name fn_006BBA40 (copyHugeDoubleToGlobals)
// @summary Copies the 8-byte double pointed to by the _HUGE pointer into four consecutive 8-byte globals.
void fn_006BBA40(void) {
    // mem_00925284 holds the address of _HUGE (a double); read its two 32-bit halves.
    const auto* src = reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(mem_00925284));
    const uint32_t lo = src[0];
    const uint32_t hi = src[1];

    mem_00B5D308 = lo;
    mem_00B5D30C = hi;
    mem_00B5D310 = lo;
    mem_00B5D314 = hi;
    mem_00B5D318 = lo;
    mem_00B5D31C = hi;
    mem_00B5D320 = lo;
    mem_00B5D324 = hi;
}
} // namespace lift_006BBA40

// [0x006B0720]
namespace lift_006B0720 {
extern void* ext_006A7BF0(void* self);
extern void ext_006A5FFE(void* self, void* hfont);
extern void* mem_00924094;  // IAT slot: GDI32!GetObjectA
extern void* mem_009240D4;  // IAT slot: GDI32!CreateFontIndirectA

// @name Unknown::RefreshFontFromObject_006B0720
// @class Unknown
// @summary If the sub-object at +0x90 has no font yet, copy the LOGFONT of the GDI object behind +0x14, clear its underline flag, create a font and attach it to the sub-object.
// @field Unknown +0x14 void* field_0x14
// @field Unknown +0x90 void* field_0x90
// @field Unknown +0x94 int32_t field_0x94
void fn_006B0720(void* self) {
    using GetObjectAFn = int(__stdcall*)(void*, int, void*);
    using CreateFontIndirectAFn = void*(__stdcall*)(const void*);

    void* sub = static_cast<uint8_t*>(self) + 0x90;
    if (sub != nullptr && lift_field<int32_t>(sub, 4) != 0) {
        return;
    }

    void* obj = lift_field<void*>(self, 0x14);
    void* gdiObj = ext_006A7BF0(obj);
    void* handle = lift_field<void*>(gdiObj, 4);

    alignas(4) uint8_t logfont[0x3c] = {};
    (*reinterpret_cast<GetObjectAFn*>(&mem_00924094))(handle, sizeof(logfont), logfont);
    logfont[0x15] = 0;  // lfUnderline

    void* hfont = (*reinterpret_cast<CreateFontIndirectAFn*>(&mem_009240D4))(logfont);
    ext_006A5FFE(sub, hfont);
}
} // namespace lift_006B0720

// [0x006BA320]
namespace lift_006BA320 {
extern int32_t __fastcall ext_006B99C0(void* self);
extern const char* (__cdecl* mem_0092527C)(const char* str, const char* control);

// @name String::findFirstOf
// @class String
// @summary Finds the index of the first character in the string (starting at startPos) that matches any character in control, or -1 if not found.
// @field String +0x00 const char* data
extern int32_t __thiscall fn_006BA320(void* self, const char* control, uint32_t startPos) {
    if (control == nullptr) {
        return -1;
    }

    uint32_t len = static_cast<uint32_t>(ext_006B99C0(self));
    uint32_t offset = (startPos <= len) ? startPos : static_cast<uint32_t>(ext_006B99C0(self));

    const char* data = *reinterpret_cast<const char* const*>(self);
    const char* found = mem_0092527C(data + offset, control);
    if (found == nullptr) {
        return -1;
    }

    return static_cast<int32_t>(found - data);
}
} // namespace lift_006BA320

// [0x006BB6E0]
namespace lift_006BB6E0 {
// @name sub_006BB6E0
// @summary Destructor/cleanup calling sub_007641C0 on +0x28 and sub_006D2160 on +0x0C
// @field <unknown> +0x0C <unknown> field_0x0C
// @field <unknown> +0x28 <unknown> field_0x28


extern void __fastcall ext_007641C0(void* self);
extern void __fastcall ext_006D2160(void* self);

extern void __fastcall fn_006BB6E0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    ext_007641C0(base + 0x28);
    ext_006D2160(base + 0x0C);
}
} // namespace lift_006BB6E0

// [0x006BB150]
namespace lift_006BB150 {
// @name findItemByKey
// @summary Searches an array of object pointers at +0xac (count at +0x9c) using ext_006E6E40 and returns the first matching pointer or 0.
// @field Unknown +0x9c int32_t field_0x9c
// @field Unknown +0xac uint32_t* field_0xac

extern uint8_t __thiscall ext_006E6E40(uint32_t self, uint32_t arg0);

uint32_t __thiscall sub_006BB150(uint32_t self, uint32_t arg0) {
    if (arg0 == 0) {
        return 0;
    }

    int32_t count = *reinterpret_cast<const int32_t*>(static_cast<uintptr_t>(self) + 0x9c);
    for (int32_t i = 0; i < count; ++i) {
        uint32_t items = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(self) + 0xac);
        uint32_t item = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(items) + static_cast<uintptr_t>(i) * 4u);
        if (ext_006E6E40(item, arg0) != 0) {
            uint32_t items_again = *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(self) + 0xac);
            return *reinterpret_cast<const uint32_t*>(static_cast<uintptr_t>(items_again) + static_cast<uintptr_t>(i) * 4u);
        }
    }

    return 0;
}
} // namespace lift_006BB150

// [0x006BC6F0] sub_006BC6F0 (64 bytes)
namespace lift_006BC6F0 {
// Known callee 0x006D2200: DynamicArray::removeAt (Removes the element at the given index by shifting subsequent elements left and decrementing the count.)
extern void ext_006D2200(void* self, int32_t index);

// @name Unknown::RemoveAndReleaseAt
// @class Unknown
// @summary Removes the element at the given index from the embedded DynamicArray, then releases it via its vtable (vfunc 1, then deleting vfunc 5 with arg 1).
// @field Unknown +0x3c DynamicArray elements
// @field Unknown +0x4c void** field_0x4c
void fn_006BC6F0(void* self, int32_t index) {
    if (index < 0) {
        return;
    }
    const int32_t count = lift_field<int32_t>(self, 0x3c);
    if (index >= count) {
        return;
    }
    void** data = lift_field<void**>(self, 0x4c);
    void* item = data[index];

    ext_006D2200(reinterpret_cast<uint8_t*>(self) + 0x3c, index);

    void** vtbl = *reinterpret_cast<void***>(item);
    reinterpret_cast<void (*)(void*)>(vtbl[1])(item);

    if (item == nullptr) {
        return;
    }
    vtbl = *reinterpret_cast<void***>(item);
    reinterpret_cast<void (*)(void*, int32_t)>(vtbl[5])(item, 1);
}
} // namespace lift_006BC6F0

// [0x006B8390]
namespace lift_006B8390 {
// @name CColorStatic::CtlColor
// @class CColorStatic
// @summary Sets transparent background, text color, and recreates solid brush for CtlColor
// @field CColorStatic +0x54 uint32_t m_crBkColor
// @field CColorStatic +0x58 uint32_t m_crTextColor
// @field CColorStatic +0x5c uint8_t[8] m_brBackground


extern void __thiscall ext_006A5FF2(void* self);
extern void __thiscall ext_006A5FFE(void* self, uint32_t hGdiObj);
extern void __thiscall ext_006A6010(void* self, int32_t mode);
extern uint32_t mem_0092407C;

typedef uint32_t (__stdcall *CreateSolidBrush_fn)(uint32_t color);
typedef void (__thiscall *SetTextColor_fn)(void* self, uint32_t color);

extern uint32_t __thiscall fn_006B8390(void* self, void* pDC, uint32_t nCtlColor) {
    (void)nCtlColor;
    uint8_t* thisPtr = static_cast<uint8_t*>(self);

    ext_006A6010(pDC, 1);

    uint32_t textColor = *reinterpret_cast<uint32_t*>(thisPtr + 0x58);
    uint32_t* vtable = *reinterpret_cast<uint32_t**>(pDC);
    SetTextColor_fn setTextColor = reinterpret_cast<SetTextColor_fn>(vtable[0x38 / 4]);
    setTextColor(pDC, textColor);

    uint8_t* brush = thisPtr + 0x5c;
    if (brush != nullptr && *reinterpret_cast<uint32_t*>(brush + 4) != 0) {
        ext_006A5FF2(brush);
    }

    uint32_t bkColor = *reinterpret_cast<uint32_t*>(thisPtr + 0x54);
    CreateSolidBrush_fn createSolidBrush = reinterpret_cast<CreateSolidBrush_fn>(mem_0092407C);
    uint32_t hBrush = createSolidBrush(bkColor);
    ext_006A5FFE(brush, hBrush);

    if (brush == nullptr) {
        return 0;
    }
    return *reinterpret_cast<uint32_t*>(brush + 4);
}
} // namespace lift_006B8390

// [0x006B8210]
namespace lift_006B8210 {
// @name sub_006B8210_dtor
// @summary Destructor that resets vtables, destroys member at +0x5c via MFC80!ord_1934, and calls base destructor MFC80!ord_657.
// @field Unknown +0x00 uint32_t vftable
// @field Unknown +0x5c uint32_t member_vftable


extern void __thiscall ext_006A5FF2(void* self);
extern void __thiscall ext_006A64A2(void* self);

extern void __thiscall fn_006B8210(uint8_t* self) {
    *reinterpret_cast<uint32_t*>(self) = 0x00992AF4u;
    uint8_t* member = self + 0x5C;
    *reinterpret_cast<uint32_t*>(member) = 0x0092A23Cu;
    ext_006A5FF2(member);
    ext_006A64A2(self);
}
} // namespace lift_006B8210

// [0x006B0CD0]
namespace lift_006B0CD0 {
// @name sub_006B0CD0_dtor
// @summary Destructor that resets vtable, destroys member at +0x64 via MFC80_ord_1934, and calls base destructor MFC80_ord_620.
// @field Self +0x00 uint32_t vtable
// @field Self +0x64 uint32_t member_0x64_vtable


extern void __thiscall ext_006A5FF2(void* self);
extern void __thiscall ext_006A5F38(void* self);

extern void __thiscall fn_006B0CD0(void* self) {
    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x00) = 0x00991364u;
    void* member_64 = base + 0x64;
    *reinterpret_cast<uint32_t*>(member_64) = 0x0092A23Cu;
    ext_006A5FF2(member_64);
    ext_006A5F38(self);
}
} // namespace lift_006B0CD0

// [0x006B4C50]
namespace lift_006B4C50 {
// @name sub_006B4C50_dtor
// @summary Destructor that resets vftables at +0x00 and +0x58 and destroys member and base subobjects


extern void __thiscall ext_006A5FF2(void* self);
extern void __thiscall ext_006A641E(void* self);

extern void __thiscall fn_006B4C50(void* self) {
    uint8_t* obj = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(obj + 0x00) = 0x00991C5Cu;
    void* member = obj + 0x58;
    *reinterpret_cast<uint32_t*>(member) = 0x0092A23Cu;
    ext_006A5FF2(member);
    ext_006A641E(obj);
}
} // namespace lift_006B4C50

// [0x006BA660]
namespace lift_006BA660 {
// @name String::compare
// @class String
// @summary Compare this string's buffer with another C-string, treating null pointers as mem_00B5D2C0
// @field String +0x00 const char* data


extern const char mem_00B5D2C0[];

int32_t __thiscall sub_006BA660(const char* const* self, const char* other) {
    const uint8_t* lhs = reinterpret_cast<const uint8_t*>(*self ? *self : mem_00B5D2C0);
    const uint8_t* rhs = reinterpret_cast<const uint8_t*>(other ? other : mem_00B5D2C0);

    while (true) {
        uint8_t a = *lhs;
        uint8_t b = *rhs;
        if (a != b) {
            return (a < b) ? -1 : 1;
        }
        if (a == 0) {
            return 0;
        }
        ++lhs;
        ++rhs;
    }
}
} // namespace lift_006BA660

// [0x006BAC20]
namespace lift_006BAC20 {
// @name sub_006BAC20_dtor
// @summary Destructor that sets vtable to 0x009931C4, destroys subobject at +0x9C, and destroys base subobject at +0x04.
// @field Unknown +0x00 uint32_t vtable
// @field Unknown +0x04 uint8_t base_subobject
// @field Unknown +0x9C uint8_t subobject_0x9C


extern void ext_006D2160(void);
extern void __thiscall ext_006DE460(void* self);

extern void __thiscall fn_006BAC20(void* self) {
    auto* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x00) = 0x009931C4u;
    (void)(base + 0x9C);
    ext_006D2160();
    ext_006DE460(base + 0x04);
}
} // namespace lift_006BAC20

// [0x006BA7C0]
namespace lift_006BA7C0 {
// @name String::equals
// @class String
// @summary Returns 1 if String::compare(self, other) is zero (equal), otherwise 0.

int32_t ext_006BA660(const char* const* self, const char* other);

int32_t sub_006BA7C0(const char* const* self, const char* other) {
    return ext_006BA660(self, other) == 0 ? 1 : 0;
}
} // namespace lift_006BA7C0

// [0x006BA780]
namespace lift_006BA780 {
// @name String::compareWithGetterResultIsEqual
// @class String
// @summary Calls the getter ext_006E7460 on the stack argument, compares this string with the result via String::compare, and returns 1 when the comparison is equal, else 0.

extern int32_t ext_006E7460(void* self);
int32_t ext_006BA660(const char* const* self, const char* other);

int32_t sub_006BA780(const char* const* self, void* arg) {
    int32_t key = ext_006E7460(arg);
    int32_t cmp = ext_006BA660(self, reinterpret_cast<const char*>(static_cast<intptr_t>(key)));
    return cmp == 0 ? 1 : 0;
}
} // namespace lift_006BA780

// [0x006BA7A0] sub_006BA7A0 (32 bytes)
namespace lift_006BA7A0 {
// Known callee 0x006BA660: String::compare (Compare this string's buffer with another C-string, treating null pointers as mem_00B5D2C0)
extern int32_t __thiscall ext_006BA660(const void* self, const char* other);
// Known callee 0x006E7460: sub_006E7460 (Getter returning int32_t field at offset +0x0.)
extern int32_t __fastcall ext_006E7460(void* self);

// @name String::compareNotEqual
// @class String
// @summary Fetches an int32 from the argument via ext_006E7460, compares this string against it, and returns 1 if the comparison is nonzero, else 0.
extern int32_t __thiscall fn_006BA7A0(void* self, void* arg) {
    const int32_t key = ext_006E7460(arg);
    const int32_t cmp = ext_006BA660(self, reinterpret_cast<const char*>(static_cast<intptr_t>(key)));
    return cmp != 0 ? 1 : 0;
}
} // namespace lift_006BA7A0

// [0x006BCEE0] sub_006BCEE0 (80 bytes)
namespace lift_006BCEE0 {
// Known callee 0x006BA780: Unknown::InitAndReturnSelf (Calls sub_006B9910 on the object (zero-inits fields, sets vtable) and returns the same object pointer.)
// Note: the caller tests AL after the call, so it is modeled here as returning a boolean-like byte.
extern uint8_t ext_006BA780(void* self, void* elem);

// @name Unknown::findFirstMatch
// @class Unknown
// @summary Scans the pointer array at +0xD4 (length at +0xC4) and returns the first element for which ext_006BA780(arg, element) is nonzero, or null if none match.
// @field Unknown +0xC4 int32_t field_0xC4
// @field Unknown +0xD4 void** field_0xD4
void* fn_006BCEE0(void* self, void* arg) {
    auto* base = static_cast<unsigned char*>(self);
    int32_t i = 0;
    while (i < *reinterpret_cast<int32_t*>(base + 0xC4)) {
        void** items = *reinterpret_cast<void***>(base + 0xD4);
        void* elem = items[i];
        if (ext_006BA780(arg, elem) != 0) {
            return elem;
        }
        ++i;
    }
    return nullptr;
}
} // namespace lift_006BCEE0

// [0x006B1790]
namespace lift_006B1790 {
// Callee 0x006B16F0: clears the byte at self+0x70, builds a 0x2C-byte message block from the child at self+0x74, and sends message 0x411 to the window at self+0x20.
extern int32_t ext_006B16F0(void* self, uint32_t arg0, uint32_t arg1);
// IAT slot for USER32!ClientToScreen(HWND, LPPOINT).
extern BOOL (*mem_00925630)(HWND, POINT*);
// IAT slot for USER32!ScreenToClient(HWND, LPPOINT).
extern BOOL (*mem_0092570C)(HWND, POINT*);
// IAT slot for USER32!SendMessageA(HWND, UINT, WPARAM, LPARAM).
extern LRESULT (*mem_00925694)(HWND, UINT, WPARAM, LPARAM);

// @name Unknown::forwardMouseMessageToChild_006B1790
// @class Unknown
// @summary Resets state via the 0x006B16F0 helper, converts the mouse point from parent-client to child-client coordinates, and posts it to the child window as WM_LBUTTONDOWN.
// @field Unknown +0x20 HWND hwnd
// @field Unknown +0x74 void* childPtr
void fn_006B1790(void* self, uint32_t a0, uint32_t a1, uint32_t a2) {
    ext_006B16F0(self, 0, 0);

    // pt = { a1, a2 } in the caller's client space.
    POINT pt;
    pt.x = static_cast<LONG>(a1);
    pt.y = static_cast<LONG>(a2);

    HWND parent = lift_field<HWND>(self, 0x20);
    mem_00925630(parent, &pt); // ClientToScreen

    HWND child = lift_field<HWND>(lift_field<void*>(self, 0x74), 0x20);
    mem_0092570C(child, &pt); // ScreenToClient

    // lParam = (pt.y & 0xFFFF) << 16 | (pt.x & 0xFFFF)
    const uint32_t lParam =
        (static_cast<uint32_t>(static_cast<uint16_t>(pt.y)) << 16) |
        static_cast<uint32_t>(static_cast<uint16_t>(pt.x));

    HWND target = lift_field<HWND>(lift_field<void*>(self, 0x74), 0x20);
    (void)mem_00925694(target, 0x201 /* WM_LBUTTONDOWN */, a0, lParam);
}
} // namespace lift_006B1790

// [0x006B40A0]
namespace lift_006B40A0 {
// @name time64ToSystemTime
// @summary Converts a 64-bit time_t value to a Windows SYSTEMTIME structure via _localtime64_s.
// @field SYSTEMTIME +0x00 uint16_t wYear
// @field SYSTEMTIME +0x02 uint16_t wMonth
// @field SYSTEMTIME +0x04 uint16_t wDayOfWeek
// @field SYSTEMTIME +0x06 uint16_t wDay
// @field SYSTEMTIME +0x08 uint16_t wHour
// @field SYSTEMTIME +0x0A uint16_t wMinute
// @field SYSTEMTIME +0x0C uint16_t wSecond
// @field SYSTEMTIME +0x0E uint16_t wMilliseconds


extern uint32_t mem_00925270;

uint8_t __thiscall sub_006B40A0(void* self, void* out_system_time) {
    struct Tm {
        int32_t tm_sec;
        int32_t tm_min;
        int32_t tm_hour;
        int32_t tm_mday;
        int32_t tm_mon;
        int32_t tm_year;
        int32_t tm_wday;
        int32_t tm_yday;
        int32_t tm_isdst;
    } tm_buf;

    using Localtime64SFn = int32_t(__cdecl*)(Tm*, const void*);
    auto localtime64_s_fn = reinterpret_cast<Localtime64SFn>(static_cast<uintptr_t>(mem_00925270));
    if (localtime64_s_fn(&tm_buf, self) != 0) {
        return 0;
    }

    auto* st = static_cast<uint16_t*>(out_system_time);
    st[0] = static_cast<uint16_t>(tm_buf.tm_year + 1900);
    st[1] = static_cast<uint16_t>(tm_buf.tm_mon + 1);
    st[2] = static_cast<uint16_t>(tm_buf.tm_wday);
    st[3] = static_cast<uint16_t>(tm_buf.tm_mday);
    st[4] = static_cast<uint16_t>(tm_buf.tm_hour);
    st[5] = static_cast<uint16_t>(tm_buf.tm_min);
    st[6] = static_cast<uint16_t>(tm_buf.tm_sec);
    st[7] = 0;
    return 1;
}
} // namespace lift_006B40A0

// [0x006B2BC0]
namespace lift_006B2BC0 {
// @name DestructSub6B2BC0
// @summary Destructor that resets vtable, destroys member at +0x50 via MFC80!ord_1934, and delegates to DestructSub6AD3C0.
// @field Sub6B2BC0 +0x00 uint32_t vtable
// @field Sub6B2BC0 +0x50 uint32_t member_0x50_vtable


extern void ext_006A5FF2(void);
void ext_006AD3C0(void* self);

void fn_006B2BC0(void* self) {
    *static_cast<uint32_t*>(self) = 0x00991878;
    uint8_t* base = static_cast<uint8_t*>(self);
    *reinterpret_cast<uint32_t*>(base + 0x50) = 0x0092a23c;
    ext_006A5FF2();
    ext_006AD3C0(self);
}
} // namespace lift_006B2BC0

// [0x006B8B10]
namespace lift_006B8B10 {
extern void ext_006A5EA8(void);
extern void* ext_006A5C62(size_t size);
extern void ext_006B9990(void* self, uint32_t* out);

// @name forwardToMfc80Ord1903
// @summary Tail-forwards to the MFC80 ord_1903 thunk, then returns popping 12 bytes of stdcall args.
extern void __stdcall sub_006B8B10(uint32_t, uint32_t, uint32_t)
{
    // Referenced by the original asm's function range but not reached from this entry.
    static void* const unused_refs[] = {
        reinterpret_cast<void*>(&ext_006A5C62),
        reinterpret_cast<void*>(&ext_006B9990),
    };
    (void)unused_refs;
    ext_006A5EA8();
}
} // namespace lift_006B8B10

// [0x006BC3F0]
namespace lift_006BC3F0 {
// @name ForwardCountItemsByType
// @class Unknown
// @summary Forwards a type filter to countItemsByType on the object pointed to by self+0x4.
// @field Unknown +0x04 void* field_0x04

extern int32_t __fastcall ext_006E9610(void* self, void* edx, int32_t type);

extern int32_t __fastcall fn_006BC3F0(void* self, void* edx, int32_t type) {
    void* inner = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x04);
    return ext_006E9610(inner, edx, type);
}
} // namespace lift_006BC3F0

// [0x006BC3A0] sub_006BC3A0 (16 bytes)
namespace lift_006BC3A0 {
// @name sub_006BC3A0
// @summary Auto-lifted identical-shape clone of 0x006BC3F0 (ForwardCountItemsByType).
namespace lift_006BC3F0 {
// @name ForwardCountItemsByType
// @class Unknown
// @summary Forwards a type filter to countItemsByType on the object pointed to by self+0x4.
// @field Unknown +0x04 void* field_0x04

extern int32_t __fastcall ext_006E9430(void* self, void* edx, int32_t type);

extern int32_t __fastcall fn_006BC3A0(void* self, void* edx, int32_t type) {
    void* inner = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x04);
    return ext_006E9430(inner, edx, type);
}
} // namespace lift_006BC3F0
} // namespace lift_006BC3A0

// [0x006BC400] sub_006BC400 (16 bytes)
namespace lift_006BC400 {
// @name sub_006BC400
// @summary Auto-lifted identical-shape clone of 0x006BC3F0 (ForwardCountItemsByType).
namespace lift_006BC3F0 {
// @name ForwardCountItemsByType
// @class Unknown
// @summary Forwards a type filter to countItemsByType on the object pointed to by self+0x4.
// @field Unknown +0x04 void* field_0x04

extern int32_t __fastcall ext_006E9680(void* self, void* edx, int32_t type);

extern int32_t __fastcall fn_006BC400(void* self, void* edx, int32_t type) {
    void* inner = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x04);
    return ext_006E9680(inner, edx, type);
}
} // namespace lift_006BC3F0
} // namespace lift_006BC400

// [0x006BC430] sub_006BC430 (16 bytes)
namespace lift_006BC430 {
// @name sub_006BC430
// @summary Auto-lifted identical-shape clone of 0x006BC3F0 (ForwardCountItemsByType).
namespace lift_006BC3F0 {
// @name ForwardCountItemsByType
// @class Unknown
// @summary Forwards a type filter to countItemsByType on the object pointed to by self+0x4.
// @field Unknown +0x04 void* field_0x04

extern int32_t __fastcall ext_006E97C0(void* self, void* edx, int32_t type);

extern int32_t __fastcall fn_006BC430(void* self, void* edx, int32_t type) {
    void* inner = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x04);
    return ext_006E97C0(inner, edx, type);
}
} // namespace lift_006BC3F0
} // namespace lift_006BC430

// [0x006B1AA0]
namespace lift_006B1AA0 {
// @name ctor_vtbl_00991768_with_arg
// @class Unknown
// @summary Runs base constructor sub_006B0C40 on this with arg0, then overwrites the vtable pointer with 0x00991768 and returns this.
// @field Unknown +0x00 uint32_t vtable

// Known callee 0x006B0C40: sub_006B0C40 (Constructor that initializes vtable to 0x00991348, clears field_0x04, and stores arg0 at field_0x0c.)
extern uint32_t __thiscall ext_006B0C40(void* self, uint32_t arg0);

void* __thiscall fn_006B1AA0(void* self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    lift_field<uint32_t>(self, 0x00) = 0x00991768u;
    return self;
}
} // namespace lift_006B1AA0

// [0x006B1C00] sub_006B1C00 (25 bytes)
namespace lift_006B1C00 {
// @name sub_006B1C00
// @summary Auto-lifted identical-shape clone of 0x006B1AA0 (ctor_vtbl_00991768_with_arg).
namespace lift_006B1AA0 {
// @name ctor_vtbl_00991768_with_arg
// @class Unknown
// @summary Runs base constructor sub_006B0C40 on this with arg0, then overwrites the vtable pointer with 0x00991768 and returns this.
// @field Unknown +0x00 uint32_t vtable

// Known callee 0x006B0C40: sub_006B0C40 (Constructor that initializes vtable to 0x00991348, clears field_0x04, and stores arg0 at field_0x0c.)
extern uint32_t __thiscall ext_006B0C40(void* self, uint32_t arg0);

void* __thiscall fn_006B1C00(void* self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    lift_field<uint32_t>(self, 0x00) = 0x991784u;
    return self;
}
} // namespace lift_006B1AA0
} // namespace lift_006B1C00

// [0x006B1E60] sub_006B1E60 (25 bytes)
namespace lift_006B1E60 {
// @name sub_006B1E60
// @summary Auto-lifted identical-shape clone of 0x006B1AA0 (ctor_vtbl_00991768_with_arg).
namespace lift_006B1AA0 {
// @name ctor_vtbl_00991768_with_arg
// @class Unknown
// @summary Runs base constructor sub_006B0C40 on this with arg0, then overwrites the vtable pointer with 0x00991768 and returns this.
// @field Unknown +0x00 uint32_t vtable

// Known callee 0x006B0C40: sub_006B0C40 (Constructor that initializes vtable to 0x00991348, clears field_0x04, and stores arg0 at field_0x0c.)
extern uint32_t __thiscall ext_006B0C40(void* self, uint32_t arg0);

void* __thiscall fn_006B1E60(void* self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    lift_field<uint32_t>(self, 0x00) = 0x9917A0u;
    return self;
}
} // namespace lift_006B1AA0
} // namespace lift_006B1E60

// [0x006B2400] sub_006B2400 (25 bytes)
namespace lift_006B2400 {
// @name sub_006B2400
// @summary Auto-lifted identical-shape clone of 0x006B1AA0 (ctor_vtbl_00991768_with_arg).
namespace lift_006B1AA0 {
// @name ctor_vtbl_00991768_with_arg
// @class Unknown
// @summary Runs base constructor sub_006B0C40 on this with arg0, then overwrites the vtable pointer with 0x00991768 and returns this.
// @field Unknown +0x00 uint32_t vtable

// Known callee 0x006B0C40: sub_006B0C40 (Constructor that initializes vtable to 0x00991348, clears field_0x04, and stores arg0 at field_0x0c.)
extern uint32_t __thiscall ext_006B0C40(void* self, uint32_t arg0);

void* __thiscall fn_006B2400(void* self, uint32_t arg0) {
    ext_006B0C40(self, arg0);
    lift_field<uint32_t>(self, 0x00) = 0x9917F4u;
    return self;
}
} // namespace lift_006B1AA0
} // namespace lift_006B2400

// [0x006B6270] sub_006B6270 (25 bytes)
namespace lift_006B6270 {
// @name sub_006B6270
// @summary Auto-lifted identical-shape clone of 0x00454BE0 (SetValueAndForward).
namespace lift_00454BE0 {
extern void __fastcall ext_006B0DE0(void* self, void* edx, int arg);
extern int __fastcall ext_004090C0(void* self);
extern int __fastcall ext_00455CB0(void* self);
extern void ext_006A60F4(void);
extern void ext_006A6304(void);

static volatile int g_never = 0;

// @name SetValueAndForward
// @class Object
// @summary Stores arg at this+0x120, then forwards it to the sub-object at this+0x10C via sub_00454BB0.
// @field Object +0x120 int value
void __fastcall fn_006B6270(void* self, void* edx, int arg)
{
    if (g_never) {  // never taken; keeps callee references from the original
        ext_004090C0(self);
        ext_00455CB0(self);
        ext_006A60F4();
        ext_006A6304();
    }
    *reinterpret_cast<int*>(reinterpret_cast<char*>(self) + 0x114) = arg;
    ext_006B0DE0(reinterpret_cast<char*>(self) + 0xA8, edx, arg);
}
} // namespace lift_00454BE0
} // namespace lift_006B6270

// [0x006B8B20] sub_006B8B20 (44 bytes)
namespace lift_006B8B20 {
// Known callee 0x006A5EA8: thunk_MFC80_ord_1903 (IAT jump thunk forwarding to MFC80!ord_1903.)
// Entered with `this` in ECX and no stack arguments.
extern void __thiscall ext_006A5EA8(void* self);

// IAT slot for USER32!IsWindow at 0x0092561C (stdcall, one HWND argument).
using lift_IsWindow_t = BOOL(__stdcall*)(HWND);
extern lift_IsWindow_t mem_0092561C;

// @name Unknown::storeWindowPtrIfValid_006B8B20
// @class Unknown
// @summary Stores *src into this+0x5C; if that pointer is non-null and IsWindow(ptr->+0x20) is false, clears this+0x5C to 0. Then calls ext_006A5EA8 with this in ECX.
// @field Unknown +0x5C void* field_0x5c
// @field Unknown +0x20 HWND field_0x20
void __thiscall fn_006B8B20(void* self, void** src) {
    void* const p = *src;
    lift_field<void*>(self, 0x5C) = p;
    if (p != nullptr) {
        HWND const hwnd = lift_field<HWND>(p, 0x20);
        if (mem_0092561C(hwnd) == 0) {
            lift_field<void*>(self, 0x5C) = nullptr;
        }
    }
    ext_006A5EA8(self);
}
} // namespace lift_006B8B20

// [0x006B9640] sub_006B9640 (46 bytes)
namespace lift_006B9640 {
// IAT slot for USER32!SendMessageA (rdata value 0x0062861A).
extern uint32_t mem_00925694;
// IAT slot for USER32!InvalidateRect (rdata value 0x0062864A).
extern uint32_t mem_00925688;

// @name Window::sendMessage410AndInvalidate
// @class Window
// @summary Sends window message 0x19A to the HWND at this+0x20 with the two stack arguments as wParam/lParam, then invalidates that window's whole client area (InvalidateRect with erase=TRUE).
// @field Window +0x20 uint32_t field_0x20
void __thiscall fn_006B9640(void* self, uint32_t wParam, uint32_t lParam) {
    using SendMessageAFn = uint32_t(__stdcall*)(uint32_t hWnd, uint32_t msg, uint32_t wp, uint32_t lp);
    using InvalidateRectFn = int(__stdcall*)(uint32_t hWnd, const void* rect, int erase);

    const uint32_t hwnd = lift_field<uint32_t>(self, 0x20);

    auto send_message = reinterpret_cast<SendMessageAFn>(static_cast<uintptr_t>(mem_00925694));
    (void)send_message(hwnd, 0x19A, wParam, lParam);

    auto invalidate_rect = reinterpret_cast<InvalidateRectFn>(static_cast<uintptr_t>(mem_00925688));
    (void)invalidate_rect(hwnd, nullptr, 1);
}
} // namespace lift_006B9640

// [0x006B9CE0]
namespace lift_006B9CE0 {
// @name StrContainsChar_006B9CE0
// @summary Returns TRUE if byte c occurs in the NUL-terminated string s (c == 0 never matches; NULL s returns FALSE).
// (stdcall, 2 stack args, returns BOOLEAN in al; ret 8)
extern BOOLEAN __stdcall StrContainsChar_006B9CE0(CHAR c, const CHAR* s) {
    if (s == nullptr) {
        return FALSE;
    }
    const uint8_t target = static_cast<uint8_t>(c);
    for (const uint8_t* p = reinterpret_cast<const uint8_t*>(s); ; ++p) {
        const uint8_t ch = *p;
        if (ch == 0) {
            return FALSE;
        }
        if (ch == target) {
            return TRUE;
        }
    }
}
} // namespace lift_006B9CE0

// [0x006BA2F0] sub_006BA2F0 (48 bytes)
namespace lift_006BA2F0 {
// IAT slot at 0x00925278 holds MSVCR80!strrchr; the portable lift calls std::strrchr directly.
extern int mem_00925278;

// @name StrLastIndexOfChar_006BA2F0
// @summary Returns the byte offset of the last occurrence of char c in the string at this+0 (strrchr), or -1 if absent.
// @field Unknown +0x00 char* str
int __thiscall fn_006BA2F0(void* self, int8_t c) {
    (void)&mem_00925278;  // original asm: call dword ptr [0x925278] (strrchr IAT slot)
    char* const str = *reinterpret_cast<char**>(self);
    const char* const hit = std::strrchr(str, static_cast<int>(c));
    if (hit == nullptr) {
        return -1;
    }
    return static_cast<int>(hit - str);
}
} // namespace lift_006BA2F0

// [0x006B2230]
namespace lift_006B2230 {
// @name sub_006B2230
// @summary Constructor calling base constructor sub_006B0C40, setting vtable to 0x009917d8, and storing four byte fields at +0x10..+0x13.
// @field unknown +0x00 uint32_t vtable
// @field unknown +0x10 uint8_t field_0x10
// @field unknown +0x11 uint8_t field_0x11
// @field unknown +0x12 uint8_t field_0x12
// @field unknown +0x13 uint8_t field_0x13


extern uint32_t __thiscall ext_006B0C40(uint32_t self, uint32_t arg0);
extern void ext_006A64AE(void);
extern void ext_006A5CEC(void);

uint32_t __thiscall sub_006B2230(
    uint32_t self,
    uint32_t arg0,
    uint8_t arg1,
    uint8_t arg2,
    uint8_t arg3,
    uint8_t arg4) {
    ext_006B0C40(self, arg0);
    void* self_ptr = reinterpret_cast<void*>(static_cast<uintptr_t>(self));
    lift_field<uint32_t>(self_ptr, 0x00) = 0x009917d8u;
    lift_field<uint8_t>(self_ptr, 0x10) = arg1;
    lift_field<uint8_t>(self_ptr, 0x11) = arg3;
    lift_field<uint8_t>(self_ptr, 0x12) = arg2;
    lift_field<uint8_t>(self_ptr, 0x13) = arg4;
    if (false) {
        ext_006A5CEC();
        ext_006A64AE();
    }
    return self;
}
} // namespace lift_006B2230
